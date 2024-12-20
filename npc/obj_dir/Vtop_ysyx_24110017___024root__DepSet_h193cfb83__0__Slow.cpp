// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ysyx_24110017.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_ysyx_24110017___024root.h"

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___eval_static(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___eval_initial(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___eval_final(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___eval_triggers__stl(Vtop_ysyx_24110017___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__stl(Vtop_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___eval_stl(Vtop_ysyx_24110017___024root* vlSelf);

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___eval_settle(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop_ysyx_24110017___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop_ysyx_24110017___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top_ysyx_24110017.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop_ysyx_24110017___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__stl(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop_ysyx_24110017___024root___ico_sequent__TOP__0(Vtop_ysyx_24110017___024root* vlSelf);

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___eval_stl(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop_ysyx_24110017___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__ico(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__act(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__nba(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___ctor_var_reset(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->dnpc = VL_RAND_RESET_I(32);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top_ysyx_24110017__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top_ysyx_24110017__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top_ysyx_24110017__DOT__res = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__r1 = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__r2 = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hb469f585__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgExtracted_h4a41356a__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hecdda523__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h319e4e75__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h105484d3__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5705ba9a__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0 = 0;
    vlSelf->__VdfgTmp_hae92e65f__0 = 0;
    vlSelf->__Vfunc_top_ysyx_24110017__DOT__EXU__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
