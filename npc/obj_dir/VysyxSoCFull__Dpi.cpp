// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VysyxSoCFull::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VysyxSoCFull__Dpi.h"
#include "VysyxSoCFull.h"

#ifndef VL_DPIDECL_amat_counter_
#define VL_DPIDECL_amat_counter_
int amat_counter(int i) {
    // DPI export at vsrc/ysyx_24110017_CACHE.v:207:15
    return VysyxSoCFull::amat_counter(i);
}
#endif

#ifndef VL_DPIDECL_csr_grab_
#define VL_DPIDECL_csr_grab_
int csr_grab(int i) {
    // DPI export at vsrc/ysyx_24110017.v:259:14
    return VysyxSoCFull::csr_grab(i);
}
#endif

#ifndef VL_DPIDECL_dpic_grab_
#define VL_DPIDECL_dpic_grab_
int dpic_grab(int i) {
    // DPI export at vsrc/ysyx_24110017.v:266:14
    return VysyxSoCFull::dpic_grab(i);
}
#endif

#ifndef VL_DPIDECL_gpr_reg_grab_
#define VL_DPIDECL_gpr_reg_grab_
int gpr_reg_grab(int addr) {
    // DPI export at vsrc/ysyx_24110017_RegisterFile.v:62:14
    return VysyxSoCFull::gpr_reg_grab(addr);
}
#endif

#ifndef VL_DPIDECL_performance_counter_
#define VL_DPIDECL_performance_counter_
int performance_counter(int i) {
    // DPI export at vsrc/ysyx_24110017.v:275:14
    return VysyxSoCFull::performance_counter(i);
}
#endif

