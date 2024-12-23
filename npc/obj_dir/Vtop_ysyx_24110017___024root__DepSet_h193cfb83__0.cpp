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
void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_sequent__TOP__0(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top_ysyx_24110017__DOT__RF__DOT__rf__v0;
    __Vdlyvdim0__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_ysyx_24110017__DOT__RF__DOT__rf__v0;
    __Vdlyvval__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0;
    __Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 0U;
    if (vlSelf->top_ysyx_24110017__DOT__wr_en) {
        __Vdlyvval__top_ysyx_24110017__DOT__RF__DOT__rf__v0 
            = (((3U == (0x7fU & vlSelf->inst)) | ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  | ((0xfU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst)) 
                                                     | ((0x73U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))))
                ? vlSelf->top_ysyx_24110017__DOT__res
                : ((0x6fU == (0x7fU & vlSelf->inst))
                    ? ((IData)(4U) + vlSelf->pc) : 
                   ((0x67U == (0x7fU & vlSelf->inst))
                     ? ((IData)(4U) + vlSelf->pc) : 
                    ((0x37U == (0x7fU & vlSelf->inst))
                      ? vlSelf->top_ysyx_24110017__DOT__imm
                      : ((0x17U == (0x7fU & vlSelf->inst))
                          ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                          : 0U)))));
        __Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top_ysyx_24110017__DOT__RF__DOT__rf__v0 
            = ((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                ? (0x1fU & (vlSelf->inst >> 7U)) : 0U);
    }
    if (__Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0) {
        vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[__Vdlyvdim0__top_ysyx_24110017__DOT__RF__DOT__rf__v0] 
            = __Vdlyvval__top_ysyx_24110017__DOT__RF__DOT__rf__v0;
    }
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->dnpc);
    if ((0U != vlSelf->pc)) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IFU__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vfunc_top_ysyx_24110017__DOT__IFU__DOT__pmem_read__0__Vfuncout);
        vlSelf->inst = vlSelf->__Vfunc_top_ysyx_24110017__DOT__IFU__DOT__pmem_read__0__Vfuncout;
    } else {
        vlSelf->inst = 0U;
    }
    if ((0x100073U == vlSelf->inst)) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->top_ysyx_24110017__DOT__funct7 = ((0x33U 
                                               == (0x7fU 
                                                   & vlSelf->inst))
                                               ? (vlSelf->inst 
                                                  >> 0x19U)
                                               : 0U);
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0 
        = ((0x37U == (0x7fU & vlSelf->inst)) | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0 
        = ((0x67U == (0x7fU & vlSelf->inst)) | ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)) 
                                                | ((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst)) 
                                                   | ((0xfU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst)) 
                                                      | (0x73U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst))))));
    vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0 
        = ((0x23U == (0x7fU & vlSelf->inst)) | (0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha4994cf9__0 
        = (- (IData)((IData)(((0x5000U == (0x7000U 
                                           & vlSelf->inst)) 
                              & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h12d66a67__0 
        = (- (IData)((IData)(((0x5000U == (0x7000U 
                                           & vlSelf->inst)) 
                              & (0x20U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))));
    vlSelf->top_ysyx_24110017__DOT__wr_en = ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)) 
                                                | ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst)) 
                                                   | ((3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst)) 
                                                      | ((0x13U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst)) 
                                                         | ((0xfU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->inst)) 
                                                            | ((0x73U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->inst)) 
                                                               | (0x33U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->inst)))))))));
    vlSelf->top_ysyx_24110017__DOT__imm = ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0)
                                            ? (0xfffff000U 
                                               & vlSelf->inst)
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->inst 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->inst) 
                                                         | ((0x800U 
                                                             & (vlSelf->inst 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->inst 
                                                                  >> 0x14U))))))
                                                : (
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | ((0x1000U 
                                                        & (vlSelf->inst 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->inst 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->inst 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->inst 
                                                                   >> 7U))))))
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->inst 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->inst 
                                                              >> 7U))))
                                                     : 
                                                    ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelf->inst 
                                                         >> 0x14U))
                                                      : 0U)))));
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0 
        = ((0x63U == (0x7fU & vlSelf->inst)) | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0));
    vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0 
        = (vlSelf->top_ysyx_24110017__DOT__imm + vlSelf->pc);
    vlSelf->top_ysyx_24110017__DOT__rs2 = ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0)
                                            ? (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0x14U))
                                            : 0U);
    vlSelf->top_ysyx_24110017__DOT__rs1 = (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0) 
                                            | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0))
                                            ? (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0xfU))
                                            : 0U);
    vlSelf->top_ysyx_24110017__DOT__r2 = ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__rs2))
                                           ? 0U : vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf
                                          [vlSelf->top_ysyx_24110017__DOT__rs2]);
    vlSelf->top_ysyx_24110017__DOT__r1 = ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__rs1))
                                           ? 0U : vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf
                                          [vlSelf->top_ysyx_24110017__DOT__rs1]);
    vlSelf->top_ysyx_24110017__DOT__b = (((0x33U == 
                                           (0x7fU & vlSelf->inst)) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->inst)))
                                          ? vlSelf->top_ysyx_24110017__DOT__r2
                                          : vlSelf->top_ysyx_24110017__DOT__imm);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0 
        = (vlSelf->top_ysyx_24110017__DOT__imm + vlSelf->top_ysyx_24110017__DOT__r1);
    vlSelf->top_ysyx_24110017__DOT__a = (((0x13U == 
                                           (0x7fU & vlSelf->inst)) 
                                          | ((3U == 
                                              (0x7fU 
                                               & vlSelf->inst)) 
                                             | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))
                                          ? vlSelf->top_ysyx_24110017__DOT__r1
                                          : vlSelf->pc);
    vlSelf->dnpc = ((0x6fU == (0x7fU & vlSelf->inst))
                     ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                     : ((0x67U == (0x7fU & vlSelf->inst))
                         ? (0xfffffffeU & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0)
                         : ((IData)(((0x63U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        == vlSelf->top_ysyx_24110017__DOT__r2)))
                             ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                             : ((IData)(((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->inst)) 
                                         & (vlSelf->top_ysyx_24110017__DOT__r1 
                                            != vlSelf->top_ysyx_24110017__DOT__r2)))
                                 ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                 : ((IData)(((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->inst)) 
                                             & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))
                                     ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                     : ((IData)(((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)) 
                                                 & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))
                                         ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                         : ((IData)(
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst)) 
                                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                                        < vlSelf->top_ysyx_24110017__DOT__r2)))
                                             ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                             : ((IData)(
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst)) 
                                                         & (vlSelf->top_ysyx_24110017__DOT__r1 
                                                            >= vlSelf->top_ysyx_24110017__DOT__r2)))
                                                 ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->pc)))))))));
    Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IFU__DOT__pmem_read_TOP(
                                                                                ((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst))
                                                                                 ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                                                                                 : 0x80000000U), vlSelf->__Vfunc_top_ysyx_24110017__DOT__EXU__DOT__pmem_read__3__Vfuncout);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgExtracted_h4a41356a__0 
        = vlSelf->__Vfunc_top_ysyx_24110017__DOT__EXU__DOT__pmem_read__3__Vfuncout;
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
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h090d658f__0 
        = (IData)(VL_DIV_QQQ(64, (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__a)), (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__b))));
    if (((0x23U == (0x7fU & vlSelf->inst)) | (3U == 
                                              (0x7fU 
                                               & vlSelf->inst)))) {
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata 
            = vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgExtracted_h4a41356a__0;
        if ((0x23U == (0x7fU & vlSelf->inst))) {
            Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_write_TOP(
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst))
                                                                                 ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                                                                                 : 0x80000000U), 
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst))
                                                                                 ? vlSelf->top_ysyx_24110017__DOT__r2
                                                                                 : 0U), 
                                                                                ((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->inst)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->inst)))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->inst)))
                                                                                 ? 0xfU
                                                                                 : 0U))));
        }
    } else {
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata = 0U;
    }
    vlSelf->top_ysyx_24110017__DOT__res = (((- (IData)(
                                                       (0x13U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->inst)))) 
                                            & (((- (IData)(
                                                           (0U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->inst 
                                                                >> 0xcU))))) 
                                                & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hecdda523__0) 
                                               | (((- (IData)(
                                                              (1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->inst 
                                                                   >> 0xcU))))) 
                                                   & (vlSelf->top_ysyx_24110017__DOT__a 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->inst 
                                                          >> 0x14U)))) 
                                                  | (((- (IData)(
                                                                 (2U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->inst 
                                                                      >> 0xcU))))) 
                                                      & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b8471d5__0) 
                                                     | (((- (IData)(
                                                                    (3U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->inst 
                                                                         >> 0xcU))))) 
                                                         & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b7712a5__0) 
                                                        | (((- (IData)(
                                                                       (4U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->inst 
                                                                            >> 0xcU))))) 
                                                            & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h37e52d1e__0) 
                                                           | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha4994cf9__0 
                                                               & (IData)(
                                                                         ((QData)((IData)(vlSelf->top_ysyx_24110017__DOT__a)) 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U))))) 
                                                              | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h12d66a67__0 
                                                                  & vlSelf->top_ysyx_24110017__DOT__a) 
                                                                 | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xcU))))) 
                                                                     & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h31150b40__0) 
                                                                    | ((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xcU))))) 
                                                                       & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hece52006__0)))))))))) 
                                           | (((- (IData)(
                                                          (0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->inst)))) 
                                               & (((- (IData)((IData)(
                                                                      ((0U 
                                                                        == 
                                                                        (0x7000U 
                                                                         & vlSelf->inst)) 
                                                                       & (0U 
                                                                          == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                   & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hecdda523__0) 
                                                  | (((- (IData)((IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->inst)) 
                                                                          & (0x20U 
                                                                             == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                      & ((IData)(1U) 
                                                         + 
                                                         ((~ vlSelf->top_ysyx_24110017__DOT__b) 
                                                          + vlSelf->top_ysyx_24110017__DOT__a))) 
                                                     | (((- (IData)((IData)(
                                                                            ((0x1000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->inst)) 
                                                                             & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                         & ((0x1fU 
                                                             >= vlSelf->top_ysyx_24110017__DOT__b)
                                                             ? 
                                                            (vlSelf->top_ysyx_24110017__DOT__a 
                                                             << vlSelf->top_ysyx_24110017__DOT__b)
                                                             : 0U)) 
                                                        | (((- (IData)((IData)(
                                                                               ((0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                            & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b8471d5__0) 
                                                           | (((- (IData)((IData)(
                                                                                ((0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                               & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b7712a5__0) 
                                                              | (((- (IData)((IData)(
                                                                                ((0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                  & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h37e52d1e__0) 
                                                                 | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha4994cf9__0 
                                                                     & (IData)(
                                                                               ((QData)((IData)(vlSelf->top_ysyx_24110017__DOT__a)) 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & vlSelf->top_ysyx_24110017__DOT__b)))) 
                                                                    | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h12d66a67__0 
                                                                        & (IData)(
                                                                                ((0x3fU 
                                                                                >= vlSelf->top_ysyx_24110017__DOT__b)
                                                                                 ? 
                                                                                (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h72806210__0 
                                                                                >> vlSelf->top_ysyx_24110017__DOT__b)
                                                                                 : 0ULL))) 
                                                                       | (((- (IData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                           & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h31150b40__0) 
                                                                          | (((- (IData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                              & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hece52006__0) 
                                                                             | (((- (IData)((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top_ysyx_24110017__DOT__a)) 
                                                                                * (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__b))))) 
                                                                                | (((- (IData)((IData)(
                                                                                ((0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
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
                                                                                | (((- (IData)((IData)(
                                                                                ((0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                                & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h090d658f__0) 
                                                                                | (((- (IData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                                & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h090d658f__0) 
                                                                                | (((- (IData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                                | (- (IData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))))) 
                                                                                & (IData)(
                                                                                VL_MODDIV_QQQ(64, (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__a)), (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__b)))))))))))))))))))) 
                                              | (((- (IData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->inst))))) 
                                                  & (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata))) 
                                                 | (((- (IData)((IData)(
                                                                        (0x1003U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->inst))))) 
                                                     & (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata 
                                                                        >> 0xfU)))) 
                                                         << 0x10U) 
                                                        | (0xffffU 
                                                           & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata))) 
                                                    | (((- (IData)((IData)(
                                                                           (0x2003U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->inst))))) 
                                                        & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata) 
                                                       | ((0xffU 
                                                           & ((- (IData)((IData)(
                                                                                (0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->inst))))) 
                                                              & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata)) 
                                                          | (0xffffU 
                                                             & ((- (IData)((IData)(
                                                                                (0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->inst))))) 
                                                                & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata))))))));
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
