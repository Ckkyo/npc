/*
非流水线模型，而是类似状态机的执行，使用core_clk_en对不同的模块进行驱动
ifu使用第一个clk_en....
假设存储器的读取周期为0个时钟周期，那么ifu的读取周期为1个时钟周期


*/
`include "./vsrc/core/include/defines.v"
module core_top(
     input core_clk
    ,input core_rst

    //单总线读写 
    ,output[63:0] lsu_memory_data    //lsu    -> memory 数据
    ,input [63:0] memory_lsu_data    //memory -> lsu    数据
    ,output[63:0] lsu_memory_addr    //lsu地址
    ,output       lsu_memory_dir     //lsu方向 0 == 读，1 == 写
    ,output       lsu_memory_valid   //lsu使能
    ,output[3:0]  lsu_memory_width   //byte
    ,input        memory_lsu_ready   //内存空闲
    ,input        memory_lsu_valid   //内存返回数据有效

    ,input  [31:0] memory_ifu_data    //ifu数据
    ,output [63:0] ifu_memory_addr    //ifu地址
    ,output        ifu_memory_valid
    ,input         memory_ifu_valid

);


wire [63:0] pc                  ; //program counter
wire        pc_valid            ;
wire        pc_clear_all        ;




wire        cyc_end             ;
wire [5:0]  clk_en              ;
wire        clk_en_ifu          ;
wire        clk_en_dfu          ;
wire        clk_en_exu          ;
wire        clk_en_lsu          ;
wire        clk_en_wbu          ;
wire [31:0] ifu_dfu_inst        ;
wire [63:0] ifu_dfu_pc          ;
wire        ifu_dfu_valid       ;
wire        ifu_pc_pause        ;
wire [4:0]  dfu_exu_src1                     ;
wire [4:0]  dfu_exu_src2                     ;
wire [4:0]  dfu_wbu_dst                      ;
wire [31:0] dfu_exu_imm                      ;
wire [5:0]  dfu_inst_type                    ;
wire        dfu_exu_valid                    ;
wire [`DECODE_INFO_WIDTH -1:0] dfu_info ;
wire [4:0]                   exu_rf_raddr1          ;      //
wire [4:0]                   exu_rf_raddr2          ;          //
wire [63:0]                  exu_wbu_dst_data       ;
wire [63:0]                  exu_lsu_addr           ;          
wire [63:0]                  exu_lsu_data           ;  
//wire [63:0]                  branch_wbu_dst_data    ;              
wire [63:0]                  branch_ifu_pc          ;      
wire                         branch_ifu_taken       ;      
wire                         exu_valid              ;    
wire [63:0] lsu_wbu_data       ;
wire        lsu_valid          ;
wire        lsu_pause_before   ;
wire [`DECODE_INFO_LSU_WIDTH-1:0] dfu_lsu_info;
wire lsu_en ;
wire [4:0] wbu_rf_waddr ;  //if type is S or B,then waddr equal 0 just fine
wire [63:0]wbu_rf_wdata ;
wire       wbu_rf_en    ;
wire [63:0]    rf_exu_rdata1 ;
wire [63:0]    rf_exu_rdata2 ;

//wire [63:0]   muldiv_wbu_dst_data;

//always @(posedge core_clk or posedge core_rst) begin
//    if(core_rst)begin 
//        pc <= RESET_VAL;
//    end
//    else if(cyc_end) begin
//        pc <= pc + 4;
//    end
//end



assign      clk_en_ifu = clk_en[0];
assign      clk_en_dfu = clk_en[1];
assign      clk_en_exu = clk_en[2];
assign      clk_en_lsu = clk_en[3];
assign      clk_en_wbu = clk_en[4];
wire        core_pc_update = clk_en[5];
assign      cyc_end = clk_en[5];
clk_div u_clk_div(

    .core_clk(core_clk),
    .core_rst(core_rst),
    .clk_en  (clk_en)
);


ifu u_ifu(
     .core_clk                   (core_clk          )
    ,.core_rst                   (core_rst          )
    //,.core_clk_en                ()
    //,.core_pc_update             ()

    ,.memory_ifu_data            (memory_ifu_data   )    //ifu数据
    ,.ifu_memory_addr            (ifu_memory_addr   )    //ifu地址
    ,.ifu_memory_valid           (ifu_memory_valid  )
    ,.memory_ifu_valid           (memory_ifu_valid  )

    ,.ifu_dfu_inst               (ifu_dfu_inst      )
    ,.ifu_dfu_pc                 (ifu_dfu_pc        )
    ,.ifu_dfu_valid              (ifu_dfu_valid     )
    ,.ifu_pc_pause               (ifu_pc_pause      )

    //,.branch_ifu_pc             (branch_ifu_pc      )
    //,.branch_ifu_taken          (branch_ifu_taken   )
    ,.pc                         (pc                )
    ,.pc_valid                   (pc_valid          )
);

dfu u_dfu(
     .core_clk          (core_clk)       
    //,.core_clk_en       ()    
    ,.core_rst          (core_rst)       
    ,.pc                (id_dff[`ID_REG_PC])
    ,.ifu_dfu_inst      (id_dff[`ID_REG_INST]) 
    ,.ifu_dfu_valid     (id_dff[`ID_REG_VALID])      

    ,.dfu_exu_src1      (dfu_exu_src1)       
    ,.dfu_exu_src2      (dfu_exu_src2)       
    ,.dfu_wbu_dst       (dfu_wbu_dst )        
    ,.dfu_exu_imm       (dfu_exu_imm )        
    ,.dfu_info          (dfu_info) 
    ,.dfu_inst_type     (dfu_inst_type)
    ,.dfu_exu_valid     (dfu_exu_valid)
);
// input                          core_clk
//,input                          core_rst
//,input                          core_clk_en
//,input [63:0]                   pc
//,input [4:0]                    dfu_exu_src1 //
//,input [4:0]                    dfu_exu_src2 //
//,input [31:0]                   dfu_exu_imm  //
//,input [`DECODE_INFO_WIDTH-1:0] dfu_info     //


