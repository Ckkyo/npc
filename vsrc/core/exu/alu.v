`include "./vsrc/core/include/defines.v"
module alu(
     input [63:0]                           src1
    ,input [63:0]                           src2
    ,input [63:0]                           imm
    ,input [63:0]                           pc
    ,input                                  alu_en  
    ,input [`DECODE_INFO_ALU_WIDTH - 1 : 0] alu_info

    ,output [63:0]  alu_wbu_dst_data //may go to lsu or wbu
    //,output         alu_ecall 
    //,output         alu_ebreak
);
wire unsigned [5:0]  shamt;
assign shamt = imm[5:0];

wire unsigned [63:0] imm_u              ;
wire signed   [63:0] imm_s              ;
assign imm_u = imm                      ;
assign imm_s = imm                      ;

wire unsigned [63:0] src1_u             ;
wire signed   [63:0] src1_s             ;
assign src1_u = src1                    ;
assign src1_s = src1                    ;

wire unsigned [31:0] src1_32u             ;
wire signed   [31:0] src1_32s             ;
assign src1_32u = src1[31:0]                    ;
assign src1_32s = src1[31:0]                    ;

wire unsigned [63:0] src2_u             ;
wire signed   [63:0] src2_s             ;
assign src2_u = src2                    ;
assign src2_s = src2                    ;

wire unsigned [31:0] src2_32u             ;
wire signed   [31:0] src2_32s             ;
assign src2_32u = src2[31:0]                    ;
assign src2_32s = src2[31:0]                    ;

reg  unsigned [63:0] alu_format_64u     ; //change the result's format
reg  signed   [63:0] alu_format_64s     ; //change the result's format
reg  unsigned [31:0] alu_format_32u     ; //change the result's format
reg  signed   [31:0] alu_format_32s     ; //change the result's format
reg  [63:0] alu_wbu_dst_data_reg              ;



