`include "./vsrc/core/include/defines.v"
//muldiv unit

module muldiv(
     input [63:0]                               src1
    ,input [63:0]                               src2
    ,input [63:0]                               imm
    ,input                                      muldiv_en  
    ,input [`DECODE_INFO_MULDIV_WIDTH - 1 : 0]  muldiv_info
    ,output [63:0]                              muldiv_wbu_dst_data 
);

wire unsigned [63:0] imm_u              ;
wire signed   [63:0] imm_s              ;
assign imm_u = imm                      ;
assign imm_s = imm                      ;

wire unsigned [63:0] src1_u             ;
wire signed   [63:0] src1_s             ;
assign src1_u = src1                    ;
assign src1_s = src1                    ;

wire unsigned [63:0] src2_u             ;
wire signed   [63:0] src2_s             ;
assign src2_u = src2                    ;
assign src2_s = src2                    ;

reg  unsigned [127:0] muldiv_format_128u     ; //change the result's format
reg  signed   [127:0] muldiv_format_128s     ; //change the result's format
reg  unsigned [127:0] muldiv_format_64u     ; //change the result's format
reg  signed   [127:0] muldiv_format_64s     ; //change the result's format

reg  [63:0] muldiv_wbu_dst_data_reg              ;


always @(*) begin
    if(muldiv_en)begin 
        muldiv_format_128u       = 0;
        muldiv_format_128s       = 0;
        case (1'b1)
            //MUL
            muldiv_info[`MUL]:begin
                muldiv_format_128s = src1_s * src2_s ;
                muldiv_wbu_dst_data_reg = muldiv_format_128s[63:0];
            end 
            //MULH
            muldiv_info[`MULH]:begin
                muldiv_format_128s = src1_s * src2_s ;
                muldiv_wbu_dst_data_reg = muldiv_format_128s[127:64];
            end
            //MULHSU
            muldiv_info[`MULHSU]:begin
                muldiv_format_128s = src1_s * src2_u ;
                muldiv_wbu_dst_data_reg = muldiv_format_128s[127:64];
            end
            //MULHU
            muldiv_info[`MULHU]:begin
                muldiv_format_128u = src1_u * src2_u ;
                muldiv_wbu_dst_data_reg = muldiv_format_128u[127:64];
            end
            //DIV
            muldiv_info[`DIV]:begin
                muldiv_wbu_dst_data_reg = src1_s / src2_s ;
            end
            //DIVU
            muldiv_info[`DIVU]:begin
                muldiv_wbu_dst_data_reg = src1_u / src2_u ;
            end
            //REM
            muldiv_info[`REM]:begin
                muldiv_wbu_dst_data_reg = src1_s % src2_s ;
            end
            //REMU
            muldiv_info[`REMU]:begin
                muldiv_wbu_dst_data_reg = src1_u % src2_u ;
            end
            //MULW 
            muldiv_info[`MULW]:begin
                muldiv_format_64s = src1_s[31:0] * src2_s[31:0] ;
                muldiv_wbu_dst_data_reg = {{32{muldiv_format_64s[31]}},muldiv_format_64s[31:0]};
            end
            //DIVW 
            muldiv_info[`DIVW]:begin
                muldiv_format_64s = src1_s[31:0] / src2_s[31:0] ;
                muldiv_wbu_dst_data_reg = {{32{muldiv_format_64s[31]}},muldiv_format_64s[31:0]};
            end
            //DIVUW
            muldiv_info[`DIVUW]:begin
                muldiv_format_64u = src1_u[31:0] / src2_u[31:0] ;
                muldiv_wbu_dst_data_reg = {{32{1'b0}},muldiv_format_64u[31:0]};
            end
            //REMW
            muldiv_info[`REMW]:begin
                muldiv_format_64s = src1_s[31:0] % src2_s[31:0] ;
                muldiv_wbu_dst_data_reg = {{32{muldiv_format_64s[31]}},muldiv_format_64s[31:0]};
            end
            //REMUW
            muldiv_info[`REMUW]:begin
                muldiv_format_64u = src1_u[31:0] % src2_u[31:0] ;
                muldiv_wbu_dst_data_reg = {{32{1'b0}},muldiv_format_64u[31:0]};
            end
            default:begin
                muldiv_wbu_dst_data_reg = 0;
            end
        endcase
    end
    else begin 
        muldiv_wbu_dst_data_reg = 0;
    end
end

assign muldiv_wbu_dst_data = muldiv_wbu_dst_data_reg ;






endmodule