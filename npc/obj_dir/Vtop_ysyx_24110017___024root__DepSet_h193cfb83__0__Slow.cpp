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

void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___stl_sequent__TOP__0(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->__VdfgTmp_hfab7399b__0 = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf
        [(0xffU & vlSelf->pc)];
    if ((0U == (0xffU & vlSelf->pc))) {
        vlSelf->inst = 0U;
        vlSelf->top_ysyx_24110017__DOT__shamt = 0U;
        vlSelf->top_ysyx_24110017__DOT__funct3 = 0U;
        vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc3969ba__0 = 0U;
        vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc327e75__0 = 0U;
        vlSelf->top_ysyx_24110017__DOT__op = 0U;
    } else {
        vlSelf->inst = vlSelf->__VdfgTmp_hfab7399b__0;
        vlSelf->top_ysyx_24110017__DOT__shamt = (0x1fU 
                                                 & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                    >> 0x14U));
        vlSelf->top_ysyx_24110017__DOT__funct3 = (7U 
                                                  & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                     >> 0xcU));
        vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc3969ba__0 
            = (0x1fU & (vlSelf->__VdfgTmp_hfab7399b__0 
                        >> 7U));
        vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc327e75__0 
            = (vlSelf->__VdfgTmp_hfab7399b__0 >> 0x19U);
        vlSelf->top_ysyx_24110017__DOT__op = (0x7fU 
                                              & vlSelf->__VdfgTmp_hfab7399b__0);
    }
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0 
        = ((0U != (0xffU & vlSelf->pc)) & (vlSelf->__VdfgTmp_hfab7399b__0 
                                           >> 0x1fU));
    if ((0x100073U == vlSelf->inst)) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h56110f4f__0 
        = (- (IData)(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                      & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5d6feb86__0 
        = (- (IData)(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                      & (2U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h57160f83__0 
        = (- (IData)(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                      & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    vlSelf->top_ysyx_24110017__DOT__funct7 = (((0x33U 
                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                               | (0x13U 
                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))
                                               ? (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc327e75__0)
                                               : 0U);
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0 
        = ((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           | (0x17U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)));
    vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0 
        = ((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           | (0x33U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)));
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0 
        = ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           | ((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
              | ((0x13U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                 | ((0xfU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                    | (0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha4994cf9__0 
        = (- (IData)(((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                      & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h12d66a67__0 
        = (- (IData)(((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                      & (0x20U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))));
    vlSelf->top_ysyx_24110017__DOT__wr_en = ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0) 
                                             | ((0x6fU 
                                                 == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                | ((0x67U 
                                                    == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                      | ((0x13U 
                                                          == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                         | ((0xfU 
                                                             == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                            | ((0x73U 
                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                               | (0x33U 
                                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))))))));
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0 
        = ((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0));
    vlSelf->top_ysyx_24110017__DOT__imm = ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0)
                                            ? (((0U 
                                                 == 
                                                 (0xffU 
                                                  & vlSelf->pc))
                                                 ? 0U
                                                 : 
                                                (vlSelf->__VdfgTmp_hfab7399b__0 
                                                 >> 0xcU)) 
                                               << 0xcU)
                                            : ((0x6fU 
                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                                ? (
                                                   ((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                                                    << 0x15U) 
                                                   | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0) 
                                                       << 0x14U) 
                                                      | ((((0U 
                                                            == 
                                                            (0xffU 
                                                             & vlSelf->pc))
                                                            ? 0U
                                                            : 
                                                           (0xffU 
                                                            & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                               >> 0xcU))) 
                                                          << 0xcU) 
                                                         | ((0x7ff800U 
                                                             & (((0U 
                                                                  != 
                                                                  (0xffU 
                                                                   & vlSelf->pc)) 
                                                                 << 0xbU) 
                                                                & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                                   >> 9U))) 
                                                            | (((0U 
                                                                 == 
                                                                 (0xffU 
                                                                  & vlSelf->pc))
                                                                 ? 0U
                                                                 : 
                                                                (0x3ffU 
                                                                 & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                                    >> 0x15U))) 
                                                               << 1U)))))
                                                : (
                                                   (0x63U 
                                                    == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0) 
                                                        << 0xcU) 
                                                       | ((0xfffff800U 
                                                           & (((0U 
                                                                != 
                                                                (0xffU 
                                                                 & vlSelf->pc)) 
                                                               << 0xbU) 
                                                              & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                                 << 4U))) 
                                                          | ((((0U 
                                                                == 
                                                                (0xffU 
                                                                 & vlSelf->pc))
                                                                ? 0U
                                                                : 
                                                               (0x3fU 
                                                                & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                                   >> 0x19U))) 
                                                              << 5U) 
                                                             | (((0U 
                                                                  == 
                                                                  (0xffU 
                                                                   & vlSelf->pc))
                                                                  ? 0U
                                                                  : 
                                                                 (0xfU 
                                                                  & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                                     >> 8U))) 
                                                                << 1U)))))
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                                     ? 
                                                    (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc327e75__0) 
                                                         << 5U) 
                                                        | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc3969ba__0)))
                                                     : 
                                                    ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0)
                                                      ? 
                                                     (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                                                       << 0xcU) 
                                                      | ((0U 
                                                          == 
                                                          (0xffU 
                                                           & vlSelf->pc))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->__VdfgTmp_hfab7399b__0 
                                                          >> 0x14U)))
                                                      : 0U)))));
    vlSelf->top_ysyx_24110017__DOT__rs1 = (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0) 
                                            | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0))
                                            ? ((0U 
                                                == 
                                                (0xffU 
                                                 & vlSelf->pc))
                                                ? 0U
                                                : (0x1fU 
                                                   & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                      >> 0xfU)))
                                            : 0U);
    vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0 
        = (vlSelf->top_ysyx_24110017__DOT__imm + vlSelf->pc);
    vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0 
        = ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           & (0x341U == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__mstatus_wen = (
                                                   (0x73U 
                                                    == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                   & (0x300U 
                                                      == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0 
        = ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           & (0x342U == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__mtvec_wen = ((0x73U 
                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                 & (0x305U 
                                                    == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en 
        = ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           & ((0U == vlSelf->top_ysyx_24110017__DOT__imm) 
              & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))));
    vlSelf->__VdfgTmp_h67df1909__0 = vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf
        [vlSelf->top_ysyx_24110017__DOT__rs1];
    vlSelf->top_ysyx_24110017__DOT__csrs = ((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0)
                                             ? vlSelf->top_ysyx_24110017__DOT__mepc
                                             : ((IData)(vlSelf->top_ysyx_24110017__DOT__mstatus_wen)
                                                 ? vlSelf->top_ysyx_24110017__DOT__mstatus
                                                 : 
                                                ((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0)
                                                  ? vlSelf->top_ysyx_24110017__DOT__mcause
                                                  : 
                                                 ((IData)(vlSelf->top_ysyx_24110017__DOT__mtvec_wen)
                                                   ? vlSelf->top_ysyx_24110017__DOT__mtvec
                                                   : 0U))));
    vlSelf->top_ysyx_24110017__DOT__raddr2 = ((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                                               ? 0xfU
                                               : ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0)
                                                   ? (IData)(vlSelf->top_ysyx_24110017__DOT__shamt)
                                                   : 0U));
    vlSelf->top_ysyx_24110017__DOT__r1 = ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__rs1))
                                           ? 0U : vlSelf->__VdfgTmp_h67df1909__0);
    vlSelf->top_ysyx_24110017__DOT__r2 = ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__raddr2))
                                           ? 0U : vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf
                                          [vlSelf->top_ysyx_24110017__DOT__raddr2]);
    vlSelf->top_ysyx_24110017__DOT__csrs_in = ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h56110f4f__0 
                                                & vlSelf->top_ysyx_24110017__DOT__r1) 
                                               | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5d6feb86__0 
                                                   & (vlSelf->top_ysyx_24110017__DOT__csrs 
                                                      | vlSelf->top_ysyx_24110017__DOT__r1)) 
                                                  | (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h57160f83__0 
                                                     & (((0U 
                                                          == (IData)(vlSelf->top_ysyx_24110017__DOT__rs1))
                                                          ? 0xffffffffU
                                                          : 
                                                         (~ vlSelf->__VdfgTmp_h67df1909__0)) 
                                                        & vlSelf->top_ysyx_24110017__DOT__csrs))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0 
        = (vlSelf->top_ysyx_24110017__DOT__imm + vlSelf->top_ysyx_24110017__DOT__r1);
    vlSelf->top_ysyx_24110017__DOT__a = (((0x13U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                          | ((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                             | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))
                                          ? vlSelf->top_ysyx_24110017__DOT__r1
                                          : vlSelf->pc);
    vlSelf->top_ysyx_24110017__DOT__b = (((0x33U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                          | (0x23U 
                                             == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))
                                          ? vlSelf->top_ysyx_24110017__DOT__r2
                                          : vlSelf->top_ysyx_24110017__DOT__imm);
    vlSelf->dnpc = ((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                     ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                     : ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                         ? (0xfffffffeU & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0)
                         : (((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->top_ysyx_24110017__DOT__r1 
                                   == vlSelf->top_ysyx_24110017__DOT__r2)))
                             ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                             : (((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                 & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       != vlSelf->top_ysyx_24110017__DOT__r2)))
                                 ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                 : (((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                     & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                        & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))
                                     ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                     : (((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                            & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))
                                         ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                         : (((0x63U 
                                              == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                             & ((6U 
                                                 == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                & (vlSelf->top_ysyx_24110017__DOT__r1 
                                                   < vlSelf->top_ysyx_24110017__DOT__r2)))
                                             ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                             : (((0x63U 
                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                 & ((7U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                                       >= vlSelf->top_ysyx_24110017__DOT__r2)))
                                                 ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                                 : 
                                                ((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                                                  ? vlSelf->top_ysyx_24110017__DOT__mtvec
                                                  : 
                                                 (((0x73U 
                                                    == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                   & ((0x302U 
                                                       == vlSelf->top_ysyx_24110017__DOT__imm) 
                                                      & (0U 
                                                         == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))
                                                   ? vlSelf->top_ysyx_24110017__DOT__mepc
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc)))))))))));
    Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_read_TOP(
                                                                                ((3U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                                                                 ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                                                                                 : 0x80000000U), vlSelf->__Vfunc_top_ysyx_24110017__DOT__EXU__DOT__pmem_read__2__Vfuncout);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgExtracted_h4a41356a__0 
        = vlSelf->__Vfunc_top_ysyx_24110017__DOT__EXU__DOT__pmem_read__2__Vfuncout;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h72806210__0 
        = (((QData)((IData)((- (IData)((vlSelf->top_ysyx_24110017__DOT__a 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__a)));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hecdda523__0 
        = (vlSelf->top_ysyx_24110017__DOT__a + vlSelf->top_ysyx_24110017__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b8471d5__0 
        = VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__a, vlSelf->top_ysyx_24110017__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b7712a5__0 
        = (vlSelf->top_ysyx_24110017__DOT__a < vlSelf->top_ysyx_24110017__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h37e52d1e__0 
        = (vlSelf->top_ysyx_24110017__DOT__a ^ vlSelf->top_ysyx_24110017__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h31150b40__0 
        = (vlSelf->top_ysyx_24110017__DOT__a | vlSelf->top_ysyx_24110017__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hece52006__0 
        = (vlSelf->top_ysyx_24110017__DOT__a & vlSelf->top_ysyx_24110017__DOT__b);
    if (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
         | (3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) {
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata 
            = vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgExtracted_h4a41356a__0;
        if ((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))) {
            Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_write_TOP(
                                                                                ((0x23U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                                                                 ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                                                                                 : 0x80000000U), 
                                                                                ((0x23U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                                                                 ? vlSelf->top_ysyx_24110017__DOT__r2
                                                                                 : 0U), 
                                                                                (((0x23U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                                                 ? 1U
                                                                                 : 
                                                                                (((0x23U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                                                 ? 3U
                                                                                 : 
                                                                                (((0x23U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                                                & (2U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                                                 ? 0xfU
                                                                                 : 0U))));
        }
    } else {
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata = 0U;
    }
    vlSelf->top_ysyx_24110017__DOT__res = (((- (IData)(
                                                       (0x13U 
                                                        == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) 
                                            & (((- (IData)(
                                                           (0U 
                                                            == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                                                & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hecdda523__0) 
                                               | (((- (IData)(
                                                              (1U 
                                                               == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                                                   & (vlSelf->top_ysyx_24110017__DOT__a 
                                                      << (IData)(vlSelf->top_ysyx_24110017__DOT__shamt))) 
                                                  | (((- (IData)(
                                                                 (2U 
                                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                                                      & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b8471d5__0) 
                                                     | (((- (IData)(
                                                                    (3U 
                                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                                                         & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b7712a5__0) 
                                                        | (((- (IData)(
                                                                       (4U 
                                                                        == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                                                            & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h37e52d1e__0) 
                                                           | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha4994cf9__0 
                                                               & (vlSelf->top_ysyx_24110017__DOT__a 
                                                                  >> (IData)(vlSelf->top_ysyx_24110017__DOT__shamt))) 
                                                              | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h12d66a67__0 
                                                                  & (IData)(
                                                                            (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h72806210__0 
                                                                             >> (IData)(vlSelf->top_ysyx_24110017__DOT__shamt)))) 
                                                                 | (((- (IData)(
                                                                                (6U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                                                                     & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h31150b40__0) 
                                                                    | ((- (IData)(
                                                                                (7U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                                                                       & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hece52006__0)))))))))) 
                                           | (((- (IData)(
                                                          (0x33U 
                                                           == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) 
                                               & (((- (IData)(
                                                              ((0U 
                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                               & (0U 
                                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                   & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hecdda523__0) 
                                                  | (((- (IData)(
                                                                 ((0U 
                                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                  & (0x20U 
                                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                      & ((IData)(1U) 
                                                         + 
                                                         ((~ vlSelf->top_ysyx_24110017__DOT__b) 
                                                          + vlSelf->top_ysyx_24110017__DOT__a))) 
                                                     | (((- (IData)(
                                                                    ((1U 
                                                                      == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                     & (0U 
                                                                        == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                         & ((0x1fU 
                                                             >= vlSelf->top_ysyx_24110017__DOT__b)
                                                             ? 
                                                            (vlSelf->top_ysyx_24110017__DOT__a 
                                                             << vlSelf->top_ysyx_24110017__DOT__b)
                                                             : 0U)) 
                                                        | (((- (IData)(
                                                                       ((2U 
                                                                         == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                        & (0U 
                                                                           == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                            & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b8471d5__0) 
                                                           | (((- (IData)(
                                                                          ((3U 
                                                                            == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                           & (0U 
                                                                              == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                               & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b7712a5__0) 
                                                              | (((- (IData)(
                                                                             ((4U 
                                                                               == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                              & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                                  & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h37e52d1e__0) 
                                                                 | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha4994cf9__0 
                                                                     & (vlSelf->top_ysyx_24110017__DOT__a 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & vlSelf->top_ysyx_24110017__DOT__b))) 
                                                                    | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h12d66a67__0 
                                                                        & (IData)(
                                                                                ((0x3fU 
                                                                                >= vlSelf->top_ysyx_24110017__DOT__b)
                                                                                 ? 
                                                                                (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h72806210__0 
                                                                                >> vlSelf->top_ysyx_24110017__DOT__b)
                                                                                 : 0ULL))) 
                                                                       | (((- (IData)(
                                                                                ((6U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                                           & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h31150b40__0) 
                                                                          | (((- (IData)(
                                                                                ((7U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                                              & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hece52006__0) 
                                                                             | (((- (IData)(
                                                                                ((0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                                                & (vlSelf->top_ysyx_24110017__DOT__a 
                                                                                * vlSelf->top_ysyx_24110017__DOT__b)) 
                                                                                | (((- (IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                                                & (IData)(
                                                                                ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h72806210__0 
                                                                                * 
                                                                                (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->top_ysyx_24110017__DOT__b 
                                                                                >> 0x1fU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__b)))) 
                                                                                >> 0x20U))) 
                                                                                | (((- (IData)(
                                                                                ((4U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                                                & VL_DIVS_III(32, vlSelf->top_ysyx_24110017__DOT__a, vlSelf->top_ysyx_24110017__DOT__b)) 
                                                                                | (((- (IData)(
                                                                                ((5U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                                                & VL_DIV_III(32, vlSelf->top_ysyx_24110017__DOT__a, vlSelf->top_ysyx_24110017__DOT__b)) 
                                                                                | (((- (IData)(
                                                                                ((6U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                                                | (- (IData)(
                                                                                ((7U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                                & VL_MODDIV_III(32, vlSelf->top_ysyx_24110017__DOT__a, vlSelf->top_ysyx_24110017__DOT__b))))))))))))))))) 
                                              | (((- (IData)(
                                                             ((3U 
                                                               == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                              & (0U 
                                                                 == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))) 
                                                  & (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata))) 
                                                 | (((- (IData)(
                                                                ((3U 
                                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                                 & (1U 
                                                                    == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))) 
                                                     & (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata 
                                                                        >> 0xfU)))) 
                                                         << 0x10U) 
                                                        | (0xffffU 
                                                           & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata))) 
                                                    | (((- (IData)(
                                                                   ((3U 
                                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                                    & (2U 
                                                                       == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))) 
                                                        & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata) 
                                                       | ((0xffU 
                                                           & ((- (IData)(
                                                                         ((3U 
                                                                           == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                                          & (4U 
                                                                             == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))) 
                                                              & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata)) 
                                                          | ((0xffffU 
                                                              & ((- (IData)(
                                                                            ((3U 
                                                                              == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                                             & (5U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))) 
                                                                 & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata)) 
                                                             | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h56110f4f__0 
                                                                 | (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5d6feb86__0 
                                                                    | vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h57160f83__0)) 
                                                                & vlSelf->top_ysyx_24110017__DOT__csrs))))))));
}

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___eval_stl(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop_ysyx_24110017___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

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
    vlSelf->top_ysyx_24110017__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->top_ysyx_24110017__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top_ysyx_24110017__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top_ysyx_24110017__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top_ysyx_24110017__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->top_ysyx_24110017__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__res = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__raddr2 = VL_RAND_RESET_I(5);
    vlSelf->top_ysyx_24110017__DOT__r1 = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__r2 = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__csrs = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__csrs_in = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__mstatus_wen = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__mtvec_wen = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0 = 0;
    vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0 = 0;
    vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__wata = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__waddr = VL_RAND_RESET_I(8);
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__raddr2 = VL_RAND_RESET_I(8);
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__wdata = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__wen = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc3969ba__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc327e75__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgExtracted_h4a41356a__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h56110f4f__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5d6feb86__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h57160f83__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hecdda523__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b8471d5__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b7712a5__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h37e52d1e__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha4994cf9__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h12d66a67__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h72806210__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h31150b40__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hece52006__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0 = 0;
    vlSelf->__VdfgTmp_hfab7399b__0 = 0;
    vlSelf->__VdfgTmp_h67df1909__0 = 0;
    vlSelf->__Vfunc_top_ysyx_24110017__DOT__EXU__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
