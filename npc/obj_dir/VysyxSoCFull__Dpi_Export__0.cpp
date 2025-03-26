// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"
#include "verilated_dpi.h"


int VysyxSoCFull::csr_display(int i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root::csr_display\n"); );
    // Init
    IData/*31:0*/ i__Vcvt;
    i__Vcvt = 0;
    IData/*31:0*/ csr_display__Vfuncrtn__Vcvt;
    csr_display__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("csr_display");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VysyxSoCFull__Vcb_csr_display_t __Vcb = (VysyxSoCFull__Vcb_csr_display_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    i__Vcvt = i;
    (*__Vcb)((VysyxSoCFull__Syms*)(__Vscopep->symsp()), i__Vcvt, csr_display__Vfuncrtn__Vcvt);
    int csr_display__Vfuncrtn;
    for (size_t csr_display__Vfuncrtn__Vidx = 0; csr_display__Vfuncrtn__Vidx < 1; ++csr_display__Vfuncrtn__Vidx) csr_display__Vfuncrtn = csr_display__Vfuncrtn__Vcvt;
    return csr_display__Vfuncrtn;
}

int VysyxSoCFull::dpic_diff(int i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root::dpic_diff\n"); );
    // Init
    IData/*31:0*/ i__Vcvt;
    i__Vcvt = 0;
    IData/*31:0*/ dpic_diff__Vfuncrtn__Vcvt;
    dpic_diff__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("dpic_diff");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VysyxSoCFull__Vcb_dpic_diff_t __Vcb = (VysyxSoCFull__Vcb_dpic_diff_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    i__Vcvt = i;
    (*__Vcb)((VysyxSoCFull__Syms*)(__Vscopep->symsp()), i__Vcvt, dpic_diff__Vfuncrtn__Vcvt);
    int dpic_diff__Vfuncrtn;
    for (size_t dpic_diff__Vfuncrtn__Vidx = 0; dpic_diff__Vfuncrtn__Vidx < 1; ++dpic_diff__Vfuncrtn__Vidx) dpic_diff__Vfuncrtn = dpic_diff__Vfuncrtn__Vcvt;
    return dpic_diff__Vfuncrtn;
}

int VysyxSoCFull::gpr_reg_display(int addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root::gpr_reg_display\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    IData/*31:0*/ gpr_reg_display__Vfuncrtn__Vcvt;
    gpr_reg_display__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("gpr_reg_display");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VysyxSoCFull__Vcb_gpr_reg_display_t __Vcb = (VysyxSoCFull__Vcb_gpr_reg_display_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    (*__Vcb)((VysyxSoCFull__Syms*)(__Vscopep->symsp()), addr__Vcvt, gpr_reg_display__Vfuncrtn__Vcvt);
    int gpr_reg_display__Vfuncrtn;
    for (size_t gpr_reg_display__Vfuncrtn__Vidx = 0; gpr_reg_display__Vfuncrtn__Vidx < 1; ++gpr_reg_display__Vfuncrtn__Vidx) gpr_reg_display__Vfuncrtn = gpr_reg_display__Vfuncrtn__Vcvt;
    return gpr_reg_display__Vfuncrtn;
}
