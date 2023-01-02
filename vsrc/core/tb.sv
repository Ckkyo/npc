//`timescale 1ns/1ns;

`include "./vsrc/core/include/defines.v"
import "DPI-C" function void dut_read_mem_with_len (input longint  unsigned vaddr,output longint  unsigned value,input int len);
import "DPI-C" function void dut_write_mem_with_len(input longint  unsigned vaddr,input  longint  unsigned value,input int len);
`define LSU_DELAY  0  
`define IFU_DELAY  0
 function void inst_fetch(
     input [63:0]           ifu_memory_addr
    ,input                  ifu_memory_valid
    ,output logic [31:0]    memory_ifu_data
    ,output logic           memory_ifu_valid
    );
    if(ifu_memory_valid)begin
        if(ifu_memory_addr<'h80000000||ifu_memory_addr>=('h80000000+128*1024*1024))begin
            $display("pc out of range pc = %h ===================\n",ifu_memory_addr);
            //$finish();
            //ASSERT(0,"inst_fetch:ifu_memory_addr==0\n");
        end 
        else begin
            logic [63:0] inst;
            `ifdef DEBUG_INFO
            $display("inst fetch  addr = %h ",ifu_memory_addr);
            `endif
            dut_read_mem_with_len(ifu_memory_addr,inst,4);
            memory_ifu_data=inst[31:0];
            memory_ifu_valid =  1;
        end
    end 
    else begin
        memory_ifu_data    =  0 ;
        memory_ifu_valid   =  0 ;
    end
 endfunction


module tb(
     input core_clk
    ,input core_rst

    //单总线读写
    //,output[63:0] lsu_memory_data    //lsu    -> memory 数据
    //,input [63:0] memory_lsu_data    //memory -> lsu    数据
    //,output[63:0] lsu_memory_addr    //lsu地址
    //,output       lsu_memory_dir     //lsu方向 0 == 读，1 == 写
    //,output       lsu_memory_valid   //lsu使能
    //,output[3:0]  lsu_memory_width   //byte
    //,input        memory_lsu_ready   //内存空闲
    //,input        memory_lsu_valid

    //,input  [31:0] memory_ifu_data    //ifu数据
    //,output [63:0] ifu_memory_addr    //ifu地址
    //,output        ifu_memory_valid
    //,input         memory_ifu_valid

    ,output         ebreak
    ,output   [63:0] regfile [32]

    ,output   [63:0]       el_pc
    ,output  reg [63:0]    lw_pc_delay
    ,output  reg           lw_valid_delay

);
logic   [63:0] lsu_memory_data  ;
logic   [63:0] memory_lsu_data  ;
logic   [63:0] lsu_memory_addr  ;
logic          lsu_memory_dir   ;
logic          lsu_memory_valid ;
logic   [3:0]  lsu_memory_width ;
logic          memory_lsu_ready ;
logic          memory_lsu_valid ;
logic   [31:0] memory_ifu_data  ;
logic   [63:0] ifu_memory_addr  ;
logic          ifu_memory_valid ;
logic          memory_ifu_valid ;
    core_top u_core_top(
         .core_clk           (core_clk)
        ,.core_rst           (core_rst)
        ,.lsu_memory_data    (lsu_memory_data )//lsu数据
        ,.memory_lsu_data    (memory_lsu_data )//memory数据
        ,.lsu_memory_addr    (lsu_memory_addr )//lsu地址
        ,.lsu_memory_dir     (lsu_memory_dir  )//lsu方向 0 == 读，1 == 写
        ,.lsu_memory_valid   (lsu_memory_valid)//lsu使能
        ,.lsu_memory_width   (lsu_memory_width)//byte
        ,.memory_lsu_ready   (memory_lsu_ready)//内存空闲
        ,.memory_lsu_valid   (memory_lsu_valid)
        ,.memory_ifu_data    (memory_ifu_data)//ifu数据
        ,.ifu_memory_addr    (ifu_memory_addr)//ifu地址
        ,.ifu_memory_valid   (ifu_memory_valid)
        ,.memory_ifu_valid   (memory_ifu_valid)
    );
    
//always @(*) begin
//    if(core_rst)begin 
//        memory_ifu_data = 0;
//        memory_ifu_valid = 0;
//    end
//    else begin 
//        inst_fetch(
//        ifu_memory_addr
//        ,ifu_memory_valid
//        ,memory_ifu_data
//        ,memory_ifu_valid
//        );
//        $display("111");
//    end
//
//end

//取指
//parameter IFU_DELAY = 5;
//always @(*) begin
//        inst_fetch(
//        ifu_memory_addr
//        ,ifu_memory_valid
//        ,memory_ifu_data
//        ,memory_ifu_valid
//        );
//end
i_cache u_i_cache(
     .core_clk         (core_clk        )     
    ,.ifu_memory_addr  (ifu_memory_addr )            
    ,.ifu_memory_valid (ifu_memory_valid)             
    ,.memory_ifu_data  (memory_ifu_data )            
    ,.memory_ifu_valid (memory_ifu_valid)             

);



//内存读写

reg [63:0] memory_lsu_data_delay[`LSU_DELAY-1:0];
reg        memory_lsu_valid_delay[`LSU_DELAY-1:0];
always @(posedge core_clk) begin
    if(core_rst)begin 
        ;
    end
    else begin 
        load_store(
         lsu_memory_addr
        ,lsu_memory_data
        ,lsu_memory_valid
        ,lsu_memory_width
        ,lsu_memory_dir
        ,memory_lsu_data_delay[`LSU_DELAY]
        ,memory_lsu_valid_delay[`LSU_DELAY]
        );
    end
end

always @(posedge core_clk) begin:delay_lsu
    int i;
    for(i=0;i<=`LSU_DELAY;i=i+1)begin 
        if(i==0)begin 
            ;
        end
        else begin 
            memory_lsu_data_delay[i-1] <= memory_lsu_data_delay[i];
            memory_lsu_valid_delay[i-1] <= memory_lsu_valid_delay[i];
        end
    end    
