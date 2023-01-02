// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb___024root.h"
#include "Vtb__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtb___024root___combo__TOP__9(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___combo__TOP__9\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[3256]);
    if (vlSelf->core_rst) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[3255]);
        if (vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_cur) {
            if (vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_cur) {
                ++(vlSymsp->__Vcoverage[3252]);
                if (vlSelf->tb__DOT__memory_lsu_valid) {
                    ++(vlSymsp->__Vcoverage[3250]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[3251]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next = 1U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[3253]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[3249]);
            if (vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__is_load_store) {
                ++(vlSymsp->__Vcoverage[3247]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[3248]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next = 0U;
            }
        }
    }
    ++(vlSymsp->__Vcoverage[3266]);
    if (vlSelf->core_rst) {
        ++(vlSymsp->__Vcoverage[3264]);
    } else {
        ++(vlSymsp->__Vcoverage[3265]);
        if (vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_cur) {
            if (vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_cur) {
                ++(vlSymsp->__Vcoverage[3262]);
                if (vlSelf->tb__DOT__memory_lsu_valid) {
                    ++(vlSymsp->__Vcoverage[3260]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg = 0U;
                    vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_valid_reg = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[3261]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg = 1U;
                    vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_valid_reg = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[3263]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg = 0U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_valid_reg = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[3259]);
            if (vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__is_load_store) {
                ++(vlSymsp->__Vcoverage[3257]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg = 1U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_valid_reg = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[3258]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg = 0U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_valid_reg = 0U;
            }
        }
    }
    ++(vlSymsp->__Vcoverage[3282]);
    if (vlSelf->core_rst) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg = 0ULL;
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg = 0ULL;
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 0U;
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg = 0ULL;
    } else if (vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__is_load_store) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
            = (((QData)((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xaU])) 
                << 0x26U) | (((QData)((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[9U])) 
                              << 6U) | ((QData)((IData)(
                                                        vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[8U])) 
                                        >> 0x1aU)));
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
            = (((QData)((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[8U])) 
                << 0x26U) | (((QData)((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[7U])) 
                              << 6U) | ((QData)((IData)(
                                                        vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[6U])) 
                                        >> 0x1aU)));
        if ((1U & ((((((((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                          >> 0xfU) | (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                                      >> 0x10U)) | 
                        (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                         >> 0x11U)) | (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                                       >> 0x18U)) | 
                      (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                       >> 0x14U)) | (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                                     >> 0x15U)) | (
                                                   vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                                                   >> 0x16U)) 
                   | (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                      >> 0x19U)))) {
            if ((0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) {
                ++(vlSymsp->__Vcoverage[3267]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 0U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 1U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                    = (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->tb__DOT__memory_lsu_data 
                                                          >> 7U)))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->tb__DOT__memory_lsu_data)))));
            } else if ((0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) {
                ++(vlSymsp->__Vcoverage[3268]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 0U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 2U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                    = (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->tb__DOT__memory_lsu_data 
                                                          >> 0xfU)))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->tb__DOT__memory_lsu_data)))));
            } else if ((0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) {
                ++(vlSymsp->__Vcoverage[3269]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 0U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 4U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb__DOT__memory_lsu_data 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__memory_lsu_data)));
            } else if ((0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) {
                ++(vlSymsp->__Vcoverage[3270]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 0U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 8U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                    = vlSelf->tb__DOT__memory_lsu_data;
            } else if ((0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) {
                ++(vlSymsp->__Vcoverage[3271]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 1U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 1U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg = 0ULL;
            } else if ((0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) {
                ++(vlSymsp->__Vcoverage[3272]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 1U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 2U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg = 0ULL;
            } else if ((0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) {
                ++(vlSymsp->__Vcoverage[3273]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 1U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 4U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg = 0ULL;
            } else {
                ++(vlSymsp->__Vcoverage[3274]);
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 1U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 8U;
                vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg = 0ULL;
            }
        } else if ((0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) {
            ++(vlSymsp->__Vcoverage[3275]);
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 0U;
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 1U;
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                = (QData)((IData)((0xffU & (IData)(vlSelf->tb__DOT__memory_lsu_data))));
        } else if ((0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) {
            ++(vlSymsp->__Vcoverage[3276]);
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 0U;
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 2U;
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                = (QData)((IData)((0xffffU & (IData)(vlSelf->tb__DOT__memory_lsu_data))));
        } else if ((0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) {
            ++(vlSymsp->__Vcoverage[3277]);
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 0U;
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 4U;
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                = (QData)((IData)(vlSelf->tb__DOT__memory_lsu_data));
        } else {
            ++(vlSymsp->__Vcoverage[3278]);
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 0U;
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 0U;
            vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg = 0ULL;
        }
    } else {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg = 0ULL;
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg = 0ULL;
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg = 0U;
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg = 0U;
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg = 0ULL;
    }
    ++(vlSymsp->__Vcoverage[1610]);
    if (vlSelf->core_rst) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg = 0ULL;
    } else {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
            = vlSelf->tb__DOT__u_core_top__DOT__u_pc_gen__DOT__pc_reg;
    }
    ++(vlSymsp->__Vcoverage[1907]);
    if (vlSelf->core_rst) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg = 0U;
    } else if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[3U])) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg 
            = vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type;
    } else {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg = 0U;
    }
    ++(vlSymsp->__Vcoverage[1770]);
    if (vlSelf->core_rst) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg = 0U;
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg = 0U;
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg = 0U;
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
    } else if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[3U])) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg 
            = (0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        >> 0xfU));
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg 
            = (0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        >> 0x14U));
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg 
            = (0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        >> 7U));
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
            = (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
               >> 0x14U);
        if ((0x20U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            if ((0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else if ((8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else if ((4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else if ((2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1765]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                    = vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j;
            }
        } else if ((0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            if ((8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else if ((4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else if ((2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1764]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                    = (0xfffff000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]);
            }
        } else if ((8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            if ((4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else if ((2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1763]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                    = vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b;
            }
        } else if ((4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            if ((2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1762]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                    = vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s;
            }
        } else if ((2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
                ++(vlSymsp->__Vcoverage[1766]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1761]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                    = vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i;
            }
        } else {
            ++(vlSymsp->__Vcoverage[1766]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
        }
    } else {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg = 0U;
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg = 0U;
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg = 0U;
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg = 0U;
    }
    ++(vlSymsp->__Vcoverage[1903]);
    if (vlSelf->core_rst) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg = 0ULL;
    } else if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[3U])) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
            = ((0x1effffffffULL & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg) 
               | ((QData)((IData)((0U != (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)))) 
                  << 0x20U));
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
            = ((0x17ffffffffULL & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg) 
               | ((QData)((IData)((0U != vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info))) 
                  << 0x23U));
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
            = ((0x1dffffffffULL & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg) 
               | ((QData)((IData)((0U != (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info)))) 
                  << 0x21U));
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
            = ((0xfffffffffULL & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg) 
               | ((QData)((IData)((0U != (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)))) 
                  << 0x24U));
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
            = ((0x1bffffffffULL & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg) 
               | ((QData)((IData)((0U != (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)))) 
                  << 0x22U));
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
            = ((0x1f00000000ULL & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg) 
               | (IData)((IData)((((((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
                                     | vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
                                    | (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info)) 
                                   | (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)) 
                                  | (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)))));
    } else {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg = 0ULL;
    }
    if (((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next) 
         ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT____Vtogcov__st_next))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT____Vtogcov__st_next 
            = vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next;
    }
    if (((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_valid_reg) 
         ^ (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_valid))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_valid 
            = vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_valid_reg;
    }
    if (((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg) 
         ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_pause_before))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_pause_before 
            = vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg;
    }
    vlSelf->tb__DOT__u_core_top__DOT__pause_exu = ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg) 
                                                   | (IData)(vlSelf->tb__DOT__u_core_top__DOT__rawu_pause_before_and_exu));
    vlSelf->tb__DOT__u_core_top__DOT__pc_pause = (1U 
                                                  & (((~ (IData)(vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_valid_reg)) 
                                                      | (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg)) 
                                                     | (IData)(vlSelf->tb__DOT__u_core_top__DOT__rawu_pause_before_and_exu)));
    if (((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg) 
         ^ (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_dir))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_dir 
            = vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg;
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg) 
               ^ (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_width)))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_width 
            = ((0xeU & (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_width)) 
               | (1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg)));
    }
    if ((2U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg) 
               ^ (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_width)))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_width 
            = ((0xdU & (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_width)) 
               | (2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg)));
    }
    if ((4U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg) 
               ^ (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_width)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_width 
            = ((0xbU & (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_width)) 
               | (4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg)));
    }
    if ((8U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg) 
               ^ (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_width)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_width 
            = ((7U & (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_width)) 
               | (8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg)));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg) 
               ^ (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_data)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffffffeULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg)))));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 1U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffffffdULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 2U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffffffbULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 3U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffffff7ULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 4U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffffffefULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 5U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffffffdfULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 6U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffffffbfULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 7U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffffff7fULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 8U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffffeffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 9U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffffdffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0xaU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffffbffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0xbU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffff7ffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0xcU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffffefffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0xdU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffffdfffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0xeU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffffbfffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0xfU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffff7fffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x10U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffeffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x11U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffdffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x12U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffffbffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x13U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffff7ffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x14U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffefffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x15U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffdfffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x16U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffffbfffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x17U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffff7fffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x18U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffeffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x19U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffdffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x1aU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffffbffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x1bU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffff7ffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x1cU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffefffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x1dU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffdfffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x1eU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffffbfffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x1fU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffff7fffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x20U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffeffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x21U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffdffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x22U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffffbffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x23U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffff7ffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x24U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffefffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x25U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffdfffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x26U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffffbfffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x27U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffff7fffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x28U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffeffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x29U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffdffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x2aU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffffbffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x2bU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffff7ffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x2cU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffefffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x2dU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffdfffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x2eU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffffbfffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x2fU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffff7fffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x30U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffeffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x31U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffdffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x32U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfffbffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x33U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfff7ffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x34U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffefffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x35U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffdfffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x36U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xffbfffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x37U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xff7fffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x38U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfeffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x39U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfdffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x3aU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xfbffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x3bU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xf7ffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x3cU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xefffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x3dU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xdfffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x3eU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0xbfffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                        >> 0x3fU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_data 
            = ((0x7fffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg) 
               ^ (IData)(vlSelf->tb__DOT____Vtogcov__lsu_memory_addr)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffffffeULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | (IData)((IData)((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg)))));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 1U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffffffdULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 2U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffffffbULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 3U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffffff7ULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 4U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffffffefULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 5U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffffffdfULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 6U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffffffbfULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 7U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffffff7fULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 8U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffffeffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 9U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffffdffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0xaU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffffbffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0xbU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffff7ffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0xcU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffffefffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0xdU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffffdfffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0xeU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffffbfffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0xfU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffff7fffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x10U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffeffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x11U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffdffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x12U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffffbffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x13U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffff7ffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x14U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffefffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x15U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffdfffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x16U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffffbfffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x17U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffff7fffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x18U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffeffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x19U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffdffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x1aU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffffbffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x1bU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffff7ffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x1cU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffefffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x1dU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffdfffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x1eU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffffbfffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x1fU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffff7fffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x20U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffeffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x21U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffdffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x22U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffffbffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x23U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffff7ffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x24U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffefffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x25U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffdfffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x26U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffffbfffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x27U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffff7fffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x28U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffeffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x29U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffdffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x2aU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffffbffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x2bU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffff7ffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x2cU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffefffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x2dU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffdfffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x2eU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffffbfffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x2fU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffff7fffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x30U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffeffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x31U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffdffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x32U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfffbffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x33U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfff7ffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x34U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffefffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x35U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffdfffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x36U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xffbfffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x37U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xff7fffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x38U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfeffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x39U)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfdffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x3aU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xfbffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x3bU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xf7ffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x3cU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xefffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x3dU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xdfffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x3eU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0xbfffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                        >> 0x3fU)) ^ (IData)((vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->tb__DOT____Vtogcov__lsu_memory_addr 
            = ((0x7fffffffffffffffULL & vlSelf->tb__DOT____Vtogcov__lsu_memory_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data)))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffffffeULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg)))));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 1U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffffffdULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 2U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffffffbULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 3U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffffff7ULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 4U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffffffefULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 5U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffffffdfULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 6U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffffffbfULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 7U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffffff7fULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 8U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffffeffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 9U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffffdffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0xaU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffffbffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0xbU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffff7ffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0xcU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffffefffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0xdU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffffdfffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0xeU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffffbfffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0xfU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffff7fffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x10U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffeffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x11U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffdffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x12U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffffbffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x13U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffff7ffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x14U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffefffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x15U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffdfffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x16U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffffbfffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x17U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffff7fffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x18U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffeffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x19U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffdffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x1aU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffffbffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x1bU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffff7ffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x1cU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffefffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x1dU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffdfffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x1eU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffffbfffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x1fU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffff7fffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x20U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffeffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x21U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffdffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x22U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffffbffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x23U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffff7ffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x24U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffefffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x25U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffdfffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x26U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffffbfffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x27U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffff7fffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x28U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffeffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x29U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffdffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x2aU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffffbffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x2bU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffff7ffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x2cU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffefffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x2dU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffdfffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x2eU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffffbfffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x2fU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffff7fffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x30U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffeffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x31U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffdffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x32U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfffbffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x33U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfff7ffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x34U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffefffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x35U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffdfffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x36U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xffbfffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x37U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xff7fffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x38U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfeffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x39U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfdffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x3aU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xfbffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x3bU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xf7ffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x3cU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xefffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x3dU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xdfffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x3eU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0xbfffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                        >> 0x3fU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data 
            = ((0x7fffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__lsu_wbu_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc)))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffffffeULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg)))));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 1U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffffffdULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 2U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffffffbULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 3U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 4U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffffffefULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 5U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffffffdfULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 6U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffffffbfULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 7U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffffff7fULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 8U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffffeffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 9U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffffdffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0xaU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffffbffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0xbU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0xcU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffffefffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0xdU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffffdfffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0xeU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffffbfffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0xfU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffff7fffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x10U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffeffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x11U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffdffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x12U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffffbffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x13U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x14U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffefffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x15U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffdfffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x16U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffffbfffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x17U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffff7fffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x18U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffeffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x19U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffdffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x1aU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffffbffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x1bU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x1cU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffefffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x1dU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffdfffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x1eU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffffbfffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x1fU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffff7fffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x20U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffeffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x21U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffdffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x22U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffffbffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x23U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x24U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffefffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x25U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffdfffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x26U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffffbfffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x27U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffff7fffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x28U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffeffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x29U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffdffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x2aU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffffbffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x2bU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x2cU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffefffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x2dU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffdfffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x2eU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffffbfffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x2fU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffff7fffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x30U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffeffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x31U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffdffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x32U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfffbffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x33U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x34U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffefffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x35U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffdfffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x36U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xffbfffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x37U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xff7fffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x38U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfeffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x39U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfdffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x3aU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xfbffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x3bU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x3cU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xefffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x3dU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xdfffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x3eU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0xbfffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                        >> 0x3fU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc 
            = ((0x7fffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_dfu_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type 
            = ((0x3eU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)) 
               | (1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg)));
    }
    if ((2U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type 
            = ((0x3dU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)) 
               | (2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg)));
    }
    if ((4U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type 
            = ((0x3bU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)) 
               | (4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg)));
    }
    if ((8U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type 
            = ((0x37U & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)) 
               | (8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg)));
    }
    if ((0x10U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type 
            = ((0x2fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)) 
               | (0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg)));
    }
    if ((0x20U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type 
            = ((0x1fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_inst_type)) 
               | (0x20U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg)));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1)))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1 
            = ((0x1eU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1)) 
               | (1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg)));
    }
    if ((2U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1)))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1 
            = ((0x1dU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1)) 
               | (2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg)));
    }
    if ((4U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1)))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1 
            = ((0x1bU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1)) 
               | (4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg)));
    }
    if ((8U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1)))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1 
            = ((0x17U & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1)) 
               | (8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg)));
    }
    if ((0x10U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1)))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1 
            = ((0xfU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src1)) 
               | (0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg)));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2)))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2 
            = ((0x1eU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2)) 
               | (1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg)));
    }
    if ((2U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2)))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2 
            = ((0x1dU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2)) 
               | (2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg)));
    }
    if ((4U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2)))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2 
            = ((0x1bU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2)) 
               | (4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg)));
    }
    if ((8U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2)))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2 
            = ((0x17U & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2)) 
               | (8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg)));
    }
    if ((0x10U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2)))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2 
            = ((0xfU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_src2)) 
               | (0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg)));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst)))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst 
            = ((0x1eU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst)) 
               | (1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg)));
    }
    if ((2U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst)))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst 
            = ((0x1dU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst)) 
               | (2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg)));
    }
    if ((4U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst)))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst 
            = ((0x1bU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst)) 
               | (4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg)));
    }
    if ((8U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst)))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst 
            = ((0x17U & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst)) 
               | (8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg)));
    }
    if ((0x10U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst)))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst 
            = ((0xfU & (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_wbu_dst)) 
               | (0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg)));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg 
          ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_imm) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info)))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffffffeULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | (IData)((IData)((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg)))));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 1U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffffffdULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 2U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffffffbULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 3U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffffff7ULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 4U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffffffefULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 5U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffffffdfULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 6U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffffffbfULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 7U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffffff7fULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 8U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffffeffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 9U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffffdffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0xaU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffffbffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0xbU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffff7ffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0xcU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffffefffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0xdU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffffdfffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0xeU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffffbfffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0xfU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffff7fffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x10U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffeffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x11U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffdffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x12U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffffbffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x13U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffff7ffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x14U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffefffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x15U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffdfffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x16U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fffbfffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x17U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fff7fffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x18U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffeffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x19U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffdffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x1aU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ffbffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x1bU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1ff7ffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x1cU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fefffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x1dU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fdfffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x1eU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1fbfffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x1fU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1f7fffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x20U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1effffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x21U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1dffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x22U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x1bffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x23U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0x17ffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                        >> 0x24U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info 
            = ((0xfffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if (((IData)(vlSelf->tb__DOT__u_core_top__DOT__pause_exu) 
         ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__pause_exu))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__pause_exu 
            = vlSelf->tb__DOT__u_core_top__DOT__pause_exu;
    }
    vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_pause 
        = ((IData)(vlSelf->tb__DOT__u_core_top__DOT__pause_exu) 
           | (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg));
    if (((IData)(vlSelf->tb__DOT__u_core_top__DOT__pc_pause) 
         ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__pc_pause))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__pc_pause 
            = vlSelf->tb__DOT__u_core_top__DOT__pc_pause;
    }
    if (((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_pause) 
         ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT____Vtogcov__id_dff_pause))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT____Vtogcov__id_dff_pause 
            = vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_pause;
    }
}