always @(*) begin
    if(alu_en)begin
        alu_format_64u       = 0;
        alu_format_64s       = 0;
        case (1'b1)
            //LUI
            alu_info[`LUI] : begin
                alu_format_64u = imm_u          ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //AUIPC
            alu_info[`AUIPC] : begin
                alu_format_64u = pc + imm_u     ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //ADDI
            alu_info[`ADDI] : begin
                alu_format_64s = src1_s + imm_s ;
                alu_wbu_dst_data_reg = alu_format_64s ;
            end
            //ADDIW
            alu_info[`ADDIW] : begin
                alu_format_64s = src1_s + imm_s ;
                alu_wbu_dst_data_reg = {{32{alu_format_64s[31]}},alu_format_64s[31:0]} ;
            end
            //SLTI
            alu_info[`SLTI] : begin
                alu_format_64s = src1_s < imm_s ;
                alu_wbu_dst_data_reg = alu_format_64s ;
            end
            //SLTIU
            alu_info[`SLTIU] : begin
                alu_format_64u = src1_u < imm_u ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //XORI
            alu_info[`XORI] : begin
                alu_format_64u = src1_u ^ imm_u ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //ORI
            alu_info[`ORI] : begin
                alu_format_64u = src1_u | imm_u ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //ANDI
            alu_info[`ANDI] : begin
                alu_format_64u = src1_u & imm_u ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            
            //SLLI
            alu_info[`SLLI] : begin
                alu_format_64u = src1_u << shamt;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //SRLI
            alu_info[`SRLI] : begin
                alu_format_64u = src1_u >> shamt;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //SRAI
            alu_info[`SRAI] : begin
                alu_format_64s = src1_s >>> shamt;
                alu_wbu_dst_data_reg = alu_format_64s ;
            end
            //SLLIW
            alu_info[`SLLIW] : begin
                alu_format_32u = src1_32u << shamt;
                alu_wbu_dst_data_reg = {{32{alu_format_32u[31]}},alu_format_32u[31:0]} ;
            end
            //SRLIW
            alu_info[`SRLIW] : begin
                alu_format_32u = src1_32u >> shamt;
                alu_wbu_dst_data_reg = {{32{alu_format_32u[31]}},alu_format_32u[31:0]} ;
            end
            //SRAIW
            alu_info[`SRAIW] : begin
                alu_format_32s = src1_32s >>> shamt;
                alu_wbu_dst_data_reg = {{32{alu_format_32s[31]}},alu_format_32s[31:0]} ;
            end

            //ADD
            alu_info[`ADD] : begin
                alu_format_64s = src1_s + src2_s ;
                alu_wbu_dst_data_reg = alu_format_64s ;
            end
            //SUB
            alu_info[`SUB] : begin
                alu_format_64s = src1_s - src2_s ;
                alu_wbu_dst_data_reg = alu_format_64s ;
            end
            //ADDW
            alu_info[`ADDW] : begin
                alu_format_64s = src1_s + src2_s ;
                alu_wbu_dst_data_reg = {{32{alu_format_64s[31]}},alu_format_64s[31:0]} ;
            end
            //SUBW
            alu_info[`SUBW] : begin
                alu_format_64s = src1_s - src2_s ;
                alu_wbu_dst_data_reg = {{32{alu_format_64s[31]}},alu_format_64s[31:0]} ;
            end
            //SLL
            alu_info[`SLL] : begin
                alu_format_64u = src1_u << src2_u[5:0] ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //SLLW
            alu_info[`SLLW] : begin
                alu_format_32u = src1_32u << src2_32u[4:0] ;
                alu_wbu_dst_data_reg = {{32{alu_format_32u[31]}},alu_format_32u[31:0]} ;
            end
            //SLT
            alu_info[`SLT] : begin
                alu_format_64s = src1_s < src2_s ;
                alu_wbu_dst_data_reg = alu_format_64s ;
            end
            //SLTU
            alu_info[`SLTU] : begin
                alu_format_64u = src1_u < src2_u ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //XOR
            alu_info[`XOR] : begin
                alu_format_64u = src1_u ^ src2_u ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //SRL
            alu_info[`SRL] : begin
                alu_format_64u = src1_u >> src2_u[5:0] ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //SRLW
            alu_info[`SRLW] : begin
                alu_format_32u = src1_32u >> src2_u[4:0] ;
                alu_wbu_dst_data_reg = {{32{alu_format_32u[31]}},alu_format_32u[31:0]} ;
            end
            //SRA
            alu_info[`SRA] : begin
                alu_format_64s = src1_s >>> src2_u[5:0] ;
                alu_wbu_dst_data_reg = alu_format_64s ;
            end
            //SRAW
            alu_info[`SRAW] : begin
                alu_format_32s = src1_32s >>> src2_32u[4:0] ;
                alu_wbu_dst_data_reg = {{32{alu_format_32s[31]}},alu_format_32s[31:0]} ;
            end
            //OR
            alu_info[`OR] : begin
                alu_format_64u = src1_u | src2_u ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end
            //AND
            alu_info[`AND] : begin
                alu_format_64u = src1_u & src2_u ;
                alu_wbu_dst_data_reg = alu_format_64u ;
            end

            //ECALL
            alu_info[`ECALL] : begin
                alu_wbu_dst_data_reg = 0 ;//DO NOTHING
                $display("ALU DETECTED ECALL");
            end
            //EBREAK
            alu_info[`EBREAK] : begin
                alu_wbu_dst_data_reg = 0 ;//DO NOTHING
                $display("ALU DETECTED EBREAK");
            end
            default: begin 
                alu_wbu_dst_data_reg = 0;
            end
        endcase
    end
    else begin
            alu_format_64u       = 0;
            alu_format_64s       = 0;
            alu_wbu_dst_data_reg = 0;
    end
end
assign alu_wbu_dst_data = alu_wbu_dst_data_reg ;









endmodule