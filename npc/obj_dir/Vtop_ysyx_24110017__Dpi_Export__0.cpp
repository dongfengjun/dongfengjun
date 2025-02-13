// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtop_ysyx_24110017.h"
#include "Vtop_ysyx_24110017__Syms.h"
#include "verilated_dpi.h"


int Vtop_ysyx_24110017::csr_display(int i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root::csr_display\n"); );
    // Init
    IData/*31:0*/ i__Vcvt;
    i__Vcvt = 0;
    IData/*31:0*/ csr_display__Vfuncrtn__Vcvt;
    csr_display__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("csr_display");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop_ysyx_24110017__Vcb_csr_display_t __Vcb = (Vtop_ysyx_24110017__Vcb_csr_display_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    i__Vcvt = i;
    (*__Vcb)((Vtop_ysyx_24110017__Syms*)(__Vscopep->symsp()), i__Vcvt, csr_display__Vfuncrtn__Vcvt);
    int csr_display__Vfuncrtn;
    for (size_t csr_display__Vfuncrtn__Vidx = 0; csr_display__Vfuncrtn__Vidx < 1; ++csr_display__Vfuncrtn__Vidx) csr_display__Vfuncrtn = csr_display__Vfuncrtn__Vcvt;
    return csr_display__Vfuncrtn;
}
