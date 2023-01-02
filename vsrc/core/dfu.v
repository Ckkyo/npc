`include "./vsrc/core/include/defines.v"
module dfu(
     input                           core_clk
    //,input                           ifu_dfu_valid
    ,input                           core_rst
    ,input [63:0]                    pc
    ,input [31:0]                    ifu_dfu_inst
    ,input                           ifu_dfu_valid

    ,output [4:0]                    dfu_exu_src1
    ,output [4:0]                    dfu_exu_src2
    ,output [4:0]                    dfu_wbu_dst
    ,output [31:0]                   dfu_exu_imm
    ,output [`DECODE_INFO_WIDTH-1:0] dfu_info
    ,output [5:0]                    dfu_inst_type
    ,output                          dfu_exu_valid
                     
);
assign dfu_exu_valid = ifu_dfu_valid;

parameter OPCODE_TYPE_R = `INST_TYPE_R;
parameter OPCODE_TYPE_I = `INST_TYPE_I;
parameter OPCODE_TYPE_S = `INST_TYPE_S;
parameter OPCODE_TYPE_B = `INST_TYPE_B;
parameter OPCODE_TYPE_U = `INST_TYPE_U;
parameter OPCODE_TYPE_J = `INST_TYPE_J;
reg [5:0] opcode_type;
always @(*) begin
    case(ifu_dfu_inst[6:0]) 
        7'b0000011: opcode_type = OPCODE_TYPE_I;
        7'b0010011: opcode_type = OPCODE_TYPE_I;
        7'b1100111: opcode_type = OPCODE_TYPE_I;
        7'b1100011: opcode_type = OPCODE_TYPE_B;
        7'b1101111: opcode_type = OPCODE_TYPE_J;
        7'b0010111: opcode_type = OPCODE_TYPE_U;
        7'b0110111: opcode_type = OPCODE_TYPE_U;
        7'b0100011: opcode_type = OPCODE_TYPE_S;
        7'b0001111: opcode_type = OPCODE_TYPE_I;
        7'b0011111: opcode_type = OPCODE_TYPE_I;
        7'b0110011: opcode_type = OPCODE_TYPE_R;
        //7'b0000111: opcode_type = OPCODE_TYPE_I;//float
        //7'b0010111: opcode_type = OPCODE_TYPE_U;    //auipc
        //7'b0100111: opcode_type = OPCODE_TYPE_I;//float
        //7'b0001011: opcode_type = OPCODE_TYPE_I;//none
        //7'b1101011: opcode_type = OPCODE_TYPE_I;//none
        7'b1110011: opcode_type = OPCODE_TYPE_I;    //ecall ebreak csrs
        //7'b1111011: opcode_type = OPCODE_TYPE_I;//none
        7'b0011011: opcode_type = OPCODE_TYPE_I;    //addiw,shiftI
        7'b0111011: opcode_type = OPCODE_TYPE_R;    //add shift mul
        default  : opcode_type = 6'b0;
    endcase
end

reg [4:0]    dfu_exu_src1_reg;
reg [4:0]    dfu_exu_src2_reg;
reg [4:0]    dfu_wbu_dst_reg ;
reg [31:0]   dfu_exu_imm_reg ;

