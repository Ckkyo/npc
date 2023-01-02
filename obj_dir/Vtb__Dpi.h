// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/core/tb.sv:4:30
    extern void dut_read_mem_with_len(unsigned long long vaddr, unsigned long long* value, int len);
    // DPI import at vsrc/core/tb.sv:5:30
    extern void dut_write_mem_with_len(unsigned long long vaddr, unsigned long long value, int len);

#ifdef __cplusplus
}
#endif
