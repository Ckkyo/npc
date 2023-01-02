// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb___024root.h"
#include "Vtb__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtb___024root___sequent__TOP__8(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___sequent__TOP__8\n"); );
    // Body
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[2U]))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[2U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[2U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[2U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[2U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[2U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[2U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[2U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128u[3U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u[3U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[0U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[0U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[1U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[1U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[2U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[2U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_128s[3U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s[3U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]))) {
        ++(vlSymsp->__Vcoverage[2960]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2961]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[0U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[0U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2962]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2963]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2964]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2965]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2966]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2967]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2968]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2969]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2970]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2971]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2972]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2973]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2974]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2975]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2976]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2977]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2978]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2979]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2980]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[1U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[1U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[2U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[2U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64s[3U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s[3U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[0U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[0U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[1U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[1U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[2U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[2U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT____Vtogcov__muldiv_format_64u[3U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u[3U]));
    }
    if (((IData)(vlSelf->tb__DOT__u_core_top__DOT__pc_clear_before_lw) 
         ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__pc_clear_before_lw))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__pc_clear_before_lw 
            = vlSelf->tb__DOT__u_core_top__DOT__pc_clear_before_lw;
    }
    if (((IData)(vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_valid_reg) 
         ^ (IData)(vlSelf->tb__DOT____Vtogcov__memory_ifu_valid))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_valid 
            = vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_valid_reg;
    }
    if ((1U & ((~ (IData)(vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_valid_reg)) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_pc_pause)))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__ifu_pc_pause 
            = (1U & (~ (IData)(vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_valid_reg)));
    }
    if ((1U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
               ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffffffeU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (1U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((2U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
               ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffffffdU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (2U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((4U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
               ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffffffbU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (4U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((8U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
               ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffffff7U & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (8U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                  ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffffffefU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x10U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                  ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffffffdfU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x20U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                  ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffffffbfU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x40U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                  ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffffff7fU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x80U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                   ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffffeffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x100U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                   ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffffdffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x200U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                   ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffffbffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x400U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                   ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffff7ffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x800U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                    ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffffefffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x1000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                    ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffffdfffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x2000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                    ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffffbfffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x4000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                    ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffff7fffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x8000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                     ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffeffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x10000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                     ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffdffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x20000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                     ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfffbffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x40000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                     ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfff7ffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x80000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                      ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffefffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x100000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                      ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffdfffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x200000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                      ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xffbfffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x400000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                      ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xff7fffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x800000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                       ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfeffffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x1000000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                       ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfdffffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x2000000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                       ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xfbffffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x4000000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                       ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xf7ffffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x8000000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                        ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xefffffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x10000000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                        ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xdfffffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x20000000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
                        ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0xbfffffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x40000000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if (((vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg 
          ^ vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->tb__DOT____Vtogcov__memory_ifu_data 
            = ((0x7fffffffU & vlSelf->tb__DOT____Vtogcov__memory_ifu_data) 
               | (0x80000000U & vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[3U] 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_valid)))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__dfu_exu_valid 
            = (1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[3U]);
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[0U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[1U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                  ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                   ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                    ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                     ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                      ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                       ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
          ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U] 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[2U]) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[3U] 
               ^ vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[3U]))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__id_dff[3U] 
            = (1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[3U]);
    }
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
        = (((- (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        >> 0x1fU))) << 0xcU) | (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                >> 0x14U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
        = (((- (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                      >> 7U))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
        = (((- (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        >> 0x1fU))) << 0xdU) | ((0x1000U 
                                                 & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                            >> 7U))))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
        = (((- (IData)((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        >> 0x1fU))) << 0x15U) | ((0x100000U 
                                                  & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]) 
                                                    | ((0x800U 
                                                        & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                             >> 0x14U))))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
        = ((0x1fc00U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                        >> 0xfU)) | ((0x380U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])));
    ++(vlSymsp->__Vcoverage[1632]);
    if ((0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
        if ((0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
            if ((0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((8U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                } else if ((4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                } else if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                        ++(vlSymsp->__Vcoverage[1628]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 2U;
                    } else {
                        ++(vlSymsp->__Vcoverage[1631]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else if ((8U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                        if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                            ++(vlSymsp->__Vcoverage[1621]);
                            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0x20U;
                        } else {
                            ++(vlSymsp->__Vcoverage[1631]);
                            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                        }
                    } else {
                        ++(vlSymsp->__Vcoverage[1631]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else if ((4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                        ++(vlSymsp->__Vcoverage[1619]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 2U;
                    } else {
                        ++(vlSymsp->__Vcoverage[1631]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    ++(vlSymsp->__Vcoverage[1620]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 8U;
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1631]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[1631]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
        }
    } else if ((0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
        if ((0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
            if ((8U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                } else if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                        ++(vlSymsp->__Vcoverage[1630]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 1U;
                    } else {
                        ++(vlSymsp->__Vcoverage[1631]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else if ((4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                        ++(vlSymsp->__Vcoverage[1623]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0x10U;
                    } else {
                        ++(vlSymsp->__Vcoverage[1631]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    ++(vlSymsp->__Vcoverage[1627]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 1U;
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1631]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
            }
        } else if ((8U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
            ++(vlSymsp->__Vcoverage[1631]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
        } else if ((4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
            ++(vlSymsp->__Vcoverage[1631]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
        } else if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
            if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                ++(vlSymsp->__Vcoverage[1624]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 4U;
            } else {
                ++(vlSymsp->__Vcoverage[1631]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[1631]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
        }
    } else if ((0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
        if ((8U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
            if ((4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                        ++(vlSymsp->__Vcoverage[1626]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 2U;
                    } else {
                        ++(vlSymsp->__Vcoverage[1631]);
                        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    ++(vlSymsp->__Vcoverage[1629]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 2U;
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1631]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
            }
        } else if ((4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
            if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    ++(vlSymsp->__Vcoverage[1622]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0x10U;
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1631]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
            }
        } else if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
            if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                ++(vlSymsp->__Vcoverage[1618]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 2U;
            } else {
                ++(vlSymsp->__Vcoverage[1631]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[1631]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
        }
    } else if ((8U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
        if ((4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
            if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
                    ++(vlSymsp->__Vcoverage[1625]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 2U;
                } else {
                    ++(vlSymsp->__Vcoverage[1631]);
                    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[1631]);
                vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[1631]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
        }
    } else if ((4U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
    } else if ((2U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
        if ((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])) {
            ++(vlSymsp->__Vcoverage[1617]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 2U;
        } else {
            ++(vlSymsp->__Vcoverage[1631]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
        }
    } else {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type = 0U;
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data)))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffffffeULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data)))));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 1U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffffffdULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 2U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffffffbULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 3U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffffff7ULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 4U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffffffefULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 5U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffffffdfULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 6U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffffffbfULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 7U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffffff7fULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 8U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffffeffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 9U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffffdffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0xaU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffffbffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0xbU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffff7ffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0xcU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffffefffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0xdU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffffdfffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0xeU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffffbfffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0xfU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffff7fffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x10U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffeffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x11U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffdffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x12U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffffbffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x13U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffff7ffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x14U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffefffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x15U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffdfffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x16U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffffbfffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x17U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffff7fffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x18U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffeffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x19U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffdffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffffbffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffff7ffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffefffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffdfffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffffbfffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffff7fffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x20U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffeffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x21U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffdffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x22U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffffbffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x23U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffff7ffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x24U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffefffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x25U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffdfffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x26U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffffbfffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x27U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffff7fffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x28U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffeffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x29U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffdffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffffbffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffff7ffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffefffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffdfffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffffbfffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffff7fffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x30U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffeffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x31U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffdffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x32U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfffbffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x33U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfff7ffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x34U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffefffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x35U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffdfffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x36U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xffbfffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x37U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xff7fffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x38U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfeffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x39U)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfdffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xfbffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xf7ffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xefffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xdfffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0xbfffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data 
            = ((0x7fffffffffffffffULL & vlSelf->tb__DOT__u_core_top__DOT____Vtogcov__exu_wbu_dst_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_i) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_s) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_b) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_exu_imm_j) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1fffeU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1fffdU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1fffbU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1fff7U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1ffefU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1ffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1ffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1ff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1feffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1fdffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1fbffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1f7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1efffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1dfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x1bfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0x17fffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct 
            = ((0xffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type 
            = ((0x3eU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)) 
               | (1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type)));
    }
    if ((2U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type 
            = ((0x3dU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)) 
               | (2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type)));
    }
    if ((4U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type 
            = ((0x3bU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)) 
               | (4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type)));
    }
    if ((8U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type 
            = ((0x37U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)) 
               | (8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type)));
    }
    if ((0x10U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type 
            = ((0x2fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)) 
               | (0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type)));
    }
    if ((0x20U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type 
            = ((0x1fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_type)) 
               | (0x20U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type)));
    }
    ++(vlSymsp->__Vcoverage[1899]);
    if ((0x20U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
        if ((0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else if ((8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else if ((4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else if ((2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else {
            ++(vlSymsp->__Vcoverage[1897]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x7fU;
        }
    } else if ((0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
        if ((8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else if ((4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else if ((2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else {
            ++(vlSymsp->__Vcoverage[1896]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x7fU;
        }
    } else if ((8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
        if ((4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else if ((2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else {
            ++(vlSymsp->__Vcoverage[1895]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x3ffU;
        }
    } else if ((4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
        if ((2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else {
            ++(vlSymsp->__Vcoverage[1894]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x3ffU;
        }
    } else if ((2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
        if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
            ++(vlSymsp->__Vcoverage[1898]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
        } else {
            ++(vlSymsp->__Vcoverage[1893]);
            vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x3ffU;
        }
    } else if ((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
    } else {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask = 0x1ffffU;
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1fffeU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1fffdU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1fffbU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1fff7U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1ffefU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1ffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1ffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1ff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1feffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1fdffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1fbffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1f7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1efffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1dfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x1bfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0x17fffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask 
            = ((0xffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_mask) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask));
    }
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
        = (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct 
           & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask);
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1fffeU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1fffdU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1fffbU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1fff7U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1ffefU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1ffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1ffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1ff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1feffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1fdffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1fbffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1f7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1efffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1dfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x1bfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0x17fffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked 
            = ((0xffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__opcode_and_funct_masked) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked));
    }
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info 
        = ((0x38U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info)) 
           | (((0x1f3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 2U) | (((0x173U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 1U) | (0xf3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info 
        = ((7U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info)) 
           | (((0x3f3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 5U) | (((0x373U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 4U) | ((0x2f3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                                    << 3U))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info 
        = ((0xf8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)) 
           | (((0x63U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 2U) | (((0x67U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 1U) | (0x6fU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info 
        = ((0xc7U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)) 
           | (((0x2e3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 5U) | (((0x263U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 4U) | ((0xe3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                                    << 3U))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info 
        = ((0x3fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)) 
           | (((0x3e3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 7U) | ((0x363U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                         << 6U)));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info 
        = ((0x7f8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)) 
           | (((0x103U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 2U) | (((0x83U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 1U) | (3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info 
        = ((0x5ffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)) 
           | ((0x183U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 9U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info 
        = ((0x7e7U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)) 
           | (((0x283U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 4U) | ((0x203U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                         << 3U)));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info 
        = ((0x61fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)) 
           | (((0x303U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 8U) | (((0x123U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 7U) | (((0xa3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                                     << 6U) | ((0x23U 
                                                == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                                               << 5U)))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info 
        = ((0x3ffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)) 
           | ((0x1a3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0xaU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info 
        = ((0x1ff8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)) 
           | (((0x533U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 2U) | (((0x4b3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 1U) | (0x433U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info 
        = ((0x1fc7U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)) 
           | (((0x6b3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 5U) | (((0x633U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 4U) | ((0x5b3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                                    << 3U))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info 
        = ((0x1e3fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)) 
           | (((0x43bU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 8U) | (((0x7b3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 7U) | ((0x733U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                                    << 6U))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info 
        = ((0x11ffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)) 
           | (((0x73bU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 0xbU) | (((0x6bbU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                            << 0xaU) | ((0x63bU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                                        << 9U))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info 
        = ((0xfffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)) 
           | ((0x7bbU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0xcU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfffffff8U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x13U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 2U) | (((0x17U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 1U) | (0x37U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0x1bU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0x15U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xffffffc7U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x213U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 5U) | (((0x193U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                          << 4U) | ((0x113U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                                    << 3U))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xffffff3fU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x393U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 7U) | ((0x313U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                         << 6U)));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0x33U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0xbU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0x3bU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0x19U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0x8033U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0xcU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0x803bU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0x1aU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0xb3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0xdU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0xbbU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0x1bU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfffe3fffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x233U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 0x10U) | (((0x1b3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                             << 0xfU) | ((0x133U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                                         << 0xeU))));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0x2b3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0x11U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0x2bbU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0x1cU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0x82b3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0x12U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | ((0x82bbU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
              << 0x1dU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xffe7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x3b3U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               << 0x14U) | ((0x333U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                            << 0x13U)));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x93U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               & (0U == (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                         >> 0x1aU))) << 8U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x9bU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               & (0U == (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                         >> 0x19U))) << 0x16U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x293U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               & (0U == (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                         >> 0x1aU))) << 9U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x29bU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               & (0U == (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                         >> 0x19U))) << 0x17U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x293U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               & (0x10U == (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                            >> 0x1aU))) << 0xaU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x29bU == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               & (0x20U == (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                            >> 0x19U))) << 0x18U));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (((0x73U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
               & (~ (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                     >> 0x14U))) << 0x1eU));
    vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
        = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info) 
           | (0x80000000U & (((0x73U == vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked) 
                              << 0x1fU) & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U] 
                                           << 0xbU))));
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info 
            = ((0x3eU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)) 
               | (1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info)));
    }
    if ((2U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info 
            = ((0x3dU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)) 
               | (2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info)));
    }
    if ((4U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info 
            = ((0x3bU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)) 
               | (4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info)));
    }
    if ((8U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info 
            = ((0x37U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)) 
               | (8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info)));
    }
    if ((0x10U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info 
            = ((0x2fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)) 
               | (0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info)));
    }
    if ((0x20U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info 
            = ((0x1fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_csr_info)) 
               | (0x20U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info)));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info 
            = ((0xfeU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)) 
               | (1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)));
    }
    if ((2U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info 
            = ((0xfdU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)) 
               | (2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)));
    }
    if ((4U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info 
            = ((0xfbU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)) 
               | (4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)));
    }
    if ((8U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info 
            = ((0xf7U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)) 
               | (8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)));
    }
    if ((0x10U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info 
            = ((0xefU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)) 
               | (0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)));
    }
    if ((0x20U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info 
            = ((0xdfU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)) 
               | (0x20U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)));
    }
    if ((0x40U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info 
            = ((0xbfU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)) 
               | (0x40U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)));
    }
    if ((0x80U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info 
            = ((0x7fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_branch_info)) 
               | (0x80U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info)));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x7feU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((2U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x7fdU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((4U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x7fbU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((8U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x7f7U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((0x10U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x7efU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((0x20U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x7dfU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (0x20U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((0x40U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x7bfU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (0x40U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((0x80U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x77fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (0x80U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((0x100U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
                   ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x6ffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (0x100U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((0x200U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
                   ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x5ffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (0x200U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((0x400U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info) 
                   ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info 
            = ((0x3ffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_lsu_info)) 
               | (0x400U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info)));
    }
    if ((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1ffeU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((2U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1ffdU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (2U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((4U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1ffbU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (4U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((8U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
               ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1ff7U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (8U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((0x10U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1fefU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (0x10U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((0x20U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1fdfU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (0x20U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((0x40U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1fbfU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (0x40U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((0x80U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
                  ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1f7fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (0x80U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((0x100U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
                   ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1effU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (0x100U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((0x200U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
                   ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1dffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (0x200U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((0x400U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
                   ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x1bffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (0x400U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((0x800U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
                   ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0x17ffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (0x800U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((0x1000U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info) 
                    ^ (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info 
            = ((0xfffU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_muldiv_info)) 
               | (0x1000U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info)));
    }
    if ((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffffffeU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (1U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((2U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffffffdU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (2U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((4U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffffffbU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (4U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((8U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
               ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffffff7U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (8U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x10U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffffffefU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x10U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x20U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffffffdfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x20U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x40U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffffffbfU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x40U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x80U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                  ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffffff7fU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x80U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x100U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffffeffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x100U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x200U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffffdffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x200U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x400U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffffbffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x400U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x800U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                   ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffff7ffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x800U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x1000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffffefffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x1000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x2000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffffdfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x2000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x4000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffffbfffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x4000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x8000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                    ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffff7fffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x8000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x10000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffeffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x10000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x20000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffdffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x20000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x40000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1816]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfffbffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x40000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x80000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                     ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1817]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfff7ffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x80000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x100000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1818]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffefffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x100000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x200000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1819]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffdfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x200000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x400000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1820]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xffbfffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x400000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x800000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                      ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1821]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xff7fffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x800000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x1000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1822]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfeffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x1000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x2000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1823]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfdffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x2000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x4000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1824]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xfbffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x4000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x8000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                       ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1825]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xf7ffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x8000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x10000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1826]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xefffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x10000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x20000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xdfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x20000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if ((0x40000000U & (vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
                        ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0xbfffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x40000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
    if (((vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info 
          ^ vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info 
            = ((0x7fffffffU & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT____Vtogcov__dfu_alu_info) 
               | (0x80000000U & vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info));
    }
}
