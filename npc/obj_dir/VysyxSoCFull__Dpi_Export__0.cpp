// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"
#include "verilated_dpi.h"


int VysyxSoCFull::amat_counter(int i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root::amat_counter\n"); );
    // Init
    IData/*31:0*/ i__Vcvt;
    i__Vcvt = 0;
    IData/*31:0*/ amat_counter__Vfuncrtn__Vcvt;
    amat_counter__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("amat_counter");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VysyxSoCFull__Vcb_amat_counter_t __Vcb = (VysyxSoCFull__Vcb_amat_counter_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    i__Vcvt = i;
    (*__Vcb)((VysyxSoCFull__Syms*)(__Vscopep->symsp()), i__Vcvt, amat_counter__Vfuncrtn__Vcvt);
    int amat_counter__Vfuncrtn;
    for (size_t amat_counter__Vfuncrtn__Vidx = 0; amat_counter__Vfuncrtn__Vidx < 1; ++amat_counter__Vfuncrtn__Vidx) amat_counter__Vfuncrtn = amat_counter__Vfuncrtn__Vcvt;
    return amat_counter__Vfuncrtn;
}
