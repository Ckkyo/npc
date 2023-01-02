`include "./vsrc/core/include/defines.v"
module exu_top (
     input                          core_clk
    ,input                          core_rst
    //,input                          dfu_exu_valid

    // dfu exu
    ,input [63:0]                   pc
    //,input [4:0]                    dfu_exu_dst
    ,input [4:0]                    dfu_exu_src1 //
    ,input [4:0]                    dfu_exu_src2 //
    ,input [31:0]                   dfu_exu_imm  //
    ,input [`DECODE_INFO_WIDTH-1:0] dfu_info     //
    ,input                          dfu_exu_valid

    //exu regfile
    ,output [4:0]                   exu_rf_raddr1 //
    ,output [4:0]                   exu_rf_raddr2 //
    ,input  [63:0]                  rf_exu_rdata1 //
    ,input  [63:0]                  rf_exu_rdata2 //

    //alu wbu
    //,output [63:0]                  alu_wbu_dst_data
    
    //exu_lsu top_lsu
    ,output [63:0]                  exu_lsu_addr
    ,output [63:0]                  exu_lsu_data

    //branch wbu
    //,output [63:0]                  branch_wbu_dst_data

    //branch top
    ,output [63:0]                  branch_ifu_pc
    ,output                         branch_ifu_taken

    //muldiv wbu
    //,output [63:0]                  muldiv_wbu_dst_data
    
    //exu wbu
    ,output [63:0]                  exu_wbu_dst_data
    ,output                         exu_valid
);
assign exu_valid = dfu_exu_valid ;

//get operand
assign exu_rf_raddr1 = dfu_exu_src1;
assign exu_rf_raddr2 = dfu_exu_src2;
wire [63:0] src1 ;
wire [63:0] src2 ;
assign src1 = rf_exu_rdata1;
assign src2 = rf_exu_rdata2;
wire [63:0] imm ;
assign imm = {{32{dfu_exu_imm[31]}},dfu_exu_imm};

assign exu_lsu_data = src2;
//alu
wire                                  alu_en       ;
wire [`DECODE_INFO_ALU_WIDTH - 1 : 0] alu_info     ;
wire [63:0]                           alu_wbu_dst_data ;
assign alu_en       = dfu_info[`DECODE_INFO_ALU_BIT];
assign alu_info     = dfu_info[`DECODE_INFO_ALU_WIDTH - 1 : 0];
alu u_alu(
     .src1          (src1           )       
    ,.src2          (src2           )     
    ,.imm           (imm            )                 
    ,.pc            (pc             )             
    ,.alu_en        (alu_en         )                  
    ,.alu_info      (alu_info       )                     

    ,.alu_wbu_dst_data  (alu_wbu_dst_data   )//may go to lsu or wbu

);

//branch
wire                                     branch_en               ;
wire [`DECODE_INFO_BRANCH_WIDTH - 1 : 0] branch_info             ;
wire [63:0]                              branch_wbu_dst_data     ;
//wire                                     branch_ifu_taken            ;
assign branch_en    = dfu_info[`DECODE_INFO_BRANCH_BIT]          ;
assign branch_info  = dfu_info[`DECODE_INFO_BRANCH_WIDTH - 1 : 0];
branch u_branch(
     .src1                  (src1               )     
    ,.src2                  (src2               )   
    ,.imm                   (imm                )
    ,.pc                    (pc                 )
    ,.branch_en             (branch_en          )    
    ,.branch_info           (branch_info        )   

    ,.branch_wbu_dst_data   (branch_wbu_dst_data)         //may go to core_top or wbu
    ,.branch_ifu_pc         (branch_ifu_pc      )        //
    ,.branch_ifu_taken      (branch_ifu_taken   )       
);
//lsu
wire                                  lsu_en       ;
wire [`DECODE_INFO_LSU_WIDTH - 1 : 0] lsu_info     ;
//wire [63:0]                           exu_lsu_addr ;
assign lsu_en   = dfu_info[`DECODE_INFO_LSU_BIT]   ;
exu_lsu u_exu_lsu(
     .src1          (src1           )         
    ,.imm           (imm            )                           
    ,.lsu_en        (lsu_en         )                                    

    ,.exu_lsu_addr  (exu_lsu_addr   )
);
wire muldiv_en;
assign muldiv_en = dfu_info [`DECODE_INFO_MULDIV_BIT];
wire [`DECODE_INFO_MULDIV_WIDTH - 1 : 0]muldiv_info;
assign muldiv_info = dfu_info [`DECODE_INFO_MULDIV_WIDTH - 1 : 0];
wire [63:0] muldiv_wbu_dst_data ;
muldiv u_muldiv(
     .src1                (src1                )          
    ,.src2                (src2                )          
    ,.imm                 (imm                 )         
    ,.muldiv_en           (muldiv_en           )                 
    ,.muldiv_info         (muldiv_info         )                 
    ,.muldiv_wbu_dst_data (muldiv_wbu_dst_data )                          
);
assign exu_wbu_dst_data = muldiv_wbu_dst_data|
                          alu_wbu_dst_data   |
                          branch_wbu_dst_data;
endmodule