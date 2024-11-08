// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vduswitch__Syms.h"


VL_ATTR_COLD void Vduswitch___024root__trace_init_sub__TOP__0(Vduswitch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vduswitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vduswitch___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"f", false,-1);
    tracep->pushNamePrefix("duswitch ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"f", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vduswitch___024root__trace_init_top(Vduswitch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vduswitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vduswitch___024root__trace_init_top\n"); );
    // Body
    Vduswitch___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vduswitch___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vduswitch___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vduswitch___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vduswitch___024root__trace_register(Vduswitch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vduswitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vduswitch___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vduswitch___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vduswitch___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vduswitch___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vduswitch___024root__trace_full_sub_0(Vduswitch___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vduswitch___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vduswitch___024root__trace_full_top_0\n"); );
    // Init
    Vduswitch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vduswitch___024root*>(voidSelf);
    Vduswitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vduswitch___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vduswitch___024root__trace_full_sub_0(Vduswitch___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vduswitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vduswitch___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->a));
    bufp->fullBit(oldp+2,(vlSelf->b));
    bufp->fullBit(oldp+3,(vlSelf->f));
}
