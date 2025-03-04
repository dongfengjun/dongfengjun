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
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
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
void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___stl_sequent__TOP__0(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0x100073U == vlSelf->inst)) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_ARREADY 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_WREADY 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid;
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_ARREADY 
        = vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready;
    if (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_write_TOP(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr, vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata, (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb));
    }
    if ((0U != vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr)) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read_TOP(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr, vlSelf->__Vfunc_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read__0__Vfuncout);
        vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp 
            = vlSelf->__Vfunc_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read__0__Vfuncout;
    } else {
        vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp = 0U;
    }
    if (((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid) 
         & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready))) {
        Vtop_ysyx_24110017___024root____Vdpiimwrap_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read_TOP(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr, vlSelf->__Vfunc_top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_read__2__Vfuncout);
        vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata 
            = vlSelf->__Vfunc_top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_read__2__Vfuncout;
    } else {
        vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata = 0U;
    }
    vlSelf->__VdfgTmp_h066b65f5__0 = ((0x13U == (0x7fU 
                                                 & vlSelf->inst)) 
                                      | ((0xfU == (0x7fU 
                                                   & vlSelf->inst)) 
                                         | ((0x73U 
                                             == (0x7fU 
                                                 & vlSelf->inst)) 
                                            | (0x33U 
                                               == (0x7fU 
                                                   & vlSelf->inst)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 
        = (- (IData)((IData)((0x1073U == (0x707fU & vlSelf->inst)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 
        = (- (IData)((IData)((0x2073U == (0x707fU & vlSelf->inst)))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 
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
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0 
        = ((0x37U == (0x7fU & vlSelf->inst)) | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0 
        = ((0x63U == (0x7fU & vlSelf->inst)) | ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)) 
                                                | (0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))));
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
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 
        = (- (IData)((IData)(((0x5000U == (0x7000U 
                                           & vlSelf->inst)) 
                              & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 
        = (- (IData)((IData)(((0x5000U == (0x7000U 
                                           & vlSelf->inst)) 
                              & (0x20U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7))))));
    vlSelf->top_ysyx_24110017__DOT__rd = (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0) 
                                           | ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->inst)) 
                                              | ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 | ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h066b65f5__0)))))
                                           ? (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))
                                           : 0U);
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
    vlSelf->__VdfgTmp_h1fd29a4c__0 = vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf
        [vlSelf->top_ysyx_24110017__DOT__rs1];
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0 
        = (vlSelf->top_ysyx_24110017__DOT__imm + vlSelf->pc);
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
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0 
        = ((0x73U == (0x7fU & vlSelf->inst)) & (0x341U 
                                                == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0 
        = ((0x73U == (0x7fU & vlSelf->inst)) & (0x342U 
                                                == vlSelf->top_ysyx_24110017__DOT__imm));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en 
        = (IData)(((0x73U == (0x707fU & vlSelf->inst)) 
                   & (0U == vlSelf->top_ysyx_24110017__DOT__imm)));
    vlSelf->top_ysyx_24110017__DOT__r1 = ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__rs1))
                                           ? 0U : vlSelf->__VdfgTmp_h1fd29a4c__0);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr = 
        ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0)
          ? vlSelf->top_ysyx_24110017__DOT__mepc : 
         ((IData)(vlSelf->top_ysyx_24110017__DOT__mstatus_wen)
           ? vlSelf->top_ysyx_24110017__DOT__mstatus
           : ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0)
               ? vlSelf->top_ysyx_24110017__DOT__mcause
               : ((IData)(vlSelf->top_ysyx_24110017__DOT__mtvec_wen)
                   ? vlSelf->top_ysyx_24110017__DOT__mtvec
                   : 0U))));
    vlSelf->top_ysyx_24110017__DOT__rs2 = (0x1fU & 
                                           ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0)
                                             ? (vlSelf->inst 
                                                >> 0x14U)
                                             : ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                                 ? 0xfU
                                                 : 0U)));
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT____VdfgTmp_hd43fef8a__0 
        = (vlSelf->top_ysyx_24110017__DOT__imm + vlSelf->top_ysyx_24110017__DOT__r1);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a = (
                                                   ((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst)) 
                                                    | ((3U 
                                                        == 
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
    vlSelf->top_ysyx_24110017__DOT__w_mstatus = ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 
                                                  & vlSelf->top_ysyx_24110017__DOT__r1) 
                                                 | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 
                                                     & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr 
                                                        | vlSelf->top_ysyx_24110017__DOT__r1)) 
                                                    | (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 
                                                       & (((0U 
                                                            == (IData)(vlSelf->top_ysyx_24110017__DOT__rs1))
                                                            ? 0xffffffffU
                                                            : 
                                                           (~ vlSelf->__VdfgTmp_h1fd29a4c__0)) 
                                                          & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr))));
    vlSelf->top_ysyx_24110017__DOT__r2 = ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__rs2))
                                           ? 0U : vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf
                                          [vlSelf->top_ysyx_24110017__DOT__rs2]);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
        = (((QData)((IData)((- (IData)((vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a)));
    vlSelf->dnpc = ((0x6fU == (0x7fU & vlSelf->inst))
                     ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                     : ((0x67U == (0x7fU & vlSelf->inst))
                         ? (0xfffffffeU & vlSelf->top_ysyx_24110017__DOT__LSU__DOT____VdfgTmp_hd43fef8a__0)
                         : ((IData)(((0x63U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        == vlSelf->top_ysyx_24110017__DOT__r2)))
                             ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                             : ((IData)(((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->inst)) 
                                         & (vlSelf->top_ysyx_24110017__DOT__r1 
                                            != vlSelf->top_ysyx_24110017__DOT__r2)))
                                 ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                 : ((IData)(((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->inst)) 
                                             & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))
                                     ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                     : ((IData)(((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)) 
                                                 & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))
                                         ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                         : ((IData)(
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst)) 
                                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                                        < vlSelf->top_ysyx_24110017__DOT__r2)))
                                             ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                             : ((IData)(
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst)) 
                                                         & (vlSelf->top_ysyx_24110017__DOT__r1 
                                                            >= vlSelf->top_ysyx_24110017__DOT__r2)))
                                                 ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                                 : 
                                                ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                                  ? vlSelf->top_ysyx_24110017__DOT__mtvec
                                                  : 
                                                 ((IData)(
                                                          ((0x73U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst)) 
                                                           & (0x302U 
                                                              == vlSelf->top_ysyx_24110017__DOT__imm)))
                                                   ? vlSelf->top_ysyx_24110017__DOT__mepc
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc)))))))))));
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b = (
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst)) 
                                                    | (0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst)))
                                                    ? vlSelf->top_ysyx_24110017__DOT__r2
                                                    : vlSelf->top_ysyx_24110017__DOT__imm);
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
                                                & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0) 
                                               | (((- (IData)(
                                                              (1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->inst 
                                                                   >> 0xcU))))) 
                                                   & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
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
                                                      & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0) 
                                                     | (((- (IData)(
                                                                    (3U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->inst 
                                                                         >> 0xcU))))) 
                                                         & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0) 
                                                        | (((- (IData)(
                                                                       (4U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->inst 
                                                                            >> 0xcU))))) 
                                                            & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0) 
                                                           | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 
                                                               & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)))) 
                                                              | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 
                                                                  & (IData)(
                                                                            (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
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
                                                                     & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0) 
                                                                    | ((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xcU))))) 
                                                                       & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0)))))))))) 
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
                                                   & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0) 
                                                  | (((- (IData)((IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->inst)) 
                                                                          & (0x20U 
                                                                             == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                      & ((IData)(1U) 
                                                         + 
                                                         ((~ vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b) 
                                                          + vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a))) 
                                                     | (((- (IData)((IData)(
                                                                            ((0x1000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->inst)) 
                                                                             & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                         & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                                                            << 
                                                            (0x1fU 
                                                             & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b))) 
                                                        | (((- (IData)((IData)(
                                                                               ((0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                            & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0) 
                                                           | (((- (IData)((IData)(
                                                                                ((0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                               & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0) 
                                                              | (((- (IData)((IData)(
                                                                                ((0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                  & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0) 
                                                                 | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 
                                                                     & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b))) 
                                                                    | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 
                                                                        & (IData)(
                                                                                ((0x3fU 
                                                                                >= vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)
                                                                                 ? 
                                                                                (vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
                                                                                >> vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)
                                                                                 : 0ULL))) 
                                                                       | (((- (IData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                           & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0) 
                                                                          | (((- (IData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                              & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0) 
                                                                             | (((- (IData)((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                                & (vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a 
                                                                                * vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)) 
                                                                                | (((- (IData)((IData)(
                                                                                ((0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
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
                                                                                | (((- (IData)((IData)(
                                                                                ((0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                                & VL_DIVS_III(32, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)) 
                                                                                | (((- (IData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->inst)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))))) 
                                                                                & VL_DIV_III(32, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b)) 
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
                                                                                & VL_MODDIV_III(32, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a, vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b))))))))))))))))) 
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
                                                             | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 
                                                                 & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr) 
                                                                | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 
                                                                    & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr) 
                                                                   | ((vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 
                                                                       & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr) 
                                                                      | (((- (IData)(
                                                                                (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                          & ((IData)(4U) 
                                                                             + vlSelf->pc)) 
                                                                         | (((- (IData)(
                                                                                (0x67U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                             & ((IData)(4U) 
                                                                                + vlSelf->pc)) 
                                                                            | (((- (IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                & vlSelf->top_ysyx_24110017__DOT__imm) 
                                                                               | ((- (IData)(
                                                                                (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))) 
                                                                                & vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0))))))))))))));
}

VL_ATTR_COLD void Vtop_ysyx_24110017___024root___eval_stl(Vtop_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop_ysyx_24110017___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
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
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
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
    vlSelf->DIFFTEST = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top_ysyx_24110017__DOT__lrd = VL_RAND_RESET_I(5);
    vlSelf->top_ysyx_24110017__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top_ysyx_24110017__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top_ysyx_24110017__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top_ysyx_24110017__DOT__res = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__ldone = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__r1 = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__r2 = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__w_mstatus = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__w_mtvec = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__mstatus_wen = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__mtvec_wen = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU_DONE = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB = VL_RAND_RESET_I(4);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BRESP = VL_RAND_RESET_I(2);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__lbdone = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__lhdone = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__lwdone = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__lbudone = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__lhudone = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RRESP = VL_RAND_RESET_I(2);
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__LSU_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__mepc_wen = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__mstatus_wen = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__mcause_wen = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT__mtvec_wen = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr_reg = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr_reg = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb = VL_RAND_RESET_I(8);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__LSU__DOT____VdfgTmp_hd43fef8a__0 = 0;
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen = VL_RAND_RESET_I(1);
    vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdfgTmp_h066b65f5__0 = 0;
    vlSelf->__VdfgTmp_h1fd29a4c__0 = 0;
    vlSelf->__Vfunc_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vdly__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_rready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
