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
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_rready 
        = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid 
        = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__state 
        = vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state;
    vlSelf->__Vdly__pc = vlSelf->pc;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid;
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid;
    __Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 0U;
    if (vlSelf->rst) {
        vlSelf->__Vdly__pc = 0x80000000U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready = 0U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready = 0U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready = 0U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid = 0U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid = 0U;
        vlSelf->top_ysyx_24110017__DOT__mstatus = 0x1800U;
        vlSelf->top_ysyx_24110017__DOT__mtvec = 0U;
        vlSelf->top_ysyx_24110017__DOT__mcause = 0U;
        vlSelf->top_ysyx_24110017__DOT__mepc = 0U;
        vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp = 0U;
        vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen = 0U;
    } else {
        vlSelf->__Vdly__pc = ((IData)(vlSelf->top_ysyx_24110017__DOT__IFU_DONE)
                               ? vlSelf->dnpc : vlSelf->pc);
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awvalid) 
             & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY)))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready = 0U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_arvalid) 
             & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_ARREADY)))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_arvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_ARREADY))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready = 0U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_WREADY))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready = 0U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid = 1U;
            vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_bready))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid = 0U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_arvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid = 1U;
        }
        if (vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_rready) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid = 0U;
        }
        if (vlSelf->top_ysyx_24110017__DOT__mstatus_wen) {
            vlSelf->top_ysyx_24110017__DOT__mstatus 
                = vlSelf->top_ysyx_24110017__DOT__csrs_in;
        }
        if (vlSelf->top_ysyx_24110017__DOT__mtvec_wen) {
            vlSelf->top_ysyx_24110017__DOT__mtvec = vlSelf->top_ysyx_24110017__DOT__csrs_in;
        }
        if (((IData)(vlSelf->__VdfgTmp_he7787a83__0) 
             | (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT____VdfgTmp_h48289ce0__0))) {
            vlSelf->top_ysyx_24110017__DOT__mcause 
                = ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT____VdfgTmp_h48289ce0__0)
                    ? vlSelf->top_ysyx_24110017__DOT__r2
                    : vlSelf->top_ysyx_24110017__DOT__csrs_in);
        }
        if (((IData)(vlSelf->__VdfgTmp_he77478c1__0) 
             | (IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT____VdfgTmp_h48289ce0__0))) {
            vlSelf->top_ysyx_24110017__DOT__mepc = 
                ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT____VdfgTmp_h48289ce0__0)
                  ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in);
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_bready))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp = 3U;
            vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen = 0U;
        }
    }
    if (((IData)(vlSelf->top_ysyx_24110017__DOT__ldone) 
         | ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h152fdc2a__0) 
            | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h061acfa6__0)))) {
        __Vdlyvval__top_ysyx_24110017__DOT__RF__DOT__rf__v0 
            = (((0x13U == (0x7fU & vlSelf->inst)) | 
                ((0xfU == (0x7fU & vlSelf->inst)) | 
                 ((0x73U == (0x7fU & vlSelf->inst)) 
                  | ((0x23U == (0x7fU & vlSelf->inst)) 
                     | ((0x33U == (0x7fU & vlSelf->inst)) 
                        | (IData)(vlSelf->top_ysyx_24110017__DOT__ldone))))))
                ? vlSelf->top_ysyx_24110017__DOT__res
                : ((0x6fU == (0x7fU & vlSelf->inst))
                    ? ((IData)(4U) + vlSelf->pc) : 
                   ((0x67U == (0x7fU & vlSelf->inst))
                     ? ((IData)(4U) + vlSelf->pc) : 
                    ((0x37U == (0x7fU & vlSelf->inst))
                      ? vlSelf->top_ysyx_24110017__DOT__imm
                      : ((0x17U == (0x7fU & vlSelf->inst))
                          ? (vlSelf->top_ysyx_24110017__DOT__imm 
                             + vlSelf->pc) : 0U)))));
        __Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top_ysyx_24110017__DOT__RF__DOT__rf__v0 
            = ((IData)(vlSelf->top_ysyx_24110017__DOT__lrd) 
               | (IData)(vlSelf->top_ysyx_24110017__DOT__rd));
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_arvalid) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp = 3U;
        }
        if (vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_rready) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata 
                = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata;
        }
    }
    if (__Vdlyvset__top_ysyx_24110017__DOT__RF__DOT__rf__v0) {
        vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[__Vdlyvdim0__top_ysyx_24110017__DOT__RF__DOT__rf__v0] 
            = __Vdlyvval__top_ysyx_24110017__DOT__RF__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_sequent__TOP__1(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*1:0*/ __Vdly__top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state;
    __Vdly__top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state = 0;
    // Body
    __Vdly__top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state 
        = vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state;
    if (vlSelf->rst) {
        __Vdly__top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_arvalid = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_rready = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_araddr = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awvalid = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wvalid = 0U;
        vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_bready = 0U;
    } else if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state))) {
        if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state))) {
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_arvalid = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_rready = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_araddr = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awvalid = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wvalid = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_bready = 0U;
            vlSelf->top_ysyx_24110017__DOT__ldone = 0U;
            vlSelf->top_ysyx_24110017__DOT__lbdone = 0U;
            vlSelf->top_ysyx_24110017__DOT__lhdone = 0U;
            vlSelf->top_ysyx_24110017__DOT__lwdone = 0U;
            vlSelf->top_ysyx_24110017__DOT__lbudone = 0U;
            vlSelf->top_ysyx_24110017__DOT__lhudone = 0U;
            vlSelf->top_ysyx_24110017__DOT__lrd = 0U;
            __Vdly__top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state = 0U;
        } else {
            if (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready) {
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awvalid = 0U;
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wvalid = 1U;
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr 
                    = vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr_reg;
            }
            if (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready) {
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wvalid = 0U;
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata 
                    = vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata_reg;
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb 
                    = vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb_reg;
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_bready = 1U;
            }
            if (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid) {
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_bready = 0U;
                __Vdly__top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state))) {
        if (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready) {
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_arvalid = 0U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_rready = 1U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_araddr 
                = vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_araddr_reg;
        }
        if (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid) {
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_rready = 0U;
            vlSelf->top_ysyx_24110017__DOT__ldone = 1U;
            __Vdly__top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state = 3U;
        }
    } else if (((3U == (0x7fU & vlSelf->inst)) | (0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)))) {
        if ((0x23U == (0x7fU & vlSelf->inst))) {
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awvalid = 1U;
            __Vdly__top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state = 2U;
            if ((0x23U == (0x7fU & vlSelf->inst))) {
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr_reg 
                    = vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0;
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata_reg 
                    = vlSelf->top_ysyx_24110017__DOT__b;
            } else {
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr_reg = 0x80000000U;
                vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata_reg = 0U;
            }
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb_reg 
                = ((IData)((0x23U == (0x707fU & vlSelf->inst)))
                    ? 1U : ((IData)((0x1023U == (0x707fU 
                                                 & vlSelf->inst)))
                             ? 3U : ((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->inst)))
                                      ? 0xfU : 0U)));
        } else {
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_arvalid = 1U;
            __Vdly__top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state = 1U;
            vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_araddr_reg 
                = ((3U == (0x7fU & vlSelf->inst)) ? vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                    : 0x80000000U);
            vlSelf->top_ysyx_24110017__DOT__lrd = vlSelf->top_ysyx_24110017__DOT__rd;
            vlSelf->top_ysyx_24110017__DOT__lbdone 
                = (IData)((3U == (0x707fU & vlSelf->inst)));
            vlSelf->top_ysyx_24110017__DOT__lhdone 
                = (IData)((0x1003U == (0x707fU & vlSelf->inst)));
            vlSelf->top_ysyx_24110017__DOT__lwdone 
                = (IData)((0x2003U == (0x707fU & vlSelf->inst)));
            vlSelf->top_ysyx_24110017__DOT__lbudone 
                = (IData)((0x4003U == (0x707fU & vlSelf->inst)));
            vlSelf->top_ysyx_24110017__DOT__lhudone 
                = (IData)((0x5003U == (0x707fU & vlSelf->inst)));
        }
    }
    vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state 
        = __Vdly__top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state;
}

