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

#ifndef VL_DPIDECL_csr_display_
#define VL_DPIDECL_csr_display_
int csr_display(int i) {
    // DPI export at vsrc/ysyx_24110017.v:282:14
    return VysyxSoCFull::csr_display(i);
}
#endif

#ifndef VL_DPIDECL_diff_dnpc_
#define VL_DPIDECL_diff_dnpc_
int diff_dnpc() {
    // DPI export at vsrc/ysyx_24110017.v:295:14
    return VysyxSoCFull::diff_dnpc();
}
#endif

#ifndef VL_DPIDECL_diff_flag_
#define VL_DPIDECL_diff_flag_
int diff_flag() {
    // DPI export at vsrc/ysyx_24110017.v:307:14
    return VysyxSoCFull::diff_flag();
}
#endif

#ifndef VL_DPIDECL_diff_inst_
#define VL_DPIDECL_diff_inst_
int diff_inst() {
    // DPI export at vsrc/ysyx_24110017.v:301:14
    return VysyxSoCFull::diff_inst();
}
#endif

#ifndef VL_DPIDECL_diff_pc_
#define VL_DPIDECL_diff_pc_
int diff_pc() {
    // DPI export at vsrc/ysyx_24110017.v:289:14
    return VysyxSoCFull::diff_pc();
}
#endif

#ifndef VL_DPIDECL_gpr_reg_display_
#define VL_DPIDECL_gpr_reg_display_
int gpr_reg_display(int addr) {
    // DPI export at vsrc/ysyx_24110017_RegisterFile.v:22:14
    return VysyxSoCFull::gpr_reg_display(addr);
}
#endif

