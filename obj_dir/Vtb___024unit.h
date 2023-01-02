// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024UNIT_H_
#define VERILATED_VTB___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtb__Syms;
class Vtb_VerilatedVcd;


//----------

VL_MODULE(Vtb___024unit) {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtb___024unit);  ///< Copying not allowed
  public:
    Vtb___024unit(const char* name);
    ~Vtb___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vtb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
