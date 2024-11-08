// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vduswitch.h for the primary calling header

#include "verilated.h"

#include "Vduswitch__Syms.h"
#include "Vduswitch___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vduswitch___024root___dump_triggers__ico(Vduswitch___024root* vlSelf);
#endif  // VL_DEBUG

void Vduswitch___024root___eval_triggers__ico(Vduswitch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vduswitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vduswitch___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vduswitch___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vduswitch___024root___dump_triggers__act(Vduswitch___024root* vlSelf);
#endif  // VL_DEBUG

void Vduswitch___024root___eval_triggers__act(Vduswitch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vduswitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vduswitch___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vduswitch___024root___dump_triggers__act(vlSelf);
    }
#endif
}
