// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ysyx_24110017.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_ysyx_24110017___024root.h"

extern const VlUnpacked<CData/*1:0*/, 128> Vtop_ysyx_24110017__ConstPool__TABLE_h09dcacfa_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vtop_ysyx_24110017__ConstPool__TABLE_h6fed9396_0;

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___ico_sequent__TOP__0(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state 
        = vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state;
    vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state 
        = vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state 
        = vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state;
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid) 
                             << 6U) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid) 
                                        << 5U) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top_ysyx_24110017__DOT__wbu_done) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->rst) 
                                                         << 2U) 
                                                        | (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state))))));
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state 
        = Vtop_ysyx_24110017__ConstPool__TABLE_h09dcacfa_0
        [vlSelf->__Vtableidx1];
    vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state 
        = vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state;
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state = 0U;
        vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state = 0U;
        vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state = 0U;
        vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state = 0U;
    } else {
        if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state) {
            if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state = 0U;
                }
            } else {
                vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state = 0U;
            }
        } else if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid) {
            vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state = 1U;
        }
        if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                 & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state = 1U;
            }
        } else {
            vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state 
                = ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))
                    ? 2U : 0U);
        }
        if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
            if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state = 0U;
                }
            } else {
                vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid) 
                    & (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready))) {
            vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state = 1U;
        }
        if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))) {
            vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state 
                = (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid) 
                    | (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid))
                    ? 1U : ((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid)
                             ? 2U : 0U));
        } else if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))) {
            if ((((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid) 
                  & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready)) 
                 | ((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid) 
                    & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready)))) {
                vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state = 0U;
            }
        } else if ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))) {
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid) 
                 & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready))) {
                vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state = 0U;
            }
        } else {
            vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state = 0U;
        }
    }
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready) 
                             << 8U) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                                        << 7U) | (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_DONE) 
                                                   << 6U) 
                                                  | ((0x20U 
                                                      & ((~ (IData)(vlSelf->top_ysyx_24110017__DOT__ls_valid)) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->rst) 
                                                               << 2U) 
                                                              | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))))))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state 
        = Vtop_ysyx_24110017__ConstPool__TABLE_h6fed9396_0
        [vlSelf->__Vtableidx2];
}

