// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"
#include "verilated_dpi.h"


int VysyxSoCFull::csr_grab(int i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root::csr_grab\n"); );
    // Init
    IData/*31:0*/ i__Vcvt;
    i__Vcvt = 0;
    IData/*31:0*/ csr_grab__Vfuncrtn__Vcvt;
    csr_grab__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("csr_grab");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VysyxSoCFull__Vcb_csr_grab_t __Vcb = (VysyxSoCFull__Vcb_csr_grab_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    i__Vcvt = i;
    (*__Vcb)((VysyxSoCFull__Syms*)(__Vscopep->symsp()), i__Vcvt, csr_grab__Vfuncrtn__Vcvt);
    int csr_grab__Vfuncrtn;
    for (size_t csr_grab__Vfuncrtn__Vidx = 0; csr_grab__Vfuncrtn__Vidx < 1; ++csr_grab__Vfuncrtn__Vidx) csr_grab__Vfuncrtn = csr_grab__Vfuncrtn__Vcvt;
    return csr_grab__Vfuncrtn;
}

int VysyxSoCFull::dpic_grab(int i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root::dpic_grab\n"); );
    // Init
    IData/*31:0*/ i__Vcvt;
    i__Vcvt = 0;
    IData/*31:0*/ dpic_grab__Vfuncrtn__Vcvt;
    dpic_grab__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("dpic_grab");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VysyxSoCFull__Vcb_dpic_grab_t __Vcb = (VysyxSoCFull__Vcb_dpic_grab_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    i__Vcvt = i;
    (*__Vcb)((VysyxSoCFull__Syms*)(__Vscopep->symsp()), i__Vcvt, dpic_grab__Vfuncrtn__Vcvt);
    int dpic_grab__Vfuncrtn;
    for (size_t dpic_grab__Vfuncrtn__Vidx = 0; dpic_grab__Vfuncrtn__Vidx < 1; ++dpic_grab__Vfuncrtn__Vidx) dpic_grab__Vfuncrtn = dpic_grab__Vfuncrtn__Vcvt;
    return dpic_grab__Vfuncrtn;
}

int VysyxSoCFull::performance_counter(int i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root::performance_counter\n"); );
    // Init
    IData/*31:0*/ i__Vcvt;
    i__Vcvt = 0;
    IData/*31:0*/ performance_counter__Vfuncrtn__Vcvt;
    performance_counter__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("performance_counter");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VysyxSoCFull__Vcb_performance_counter_t __Vcb = (VysyxSoCFull__Vcb_performance_counter_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    i__Vcvt = i;
    (*__Vcb)((VysyxSoCFull__Syms*)(__Vscopep->symsp()), i__Vcvt, performance_counter__Vfuncrtn__Vcvt);
    int performance_counter__Vfuncrtn;
    for (size_t performance_counter__Vfuncrtn__Vidx = 0; performance_counter__Vfuncrtn__Vidx < 1; ++performance_counter__Vfuncrtn__Vidx) performance_counter__Vfuncrtn = performance_counter__Vfuncrtn__Vcvt;
    return performance_counter__Vfuncrtn;
}

int VysyxSoCFull::gpr_reg_grab(int addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root::gpr_reg_grab\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    IData/*31:0*/ gpr_reg_grab__Vfuncrtn__Vcvt;
    gpr_reg_grab__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("gpr_reg_grab");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VysyxSoCFull__Vcb_gpr_reg_grab_t __Vcb = (VysyxSoCFull__Vcb_gpr_reg_grab_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    (*__Vcb)((VysyxSoCFull__Syms*)(__Vscopep->symsp()), addr__Vcvt, gpr_reg_grab__Vfuncrtn__Vcvt);
    int gpr_reg_grab__Vfuncrtn;
    for (size_t gpr_reg_grab__Vfuncrtn__Vidx = 0; gpr_reg_grab__Vfuncrtn__Vidx < 1; ++gpr_reg_grab__Vfuncrtn__Vidx) gpr_reg_grab__Vfuncrtn = gpr_reg_grab__Vfuncrtn__Vcvt;
    return gpr_reg_grab__Vfuncrtn;
}
