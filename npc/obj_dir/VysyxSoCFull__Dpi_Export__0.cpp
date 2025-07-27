// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"
#include "verilated_dpi.h"


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
