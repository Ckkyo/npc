`include "./vsrc/core/include/defines.v"
module wbu(
     input          core_clk     
    //,input          core_clk_en
    ,input          core_rst      

    //info  from  other  unit       
    ,input  [4:0]   dfu_wbu_dst   
    ,input  [63:0]  wbu_dst_data
    ,input          lsu_wbu_valid
    ,input  [5:0]   dfu_inst_type 

    //interact with rf
    ,output  [4:0]  wbu_rf_waddr   //if type is S or B,then waddr equal 0 just fine
    ,output  [63:0] wbu_rf_wdata
    ,output         wbu_rf_en

    ,input   [`DECODE_INFO_WIDTH-1:0] info
    ,input    [63:0]          pc 
);

//wire  [4:0] wbu_rf_waddr ;
//wire  [63:0]wbu_rf_wdata ;
assign wbu_rf_waddr = (dfu_inst_type[`INST_TYPE_S_RANGE]|
                    dfu_inst_type[`INST_TYPE_B_RANGE])?
                    0:dfu_wbu_dst;
assign wbu_rf_wdata = wbu_dst_data      
                      //| branch_wbu_dst_data   
                      //| lsu_wbu_data          
                      //| muldiv_wbu_dst_data
                      ;

assign wbu_rf_en = lsu_wbu_valid ;


//输出信息
//ALU
wire [`DECODE_INFO_ALU_WIDTH-1:0] dfu_alu_info = info[`DECODE_INFO_ALU_WIDTH-1:0] 
                                            & {`DECODE_INFO_ALU_WIDTH{info[`DECODE_INFO_ALU_BIT]}};
//CSR
wire [`DECODE_INFO_CSR_WIDTH-1:0] dfu_csr_info = info[`DECODE_INFO_CSR_WIDTH-1:0] 
                                            & {`DECODE_INFO_CSR_WIDTH{info[`DECODE_INFO_CSR_BIT]}};
//LSU
wire [`DECODE_INFO_LSU_WIDTH-1:0] dfu_lsu_info = info[`DECODE_INFO_LSU_WIDTH-1:0] 
                                            & {`DECODE_INFO_LSU_WIDTH{info[`DECODE_INFO_LSU_BIT]}};
//MULDIV
wire [`DECODE_INFO_MULDIV_WIDTH-1:0] dfu_muldiv_info = info[`DECODE_INFO_MULDIV_WIDTH-1:0] 
                                            & {`DECODE_INFO_MULDIV_WIDTH{info[`DECODE_INFO_MULDIV_BIT]}};
//BRANCH
wire [`DECODE_INFO_BRANCH_WIDTH-1:0] dfu_branch_info = info[`DECODE_INFO_BRANCH_WIDTH-1:0] 
                                            & {`DECODE_INFO_BRANCH_WIDTH{info[`DECODE_INFO_BRANCH_BIT]}};



