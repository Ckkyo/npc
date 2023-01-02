// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb___024unit.h"
#include "Vtb__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtb___024unit___ctor_var_reset(Vtb___024unit* vlSelf);

Vtb___024unit::Vtb___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtb___024unit___ctor_var_reset(this);
}

void Vtb___024unit___configure_coverage(Vtb___024unit* vlSelf, bool first);

void Vtb___024unit::__Vconfigure(Vtb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vtb___024unit___configure_coverage(this, first);
}

Vtb___024unit::~Vtb___024unit() {
}

// Coverage
void Vtb___024unit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vtb___024unit___ctor_var_reset(Vtb___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit___ctor_var_reset\n"); );
}

void Vtb___024unit___configure_coverage(Vtb___024unit* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3635]), first, "vsrc/core/tb.sv", 15, 9, "", "v_branch/$unit", "if", "15-16");
}
