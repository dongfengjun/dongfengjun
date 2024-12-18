// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ysyx_24110017.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_ysyx_24110017__Syms.h"
#include "Vtop_ysyx_24110017___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__stl(Vtop_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___eval_triggers__stl(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_ysyx_24110017___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
