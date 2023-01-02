//`define DEBUG_INFO



`define  RESET_VAL  (64'h0000_0000_8000_0000)

`define DEVICE_BASE ('ha0000000)
`define MMIO_BASE   ('ha0000000)

`define SERIAL_PORT     (`DEVICE_BASE + 'h00003f8)
`define KBD_ADDR        (`DEVICE_BASE + 'h0000060)
`define RTC_ADDR        (`DEVICE_BASE + 'h0000048)
`define VGACTL_ADDR     (`DEVICE_BASE + 'h0000100)
`define AUDIO_ADDR      (`DEVICE_BASE + 'h0000200)
`define DISK_ADDR       (`DEVICE_BASE + 'h0000300)
`define FB_ADDR         (`MMIO_BASE   + 'h1000000)
`define AUDIO_SBUF_ADDR (`MMIO_BASE   + 'h1200000)


//muldiv
    //MUL
`define MUL_LSB (0)
`define MUL_MSB (0)
`define MUL     `MUL_MSB:`MUL_LSB
    //MULH
`define MULH_LSB (1)
`define MULH_MSB (1)
`define MULH    `MULH_MSB:`MULH_LSB
    //MULHSU
`define MULHSU_LSB (2)
`define MULHSU_MSB (2)
`define MULHSU    `MULHSU_MSB:`MULHSU_LSB
    //MULHU
`define MULHU_LSB (3)
`define MULHU_MSB (3)
`define MULHU `MULHU_MSB:`MULHU_LSB
    //DIV
`define DIV_LSB (4)
`define DIV_MSB (4)
`define DIV `DIV_MSB:`DIV_LSB
    //DIVU
`define DIVU_LSB (5)
`define DIVU_MSB (5)
`define DIVU `DIVU_MSB:`DIVU_LSB
    //REM
`define REM_LSB (6)
`define REM_MSB (6)
`define REM `REM_MSB:`REM_LSB
    //REMU
`define REMU_LSB (7)
`define REMU_MSB (7)
`define REMU `REMU_MSB:`REMU_LSB
    //MULW
`define MULW_LSB (8)
`define MULW_MSB (8)
`define MULW `MULW_MSB:`MULW_LSB
    //DIVW
`define DIVW_LSB (9)
`define DIVW_MSB (9)
`define DIVW `DIVW_MSB:`DIVW_LSB
    //DIVUW
`define DIVUW_LSB (10)
`define DIVUW_MSB (10)
`define DIVUW `DIVUW_MSB:`DIVUW_LSB
    //REMW
`define REMW_LSB (11)
`define REMW_MSB (11)
`define REMW `REMW_MSB:`REMW_LSB
    //REMUW
`define REMUW_LSB (12)
`define REMUW_MSB (12)
`define REMUW `REMUW_MSB:`REMUW_LSB

`define DECODE_INFO_MULDIV_WIDTH (13)


//csr
    //CSRRW
`define CSRRW_LSB (0)
`define CSRRW_MSB (0)
`define CSRRW `CSRRW_MSB:`CSRRW_LSB
    //CSRRS
`define CSRRS_LSB (1)
`define CSRRS_MSB (1)
`define CSRRS `CSRRS_MSB:`CSRRS_LSB
    //CSRRC
`define CSRRC_LSB (2)
`define CSRRC_MSB (2)
`define CSRRC `CSRRC_MSB:`CSRRC_LSB
    //CSRRWI
`define CSRRWI_LSB (3)
`define CSRRWI_MSB (3)
`define CSRRWI `CSRRWI_MSB:`CSRRWI_LSB
    //CSRRSI
`define CSRRSI_LSB (4)
`define CSRRSI_MSB (4)
`define CSRRSI `CSRRSI_MSB:`CSRRSI_LSB
    //CSRRCI
`define CSRRCI_LSB (5)
`define CSRRCI_MSB (5)
`define CSRRCI `CSRRCI_MSB:`CSRRCI_LSB

`define DECODE_INFO_CSR_WIDTH (6)

//branch
    //JAL
`define JAL_LSB (0)
`define JAL_MSB (0)
`define JAL `JAL_MSB:`JAL_LSB
    //JALR
`define JALR_LSB (1)
`define JALR_MSB (1)
`define JALR `JALR_MSB:`JALR_LSB
    //BEQ
`define BEQ_LSB (2)
`define BEQ_MSB (2)
`define BEQ `BEQ_MSB:`BEQ_LSB
    //BNE
`define BNE_LSB (3)
`define BNE_MSB (3)
`define BNE `BNE_MSB:`BNE_LSB
    //BLT
`define BLT_LSB (4)
`define BLT_MSB (4)
`define BLT `BLT_MSB:`BLT_LSB
    //BGE
`define BGE_LSB (5)
`define BGE_MSB (5)
`define BGE `BGE_MSB:`BGE_LSB
    //BLTU
`define BLTU_LSB (6)
`define BLTU_MSB (6)
`define BLTU `BLTU_MSB:`BLTU_LSB
    //BGEU
`define BGEU_LSB (7)
`define BGEU_MSB (7)
`define BGEU `BGEU_MSB:`BGEU_LSB

`define DECODE_INFO_BRANCH_WIDTH (8)

//lsu
    //LB
`define LB_LSB (0)
`define LB_MSB (0)
`define LB `LB_MSB:`LB_LSB
    //LH
`define LH_LSB (1)
`define LH_MSB (1)
`define LH `LH_MSB:`LH_LSB
    //LW
`define LW_LSB (2)
`define LW_MSB (2)
`define LW `LW_MSB:`LW_LSB
    //LBU
`define LBU_LSB (3)
`define LBU_MSB (3)
`define LBU `LBU_MSB:`LBU_LSB
    //LHU
`define LHU_LSB (4)
`define LHU_MSB (4)
`define LHU `LHU_MSB:`LHU_LSB
    //SB
`define SB_LSB (5)
`define SB_MSB (5)
`define SB `SB_MSB:`SB_LSB
    //SH
`define SH_LSB (6)
`define SH_MSB (6)
`define SH `SH_MSB:`SH_LSB
    //SW
`define SW_LSB (7)
`define SW_MSB (7)
`define SW `SW_MSB:`SW_LSB
    //LWU
`define LWU_LSB (8)
`define LWU_MSB (8)
`define LWU `LWU_MSB:`LWU_LSB
    //LD
`define LD_LSB (9)
`define LD_MSB (9)
`define LD `LD_MSB:`LD_LSB
    //SD
`define SD_LSB (10)
`define SD_MSB (10)
`define SD `SD_MSB:`SD_LSB

`define DECODE_INFO_LSU_WIDTH (11)



//alu
    //LUI
`define LUI_LSB (0)
`define LUI_MSB (0)
`define LUI `LUI_MSB:`LUI_LSB
    //AUIPC
`define AUIPC_LSB (1)
`define AUIPC_MSB (1)
`define AUIPC `AUIPC_MSB:`AUIPC_LSB
    //ADDI
`define ADDI_LSB (2)
`define ADDI_MSB (2)
`define ADDI `ADDI_MSB:`ADDI_LSB
    //SLTI
`define SLTI_LSB (3)
`define SLTI_MSB (3)
`define SLTI `SLTI_MSB:`SLTI_LSB
    //SLTIU
`define SLTIU_LSB (4)
`define SLTIU_MSB (4)
`define SLTIU `SLTIU_MSB:`SLTIU_LSB
    //XORI
`define XORI_LSB (5)
`define XORI_MSB (5)
`define XORI `XORI_MSB:`XORI_LSB
    //ORI
`define ORI_LSB (6)
`define ORI_MSB (6)
`define ORI `ORI_MSB:`ORI_LSB
    //ANDI
`define ANDI_LSB (7)
`define ANDI_MSB (7)
`define ANDI `ANDI_MSB:`ANDI_LSB
    //SLLI
`define SLLI_LSB (8)
`define SLLI_MSB (8)
`define SLLI `SLLI_MSB:`SLLI_LSB
    //SRLI
`define SRLI_LSB (9)
`define SRLI_MSB (9)
`define SRLI `SRLI_MSB:`SRLI_LSB
    //SRAI
`define SRAI_LSB (10)
`define SRAI_MSB (10)
`define SRAI `SRAI_MSB:`SRAI_LSB
    //ADD
`define ADD_LSB (11)
`define ADD_MSB (11)
`define ADD `ADD_MSB:`ADD_LSB
    //SUB
`define SUB_LSB (12)
`define SUB_MSB (12)
`define SUB `SUB_MSB:`SUB_LSB
    //SLL
`define SLL_LSB (13)
`define SLL_MSB (13)
`define SLL `SLL_MSB:`SLL_LSB
    //SLT
`define SLT_LSB (14)
`define SLT_MSB (14)
`define SLT `SLT_MSB:`SLT_LSB
    //SLTU
`define SLTU_LSB (15)
`define SLTU_MSB (15)
`define SLTU `SLTU_MSB:`SLTU_LSB
    //XOR
`define XOR_LSB (16)
`define XOR_MSB (16)
`define XOR `XOR_MSB:`XOR_LSB
    //SRL
`define SRL_LSB (17)
`define SRL_MSB (17)
`define SRL `SRL_MSB:`SRL_LSB
    //SRA
`define SRA_LSB (18)
`define SRA_MSB (18)
`define SRA `SRA_MSB:`SRA_LSB
    //OR
`define OR_LSB (19)
`define OR_MSB (19)
`define OR `OR_MSB:`OR_LSB
    //AND
`define AND_LSB (20)
`define AND_MSB (20)
`define AND `AND_MSB:`AND_LSB
    //ADDIW
`define ADDIW_LSB (21)
`define ADDIW_MSB (21)
`define ADDIW `ADDIW_MSB:`ADDIW_LSB
    //SLLIW
`define SLLIW_LSB (22)
`define SLLIW_MSB (22)
`define SLLIW `SLLIW_MSB:`SLLIW_LSB
    //SRLIW
`define SRLIW_LSB (23)
`define SRLIW_MSB (23)
`define SRLIW `SRLIW_MSB:`SRLIW_LSB
    //SRAIW
`define SRAIW_LSB (24)
`define SRAIW_MSB (24)
`define SRAIW `SRAIW_MSB:`SRAIW_LSB
    //ADDW
`define ADDW_LSB (25)
`define ADDW_MSB (25)
`define ADDW `ADDW_MSB:`ADDW_LSB
    //SUBW
`define SUBW_LSB (26)
`define SUBW_MSB (26)
`define SUBW `SUBW_MSB:`SUBW_LSB
    //SLLW
`define SLLW_LSB (27)
`define SLLW_MSB (27)
`define SLLW `SLLW_MSB:`SLLW_LSB
    //SRLW
`define SRLW_LSB (28)
`define SRLW_MSB (28)
`define SRLW `SRLW_MSB:`SRLW_LSB
    //SRAW
`define SRAW_LSB (29)
`define SRAW_MSB (29)
`define SRAW `SRAW_MSB:`SRAW_LSB
    //ECALL
`define ECALL_LSB (30)
`define ECALL_MSB (30)
`define ECALL `ECALL_MSB:`ECALL_LSB
    //EBREAK
`define EBREAK_LSB (31)
`define EBREAK_MSB (31)
`define EBREAK `EBREAK_MSB:`EBREAK_LSB

`define DECODE_INFO_ALU_WIDTH (`EBREAK_MSB+1)

//wire []dfu_muldiv_info;
//wire []dfu_csr_info;
//wire []dfu_branch_info;
//wire []dfu_alu_info;
//wire []dfu_lsu_info;
`define DECODE_INFO_CHECK_WIDTH (5)
`define DECODE_INFO_WIDTH (`DECODE_INFO_ALU_WIDTH + `DECODE_INFO_CHECK_WIDTH)
`define DECODE_INFO_MULDIV (5'b0_0001)
`define DECODE_INFO_MULDIV_BIT (`DECODE_INFO_WIDTH-5)
`define DECODE_INFO_CSR (5'b0_0010)
`define DECODE_INFO_CSR_BIT (`DECODE_INFO_WIDTH-4)
`define DECODE_INFO_BRANCH (5'b0_0100)
`define DECODE_INFO_BRANCH_BIT (`DECODE_INFO_WIDTH-3)
`define DECODE_INFO_ALU (5'b0_1000)
`define DECODE_INFO_ALU_BIT (`DECODE_INFO_WIDTH-2)
`define DECODE_INFO_LSU (5'b1_0000)
`define DECODE_INFO_LSU_BIT (`DECODE_INFO_WIDTH-1)












`define INST_TYPE_R     (6'b00_0001)
`define INST_TYPE_I     (6'b00_0010)
`define INST_TYPE_S     (6'b00_0100)
`define INST_TYPE_B     (6'b00_1000)
`define INST_TYPE_U     (6'b01_0000)
`define INST_TYPE_J     (6'b10_0000)
`define INST_TYPE_R_RANGE     (0):(0)
`define INST_TYPE_I_RANGE     (1):(1)
`define INST_TYPE_S_RANGE     (2):(2)
`define INST_TYPE_B_RANGE     (3):(3)
`define INST_TYPE_U_RANGE     (4):(4)
`define INST_TYPE_J_RANGE     (5):(5)


/*
IFU TO DFU INFO
    pc      64
    inst    32
    valid   1
*/
//PC,WIDTH = 64
`define ID_REG_PC_WIDTH (64)
`define ID_REG_PC_MSB (63)
`define ID_REG_PC_LSB (0)
`define ID_REG_PC `ID_REG_PC_MSB : `ID_REG_PC_LSB
//INST,WIDTH = 32
`define ID_REG_INST_WIDTH (32)
`define ID_REG_INST_MSB ( `ID_REG_PC_MSB + `ID_REG_INST_WIDTH )
`define ID_REG_INST_LSB ( `ID_REG_PC_MSB + 1 )
`define ID_REG_INST `ID_REG_INST_MSB : `ID_REG_INST_LSB
//VALID,WIDTH = 1
`define ID_REG_VALID_WIDTH (1)
`define ID_REG_VALID_MSB ( `ID_REG_INST_MSB + `ID_REG_VALID_WIDTH )
`define ID_REG_VALID_LSB ( `ID_REG_INST_MSB + 1 )
`define ID_REG_VALID `ID_REG_VALID_MSB : `ID_REG_VALID_LSB
//WIDTH
`define ID_REG_WIDTH ( `ID_REG_VALID_MSB + 1 )

/*
DFU TO EXU INFO
    pc            64
    inst          32
    src1          5
    src2          5
    dst           5
    imm           32
    info          DECODE_INFO_WIDTH
    inst_type     6
    valid         1
*/
//PC,WIDTH = 64
`define DE_REG_PC_WIDTH (64)
`define DE_REG_PC_MSB (63)
`define DE_REG_PC_LSB (0)
`define DE_REG_PC `DE_REG_PC_MSB : `DE_REG_PC_LSB
//INST,WIDTH = 32
`define DE_REG_INST_WIDTH (32)
`define DE_REG_INST_MSB ( `DE_REG_PC_MSB + `DE_REG_INST_WIDTH )
`define DE_REG_INST_LSB ( `DE_REG_PC_MSB + 1 )
`define DE_REG_INST `DE_REG_INST_MSB : `DE_REG_INST_LSB
//SRC1,WIDTH = 5
`define DE_REG_SRC1_WIDTH (5)
`define DE_REG_SRC1_MSB ( `DE_REG_INST_MSB + `DE_REG_SRC1_WIDTH )
`define DE_REG_SRC1_LSB ( `DE_REG_INST_MSB + 1 )
`define DE_REG_SRC1 `DE_REG_SRC1_MSB : `DE_REG_SRC1_LSB
//SRC2,WIDTH = 5
`define DE_REG_SRC2_WIDTH (5)
`define DE_REG_SRC2_MSB ( `DE_REG_SRC1_MSB + `DE_REG_SRC2_WIDTH )
`define DE_REG_SRC2_LSB ( `DE_REG_SRC1_MSB + 1 )
`define DE_REG_SRC2 `DE_REG_SRC2_MSB : `DE_REG_SRC2_LSB
//DST,WIDTH = 5
`define DE_REG_DST_WIDTH (5)
`define DE_REG_DST_MSB ( `DE_REG_SRC2_MSB + `DE_REG_DST_WIDTH )
`define DE_REG_DST_LSB ( `DE_REG_SRC2_MSB + 1 )
`define DE_REG_DST `DE_REG_DST_MSB : `DE_REG_DST_LSB
//IMM,WIDTH = 32
`define DE_REG_IMM_WIDTH (32)
`define DE_REG_IMM_MSB ( `DE_REG_DST_MSB + `DE_REG_IMM_WIDTH )
`define DE_REG_IMM_LSB ( `DE_REG_DST_MSB + 1 )
`define DE_REG_IMM `DE_REG_IMM_MSB : `DE_REG_IMM_LSB
//INFO,WIDTH = DECODE_INFO_WIDTH
`define DE_REG_INFO_WIDTH (`DECODE_INFO_WIDTH)
`define DE_REG_INFO_MSB ( `DE_REG_IMM_MSB + `DE_REG_INFO_WIDTH )
`define DE_REG_INFO_LSB ( `DE_REG_IMM_MSB + 1 )
`define DE_REG_INFO `DE_REG_INFO_MSB : `DE_REG_INFO_LSB
//INST_TYPE,WIDTH = 6
`define DE_REG_INST_TYPE_WIDTH (6)
`define DE_REG_INST_TYPE_MSB ( `DE_REG_INFO_MSB + `DE_REG_INST_TYPE_WIDTH )
`define DE_REG_INST_TYPE_LSB ( `DE_REG_INFO_MSB + 1 )
`define DE_REG_INST_TYPE `DE_REG_INST_TYPE_MSB : `DE_REG_INST_TYPE_LSB
//VALID,WIDTH = 1
`define DE_REG_VALID_WIDTH (1)
`define DE_REG_VALID_MSB ( `DE_REG_INST_TYPE_MSB + `DE_REG_VALID_WIDTH )
`define DE_REG_VALID_LSB ( `DE_REG_INST_TYPE_MSB + 1 )
`define DE_REG_VALID `DE_REG_VALID_MSB : `DE_REG_VALID_LSB
//WIDTH
`define DE_REG_WIDTH ( `DE_REG_VALID_MSB + 1 )

/*
EXU TO LSU INFO
    pc            64
    inst          32
    src1          5
    src2          5
    dst           5
    //imm           32
    info          DECODE_INFO_WIDTH
    inst_type     6
    dst_data      64
    lsu_addr      64
    lsu_data      64
    ifu_pc        64
    ifu_taken     1
    valid         1
*/
//PC,WIDTH = 64
`define EL_REG_PC_WIDTH (64)
`define EL_REG_PC_MSB (63)
`define EL_REG_PC_LSB (0)
`define EL_REG_PC `EL_REG_PC_MSB : `EL_REG_PC_LSB
//INST,WIDTH = 32
`define EL_REG_INST_WIDTH (32)
`define EL_REG_INST_MSB ( `EL_REG_PC_MSB + `EL_REG_INST_WIDTH )
`define EL_REG_INST_LSB ( `EL_REG_PC_MSB + 1 )
`define EL_REG_INST `EL_REG_INST_MSB : `EL_REG_INST_LSB
//SRC1,WIDTH = 5
`define EL_REG_SRC1_WIDTH (5)
`define EL_REG_SRC1_MSB ( `EL_REG_INST_MSB + `EL_REG_SRC1_WIDTH )
`define EL_REG_SRC1_LSB ( `EL_REG_INST_MSB + 1 )
`define EL_REG_SRC1 `EL_REG_SRC1_MSB : `EL_REG_SRC1_LSB
//SRC2,WIDTH = 5
`define EL_REG_SRC2_WIDTH (5)
`define EL_REG_SRC2_MSB ( `EL_REG_SRC1_MSB + `EL_REG_SRC2_WIDTH )
`define EL_REG_SRC2_LSB ( `EL_REG_SRC1_MSB + 1 )
`define EL_REG_SRC2 `EL_REG_SRC2_MSB : `EL_REG_SRC2_LSB
//DST,WIDTH = 5
`define EL_REG_DST_WIDTH (5)
`define EL_REG_DST_MSB ( `EL_REG_SRC2_MSB + `EL_REG_DST_WIDTH )
`define EL_REG_DST_LSB ( `EL_REG_SRC2_MSB + 1 )
`define EL_REG_DST `EL_REG_DST_MSB : `EL_REG_DST_LSB
////IMM,WIDTH = 32
//`define EL_REG_IMM_WIDTH (32)
//`define EL_REG_IMM_MSB ( `EL_REG_DST_MSB + `EL_REG_IMM_WIDTH )
//`define EL_REG_IMM_LSB ( `EL_REG_DST_LSB + `EL_REG_IMM_WIDTH )
//`define EL_REG_IMM `EL_REG_IMM_MSB : `EL_REG_IMM_LSB
//INFO,WIDTH = DECODE_INFO_WIDTH
`define EL_REG_INFO_WIDTH (`DECODE_INFO_WIDTH)
`define EL_REG_INFO_MSB ( `EL_REG_DST_MSB + `EL_REG_INFO_WIDTH )
`define EL_REG_INFO_LSB ( `EL_REG_DST_MSB + 1 )
`define EL_REG_INFO `EL_REG_INFO_MSB : `EL_REG_INFO_LSB
//INST_TYPE,WIDTH = 6
`define EL_REG_INST_TYPE_WIDTH (6)
`define EL_REG_INST_TYPE_MSB ( `EL_REG_INFO_MSB + `EL_REG_INST_TYPE_WIDTH )
`define EL_REG_INST_TYPE_LSB ( `EL_REG_INFO_MSB + 1 )
`define EL_REG_INST_TYPE `EL_REG_INST_TYPE_MSB : `EL_REG_INST_TYPE_LSB
//DST_DATA,WIDTH = 64
`define EL_REG_DST_DATA_WIDTH (64)
`define EL_REG_DST_DATA_MSB ( `EL_REG_INST_TYPE_MSB + `EL_REG_DST_DATA_WIDTH )
`define EL_REG_DST_DATA_LSB ( `EL_REG_INST_TYPE_MSB + 1 )
`define EL_REG_DST_DATA `EL_REG_DST_DATA_MSB : `EL_REG_DST_DATA_LSB
//LSU_ADDR,WIDTH = 64
`define EL_REG_LSU_ADDR_WIDTH (64)
`define EL_REG_LSU_ADDR_MSB ( `EL_REG_DST_DATA_MSB + `EL_REG_LSU_ADDR_WIDTH )
`define EL_REG_LSU_ADDR_LSB ( `EL_REG_DST_DATA_MSB + 1 )
`define EL_REG_LSU_ADDR `EL_REG_LSU_ADDR_MSB : `EL_REG_LSU_ADDR_LSB
//LSU_DATA,WIDTH = 64
`define EL_REG_LSU_DATA_WIDTH (64)
`define EL_REG_LSU_DATA_MSB ( `EL_REG_LSU_ADDR_MSB + `EL_REG_LSU_DATA_WIDTH )
`define EL_REG_LSU_DATA_LSB ( `EL_REG_LSU_ADDR_MSB + 1 )
`define EL_REG_LSU_DATA `EL_REG_LSU_DATA_MSB : `EL_REG_LSU_DATA_LSB
//IFU_PC,WIDTH = 64
`define EL_REG_IFU_PC_WIDTH (64)
`define EL_REG_IFU_PC_MSB ( `EL_REG_LSU_DATA_MSB + `EL_REG_IFU_PC_WIDTH )
`define EL_REG_IFU_PC_LSB ( `EL_REG_LSU_DATA_MSB + 1 )
`define EL_REG_IFU_PC `EL_REG_IFU_PC_MSB : `EL_REG_IFU_PC_LSB
//IFU_TAKEN
`define EL_REG_IFU_TAKEN_WIDTH (1)
`define EL_REG_IFU_TAKEN_MSB ( `EL_REG_IFU_PC_MSB + `EL_REG_IFU_TAKEN_WIDTH )
`define EL_REG_IFU_TAKEN_LSB ( `EL_REG_IFU_PC_MSB + 1 )
`define EL_REG_IFU_TAKEN `EL_REG_IFU_TAKEN_MSB : `EL_REG_IFU_TAKEN_LSB
//VALID
`define EL_REG_VALID_WIDTH (1)
`define EL_REG_VALID_MSB ( `EL_REG_IFU_TAKEN_MSB + `EL_REG_VALID_WIDTH )
`define EL_REG_VALID_LSB ( `EL_REG_IFU_TAKEN_MSB + 1 )
`define EL_REG_VALID `EL_REG_VALID_MSB : `EL_REG_VALID_LSB
//WIDTH
`define EL_REG_WIDTH ( `EL_REG_VALID_MSB + 1 )

/*
LSU TO WBU
    pc            64
    inst          32
    src1          5
    src2          5
    dst           5
    //imm           32
    info          DECODE_INFO_WIDTH
    inst_type     6
    dst_data      64
    //lsu_addr      64
    //lsu_data      64
    ifu_pc        64
    ifu_taken     1
    valid         1
*/
//PC
`define LW_REG_PC_WIDTH (64)
`define LW_REG_PC_MSB (63)
`define LW_REG_PC_LSB (0)
`define LW_REG_PC `LW_REG_PC_MSB : `LW_REG_PC_LSB
//INST
`define LW_REG_INST_WIDTH (32)
`define LW_REG_INST_MSB ( `LW_REG_PC_MSB + `LW_REG_INST_WIDTH )
`define LW_REG_INST_LSB ( `LW_REG_PC_MSB + 1 )
`define LW_REG_INST `LW_REG_INST_MSB : `LW_REG_INST_LSB
//SRC1
`define LW_REG_SRC1_WIDTH (5)
`define LW_REG_SRC1_MSB ( `LW_REG_INST_MSB + `LW_REG_SRC1_WIDTH )
`define LW_REG_SRC1_LSB ( `LW_REG_INST_MSB + 1 )
`define LW_REG_SRC1 `LW_REG_SRC1_MSB : `LW_REG_SRC1_LSB
//SRC2
`define LW_REG_SRC2_WIDTH (5)
`define LW_REG_SRC2_MSB ( `LW_REG_SRC1_MSB + `LW_REG_SRC2_WIDTH )
`define LW_REG_SRC2_LSB ( `LW_REG_SRC1_MSB + 1 )
`define LW_REG_SRC2 `LW_REG_SRC2_MSB : `LW_REG_SRC2_LSB
//DST
`define LW_REG_DST_WIDTH (5)
`define LW_REG_DST_MSB ( `LW_REG_SRC2_MSB + `LW_REG_DST_WIDTH )
`define LW_REG_DST_LSB ( `LW_REG_SRC2_MSB + 1 )
`define LW_REG_DST `LW_REG_DST_MSB : `LW_REG_DST_LSB
//INFO
`define LW_REG_INFO_WIDTH (`DECODE_INFO_WIDTH)
`define LW_REG_INFO_MSB ( `LW_REG_DST_MSB + `LW_REG_INFO_WIDTH )
`define LW_REG_INFO_LSB ( `LW_REG_DST_MSB + 1 )
`define LW_REG_INFO `LW_REG_INFO_MSB : `LW_REG_INFO_LSB
//INST_TYPE
`define LW_REG_INST_TYPE_WIDTH (6)
`define LW_REG_INST_TYPE_MSB ( `LW_REG_INFO_MSB + `LW_REG_INST_TYPE_WIDTH )
`define LW_REG_INST_TYPE_LSB ( `LW_REG_INFO_MSB + 1 )
`define LW_REG_INST_TYPE `LW_REG_INST_TYPE_MSB : `LW_REG_INST_TYPE_LSB
//DST_DATA
`define LW_REG_DST_DATA_WIDTH (64)
`define LW_REG_DST_DATA_MSB ( `LW_REG_INST_TYPE_MSB + `LW_REG_DST_DATA_WIDTH )
`define LW_REG_DST_DATA_LSB ( `LW_REG_INST_TYPE_MSB + 1 )
`define LW_REG_DST_DATA `LW_REG_DST_DATA_MSB : `LW_REG_DST_DATA_LSB
//IFU_PC
`define LW_REG_IFU_PC_WIDTH (64)
`define LW_REG_IFU_PC_MSB ( `LW_REG_DST_DATA_MSB + `LW_REG_IFU_PC_WIDTH )
`define LW_REG_IFU_PC_LSB ( `LW_REG_DST_DATA_MSB + 1 )
`define LW_REG_IFU_PC `LW_REG_IFU_PC_MSB : `LW_REG_IFU_PC_LSB
//IFU_TAKEN
`define LW_REG_IFU_TAKEN_WIDTH (1)
`define LW_REG_IFU_TAKEN_MSB ( `LW_REG_IFU_PC_MSB + `LW_REG_IFU_TAKEN_WIDTH )
`define LW_REG_IFU_TAKEN_LSB ( `LW_REG_IFU_PC_MSB + 1 )
`define LW_REG_IFU_TAKEN `LW_REG_IFU_TAKEN_MSB : `LW_REG_IFU_TAKEN_LSB
//VALID
`define LW_REG_VALID_WIDTH (1)
`define LW_REG_VALID_MSB ( `LW_REG_IFU_TAKEN_MSB + `LW_REG_VALID_WIDTH )
`define LW_REG_VALID_LSB ( `LW_REG_IFU_TAKEN_MSB + 1 )
`define LW_REG_VALID `LW_REG_VALID_MSB : `LW_REG_VALID_LSB
//WIDTH
`define LW_REG_WIDTH ( `LW_REG_VALID_MSB + 1 )



