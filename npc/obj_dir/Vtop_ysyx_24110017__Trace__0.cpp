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
        bufp->chgCData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
        bufp->chgCData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
        bufp->chgIData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__imm),32);
        bufp->chgCData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
        bufp->chgCData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__shamt),5);
        bufp->chgBit(oldp+6,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid));
        bufp->chgIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__res),32);
        bufp->chgIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
        bufp->chgIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
        bufp->chgIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
        bufp->chgIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
        bufp->chgBit(oldp+12,(vlSelf->top_ysyx_24110017__DOT__gpr_wen));
        bufp->chgIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
        bufp->chgCData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
        bufp->chgIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__r1),32);
        bufp->chgIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
        bufp->chgIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
        bufp->chgIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
        bufp->chgIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
        bufp->chgIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
        bufp->chgIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
        bufp->chgIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
        bufp->chgIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
        bufp->chgIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
        bufp->chgIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
        bufp->chgIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
        bufp->chgIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
        bufp->chgIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
        bufp->chgIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
        bufp->chgIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
        bufp->chgIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
        bufp->chgIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
        bufp->chgIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
        bufp->chgIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
        bufp->chgIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
        bufp->chgIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
        bufp->chgIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
        bufp->chgIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
        bufp->chgIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
        bufp->chgIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
        bufp->chgIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
        bufp->chgIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
        bufp->chgIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
        bufp->chgCData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
        bufp->chgBit(oldp+49,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+50,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     == vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+51,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     != vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+52,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+53,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+54,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     < vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+55,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     >= vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+56,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                                  & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+57,(vlSelf->top_ysyx_24110017__DOT__l_wen));
        bufp->chgCData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__l_rd),5);
        bufp->chgBit(oldp+59,(vlSelf->top_ysyx_24110017__DOT__lb_w));
        bufp->chgBit(oldp+60,(vlSelf->top_ysyx_24110017__DOT__lh_w));
        bufp->chgBit(oldp+61,(vlSelf->top_ysyx_24110017__DOT__lw_w));
        bufp->chgBit(oldp+62,(vlSelf->top_ysyx_24110017__DOT__lbu_w));
        bufp->chgBit(oldp+63,(vlSelf->top_ysyx_24110017__DOT__lhu_w));
        bufp->chgIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
        bufp->chgIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
        bufp->chgIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
        bufp->chgCData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
        bufp->chgBit(oldp+68,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
        bufp->chgBit(oldp+69,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
        bufp->chgBit(oldp+70,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
        bufp->chgBit(oldp+71,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
        bufp->chgBit(oldp+72,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
        bufp->chgIData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr_reg),32);
        bufp->chgIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr_reg),32);
        bufp->chgIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata_reg),32);
        bufp->chgCData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb_reg),8);
        bufp->chgCData(oldp+77,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+78,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid));
        bufp->chgBit(oldp+79,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready));
        bufp->chgBit(oldp+80,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid));
        bufp->chgBit(oldp+81,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready));
        bufp->chgIData(oldp+82,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
        bufp->chgIData(oldp+83,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata),32);
        bufp->chgBit(oldp+84,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
        bufp->chgBit(oldp+85,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready));
        bufp->chgBit(oldp+86,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid));
        bufp->chgBit(oldp+87,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
        bufp->chgBit(oldp+88,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid));
        bufp->chgBit(oldp+89,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready));
        bufp->chgCData(oldp+90,(vlSelf->top_ysyx_24110017__DOT__op),7);
        bufp->chgCData(oldp+91,(vlSelf->top_ysyx_24110017__DOT__rd),5);
        bufp->chgCData(oldp+92,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
        bufp->chgBit(oldp+93,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               | (0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))));
        bufp->chgBit(oldp+94,((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
        bufp->chgIData(oldp+95,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                  ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                  : 0x80000000U)),32);
        bufp->chgIData(oldp+96,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                  ? vlSelf->top_ysyx_24110017__DOT__r2
                                  : 0U)),32);
        bufp->chgIData(oldp+97,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                  ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                  : 0x80000000U)),32);
        bufp->chgBit(oldp+98,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
        bufp->chgBit(oldp+99,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
        bufp->chgBit(oldp+100,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                & (2U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
        bufp->chgBit(oldp+101,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                & (4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
        bufp->chgBit(oldp+102,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                & (5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
        bufp->chgCData(oldp+103,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                   & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                   ? 1U : (((0x23U 
                                             == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                            & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                            ? 3U : 
                                           (((0x23U 
                                              == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                             & (2U 
                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                             ? 0xfU
                                             : 0U)))),8);
        bufp->chgIData(oldp+104,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
        bufp->chgIData(oldp+105,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                   ? vlSelf->top_ysyx_24110017__DOT__r2
                                   : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
        bufp->chgBit(oldp+106,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+107,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
        bufp->chgBit(oldp+108,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+109,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
        bufp->chgBit(oldp+110,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
        bufp->chgBit(oldp+111,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
        bufp->chgBit(oldp+112,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
        bufp->chgBit(oldp+113,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
        bufp->chgBit(oldp+114,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
        bufp->chgIData(oldp+115,(vlSelf->top_ysyx_24110017__DOT__r2),32);
        bufp->chgBit(oldp+116,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state));
        bufp->chgBit(oldp+117,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res));
        bufp->chgIData(oldp+118,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
        bufp->chgIData(oldp+119,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
        bufp->chgIData(oldp+120,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
        bufp->chgBit(oldp+121,((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
        bufp->chgBit(oldp+122,((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
        bufp->chgBit(oldp+123,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
        bufp->chgBit(oldp+124,(((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                | ((0x17U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                   | ((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                      | ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         | ((0x13U 
                                             == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                            | ((0xfU 
                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                               | ((0x73U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                  | (0x33U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))))))))));
        bufp->chgIData(oldp+125,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm),32);
        bufp->chgBit(oldp+126,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state));
        bufp->chgCData(oldp+127,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state),2);
        bufp->chgCData(oldp+128,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
        bufp->chgBit(oldp+129,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start));
        bufp->chgBit(oldp+130,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
        bufp->chgBit(oldp+131,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
        bufp->chgIData(oldp+132,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    }
    bufp->chgBit(oldp+133,(vlSelf->clk));
    bufp->chgBit(oldp+134,(vlSelf->rst));
    bufp->chgIData(oldp+135,(vlSelf->pc),32);
    bufp->chgIData(oldp+136,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+137,(vlSelf->inst),32);
    bufp->chgBit(oldp+138,(vlSelf->DIFFTEST));
    bufp->chgIData(oldp+139,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->chgIData(oldp+140,((vlSelf->top_ysyx_24110017__DOT__res 
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
    bufp->chgCData(oldp+141,(((IData)(vlSelf->top_ysyx_24110017__DOT__l_rd) 
                              | (IData)(vlSelf->top_ysyx_24110017__DOT__rd))),5);
    bufp->chgBit(oldp+142,(((IData)(vlSelf->top_ysyx_24110017__DOT__gpr_wen) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__l_wen))));
    bufp->chgBit(oldp+143,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state));
    bufp->chgCData(oldp+144,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+145,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->inst)) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelf->inst)) 
                                     | ((3U == (0x7fU 
                                                & vlSelf->inst)) 
                                        | ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->inst)) 
                                           | ((0xfU 
                                               == (0x7fU 
                                                   & vlSelf->inst)) 
                                              | ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 | (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst)))))))))
                               ? (0x1fU & (vlSelf->inst 
                                           >> 7U)) : 0U)),5);
    bufp->chgCData(oldp+146,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+147,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                               ? (0x1fU & (vlSelf->inst 
                                           >> 0xfU))
                               : 0U)),5);
    bufp->chgCData(oldp+148,((0x1fU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
                                        ? (vlSelf->inst 
                                           >> 0x14U)
                                        : ((IData)(
                                                   ((0x73U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst)) 
                                                    & (0U 
                                                       == vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm)))
                                            ? 0xfU : 0U)))),5);
    bufp->chgIData(oldp+149,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+150,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+151,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+152,((((- (IData)((vlSelf->inst 
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
    bufp->chgIData(oldp+153,((((- (IData)((vlSelf->inst 
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
    bufp->chgCData(oldp+154,((((0x33U == (0x7fU & vlSelf->inst)) 
                               | (0x13U == (0x7fU & vlSelf->inst)))
                               ? (vlSelf->inst >> 0x19U)
                               : 0U)),7);
    bufp->chgCData(oldp+155,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+156,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->chgCData(oldp+157,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->chgBit(oldp+158,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->chgIData(oldp+159,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
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
