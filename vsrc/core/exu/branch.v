`include "./vsrc/core/include/defines.v"
module branch(
     input [63:0]                               src1
    ,input [63:0]                               src2
    ,input [63:0]                               imm
    ,input [63:0]                               pc
    ,input                                      branch_en  
    ,input [`DECODE_INFO_BRANCH_WIDTH - 1 : 0]  branch_info

    ,output [63:0]                              branch_wbu_dst_data //
    ,output [63:0]                              branch_ifu_pc       
    ,output                                     branch_ifu_taken
);

//wire unsigned [63:0] imm_u              ;
//wire signed   [63:0] imm_s              ;
//assign imm_u = imm                      ;
//assign imm_s = imm                      ;

wire unsigned [63:0] src1_u             ;
wire signed   [63:0] src1_s             ;
assign src1_u = src1                    ;
assign src1_s = src1                    ;

wire unsigned [63:0] src2_u             ;
wire signed   [63:0] src2_s             ;
assign src2_u = src2                    ;
assign src2_s = src2                    ;

//wire unsigned [63:0] pc_u               ;
//wire signed   [63:0] pc_s               ;
//assign pc_u = pc                        ;
//assign pc_s = pc                        ;

//reg  unsigned [63:0] branch_format_64u     ; //change the result's format
//reg  signed   [63:0] branch_format_64s     ; //change the result's format
reg  [63:0] branch_ifu_pc_reg              ;
reg  [63:0] branch_wbu_dst_data_reg        ;
reg  branch_ifu_taken_reg                  ;

reg [63:0] op1,op2                     ;
always @(*) begin
    if(branch_en)begin 
        op1 = 0 ;
        op2 = 0 ;
        case (1'b1)
            //JAL
            branch_info[`JAL]   : begin
                op1 = pc                ;
                op2 = imm               ;
                branch_ifu_taken_reg = 1'b1 ;
            end 
            //JALR
            branch_info[`JALR]  : begin
                op1 = src1             ;
                op2 = imm               ;
                branch_ifu_taken_reg = 1'b1 ;
            end
            //BEQ
            branch_info[`BEQ]   : begin
                op1 = pc                            ;
                op2 = imm                            ;
                branch_ifu_taken_reg = (src1_s == src2_s) ;
            end
            //BNE
            branch_info[`BNE]   : begin
                op1 = pc                            ;
                op2 = imm                            ;
                branch_ifu_taken_reg = (src1_s != src2_s) ;
            end
            //BLT
            branch_info[`BLT]   : begin
                op1 = pc                           ;
                op2 = imm                            ;
                branch_ifu_taken_reg = (src1_s <  src2_s) ;
            end
            //BGE
            branch_info[`BGE]   : begin
                op1 = pc                           ;
                op2 = imm                            ;
                branch_ifu_taken_reg = (src1_s >= src2_s) ;
            end
            //BLTU
            branch_info[`BLTU]   : begin
                op1 = pc                           ;
                op2 = imm                            ;
                branch_ifu_taken_reg = (src1_u < src2_u ) ;
            end
            //BGEU
            branch_info[`BGEU]   : begin
                op1 = pc                           ;
                op2 = imm                            ;
                branch_ifu_taken_reg = (src1_u >= src2_u) ;
            end
            default : branch_ifu_taken_reg = 1'b0 ; 
        endcase
        branch_ifu_pc_reg       = op1 + op2                          ;
        branch_wbu_dst_data_reg = branch_ifu_taken_reg ? pc + 4 : 0  ;
    end
    else begin 
        op1 = 0 ;                   
        op2 = 0 ;
        branch_ifu_pc_reg           = 0                 ;
        branch_wbu_dst_data_reg = 0                     ;
        branch_ifu_taken_reg        = 1'b0              ;   
    end
end
assign branch_ifu_pc            = branch_ifu_pc_reg             ;
assign branch_wbu_dst_data  = branch_wbu_dst_data_reg   ;
assign branch_ifu_taken         = branch_ifu_taken_reg          ;





endmodule