exu_top u_exu_top(
     .core_clk            (core_clk           )                
    ,.core_rst            (core_rst           )            
    //,.core_clk_en         (         )                
    ,.pc                  (de_dff[`DE_REG_PC    ]   )                    
    ,.dfu_exu_src1        (de_dff[`DE_REG_SRC1  ]   )                                                                        
    ,.dfu_exu_src2        (de_dff[`DE_REG_SRC2  ]   )                                                                        
    ,.dfu_exu_imm         (de_dff[`DE_REG_IMM   ]   )                                                                        
    ,.dfu_info            (de_dff[`DE_REG_INFO  ]   )  
    ,.dfu_exu_valid       (de_dff[`DE_REG_VALID ]   )  

    ,.exu_rf_raddr1       (exu_rf_raddr1      )                                    
    ,.exu_rf_raddr2       (exu_rf_raddr2      )                                    
    ,.rf_exu_rdata1       (rf_exu_rdata1      )                                    
    ,.rf_exu_rdata2       (rf_exu_rdata2      )                                    
    ,.exu_wbu_dst_data    (exu_wbu_dst_data   )                                                
    ,.exu_lsu_addr        (exu_lsu_addr       )
    ,.exu_lsu_data        (exu_lsu_data       )                                                    
    //,.branch_wbu_dst_data (branch_wbu_dst_data)                            
    ,.branch_ifu_pc       (branch_ifu_pc      )                    
    ,.branch_ifu_taken    (branch_ifu_taken   )  
    //,.muldiv_wbu_dst_data (muldiv_wbu_dst_data)  
    ,.exu_valid           (exu_valid)                    
);

//lsu