void Vtop_ysyx_24110017___024root___eval_ico(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop_ysyx_24110017___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop_ysyx_24110017___024root___eval_act(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_sequent__TOP__0(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state;
    __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 0;
    CData/*7:0*/ __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter;
    __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter = 0;
    CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__EXU__DOT__exu_valid;
    __Vdly__top_ysyx_24110017__DOT__EXU__DOT__exu_valid = 0;
    CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen;
    __Vdly__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen = 0;
    CData/*4:0*/ __Vdlyvdim0__top_ysyx_24110017__DOT__RFU__DOT__rf__v0;
    __Vdlyvdim0__top_ysyx_24110017__DOT__RFU__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_ysyx_24110017__DOT__RFU__DOT__rf__v0;
    __Vdlyvval__top_ysyx_24110017__DOT__RFU__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_ysyx_24110017__DOT__RFU__DOT__rf__v0;
    __Vdlyvset__top_ysyx_24110017__DOT__RFU__DOT__rf__v0 = 0;
    // Body
    __Vdly__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen;
    __Vdly__top_ysyx_24110017__DOT__EXU__DOT__exu_valid 
        = vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__IDU__DOT__idu_valid 
        = vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid;
    __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter 
        = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter;
    __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state 
        = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__ifu_valid 
        = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid;
    __Vdlyvset__top_ysyx_24110017__DOT__RFU__DOT__rf__v0 = 0U;
    vlSelf->__Vdlyvset__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0 = 0U;
    if (vlSelf->top_ysyx_24110017__DOT__rf_wen) {
        __Vdlyvval__top_ysyx_24110017__DOT__RFU__DOT__rf__v0 
            = vlSelf->top_ysyx_24110017__DOT__xrd;
        __Vdlyvset__top_ysyx_24110017__DOT__RFU__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top_ysyx_24110017__DOT__RFU__DOT__rf__v0 
            = vlSelf->top_ysyx_24110017__DOT__rf_addr;
    }
    if (vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen) {
        if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))) {
            vlSelf->__Vdlyvval__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0 
                = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata;
            vlSelf->__Vdlyvdim0__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0 
                = (7U & vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr);
        } else if ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))) {
            vlSelf->__Vdlyvval__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0 
                = vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA;
            vlSelf->__Vdlyvdim0__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0 
                = (7U & vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR);
        } else {
            vlSelf->__Vdlyvval__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0 = 0U;
            vlSelf->__Vdlyvdim0__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0 
                = (7U & 0U);
        }
        vlSelf->__Vdlyvset__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rresp = 3U;
        }
    }
    if (__Vdlyvset__top_ysyx_24110017__DOT__RFU__DOT__rf__v0) {
        vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[__Vdlyvdim0__top_ysyx_24110017__DOT__RFU__DOT__rf__v0] 
            = __Vdlyvval__top_ysyx_24110017__DOT__RFU__DOT__rf__v0;
    }
    if (vlSelf->rst) {
        __Vdly__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen = 0U;
        vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen 
            = __Vdly__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen;
        __Vdly__top_ysyx_24110017__DOT__EXU__DOT__exu_valid = 0U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__IDU__DOT__idu_valid = 0U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__ifu_valid = 0U;
        vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready = 0U;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_AWREADY 
            = vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready;
        vlSelf->top_ysyx_24110017__DOT__difftest = 0U;
        vlSelf->DIFFTEST = vlSelf->top_ysyx_24110017__DOT__difftest;
        vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp = 0U;
        vlSelf->top_ysyx_24110017__DOT__imm = 0U;
        vlSelf->top_ysyx_24110017__DOT__mstatus = 0x1800U;
        vlSelf->top_ysyx_24110017__DOT__mtvec = 0U;
        vlSelf->top_ysyx_24110017__DOT__mcause = 0U;
        vlSelf->top_ysyx_24110017__DOT__shamt = 0U;
        vlSelf->top_ysyx_24110017__DOT__funct7 = 0U;
        vlSelf->top_ysyx_24110017__DOT__rs2 = 0U;
        vlSelf->top_ysyx_24110017__DOT__rs1 = 0U;
    } else {
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_WVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready))) {
            __Vdly__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen = 1U;
        }
        if (vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen) {
            __Vdly__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen = 0U;
        }
        vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen 
            = __Vdly__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen;
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                __Vdly__top_ysyx_24110017__DOT__EXU__DOT__exu_valid = 1U;
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU_VALID) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    __Vdly__top_ysyx_24110017__DOT__EXU__DOT__exu_valid = 0U;
                }
            }
        }
        if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
            if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU_VALID) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready))) {
                    vlSelf->__Vdly__top_ysyx_24110017__DOT__IDU__DOT__idu_valid = 0U;
                }
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__imm 
                        = vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm;
                    vlSelf->top_ysyx_24110017__DOT__shamt 
                        = (0x1fU & (vlSelf->inst >> 0x14U));
                    vlSelf->top_ysyx_24110017__DOT__funct7 
                        = (((0x33U == (0x7fU & vlSelf->inst)) 
                            | (0x13U == (0x7fU & vlSelf->inst)))
                            ? (vlSelf->inst >> 0x19U)
                            : 0U);
                    vlSelf->top_ysyx_24110017__DOT__rs2 
                        = (0x1fU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
                                     ? (vlSelf->inst 
                                        >> 0x14U) : 
                                    ((IData)(((0x73U 
                                               == (0x707fU 
                                                   & vlSelf->inst)) 
                                              & (0U 
                                                 == vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm)))
                                      ? 0xfU : 0U)));
                    vlSelf->top_ysyx_24110017__DOT__rs1 
                        = (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                            ? (0x1fU & (vlSelf->inst 
                                        >> 0xfU)) : 0U);
                }
            }
        } else if (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid) 
                    & (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__IDU__DOT__idu_valid = 1U;
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU_VALID) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready))) {
                    vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__ifu_valid = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state))) {
            if (vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done) {
                vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__ifu_valid = 1U;
            }
        } else {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__ifu_valid = 0U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_AWVALID) 
             & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_AWREADY)))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_AWVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_AWREADY))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready = 0U;
        }
        vlSelf->top_ysyx_24110017__DOT__S_AXI_AWREADY 
            = vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready;
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state)))) {
                vlSelf->top_ysyx_24110017__DOT__difftest = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state)))) {
            vlSelf->top_ysyx_24110017__DOT__difftest = 0U;
        }
        vlSelf->DIFFTEST = vlSelf->top_ysyx_24110017__DOT__difftest;
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_BREADY))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp = 0U;
        }
        if (vlSelf->top_ysyx_24110017__DOT__mstatus_en) {
            vlSelf->top_ysyx_24110017__DOT__mstatus 
                = vlSelf->top_ysyx_24110017__DOT__w_mstatus;
        }
        if (vlSelf->top_ysyx_24110017__DOT__mtvec_en) {
            vlSelf->top_ysyx_24110017__DOT__mtvec = vlSelf->top_ysyx_24110017__DOT__w_mtvec;
        }
        if (vlSelf->top_ysyx_24110017__DOT__mcause_en) {
            vlSelf->top_ysyx_24110017__DOT__mcause 
                = vlSelf->top_ysyx_24110017__DOT__w_mcause;
        }
    }
    vlSelf->__VdfgTmp_h4996c350__0 = vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf
        [vlSelf->top_ysyx_24110017__DOT__rs1];
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__mepc = 0U;
        __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 0U;
        vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr = 0U;
        vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid = 0U;
        vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready = 0U;
        vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done = 0U;
        __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter = 0U;
    } else {
        if (vlSelf->top_ysyx_24110017__DOT__mepc_en) {
            vlSelf->top_ysyx_24110017__DOT__mepc = vlSelf->top_ysyx_24110017__DOT__w_mepc;
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state))) {
                __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 0U;
            } else {
                __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 0U;
                vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state))) {
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_ARVALID) 
                 & ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                    & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready)))) {
                vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid = 0U;
                vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr 
                    = vlSelf->pc;
            }
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_RVALID) 
                 & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_RREADY)))) {
                if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter))) {
                    __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter 
                        = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay;
                } else if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter))) {
                    __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 1U;
                    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready = 1U;
                    __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter = 0U;
                } else {
                    __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter 
                        = (0xffU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter) 
                                    - (IData)(1U)));
                }
            }
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_RVALID) 
                 & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_RREADY))) {
                __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 2U;
                vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready = 0U;
            }
        } else {
            vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done = 0U;
            if (vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start) {
                __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter 
                    = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay;
            } else if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter))) {
                __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter 
                    = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter;
            } else if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter))) {
                __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 1U;
                vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid = 1U;
                __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter = 0U;
            } else {
                __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter 
                    = (0xffU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter) 
                                - (IData)(1U)));
            }
        }
    }
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state 
        = __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state;
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter 
        = __Vdly__top_ysyx_24110017__DOT__IFU__DOT__delay_counter;
    vlSelf->top_ysyx_24110017__DOT__r1 = ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__rs1))
                                           ? 0U : vlSelf->__VdfgTmp_h4996c350__0);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_ARVALID 
        = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_RREADY 
        = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready;
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__rf_addr = 0U;
        vlSelf->top_ysyx_24110017__DOT__rf_wen = 0U;
        vlSelf->top_ysyx_24110017__DOT__xrd = 0U;
        vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid = 0U;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_BVALID 
            = vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid;
        vlSelf->top_ysyx_24110017__DOT__w_mstatus = 0U;
        vlSelf->top_ysyx_24110017__DOT__mstatus_en = 0U;
        vlSelf->top_ysyx_24110017__DOT__w_mtvec = 0U;
        vlSelf->top_ysyx_24110017__DOT__mtvec_en = 0U;
        vlSelf->top_ysyx_24110017__DOT__mcause_en = 0U;
        vlSelf->top_ysyx_24110017__DOT__w_mcause = 0U;
        vlSelf->top_ysyx_24110017__DOT__mepc_en = 0U;
        vlSelf->top_ysyx_24110017__DOT__w_mepc = 0U;
        vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start = 0U;
        vlSelf->top_ysyx_24110017__DOT__rd = 0U;
        vlSelf->top_ysyx_24110017__DOT__gpr_wen = 0U;
        vlSelf->top_ysyx_24110017__DOT__res = 0x80000000U;
        vlSelf->top_ysyx_24110017__DOT__o_mstatus = 0U;
        vlSelf->top_ysyx_24110017__DOT__mstatus_wen = 0U;
        vlSelf->top_ysyx_24110017__DOT__o_mtvec = 0U;
        vlSelf->top_ysyx_24110017__DOT__mtvec_wen = 0U;
        vlSelf->top_ysyx_24110017__DOT__mcause_wen = 0U;
        vlSelf->top_ysyx_24110017__DOT__o_mcause = 0U;
        vlSelf->top_ysyx_24110017__DOT__mepc_wen = 0U;
        vlSelf->top_ysyx_24110017__DOT__o_mepc = 0U;
        vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready = 0U;
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid 
            = __Vdly__top_ysyx_24110017__DOT__EXU__DOT__exu_valid;
        vlSelf->top_ysyx_24110017__DOT__WBU_READY = vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready;
        vlSelf->top_ysyx_24110017__DOT__EXU_VALID = vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid;
        vlSelf->pc = 0x80000000U;
    } else {
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_WVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_BVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_BREADY))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid = 0U;
        }
        vlSelf->top_ysyx_24110017__DOT__S_AXI_BVALID 
            = vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid;
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state))) {
                vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start = 0U;
            } else if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid) {
                vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__rf_addr 
                    = vlSelf->top_ysyx_24110017__DOT__rd;
            }
        }
        if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
            if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__rd 
                        = (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
                            | ((0x6fU == (0x7fU & vlSelf->inst)) 
                               | ((0x67U == (0x7fU 
                                             & vlSelf->inst)) 
                                  | ((3U == (0x7fU 
                                             & vlSelf->inst)) 
                                     | ((0x13U == (0x7fU 
                                                   & vlSelf->inst)) 
                                        | ((0xfU == 
                                            (0x7fU 
                                             & vlSelf->inst)) 
                                           | ((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->inst)) 
                                              | (0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)))))))))
                            ? (0x1fU & (vlSelf->inst 
                                        >> 7U)) : 0U);
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__rf_wen 
                    = vlSelf->top_ysyx_24110017__DOT__gpr_wen;
            }
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__gpr_wen 
                        = ((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                           | ((0x17U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                              | ((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                 | ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                    | ((0x13U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                       | ((0xfU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                          | ((0x73U 
                                              == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                             | ((0x33U 
                                                 == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                | (3U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op))))))))));
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__xrd 
                    = vlSelf->top_ysyx_24110017__DOT__res;
            }
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__res 
                        = vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res;
                }
            }
        } else if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__ls_valid) 
                 & (0x23U != (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) {
                vlSelf->top_ysyx_24110017__DOT__res = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__w_mstatus 
                    = vlSelf->top_ysyx_24110017__DOT__o_mstatus;
            }
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__o_mstatus 
                        = vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__mstatus_en 
                    = vlSelf->top_ysyx_24110017__DOT__mstatus_wen;
            }
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__mstatus_wen 
                        = vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mstatus_wen;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__w_mtvec 
                    = vlSelf->top_ysyx_24110017__DOT__o_mtvec;
            }
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__o_mtvec 
                        = vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__mtvec_en 
                    = vlSelf->top_ysyx_24110017__DOT__mtvec_wen;
            }
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__mtvec_wen 
                        = vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mtvec_wen;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__mcause_en 
                    = vlSelf->top_ysyx_24110017__DOT__mcause_wen;
            }
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__mcause_wen 
                        = ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                           | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__w_mcause 
                    = vlSelf->top_ysyx_24110017__DOT__o_mcause;
            }
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__o_mcause 
                        = ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                            ? vlSelf->top_ysyx_24110017__DOT__r2
                            : vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs);
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__mepc_en 
                    = vlSelf->top_ysyx_24110017__DOT__mepc_wen;
            }
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__mepc_wen 
                        = ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                           | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
                vlSelf->top_ysyx_24110017__DOT__w_mepc 
                    = vlSelf->top_ysyx_24110017__DOT__o_mepc;
            }
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__o_mepc 
                        = ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                            ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs);
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state)))) {
                if (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) {
                    vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready = 1U;
                }
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU_READY))) {
                    vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready = 0U;
                }
            }
        }
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid 
            = __Vdly__top_ysyx_24110017__DOT__EXU__DOT__exu_valid;
        vlSelf->top_ysyx_24110017__DOT__WBU_READY = vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready;
        vlSelf->top_ysyx_24110017__DOT__EXU_VALID = vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid;
        if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state) {
            if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready))) {
                    vlSelf->pc = vlSelf->dnpc;
                }
            }
        }
    }
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0 
        = (vlSelf->pc + vlSelf->top_ysyx_24110017__DOT__imm);
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid = 0U;
    } else if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state) {
        if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state) {
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__PCU_VALID) 
                 & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready))) {
                vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid = 0U;
            }
        }
    } else if ((0x80000000U < vlSelf->dnpc)) {
        vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid = 1U;
    }
    vlSelf->top_ysyx_24110017__DOT__PCU_VALID = vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid;
    vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state 
        = vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state;
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready = 0U;
        vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state = 0U;
        vlSelf->top_ysyx_24110017__DOT__wbu_done = 0U;
        vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state = 0U;
        vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state 
            = vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state;
        vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state = 0U;
    } else {
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state))) {
                if (vlSelf->top_ysyx_24110017__DOT__wbu_done) {
                    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state)))) {
            vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready = 0U;
        }
        if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state) {
            if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state = 0U;
                }
            } else {
                vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state = 0U;
            }
        } else if (vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid) {
            vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state = 1U;
        }
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state)))) {
                vlSelf->top_ysyx_24110017__DOT__wbu_done = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
            vlSelf->top_ysyx_24110017__DOT__wbu_done = 1U;
        }
        vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state 
            = vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state;
        vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state 
            = vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state;
        if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))) {
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                 & (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state = 1U;
            }
        } else {
            vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state 
                = ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state))
                    ? 2U : 0U);
        }
    }
}

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_sequent__TOP__1(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*1:0*/ __Vdly__top_ysyx_24110017__DOT__LSU__DOT__state;
    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__state = 0;
    CData/*7:0*/ __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter;
    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter = 0;
    CData/*7:0*/ __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter;
    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter = 0;
    CData/*7:0*/ __Vdly__top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter;
    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter = 0;
    // Body
    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter 
        = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter;
    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter 
        = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter;
    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter 
        = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter;
    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__state 
        = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__LSU_DONE 
        = vlSelf->top_ysyx_24110017__DOT__LSU_DONE;
    if (vlSelf->rst) {
        __Vdly__top_ysyx_24110017__DOT__LSU__DOT__state = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready = 0U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__LSU_DONE = 0U;
        __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter = 0U;
        __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter = 0U;
        __Vdly__top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter = 0U;
        vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay = 1U;
    } else if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state))) {
        if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state))) {
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready = 0U;
            vlSelf->__Vdly__top_ysyx_24110017__DOT__LSU_DONE = 0U;
            __Vdly__top_ysyx_24110017__DOT__LSU__DOT__state = 0U;
        } else {
            if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter))) {
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter 
                    = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter;
            } else if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter))) {
                vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid = 1U;
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter = 0U;
            } else {
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter 
                    = (0xffU & ((IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter) 
                                - (IData)(1U)));
            }
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWVALID) 
                 & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY))) {
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter 
                    = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay;
                vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid = 0U;
                vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr 
                    = ((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                        ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                        : 0x80000000U);
            } else if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter))) {
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter 
                    = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter;
            } else if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter))) {
                vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid = 1U;
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter = 0U;
            } else {
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter 
                    = (0xffU & ((IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter) 
                                - (IData)(1U)));
            }
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID) 
                 & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BREADY)))) {
                if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter))) {
                    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter 
                        = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay;
                } else if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter))) {
                    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready = 1U;
                    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter = 0U;
                } else {
                    __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter 
                        = (0xffU & ((IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter) 
                                    - (IData)(1U)));
                }
            }
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_WVALID) 
                 & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                    & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready)))) {
                vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid = 0U;
                vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata 
                    = ((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                        ? vlSelf->top_ysyx_24110017__DOT__r2
                        : 0U);
                vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb 
                    = (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                        & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                        ? 1U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                 & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                 ? 3U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                          & (2U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                          ? 0xfU : 0U)));
            }
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID) 
                 & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BREADY))) {
                vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready = 0U;
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__state = 3U;
                vlSelf->__Vdly__top_ysyx_24110017__DOT__LSU_DONE = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state))) {
        if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter))) {
            __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter 
                = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter;
        } else if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter))) {
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid = 1U;
            __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter = 0U;
        } else {
            __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter 
                = (0xffU & ((IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter) 
                            - (IData)(1U)));
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RVALID) 
             & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RREADY)))) {
            if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter))) {
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter 
                    = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay;
            } else if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter))) {
                vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready = 1U;
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter = 0U;
            } else {
                __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter 
                    = (0xffU & ((IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter) 
                                - (IData)(1U)));
            }
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_ARVALID) 
             & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready)))) {
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr 
                = ((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                    ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                    : 0x80000000U);
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RREADY))) {
            vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready = 0U;
            __Vdly__top_ysyx_24110017__DOT__LSU__DOT__state = 3U;
            vlSelf->__Vdly__top_ysyx_24110017__DOT__LSU_DONE = 1U;
        }
    } else {
        if (vlSelf->top_ysyx_24110017__DOT__sram_lsu_read) {
            __Vdly__top_ysyx_24110017__DOT__LSU__DOT__state = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__sram_lsu_read) 
             | (IData)(vlSelf->top_ysyx_24110017__DOT__sram_lsu_write))) {
            __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter 
                = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay;
        }
        if (vlSelf->top_ysyx_24110017__DOT__sram_lsu_write) {
            __Vdly__top_ysyx_24110017__DOT__LSU__DOT__state = 2U;
        }
    }
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state 
        = __Vdly__top_ysyx_24110017__DOT__LSU__DOT__state;
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter 
        = __Vdly__top_ysyx_24110017__DOT__LSU__DOT__delay_counter;
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter 
        = __Vdly__top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter;
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter 
        = __Vdly__top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_WVALID 
        = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_ARVALID 
        = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RREADY 
        = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWVALID 
        = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BREADY 
        = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready;
}

