// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VReg_ysyx_24110017.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VReg_ysyx_24110017__Syms.h"
#include "VReg_ysyx_24110017___024root.h"

extern "C" void npc_trap();

VL_INLINE_OPT void VReg_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP\n"); );
    // Body
    npc_trap();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VReg_ysyx_24110017___024root___dump_triggers__act(VReg_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG

void VReg_ysyx_24110017___024root___eval_triggers__act(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VReg_ysyx_24110017___024root___dump_triggers__act(vlSelf);
    }
#endif
}
