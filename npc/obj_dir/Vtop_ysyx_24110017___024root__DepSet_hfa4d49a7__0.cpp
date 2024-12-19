// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ysyx_24110017.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_ysyx_24110017__Syms.h"
#include "Vtop_ysyx_24110017___024root.h"

extern "C" void npc_trap();

VL_INLINE_OPT void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP\n"); );
    // Body
    npc_trap();
}

void Vtop_ysyx_24110017___024root____Vdpiexp_top_ysyx_24110017__DOT__RF__DOT__gpr_reg_display_TOP(Vtop_ysyx_24110017__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ &gpr_reg_display__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root____Vdpiexp_top_ysyx_24110017__DOT__RF__DOT__gpr_reg_display_TOP\n"); );
    // Init
    // Body
    gpr_reg_display__Vfuncrtn = ((0U == addr) ? 0U : 
                                 vlSymsp->TOP.top_ysyx_24110017__DOT__RF__DOT__rf
                                 [(0x1fU & addr)]);
}

extern "C" int pmem_read(const svLogicVecVal* raddr);

VL_INLINE_OPT void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_read_TOP\n"); );
    // Body
    svLogicVecVal raddr__Vcvt[1];
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) VL_SET_SVLV_I(32, raddr__Vcvt + 1 * raddr__Vidx, raddr);
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(const svLogicVecVal* waddr, const svLogicVecVal* wdata, const svLogicVecVal* wmask);

VL_INLINE_OPT void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_write_TOP\n"); );
    // Body
    svLogicVecVal waddr__Vcvt[1];
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) VL_SET_SVLV_I(32, waddr__Vcvt + 1 * waddr__Vidx, waddr);
    svLogicVecVal wdata__Vcvt[1];
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) VL_SET_SVLV_I(32, wdata__Vcvt + 1 * wdata__Vidx, wdata);
    svLogicVecVal wmask__Vcvt[1];
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) VL_SET_SVLV_I(8, wmask__Vcvt + 1 * wmask__Vidx, wmask);
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__ico(Vtop_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_ysyx_24110017___024root___eval_triggers__ico(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = (vlSelf->top_ysyx_24110017__DOT__imm 
                                      != vlSelf->__Vtrigrprev__TOP__top_ysyx_24110017__DOT__imm);
    vlSelf->__Vtrigrprev__TOP__top_ysyx_24110017__DOT__imm 
        = vlSelf->top_ysyx_24110017__DOT__imm;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_ysyx_24110017___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__act(Vtop_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_ysyx_24110017___024root___eval_triggers__act(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (vlSelf->top_ysyx_24110017__DOT__imm 
                                      != vlSelf->__Vtrigrprev__TOP__top_ysyx_24110017__DOT__imm);
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__top_ysyx_24110017__DOT__imm 
        = vlSelf->top_ysyx_24110017__DOT__imm;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_ysyx_24110017___024root___dump_triggers__act(vlSelf);
    }
#endif
}
