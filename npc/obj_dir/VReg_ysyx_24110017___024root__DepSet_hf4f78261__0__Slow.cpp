// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VReg_ysyx_24110017.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VReg_ysyx_24110017___024root.h"

VL_ATTR_COLD void VReg_ysyx_24110017___024root___eval_static(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___eval_static\n"); );
}

VL_ATTR_COLD void VReg_ysyx_24110017___024root___eval_initial(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void VReg_ysyx_24110017___024root___eval_final(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___eval_final\n"); );
}

VL_ATTR_COLD void VReg_ysyx_24110017___024root___eval_triggers__stl(VReg_ysyx_24110017___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VReg_ysyx_24110017___024root___dump_triggers__stl(VReg_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VReg_ysyx_24110017___024root___eval_stl(VReg_ysyx_24110017___024root* vlSelf);

VL_ATTR_COLD void VReg_ysyx_24110017___024root___eval_settle(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VReg_ysyx_24110017___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VReg_ysyx_24110017___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_24110017.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VReg_ysyx_24110017___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VReg_ysyx_24110017___024root___dump_triggers__stl(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VReg_ysyx_24110017___024root____Vdpiimwrap_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
extern const VlUnpacked<CData/*1:0*/, 128> VReg_ysyx_24110017__ConstPool__TABLE_h09dcacfa_0;
extern const VlUnpacked<CData/*1:0*/, 512> VReg_ysyx_24110017__ConstPool__TABLE_h6fed9396_0;
void VReg_ysyx_24110017___024root____Vdpiimwrap_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void VReg_ysyx_24110017___024root____Vdpiimwrap_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void VReg_ysyx_24110017___024root___stl_sequent__TOP__0(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0x100073U == vlSelf->inst)) {
        VReg_ysyx_24110017___024root____Vdpiimwrap_ysyx_24110017__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->ysyx_24110017__DOT__IFU_AXI_ARVALID = vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
    vlSelf->ysyx_24110017__DOT__IFU_AXI_RREADY = vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_rready;
    vlSelf->ysyx_24110017__DOT__LSU_AXI_AWVALID = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awvalid;
    vlSelf->ysyx_24110017__DOT__LSU_AXI_WVALID = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid;
    vlSelf->ysyx_24110017__DOT__LSU_AXI_BREADY = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready;
    vlSelf->ysyx_24110017__DOT__LSU_AXI_ARVALID = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arvalid;
    vlSelf->ysyx_24110017__DOT__LSU_AXI_RREADY = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready;
    vlSelf->ysyx_24110017__DOT__S_AXI_AWREADY = vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready;
    vlSelf->ysyx_24110017__DOT__S_AXI_WREADY = vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready;
    vlSelf->ysyx_24110017__DOT__S_AXI_BVALID = vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid;
    vlSelf->ysyx_24110017__DOT__S_AXI_ARREADY = vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready;
    vlSelf->ysyx_24110017__DOT__S_AXI_RVALID = vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid;
    vlSelf->ysyx_24110017__DOT__U_AXI_AWREADY = vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_awready;
    vlSelf->ysyx_24110017__DOT__U_AXI_WREADY = vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_wready;
    vlSelf->ysyx_24110017__DOT__U_AXI_BVALID = vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_bvalid;
    vlSelf->ysyx_24110017__DOT__U_AXI_ARREADY = vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_arready;
    vlSelf->ysyx_24110017__DOT__U_AXI_RVALID = vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_rvalid;
    vlSelf->ysyx_24110017__DOT__C_AXI_AWREADY = vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_awready;
    vlSelf->ysyx_24110017__DOT__C_AXI_WREADY = vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_wready;
    vlSelf->ysyx_24110017__DOT__C_AXI_BVALID = vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_bvalid;
    vlSelf->ysyx_24110017__DOT__C_AXI_ARREADY = vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_arready;
    vlSelf->ysyx_24110017__DOT__C_AXI_RVALID = vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_rvalid;
    vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0 
        = ((0x63U == (0x7fU & vlSelf->inst)) | ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)) 
                                                | (0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))));
    vlSelf->DIFFTEST = vlSelf->ysyx_24110017__DOT__difftest;
    vlSelf->ysyx_24110017__DOT__PCU_VALID = vlSelf->ysyx_24110017__DOT__PCU__DOT__pcu_valid;
    vlSelf->ysyx_24110017__DOT__IFU_VALID = vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_valid;
    vlSelf->ysyx_24110017__DOT__IDU_READY = vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_ready;
    vlSelf->ysyx_24110017__DOT__IDU_VALID = vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_valid;
    vlSelf->ysyx_24110017__DOT__EXU_READY = vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_ready;
    vlSelf->ysyx_24110017__DOT__EXU_VALID = vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_valid;
    vlSelf->ysyx_24110017__DOT__WBU_READY = vlSelf->ysyx_24110017__DOT__WBU__DOT__wbu_ready;
    vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state 
        = vlSelf->ysyx_24110017__DOT__PCU__DOT__state;
    vlSelf->ysyx_24110017__DOT__WBU__DOT__next_state 
        = vlSelf->ysyx_24110017__DOT__WBU__DOT__state;
    vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state 
        = vlSelf->ysyx_24110017__DOT__IDU__DOT__state;
    vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0 
        = ((0x37U == (0x7fU & vlSelf->inst)) | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0 
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
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->ysyx_24110017__DOT__PCU__DOT__pcu_valid) 
                             << 6U) | (((IData)(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_valid) 
                                        << 5U) | (((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyx_24110017__DOT__wbu_done) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->rst) 
                                                         << 2U) 
                                                        | (IData)(vlSelf->ysyx_24110017__DOT__IFU__DOT__current_state))))));
    vlSelf->ysyx_24110017__DOT__IFU__DOT__next_state 
        = VReg_ysyx_24110017__ConstPool__TABLE_h09dcacfa_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_24110017__DOT__ls_valid = ((3U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                            | (0x23U 
                                               == (IData)(vlSelf->ysyx_24110017__DOT__op)));
    vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en 
        = ((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
           & ((0U == vlSelf->ysyx_24110017__DOT__imm) 
              & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 
        = (- (IData)(((5U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                      & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct7)))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 
        = (- (IData)(((5U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                      & (0x20U == (IData)(vlSelf->ysyx_24110017__DOT__funct7)))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 
        = (- (IData)(((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                      & (1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 
        = (- (IData)(((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                      & (2U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 
        = (- (IData)(((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                      & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0 
        = (vlSelf->pc + vlSelf->ysyx_24110017__DOT__imm);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__mstatus_wen 
        = ((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
           & (0x300U == vlSelf->ysyx_24110017__DOT__imm));
    vlSelf->ysyx_24110017__DOT__EXU__DOT__mtvec_wen 
        = ((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
           & (0x305U == vlSelf->ysyx_24110017__DOT__imm));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0 
        = ((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
           & (0x341U == vlSelf->ysyx_24110017__DOT__imm));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0 
        = ((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
           & (0x342U == vlSelf->ysyx_24110017__DOT__imm));
    vlSelf->__VdfgTmp_h9f8b16d6__0 = ((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                      | ((0U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                         | (3U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))));
    vlSelf->ysyx_24110017__DOT__r2 = ((0U == (IData)(vlSelf->ysyx_24110017__DOT__rs2))
                                       ? 0U : vlSelf->ysyx_24110017__DOT__RFU__DOT__rf
                                      [vlSelf->ysyx_24110017__DOT__rs2]);
    vlSelf->__VdfgTmp_h007721a4__0 = vlSelf->ysyx_24110017__DOT__RFU__DOT__rf
        [vlSelf->ysyx_24110017__DOT__rs1];
    vlSelf->ysyx_24110017__DOT__IDU__DOT__imm = ((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0)
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->inst)
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (((- (IData)(
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
                                                   : 
                                                  ((0x63U 
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
                                                    ((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelf->inst 
                                                         >> 0x14U))
                                                      : 0U)))));
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_ready) 
                             << 8U) | (((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                                        << 7U) | (((IData)(vlSelf->ysyx_24110017__DOT__LSU_DONE) 
                                                   << 6U) 
                                                  | ((0x20U 
                                                      & ((~ (IData)(vlSelf->ysyx_24110017__DOT__ls_valid)) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->ysyx_24110017__DOT__WBU__DOT__wbu_ready) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->rst) 
                                                               << 2U) 
                                                              | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__state))))))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT__next_state 
        = VReg_ysyx_24110017__ConstPool__TABLE_h6fed9396_0
        [vlSelf->__Vtableidx2];
    vlSelf->ysyx_24110017__DOT__EXU__DOT__csr = ((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0)
                                                  ? vlSelf->ysyx_24110017__DOT__mepc
                                                  : 
                                                 ((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__mstatus_wen)
                                                   ? vlSelf->ysyx_24110017__DOT__mstatus
                                                   : 
                                                  ((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0)
                                                    ? vlSelf->ysyx_24110017__DOT__mcause
                                                    : 
                                                   ((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__mtvec_wen)
                                                     ? vlSelf->ysyx_24110017__DOT__mtvec
                                                     : 0U))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT__b = (((0x33U 
                                                 == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                | (0x23U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__op)))
                                                ? vlSelf->ysyx_24110017__DOT__r2
                                                : vlSelf->ysyx_24110017__DOT__imm);
    vlSelf->ysyx_24110017__DOT__r1 = ((0U == (IData)(vlSelf->ysyx_24110017__DOT__rs1))
                                       ? 0U : vlSelf->__VdfgTmp_h007721a4__0);
    if ((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))) {
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID 
            = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY 
            = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID 
            = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arvalid;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA 
            = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wdata;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY 
            = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR 
            = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awaddr;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR 
            = vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_araddr;
    } else if ((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))) {
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID 
            = vlSelf->ysyx_24110017__DOT__IFU_AXI_WVALID;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY 
            = vlSelf->ysyx_24110017__DOT__IFU_AXI_BREADY;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID 
            = vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA 
            = vlSelf->ysyx_24110017__DOT__IFU_AXI_WDATA;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR 
            = vlSelf->ysyx_24110017__DOT__IFU_AXI_AWADDR;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR 
            = vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_araddr;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY 
            = vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_rready;
    } else {
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID = 0U;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY = 0U;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID = 0U;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA = 0U;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR = 0U;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR = 0U;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY = 0U;
    }
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart 
        = ((0xa00003f8U == vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR) 
           | (0xa00003f8U == vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR));
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint 
        = ((0xa0000048U == vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR) 
           | ((0xa000004cU == vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR) 
              | ((0xa0000048U == vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR) 
                 | (0xa000004cU == vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs = 
        ((vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 
          & vlSelf->ysyx_24110017__DOT__r1) | ((vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 
                                                & (vlSelf->ysyx_24110017__DOT__EXU__DOT__csr 
                                                   | vlSelf->ysyx_24110017__DOT__r1)) 
                                               | (vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 
                                                  & (((0U 
                                                       == (IData)(vlSelf->ysyx_24110017__DOT__rs1))
                                                       ? 0xffffffffU
                                                       : 
                                                      (~ vlSelf->__VdfgTmp_h007721a4__0)) 
                                                     & vlSelf->ysyx_24110017__DOT__EXU__DOT__csr))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0 
        = (vlSelf->ysyx_24110017__DOT__imm + vlSelf->ysyx_24110017__DOT__r1);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__a = (((0x13U 
                                                 == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                | ((3U 
                                                    == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                   | ((0x23U 
                                                       == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                      | ((0x33U 
                                                          == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                         | ((0x73U 
                                                             == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                            & ((1U 
                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                               | ((2U 
                                                                   == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                  | (3U 
                                                                     == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))))))))
                                                ? vlSelf->ysyx_24110017__DOT__r1
                                                : vlSelf->pc);
    if (vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart) {
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0 
            = ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID) 
               << 2U);
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0 
            = ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY) 
               << 2U);
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0 
            = ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID) 
               << 2U);
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY 
            = vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_arready;
    } else if (vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint) {
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0 
            = ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID) 
               << 1U);
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0 
            = ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY) 
               << 1U);
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0 
            = ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID) 
               << 1U);
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY 
            = vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_arready;
    } else {
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0 
            = vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0 
            = vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0 
            = vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY 
            = vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state = 0U;
        vlSelf->ysyx_24110017__DOT__WBU__DOT__next_state = 0U;
        vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state = 0U;
    } else {
        if (vlSelf->ysyx_24110017__DOT__PCU__DOT__state) {
            if (vlSelf->ysyx_24110017__DOT__PCU__DOT__state) {
                if (((IData)(vlSelf->ysyx_24110017__DOT__PCU__DOT__pcu_valid) 
                     & (IData)(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_ready))) {
                    vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state = 0U;
                }
            } else {
                vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state = 0U;
            }
        } else if (vlSelf->ysyx_24110017__DOT__PCU__DOT__pcu_valid) {
            vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state = 1U;
        }
        if ((0U == (IData)(vlSelf->ysyx_24110017__DOT__WBU__DOT__state))) {
            if (((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_valid) 
                 & (IData)(vlSelf->ysyx_24110017__DOT__WBU__DOT__wbu_ready))) {
                vlSelf->ysyx_24110017__DOT__WBU__DOT__next_state = 1U;
            }
        } else {
            vlSelf->ysyx_24110017__DOT__WBU__DOT__next_state 
                = ((1U == (IData)(vlSelf->ysyx_24110017__DOT__WBU__DOT__state))
                    ? 2U : 0U);
        }
        if (vlSelf->ysyx_24110017__DOT__IDU__DOT__state) {
            if (vlSelf->ysyx_24110017__DOT__IDU__DOT__state) {
                if (((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_valid) 
                     & (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_ready))) {
                    vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state = 0U;
                }
            } else {
                vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_valid) 
                    & (IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_ready))) {
            vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state = 1U;
        }
    }
    if (vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen) {
        VReg_ysyx_24110017___024root____Vdpiimwrap_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__pmem_write_TOP(
                                                                                ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                                                 ? 0U
                                                                                 : vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR)), 
                                                                                ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                                                 ? 0U
                                                                                 : vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA)), 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                                                                 ? 
                                                                                (((1U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                                                 ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                                                 ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                                                 : 0U)) 
                                                                                << 0x10U)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                                                 ? 
                                                                                (((1U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                                                 ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                                                 ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                                                 : 0U)) 
                                                                                << 8U)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                                                 ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                                                 ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                                                 : 0U))))));
    }
    vlSelf->ysyx_24110017__DOT__LSU_AXI_BVALID = ((1U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                  & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                                      ? (IData)(vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_bvalid)
                                                      : 
                                                     ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                       ? (IData)(vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_bvalid)
                                                       : (IData)(vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid))));
    vlSelf->dnpc = ((0x6fU == (IData)(vlSelf->ysyx_24110017__DOT__op))
                     ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                     : ((0x67U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                         ? (0xfffffffeU & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0)
                         : (((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   == vlSelf->ysyx_24110017__DOT__r2)))
                             ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                             : (((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                 & ((1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                    & (vlSelf->ysyx_24110017__DOT__r1 
                                       != vlSelf->ysyx_24110017__DOT__r2)))
                                 ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                 : (((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                     & ((4U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                        & VL_LTS_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))
                                     ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                     : (((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                         & ((5U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                            & VL_GTES_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))
                                         ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                         : (((0x63U 
                                              == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                             & ((6U 
                                                 == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                & (vlSelf->ysyx_24110017__DOT__r1 
                                                   < vlSelf->ysyx_24110017__DOT__r2)))
                                             ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                             : (((0x63U 
                                                  == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                 & ((7U 
                                                     == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                    & (vlSelf->ysyx_24110017__DOT__r1 
                                                       >= vlSelf->ysyx_24110017__DOT__r2)))
                                                 ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0
                                                 : 
                                                ((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                                  ? vlSelf->ysyx_24110017__DOT__mtvec
                                                  : 
                                                 (((0x73U 
                                                    == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                   & ((0x302U 
                                                       == vlSelf->ysyx_24110017__DOT__imm) 
                                                      & (0U 
                                                         == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))
                                                   ? vlSelf->ysyx_24110017__DOT__mepc
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc)))))))))));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__a)));
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0 
        = (vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
           + vlSelf->ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0 
        = VL_LTS_III(32, vlSelf->ysyx_24110017__DOT__EXU__DOT__a, vlSelf->ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0 
        = (vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
           < vlSelf->ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0 
        = (vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
           ^ vlSelf->ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0 
        = (vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
           | vlSelf->ysyx_24110017__DOT__EXU__DOT__b);
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0 
        = (vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
           & vlSelf->ysyx_24110017__DOT__EXU__DOT__b);
    if (vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart) {
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[0U] = 0U;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[1U] = 0U;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[2U] 
            = vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0 
            = ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY) 
               << 2U);
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY 
            = vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_awready;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID 
            = vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_rvalid;
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA 
            = vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_rdata;
    } else {
        if (vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint) {
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[0U] = 0U;
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[1U] 
                = (IData)((QData)((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)));
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[2U] 
                = (IData)(((QData)((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)) 
                           >> 0x20U));
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0 
                = ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY) 
                   << 1U);
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY 
                = vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_awready;
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID 
                = vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_rvalid;
        } else {
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[0U] 
                = vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR;
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[1U] = 0U;
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[2U] = 0U;
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0 
                = vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY;
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY 
                = vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready;
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID 
                = vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid;
        }
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA 
            = (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint) 
                | (3U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)))
                ? vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_rdata
                : vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata);
    }
    if (((IData)(vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid) 
         & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0))) {
        VReg_ysyx_24110017___024root____Vdpiimwrap_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__pmem_read_TOP(
                                                                                vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[0U], vlSelf->__Vfunc_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__pmem_read__1__Vfuncout);
        vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_rdata 
            = vlSelf->__Vfunc_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_rdata = 0U;
    }
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID 
        = ((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
            ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awvalid)
            : (IData)(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                       & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0 
        = ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
            ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID) 
               << 2U) : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                          ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID) 
                             << 1U) : (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID)));
    vlSelf->ysyx_24110017__DOT__IFU_AXI_RVALID = ((2U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                  & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    vlSelf->ysyx_24110017__DOT__LSU_AXI_RVALID = ((1U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                  & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    if (vlSelf->__VdfgTmp_h9f8b16d6__0) {
        vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4a93__0 
            = (0xffU & vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA);
        vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4899__0 
            = (0xffffU & vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA);
    } else {
        vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4a93__0 = 0U;
        vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4899__0 = 0U;
    }
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state 
        = vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state;
    if (vlSelf->rst) {
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state = 0U;
    } else if ((2U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))) {
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state 
                = (((IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arvalid) 
                    | (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awvalid))
                    ? 1U : ((IData)(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arvalid)
                             ? 2U : 3U));
        } else if (((IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_RVALID) 
                    & (IData)(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_rready))) {
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))) {
        if (((~ (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)) 
             & (((IData)(vlSelf->ysyx_24110017__DOT__LSU_AXI_RVALID) 
                 & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready)) 
                | ((IData)(vlSelf->ysyx_24110017__DOT__LSU_AXI_BVALID) 
                   & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready))))) {
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state = 0U;
        } else if (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint) 
                    & (((IData)(vlSelf->ysyx_24110017__DOT__LSU_AXI_RVALID) 
                        & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready)) 
                       | ((IData)(vlSelf->ysyx_24110017__DOT__LSU_AXI_BVALID) 
                          & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready))))) {
            vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state = 3U;
        }
    } else {
        vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state 
            = (((IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arvalid) 
                | (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awvalid))
                ? 1U : ((IData)(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arvalid)
                         ? 2U : 0U));
    }
    vlSelf->ysyx_24110017__DOT__EXU__DOT__res = (((- (IData)(
                                                             (0x13U 
                                                              == (IData)(vlSelf->ysyx_24110017__DOT__op)))) 
                                                  & (((- (IData)(
                                                                 (0U 
                                                                  == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))) 
                                                      & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0) 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))) 
                                                         & (vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
                                                            << (IData)(vlSelf->ysyx_24110017__DOT__shamt))) 
                                                        | (((- (IData)(
                                                                       (2U 
                                                                        == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))) 
                                                            & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0) 
                                                           | (((- (IData)(
                                                                          (3U 
                                                                           == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))) 
                                                               & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0) 
                                                              | (((- (IData)(
                                                                             (4U 
                                                                              == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))) 
                                                                  & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0) 
                                                                 | ((vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 
                                                                     & (vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
                                                                        >> (IData)(vlSelf->ysyx_24110017__DOT__shamt))) 
                                                                    | ((vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
                                                                                >> (IData)(vlSelf->ysyx_24110017__DOT__shamt)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))) 
                                                                           & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0) 
                                                                          | ((- (IData)(
                                                                                (7U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))) 
                                                                             & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0)))))))))) 
                                                 | (((- (IData)(
                                                                (0x33U 
                                                                 == (IData)(vlSelf->ysyx_24110017__DOT__op)))) 
                                                     & (((- (IData)(
                                                                    ((0U 
                                                                      == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                     & (0U 
                                                                        == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                         & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0) 
                                                        | (((- (IData)(
                                                                       ((0U 
                                                                         == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                        & (0x20U 
                                                                           == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((~ vlSelf->ysyx_24110017__DOT__EXU__DOT__b) 
                                                                + vlSelf->ysyx_24110017__DOT__EXU__DOT__a))) 
                                                           | (((- (IData)(
                                                                          ((1U 
                                                                            == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                           & (0U 
                                                                              == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                               & (vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
                                                                  << 
                                                                  (0x1fU 
                                                                   & vlSelf->ysyx_24110017__DOT__EXU__DOT__b))) 
                                                              | (((- (IData)(
                                                                             ((2U 
                                                                               == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                              & (0U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                                  & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0) 
                                                                 | (((- (IData)(
                                                                                ((3U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                                     & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0) 
                                                                    | (((- (IData)(
                                                                                ((4U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                                        & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0) 
                                                                       | ((vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 
                                                                           & (vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
                                                                              >> 
                                                                              (0x1fU 
                                                                               & vlSelf->ysyx_24110017__DOT__EXU__DOT__b))) 
                                                                          | ((vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 
                                                                              & (IData)(
                                                                                ((0x3fU 
                                                                                >= vlSelf->ysyx_24110017__DOT__EXU__DOT__b)
                                                                                 ? 
                                                                                (vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
                                                                                >> vlSelf->ysyx_24110017__DOT__EXU__DOT__b)
                                                                                 : 0ULL))) 
                                                                             | (((- (IData)(
                                                                                ((6U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                                                & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0) 
                                                                                | (((- (IData)(
                                                                                ((7U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                                                & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0) 
                                                                                | (((- (IData)(
                                                                                ((0U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                                                & (vlSelf->ysyx_24110017__DOT__EXU__DOT__a 
                                                                                * vlSelf->ysyx_24110017__DOT__EXU__DOT__b)) 
                                                                                | (((- (IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                                                & (IData)(
                                                                                ((vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 
                                                                                * 
                                                                                (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->ysyx_24110017__DOT__EXU__DOT__b 
                                                                                >> 0x1fU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__b)))) 
                                                                                >> 0x20U))) 
                                                                                | (((- (IData)(
                                                                                ((4U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                                                & VL_DIVS_III(32, vlSelf->ysyx_24110017__DOT__EXU__DOT__a, vlSelf->ysyx_24110017__DOT__EXU__DOT__b)) 
                                                                                | (((- (IData)(
                                                                                ((5U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                                                & VL_DIV_III(32, vlSelf->ysyx_24110017__DOT__EXU__DOT__a, vlSelf->ysyx_24110017__DOT__EXU__DOT__b)) 
                                                                                | (((- (IData)(
                                                                                ((6U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7))))) 
                                                                                | (- (IData)(
                                                                                ((7U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct7)))))) 
                                                                                & VL_MODDIV_III(32, vlSelf->ysyx_24110017__DOT__EXU__DOT__a, vlSelf->ysyx_24110017__DOT__EXU__DOT__b))))))))))))))))) 
                                                    | (((- (IData)(
                                                                   ((3U 
                                                                     == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                                    & (0U 
                                                                       == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))) 
                                                        & (((- (IData)(
                                                                       ((IData)(vlSelf->__VdfgTmp_h9f8b16d6__0) 
                                                                        & (vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA 
                                                                           >> 7U)))) 
                                                            << 8U) 
                                                           | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4a93__0))) 
                                                       | (((- (IData)(
                                                                      ((3U 
                                                                        == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                                       & (1U 
                                                                          == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))) 
                                                           & (((- (IData)(
                                                                          ((IData)(vlSelf->__VdfgTmp_h9f8b16d6__0) 
                                                                           & (vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA 
                                                                              >> 0xfU)))) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4899__0))) 
                                                          | (((- (IData)(
                                                                         ((3U 
                                                                           == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                                          & (2U 
                                                                             == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))) 
                                                              & ((IData)(vlSelf->__VdfgTmp_h9f8b16d6__0)
                                                                  ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                                                  : 0U)) 
                                                             | (((- (IData)(
                                                                            ((3U 
                                                                              == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                                             & (4U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))) 
                                                                 & (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4a93__0)) 
                                                                | (((- (IData)(
                                                                               ((3U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                                                & (5U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))) 
                                                                    & (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4899__0)) 
                                                                   | ((vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 
                                                                       & vlSelf->ysyx_24110017__DOT__EXU__DOT__csr) 
                                                                      | ((vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 
                                                                          & vlSelf->ysyx_24110017__DOT__EXU__DOT__csr) 
                                                                         | ((vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 
                                                                             & vlSelf->ysyx_24110017__DOT__EXU__DOT__csr) 
                                                                            | (((- (IData)(
                                                                                (0x6fU 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__op)))) 
                                                                                & ((IData)(4U) 
                                                                                + vlSelf->pc)) 
                                                                               | (((- (IData)(
                                                                                (0x67U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__op)))) 
                                                                                & ((IData)(4U) 
                                                                                + vlSelf->pc)) 
                                                                                | (((- (IData)(
                                                                                (0x37U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__op)))) 
                                                                                & vlSelf->ysyx_24110017__DOT__imm) 
                                                                                | ((- (IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSelf->ysyx_24110017__DOT__op)))) 
                                                                                & vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0))))))))))))));
}

VL_ATTR_COLD void VReg_ysyx_24110017___024root___eval_stl(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VReg_ysyx_24110017___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VReg_ysyx_24110017___024root___dump_triggers__ico(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VReg_ysyx_24110017___024root___dump_triggers__act(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VReg_ysyx_24110017___024root___dump_triggers__nba(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VReg_ysyx_24110017___024root___ctor_var_reset(VReg_ysyx_24110017___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg_ysyx_24110017___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->dnpc = VL_RAND_RESET_I(32);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->DIFFTEST = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__PCU_VALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU_VALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IDU_READY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU_AXI_AWADDR = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__IFU_AXI_WDATA = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24110017__DOT__IFU_AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU_AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU_AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU_AXI_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU_AXI_RREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IDU_VALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__EXU_READY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->ysyx_24110017__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24110017__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24110017__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24110017__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24110017__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->ysyx_24110017__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24110017__DOT__sram_lsu_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__sram_lsu_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU_DONE = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__EXU_VALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__WBU_READY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__res = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__ls_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__o_mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__o_mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__o_mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__o_mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__gpr_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__mepc_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__mstatus_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__mcause_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__mtvec_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU_AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU_AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU_AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU_AXI_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU_AXI_RREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__S_AXI_RRESP = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__S_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__S_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__S_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__S_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__S_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__U_AXI_RRESP = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__U_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__U_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__U_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__U_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__U_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__C_AXI_RRESP = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__C_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__C_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__C_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__C_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__C_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__wbu_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__difftest = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__xrd = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__rf_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24110017__DOT__rf_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__w_mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__w_mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__w_mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__w_mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__mepc_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__mstatus_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__mcause_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__mtvec_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__r1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__r2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__PCU__DOT__pcu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__PCU__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__IFU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_start = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_ifu_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IDU__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IDU__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0 = 0;
    vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0 = 0;
    vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__res = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__csr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__mstatus_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__EXU__DOT__mtvec_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4a93__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4899__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0 = 0;
    vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0 = 0;
    vlSelf->ysyx_24110017__DOT__LSU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0 = 0;
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0 = 0;
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0 = 0;
    VL_ZERO_RESET_W(96, vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0);
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0 = 0;
    vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0 = 0;
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__device_uart_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__UART_ysyx_24110017__DOT__ureg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110017__DOT__CLINT_ysyx_24110017__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_24110017__DOT__WBU__DOT__wbu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110017__DOT__WBU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110017__DOT__WBU__DOT__next_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdfgTmp_h007721a4__0 = 0;
    vlSelf->__VdfgTmp_h9f8b16d6__0 = 0;
    vlSelf->__Vfunc_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vdly__ysyx_24110017__DOT__IFU__DOT__ifu_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_24110017__DOT__IDU__DOT__idu_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_24110017__DOT__UART_ysyx_24110017__DOT__ureg_wen = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_24110017__DOT__LSU_DONE = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