void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_sequent__TOP__2(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready;
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready;
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid;
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready;
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_WREADY 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_ARREADY 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready;
    if (vlSelf->rst) {
        vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 0U;
        vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr = 0U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid = 0U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_rready = 0U;
        vlSelf->top_ysyx_24110017__DOT__IFU_DONE = 0U;
        vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready = 0U;
        vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid = 0U;
    } else {
        if ((2U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state))) {
            if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state))) {
                vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 0U;
                vlSelf->inst = 0U;
                vlSelf->top_ysyx_24110017__DOT__IFU_DONE = 0U;
                vlSelf->DIFFTEST = 1U;
            } else {
                vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 3U;
                vlSelf->inst = vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata;
                vlSelf->top_ysyx_24110017__DOT__IFU_DONE = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state))) {
            if (vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready) {
                vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid = 0U;
                vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_rready = 1U;
                vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr 
                    = vlSelf->pc;
            }
            if (vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid) {
                vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_rready = 0U;
                vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 2U;
            }
        } else if ((0x80000000U <= vlSelf->pc)) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid = 1U;
            vlSelf->inst = 0U;
            vlSelf->top_ysyx_24110017__DOT__IFU_DONE = 0U;
            vlSelf->DIFFTEST = 0U;
            vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid) 
             & (~ (IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_ARREADY)))) {
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready = 1U;
        }
        if (((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready) 
             & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid))) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid = 1U;
            vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready = 0U;
            vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp = 0U;
        }
        if (vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid = 0U;
        }
    }
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__state;
    vlSelf->pc = vlSelf->__Vdly__pc;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready) {
            vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata 
                = vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp;
        }
    }
    if ((0x100073U == vlSelf->inst)) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h061acfa6__0 
        = ((0x13U == (0x7fU & vlSelf->inst)) | ((0xfU 
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
                                                       & vlSelf->inst)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h56110f4f__0 
        = (- (IData)((IData)((0x1073U == (0x707fU & vlSelf->inst)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5d6feb86__0 
        = (- (IData)((IData)((0x2073U == (0x707fU & vlSelf->inst)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h57160f83__0 
        = (- (IData)((IData)((0x73U == (0x707fU & vlSelf->inst)))));
    vlSelf->top_ysyx_24110017__DOT__funct7 = (((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               | (0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)))
                                               ? (vlSelf->inst 
                                                  >> 0x19U)
                                               : 0U);
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0 
        = ((0x63U == (0x7fU & vlSelf->inst)) | ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)) 
                                                | (0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))));
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
    if ((0U != vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr)) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read_TOP(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr, vlSelf->__Vfunc_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read__0__Vfuncout);
        vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp 
            = vlSelf->__Vfunc_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read__0__Vfuncout;
    } else {
        vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp = 0U;
    }
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_rready;
    vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready 
        = vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha4994cf9__0 
        = (- (IData)((IData)(((0x5000U == (0x7000U 
                                           & vlSelf->inst)) 
                              & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h12d66a67__0 
        = (- (IData)((IData)(((0x5000U == (0x7000U 
                                           & vlSelf->inst)) 
                              & (0x20U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))));
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h152fdc2a__0 
        = ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0) 
           | ((0x6fU == (0x7fU & vlSelf->inst)) | (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))));
    vlSelf->top_ysyx_24110017__DOT__rs1 = (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0) 
                                            | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0))
                                            ? (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0xfU))
                                            : 0U);
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
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_ARREADY 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready;
    vlSelf->top_ysyx_24110017__DOT__rd = (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h152fdc2a__0) 
                                           | ((3U == 
                                               (0x7fU 
                                                & vlSelf->inst)) 
                                              | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h061acfa6__0)))
                                           ? (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))
                                           : 0U);
    vlSelf->top_ysyx_24110017__DOT__r1 = ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__rs1))
                                           ? 0U : vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf
                                          [vlSelf->top_ysyx_24110017__DOT__rs1]);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hf5e4ad0e__0 
        = (vlSelf->pc + (1U & vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__mstatus_wen = (
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst)) 
                                                   & (0x300U 
                                                      == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__mtvec_wen = ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 & (0x305U 
                                                    == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->__VdfgTmp_he77478c1__0 = ((0x73U == (0x7fU 
                                                 & vlSelf->inst)) 
                                      & (0x341U == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->__VdfgTmp_he7787a83__0 = ((0x73U == (0x7fU 
                                                 & vlSelf->inst)) 
                                      & (0x342U == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__WBU__DOT____VdfgTmp_h48289ce0__0 
        = (IData)(((0x73U == (0x707fU & vlSelf->inst)) 
                   & (0U == vlSelf->top_ysyx_24110017__DOT__imm)));
    vlSelf->top_ysyx_24110017__DOT__a = (((0x13U == 
                                           (0x7fU & vlSelf->inst)) 
                                          | ((3U == 
                                              (0x7fU 
                                               & vlSelf->inst)) 
                                             | ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)) 
                                                | ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst)) 
                                                   | ((0x73U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst)) 
                                                      & ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->inst 
                                                              >> 0xcU))) 
                                                         | ((2U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->inst 
                                                                 >> 0xcU))) 
                                                            | (3U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->inst 
                                                                   >> 0xcU))))))))))
                                          ? vlSelf->top_ysyx_24110017__DOT__r1
                                          : vlSelf->pc);
    vlSelf->top_ysyx_24110017__DOT__csrs = ((IData)(vlSelf->__VdfgTmp_he77478c1__0)
                                             ? vlSelf->top_ysyx_24110017__DOT__mepc
                                             : ((IData)(vlSelf->top_ysyx_24110017__DOT__mstatus_wen)
                                                 ? vlSelf->top_ysyx_24110017__DOT__mstatus
                                                 : 
                                                ((IData)(vlSelf->__VdfgTmp_he7787a83__0)
                                                  ? vlSelf->top_ysyx_24110017__DOT__mcause
                                                  : 
                                                 ((IData)(vlSelf->top_ysyx_24110017__DOT__mtvec_wen)
                                                   ? vlSelf->top_ysyx_24110017__DOT__mtvec
                                                   : 0U))));
    vlSelf->top_ysyx_24110017__DOT__rs2 = (0x1fU & 
                                           ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0)
                                             ? (vlSelf->inst 
                                                >> 0x14U)
                                             : ((IData)(vlSelf->top_ysyx_24110017__DOT__WBU__DOT____VdfgTmp_h48289ce0__0)
                                                 ? 0xfU
                                                 : 0U)));
    vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0 
        = (vlSelf->top_ysyx_24110017__DOT__imm + vlSelf->top_ysyx_24110017__DOT__a);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h72806210__0 
        = (((QData)((IData)((- (IData)((vlSelf->top_ysyx_24110017__DOT__a 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__a)));
    vlSelf->top_ysyx_24110017__DOT__csrs_in = ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h56110f4f__0 
                                                & vlSelf->top_ysyx_24110017__DOT__a) 
                                               | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5d6feb86__0 
                                                   & (vlSelf->top_ysyx_24110017__DOT__a 
                                                      | vlSelf->top_ysyx_24110017__DOT__csrs)) 
                                                  | (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h57160f83__0 
                                                     & ((~ vlSelf->top_ysyx_24110017__DOT__a) 
                                                        & vlSelf->top_ysyx_24110017__DOT__csrs))));
    vlSelf->top_ysyx_24110017__DOT__r2 = ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__rs2))
                                           ? 0U : vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf
                                          [vlSelf->top_ysyx_24110017__DOT__rs2]);
    vlSelf->dnpc = ((0x6fU == (0x7fU & vlSelf->inst))
                     ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hf5e4ad0e__0
                     : ((0x67U == (0x7fU & vlSelf->inst))
                         ? (0xfffffffeU & (vlSelf->top_ysyx_24110017__DOT__r1 
                                           + (1U & vlSelf->top_ysyx_24110017__DOT__imm)))
                         : ((IData)(((0x63U == (0x107fU 
                                                & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        == vlSelf->top_ysyx_24110017__DOT__r2)))
                             ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hf5e4ad0e__0
                             : ((IData)(((0x1063U == 
                                          (0x107fU 
                                           & vlSelf->inst)) 
                                         & (vlSelf->top_ysyx_24110017__DOT__r1 
                                            != vlSelf->top_ysyx_24110017__DOT__r2)))
                                 ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hf5e4ad0e__0
                                 : ((IData)(((0x73U 
                                              == (0x107fU 
                                                  & vlSelf->inst)) 
                                             & (~ vlSelf->top_ysyx_24110017__DOT__imm)))
                                     ? vlSelf->top_ysyx_24110017__DOT__mtvec
                                     : ((IData)(4U) 
                                        + vlSelf->pc))))));
    vlSelf->top_ysyx_24110017__DOT__b = (((0x33U == 
                                           (0x7fU & vlSelf->inst)) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->inst)))
                                          ? vlSelf->top_ysyx_24110017__DOT__r2
                                          : vlSelf->top_ysyx_24110017__DOT__imm);
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
}

