// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VReg_ysyx_24110017__Syms.h"
#include "VReg_ysyx_24110017.h"
#include "VReg_ysyx_24110017___024root.h"

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
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
