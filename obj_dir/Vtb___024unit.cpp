// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb___024unit.h"
#include "Vtb__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void dut_read_mem_with_len(unsigned long long vaddr, unsigned long long* value, int len);

VL_INLINE_OPT void Vtb___024unit____Vdpiimwrap_dut_read_mem_with_len_TOP____024unit(QData/*63:0*/ vaddr, QData/*63:0*/ &value, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit____Vdpiimwrap_dut_read_mem_with_len_TOP____024unit\n"); );
    // Body
    unsigned long long vaddr__Vcvt;
    for (size_t vaddr__Vidx = 0; vaddr__Vidx < 1; ++vaddr__Vidx) vaddr__Vcvt = vaddr;
    unsigned long long value__Vcvt;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    dut_read_mem_with_len(vaddr__Vcvt, &value__Vcvt, len__Vcvt);
    value = value__Vcvt;
}

extern "C" void dut_write_mem_with_len(unsigned long long vaddr, unsigned long long value, int len);

VL_INLINE_OPT void Vtb___024unit____Vdpiimwrap_dut_write_mem_with_len_TOP____024unit(QData/*63:0*/ vaddr, QData/*63:0*/ value, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit____Vdpiimwrap_dut_write_mem_with_len_TOP____024unit\n"); );
    // Body
    unsigned long long vaddr__Vcvt;
    for (size_t vaddr__Vidx = 0; vaddr__Vidx < 1; ++vaddr__Vidx) vaddr__Vcvt = vaddr;
    unsigned long long value__Vcvt;
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) value__Vcvt = value;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    dut_write_mem_with_len(vaddr__Vcvt, value__Vcvt, len__Vcvt);
}
