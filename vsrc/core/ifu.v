`include "./vsrc/core/include/defines.v"
module ifu(
     input core_clk
    ,input core_rst
    //,input core_clk_en
    //,input core_pc_update

    ,input  [31:0] memory_ifu_data    //ifu数据
    ,output [63:0] ifu_memory_addr    //ifu地址
    ,output        ifu_memory_valid
    ,input         memory_ifu_valid   //返回数据有效

    ,output [31:0] ifu_dfu_inst
    ,output [63:0] ifu_dfu_pc
    ,output        ifu_dfu_valid

    ,output        ifu_pc_pause
    //pc
    //,input [63:0] branch_ifu_pc
    //,input        branch_ifu_taken

    ,input [63:0] pc                //pc应该当做是输入信号，pc从ifu模块中剥离出去
    ,input        pc_valid          //pc有效信号
);
//reg [31:0] ifu_dfu_inst_reg;

//reg  [63:0] pc_new_reg          ;


assign ifu_memory_addr  = pc    ;
assign ifu_memory_valid = pc_valid   ;
assign ifu_pc_pause     = ~memory_ifu_valid ;
//将pc延迟一个周期，和inst以及valid同步
reg [63:0] ifu_dfu_pc_reg;
always @(*) begin
    if(core_rst)begin 
        ifu_dfu_pc_reg = 0 ;
    end
    else begin 
        ifu_dfu_pc_reg = pc;
    end
end
assign ifu_dfu_pc       = ifu_dfu_pc_reg;
assign ifu_dfu_inst     = memory_ifu_data;
assign ifu_dfu_valid    = memory_ifu_valid;

//pc
//assign pc_old = branch_ifu_taken ? branch_ifu_pc : pc + 4;
//always @(posedge core_clk or posedge core_rst) begin
//    if(core_rst)begin 
//        pc_new_reg <= `RESET_VAL;
//    end
//    else if(core_pc_update) begin
//        if(branch_ifu_taken)begin 
//            pc_new_reg <= branch_ifu_pc ;
//            //pc_new_reg <= pc + 4;
//        end
//        else begin 
//            pc_new_reg <= pc + 4;
//        end
//    end
//end
//assign pc = pc_new_reg ;

endmodule