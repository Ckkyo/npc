// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__traceInitSub0(Vtb___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtb___024root__traceInitTop(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtb___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtb___024root__traceInitSub0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+334,"core_clk", false,-1);
        tracep->declBit(c+335,"core_rst", false,-1);
        tracep->declBit(c+336,"ebreak", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+337+i*2,"regfile", true,(i+0), 63,0);}}
        tracep->declQuad(c+401,"el_pc", false,-1, 63,0);
        tracep->declQuad(c+403,"lw_pc_delay", false,-1, 63,0);
        tracep->declBit(c+405,"lw_valid_delay", false,-1);
        tracep->declBit(c+334,"tb core_clk", false,-1);
        tracep->declBit(c+335,"tb core_rst", false,-1);
        tracep->declBit(c+336,"tb ebreak", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+337+i*2,"tb regfile", true,(i+0), 63,0);}}
        tracep->declQuad(c+401,"tb el_pc", false,-1, 63,0);
        tracep->declQuad(c+403,"tb lw_pc_delay", false,-1, 63,0);
        tracep->declBit(c+405,"tb lw_valid_delay", false,-1);
        tracep->declQuad(c+1,"tb lsu_memory_data", false,-1, 63,0);
        tracep->declQuad(c+164,"tb memory_lsu_data", false,-1, 63,0);
        tracep->declQuad(c+3,"tb lsu_memory_addr", false,-1, 63,0);
        tracep->declBit(c+5,"tb lsu_memory_dir", false,-1);
        tracep->declBit(c+6,"tb lsu_memory_valid", false,-1);
        tracep->declBus(c+7,"tb lsu_memory_width", false,-1, 3,0);
        tracep->declBit(c+406,"tb memory_lsu_ready", false,-1);
        tracep->declBit(c+166,"tb memory_lsu_valid", false,-1);
        tracep->declBus(c+175,"tb memory_ifu_data", false,-1, 31,0);
        tracep->declQuad(c+31,"tb ifu_memory_addr", false,-1, 63,0);
        tracep->declBit(c+33,"tb ifu_memory_valid", false,-1);
        tracep->declBit(c+176,"tb memory_ifu_valid", false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+167+i*2,"tb memory_lsu_data_delay", true,(i+-1), 63,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+171+i*1,"tb memory_lsu_valid_delay", true,(i+-1));}}
        tracep->declQuad(c+177,"tb lw_info", false,-1, 36,0);
        tracep->declQuad(c+179,"tb lw_pc", false,-1, 63,0);
        tracep->declBus(c+173,"tb delay_lsu i", false,-1, 31,0);
        tracep->declBit(c+334,"tb u_core_top core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top core_rst", false,-1);
        tracep->declQuad(c+1,"tb u_core_top lsu_memory_data", false,-1, 63,0);
        tracep->declQuad(c+164,"tb u_core_top memory_lsu_data", false,-1, 63,0);
        tracep->declQuad(c+3,"tb u_core_top lsu_memory_addr", false,-1, 63,0);
        tracep->declBit(c+5,"tb u_core_top lsu_memory_dir", false,-1);
        tracep->declBit(c+6,"tb u_core_top lsu_memory_valid", false,-1);
        tracep->declBus(c+7,"tb u_core_top lsu_memory_width", false,-1, 3,0);
        tracep->declBit(c+406,"tb u_core_top memory_lsu_ready", false,-1);
        tracep->declBit(c+166,"tb u_core_top memory_lsu_valid", false,-1);
        tracep->declBus(c+175,"tb u_core_top memory_ifu_data", false,-1, 31,0);
        tracep->declQuad(c+31,"tb u_core_top ifu_memory_addr", false,-1, 63,0);
        tracep->declBit(c+33,"tb u_core_top ifu_memory_valid", false,-1);
        tracep->declBit(c+176,"tb u_core_top memory_ifu_valid", false,-1);
        tracep->declQuad(c+31,"tb u_core_top pc", false,-1, 63,0);
        tracep->declBit(c+33,"tb u_core_top pc_valid", false,-1);
        tracep->declBit(c+407,"tb u_core_top pc_clear_all", false,-1);
        tracep->declBit(c+24,"tb u_core_top cyc_end", false,-1);
        tracep->declBus(c+25,"tb u_core_top clk_en", false,-1, 5,0);
        tracep->declBit(c+26,"tb u_core_top clk_en_ifu", false,-1);
        tracep->declBit(c+27,"tb u_core_top clk_en_dfu", false,-1);
        tracep->declBit(c+28,"tb u_core_top clk_en_exu", false,-1);
        tracep->declBit(c+29,"tb u_core_top clk_en_lsu", false,-1);
        tracep->declBit(c+30,"tb u_core_top clk_en_wbu", false,-1);
        tracep->declBus(c+175,"tb u_core_top ifu_dfu_inst", false,-1, 31,0);
        tracep->declQuad(c+8,"tb u_core_top ifu_dfu_pc", false,-1, 63,0);
        tracep->declBit(c+176,"tb u_core_top ifu_dfu_valid", false,-1);
        tracep->declBit(c+181,"tb u_core_top ifu_pc_pause", false,-1);
        tracep->declBus(c+10,"tb u_core_top dfu_exu_src1", false,-1, 4,0);
        tracep->declBus(c+11,"tb u_core_top dfu_exu_src2", false,-1, 4,0);
        tracep->declBus(c+12,"tb u_core_top dfu_wbu_dst", false,-1, 4,0);
        tracep->declBus(c+13,"tb u_core_top dfu_exu_imm", false,-1, 31,0);
        tracep->declBus(c+14,"tb u_core_top dfu_inst_type", false,-1, 5,0);
        tracep->declBit(c+182,"tb u_core_top dfu_exu_valid", false,-1);
        tracep->declQuad(c+15,"tb u_core_top dfu_info", false,-1, 36,0);
        tracep->declBus(c+183,"tb u_core_top exu_rf_raddr1", false,-1, 4,0);
        tracep->declBus(c+184,"tb u_core_top exu_rf_raddr2", false,-1, 4,0);
        tracep->declQuad(c+185,"tb u_core_top exu_wbu_dst_data", false,-1, 63,0);
        tracep->declQuad(c+187,"tb u_core_top exu_lsu_addr", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top exu_lsu_data", false,-1, 63,0);
        tracep->declQuad(c+191,"tb u_core_top branch_ifu_pc", false,-1, 63,0);
        tracep->declBit(c+193,"tb u_core_top branch_ifu_taken", false,-1);
        tracep->declBit(c+194,"tb u_core_top exu_valid", false,-1);
        tracep->declQuad(c+17,"tb u_core_top lsu_wbu_data", false,-1, 63,0);
        tracep->declBit(c+195,"tb u_core_top lsu_valid", false,-1);
        tracep->declBit(c+19,"tb u_core_top lsu_pause_before", false,-1);
        tracep->declBus(c+408,"tb u_core_top dfu_lsu_info", false,-1, 10,0);
        tracep->declBit(c+409,"tb u_core_top lsu_en", false,-1);
        tracep->declBus(c+196,"tb u_core_top wbu_rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+197,"tb u_core_top wbu_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+199,"tb u_core_top wbu_rf_en", false,-1);
        tracep->declQuad(c+200,"tb u_core_top rf_exu_rdata1", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top rf_exu_rdata2", false,-1, 63,0);
        tracep->declBit(c+24,"tb u_core_top core_pc_update", false,-1);
        tracep->declArray(c+202,"tb u_core_top id_dff", false,-1, 96,0);
        tracep->declArray(c+206,"tb u_core_top de_dff", false,-1, 186,0);
        tracep->declArray(c+212,"tb u_core_top el_dff", false,-1, 411,0);
        tracep->declArray(c+225,"tb u_core_top lw_dff", false,-1, 283,0);
        tracep->declBit(c+407,"tb u_core_top pause_ifu", false,-1);
        tracep->declBit(c+407,"tb u_core_top pause_dfu", false,-1);
        tracep->declBit(c+20,"tb u_core_top pause_exu", false,-1);
        tracep->declBit(c+19,"tb u_core_top pause_lsu", false,-1);
        tracep->declBit(c+407,"tb u_core_top pause_wbu", false,-1);
        tracep->declBit(c+407,"tb u_core_top clear_all", false,-1);
        tracep->declBit(c+21,"tb u_core_top pc_pause", false,-1);
        tracep->declBit(c+234,"tb u_core_top pc_clear_before_lw", false,-1);
        tracep->declBit(c+235,"tb u_core_top rawu_pause_before_and_exu", false,-1);
        tracep->declBit(c+334,"tb u_core_top u_clk_div core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top u_clk_div core_rst", false,-1);
        tracep->declBus(c+25,"tb u_core_top u_clk_div clk_en", false,-1, 5,0);
        tracep->declBit(c+334,"tb u_core_top u_ifu core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top u_ifu core_rst", false,-1);
        tracep->declBus(c+175,"tb u_core_top u_ifu memory_ifu_data", false,-1, 31,0);
        tracep->declQuad(c+31,"tb u_core_top u_ifu ifu_memory_addr", false,-1, 63,0);
        tracep->declBit(c+33,"tb u_core_top u_ifu ifu_memory_valid", false,-1);
        tracep->declBit(c+176,"tb u_core_top u_ifu memory_ifu_valid", false,-1);
        tracep->declBus(c+175,"tb u_core_top u_ifu ifu_dfu_inst", false,-1, 31,0);
        tracep->declQuad(c+8,"tb u_core_top u_ifu ifu_dfu_pc", false,-1, 63,0);
        tracep->declBit(c+176,"tb u_core_top u_ifu ifu_dfu_valid", false,-1);
        tracep->declBit(c+181,"tb u_core_top u_ifu ifu_pc_pause", false,-1);
        tracep->declQuad(c+31,"tb u_core_top u_ifu pc", false,-1, 63,0);
        tracep->declBit(c+33,"tb u_core_top u_ifu pc_valid", false,-1);
        tracep->declQuad(c+8,"tb u_core_top u_ifu ifu_dfu_pc_reg", false,-1, 63,0);
        tracep->declBit(c+334,"tb u_core_top u_dfu core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top u_dfu core_rst", false,-1);
        tracep->declQuad(c+236,"tb u_core_top u_dfu pc", false,-1, 63,0);
        tracep->declBus(c+238,"tb u_core_top u_dfu ifu_dfu_inst", false,-1, 31,0);
        tracep->declBit(c+182,"tb u_core_top u_dfu ifu_dfu_valid", false,-1);
        tracep->declBus(c+10,"tb u_core_top u_dfu dfu_exu_src1", false,-1, 4,0);
        tracep->declBus(c+11,"tb u_core_top u_dfu dfu_exu_src2", false,-1, 4,0);
        tracep->declBus(c+12,"tb u_core_top u_dfu dfu_wbu_dst", false,-1, 4,0);
        tracep->declBus(c+13,"tb u_core_top u_dfu dfu_exu_imm", false,-1, 31,0);
        tracep->declQuad(c+15,"tb u_core_top u_dfu dfu_info", false,-1, 36,0);
        tracep->declBus(c+14,"tb u_core_top u_dfu dfu_inst_type", false,-1, 5,0);
        tracep->declBit(c+182,"tb u_core_top u_dfu dfu_exu_valid", false,-1);
        tracep->declBus(c+410,"tb u_core_top u_dfu OPCODE_TYPE_R", false,-1, 5,0);
        tracep->declBus(c+411,"tb u_core_top u_dfu OPCODE_TYPE_I", false,-1, 5,0);
        tracep->declBus(c+412,"tb u_core_top u_dfu OPCODE_TYPE_S", false,-1, 5,0);
        tracep->declBus(c+413,"tb u_core_top u_dfu OPCODE_TYPE_B", false,-1, 5,0);
        tracep->declBus(c+414,"tb u_core_top u_dfu OPCODE_TYPE_U", false,-1, 5,0);
        tracep->declBus(c+415,"tb u_core_top u_dfu OPCODE_TYPE_J", false,-1, 5,0);
        tracep->declBus(c+239,"tb u_core_top u_dfu opcode_type", false,-1, 5,0);
        tracep->declBus(c+10,"tb u_core_top u_dfu dfu_exu_src1_reg", false,-1, 4,0);
        tracep->declBus(c+11,"tb u_core_top u_dfu dfu_exu_src2_reg", false,-1, 4,0);
        tracep->declBus(c+12,"tb u_core_top u_dfu dfu_wbu_dst_reg", false,-1, 4,0);
        tracep->declBus(c+13,"tb u_core_top u_dfu dfu_exu_imm_reg", false,-1, 31,0);
        tracep->declBus(c+240,"tb u_core_top u_dfu dfu_exu_imm_i", false,-1, 31,0);
        tracep->declBus(c+241,"tb u_core_top u_dfu dfu_exu_imm_s", false,-1, 31,0);
        tracep->declBus(c+242,"tb u_core_top u_dfu dfu_exu_imm_b", false,-1, 31,0);
        tracep->declBus(c+243,"tb u_core_top u_dfu dfu_exu_imm_u", false,-1, 31,0);
        tracep->declBus(c+244,"tb u_core_top u_dfu dfu_exu_imm_j", false,-1, 31,0);
        tracep->declQuad(c+15,"tb u_core_top u_dfu dfu_info_reg", false,-1, 36,0);
        tracep->declBus(c+245,"tb u_core_top u_dfu dfu_muldiv_info", false,-1, 12,0);
        tracep->declBus(c+246,"tb u_core_top u_dfu dfu_csr_info", false,-1, 5,0);
        tracep->declBus(c+247,"tb u_core_top u_dfu dfu_branch_info", false,-1, 7,0);
        tracep->declBus(c+248,"tb u_core_top u_dfu dfu_alu_info", false,-1, 31,0);
        tracep->declBus(c+249,"tb u_core_top u_dfu dfu_lsu_info", false,-1, 10,0);
        tracep->declBus(c+250,"tb u_core_top u_dfu opcode_and_funct", false,-1, 16,0);
        tracep->declBus(c+251,"tb u_core_top u_dfu opcode_and_funct_masked", false,-1, 16,0);
        tracep->declBus(c+252,"tb u_core_top u_dfu opcode_and_funct_mask", false,-1, 16,0);
        tracep->declBus(c+416,"tb u_core_top u_dfu OPCODE_AND_FUNCT_LUI", false,-1, 16,0);
        tracep->declBus(c+417,"tb u_core_top u_dfu OPCODE_AND_FUNCT_AUIPC", false,-1, 16,0);
        tracep->declBus(c+418,"tb u_core_top u_dfu OPCODE_AND_FUNCT_JAL", false,-1, 16,0);
        tracep->declBus(c+419,"tb u_core_top u_dfu OPCODE_AND_FUNCT_JALR", false,-1, 16,0);
        tracep->declBus(c+420,"tb u_core_top u_dfu OPCODE_AND_FUNCT_BEQ", false,-1, 16,0);
        tracep->declBus(c+421,"tb u_core_top u_dfu OPCODE_AND_FUNCT_BNE", false,-1, 16,0);
        tracep->declBus(c+422,"tb u_core_top u_dfu OPCODE_AND_FUNCT_BLT", false,-1, 16,0);
        tracep->declBus(c+423,"tb u_core_top u_dfu OPCODE_AND_FUNCT_BGE", false,-1, 16,0);
        tracep->declBus(c+424,"tb u_core_top u_dfu OPCODE_AND_FUNCT_BLTU", false,-1, 16,0);
        tracep->declBus(c+425,"tb u_core_top u_dfu OPCODE_AND_FUNCT_BGEU", false,-1, 16,0);
        tracep->declBus(c+426,"tb u_core_top u_dfu OPCODE_AND_FUNCT_LB", false,-1, 16,0);
        tracep->declBus(c+427,"tb u_core_top u_dfu OPCODE_AND_FUNCT_LH", false,-1, 16,0);
        tracep->declBus(c+428,"tb u_core_top u_dfu OPCODE_AND_FUNCT_LW", false,-1, 16,0);
        tracep->declBus(c+429,"tb u_core_top u_dfu OPCODE_AND_FUNCT_LD", false,-1, 16,0);
        tracep->declBus(c+430,"tb u_core_top u_dfu OPCODE_AND_FUNCT_LBU", false,-1, 16,0);
        tracep->declBus(c+431,"tb u_core_top u_dfu OPCODE_AND_FUNCT_LHU", false,-1, 16,0);
        tracep->declBus(c+432,"tb u_core_top u_dfu OPCODE_AND_FUNCT_LWU", false,-1, 16,0);
        tracep->declBus(c+433,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SB", false,-1, 16,0);
        tracep->declBus(c+434,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SH", false,-1, 16,0);
        tracep->declBus(c+435,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SW", false,-1, 16,0);
        tracep->declBus(c+436,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SD", false,-1, 16,0);
        tracep->declBus(c+437,"tb u_core_top u_dfu OPCODE_AND_FUNCT_ADDI", false,-1, 16,0);
        tracep->declBus(c+438,"tb u_core_top u_dfu OPCODE_AND_FUNCT_ADDIW", false,-1, 16,0);
        tracep->declBus(c+439,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SLTI", false,-1, 16,0);
        tracep->declBus(c+440,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SLTIU", false,-1, 16,0);
        tracep->declBus(c+441,"tb u_core_top u_dfu OPCODE_AND_FUNCT_XORI", false,-1, 16,0);
        tracep->declBus(c+442,"tb u_core_top u_dfu OPCODE_AND_FUNCT_ORI", false,-1, 16,0);
        tracep->declBus(c+443,"tb u_core_top u_dfu OPCODE_AND_FUNCT_ANDI", false,-1, 16,0);
        tracep->declBus(c+444,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SLLI", false,-1, 16,0);
        tracep->declBus(c+445,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SRLI", false,-1, 16,0);
        tracep->declBus(c+445,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SRAI", false,-1, 16,0);
        tracep->declBus(c+446,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SLLIW", false,-1, 16,0);
        tracep->declBus(c+447,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SRLIW", false,-1, 16,0);
        tracep->declBus(c+447,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SRAIW", false,-1, 16,0);
        tracep->declBus(c+448,"tb u_core_top u_dfu OPCODE_AND_FUNCT_ADD", false,-1, 16,0);
        tracep->declBus(c+449,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SUB", false,-1, 16,0);
        tracep->declBus(c+450,"tb u_core_top u_dfu OPCODE_AND_FUNCT_ADDW", false,-1, 16,0);
        tracep->declBus(c+451,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SUBW", false,-1, 16,0);
        tracep->declBus(c+452,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SLL", false,-1, 16,0);
        tracep->declBus(c+453,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SLLW", false,-1, 16,0);
        tracep->declBus(c+454,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SLT", false,-1, 16,0);
        tracep->declBus(c+455,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SLTU", false,-1, 16,0);
        tracep->declBus(c+456,"tb u_core_top u_dfu OPCODE_AND_FUNCT_XOR", false,-1, 16,0);
        tracep->declBus(c+457,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SRL", false,-1, 16,0);
        tracep->declBus(c+458,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SRA", false,-1, 16,0);
        tracep->declBus(c+459,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SRLW", false,-1, 16,0);
        tracep->declBus(c+460,"tb u_core_top u_dfu OPCODE_AND_FUNCT_SRAW", false,-1, 16,0);
        tracep->declBus(c+461,"tb u_core_top u_dfu OPCODE_AND_FUNCT_OR", false,-1, 16,0);
        tracep->declBus(c+462,"tb u_core_top u_dfu OPCODE_AND_FUNCT_AND", false,-1, 16,0);
        tracep->declBus(c+426,"tb u_core_top u_dfu OPCODE_AND_FUNCT_FENCE", false,-1, 16,0);
        tracep->declBus(c+426,"tb u_core_top u_dfu OPCODE_AND_FUNCT_FENCE_TSO", false,-1, 16,0);
        tracep->declBus(c+427,"tb u_core_top u_dfu OPCODE_AND_FUNCT_FENCE_I", false,-1, 16,0);
        tracep->declBus(c+463,"tb u_core_top u_dfu OPCODE_AND_FUNCT_ECALL", false,-1, 16,0);
        tracep->declBus(c+463,"tb u_core_top u_dfu OPCODE_AND_FUNCT_EBREAK", false,-1, 16,0);
        tracep->declBus(c+464,"tb u_core_top u_dfu OPCODE_AND_FUNCT_CSRRW", false,-1, 16,0);
        tracep->declBus(c+465,"tb u_core_top u_dfu OPCODE_AND_FUNCT_CSRRS", false,-1, 16,0);
        tracep->declBus(c+466,"tb u_core_top u_dfu OPCODE_AND_FUNCT_CSRRC", false,-1, 16,0);
        tracep->declBus(c+467,"tb u_core_top u_dfu OPCODE_AND_FUNCT_CSRRWI", false,-1, 16,0);
        tracep->declBus(c+468,"tb u_core_top u_dfu OPCODE_AND_FUNCT_CSRRSI", false,-1, 16,0);
        tracep->declBus(c+469,"tb u_core_top u_dfu OPCODE_AND_FUNCT_CSRRCI", false,-1, 16,0);
        tracep->declBus(c+470,"tb u_core_top u_dfu OPCODE_AND_FUNCT_MUL", false,-1, 16,0);
        tracep->declBus(c+471,"tb u_core_top u_dfu OPCODE_AND_FUNCT_MULH", false,-1, 16,0);
        tracep->declBus(c+472,"tb u_core_top u_dfu OPCODE_AND_FUNCT_MULHSU", false,-1, 16,0);
        tracep->declBus(c+473,"tb u_core_top u_dfu OPCODE_AND_FUNCT_MULHU", false,-1, 16,0);
        tracep->declBus(c+474,"tb u_core_top u_dfu OPCODE_AND_FUNCT_DIV", false,-1, 16,0);
        tracep->declBus(c+475,"tb u_core_top u_dfu OPCODE_AND_FUNCT_DIVU", false,-1, 16,0);
        tracep->declBus(c+476,"tb u_core_top u_dfu OPCODE_AND_FUNCT_REM", false,-1, 16,0);
        tracep->declBus(c+477,"tb u_core_top u_dfu OPCODE_AND_FUNCT_REMU", false,-1, 16,0);
        tracep->declBus(c+478,"tb u_core_top u_dfu OPCODE_AND_FUNCT_MULW", false,-1, 16,0);
        tracep->declBus(c+479,"tb u_core_top u_dfu OPCODE_AND_FUNCT_DIVW", false,-1, 16,0);
        tracep->declBus(c+480,"tb u_core_top u_dfu OPCODE_AND_FUNCT_DIVUW", false,-1, 16,0);
        tracep->declBus(c+481,"tb u_core_top u_dfu OPCODE_AND_FUNCT_REMW", false,-1, 16,0);
        tracep->declBus(c+482,"tb u_core_top u_dfu OPCODE_AND_FUNCT_REMUW", false,-1, 16,0);
        tracep->declBus(c+14,"tb u_core_top u_dfu dfu_inst_type_reg", false,-1, 5,0);
        tracep->declBit(c+334,"tb u_core_top u_exu_top core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top u_exu_top core_rst", false,-1);
        tracep->declQuad(c+253,"tb u_core_top u_exu_top pc", false,-1, 63,0);
        tracep->declBus(c+183,"tb u_core_top u_exu_top dfu_exu_src1", false,-1, 4,0);
        tracep->declBus(c+184,"tb u_core_top u_exu_top dfu_exu_src2", false,-1, 4,0);
        tracep->declBus(c+255,"tb u_core_top u_exu_top dfu_exu_imm", false,-1, 31,0);
        tracep->declQuad(c+256,"tb u_core_top u_exu_top dfu_info", false,-1, 36,0);
        tracep->declBit(c+194,"tb u_core_top u_exu_top dfu_exu_valid", false,-1);
        tracep->declBus(c+183,"tb u_core_top u_exu_top exu_rf_raddr1", false,-1, 4,0);
        tracep->declBus(c+184,"tb u_core_top u_exu_top exu_rf_raddr2", false,-1, 4,0);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top rf_exu_rdata1", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top rf_exu_rdata2", false,-1, 63,0);
        tracep->declQuad(c+187,"tb u_core_top u_exu_top exu_lsu_addr", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top exu_lsu_data", false,-1, 63,0);
        tracep->declQuad(c+191,"tb u_core_top u_exu_top branch_ifu_pc", false,-1, 63,0);
        tracep->declBit(c+193,"tb u_core_top u_exu_top branch_ifu_taken", false,-1);
        tracep->declQuad(c+185,"tb u_core_top u_exu_top exu_wbu_dst_data", false,-1, 63,0);
        tracep->declBit(c+194,"tb u_core_top u_exu_top exu_valid", false,-1);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top src1", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top src2", false,-1, 63,0);
        tracep->declQuad(c+258,"tb u_core_top u_exu_top imm", false,-1, 63,0);
        tracep->declBit(c+260,"tb u_core_top u_exu_top alu_en", false,-1);
        tracep->declBus(c+261,"tb u_core_top u_exu_top alu_info", false,-1, 31,0);
        tracep->declQuad(c+262,"tb u_core_top u_exu_top alu_wbu_dst_data", false,-1, 63,0);
        tracep->declBit(c+264,"tb u_core_top u_exu_top branch_en", false,-1);
        tracep->declBus(c+265,"tb u_core_top u_exu_top branch_info", false,-1, 7,0);
        tracep->declQuad(c+266,"tb u_core_top u_exu_top branch_wbu_dst_data", false,-1, 63,0);
        tracep->declBit(c+268,"tb u_core_top u_exu_top lsu_en", false,-1);
        tracep->declBus(c+483,"tb u_core_top u_exu_top lsu_info", false,-1, 10,0);
        tracep->declBit(c+269,"tb u_core_top u_exu_top muldiv_en", false,-1);
        tracep->declBus(c+270,"tb u_core_top u_exu_top muldiv_info", false,-1, 12,0);
        tracep->declQuad(c+271,"tb u_core_top u_exu_top muldiv_wbu_dst_data", false,-1, 63,0);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top u_alu src1", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top u_alu src2", false,-1, 63,0);
        tracep->declQuad(c+258,"tb u_core_top u_exu_top u_alu imm", false,-1, 63,0);
        tracep->declQuad(c+253,"tb u_core_top u_exu_top u_alu pc", false,-1, 63,0);
        tracep->declBit(c+260,"tb u_core_top u_exu_top u_alu alu_en", false,-1);
        tracep->declBus(c+261,"tb u_core_top u_exu_top u_alu alu_info", false,-1, 31,0);
        tracep->declQuad(c+262,"tb u_core_top u_exu_top u_alu alu_wbu_dst_data", false,-1, 63,0);
        tracep->declBus(c+273,"tb u_core_top u_exu_top u_alu shamt", false,-1, 5,0);
        tracep->declQuad(c+258,"tb u_core_top u_exu_top u_alu imm_u", false,-1, 63,0);
        tracep->declQuad(c+258,"tb u_core_top u_exu_top u_alu imm_s", false,-1, 63,0);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top u_alu src1_u", false,-1, 63,0);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top u_alu src1_s", false,-1, 63,0);
        tracep->declBus(c+274,"tb u_core_top u_exu_top u_alu src1_32u", false,-1, 31,0);
        tracep->declBus(c+274,"tb u_core_top u_exu_top u_alu src1_32s", false,-1, 31,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top u_alu src2_u", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top u_alu src2_s", false,-1, 63,0);
        tracep->declBus(c+275,"tb u_core_top u_exu_top u_alu src2_32u", false,-1, 31,0);
        tracep->declBus(c+275,"tb u_core_top u_exu_top u_alu src2_32s", false,-1, 31,0);
        tracep->declQuad(c+276,"tb u_core_top u_exu_top u_alu alu_format_64u", false,-1, 63,0);
        tracep->declQuad(c+278,"tb u_core_top u_exu_top u_alu alu_format_64s", false,-1, 63,0);
        tracep->declBus(c+280,"tb u_core_top u_exu_top u_alu alu_format_32u", false,-1, 31,0);
        tracep->declBus(c+281,"tb u_core_top u_exu_top u_alu alu_format_32s", false,-1, 31,0);
        tracep->declQuad(c+262,"tb u_core_top u_exu_top u_alu alu_wbu_dst_data_reg", false,-1, 63,0);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top u_branch src1", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top u_branch src2", false,-1, 63,0);
        tracep->declQuad(c+258,"tb u_core_top u_exu_top u_branch imm", false,-1, 63,0);
        tracep->declQuad(c+253,"tb u_core_top u_exu_top u_branch pc", false,-1, 63,0);
        tracep->declBit(c+264,"tb u_core_top u_exu_top u_branch branch_en", false,-1);
        tracep->declBus(c+265,"tb u_core_top u_exu_top u_branch branch_info", false,-1, 7,0);
        tracep->declQuad(c+266,"tb u_core_top u_exu_top u_branch branch_wbu_dst_data", false,-1, 63,0);
        tracep->declQuad(c+191,"tb u_core_top u_exu_top u_branch branch_ifu_pc", false,-1, 63,0);
        tracep->declBit(c+193,"tb u_core_top u_exu_top u_branch branch_ifu_taken", false,-1);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top u_branch src1_u", false,-1, 63,0);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top u_branch src1_s", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top u_branch src2_u", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top u_branch src2_s", false,-1, 63,0);
        tracep->declQuad(c+191,"tb u_core_top u_exu_top u_branch branch_ifu_pc_reg", false,-1, 63,0);
        tracep->declQuad(c+266,"tb u_core_top u_exu_top u_branch branch_wbu_dst_data_reg", false,-1, 63,0);
        tracep->declBit(c+193,"tb u_core_top u_exu_top u_branch branch_ifu_taken_reg", false,-1);
        tracep->declQuad(c+282,"tb u_core_top u_exu_top u_branch op1", false,-1, 63,0);
        tracep->declQuad(c+284,"tb u_core_top u_exu_top u_branch op2", false,-1, 63,0);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top u_exu_lsu src1", false,-1, 63,0);
        tracep->declQuad(c+258,"tb u_core_top u_exu_top u_exu_lsu imm", false,-1, 63,0);
        tracep->declBit(c+268,"tb u_core_top u_exu_top u_exu_lsu lsu_en", false,-1);
        tracep->declQuad(c+187,"tb u_core_top u_exu_top u_exu_lsu exu_lsu_addr", false,-1, 63,0);
        tracep->declQuad(c+187,"tb u_core_top u_exu_top u_exu_lsu exu_lsu_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top u_muldiv src1", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top u_muldiv src2", false,-1, 63,0);
        tracep->declQuad(c+258,"tb u_core_top u_exu_top u_muldiv imm", false,-1, 63,0);
        tracep->declBit(c+269,"tb u_core_top u_exu_top u_muldiv muldiv_en", false,-1);
        tracep->declBus(c+270,"tb u_core_top u_exu_top u_muldiv muldiv_info", false,-1, 12,0);
        tracep->declQuad(c+271,"tb u_core_top u_exu_top u_muldiv muldiv_wbu_dst_data", false,-1, 63,0);
        tracep->declQuad(c+258,"tb u_core_top u_exu_top u_muldiv imm_u", false,-1, 63,0);
        tracep->declQuad(c+258,"tb u_core_top u_exu_top u_muldiv imm_s", false,-1, 63,0);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top u_muldiv src1_u", false,-1, 63,0);
        tracep->declQuad(c+200,"tb u_core_top u_exu_top u_muldiv src1_s", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top u_muldiv src2_u", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_exu_top u_muldiv src2_s", false,-1, 63,0);
        tracep->declArray(c+286,"tb u_core_top u_exu_top u_muldiv muldiv_format_128u", false,-1, 127,0);
        tracep->declArray(c+290,"tb u_core_top u_exu_top u_muldiv muldiv_format_128s", false,-1, 127,0);
        tracep->declArray(c+294,"tb u_core_top u_exu_top u_muldiv muldiv_format_64u", false,-1, 127,0);
        tracep->declArray(c+298,"tb u_core_top u_exu_top u_muldiv muldiv_format_64s", false,-1, 127,0);
        tracep->declQuad(c+271,"tb u_core_top u_exu_top u_muldiv muldiv_wbu_dst_data_reg", false,-1, 63,0);
        tracep->declBit(c+334,"tb u_core_top u_lsu core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top u_lsu core_rst", false,-1);
        tracep->declQuad(c+302,"tb u_core_top u_lsu dfu_info", false,-1, 36,0);
        tracep->declQuad(c+304,"tb u_core_top u_lsu exu_lsu_addr", false,-1, 63,0);
        tracep->declQuad(c+306,"tb u_core_top u_lsu exu_lsu_data", false,-1, 63,0);
        tracep->declBit(c+308,"tb u_core_top u_lsu exu_lsu_valid", false,-1);
        tracep->declQuad(c+1,"tb u_core_top u_lsu lsu_memory_data", false,-1, 63,0);
        tracep->declQuad(c+3,"tb u_core_top u_lsu lsu_memory_addr", false,-1, 63,0);
        tracep->declBit(c+5,"tb u_core_top u_lsu lsu_memory_dir", false,-1);
        tracep->declBit(c+6,"tb u_core_top u_lsu lsu_memory_valid", false,-1);
        tracep->declBus(c+7,"tb u_core_top u_lsu lsu_memory_width", false,-1, 3,0);
        tracep->declQuad(c+164,"tb u_core_top u_lsu memory_lsu_data", false,-1, 63,0);
        tracep->declBit(c+166,"tb u_core_top u_lsu memory_lsu_valid", false,-1);
        tracep->declQuad(c+17,"tb u_core_top u_lsu lsu_wbu_data", false,-1, 63,0);
        tracep->declBit(c+195,"tb u_core_top u_lsu lsu_valid", false,-1);
        tracep->declBit(c+19,"tb u_core_top u_lsu lsu_pause_before", false,-1);
        tracep->declBus(c+484,"tb u_core_top u_lsu ST_NOT_LOAD_STORE", false,-1, 31,0);
        tracep->declBus(c+485,"tb u_core_top u_lsu ST_IS_LOAD_STORE", false,-1, 31,0);
        tracep->declBit(c+34,"tb u_core_top u_lsu st_cur", false,-1);
        tracep->declBit(c+22,"tb u_core_top u_lsu st_next", false,-1);
        tracep->declBit(c+309,"tb u_core_top u_lsu st_not_2_is", false,-1);
        tracep->declBit(c+166,"tb u_core_top u_lsu st_is_2_not", false,-1);
        tracep->declBit(c+19,"tb u_core_top u_lsu lsu_pause_before_reg", false,-1);
        tracep->declBus(c+310,"tb u_core_top u_lsu dfu_lsu_info", false,-1, 10,0);
        tracep->declBit(c+311,"tb u_core_top u_lsu lsu_en", false,-1);
        tracep->declBit(c+309,"tb u_core_top u_lsu is_load_store", false,-1);
        tracep->declBus(c+486,"tb u_core_top u_lsu READ", false,-1, 0,0);
        tracep->declBus(c+487,"tb u_core_top u_lsu WRITE", false,-1, 0,0);
        tracep->declQuad(c+1,"tb u_core_top u_lsu lsu_memory_data_reg", false,-1, 63,0);
        tracep->declQuad(c+3,"tb u_core_top u_lsu lsu_memory_addr_reg", false,-1, 63,0);
        tracep->declBit(c+5,"tb u_core_top u_lsu lsu_memory_dir_reg", false,-1);
        tracep->declBus(c+7,"tb u_core_top u_lsu lsu_memory_width_reg", false,-1, 3,0);
        tracep->declBit(c+6,"tb u_core_top u_lsu lsu_memory_valid_reg", false,-1);
        tracep->declQuad(c+17,"tb u_core_top u_lsu lsu_wbu_data_reg", false,-1, 63,0);
        tracep->declBit(c+334,"tb u_core_top u_wbu core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top u_wbu core_rst", false,-1);
        tracep->declBus(c+312,"tb u_core_top u_wbu dfu_wbu_dst", false,-1, 4,0);
        tracep->declQuad(c+197,"tb u_core_top u_wbu wbu_dst_data", false,-1, 63,0);
        tracep->declBit(c+199,"tb u_core_top u_wbu lsu_wbu_valid", false,-1);
        tracep->declBus(c+313,"tb u_core_top u_wbu dfu_inst_type", false,-1, 5,0);
        tracep->declBus(c+196,"tb u_core_top u_wbu wbu_rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+197,"tb u_core_top u_wbu wbu_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+199,"tb u_core_top u_wbu wbu_rf_en", false,-1);
        tracep->declQuad(c+177,"tb u_core_top u_wbu info", false,-1, 36,0);
        tracep->declQuad(c+179,"tb u_core_top u_wbu pc", false,-1, 63,0);
        tracep->declBus(c+314,"tb u_core_top u_wbu dfu_alu_info", false,-1, 31,0);
        tracep->declBus(c+315,"tb u_core_top u_wbu dfu_csr_info", false,-1, 5,0);
        tracep->declBus(c+316,"tb u_core_top u_wbu dfu_lsu_info", false,-1, 10,0);
        tracep->declBus(c+317,"tb u_core_top u_wbu dfu_muldiv_info", false,-1, 12,0);
        tracep->declBus(c+318,"tb u_core_top u_wbu dfu_branch_info", false,-1, 7,0);
        tracep->declBit(c+334,"tb u_core_top u_regfile core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top u_regfile core_rst", false,-1);
        tracep->declBit(c+199,"tb u_core_top u_regfile core_clk_en", false,-1);
        tracep->declBus(c+196,"tb u_core_top u_regfile rf_waddr", false,-1, 4,0);
        tracep->declBus(c+183,"tb u_core_top u_regfile rf_raddr1", false,-1, 4,0);
        tracep->declBus(c+184,"tb u_core_top u_regfile rf_raddr2", false,-1, 4,0);
        tracep->declQuad(c+197,"tb u_core_top u_regfile rf_wdata", false,-1, 63,0);
        tracep->declQuad(c+200,"tb u_core_top u_regfile rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_regfile rf_rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+35+i*2,"tb u_core_top u_regfile rf1", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+99+i*2,"tb u_core_top u_regfile rf2", true,(i+0), 63,0);}}
        tracep->declBus(c+163,"tb u_core_top u_regfile rf_write unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+334,"tb u_core_top u_info_pipeline core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top u_info_pipeline core_rst", false,-1);
        tracep->declBit(c+407,"tb u_core_top u_info_pipeline pause_ifu", false,-1);
        tracep->declBit(c+407,"tb u_core_top u_info_pipeline pause_dfu", false,-1);
        tracep->declBit(c+20,"tb u_core_top u_info_pipeline pause_exu", false,-1);
        tracep->declBit(c+19,"tb u_core_top u_info_pipeline pause_lsu", false,-1);
        tracep->declBit(c+407,"tb u_core_top u_info_pipeline pause_wbu", false,-1);
        tracep->declBit(c+407,"tb u_core_top u_info_pipeline clear_id", false,-1);
        tracep->declBit(c+407,"tb u_core_top u_info_pipeline clear_de", false,-1);
        tracep->declBit(c+407,"tb u_core_top u_info_pipeline clear_el", false,-1);
        tracep->declBit(c+407,"tb u_core_top u_info_pipeline clear_lw", false,-1);
        tracep->declBit(c+407,"tb u_core_top u_info_pipeline clear_all", false,-1);
        tracep->declBit(c+234,"tb u_core_top u_info_pipeline clear_before_lw", false,-1);
        tracep->declBit(c+488,"tb u_core_top u_info_pipeline id_clk_en", false,-1);
        tracep->declBit(c+488,"tb u_core_top u_info_pipeline de_clk_en", false,-1);
        tracep->declBit(c+488,"tb u_core_top u_info_pipeline el_clk_en", false,-1);
        tracep->declBit(c+488,"tb u_core_top u_info_pipeline lw_clk_en", false,-1);
        tracep->declBus(c+175,"tb u_core_top u_info_pipeline ifu_dfu_inst", false,-1, 31,0);
        tracep->declQuad(c+8,"tb u_core_top u_info_pipeline ifu_dfu_pc", false,-1, 63,0);
        tracep->declBit(c+176,"tb u_core_top u_info_pipeline ifu_dfu_valid", false,-1);
        tracep->declArray(c+202,"tb u_core_top u_info_pipeline id_dff", false,-1, 96,0);
        tracep->declBus(c+10,"tb u_core_top u_info_pipeline dfu_exu_src1", false,-1, 4,0);
        tracep->declBus(c+11,"tb u_core_top u_info_pipeline dfu_exu_src2", false,-1, 4,0);
        tracep->declBus(c+12,"tb u_core_top u_info_pipeline dfu_wbu_dst", false,-1, 4,0);
        tracep->declBus(c+13,"tb u_core_top u_info_pipeline dfu_exu_imm", false,-1, 31,0);
        tracep->declQuad(c+15,"tb u_core_top u_info_pipeline dfu_info", false,-1, 36,0);
        tracep->declBus(c+14,"tb u_core_top u_info_pipeline dfu_inst_type", false,-1, 5,0);
        tracep->declBit(c+182,"tb u_core_top u_info_pipeline dfu_exu_valid", false,-1);
        tracep->declArray(c+206,"tb u_core_top u_info_pipeline de_dff", false,-1, 186,0);
        tracep->declQuad(c+185,"tb u_core_top u_info_pipeline exu_wbu_dst_data", false,-1, 63,0);
        tracep->declQuad(c+187,"tb u_core_top u_info_pipeline exu_lsu_addr", false,-1, 63,0);
        tracep->declQuad(c+189,"tb u_core_top u_info_pipeline exu_lsu_data", false,-1, 63,0);
        tracep->declQuad(c+191,"tb u_core_top u_info_pipeline branch_ifu_pc", false,-1, 63,0);
        tracep->declBit(c+193,"tb u_core_top u_info_pipeline branch_ifu_taken", false,-1);
        tracep->declBit(c+194,"tb u_core_top u_info_pipeline exu_valid", false,-1);
        tracep->declArray(c+212,"tb u_core_top u_info_pipeline el_dff", false,-1, 411,0);
        tracep->declQuad(c+17,"tb u_core_top u_info_pipeline lsu_wbu_data", false,-1, 63,0);
        tracep->declBit(c+195,"tb u_core_top u_info_pipeline lsu_valid", false,-1);
        tracep->declArray(c+225,"tb u_core_top u_info_pipeline lw_dff", false,-1, 283,0);
        tracep->declArray(c+202,"tb u_core_top u_info_pipeline id_dff_reg", false,-1, 96,0);
        tracep->declBit(c+234,"tb u_core_top u_info_pipeline id_dff_clear", false,-1);
        tracep->declBit(c+23,"tb u_core_top u_info_pipeline id_dff_pause", false,-1);
        tracep->declArray(c+206,"tb u_core_top u_info_pipeline de_dff_reg", false,-1, 186,0);
        tracep->declBit(c+234,"tb u_core_top u_info_pipeline de_dff_clear", false,-1);
        tracep->declBit(c+23,"tb u_core_top u_info_pipeline de_dff_pause", false,-1);
        tracep->declArray(c+212,"tb u_core_top u_info_pipeline el_dff_reg", false,-1, 411,0);
        tracep->declBit(c+234,"tb u_core_top u_info_pipeline el_dff_clear", false,-1);
        tracep->declBit(c+19,"tb u_core_top u_info_pipeline el_dff_pause", false,-1);
        tracep->declArray(c+225,"tb u_core_top u_info_pipeline lw_dff_reg", false,-1, 283,0);
        tracep->declBit(c+407,"tb u_core_top u_info_pipeline lw_dff_clear", false,-1);
        tracep->declBit(c+407,"tb u_core_top u_info_pipeline lw_dff_pause", false,-1);
        tracep->declQuad(c+319,"tb u_core_top u_info_pipeline ifu_pc_el", false,-1, 63,0);
        tracep->declBit(c+321,"tb u_core_top u_info_pipeline ifu_pc_taken_el", false,-1);
        tracep->declQuad(c+322,"tb u_core_top u_info_pipeline ifu_pc_lw", false,-1, 63,0);
        tracep->declBit(c+324,"tb u_core_top u_info_pipeline ifu_pc_taken_lw", false,-1);
        tracep->declQuad(c+256,"tb u_core_top u_info_pipeline de_info", false,-1, 36,0);
        tracep->declQuad(c+302,"tb u_core_top u_info_pipeline el_info", false,-1, 36,0);
        tracep->declQuad(c+177,"tb u_core_top u_info_pipeline lw_info", false,-1, 36,0);
        tracep->declBit(c+334,"tb u_core_top u_pc_gen core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top u_pc_gen core_rst", false,-1);
        tracep->declQuad(c+322,"tb u_core_top u_pc_gen branch_pc", false,-1, 63,0);
        tracep->declBit(c+324,"tb u_core_top u_pc_gen branch_taken", false,-1);
        tracep->declQuad(c+177,"tb u_core_top u_pc_gen lw_info", false,-1, 36,0);
        tracep->declQuad(c+179,"tb u_core_top u_pc_gen lw_pc", false,-1, 63,0);
        tracep->declBit(c+21,"tb u_core_top u_pc_gen pc_pause", false,-1);
        tracep->declQuad(c+31,"tb u_core_top u_pc_gen pc", false,-1, 63,0);
        tracep->declBit(c+33,"tb u_core_top u_pc_gen pc_valid", false,-1);
        tracep->declBit(c+407,"tb u_core_top u_pc_gen pc_clear_all", false,-1);
        tracep->declBit(c+234,"tb u_core_top u_pc_gen pc_clear_before_lw", false,-1);
        tracep->declQuad(c+302,"tb u_core_top u_pc_gen el_info", false,-1, 36,0);
        tracep->declQuad(c+325,"tb u_core_top u_pc_gen el_pc", false,-1, 63,0);
        tracep->declQuad(c+319,"tb u_core_top u_pc_gen el_branch_pc", false,-1, 63,0);
        tracep->declBit(c+321,"tb u_core_top u_pc_gen el_branch_taken", false,-1);
        tracep->declBit(c+308,"tb u_core_top u_pc_gen el_valid", false,-1);
        tracep->declBit(c+327,"tb u_core_top u_pc_gen is_branch", false,-1);
        tracep->declQuad(c+31,"tb u_core_top u_pc_gen pc_reg", false,-1, 63,0);
        tracep->declBit(c+33,"tb u_core_top u_pc_gen pc_valid_reg", false,-1);
        tracep->declBit(c+334,"tb u_core_top u_rawu core_clk", false,-1);
        tracep->declBit(c+335,"tb u_core_top u_rawu core_rst", false,-1);
        tracep->declArray(c+202,"tb u_core_top u_rawu id_dff", false,-1, 96,0);
        tracep->declArray(c+206,"tb u_core_top u_rawu de_dff", false,-1, 186,0);
        tracep->declArray(c+212,"tb u_core_top u_rawu el_dff", false,-1, 411,0);
        tracep->declArray(c+225,"tb u_core_top u_rawu lw_dff", false,-1, 283,0);
        tracep->declBit(c+235,"tb u_core_top u_rawu rawu_pause_before_and_exu", false,-1);
        tracep->declBus(c+183,"tb u_core_top u_rawu exu_src1", false,-1, 4,0);
        tracep->declBus(c+184,"tb u_core_top u_rawu exu_src2", false,-1, 4,0);
        tracep->declBus(c+328,"tb u_core_top u_rawu exu_dst", false,-1, 4,0);
        tracep->declBit(c+194,"tb u_core_top u_rawu exu_valid", false,-1);
        tracep->declBus(c+329,"tb u_core_top u_rawu lsu_src1", false,-1, 4,0);
        tracep->declBus(c+330,"tb u_core_top u_rawu lsu_src2", false,-1, 4,0);
        tracep->declBus(c+331,"tb u_core_top u_rawu lsu_dst", false,-1, 4,0);
        tracep->declBit(c+308,"tb u_core_top u_rawu lsu_valid", false,-1);
        tracep->declBus(c+332,"tb u_core_top u_rawu wbu_src1", false,-1, 4,0);
        tracep->declBus(c+333,"tb u_core_top u_rawu wbu_src2", false,-1, 4,0);
        tracep->declBus(c+312,"tb u_core_top u_rawu wbu_dst", false,-1, 4,0);
        tracep->declBit(c+199,"tb u_core_top u_rawu wbu_valid", false,-1);
        tracep->declBit(c+334,"tb u_i_cache core_clk", false,-1);
        tracep->declQuad(c+31,"tb u_i_cache ifu_memory_addr", false,-1, 63,0);
        tracep->declBit(c+33,"tb u_i_cache ifu_memory_valid", false,-1);
        tracep->declBus(c+175,"tb u_i_cache memory_ifu_data", false,-1, 31,0);
        tracep->declBit(c+176,"tb u_i_cache memory_ifu_valid", false,-1);
        tracep->declBus(c+175,"tb u_i_cache memory_ifu_data_reg", false,-1, 31,0);
        tracep->declBit(c+176,"tb u_i_cache memory_ifu_valid_reg", false,-1);
        tracep->declBus(c+174,"tb u_i_cache rand_valid", false,-1, 31,0);
    }
}

void Vtb___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtb___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtb___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtb___024root__traceRegister(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtb___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtb___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtb___024root__traceCleanup, vlSelf);
    }
}

void Vtb___024root__traceFullSub0(Vtb___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtb___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtb___024root* const __restrict vlSelf = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtb___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtb___024root__traceFullSub0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg),64);
        tracep->fullQData(oldp+3,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg),64);
        tracep->fullBit(oldp+5,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg));
        tracep->fullBit(oldp+6,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_valid_reg));
        tracep->fullCData(oldp+7,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg),4);
        tracep->fullQData(oldp+8,(vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg),64);
        tracep->fullCData(oldp+10,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg),5);
        tracep->fullCData(oldp+11,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg),5);
        tracep->fullCData(oldp+12,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg),5);
        tracep->fullIData(oldp+13,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg),32);
        tracep->fullCData(oldp+14,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg),6);
        tracep->fullQData(oldp+15,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg),37);
        tracep->fullQData(oldp+17,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg),64);
        tracep->fullBit(oldp+19,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg));
        tracep->fullBit(oldp+20,(vlSelf->tb__DOT__u_core_top__DOT__pause_exu));
        tracep->fullBit(oldp+21,(vlSelf->tb__DOT__u_core_top__DOT__pc_pause));
        tracep->fullBit(oldp+22,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next));
        tracep->fullBit(oldp+23,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_pause));
        tracep->fullBit(oldp+24,((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en) 
                                        >> 5U))));
        tracep->fullCData(oldp+25,(vlSelf->tb__DOT__u_core_top__DOT__clk_en),6);
        tracep->fullBit(oldp+26,((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en))));
        tracep->fullBit(oldp+27,((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en) 
                                        >> 1U))));
        tracep->fullBit(oldp+28,((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en) 
                                        >> 2U))));
        tracep->fullBit(oldp+29,((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en) 
                                        >> 3U))));
        tracep->fullBit(oldp+30,((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en) 
                                        >> 4U))));
        tracep->fullQData(oldp+31,(vlSelf->tb__DOT__u_core_top__DOT__u_pc_gen__DOT__pc_reg),64);
        tracep->fullBit(oldp+33,(vlSelf->tb__DOT__u_core_top__DOT__u_pc_gen__DOT__pc_valid_reg));
        tracep->fullBit(oldp+34,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_cur));
        tracep->fullQData(oldp+35,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[0]),64);
        tracep->fullQData(oldp+37,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[1]),64);
        tracep->fullQData(oldp+39,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[2]),64);
        tracep->fullQData(oldp+41,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[3]),64);
        tracep->fullQData(oldp+43,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[4]),64);
        tracep->fullQData(oldp+45,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[5]),64);
        tracep->fullQData(oldp+47,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[6]),64);
        tracep->fullQData(oldp+49,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[7]),64);
        tracep->fullQData(oldp+51,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[8]),64);
        tracep->fullQData(oldp+53,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[9]),64);
        tracep->fullQData(oldp+55,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[10]),64);
        tracep->fullQData(oldp+57,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[11]),64);
        tracep->fullQData(oldp+59,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[12]),64);
        tracep->fullQData(oldp+61,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[13]),64);
        tracep->fullQData(oldp+63,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[14]),64);
        tracep->fullQData(oldp+65,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[15]),64);
        tracep->fullQData(oldp+67,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[16]),64);
        tracep->fullQData(oldp+69,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[17]),64);
        tracep->fullQData(oldp+71,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[18]),64);
        tracep->fullQData(oldp+73,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[19]),64);
        tracep->fullQData(oldp+75,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[20]),64);
        tracep->fullQData(oldp+77,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[21]),64);
        tracep->fullQData(oldp+79,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[22]),64);
        tracep->fullQData(oldp+81,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[23]),64);
        tracep->fullQData(oldp+83,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[24]),64);
        tracep->fullQData(oldp+85,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[25]),64);
        tracep->fullQData(oldp+87,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[26]),64);
        tracep->fullQData(oldp+89,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[27]),64);
        tracep->fullQData(oldp+91,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[28]),64);
        tracep->fullQData(oldp+93,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[29]),64);
        tracep->fullQData(oldp+95,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[30]),64);
        tracep->fullQData(oldp+97,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[31]),64);
        tracep->fullQData(oldp+99,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[0]),64);
        tracep->fullQData(oldp+101,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[1]),64);
        tracep->fullQData(oldp+103,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[2]),64);
        tracep->fullQData(oldp+105,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[3]),64);
        tracep->fullQData(oldp+107,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[4]),64);
        tracep->fullQData(oldp+109,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[5]),64);
        tracep->fullQData(oldp+111,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[6]),64);
        tracep->fullQData(oldp+113,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[7]),64);
        tracep->fullQData(oldp+115,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[8]),64);
        tracep->fullQData(oldp+117,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[9]),64);
        tracep->fullQData(oldp+119,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[10]),64);
        tracep->fullQData(oldp+121,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[11]),64);
        tracep->fullQData(oldp+123,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[12]),64);
        tracep->fullQData(oldp+125,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[13]),64);
        tracep->fullQData(oldp+127,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[14]),64);
        tracep->fullQData(oldp+129,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[15]),64);
        tracep->fullQData(oldp+131,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[16]),64);
        tracep->fullQData(oldp+133,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[17]),64);
        tracep->fullQData(oldp+135,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[18]),64);
        tracep->fullQData(oldp+137,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[19]),64);
        tracep->fullQData(oldp+139,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[20]),64);
        tracep->fullQData(oldp+141,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[21]),64);
        tracep->fullQData(oldp+143,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[22]),64);
        tracep->fullQData(oldp+145,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[23]),64);
        tracep->fullQData(oldp+147,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[24]),64);
        tracep->fullQData(oldp+149,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[25]),64);
        tracep->fullQData(oldp+151,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[26]),64);
        tracep->fullQData(oldp+153,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[27]),64);
        tracep->fullQData(oldp+155,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[28]),64);
        tracep->fullQData(oldp+157,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[29]),64);
        tracep->fullQData(oldp+159,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[30]),64);
        tracep->fullQData(oldp+161,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[31]),64);
        tracep->fullIData(oldp+163,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf_write__DOT__unnamedblk1__DOT__i),32);
        tracep->fullQData(oldp+164,(vlSelf->tb__DOT__memory_lsu_data),64);
        tracep->fullBit(oldp+166,(vlSelf->tb__DOT__memory_lsu_valid));
        tracep->fullQData(oldp+167,(vlSelf->tb__DOT__memory_lsu_data_delay[0]),64);
        tracep->fullQData(oldp+169,(vlSelf->tb__DOT__memory_lsu_data_delay[1]),64);
        tracep->fullBit(oldp+171,(vlSelf->tb__DOT__memory_lsu_valid_delay[0]));
        tracep->fullBit(oldp+172,(vlSelf->tb__DOT__memory_lsu_valid_delay[1]));
        tracep->fullIData(oldp+173,(vlSelf->tb__DOT__delay_lsu__DOT__i),32);
        tracep->fullIData(oldp+174,(vlSelf->tb__DOT__u_i_cache__DOT__rand_valid),32);
        tracep->fullIData(oldp+175,(vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg),32);
        tracep->fullBit(oldp+176,(vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_valid_reg));
        tracep->fullQData(oldp+177,((0x1fffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[4U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[3U])) 
                                           >> 0xfU)))),37);
        tracep->fullQData(oldp+179,((((QData)((IData)(
                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[0U])))),64);
        tracep->fullBit(oldp+181,((1U & (~ (IData)(vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_valid_reg)))));
        tracep->fullBit(oldp+182,((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[3U])));
        tracep->fullCData(oldp+183,((0x1fU & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[3U])),5);
        tracep->fullCData(oldp+184,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[3U] 
                                              >> 5U))),5);
        tracep->fullQData(oldp+185,(vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data),64);
        tracep->fullQData(oldp+187,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_exu_lsu__DOT__exu_lsu_addr_reg),64);
        tracep->fullQData(oldp+189,(vlSelf->tb__DOT__u_core_top__DOT__rf_exu_rdata2),64);
        tracep->fullQData(oldp+191,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__branch_ifu_pc_reg),64);
        tracep->fullBit(oldp+193,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__branch_ifu_taken_reg));
        tracep->fullBit(oldp+194,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+195,(vlSelf->tb__DOT__u_core_top__DOT__lsu_valid));
        tracep->fullCData(oldp+196,(vlSelf->tb__DOT__u_core_top__DOT__wbu_rf_waddr),5);
        tracep->fullQData(oldp+197,((((QData)((IData)(
                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[6U])) 
                                      << 0x26U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[5U])) 
                                                    << 6U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[4U])) 
                                                      >> 0x1aU)))),64);
        tracep->fullBit(oldp+199,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[8U] 
                                         >> 0x1bU))));
        tracep->fullQData(oldp+200,(vlSelf->tb__DOT__u_core_top__DOT__rf_exu_rdata1),64);
        tracep->fullWData(oldp+202,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg),97);
        tracep->fullWData(oldp+206,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg),187);
        tracep->fullWData(oldp+212,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg),412);
        tracep->fullWData(oldp+225,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg),284);
        tracep->fullBit(oldp+234,(vlSelf->tb__DOT__u_core_top__DOT__pc_clear_before_lw));
        tracep->fullBit(oldp+235,(vlSelf->tb__DOT__u_core_top__DOT__rawu_pause_before_and_exu));
        tracep->fullQData(oldp+236,((((QData)((IData)(
                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U])))),64);
        tracep->fullIData(oldp+238,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]),32);
        tracep->fullCData(oldp+239,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type),6);
        tracep->fullIData(oldp+240,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i),32);
        tracep->fullIData(oldp+241,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s),32);
        tracep->fullIData(oldp+242,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b),32);
        tracep->fullIData(oldp+243,((0xfffff000U & 
                                     vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])),32);
        tracep->fullIData(oldp+244,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j),32);
        tracep->fullSData(oldp+245,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info),13);
        tracep->fullCData(oldp+246,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info),6);
        tracep->fullCData(oldp+247,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info),8);
        tracep->fullIData(oldp+248,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info),32);
        tracep->fullSData(oldp+249,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info),11);
        tracep->fullIData(oldp+250,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct),17);
        tracep->fullIData(oldp+251,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked),17);
        tracep->fullIData(oldp+252,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask),17);
        tracep->fullQData(oldp+253,((((QData)((IData)(
                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[0U])))),64);
        tracep->fullIData(oldp+255,(((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[4U] 
                                      << 0x11U) | (
                                                   vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[3U] 
                                                   >> 0xfU))),32);
        tracep->fullQData(oldp+256,((0x1fffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[4U])) 
                                           >> 0xfU)))),37);
        tracep->fullQData(oldp+258,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__imm),64);
        tracep->fullBit(oldp+260,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                         >> 0x12U))));
        tracep->fullIData(oldp+261,(((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                      << 0x11U) | (
                                                   vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[4U] 
                                                   >> 0xfU))),32);
        tracep->fullQData(oldp+262,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_wbu_dst_data_reg),64);
        tracep->fullBit(oldp+264,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                         >> 0x11U))));
        tracep->fullCData(oldp+265,((0xffU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[4U] 
                                              >> 0xfU))),8);
        tracep->fullQData(oldp+266,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__branch_wbu_dst_data_reg),64);
        tracep->fullBit(oldp+268,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+269,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                         >> 0xfU))));
        tracep->fullSData(oldp+270,((0x1fffU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[4U] 
                                                >> 0xfU))),13);
        tracep->fullQData(oldp+271,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_wbu_dst_data_reg),64);
        tracep->fullCData(oldp+273,((0x3fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__imm))),6);
        tracep->fullIData(oldp+274,((IData)(vlSelf->tb__DOT__u_core_top__DOT__rf_exu_rdata1)),32);
        tracep->fullIData(oldp+275,((IData)(vlSelf->tb__DOT__u_core_top__DOT__rf_exu_rdata2)),32);
        tracep->fullQData(oldp+276,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_64u),64);
        tracep->fullQData(oldp+278,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_64s),64);
        tracep->fullIData(oldp+280,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_32u),32);
        tracep->fullIData(oldp+281,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_32s),32);
        tracep->fullQData(oldp+282,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__op1),64);
        tracep->fullQData(oldp+284,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__op2),64);
        tracep->fullWData(oldp+286,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u),128);
        tracep->fullWData(oldp+290,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s),128);
        tracep->fullWData(oldp+294,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u),128);
        tracep->fullWData(oldp+298,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s),128);
        tracep->fullQData(oldp+302,((0x1fffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[4U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) 
                                           >> 0xfU)))),37);
        tracep->fullQData(oldp+304,((((QData)((IData)(
                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[8U])) 
                                      << 0x26U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[7U])) 
                                                    << 6U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[6U])) 
                                                      >> 0x1aU)))),64);
        tracep->fullQData(oldp+306,((((QData)((IData)(
                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xaU])) 
                                      << 0x26U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[9U])) 
                                                    << 6U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[8U])) 
                                                      >> 0x1aU)))),64);
        tracep->fullBit(oldp+308,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xcU] 
                                         >> 0x1bU))));
        tracep->fullBit(oldp+309,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__is_load_store));
        tracep->fullSData(oldp+310,((0x7ffU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                                               >> 0xfU))),11);
        tracep->fullBit(oldp+311,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[4U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+312,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[3U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+313,((0x3fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[4U] 
                                              >> 0x14U))),6);
        tracep->fullIData(oldp+314,(vlSelf->tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_alu_info),32);
        tracep->fullCData(oldp+315,(vlSelf->tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_csr_info),6);
        tracep->fullSData(oldp+316,(vlSelf->tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_lsu_info),11);
        tracep->fullSData(oldp+317,(vlSelf->tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_muldiv_info),13);
        tracep->fullCData(oldp+318,(vlSelf->tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_branch_info),8);
        tracep->fullQData(oldp+319,((((QData)((IData)(
                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xcU])) 
                                      << 0x26U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xbU])) 
                                                    << 6U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xaU])) 
                                                      >> 0x1aU)))),64);
        tracep->fullBit(oldp+321,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xcU] 
                                         >> 0x1aU))));
        tracep->fullQData(oldp+322,((((QData)((IData)(
                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[8U])) 
                                      << 0x26U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[7U])) 
                                                    << 6U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[6U])) 
                                                      >> 0x1aU)))),64);
        tracep->fullBit(oldp+324,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[8U] 
                                         >> 0x1aU))));
        tracep->fullQData(oldp+325,((((QData)((IData)(
                                                      vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0U])))),64);
        tracep->fullBit(oldp+327,(vlSelf->tb__DOT__u_core_top__DOT__u_pc_gen__DOT__is_branch));
        tracep->fullCData(oldp+328,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[3U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+329,((0x1fU & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])),5);
        tracep->fullCData(oldp+330,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                                              >> 5U))),5);
        tracep->fullCData(oldp+331,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+332,((0x1fU & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[3U])),5);
        tracep->fullCData(oldp+333,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[3U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+334,(vlSelf->core_clk));
        tracep->fullBit(oldp+335,(vlSelf->core_rst));
        tracep->fullBit(oldp+336,(vlSelf->ebreak));
        tracep->fullQData(oldp+337,(vlSelf->regfile[0]),64);
        tracep->fullQData(oldp+339,(vlSelf->regfile[1]),64);
        tracep->fullQData(oldp+341,(vlSelf->regfile[2]),64);
        tracep->fullQData(oldp+343,(vlSelf->regfile[3]),64);
        tracep->fullQData(oldp+345,(vlSelf->regfile[4]),64);
        tracep->fullQData(oldp+347,(vlSelf->regfile[5]),64);
        tracep->fullQData(oldp+349,(vlSelf->regfile[6]),64);
        tracep->fullQData(oldp+351,(vlSelf->regfile[7]),64);
        tracep->fullQData(oldp+353,(vlSelf->regfile[8]),64);
        tracep->fullQData(oldp+355,(vlSelf->regfile[9]),64);
        tracep->fullQData(oldp+357,(vlSelf->regfile[10]),64);
        tracep->fullQData(oldp+359,(vlSelf->regfile[11]),64);
        tracep->fullQData(oldp+361,(vlSelf->regfile[12]),64);
        tracep->fullQData(oldp+363,(vlSelf->regfile[13]),64);
        tracep->fullQData(oldp+365,(vlSelf->regfile[14]),64);
        tracep->fullQData(oldp+367,(vlSelf->regfile[15]),64);
        tracep->fullQData(oldp+369,(vlSelf->regfile[16]),64);
        tracep->fullQData(oldp+371,(vlSelf->regfile[17]),64);
        tracep->fullQData(oldp+373,(vlSelf->regfile[18]),64);
        tracep->fullQData(oldp+375,(vlSelf->regfile[19]),64);
        tracep->fullQData(oldp+377,(vlSelf->regfile[20]),64);
        tracep->fullQData(oldp+379,(vlSelf->regfile[21]),64);
        tracep->fullQData(oldp+381,(vlSelf->regfile[22]),64);
        tracep->fullQData(oldp+383,(vlSelf->regfile[23]),64);
        tracep->fullQData(oldp+385,(vlSelf->regfile[24]),64);
        tracep->fullQData(oldp+387,(vlSelf->regfile[25]),64);
        tracep->fullQData(oldp+389,(vlSelf->regfile[26]),64);
        tracep->fullQData(oldp+391,(vlSelf->regfile[27]),64);
        tracep->fullQData(oldp+393,(vlSelf->regfile[28]),64);
        tracep->fullQData(oldp+395,(vlSelf->regfile[29]),64);
        tracep->fullQData(oldp+397,(vlSelf->regfile[30]),64);
        tracep->fullQData(oldp+399,(vlSelf->regfile[31]),64);
        tracep->fullQData(oldp+401,(vlSelf->el_pc),64);
        tracep->fullQData(oldp+403,(vlSelf->lw_pc_delay),64);
        tracep->fullBit(oldp+405,(vlSelf->lw_valid_delay));
        tracep->fullBit(oldp+406,(vlSelf->tb__DOT__memory_lsu_ready));
        tracep->fullBit(oldp+407,(0U));
        tracep->fullSData(oldp+408,(vlSelf->tb__DOT__u_core_top__DOT__dfu_lsu_info),11);
        tracep->fullBit(oldp+409,(vlSelf->tb__DOT__u_core_top__DOT__lsu_en));
        tracep->fullCData(oldp+410,(1U),6);
        tracep->fullCData(oldp+411,(2U),6);
        tracep->fullCData(oldp+412,(4U),6);
        tracep->fullCData(oldp+413,(8U),6);
        tracep->fullCData(oldp+414,(0x10U),6);
        tracep->fullCData(oldp+415,(0x20U),6);
        tracep->fullIData(oldp+416,(0x37U),17);
        tracep->fullIData(oldp+417,(0x17U),17);
        tracep->fullIData(oldp+418,(0x6fU),17);
        tracep->fullIData(oldp+419,(0x67U),17);
        tracep->fullIData(oldp+420,(0x63U),17);
        tracep->fullIData(oldp+421,(0xe3U),17);
        tracep->fullIData(oldp+422,(0x263U),17);
        tracep->fullIData(oldp+423,(0x2e3U),17);
        tracep->fullIData(oldp+424,(0x363U),17);
        tracep->fullIData(oldp+425,(0x3e3U),17);
        tracep->fullIData(oldp+426,(3U),17);
        tracep->fullIData(oldp+427,(0x83U),17);
        tracep->fullIData(oldp+428,(0x103U),17);
        tracep->fullIData(oldp+429,(0x183U),17);
        tracep->fullIData(oldp+430,(0x203U),17);
        tracep->fullIData(oldp+431,(0x283U),17);
        tracep->fullIData(oldp+432,(0x303U),17);
        tracep->fullIData(oldp+433,(0x23U),17);
        tracep->fullIData(oldp+434,(0xa3U),17);
        tracep->fullIData(oldp+435,(0x123U),17);
        tracep->fullIData(oldp+436,(0x1a3U),17);
        tracep->fullIData(oldp+437,(0x13U),17);
        tracep->fullIData(oldp+438,(0x1bU),17);
        tracep->fullIData(oldp+439,(0x113U),17);
        tracep->fullIData(oldp+440,(0x193U),17);
        tracep->fullIData(oldp+441,(0x213U),17);
        tracep->fullIData(oldp+442,(0x313U),17);
        tracep->fullIData(oldp+443,(0x393U),17);
        tracep->fullIData(oldp+444,(0x93U),17);
        tracep->fullIData(oldp+445,(0x293U),17);
        tracep->fullIData(oldp+446,(0x9bU),17);
        tracep->fullIData(oldp+447,(0x29bU),17);
        tracep->fullIData(oldp+448,(0x33U),17);
        tracep->fullIData(oldp+449,(0x8033U),17);
        tracep->fullIData(oldp+450,(0x3bU),17);
        tracep->fullIData(oldp+451,(0x803bU),17);
        tracep->fullIData(oldp+452,(0xb3U),17);
        tracep->fullIData(oldp+453,(0xbbU),17);
        tracep->fullIData(oldp+454,(0x133U),17);
        tracep->fullIData(oldp+455,(0x1b3U),17);
        tracep->fullIData(oldp+456,(0x233U),17);
        tracep->fullIData(oldp+457,(0x2b3U),17);
        tracep->fullIData(oldp+458,(0x82b3U),17);
        tracep->fullIData(oldp+459,(0x2bbU),17);
        tracep->fullIData(oldp+460,(0x82bbU),17);
        tracep->fullIData(oldp+461,(0x333U),17);
        tracep->fullIData(oldp+462,(0x3b3U),17);
        tracep->fullIData(oldp+463,(0x73U),17);
        tracep->fullIData(oldp+464,(0xf3U),17);
        tracep->fullIData(oldp+465,(0x173U),17);
        tracep->fullIData(oldp+466,(0x1f3U),17);
        tracep->fullIData(oldp+467,(0x2f3U),17);
        tracep->fullIData(oldp+468,(0x373U),17);
        tracep->fullIData(oldp+469,(0x3f3U),17);
        tracep->fullIData(oldp+470,(0x433U),17);
        tracep->fullIData(oldp+471,(0x4b3U),17);
        tracep->fullIData(oldp+472,(0x533U),17);
        tracep->fullIData(oldp+473,(0x5b3U),17);
        tracep->fullIData(oldp+474,(0x633U),17);
        tracep->fullIData(oldp+475,(0x6b3U),17);
        tracep->fullIData(oldp+476,(0x733U),17);
        tracep->fullIData(oldp+477,(0x7b3U),17);
        tracep->fullIData(oldp+478,(0x43bU),17);
        tracep->fullIData(oldp+479,(0x63bU),17);
        tracep->fullIData(oldp+480,(0x6bbU),17);
        tracep->fullIData(oldp+481,(0x73bU),17);
        tracep->fullIData(oldp+482,(0x7bbU),17);
        tracep->fullSData(oldp+483,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__lsu_info),11);
        tracep->fullIData(oldp+484,(0U),32);
        tracep->fullIData(oldp+485,(1U),32);
        tracep->fullBit(oldp+486,(0U));
        tracep->fullBit(oldp+487,(1U));
        tracep->fullBit(oldp+488,(1U));
    }
}
