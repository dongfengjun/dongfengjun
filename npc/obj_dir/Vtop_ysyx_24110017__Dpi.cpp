// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vtop_ysyx_24110017::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vtop_ysyx_24110017__Dpi.h"
#include "Vtop_ysyx_24110017.h"

#ifndef VL_DPIDECL_csr_display_
#define VL_DPIDECL_csr_display_
int csr_display(int i) {
    // DPI export at vsrc/top_ysyx_24110017.v:51:14
    return Vtop_ysyx_24110017::csr_display(i);
}
#endif

#ifndef VL_DPIDECL_gpr_reg_display_
#define VL_DPIDECL_gpr_reg_display_
int gpr_reg_display(int addr) {
    // DPI export at vsrc/RegisterFile_ysyx_24110017.v:22:14
    return Vtop_ysyx_24110017::gpr_reg_display(addr);
}
#endif

