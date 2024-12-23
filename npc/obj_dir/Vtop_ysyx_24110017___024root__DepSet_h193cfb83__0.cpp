// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ysyx_24110017.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_ysyx_24110017___024root.h"

void Vtop_ysyx_24110017___024root___eval_act(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_act\n"); );
}

void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IFU__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_sequent__TOP__0(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->dnpc);
    vlSelf->dnpc = ((IData)(4U) + vlSelf->pc);
    if ((0U != vlSelf->pc)) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IFU__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vfunc_top_ysyx_24110017__DOT__IFU__DOT__pmem_read__0__Vfuncout);
        vlSelf->top_ysyx_24110017__DOT____Vcellout__IFU____pinNumber2 
            = vlSelf->__Vfunc_top_ysyx_24110017__DOT__IFU__DOT__pmem_read__0__Vfuncout;
    }
}

void Vtop_ysyx_24110017___024root___eval_nba(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop_ysyx_24110017___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop_ysyx_24110017___024root___eval_triggers__act(Vtop_ysyx_24110017___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__act(Vtop_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__nba(Vtop_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_ysyx_24110017___024root___eval(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop_ysyx_24110017___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop_ysyx_24110017___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/top_ysyx_24110017.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop_ysyx_24110017___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop_ysyx_24110017___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top_ysyx_24110017.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop_ysyx_24110017___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop_ysyx_24110017___024root___eval_debug_assertions(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