//assign dfu_lsu_info = dfu_info[`DECODE_INFO_LSU_WIDTH-1:0]  ;
//assign lsu_en       = dfu_info[`DECODE_INFO_LSU_BIT]        ;
lsu u_lsu(
     .core_clk        (core_clk        )              
    ,.core_rst        (core_rst        )              
    //,.core_clk_en     (      )    
    //,.lsu_en          (          )          
    ,.dfu_info        (el_dff[`EL_REG_INFO]    )              
    ,.exu_lsu_addr    (el_dff[`EL_REG_LSU_ADDR]    )                  
    ,.exu_lsu_data    (el_dff[`EL_REG_LSU_DATA]    ) 
    ,.exu_lsu_valid   (el_dff[`EL_REG_VALID]    )             
    ,.lsu_memory_data (lsu_memory_data )   //lsu数据
    ,.lsu_memory_addr (lsu_memory_addr )   //lsu地址
    ,.lsu_memory_dir  (lsu_memory_dir  )   //lsu方向 0 == 读，1 == 写
    ,.lsu_memory_valid(lsu_memory_valid)   //lsu使能
    ,.lsu_memory_width(lsu_memory_width)   //byte
    ,.memory_lsu_data (memory_lsu_data )   //memory数据
    ,.memory_lsu_valid(memory_lsu_valid)   //memory数据有效
    ,.lsu_wbu_data    (lsu_wbu_data    )        
    ,.lsu_valid       (lsu_valid       )
    ,.lsu_pause_before(lsu_pause_before)
);

//wbu

wbu u_wbu(
     .core_clk           (core_clk           )                                                
    //,.core_clk_en        (            )               
    ,.core_rst           (core_rst           )                              
    ,.dfu_wbu_dst        (lw_dff[`LW_REG_DST]        )                        
    ,.wbu_dst_data       (lw_dff[`LW_REG_DST_DATA]   )
    ,.lsu_wbu_valid      (lw_dff[`LW_REG_VALID])          
    ,.dfu_inst_type      (lw_dff[`LW_REG_INST_TYPE]      ) 
    ,.info               (lw_dff[`LW_REG_INFO])      
    ,.pc                 (lw_dff[`LW_REG_PC])                  
    
    ,.wbu_rf_waddr       (wbu_rf_waddr       )    //if type is S or B,then waddr equal 0 just fine
    ,.wbu_rf_wdata       (wbu_rf_wdata       )                      
    ,.wbu_rf_en          (wbu_rf_en          )                   
);


//regfile


regfile u_regfile(
     .core_clk    (core_clk)     
    ,.core_rst    (core_rst)     
    ,.core_clk_en (wbu_rf_en)    
    ,.rf_waddr    (wbu_rf_waddr )
    ,.rf_raddr1   (exu_rf_raddr1)
    ,.rf_raddr2   (exu_rf_raddr2)
    ,.rf_wdata    (wbu_rf_wdata )
    ,.rf_rdata1   (rf_exu_rdata1)
    ,.rf_rdata2   (rf_exu_rdata2)   

);

wire [`ID_REG_WIDTH - 1 : 0 ]        id_dff ;
wire [`DE_REG_WIDTH - 1 : 0 ]        de_dff ;
wire [`EL_REG_WIDTH - 1 : 0 ]        el_dff ;
wire [`LW_REG_WIDTH - 1 : 0 ]        lw_dff ;

wire pause_ifu ;
wire pause_dfu ;
wire pause_exu ;
wire pause_lsu ;
wire pause_wbu ;
assign pause_ifu = 0;
assign pause_dfu = 0;
assign pause_exu = lsu_pause_before | rawu_pause_before_and_exu | 0;
assign pause_lsu = lsu_pause_before ;
assign pause_wbu = 0;