//get imm and rsc,dst
wire [31:0]   dfu_exu_imm_i ;
wire [31:0]   dfu_exu_imm_s ;
wire [31:0]   dfu_exu_imm_b ;
wire [31:0]   dfu_exu_imm_u ;
wire [31:0]   dfu_exu_imm_j ;
assign dfu_exu_imm_i = {{(32-12){ifu_dfu_inst[31]}} , ifu_dfu_inst[31:20]} ;
assign dfu_exu_imm_s = {{(32-12){ifu_dfu_inst[31]}} , ifu_dfu_inst[31:25] , ifu_dfu_inst[11:7]} ;
assign dfu_exu_imm_b = {{(32-13){ifu_dfu_inst[31]}} , ifu_dfu_inst[31] , ifu_dfu_inst[7] , ifu_dfu_inst[30:25] , ifu_dfu_inst[11:8] , 1'b0} ;
assign dfu_exu_imm_u = {ifu_dfu_inst[31:12] , 12'b0} ;
assign dfu_exu_imm_j = {{(32-21){ifu_dfu_inst[31]}} , ifu_dfu_inst[31] , ifu_dfu_inst[19:12] , ifu_dfu_inst[20] , ifu_dfu_inst[30:21] , 1'b0} ;

always @(*)begin
    if(core_rst)begin 
        dfu_exu_src1_reg = 0 ;
        dfu_exu_src2_reg = 0 ;
        dfu_wbu_dst_reg  = 0 ;
        dfu_exu_imm_reg  = 0 ;
    end
    else if(ifu_dfu_valid)begin 
        dfu_exu_src1_reg = ifu_dfu_inst[19:15] ;
        dfu_exu_src2_reg = ifu_dfu_inst[24:20] ;
        dfu_wbu_dst_reg  = ifu_dfu_inst[11:7]  ;
        dfu_exu_imm_reg  = ifu_dfu_inst[31:20] ;
        case(opcode_type)
            //OPCODE_TYPE_R: dfu_exu_imm_reg = dfu_exu_imm_r ;
            OPCODE_TYPE_I: dfu_exu_imm_reg = dfu_exu_imm_i ;
            OPCODE_TYPE_S: dfu_exu_imm_reg = dfu_exu_imm_s ;
            OPCODE_TYPE_B: dfu_exu_imm_reg = dfu_exu_imm_b ;
            OPCODE_TYPE_U: dfu_exu_imm_reg = dfu_exu_imm_u ;
            OPCODE_TYPE_J: dfu_exu_imm_reg = dfu_exu_imm_j ;
            default: dfu_exu_imm_reg = 32'b0 ;          //ecall,ebreak's imm is 0
        endcase
    end
    else begin 
        dfu_exu_src1_reg = 0 ;
        dfu_exu_src2_reg = 0 ;
        dfu_wbu_dst_reg  = 0 ;
        dfu_exu_imm_reg  = 0 ;
    end
end
assign dfu_exu_imm  = dfu_exu_imm_reg ;
assign dfu_exu_src1 = dfu_exu_src1_reg ;
assign dfu_exu_src2 = dfu_exu_src2_reg ;
assign dfu_wbu_dst  = dfu_wbu_dst_reg  ;

//decode other information
reg  [`DECODE_INFO_WIDTH-1       :0] dfu_info_reg;
wire [`DECODE_INFO_MULDIV_WIDTH-1:0] dfu_muldiv_info;
wire [`DECODE_INFO_CSR_WIDTH-1   :0] dfu_csr_info;
wire [`DECODE_INFO_BRANCH_WIDTH-1:0] dfu_branch_info;
wire [`DECODE_INFO_ALU_WIDTH-1   :0] dfu_alu_info;
wire [`DECODE_INFO_LSU_WIDTH-1   :0] dfu_lsu_info;
wire [16:0] opcode_and_funct;
wire [16:0] opcode_and_funct_masked;
reg  [16:0] opcode_and_funct_mask;
assign opcode_and_funct = {ifu_dfu_inst[31:25],ifu_dfu_inst[14:12],ifu_dfu_inst[6:0]};
always @(*) begin
    case(opcode_type)
        OPCODE_TYPE_R: opcode_and_funct_mask = {17{1'b1}};
        OPCODE_TYPE_I: opcode_and_funct_mask = {{7{1'b0}},{3{1'b1}},{7{1'b1}}};
        OPCODE_TYPE_S: opcode_and_funct_mask = {{7{1'b0}},{3{1'b1}},{7{1'b1}}};
        OPCODE_TYPE_B: opcode_and_funct_mask = {{7{1'b0}},{3{1'b1}},{7{1'b1}}};
        OPCODE_TYPE_U: opcode_and_funct_mask = {{7{1'b0}},{3{1'b0}},{7{1'b1}}};
        OPCODE_TYPE_J: opcode_and_funct_mask = {{7{1'b0}},{3{1'b0}},{7{1'b1}}};
        default:opcode_and_funct_mask = {17{1'b1}};
    endcase
end


assign opcode_and_funct_masked = opcode_and_funct & opcode_and_funct_mask ;
parameter OPCODE_AND_FUNCT_LUI   = 17'b0000000_000_01101_11;
parameter OPCODE_AND_FUNCT_AUIPC = 17'b0000000_000_00101_11;
parameter OPCODE_AND_FUNCT_JAL   = 17'b0000000_000_11011_11;
parameter OPCODE_AND_FUNCT_JALR  = 17'b0000000_000_11001_11;

parameter OPCODE_AND_FUNCT_BEQ   = 17'b0000000_000_11000_11;
parameter OPCODE_AND_FUNCT_BNE   = 17'b0000000_001_11000_11;
parameter OPCODE_AND_FUNCT_BLT   = 17'b0000000_100_11000_11;
parameter OPCODE_AND_FUNCT_BGE   = 17'b0000000_101_11000_11;
parameter OPCODE_AND_FUNCT_BLTU  = 17'b0000000_110_11000_11;
parameter OPCODE_AND_FUNCT_BGEU  = 17'b0000000_111_11000_11;

parameter OPCODE_AND_FUNCT_LB    = 17'b0000000_000_00000_11;
parameter OPCODE_AND_FUNCT_LH    = 17'b0000000_001_00000_11;
parameter OPCODE_AND_FUNCT_LW    = 17'b0000000_010_00000_11;
parameter OPCODE_AND_FUNCT_LD    = 17'b0000000_011_00000_11;
parameter OPCODE_AND_FUNCT_LBU   = 17'b0000000_100_00000_11;
parameter OPCODE_AND_FUNCT_LHU   = 17'b0000000_101_00000_11;
parameter OPCODE_AND_FUNCT_LWU   = 17'b0000000_110_00000_11;
parameter OPCODE_AND_FUNCT_SB    = 17'b0000000_000_01000_11;
parameter OPCODE_AND_FUNCT_SH    = 17'b0000000_001_01000_11;
parameter OPCODE_AND_FUNCT_SW    = 17'b0000000_010_01000_11;
parameter OPCODE_AND_FUNCT_SD    = 17'b0000000_011_01000_11;

parameter OPCODE_AND_FUNCT_ADDI  = 17'b0000000_000_00100_11;
parameter OPCODE_AND_FUNCT_ADDIW = 17'b0000000_000_00110_11;
parameter OPCODE_AND_FUNCT_SLTI  = 17'b0000000_010_00100_11;
parameter OPCODE_AND_FUNCT_SLTIU = 17'b0000000_011_00100_11;
parameter OPCODE_AND_FUNCT_XORI  = 17'b0000000_100_00100_11;
parameter OPCODE_AND_FUNCT_ORI   = 17'b0000000_110_00100_11;
parameter OPCODE_AND_FUNCT_ANDI  = 17'b0000000_111_00100_11;

parameter OPCODE_AND_FUNCT_SLLI  = 17'b0000000_001_00100_11;
parameter OPCODE_AND_FUNCT_SRLI  = 17'b0000000_101_00100_11;
parameter OPCODE_AND_FUNCT_SRAI  = 17'b0000000_101_00100_11;
parameter OPCODE_AND_FUNCT_SLLIW = 17'b0000000_001_00110_11;
parameter OPCODE_AND_FUNCT_SRLIW = 17'b0000000_101_00110_11;
parameter OPCODE_AND_FUNCT_SRAIW = 17'b0000000_101_00110_11;

parameter OPCODE_AND_FUNCT_ADD   = 17'b0000000_000_01100_11;
parameter OPCODE_AND_FUNCT_SUB   = 17'b0100000_000_01100_11;
parameter OPCODE_AND_FUNCT_ADDW  = 17'b0000000_000_01110_11;
parameter OPCODE_AND_FUNCT_SUBW  = 17'b0100000_000_01110_11;
parameter OPCODE_AND_FUNCT_SLL   = 17'b0000000_001_01100_11;
parameter OPCODE_AND_FUNCT_SLLW  = 17'b0000000_001_01110_11;
parameter OPCODE_AND_FUNCT_SLT   = 17'b0000000_010_01100_11;
parameter OPCODE_AND_FUNCT_SLTU  = 17'b0000000_011_01100_11;
parameter OPCODE_AND_FUNCT_XOR   = 17'b0000000_100_01100_11;
parameter OPCODE_AND_FUNCT_SRL   = 17'b0000000_101_01100_11;
parameter OPCODE_AND_FUNCT_SRA   = 17'b0100000_101_01100_11;
parameter OPCODE_AND_FUNCT_SRLW  = 17'b0000000_101_01110_11;
parameter OPCODE_AND_FUNCT_SRAW  = 17'b0100000_101_01110_11;
parameter OPCODE_AND_FUNCT_OR    = 17'b0000000_110_01100_11;
parameter OPCODE_AND_FUNCT_AND   = 17'b0000000_111_01100_11;

parameter OPCODE_AND_FUNCT_FENCE    = 17'b0000000_000_00000_11;
parameter OPCODE_AND_FUNCT_FENCE_TSO= 17'b0000000_000_00000_11;
parameter OPCODE_AND_FUNCT_FENCE_I  = 17'b0000000_001_00000_11;
parameter OPCODE_AND_FUNCT_ECALL    = 17'b0000000_000_11100_11;
parameter OPCODE_AND_FUNCT_EBREAK   = 17'b0000000_000_11100_11;//this i type instruction using imm encoding

parameter OPCODE_AND_FUNCT_CSRRW  = 17'b0000000_001_11100_11;
parameter OPCODE_AND_FUNCT_CSRRS  = 17'b0000000_010_11100_11;
parameter OPCODE_AND_FUNCT_CSRRC  = 17'b0000000_011_11100_11;
parameter OPCODE_AND_FUNCT_CSRRWI = 17'b0000000_101_11100_11;
parameter OPCODE_AND_FUNCT_CSRRSI = 17'b0000000_110_11100_11;
parameter OPCODE_AND_FUNCT_CSRRCI = 17'b0000000_111_11100_11;

parameter OPCODE_AND_FUNCT_MUL    = 17'b0000001_000_01100_11;
parameter OPCODE_AND_FUNCT_MULH   = 17'b0000001_001_01100_11;
parameter OPCODE_AND_FUNCT_MULHSU = 17'b0000001_010_01100_11;
parameter OPCODE_AND_FUNCT_MULHU  = 17'b0000001_011_01100_11;
parameter OPCODE_AND_FUNCT_DIV    = 17'b0000001_100_01100_11;
parameter OPCODE_AND_FUNCT_DIVU   = 17'b0000001_101_01100_11;
parameter OPCODE_AND_FUNCT_REM    = 17'b0000001_110_01100_11;
parameter OPCODE_AND_FUNCT_REMU   = 17'b0000001_111_01100_11;

parameter OPCODE_AND_FUNCT_MULW   = 17'b0000001_000_01110_11;
parameter OPCODE_AND_FUNCT_DIVW   = 17'b0000001_100_01110_11;
parameter OPCODE_AND_FUNCT_DIVUW  = 17'b0000001_101_01110_11;
parameter OPCODE_AND_FUNCT_REMW   = 17'b0000001_110_01110_11;
parameter OPCODE_AND_FUNCT_REMUW  = 17'b0000001_111_01110_11;



assign dfu_alu_info[`LUI]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_LUI)         ;
assign dfu_alu_info[`AUIPC]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_AUIPC)       ;

//BRANCH AND JUMP
assign dfu_branch_info[`JAL]    = (opcode_and_funct_masked == OPCODE_AND_FUNCT_JAL)         ;
assign dfu_branch_info[`JALR]   = (opcode_and_funct_masked == OPCODE_AND_FUNCT_JALR)        ;
assign dfu_branch_info[`BEQ]    = (opcode_and_funct_masked == OPCODE_AND_FUNCT_BEQ)         ;
assign dfu_branch_info[`BNE]    = (opcode_and_funct_masked == OPCODE_AND_FUNCT_BNE)         ;
assign dfu_branch_info[`BLT]    = (opcode_and_funct_masked == OPCODE_AND_FUNCT_BLT)         ;
assign dfu_branch_info[`BGE]    = (opcode_and_funct_masked == OPCODE_AND_FUNCT_BGE)         ;
assign dfu_branch_info[`BLTU]   = (opcode_and_funct_masked == OPCODE_AND_FUNCT_BLTU)        ;
assign dfu_branch_info[`BGEU]   = (opcode_and_funct_masked == OPCODE_AND_FUNCT_BGEU)        ;

//LOAD AND STORE
assign dfu_lsu_info[`LB]        = (opcode_and_funct_masked == OPCODE_AND_FUNCT_LB)          ;
assign dfu_lsu_info[`LH]        = (opcode_and_funct_masked == OPCODE_AND_FUNCT_LH)          ;
assign dfu_lsu_info[`LW]        = (opcode_and_funct_masked == OPCODE_AND_FUNCT_LW)          ;
assign dfu_lsu_info[`LD]        = (opcode_and_funct_masked == OPCODE_AND_FUNCT_LD)          ;
assign dfu_lsu_info[`LBU]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_LBU)         ;
assign dfu_lsu_info[`LHU]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_LHU)         ;
assign dfu_lsu_info[`LWU]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_LWU)         ;
assign dfu_lsu_info[`SB]        = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SB)          ;
assign dfu_lsu_info[`SH]        = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SH)          ;
assign dfu_lsu_info[`SW]        = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SW)          ;
assign dfu_lsu_info[`SD]        = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SD)          ;

assign dfu_alu_info[`ADDI]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_ADDI)        ;
assign dfu_alu_info[`ADDIW]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_ADDIW)       ;
assign dfu_alu_info[`SLTI]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SLTI)        ;
assign dfu_alu_info[`SLTIU]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SLTIU)       ;
assign dfu_alu_info[`XORI]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_XORI)        ;
assign dfu_alu_info[`ORI]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_ORI)         ;
assign dfu_alu_info[`ANDI]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_ANDI)        ;

assign dfu_alu_info[`SLLI]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SLLI) &(ifu_dfu_inst[31:26] == 6'b000_000)        ;
assign dfu_alu_info[`SLLIW]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SLLIW)&(ifu_dfu_inst[31:25] == 7'b000_0000)        ;
assign dfu_alu_info[`SRLI]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SRLI) &(ifu_dfu_inst[31:26] == 6'b000_000)        ;
assign dfu_alu_info[`SRLIW]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SRLIW)&(ifu_dfu_inst[31:25] == 7'b000_0000)        ;
assign dfu_alu_info[`SRAI]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SRAI) &(ifu_dfu_inst[31:26] == 6'b010_000)        ;
assign dfu_alu_info[`SRAIW]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SRAIW)&(ifu_dfu_inst[31:25] == 7'b010_0000)        ;

assign dfu_alu_info[`ADD]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_ADD)         ;
assign dfu_alu_info[`ADDW]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_ADDW)        ;
assign dfu_alu_info[`SUB]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SUB)         ;
assign dfu_alu_info[`SUBW]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SUBW)        ;
assign dfu_alu_info[`SLL]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SLL)         ;
assign dfu_alu_info[`SLLW]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SLLW)        ;
assign dfu_alu_info[`SLT]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SLT)         ;
assign dfu_alu_info[`SLTU]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SLTU)        ;
assign dfu_alu_info[`XOR]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_XOR)         ;
assign dfu_alu_info[`SRL]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SRL)         ;
assign dfu_alu_info[`SRLW]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SRLW)        ;
assign dfu_alu_info[`SRA]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SRA)         ;
assign dfu_alu_info[`SRAW]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_SRAW)        ;
assign dfu_alu_info[`OR]        = (opcode_and_funct_masked == OPCODE_AND_FUNCT_OR)          ;
assign dfu_alu_info[`AND]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_AND)         ;

//FENCE
//assign dfu_alu_info[`FENCE]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_FENCE)       ;
//assign dfu_alu_info[`FENCE_I]   = (opcode_and_funct_masked == OPCODE_AND_FUNCT_FENCE_I)     ;
//FENCE_TSO
//assign dfu_alu_info[`FENCE_TSO] = (opcode_and_funct_masked == OPCODE_AND_FUNCT_FENCE_TSO)   ;
//ECALL
assign dfu_alu_info[`ECALL]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_ECALL)&(~ifu_dfu_inst[20])       ;
//EBREAK
assign dfu_alu_info[`EBREAK]    = (opcode_and_funct_masked == OPCODE_AND_FUNCT_EBREAK)&(ifu_dfu_inst[20])      ;

//MUL
assign dfu_muldiv_info[`MUL]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_MUL)         ;
assign dfu_muldiv_info[`MULH]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_MULH)        ;
assign dfu_muldiv_info[`MULHSU]    = (opcode_and_funct_masked == OPCODE_AND_FUNCT_MULHSU)      ;
assign dfu_muldiv_info[`MULHU]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_MULHU)       ;
assign dfu_muldiv_info[`DIV]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_DIV)         ;
assign dfu_muldiv_info[`DIVU]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_DIVU)        ;
assign dfu_muldiv_info[`REM]       = (opcode_and_funct_masked == OPCODE_AND_FUNCT_REM)         ;
assign dfu_muldiv_info[`REMU]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_REMU)        ;
//MULW
assign dfu_muldiv_info[`MULW]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_MULW)        ;
assign dfu_muldiv_info[`DIVW]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_DIVW)        ;
assign dfu_muldiv_info[`DIVUW]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_DIVUW)       ;
assign dfu_muldiv_info[`REMW]      = (opcode_and_funct_masked == OPCODE_AND_FUNCT_REMW)        ;
assign dfu_muldiv_info[`REMUW]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_REMUW)       ;

//CSRS
assign dfu_csr_info[`CSRRW]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_CSRRW)       ;
assign dfu_csr_info[`CSRRS]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_CSRRS)       ;
assign dfu_csr_info[`CSRRC]     = (opcode_and_funct_masked == OPCODE_AND_FUNCT_CSRRC)       ;
assign dfu_csr_info[`CSRRWI]    = (opcode_and_funct_masked == OPCODE_AND_FUNCT_CSRRWI)      ;
assign dfu_csr_info[`CSRRSI]    = (opcode_and_funct_masked == OPCODE_AND_FUNCT_CSRRSI)      ;
assign dfu_csr_info[`CSRRCI]    = (opcode_and_funct_masked == OPCODE_AND_FUNCT_CSRRCI)      ;


always @(*) begin
    if(core_rst)begin 
        dfu_info_reg = 0;
    end
    else if(ifu_dfu_valid)begin
        dfu_info_reg[`DECODE_INFO_MULDIV_BIT    ] = |dfu_muldiv_info   ;
        dfu_info_reg[`DECODE_INFO_ALU_BIT       ] = |dfu_alu_info      ;
        dfu_info_reg[`DECODE_INFO_CSR_BIT       ] = |dfu_csr_info      ;
        dfu_info_reg[`DECODE_INFO_LSU_BIT       ] = |dfu_lsu_info      ;
        dfu_info_reg[`DECODE_INFO_BRANCH_BIT    ] = |dfu_branch_info   ;
        dfu_info_reg[`DECODE_INFO_WIDTH-1-`DECODE_INFO_CHECK_WIDTH:0] = 
            dfu_muldiv_info | dfu_alu_info | dfu_csr_info | dfu_lsu_info | dfu_branch_info;
    end
    else begin 
        dfu_info_reg = 0;
    end
end 
assign dfu_info = dfu_info_reg ;
//debug,display instruction


reg [5:0] dfu_inst_type_reg;
always @(*)begin 
    if(core_rst)begin 
        dfu_inst_type_reg = 0;
    end
    else if(ifu_dfu_valid)begin 
        dfu_inst_type_reg = opcode_type ;
    end
    else begin 
        dfu_inst_type_reg = 0;
    end
end
assign dfu_inst_type = dfu_inst_type_reg ;

endmodule
