// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCTop__Syms.h"
#include "VysyxSoCTop___024root.h"

void VysyxSoCTop___024root___ctor_var_reset(VysyxSoCTop___024root* vlSelf);

VysyxSoCTop___024root::VysyxSoCTop___024root(VysyxSoCTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCTop___024root___ctor_var_reset(this);
}

void VysyxSoCTop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCTop___024root::~VysyxSoCTop___024root() {
}