void Vtb___024root___combo__TOP__3(Vtb___024root* vlSelf);
void Vtb___024root___sequent__TOP__4(Vtb___024root* vlSelf);
void Vtb___024root___sequent__TOP__5(Vtb___024root* vlSelf);
void Vtb___024root___sequent__TOP__6(Vtb___024root* vlSelf);
void Vtb___024root___sequent__TOP__7(Vtb___024root* vlSelf);
void Vtb___024root___sequent__TOP__8(Vtb___024root* vlSelf);

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Body
    Vtb___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->core_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__core_clk))) 
         | ((~ (IData)(vlSelf->core_rst)) & (IData)(vlSelf->__Vclklast__TOP__core_rst)))) {
        Vtb___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->core_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__core_clk))) 
         | ((IData)(vlSelf->core_rst) & (~ (IData)(vlSelf->__Vclklast__TOP__core_rst))))) {
        Vtb___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlSelf->core_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__core_clk)))) {
        Vtb___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((((IData)(vlSelf->core_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__core_clk))) 
         | ((IData)(vlSelf->core_rst) & (~ (IData)(vlSelf->__Vclklast__TOP__core_rst))))) {
        Vtb___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vtb___024root___sequent__TOP__8(vlSelf);
    }
    Vtb___024root___combo__TOP__9(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__core_clk = vlSelf->core_clk;
    vlSelf->__Vclklast__TOP__core_rst = vlSelf->core_rst;
}

QData Vtb___024root___change_request_1(Vtb___024root* vlSelf);

VL_INLINE_OPT QData Vtb___024root___change_request(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___change_request\n"); );
    // Body
    return (Vtb___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtb___024root___change_request_1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->core_clk & 0xfeU))) {
        Verilated::overWidthError("core_clk");}
    if (VL_UNLIKELY((vlSelf->core_rst & 0xfeU))) {
        Verilated::overWidthError("core_rst");}
}
#endif  // VL_DEBUG
