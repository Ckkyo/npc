`include "./vsrc/core/include/defines.v"
module exu_lsu(
         input [63:0]                              src1
        ,input [63:0]                              imm
        ,input                                     lsu_en  
        //,input [`DECODE_INFO_LSU_WIDTH - 1 : 0]    lsu_info
    
        ,output [63:0]  exu_lsu_addr  
 

);
reg  [63:0] exu_lsu_addr_reg;
always @(*) begin
    if(lsu_en)begin 
        exu_lsu_addr_reg = src1 + imm ;
    end
    else begin
        exu_lsu_addr_reg = 0;
    end
end
assign exu_lsu_addr = exu_lsu_addr_reg ;










endmodule

















