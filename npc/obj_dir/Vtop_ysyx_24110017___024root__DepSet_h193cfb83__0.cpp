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

void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__EXU__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_sequent__TOP__0(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0;
    __Vdlyvdim0__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0;
    __Vdlyvval__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0;
    __Vdlyvset__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top_ysyx_24110017__DOT__RF__DOT__rf__v0;
    __Vdlyvdim0__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_ysyx_24110017__DOT__RF__DOT__rf__v0;
    __Vdlyvval__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0;
    __Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0 = 0U;
    __Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 0U;
    if (vlSelf->top_ysyx_24110017__DOT__IFU__DOT__wen) {
        __Vdlyvval__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0 
            = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__wdata;
        __Vdlyvset__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0 
            = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__waddr;
    }
    if (vlSelf->top_ysyx_24110017__DOT__wr_en) {
        __Vdlyvval__top_ysyx_24110017__DOT__RF__DOT__rf__v0 
            = (((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                | ((0x13U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                   | ((0xfU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                      | ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                         | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))))
                ? vlSelf->top_ysyx_24110017__DOT__res
                : ((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                    ? ((IData)(4U) + vlSelf->pc) : 
                   ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                     ? ((IData)(4U) + vlSelf->pc) : 
                    ((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                      ? vlSelf->top_ysyx_24110017__DOT__imm
                      : ((0x17U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                          ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                          : 0U)))));
        __Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top_ysyx_24110017__DOT__RF__DOT__rf__v0 
            = ((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                ? (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc3969ba__0)
                : 0U);
    }
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__mstatus = 0x1800U;
        vlSelf->top_ysyx_24110017__DOT__mtvec = 0U;
        vlSelf->top_ysyx_24110017__DOT__mcause = 0U;
        vlSelf->top_ysyx_24110017__DOT__mepc = 0U;
        vlSelf->pc = 0x80000000U;
    } else {
        if (vlSelf->top_ysyx_24110017__DOT__mstatus_wen) {
            vlSelf->top_ysyx_24110017__DOT__mstatus 
                = vlSelf->top_ysyx_24110017__DOT__csrs_in;
        }
        if (vlSelf->top_ysyx_24110017__DOT__mtvec_wen) {
            vlSelf->top_ysyx_24110017__DOT__mtvec = vlSelf->top_ysyx_24110017__DOT__csrs_in;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0) 
             | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))) {
            vlSelf->top_ysyx_24110017__DOT__mcause 
                = ((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                    ? vlSelf->top_ysyx_24110017__DOT__r2
                    : vlSelf->top_ysyx_24110017__DOT__csrs_in);
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0) 
             | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))) {
            vlSelf->top_ysyx_24110017__DOT__mepc = 
                ((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                  ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in);
        }
        vlSelf->pc = vlSelf->dnpc;
    }
    if (__Vdlyvset__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0) {
        vlSelf->top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf[__Vdlyvdim0__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0] 
            = __Vdlyvval__top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf__v0;
    }
    if (__Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0) {
        vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[__Vdlyvdim0__top_ysyx_24110017__DOT__RF__DOT__rf__v0] 
            = __Vdlyvval__top_ysyx_24110017__DOT__RF__DOT__rf__v0;
    }
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
