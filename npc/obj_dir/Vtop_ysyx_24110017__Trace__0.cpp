// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_ysyx_24110017__Syms.h"


void Vtop_ysyx_24110017___024root__trace_chg_sub_0(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_ysyx_24110017___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_ysyx_24110017___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ysyx_24110017___024root*>(voidSelf);
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_ysyx_24110017___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_ysyx_24110017___024root__trace_chg_sub_0(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp),2);
        bufp->chgIData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
        bufp->chgIData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
        bufp->chgIData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
        bufp->chgIData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
        bufp->chgIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
        bufp->chgCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
        bufp->chgIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
        bufp->chgIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
        bufp->chgIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
        bufp->chgIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
        bufp->chgIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
        bufp->chgIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
        bufp->chgIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
        bufp->chgIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
        bufp->chgIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
        bufp->chgIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
        bufp->chgIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
        bufp->chgIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
        bufp->chgIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
        bufp->chgIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
        bufp->chgIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
        bufp->chgIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
        bufp->chgIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
        bufp->chgIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
        bufp->chgIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
        bufp->chgIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
        bufp->chgIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
        bufp->chgIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
        bufp->chgIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
        bufp->chgIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
        bufp->chgIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
        bufp->chgIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
        bufp->chgIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
        bufp->chgIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
        bufp->chgIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
        bufp->chgIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
        bufp->chgIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
        bufp->chgIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
        bufp->chgCData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
        bufp->chgBit(oldp+40,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+41,(vlSelf->top_ysyx_24110017__DOT__l_wen));
        bufp->chgCData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__l_rd),5);
        bufp->chgBit(oldp+43,(vlSelf->top_ysyx_24110017__DOT__lb_w));
        bufp->chgBit(oldp+44,(vlSelf->top_ysyx_24110017__DOT__lh_w));
        bufp->chgBit(oldp+45,(vlSelf->top_ysyx_24110017__DOT__lw_w));
        bufp->chgBit(oldp+46,(vlSelf->top_ysyx_24110017__DOT__lbu_w));
        bufp->chgBit(oldp+47,(vlSelf->top_ysyx_24110017__DOT__lhu_w));
        bufp->chgIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
        bufp->chgIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
        bufp->chgIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
        bufp->chgCData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
        bufp->chgBit(oldp+52,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
        bufp->chgBit(oldp+53,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
        bufp->chgBit(oldp+54,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
        bufp->chgBit(oldp+55,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
        bufp->chgBit(oldp+56,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
        bufp->chgIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr_reg),32);
        bufp->chgIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr_reg),32);
        bufp->chgIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata_reg),32);
        bufp->chgCData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb_reg),8);
        bufp->chgCData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+62,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid));
        bufp->chgBit(oldp+63,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready));
        bufp->chgBit(oldp+64,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid));
        bufp->chgIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
        bufp->chgIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata),32);
        bufp->chgBit(oldp+67,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
        bufp->chgBit(oldp+68,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready));
        bufp->chgBit(oldp+69,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid));
        bufp->chgBit(oldp+70,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
        bufp->chgCData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__rd),5);
        bufp->chgCData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
        bufp->chgCData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
        bufp->chgIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__imm),32);
        bufp->chgCData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
        bufp->chgIData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__res),32);
        bufp->chgIData(oldp+77,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
        bufp->chgIData(oldp+78,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                  ? vlSelf->top_ysyx_24110017__DOT__r2
                                  : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
        bufp->chgBit(oldp+79,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+80,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
        bufp->chgBit(oldp+81,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+82,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
        bufp->chgBit(oldp+83,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
        bufp->chgBit(oldp+84,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
        bufp->chgBit(oldp+85,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
        bufp->chgBit(oldp+86,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
        bufp->chgBit(oldp+87,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
        bufp->chgIData(oldp+88,(vlSelf->top_ysyx_24110017__DOT__r1),32);
        bufp->chgIData(oldp+89,(vlSelf->top_ysyx_24110017__DOT__r2),32);
        bufp->chgIData(oldp+90,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
        bufp->chgIData(oldp+91,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
        bufp->chgIData(oldp+92,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
        bufp->chgBit(oldp+93,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
        bufp->chgBit(oldp+94,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state));
        bufp->chgCData(oldp+95,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
        bufp->chgBit(oldp+96,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start));
        bufp->chgBit(oldp+97,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__if_done));
        bufp->chgBit(oldp+98,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
        bufp->chgIData(oldp+99,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    }
    bufp->chgBit(oldp+100,(vlSelf->clk));
    bufp->chgBit(oldp+101,(vlSelf->rst));
    bufp->chgIData(oldp+102,(vlSelf->pc),32);
    bufp->chgIData(oldp+103,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+104,(vlSelf->inst),32);
    bufp->chgBit(oldp+105,(vlSelf->DIFFTEST));
    bufp->chgCData(oldp+106,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+107,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+108,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+109,(((3U == (0x7fU & vlSelf->inst)) 
                            | (0x23U == (0x7fU & vlSelf->inst)))));
    bufp->chgBit(oldp+110,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->chgIData(oldp+111,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                               : 0x80000000U)),32);
    bufp->chgIData(oldp+112,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : 0U)),32);
    bufp->chgIData(oldp+113,(((3U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                               : 0x80000000U)),32);
    bufp->chgBit(oldp+114,((IData)((3U == (0x707fU 
                                           & vlSelf->inst)))));
    bufp->chgBit(oldp+115,((IData)((0x1003U == (0x707fU 
                                                & vlSelf->inst)))));
    bufp->chgBit(oldp+116,((IData)((0x2003U == (0x707fU 
                                                & vlSelf->inst)))));
    bufp->chgBit(oldp+117,((IData)((0x4003U == (0x707fU 
                                                & vlSelf->inst)))));
    bufp->chgBit(oldp+118,((IData)((0x5003U == (0x707fU 
                                                & vlSelf->inst)))));
    bufp->chgCData(oldp+119,(((IData)((0x23U == (0x707fU 
                                                 & vlSelf->inst)))
                               ? 1U : ((IData)((0x1023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->inst)))
                                        ? 3U : ((IData)(
                                                        (0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst)))
                                                 ? 0xfU
                                                 : 0U)))),8);
    bufp->chgIData(oldp+120,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->chgBit(oldp+121,(((0x37U == (0x7fU & vlSelf->inst)) 
                            | ((0x17U == (0x7fU & vlSelf->inst)) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->inst)) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelf->inst)) 
                                     | (IData)(vlSelf->__VdfgTmp_h066b65f5__0)))))));
    bufp->chgIData(oldp+122,((vlSelf->top_ysyx_24110017__DOT__res 
                              | (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lb_w))) 
                                  & (((- (IData)((1U 
                                                  & (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata))) 
                                 | (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lh_w))) 
                                     & (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata 
                                                        >> 0xfU)))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata))) 
                                    | (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lw_w))) 
                                        & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata) 
                                       | ((0xffU & 
                                           ((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lbu_w))) 
                                            & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata)) 
                                          | (0xffffU 
                                             & ((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lhu_w))) 
                                                & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata)))))))),32);
    bufp->chgCData(oldp+123,(((IData)(vlSelf->top_ysyx_24110017__DOT__l_rd) 
                              | (IData)(vlSelf->top_ysyx_24110017__DOT__rd))),5);
    bufp->chgBit(oldp+124,((((0x37U == (0x7fU & vlSelf->inst)) 
                             | ((0x17U == (0x7fU & vlSelf->inst)) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->inst)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelf->inst)) 
                                      | (IData)(vlSelf->__VdfgTmp_h066b65f5__0))))) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__l_wen))));
    bufp->chgBit(oldp+125,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+126,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+127,((IData)(((0x63U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+128,((IData)(((0x1063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+129,((IData)(((0x4063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+130,((IData)(((0x5063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+131,((IData)(((0x6063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+132,((IData)(((0x7063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+133,((IData)(((0x73U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
    bufp->chgIData(oldp+134,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+135,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+136,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+137,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xdU) | ((0x1000U 
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
                                                       >> 7U))))))),32);
    bufp->chgIData(oldp+138,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x15U) | ((0x100000U 
                                             & (vlSelf->inst 
                                                >> 0xbU)) 
                                            | ((0xff000U 
                                                & vlSelf->inst) 
                                               | ((0x800U 
                                                   & (vlSelf->inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->inst 
                                                        >> 0x14U))))))),32);
    bufp->chgBit(oldp+139,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state));
    bufp->chgBit(oldp+140,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->chgIData(oldp+141,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
}

void Vtop_ysyx_24110017___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_cleanup\n"); );
    // Init
    Vtop_ysyx_24110017___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ysyx_24110017___024root*>(voidSelf);
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
