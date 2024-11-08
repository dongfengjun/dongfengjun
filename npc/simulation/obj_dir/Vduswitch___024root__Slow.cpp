// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vduswitch.h for the primary calling header

#include "verilated.h"

#include "Vduswitch__Syms.h"
#include "Vduswitch___024root.h"

void Vduswitch___024root___ctor_var_reset(Vduswitch___024root* vlSelf);

Vduswitch___024root::Vduswitch___024root(Vduswitch__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vduswitch___024root___ctor_var_reset(this);
}

void Vduswitch___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vduswitch___024root::~Vduswitch___024root() {
}