`ifdef DEBUG_INFO
always @(posedge core_clk)begin 
    if(lsu_wbu_valid)begin
        case (1)
                //LUI
            dfu_alu_info[`LUI]     : begin
                $display("pc = %x       LUI",pc);
            end
                //AUIPC
            dfu_alu_info[`AUIPC]   : begin
                $display("pc = %x       AUIPC",pc);
            end
                //JAL
            dfu_branch_info[`JAL]     : begin
                $display("pc = %x       JAL",pc);
            end
                //JALR
            dfu_branch_info[`JALR]    : begin
                $display("pc = %x       JALR",pc);
            end
                //BEQ
            dfu_branch_info[`BEQ]  : begin
                $display("pc = %x       BEQ",pc);
            end
                //BNE
            dfu_branch_info[`BNE]  : begin
                $display("pc = %x       BNE",pc);
            end
                //BLT
            dfu_branch_info[`BLT]  : begin
                $display("pc = %x       BLT",pc);
            end
                //BGE
            dfu_branch_info[`BGE]  : begin
                $display("pc = %x       BGE",pc);
            end
                //BLTU
            dfu_branch_info[`BLTU] : begin
                $display("pc = %x       BLTU",pc);
            end
                //BGEU
            dfu_branch_info[`BGEU] : begin
                $display("pc = %x       BGEU",pc);
            end
                //LB
            dfu_lsu_info[`LB]      : begin
                $display("pc = %x       LB",pc);
            end
                //LH
            dfu_lsu_info[`LH]      : begin
                $display("pc = %x       LH",pc);
            end
                //LW
            dfu_lsu_info[`LW]      : begin
                $display("pc = %x       LW",pc);
            end
                //LD
            dfu_lsu_info[`LD]      : begin
                $display("pc = %x       LD",pc);
            end
                //LBU
            dfu_lsu_info[`LBU]     : begin
                $display("pc = %x       LBU",pc);
            end
                //LHU
            dfu_lsu_info[`LHU]     : begin
                $display("pc = %x       LHU",pc);
            end
                //LWU
            dfu_lsu_info[`LWU]     : begin
                $display("pc = %x       LWU",pc);
            end
                //SB
            dfu_lsu_info[`SB]      : begin
                $display("pc = %x       SB",pc);
            end
                //SH
            dfu_lsu_info[`SH]      : begin
                $display("pc = %x       SH",pc);
            end
                //SW
            dfu_lsu_info[`SW]      : begin
                $display("pc = %x       SW",pc);
            end
                //SD
            dfu_lsu_info[`SD]      : begin
                $display("pc = %x       SD",pc);
            end
                //ADDI
            dfu_alu_info[`ADDI]    : begin
                $display("pc = %x       ADDI",pc);
            end
                //ADDIW
            dfu_alu_info[`ADDIW]   : begin
                $display("pc = %x       ADDIW",pc);
            end
                //SLTI
            dfu_alu_info[`SLTI]    : begin
                $display("pc = %x       SLTI",pc);
            end
                //SLTIU
            dfu_alu_info[`SLTIU]   : begin
                $display("pc = %x       SLTIU",pc);
            end
                //XORI
            dfu_alu_info[`XORI]    : begin
                $display("pc = %x       XORI",pc);
            end
                //ORI
            dfu_alu_info[`ORI]     : begin
                $display("pc = %x       ORI",pc);
            end
                //ANDI
            dfu_alu_info[`ANDI]    : begin
                $display("pc = %x       ANDI",pc);
            end
                //SLLI
            dfu_alu_info[`SLLI]    : begin
                $display("pc = %x       SLLI",pc);
            end
                //SLLIW
            dfu_alu_info[`SLLIW]   : begin
                $display("pc = %x       SLLIW",pc);
            end
                //SRLI
            dfu_alu_info[`SRLI]    : begin
                $display("pc = %x       SRLI",pc);
            end
                //SRLIW
            dfu_alu_info[`SRLIW]   : begin
                $display("pc = %x       SRLIW",pc);   
            end
                //SRAI
            dfu_alu_info[`SRAI]    : begin
                $display("pc = %x       SRAI",pc);
            end
                //SRAIW
            dfu_alu_info[`SRAIW]   : begin
                $display("pc = %x       SRAIW",pc);
            end
                //ADD
            dfu_alu_info[`ADD]     : begin
                $display("pc = %x       ADD",pc);
            end
                //ADDW
            dfu_alu_info[`ADDW]    : begin
                $display("pc = %x       ADDW",pc);
            end
                //SUB
            dfu_alu_info[`SUB]     : begin
                $display("pc = %x       SUB",pc);
            end
                //SUBW
            dfu_alu_info[`SUBW]    : begin
                $display("pc = %x       SUBW",pc);
            end
                //SLL
            dfu_alu_info[`SLL]     : begin
                $display("pc = %x       SLL",pc);
            end
                //SLLW
            dfu_alu_info[`SLLW]    : begin
                $display("pc = %x       SLLW",pc);
            end
                //SLT
            dfu_alu_info[`SLT]     : begin
                $display("pc = %x       SLT",pc);
            end
                //SLTU
            dfu_alu_info[`SLTU]    : begin
                $display("pc = %x       SLTU",pc);
            end
                //XOR
            dfu_alu_info[`XOR]     : begin
                $display("pc = %x       XOR",pc);
            end
                //SRL
            dfu_alu_info[`SRL]     : begin
                $display("pc = %x       SRL",pc);
            end
                //SRLW
            dfu_alu_info[`SRLW]    : begin
                $display("pc = %x       SRLW",pc);
            end
                //SRA
            dfu_alu_info[`SRA]     : begin
                $display("pc = %x       SRA",pc);
            end
                //SRAW
            dfu_alu_info[`SRAW]    : begin
                $display("pc = %x       SRAW",pc);
            end
                //OR
            dfu_alu_info[`OR]      : begin
                $display("pc = %x       OR",pc);
            end
                //AND
            dfu_alu_info[`AND]     : begin
                $display("pc = %x       AND",pc);
            end
                //ECALL
            dfu_alu_info[`ECALL]   : begin
                $display("pc = %x       ECALL",pc);
            end
                //EBREAK
            dfu_alu_info[`EBREAK]  : begin
                $display("pc = %x       EBREAK",pc);
                //$finish();
            end
                //MUL
            dfu_muldiv_info[`MUL]     : begin
                $display("pc = %x       MUL",pc);
            end
                //MULH
            dfu_muldiv_info[`MULH]    : begin
                $display("pc = %x       MULH",pc);
            end
                //MULHSU
            dfu_muldiv_info[`MULHSU]  : begin
                $display("pc = %x       MULHSU",pc);
            end
                //MULHU
            dfu_muldiv_info[`MULHU]   : begin
                $display("pc = %x       MULHU",pc);
            end
                //DIV
            dfu_muldiv_info[`DIV]     : begin
                $display("pc = %x       DIV",pc);
            end
                //DIVU
            dfu_muldiv_info[`DIVU]    : begin
                $display("pc = %x       DIVU",pc);
            end
                //REM
            dfu_muldiv_info[`REM]     : begin
                $display("pc = %x       REM",pc);
            end
                //REMU
            dfu_muldiv_info[`REMU]    : begin
                $display("pc = %x       REMU",pc);
            end
                //MULW
            dfu_muldiv_info[`MULW]    : begin
                $display("pc = %x       MULW",pc);
            end
                //DIVW
            dfu_muldiv_info[`DIVW]    : begin
                $display("pc = %x       DIVW",pc);
            end
                //DIVUW
            dfu_muldiv_info[`DIVUW]   : begin
                $display("pc = %x       DIVUW",pc);
            end
                //REMW
            dfu_muldiv_info[`REMW]    : begin
                $display("pc = %x       REMW",pc);
            end
                //REMUW
            dfu_muldiv_info[`REMUW]   : begin
                $display("pc = %x       REMUW",pc);
            end
                //CSRRW
            dfu_csr_info[`CSRRW]    : begin
                $display("pc = %x       CSRRW",pc);
            end
                //CSRRS
            dfu_csr_info[`CSRRS]    : begin
                $display("pc = %x       CSRRS",pc);
            end
                //CSRRC
            dfu_csr_info[`CSRRC]    : begin
                $display("pc = %x       CSRRC",pc);
            end
                //CSRRWI
            dfu_csr_info[`CSRRWI]  : begin
                $display("pc = %x       CSRRWI",pc);
            end
                //CSRRSI
            dfu_csr_info[`CSRRSI]   : begin
                $display("pc = %x       CSRRSI",pc);
            end
                //CSRRCI
            dfu_csr_info[`CSRRCI]   : begin
                $display("pc = %x       CSRRCI",pc);
            end



            default: $display("pc = %x       NO MACHING INSTRUCTION",pc);
        endcase
    end
end
`endif // DEBUG_INFO
endmodule
