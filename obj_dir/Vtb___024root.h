// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtb__Syms;
class Vtb_VerilatedVcd;
class Vtb___024unit;


//----------

VL_MODULE(Vtb___024root) {
  public:
    // CELLS
    Vtb___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(core_clk,0,0);
    VL_IN8(core_rst,0,0);
    VL_OUT8(ebreak,0,0);
    VL_OUT8(lw_valid_delay,0,0);
    VL_OUT64(el_pc,63,0);
    VL_OUT64(lw_pc_delay,63,0);
    VL_OUT64(regfile[32],63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb__DOT__memory_lsu_ready;
        CData/*0:0*/ tb__DOT__memory_lsu_valid;
        CData/*5:0*/ tb__DOT__u_core_top__DOT__clk_en;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__lsu_valid;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__lsu_en;
        CData/*4:0*/ tb__DOT__u_core_top__DOT__wbu_rf_waddr;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__pause_exu;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__pc_pause;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__pc_clear_before_lw;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__rawu_pause_before_and_exu;
        CData/*5:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type;
        CData/*4:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg;
        CData/*4:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg;
        CData/*4:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg;
        CData/*5:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info;
        CData/*7:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info;
        CData/*5:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__branch_ifu_taken_reg;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT__st_cur;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT__is_load_store;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg;
        CData/*3:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_valid_reg;
        CData/*5:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_csr_info;
        CData/*7:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_branch_info;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_pause;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_pc_gen__DOT__is_branch;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_pc_gen__DOT__pc_valid_reg;
        CData/*0:0*/ tb__DOT__u_i_cache__DOT__memory_ifu_valid_reg;
        SData/*10:0*/ tb__DOT__u_core_top__DOT__dfu_lsu_info;
        SData/*12:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info;
        SData/*10:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info;
        SData/*10:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__lsu_info;
        SData/*10:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_lsu_info;
        SData/*12:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_muldiv_info;
        IData/*31:0*/ tb__DOT__delay_lsu__DOT__i;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info;
        IData/*16:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct;
        IData/*16:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked;
        IData/*16:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_32u;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_32s;
        VlWide<4>/*127:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u;
        VlWide<4>/*127:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s;
        VlWide<4>/*127:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u;
        VlWide<4>/*127:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_alu_info;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_regfile__DOT__rf_write__DOT__unnamedblk1__DOT__i;
        VlWide<4>/*96:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg;
        VlWide<6>/*186:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg;
        VlWide<13>/*411:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg;
        VlWide<9>/*283:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg;
        IData/*31:0*/ tb__DOT__u_i_cache__DOT__memory_ifu_data_reg;
        IData/*31:0*/ tb__DOT__u_i_cache__DOT__rand_valid;
        QData/*63:0*/ tb__DOT__memory_lsu_data;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__exu_wbu_dst_data;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__rf_exu_rdata1;
    };
    struct {
        QData/*63:0*/ tb__DOT__u_core_top__DOT__rf_exu_rdata2;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg;
        QData/*36:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__imm;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_64u;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_64s;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_wbu_dst_data_reg;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__branch_ifu_pc_reg;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__branch_wbu_dst_data_reg;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__op1;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__op2;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_exu_lsu__DOT__exu_lsu_addr_reg;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_wbu_dst_data_reg;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_pc_gen__DOT__pc_reg;
        VlUnpacked<QData/*63:0*/, 2> tb__DOT__memory_lsu_data_delay;
        VlUnpacked<CData/*0:0*/, 2> tb__DOT__memory_lsu_valid_delay;
        VlUnpacked<QData/*63:0*/, 32> tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1;
        VlUnpacked<QData/*63:0*/, 32> tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb__DOT____Vtogcov__core_clk;
        CData/*0:0*/ tb__DOT____Vtogcov__core_rst;
        CData/*0:0*/ tb__DOT____Vtogcov__ebreak;
        CData/*0:0*/ tb__DOT____Vtogcov__lw_valid_delay;
        CData/*0:0*/ tb__DOT____Vtogcov__lsu_memory_dir;
        CData/*0:0*/ tb__DOT____Vtogcov__lsu_memory_valid;
        CData/*3:0*/ tb__DOT____Vtogcov__lsu_memory_width;
        CData/*0:0*/ tb__DOT____Vtogcov__memory_lsu_ready;
        CData/*0:0*/ tb__DOT____Vtogcov__memory_lsu_valid;
        CData/*0:0*/ tb__DOT____Vtogcov__ifu_memory_valid;
        CData/*0:0*/ tb__DOT____Vtogcov__memory_ifu_valid;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__pc_clear_all;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__cyc_end;
        CData/*5:0*/ tb__DOT__u_core_top__DOT____Vtogcov__clk_en;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__clk_en_ifu;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__clk_en_dfu;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__clk_en_exu;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__clk_en_lsu;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__clk_en_wbu;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__ifu_pc_pause;
        CData/*4:0*/ tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1;
        CData/*4:0*/ tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2;
        CData/*4:0*/ tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst;
        CData/*5:0*/ tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_valid;
        CData/*4:0*/ tb__DOT__u_core_top__DOT____Vtogcov__exu_rf_raddr1;
        CData/*4:0*/ tb__DOT__u_core_top__DOT____Vtogcov__exu_rf_raddr2;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__branch_ifu_taken;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__exu_valid;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__lsu_valid;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__lsu_pause_before;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__lsu_en;
        CData/*4:0*/ tb__DOT__u_core_top__DOT____Vtogcov__wbu_rf_waddr;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__wbu_rf_en;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__pause_exu;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__pc_pause;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__pc_clear_before_lw;
        CData/*0:0*/ tb__DOT__u_core_top__DOT____Vtogcov__rawu_pause_before_and_exu;
        CData/*5:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type;
        CData/*5:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info;
        CData/*7:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT____Vtogcov__exu_lsu_valid;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT____Vtogcov__st_cur;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT____Vtogcov__st_next;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT____Vtogcov__st_not_2_is;
        CData/*4:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT____Vtogcov__dfu_wbu_dst;
        CData/*5:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT____Vtogcov__dfu_inst_type;
        CData/*5:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT____Vtogcov__dfu_csr_info;
        CData/*7:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT____Vtogcov__dfu_branch_info;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT____Vtogcov__id_clk_en;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT____Vtogcov__id_dff_pause;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT____Vtogcov__ifu_pc_taken_el;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT____Vtogcov__ifu_pc_taken_lw;
        CData/*0:0*/ tb__DOT__u_core_top__DOT__u_pc_gen__DOT____Vtogcov__is_branch;
        CData/*4:0*/ tb__DOT__u_core_top__DOT__u_rawu__DOT____Vtogcov__lsu_src1;
        CData/*4:0*/ tb__DOT__u_core_top__DOT__u_rawu__DOT____Vtogcov__lsu_src2;
        CData/*4:0*/ tb__DOT__u_core_top__DOT__u_rawu__DOT____Vtogcov__lsu_dst;
        CData/*4:0*/ tb__DOT__u_core_top__DOT__u_rawu__DOT____Vtogcov__wbu_src1;
        CData/*4:0*/ tb__DOT__u_core_top__DOT__u_rawu__DOT____Vtogcov__wbu_src2;
        CData/*0:0*/ __Vtask_inst_fetch__3__ifu_memory_valid;
        CData/*0:0*/ __Vtask_inst_fetch__3__memory_ifu_valid;
        CData/*0:0*/ __Vclklast__TOP__core_clk;
        CData/*0:0*/ __Vclklast__TOP__core_rst;
        SData/*10:0*/ tb__DOT__u_core_top__DOT____Vtogcov__dfu_lsu_info;
    };
    struct {
        SData/*12:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info;
        SData/*10:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info;
        SData/*10:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT____Vtogcov__lsu_info;
        SData/*10:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT____Vtogcov__dfu_lsu_info;
        SData/*12:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT____Vtogcov__dfu_muldiv_info;
        IData/*31:0*/ tb__DOT____Vtogcov__memory_ifu_data;
        IData/*31:0*/ tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm;
        VlWide<4>/*96:0*/ tb__DOT__u_core_top__DOT____Vtogcov__id_dff;
        VlWide<6>/*186:0*/ tb__DOT__u_core_top__DOT____Vtogcov__de_dff;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info;
        IData/*16:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct;
        IData/*16:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked;
        IData/*16:0*/ tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT____Vtogcov__alu_format_32u;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT____Vtogcov__alu_format_32s;
        VlWide<4>/*127:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u;
        VlWide<4>/*127:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s;
        VlWide<4>/*127:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u;
        VlWide<4>/*127:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s;
        IData/*31:0*/ tb__DOT__u_core_top__DOT__u_wbu__DOT____Vtogcov__dfu_alu_info;
        IData/*31:0*/ __Vtask_inst_fetch__3__memory_ifu_data;
        QData/*63:0*/ tb__DOT____Vtogcov__el_pc;
        QData/*63:0*/ tb__DOT____Vtogcov__lw_pc_delay;
        QData/*63:0*/ tb__DOT____Vtogcov__lsu_memory_data;
        QData/*63:0*/ tb__DOT____Vtogcov__memory_lsu_data;
        QData/*63:0*/ tb__DOT____Vtogcov__lsu_memory_addr;
        QData/*63:0*/ tb__DOT____Vtogcov__ifu_memory_addr;
        QData/*36:0*/ tb__DOT____Vtogcov__lw_info;
        QData/*63:0*/ tb__DOT____Vtogcov__lw_pc;
        QData/*63:0*/ tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc;
        QData/*36:0*/ tb__DOT__u_core_top__DOT____Vtogcov__dfu_info;
        QData/*63:0*/ tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data;
        QData/*63:0*/ tb__DOT__u_core_top__DOT____Vtogcov__exu_lsu_addr;
        QData/*63:0*/ tb__DOT__u_core_top__DOT____Vtogcov__exu_lsu_data;
        QData/*63:0*/ tb__DOT__u_core_top__DOT____Vtogcov__branch_ifu_pc;
        QData/*63:0*/ tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data;
        QData/*63:0*/ tb__DOT__u_core_top__DOT____Vtogcov__wbu_rf_wdata;
        QData/*63:0*/ tb__DOT__u_core_top__DOT____Vtogcov__rf_exu_rdata1;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT____Vtogcov__imm;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT____Vtogcov__alu_wbu_dst_data;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT____Vtogcov__branch_wbu_dst_data;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT____Vtogcov__muldiv_wbu_dst_data;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT____Vtogcov__alu_format_64u;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT____Vtogcov__alu_format_64s;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT____Vtogcov__op1;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT____Vtogcov__op2;
        QData/*36:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT____Vtogcov__dfu_info;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT____Vtogcov__exu_lsu_addr;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_lsu__DOT____Vtogcov__exu_lsu_data;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT____Vtogcov__ifu_pc_el;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_info_pipeline__DOT____Vtogcov__ifu_pc_lw;
        QData/*63:0*/ tb__DOT__u_core_top__DOT__u_pc_gen__DOT____Vtogcov__el_pc;
        QData/*63:0*/ __Vtask_inst_fetch__3__ifu_memory_addr;
        QData/*63:0*/ __Vtask_inst_fetch__3__unnamedblk1__DOT__inst;
        QData/*63:0*/ __Vtask_dut_read_mem_with_len__4__value;
        VlUnpacked<QData/*63:0*/, 2> tb__DOT____Vtogcov__memory_lsu_data_delay;
        VlUnpacked<CData/*0:0*/, 2> tb__DOT____Vtogcov__memory_lsu_valid_delay;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtb___024root);  ///< Copying not allowed
  public:
    Vtb___024root(const char* name);
    ~Vtb___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
