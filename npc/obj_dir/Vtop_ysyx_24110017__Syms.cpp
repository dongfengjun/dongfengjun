// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_ysyx_24110017__Syms.h"
#include "Vtop_ysyx_24110017.h"
#include "Vtop_ysyx_24110017___024root.h"

void Vtop_ysyx_24110017___024root____Vdpiexp_top_ysyx_24110017__DOT__csr_display_TOP(Vtop_ysyx_24110017__Syms* __restrict vlSymsp, IData/*31:0*/ i, IData/*31:0*/ &csr_display__Vfuncrtn);
void Vtop_ysyx_24110017___024root____Vdpiexp_top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__gpr_reg_display_TOP(Vtop_ysyx_24110017__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ &gpr_reg_display__Vfuncrtn);
void Vtop_ysyx_24110017___024root____Vdpiexp_top_ysyx_24110017__DOT__RF__DOT__gpr_reg_display_TOP(Vtop_ysyx_24110017__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ &gpr_reg_display__Vfuncrtn);

// FUNCTIONS
Vtop_ysyx_24110017__Syms::~Vtop_ysyx_24110017__Syms()
{
}

Vtop_ysyx_24110017__Syms::Vtop_ysyx_24110017__Syms(VerilatedContext* contextp, const char* namep, Vtop_ysyx_24110017* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_top_ysyx_24110017.configure(this, name(), "top_ysyx_24110017", "top_ysyx_24110017", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_ysyx_24110017__IFU__IM.configure(this, name(), "top_ysyx_24110017.IFU.IM", "IM", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_ysyx_24110017__RF.configure(this, name(), "top_ysyx_24110017.RF", "RF", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top_ysyx_24110017.exportInsert(__Vfinal, "csr_display", (void*)(&Vtop_ysyx_24110017___024root____Vdpiexp_top_ysyx_24110017__DOT__csr_display_TOP));
        __Vscope_top_ysyx_24110017__IFU__IM.exportInsert(__Vfinal, "gpr_reg_display", (void*)(&Vtop_ysyx_24110017___024root____Vdpiexp_top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__gpr_reg_display_TOP));
        __Vscope_top_ysyx_24110017__RF.exportInsert(__Vfinal, "gpr_reg_display", (void*)(&Vtop_ysyx_24110017___024root____Vdpiexp_top_ysyx_24110017__DOT__RF__DOT__gpr_reg_display_TOP));
    }
}
