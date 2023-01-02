// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC01.0
//======================================================================

//
//#define ENABLE_VCD

// For std::unique_ptr
#include <memory>

// Include common routines
#include <verilated.h>
//////////////////////////////////////////
// Include model header, generated from Verilating "top.v"
#include "Vtb.h"
#define Vtop Vtb
#include "mem.h"
#include "common.h"
#include <dlfcn.h>
#include "verilated_vcd_c.h"
int init_sim(Vtop *top,int argc,char **argv);
int inst_fetch(Vtop *top);
int load_store(Vtop *top);


void init_difftest(char *ref_so_file, char *file);


void (*ref_difftest_memcpy)(__uint32_t addr, void *buf, size_t n, bool direction)     = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction)                                = NULL;
void (*ref_difftest_exec)(uint64_t n)                                                 = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO)                                          = NULL;
void (*ref_difftest_init)(int port)                                                   = NULL;
void (*ref_difftest_init_img)(char *file)                                             = NULL;
char ref_so_file []= "/home/ck/do_sth_here/ysyx/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so" ;

bool ref_to_dut = 0;
bool dut_to_ref = 1;
uint64_t gpr_10;
int check_gpr(Vtop *top);


//////////////////////////////////////////
// Legacy function required only so linking works on Cygwin and MSVC++
double sc_time_stamp() { return 0; }

void restart_dut(Vtop *top ,VerilatedContext *contextp ,VerilatedVcdC *tfp){
    printf("restart dut \n");
    top->core_rst = 1 ;
    
    for(int i = 0;   ; i ++){
        contextp->timeInc(1);
        top->core_clk = !top->core_clk;
        top->eval();
        tfp->dump(contextp->time());
        if(top->core_clk == 1 && i > 10){
            top -> core_rst = 0;
            break;
        }
        printf("restart dut \n");
    }
}
//dut执行一个周期
void exec_onc_cyc_dut(Vtop *top,VerilatedContext *contextp ,VerilatedVcdC *tfp  ){
    contextp->timeInc(1);
    top->core_clk = !top->core_clk;
    top->eval();
    #ifdef ENABLE_VCD
    tfp->dump(contextp->time());
    #endif 
    contextp->timeInc(1);
    top->core_clk = !top->core_clk;
    top->eval();
    #ifdef ENABLE_VCD
    tfp->dump(contextp->time());
    #endif
}
void exec_n_cyc_dut(Vtop *top,uint64_t n,VerilatedContext *contextp ,VerilatedVcdC *tfp){
    for(int i = 0; i < n ; i++ ){
        exec_onc_cyc_dut(top,contextp,tfp);
    }
}

//打印dut的寄存器信息
void print_dut_regfile(Vtop *top){
    __uint64_t *regfile = top->regfile;
    static char registers [32][8] = {
        "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
        "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
        "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
        "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
    };
    for(int i=0;i<16;i++){
        if(i==0){
            printf("%s\t %016lx\t%20ld\t",registers[2*i],  0l  ,0l);
            printf("%s\t %016lx\t%20ld\n",registers[2*i+1],regfile[2*i+1],regfile[2*i+1]);
        }else{
            printf("%s\t %016lx\t%20ld\t",registers[2*i],  regfile[2*i]  ,regfile[2*i]);
            printf("%s\t %016lx\t%20ld\n",registers[2*i+1],regfile[2*i+1],regfile[2*i+1]);
        }
    }
}
int main(int argc, char** argv, char** env) {
    printf("mainmainmainmainmainmain\n\n");
    
    // This is a more complicated example, please also see the simpler examples/make_hello_c.

    // Prevent unused variable warnings
    if (false && argc && argv && env) {}

    // Create logs/ directory in case we have traces to put under it
    Verilated::mkdir("logs");
    //const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    VerilatedContext *contextp = new VerilatedContext() ;
    VerilatedVcdC    *tfp      = new VerilatedVcdC();

    // Construct a VerilatedContext to hold simulation time, etc.
    // Multiple modules (made later below with Vtop) may share the same
    // context to share time, or modules may have different contexts if
    // they should be independent from each other.

    // Using unique_ptr is similar to
    // "VerilatedContext* contextp = new VerilatedContext" then deleting at end.
    
    // Set debug level, 0 is off, 9 is highest presently used
    // May be overridden by commandArgs argument parsing
    contextp->debug(0);

    // Randomization reset policy
    // May be overridden by commandArgs argument parsing
    contextp->randReset(2);

    // Verilator must compute traced signals
    contextp->traceEverOn(true);


    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v".
    // Using unique_ptr is similar to "Vtop* top = new Vtop" then deleting at end.
    // "TOP" will be the hierarchical name of the module.
    //const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};
    Vtop *top = new Vtop;
    // Set Vtop's input signals

     //导出vcd波形需要加此语句
    //Vour_OnOff *_top = new Vour_OnOff("top");
    #ifdef ENABLE_VCD
    top->trace(tfp, 0);
    tfp->open("wave.vcd"); //打开vcd
    #endif 
    
    if(init_sim(top,argc,argv)!=0){
        printf("init_sim failed");
        return 1;
    }

    // Simulate until $finish
    restart_dut(top,contextp ,tfp);
    //ref_difftest_exec(-1);
    while (!contextp->gotFinish()) {



        //dut执行一个周期
        //printf("——————————————————————————————周期开始——————————————————————————————\n");
        exec_onc_cyc_dut(top,contextp,tfp);

        #ifdef DEBUG_INFO
            if(top->lw_valid_delay == 1){
                printf("ref_difftest_exec\n");
                ref_difftest_exec(1);
                if(check_gpr(top)!=0){
                    //return 1;
                    gpr_10 = 1;
                    //出错了把dut的寄存器信息打印出来
                    print_dut_regfile(top);
                    break;
                }else{
                    print_dut_regfile(top);
                }
                //check_gpr(top);


            }

            //打印分隔符

            printf("========================我是一个分隔符========================\n\n");
        #endif


        
        //tfp->dump(contextp->time()); //导出vcd波形需要加此语句


        //check ebreak
        if(top->ebreak){
            if(top->regfile[10]!=0){
                printf("npc hit bad trap\n");
                
            }else{
                printf("npc hit good trap\n");
            }
            gpr_10 = top->regfile[10];
            break ;
        }


        if(contextp->time()>100){
            //break;
            ;
        }
    }

    // Final model cleanup
    top->final();
    tfp->close();

    // Coverage analysis (calling write only after the test is known to pass)
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif

    // Return good completion status
    // Don't use exit() or destructor won't get called
    if(gpr_10!=0){
        printf("npc hit bad trap\n");
        return 1;
    }else{
        printf("npc hit good trap\n");
    }
    return 0;
}