end
always @(*) begin
    memory_lsu_data  = memory_lsu_data_delay[0];
    memory_lsu_valid = memory_lsu_valid_delay[0];
end









`define REFGILE1 u_core_top.u_regfile.rf1
`define REFGILE2 u_core_top.u_regfile.rf2
`define CYC_END u_core_top.cyc_end
`define LW_DFF u_core_top.lw_dff
     
wire [`LW_REG_INFO_WIDTH-1:0]lw_info;
assign lw_info = `LW_DFF[`LW_REG_INFO];
assign ebreak = (lw_info[`EBREAK])&(lw_info[`DECODE_INFO_ALU_BIT]);
wire [63:0] lw_pc    = `LW_DFF[`LW_REG_PC];
//assign lw_valid = `LW_DFF[`LW_REG_VALID];
assign regfile  = `REFGILE1;

`define EL u_core_top.el_dff
assign el_pc = `EL[`EL_REG_PC];

always @(posedge core_clk) begin
    lw_pc_delay       <= `LW_DFF[`LW_REG_PC]     ;
    lw_valid_delay    <= `LW_DFF[`LW_REG_VALID]  ;
    //regfile     <= `REFGILE1               ;
end
















 function void load_store(
     input [63:0]           lsu_memory_addr
    ,input [63:0]           lsu_memory_data
    ,input                  lsu_memory_valid
    ,input [3:0]            lsu_memory_width
    ,input                  lsu_memory_dir
    ,output logic [63:0]    memory_lsu_data
    ,output logic           memory_lsu_valid
    );
    if(lsu_memory_valid)begin
        //$display("---lsu_memory_addr = %x  dir=%x   width = %x",lsu_memory_addr,lsu_memory_dir,lsu_memory_width);
        if((lsu_memory_addr<'h80000000||lsu_memory_addr>=('h80000000+128*1024*1024))
            &&(lsu_memory_addr!=`SERIAL_PORT)
            &&(lsu_memory_addr!=`FB_ADDR   )
            &&(lsu_memory_addr!=`RTC_ADDR    )
            &&(lsu_memory_addr!=`RTC_ADDR + 4)
            &&(lsu_memory_addr!=`KBD_ADDR)
        )begin
            //`ifdef DEBUG_INFO
            $display("lsu_memory_addr out of range lsu_memory_addr = %h  pc=%h \n",lsu_memory_addr,el_pc);
            //`endif
            $finish();
            //ASSERT(0,"inst_fetch:ifu_memory_addr==0\n");
        end 
        //read
        if(lsu_memory_dir==0)begin 
            logic [63:0] data;
            //$display("lsu_memory_addr  = %h ",lsu_memory_addr);
            dut_read_mem_with_len(lsu_memory_addr,data,lsu_memory_width);
            `ifdef DEBUG_INFO
            $display("---lsu_memory_addr = %x  data=%x   width = %x",lsu_memory_addr,data,lsu_memory_width);
            `endif
            memory_lsu_data  =  data;
            memory_lsu_valid =  1;
        end 
        else begin//write
            dut_write_mem_with_len(lsu_memory_addr,lsu_memory_data,lsu_memory_width);
            `ifdef DEBUG_INFO
            $display("---write lsu_memory_addr = %x  data=%x   width = %x",lsu_memory_addr,lsu_memory_data,lsu_memory_width);
            `endif
            memory_lsu_valid =  1;
        end
    end 
    else begin
        memory_lsu_data    =  0 ;
        memory_lsu_valid   =  0 ;
    end
 endfunction






endmodule
//endprogram










module i_cache(
     input core_clk
    ,input [63:0] ifu_memory_addr
    ,input ifu_memory_valid
    ,output [31:0] memory_ifu_data
    ,output memory_ifu_valid

);
logic [31:0] memory_ifu_data_reg  ;
logic        memory_ifu_valid_reg ;

int rand_valid;
always @(posedge core_clk) begin
    rand_valid = $urandom_range(0,`IFU_DELAY);
end
always @(*) begin
    if(rand_valid!=0)begin 
        memory_ifu_data_reg   = 0;
        memory_ifu_valid_reg  = 0;
    end
    else begin 
        inst_fetch(
        ifu_memory_addr
        ,ifu_memory_valid
        ,memory_ifu_data_reg 
        ,memory_ifu_valid_reg
        );
    end
end

assign memory_ifu_data  = memory_ifu_data_reg;
assign memory_ifu_valid = memory_ifu_valid_reg;



endmodule






