wire clear_all;
assign clear_all = pc_clear_all ;
info_pipeline u_info_pipeline(
     .core_clk               (core_clk)          
    ,.core_rst               (core_rst)          

    ,.pause_ifu              (pause_ifu )                                     
    ,.pause_dfu              (pause_dfu )                                     
    ,.pause_exu              (pause_exu )                                     
    ,.pause_lsu              (pause_lsu )                                     
    ,.pause_wbu              (pause_wbu )                                     
                     
    ,.clear_id               (0          )                                     
    ,.clear_de               (0         )                                     
    ,.clear_el               (0         )                                     
    ,.clear_lw               (0         )                                     
    //,.clear_wbu              (0         ) 
    ,.clear_all              (clear_all )   
    ,.clear_before_lw        (pc_clear_before_lw)                                   
                     
    ,.id_clk_en              (1         )                                     
    ,.de_clk_en              (1         )                                     
    ,.el_clk_en              (1         )                                     
    ,.lw_clk_en              (1         )                                        
 
    ,.ifu_dfu_inst           (ifu_dfu_inst      )                                        
    ,.ifu_dfu_pc             (ifu_dfu_pc        )
    ,.ifu_dfu_valid          (ifu_dfu_valid  )                                      
    ,.id_dff                 (id_dff            )                                  
                     
    ,.dfu_exu_src1           (dfu_exu_src1      )                                        
    ,.dfu_exu_src2           (dfu_exu_src2      )                                        
    ,.dfu_wbu_dst            (dfu_wbu_dst       )                                       
    ,.dfu_exu_imm            (dfu_exu_imm       )                                       
    ,.dfu_info               (dfu_info          )                                    
    ,.dfu_inst_type          (dfu_inst_type     )
    ,.dfu_exu_valid          (dfu_exu_valid     )                                         
    ,.de_dff                 (de_dff            )                                                            

    ,.exu_wbu_dst_data       (exu_wbu_dst_data  )            
    ,.exu_lsu_addr           (exu_lsu_addr      )          
    ,.exu_lsu_data           (exu_lsu_data      )          
    ,.branch_ifu_pc          (branch_ifu_pc     )              
    ,.branch_ifu_taken       (branch_ifu_taken  )
    ,.exu_valid              (exu_valid         )              
    ,.el_dff                 (el_dff            )              

    //,.lsu_memory_data        (lsu_memory_data   )                   
    //,.lsu_memory_addr        (lsu_memory_addr   )                    
    //,.lsu_memory_dir         (lsu_memory_dir    )                        
    //,.lsu_memory_valid       (lsu_memory_valid  )                      
    //,.lsu_memory_width       (lsu_memory_width  )                       
    ,.lsu_wbu_data           (lsu_wbu_data      )
    ,.lsu_valid              (lsu_valid         )                  
    ,.lw_dff                 (lw_dff            )                  
);


//pc_gen
wire pc_pause;
assign pc_pause = ifu_pc_pause | lsu_pause_before | rawu_pause_before_and_exu | 0 ;
wire pc_clear_before_lw;
pc_gen u_pc_gen(
     .core_clk      (core_clk      )                    
    ,.core_rst      (core_rst      )                    
    ,.branch_pc     (lw_dff[`LW_REG_IFU_PC])                      
    ,.branch_taken  (lw_dff[`LW_REG_IFU_TAKEN])   
    ,.lw_info       (lw_dff[`LW_REG_INFO])
    ,.lw_pc         (lw_dff[`LW_REG_PC])                      
    ,.pc_pause      (pc_pause      )                    
    ,.pc            (pc            )               
    ,.pc_valid      (pc_valid      )     
    ,.pc_clear_all  (pc_clear_all  )   
    ,.pc_clear_before_lw (pc_clear_before_lw )                              
    ,.el_info                 (el_dff[`EL_REG_INFO]         )              
    ,.el_pc                   (el_dff[`EL_REG_PC]         )            
    ,.el_branch_pc            (el_dff[`EL_REG_IFU_PC]         )                    
    ,.el_branch_taken         (el_dff[`EL_REG_IFU_TAKEN]         )     
    ,.el_valid                (el_dff[`EL_REG_VALID])                             
);

wire rawu_pause_before_and_exu ;
rawu u_rawu(
     .core_clk                  (core_clk                  )                    
    ,.core_rst                  (core_rst                  )                    
                                     
    ,.id_dff                    (id_dff                    )                  
    ,.de_dff                    (de_dff                    )                  
    ,.el_dff                    (el_dff                    )                  
    ,.lw_dff                    (lw_dff                    )                  
                                     
    ,.rawu_pause_before_and_exu (rawu_pause_before_and_exu )                                     
);
endmodule