int init_sim(Vtop *top,int argc,char **argv){
    printf("init_sim\n");
    top->core_rst = 1;
    top->core_clk = 0;
    if(argc==1){
        printf("请指定img文件路径\n");
        return 1;
    }else{
        printf("img文件路径为%s\n",argv[2]);
        mem_init(argv[2]);
    }
    #ifdef DEBUG_INFO
    init_difftest(ref_so_file,argv[2]);
    #endif
 

    return 0;

}
// int inst_fetch(Vtop *top){
//    if(top->ifu_memory_valid){
//        if(top->ifu_memory_addr==0){
//            printf("pc out of range ===================\n");
//            return 1;
//            //ASSERT(0,"inst_fetch:ifu_memory_addr==0\n");
//        }else{
//            __uint64_t inst;
//            read_mem_with_len(top->ifu_memory_addr,&inst,4);
//            top->memory_ifu_data=inst;
//            top->memory_ifu_valid =  1;
//        }
//    }else{
//        top->memory_ifu_data    =  0 ;
//        top->memory_ifu_valid   =  0 ;
//    }
//    return 0;
//}
//
//
//int load_store(Vtop *top){
//    if(top->lsu_memory_valid){
//        if((top->lsu_memory_addr<0x80000000)||(top->lsu_memory_addr>=(0x80000000+128*1024*1024))){
//            printf("el_pc = %016lx load store out of range=============\n",top->el_pc);
//            return 1;
//
//        }
//        if(top->lsu_memory_dir){
//            write_mem_with_len(top->lsu_memory_addr,top->lsu_memory_data,top->lsu_memory_width);
//        }else{
//            read_mem_with_len(top->lsu_memory_addr,&(top->memory_lsu_data),top->lsu_memory_width);
//        }
//    }
//    return 0;
//}










void init_difftest(char *ref_so_file, char *file) {
    printf("init_difftest\n");
    printf("ref_so_file = %s\n",ref_so_file);
  assert(ref_so_file != NULL);
  
  void *handle;
  handle = (void *)dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(__uint32_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  //void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
  //assert(ref_difftest_init);

  ref_difftest_init_img = (void (*)(char*))dlsym(handle, "difftest_init_img");
  assert(ref_difftest_init_img);

  //ref_difftest_init(port);

    ref_difftest_init_img(file);
  //ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  //ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

int check_gpr(Vtop *top){
    printf("check gpr\n");
    __uint64_t ref_gpr[33] ;
     ref_difftest_regcpy(ref_gpr,ref_to_dut);
     for(int i=1;i<33;i++){
        if(i==32){
            if(top->lw_pc_delay!=ref_gpr[i]){
                 printf("pc error ref_pc = %016lx dut_pc = %016lx\n",ref_gpr[32],top->lw_pc_delay);
                 return 1;
            }
        }else{
            if(top->regfile[i]!=ref_gpr[i]){
                 printf("gpr[%d] error  ref_gpr:%016lx\tdut_gpr:%016lx\tpc = %016lx\n",i,ref_gpr[i],top->regfile[i],top->lw_pc_delay);
                 return 1;
            }
        }
    }
    return 0;
}