// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VReg_ysyx_24110017__Syms.h"
#include "VReg_ysyx_24110017.h"
#include "VReg_ysyx_24110017___024root.h"

void VReg_ysyx_24110017___024root____Vdpiexp_ysyx_24110017__DOT__csr_display_TOP(VReg_ysyx_24110017__Syms* __restrict vlSymsp, IData/*31:0*/ i, IData/*31:0*/ &csr_display__Vfuncrtn);
void VReg_ysyx_24110017___024root____Vdpiexp_ysyx_24110017__DOT__RFU__DOT__gpr_reg_display_TOP(VReg_ysyx_24110017__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ &gpr_reg_display__Vfuncrtn);

// FUNCTIONS
VReg_ysyx_24110017__Syms::~VReg_ysyx_24110017__Syms()
{
}

VReg_ysyx_24110017__Syms::VReg_ysyx_24110017__Syms(VerilatedContext* contextp, const char* namep, VReg_ysyx_24110017* modelp)
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
    __Vscope_ysyx_24110017.configure(this, name(), "ysyx_24110017", "ysyx_24110017", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_24110017__RFU.configure(this, name(), "ysyx_24110017.RFU", "RFU", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyx_24110017.exportInsert(__Vfinal, "csr_display", (void*)(&VReg_ysyx_24110017___024root____Vdpiexp_ysyx_24110017__DOT__csr_display_TOP));
        __Vscope_ysyx_24110017__RFU.exportInsert(__Vfinal, "gpr_reg_display", (void*)(&VReg_ysyx_24110017___024root____Vdpiexp_ysyx_24110017__DOT__RFU__DOT__gpr_reg_display_TOP));
    }
}