void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop_ysyx_24110017___024root___nba_comb__TOP__0(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_write_TOP(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr, vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata, (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb));
    }
    if (((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid) 
         & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_rready))) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read_TOP(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_araddr, vlSelf->__Vfunc_top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_read__2__Vfuncout);
        vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata 
            = vlSelf->__Vfunc_top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_read__2__Vfuncout;
    } else {
        vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata = 0U;
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
                                                               & (vlSelf->top_ysyx_24110017__DOT__a 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)))) 
                                                              | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h12d66a67__0 
                                                                  & (IData)(
                                                                            (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h72806210__0 
                                                                             >> 
                                                                             (0x1fU 
                                                                              & (vlSelf->inst 
                                                                                >> 0x14U))))) 
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
                                                         & (vlSelf->top_ysyx_24110017__DOT__a 
                                                            << 
                                                            (0x1fU 
                                                             & vlSelf->top_ysyx_24110017__DOT__b))) 
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
                                                                                & (vlSelf->top_ysyx_24110017__DOT__a 
                                                                                * vlSelf->top_ysyx_24110017__DOT__b)) 
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
                                                                                & VL_DIVS_III(32, vlSelf->top_ysyx_24110017__DOT__a, vlSelf->top_ysyx_24110017__DOT__b)) 
                                                                                | (((- (IData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                                & VL_DIV_III(32, vlSelf->top_ysyx_24110017__DOT__a, vlSelf->top_ysyx_24110017__DOT__b)) 
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
                                                                                & VL_MODDIV_III(32, vlSelf->top_ysyx_24110017__DOT__a, vlSelf->top_ysyx_24110017__DOT__b))))))))))))))))) 
                                              | (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lbdone))) 
                                                  & (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata))) 
                                                 | (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lhdone))) 
                                                     & (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata 
                                                                        >> 0xfU)))) 
                                                         << 0x10U) 
                                                        | (0xffffU 
                                                           & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata))) 
                                                    | (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lwdone))) 
                                                        & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata) 
                                                       | ((0xffU 
                                                           & ((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lbudone))) 
                                                              & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata)) 
                                                          | ((0xffffU 
                                                              & ((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lhudone))) 
                                                                 & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata)) 
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
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop_ysyx_24110017___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop_ysyx_24110017___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop_ysyx_24110017___024root___nba_comb__TOP__0(vlSelf);
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
    VlTriggerVec<2> __VpreTriggered;
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