void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_sequent__TOP__2(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0 
        = (vlSelf->top_ysyx_24110017__DOT__imm + vlSelf->top_ysyx_24110017__DOT__r1);
    vlSelf->top_ysyx_24110017__DOT__r2 = ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__rs2))
                                           ? 0U : vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf
                                          [vlSelf->top_ysyx_24110017__DOT__rs2]);
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__funct3 = 0U;
    } else if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
        if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                 & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready))) {
                vlSelf->top_ysyx_24110017__DOT__funct3 
                    = (7U & (vlSelf->inst >> 0xcU));
            }
        }
    }
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 
        = (- (IData)(((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                      & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 
        = (- (IData)(((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                      & (0x20U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))));
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__sram_lsu_write = 0U;
        vlSelf->top_ysyx_24110017__DOT__sram_lsu_read = 0U;
        vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready = 0U;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_WREADY 
            = vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready;
        vlSelf->top_ysyx_24110017__DOT__op = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))) {
                if ((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))) {
                    vlSelf->top_ysyx_24110017__DOT__sram_lsu_write = 1U;
                }
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__ls_valid) 
                     & (0x23U != (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) {
                    vlSelf->top_ysyx_24110017__DOT__sram_lsu_read = 1U;
                }
                if (vlSelf->top_ysyx_24110017__DOT__LSU_DONE) {
                    vlSelf->top_ysyx_24110017__DOT__sram_lsu_write = 0U;
                    vlSelf->top_ysyx_24110017__DOT__sram_lsu_read = 0U;
                }
            }
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_WVALID) 
             & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_WREADY)))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_WVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_WREADY))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready = 0U;
        }
        vlSelf->top_ysyx_24110017__DOT__S_AXI_WREADY 
            = vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready;
        if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
            if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__op 
                        = (0x7fU & vlSelf->inst);
                }
            }
        }
    }
    vlSelf->top_ysyx_24110017__DOT__ls_valid = ((3U 
                                                 == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                | (0x23U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en 
        = ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           & ((0U == vlSelf->top_ysyx_24110017__DOT__imm) 
              & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 
        = (- (IData)(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                      & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 
        = (- (IData)(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                      & (2U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 
        = (- (IData)(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                      & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mstatus_wen 
        = ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           & (0x300U == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mtvec_wen 
        = ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           & (0x305U == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0 
        = ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           & (0x341U == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0 
        = ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
           & (0x342U == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b = (
                                                   ((0x33U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                    | (0x23U 
                                                       == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))
                                                    ? vlSelf->top_ysyx_24110017__DOT__r2
                                                    : vlSelf->top_ysyx_24110017__DOT__imm);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a = (
                                                   ((0x13U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                    | ((3U 
                                                        == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                       | ((0x23U 
                                                           == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                          | ((0x33U 
                                                              == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                             | ((0x73U 
                                                                 == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                                & ((1U 
                                                                    == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                   | ((2U 
                                                                       == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                      | (3U 
                                                                         == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))))))))
                                                    ? vlSelf->top_ysyx_24110017__DOT__r1
                                                    : vlSelf->pc);
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state)))) {
            if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid) {
                vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready = 1U;
            }
            if (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                 & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU_READY))) {
                vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready = 0U;
            }
        }
    }
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__IDU__DOT__idu_valid;
    vlSelf->dnpc = ((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                     ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                     : ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                         ? (0xfffffffeU & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0)
                         : (((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->top_ysyx_24110017__DOT__r1 
                                   == vlSelf->top_ysyx_24110017__DOT__r2)))
                             ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                             : (((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                 & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       != vlSelf->top_ysyx_24110017__DOT__r2)))
                                 ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                 : (((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                     & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                        & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))
                                     ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                     : (((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                            & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))
                                         ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                         : (((0x63U 
                                              == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                             & ((6U 
                                                 == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                & (vlSelf->top_ysyx_24110017__DOT__r1 
                                                   < vlSelf->top_ysyx_24110017__DOT__r2)))
                                             ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                             : (((0x63U 
                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                 & ((7U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                                       >= vlSelf->top_ysyx_24110017__DOT__r2)))
                                                 ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                                 : 
                                                ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
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
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr = 
        ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0)
          ? vlSelf->top_ysyx_24110017__DOT__mepc : 
         ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mstatus_wen)
           ? vlSelf->top_ysyx_24110017__DOT__mstatus
           : ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0)
               ? vlSelf->top_ysyx_24110017__DOT__mcause
               : ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mtvec_wen)
                   ? vlSelf->top_ysyx_24110017__DOT__mtvec
                   : 0U))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
        = (((QData)((IData)((- (IData)((vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a)));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0 
        = (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
           + vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0 
        = VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0 
        = (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
           < vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0 
        = (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
           ^ vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0 
        = (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
           | vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0 
        = (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
           & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->top_ysyx_24110017__DOT__EXU_READY = vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready;
    vlSelf->top_ysyx_24110017__DOT__IDU_VALID = vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs 
        = ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 
            & vlSelf->top_ysyx_24110017__DOT__r1) | 
           ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 
             & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr 
                | vlSelf->top_ysyx_24110017__DOT__r1)) 
            | (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 
               & (((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__rs1))
                    ? 0xffffffffU : (~ vlSelf->__VdfgTmp_h4996c350__0)) 
                  & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr))));
    if (vlSelf->rst) {
        vlSelf->inst = 0U;
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state = 0U;
    } else {
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state)))) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready))) {
                    vlSelf->inst = (((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                                     | (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)))
                                     ? vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata
                                     : 0U);
                }
            }
        }
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state 
            = vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state;
    }
    if ((0x100073U == vlSelf->inst)) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0 
        = ((0x63U == (0x7fU & vlSelf->inst)) | ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)) 
                                                | (0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))));
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0 
        = ((0x37U == (0x7fU & vlSelf->inst)) | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0 
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
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_RREADY))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata 
                = ((0U == (0xfU & vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR))
                    ? 0U : vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf
                   [(7U & vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR)]);
        }
    }
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm = 
        ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0)
          ? (0xfffff000U & vlSelf->inst) : ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->inst))
                                             ? (((- (IData)(
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
                                             : ((0x63U 
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
                                                 ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->inst 
                                                      >> 0x14U))
                                                   : 0U)))));
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state)))) {
        if (vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid) {
            vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__IDU_READY))) {
            vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready = 0U;
        }
    }
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__ifu_valid;
    if (vlSelf->__Vdlyvset__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0) {
        vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[vlSelf->__Vdlyvdim0__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0] 
            = vlSelf->__Vdlyvval__top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf__v0;
    }
    vlSelf->top_ysyx_24110017__DOT__IDU_READY = vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready;
    vlSelf->top_ysyx_24110017__DOT__IFU_VALID = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state));
    vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state));
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY 
        = ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
           & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready));
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID 
        = ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
           & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid));
    vlSelf->__VdfgTmp_h4120b2cc__0 = ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                                      | (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)));
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid) 
                             << 6U) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid) 
                                        << 5U) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top_ysyx_24110017__DOT__wbu_done) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->rst) 
                                                         << 2U) 
                                                        | (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state))))));
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state 
        = Vtop_ysyx_24110017__ConstPool__TABLE_h09dcacfa_0
        [vlSelf->__Vtableidx1];
    if (vlSelf->__VdfgTmp_h4120b2cc__0) {
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4a93__0 
            = (0xffU & vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata);
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4899__0 
            = (0xffffU & vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata);
    } else {
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4a93__0 = 0U;
        vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4899__0 = 0U;
    }
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state 
        = vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state;
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid = 0U;
        vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state = 0U;
        vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready = 0U;
    } else {
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_RVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_RREADY))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid = 0U;
        }
        if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
            if (vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state) {
                if (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                     & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready))) {
                    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state = 0U;
                }
            } else {
                vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid) 
                    & (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready))) {
            vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARVALID) 
             & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARREADY)))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARREADY))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready = 0U;
        }
    }
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res = 
        (((- (IData)((0x13U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) 
          & (((- (IData)((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
              & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0) 
             | (((- (IData)((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                 & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                    << (IData)(vlSelf->top_ysyx_24110017__DOT__shamt))) 
                | (((- (IData)((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                    & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0) 
                   | (((- (IData)((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                       & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0) 
                      | (((- (IData)((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                          & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0) 
                         | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 
                             & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                                >> (IData)(vlSelf->top_ysyx_24110017__DOT__shamt))) 
                            | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 
                                & (IData)((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
                                           >> (IData)(vlSelf->top_ysyx_24110017__DOT__shamt)))) 
                               | (((- (IData)((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                                   & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0) 
                                  | ((- (IData)((7U 
                                                 == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))) 
                                     & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0)))))))))) 
         | (((- (IData)((0x33U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) 
             & (((- (IData)(((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                             & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                 & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0) 
                | (((- (IData)(((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                & (0x20U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                    & ((IData)(1U) + ((~ vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b) 
                                      + vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a))) 
                   | (((- (IData)(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                   & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                       & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                          << (0x1fU & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b))) 
                      | (((- (IData)(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                      & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                          & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0) 
                         | (((- (IData)(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                         & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                             & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0) 
                            | (((- (IData)(((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                            & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0) 
                               | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 
                                   & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                                      >> (0x1fU & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b))) 
                                  | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 
                                      & (IData)(((0x3fU 
                                                  >= vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)
                                                  ? 
                                                 (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
                                                  >> vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)
                                                  : 0ULL))) 
                                     | (((- (IData)(
                                                    ((6U 
                                                      == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                     & (0U 
                                                        == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                         & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0) 
                                        | (((- (IData)(
                                                       ((7U 
                                                         == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                        & (0U 
                                                           == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                            & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0) 
                                           | (((- (IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                           & (1U 
                                                              == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                               & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                                                  * vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)) 
                                              | (((- (IData)(
                                                             ((1U 
                                                               == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                              & (1U 
                                                                 == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                  & (IData)(
                                                            ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
                                                              * 
                                                              (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b 
                                                                                >> 0x1fU))))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)))) 
                                                             >> 0x20U))) 
                                                 | (((- (IData)(
                                                                ((4U 
                                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                 & (1U 
                                                                    == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                     & VL_DIVS_III(32, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)) 
                                                    | (((- (IData)(
                                                                   ((5U 
                                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                                                    & (1U 
                                                                       == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))) 
                                                        & VL_DIV_III(32, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)) 
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
                                                          & VL_MODDIV_III(32, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b))))))))))))))))) 
            | (((- (IData)(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))) 
                & (((- (IData)(((IData)(vlSelf->__VdfgTmp_h4120b2cc__0) 
                                & (vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata 
                                   >> 7U)))) << 8U) 
                   | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4a93__0))) 
               | (((- (IData)(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))) 
                   & (((- (IData)(((IData)(vlSelf->__VdfgTmp_h4120b2cc__0) 
                                   & (vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata 
                                      >> 0xfU)))) << 0x10U) 
                      | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4899__0))) 
                  | (((- (IData)(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                  & (2U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))) 
                      & ((IData)(vlSelf->__VdfgTmp_h4120b2cc__0)
                          ? vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata
                          : 0U)) | (((- (IData)(((3U 
                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                 & (4U 
                                                    == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))) 
                                     & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4a93__0)) 
                                    | (((- (IData)(
                                                   ((3U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                    & (5U 
                                                       == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))) 
                                        & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4899__0)) 
                                       | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 
                                           & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr) 
                                          | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 
                                              & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr) 
                                             | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 
                                                 & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr) 
                                                | (((- (IData)(
                                                               (0x6fU 
                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) 
                                                    & ((IData)(4U) 
                                                       + vlSelf->pc)) 
                                                   | (((- (IData)(
                                                                  (0x67U 
                                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) 
                                                       & ((IData)(4U) 
                                                          + vlSelf->pc)) 
                                                      | (((- (IData)(
                                                                     (0x37U 
                                                                      == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) 
                                                          & vlSelf->top_ysyx_24110017__DOT__imm) 
                                                         | ((- (IData)(
                                                                       (0x17U 
                                                                        == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))) 
                                                            & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0))))))))))))));
    vlSelf->top_ysyx_24110017__DOT__S_AXI_RVALID = vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid;
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_RVALID 
        = ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
           & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid));
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RVALID 
        = ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
           & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid));
    vlSelf->top_ysyx_24110017__DOT__S_AXI_ARREADY = vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready;
}

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_sequent__TOP__3(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top_ysyx_24110017__DOT__LSU_DONE = vlSelf->__Vdly__top_ysyx_24110017__DOT__LSU_DONE;
}

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_comb__TOP__0(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_comb__TOP__0\n"); );
    // Body
    if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))) {
        vlSelf->top_ysyx_24110017__DOT__S_AXI_AWVALID 
            = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_WVALID 
            = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_BREADY 
            = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR 
            = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_RREADY 
            = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_ARVALID 
            = vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid;
    } else if ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))) {
        vlSelf->top_ysyx_24110017__DOT__S_AXI_AWVALID 
            = vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_WVALID 
            = vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_BREADY 
            = vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR 
            = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_RREADY 
            = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_ARVALID 
            = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
    } else {
        vlSelf->top_ysyx_24110017__DOT__S_AXI_AWVALID = 0U;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_WVALID = 0U;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_BREADY = 0U;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR = 0U;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_RREADY = 0U;
        vlSelf->top_ysyx_24110017__DOT__S_AXI_ARVALID = 0U;
    }
    vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state 
        = vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state;
    if (vlSelf->rst) {
        vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state = 0U;
    } else if ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))) {
        vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state 
            = (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid) 
                | (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid))
                ? 1U : ((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid)
                         ? 2U : 0U));
    } else if ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))) {
        if ((((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid) 
              & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready)) 
             | ((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid) 
                & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready)))) {
            vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state = 0U;
        }
    } else if ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))) {
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready))) {
            vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state = 0U;
        }
    } else {
        vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state = 0U;
    }
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready) 
                             << 8U) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                                        << 7U) | (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_DONE) 
                                                   << 6U) 
                                                  | ((0x20U 
                                                      & ((~ (IData)(vlSelf->top_ysyx_24110017__DOT__ls_valid)) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->rst) 
                                                               << 2U) 
                                                              | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state))))))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state 
        = Vtop_ysyx_24110017__ConstPool__TABLE_h6fed9396_0
        [vlSelf->__Vtableidx2];
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
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop_ysyx_24110017___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop_ysyx_24110017___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop_ysyx_24110017___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop_ysyx_24110017___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtop_ysyx_24110017___024root___eval_triggers__ico(Vtop_ysyx_24110017___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ysyx_24110017___024root___dump_triggers__ico(Vtop_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop_ysyx_24110017___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop_ysyx_24110017___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top_ysyx_24110017.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop_ysyx_24110017___024root___eval_ico(vlSelf);
        }
    }
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
