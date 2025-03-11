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
        bufp->chgBit(oldp+0,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid));
        bufp->chgBit(oldp+1,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready));
        bufp->chgIData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
        bufp->chgBit(oldp+3,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
        bufp->chgBit(oldp+4,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
        bufp->chgCData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__rd),5);
        bufp->chgCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
        bufp->chgCData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
        bufp->chgIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__imm),32);
        bufp->chgCData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
        bufp->chgCData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__shamt),5);
        bufp->chgBit(oldp+11,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid));
        bufp->chgBit(oldp+12,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready));
        bufp->chgIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__res),32);
        bufp->chgIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
        bufp->chgIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__o_mepc),32);
        bufp->chgIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
        bufp->chgIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
        bufp->chgIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
        bufp->chgIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__o_mcause),32);
        bufp->chgIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
        bufp->chgIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__o_mtvec),32);
        bufp->chgBit(oldp+22,(vlSelf->top_ysyx_24110017__DOT__gpr_wen));
        bufp->chgBit(oldp+23,(vlSelf->top_ysyx_24110017__DOT__mepc_wen));
        bufp->chgBit(oldp+24,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
        bufp->chgBit(oldp+25,(vlSelf->top_ysyx_24110017__DOT__mcause_wen));
        bufp->chgBit(oldp+26,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
        bufp->chgCData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp),2);
        bufp->chgBit(oldp+28,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready));
        bufp->chgBit(oldp+29,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid));
        bufp->chgBit(oldp+30,(vlSelf->top_ysyx_24110017__DOT__wbu_done));
        bufp->chgBit(oldp+31,(vlSelf->top_ysyx_24110017__DOT__difftest));
        bufp->chgIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__xrd),32);
        bufp->chgCData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__rf_addr),5);
        bufp->chgBit(oldp+34,(vlSelf->top_ysyx_24110017__DOT__rf_wen));
        bufp->chgIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__w_mepc),32);
        bufp->chgIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__w_mstatus),32);
        bufp->chgIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__w_mcause),32);
        bufp->chgIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__w_mtvec),32);
        bufp->chgBit(oldp+39,(vlSelf->top_ysyx_24110017__DOT__mepc_en));
        bufp->chgBit(oldp+40,(vlSelf->top_ysyx_24110017__DOT__mstatus_en));
        bufp->chgBit(oldp+41,(vlSelf->top_ysyx_24110017__DOT__mcause_en));
        bufp->chgBit(oldp+42,(vlSelf->top_ysyx_24110017__DOT__mtvec_en));
        bufp->chgIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__r1),32);
        bufp->chgCData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
        bufp->chgBit(oldp+45,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start));
        bufp->chgBit(oldp+46,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
        bufp->chgCData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter),8);
        bufp->chgBit(oldp+48,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
        bufp->chgIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
        bufp->chgIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
        bufp->chgIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
        bufp->chgIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
        bufp->chgIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
        bufp->chgIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
        bufp->chgIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
        bufp->chgIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
        bufp->chgIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
        bufp->chgIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
        bufp->chgIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
        bufp->chgIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
        bufp->chgIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
        bufp->chgIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
        bufp->chgIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
        bufp->chgIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
        bufp->chgIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
        bufp->chgIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
        bufp->chgIData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
        bufp->chgIData(oldp+69,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
        bufp->chgIData(oldp+70,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
        bufp->chgIData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
        bufp->chgIData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
        bufp->chgIData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
        bufp->chgIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
        bufp->chgIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
        bufp->chgIData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
        bufp->chgIData(oldp+77,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
        bufp->chgIData(oldp+78,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
        bufp->chgIData(oldp+79,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
        bufp->chgIData(oldp+80,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
        bufp->chgCData(oldp+81,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rresp),2);
        bufp->chgBit(oldp+82,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen));
        bufp->chgCData(oldp+83,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+84,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                  ? (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp)
                                  : 0U)),2);
        bufp->chgBit(oldp+85,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                               & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready))));
        bufp->chgBit(oldp+86,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                               & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid))));
        bufp->chgCData(oldp+87,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                  ? (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp)
                                  : 0U)),2);
        bufp->chgBit(oldp+88,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     == vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+89,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     != vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+90,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+91,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+92,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     < vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+93,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     >= vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+94,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                                  & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+95,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
        bufp->chgIData(oldp+96,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
        bufp->chgIData(oldp+97,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
        bufp->chgCData(oldp+98,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
        bufp->chgBit(oldp+99,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
        bufp->chgBit(oldp+100,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
        bufp->chgBit(oldp+101,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
        bufp->chgBit(oldp+102,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
        bufp->chgBit(oldp+103,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
        bufp->chgCData(oldp+104,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay),8);
        bufp->chgBit(oldp+105,((1U & VL_REDXOR_8((0xb8U 
                                                  & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay))))));
        bufp->chgCData(oldp+106,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter),8);
        bufp->chgCData(oldp+107,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter),8);
        bufp->chgCData(oldp+108,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter),8);
        bufp->chgCData(oldp+109,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+110,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid));
        bufp->chgBit(oldp+111,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready));
        bufp->chgIData(oldp+112,((((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                                   | (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)))
                                   ? vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata
                                   : 0U)),32);
        bufp->chgCData(oldp+113,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_RRESP)
                                   : 0U)),2);
        bufp->chgBit(oldp+114,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready))));
        bufp->chgBit(oldp+115,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready))));
        bufp->chgBit(oldp+116,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_RVALID));
        bufp->chgBit(oldp+117,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid));
        bufp->chgBit(oldp+118,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready));
        bufp->chgCData(oldp+119,(vlSelf->top_ysyx_24110017__DOT__op),7);
        bufp->chgCData(oldp+120,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
        bufp->chgBit(oldp+121,(vlSelf->top_ysyx_24110017__DOT__sram_lsu_read));
        bufp->chgBit(oldp+122,(vlSelf->top_ysyx_24110017__DOT__sram_lsu_write));
        bufp->chgBit(oldp+123,(vlSelf->top_ysyx_24110017__DOT__ls_valid));
        bufp->chgBit(oldp+124,((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
        bufp->chgIData(oldp+125,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                   ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                   : 0x80000000U)),32);
        bufp->chgIData(oldp+126,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                   ? vlSelf->top_ysyx_24110017__DOT__r2
                                   : 0U)),32);
        bufp->chgIData(oldp+127,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                   ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                   : 0x80000000U)),32);
        bufp->chgCData(oldp+128,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
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
        bufp->chgIData(oldp+129,(((IData)(vlSelf->__VdfgTmp_h4120b2cc__0)
                                   ? vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata
                                   : 0U)),32);
        bufp->chgCData(oldp+130,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_RRESP)
                                   : 0U)),2);
        bufp->chgBit(oldp+131,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY));
        bufp->chgBit(oldp+132,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready))));
        bufp->chgBit(oldp+133,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID));
        bufp->chgBit(oldp+134,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready))));
        bufp->chgBit(oldp+135,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RVALID));
        bufp->chgIData(oldp+136,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata),32);
        bufp->chgBit(oldp+137,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready));
        bufp->chgBit(oldp+138,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready));
        bufp->chgBit(oldp+139,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid));
        bufp->chgIData(oldp+140,(vlSelf->top_ysyx_24110017__DOT__r2),32);
        bufp->chgCData(oldp+141,(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state),2);
        bufp->chgCData(oldp+142,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state),2);
        bufp->chgIData(oldp+143,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
        bufp->chgIData(oldp+144,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
        bufp->chgIData(oldp+145,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res),32);
        bufp->chgIData(oldp+146,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
        bufp->chgIData(oldp+147,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs),32);
        bufp->chgIData(oldp+148,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                   ? vlSelf->top_ysyx_24110017__DOT__r2
                                   : vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
        bufp->chgBit(oldp+149,((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
        bufp->chgBit(oldp+150,((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
        bufp->chgBit(oldp+151,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
        bufp->chgBit(oldp+152,(((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                | ((0x17U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                   | ((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                      | ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         | ((0x13U 
                                             == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                            | ((0xfU 
                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                               | ((0x73U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                  | ((0x33U 
                                                      == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                     | (3U 
                                                        == (IData)(vlSelf->top_ysyx_24110017__DOT__op))))))))))));
        bufp->chgBit(oldp+153,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+154,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mstatus_wen));
        bufp->chgBit(oldp+155,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+156,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mtvec_wen));
        bufp->chgIData(oldp+157,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm),32);
        bufp->chgBit(oldp+158,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state));
        bufp->chgCData(oldp+159,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state),2);
        bufp->chgIData(oldp+160,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[0]),32);
        bufp->chgIData(oldp+161,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[1]),32);
        bufp->chgIData(oldp+162,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[2]),32);
        bufp->chgIData(oldp+163,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[3]),32);
        bufp->chgIData(oldp+164,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[4]),32);
        bufp->chgIData(oldp+165,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[5]),32);
        bufp->chgIData(oldp+166,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[6]),32);
        bufp->chgIData(oldp+167,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[7]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+168,(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR),32);
        bufp->chgBit(oldp+169,(vlSelf->top_ysyx_24110017__DOT__S_AXI_AWVALID));
        bufp->chgBit(oldp+170,(vlSelf->top_ysyx_24110017__DOT__S_AXI_WVALID));
        bufp->chgBit(oldp+171,(vlSelf->top_ysyx_24110017__DOT__S_AXI_BREADY));
        bufp->chgBit(oldp+172,(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARVALID));
        bufp->chgBit(oldp+173,(vlSelf->top_ysyx_24110017__DOT__S_AXI_RREADY));
        bufp->chgCData(oldp+174,((0xfU & vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR)),4);
    }
    bufp->chgBit(oldp+175,(vlSelf->clk));
    bufp->chgBit(oldp+176,(vlSelf->rst));
    bufp->chgIData(oldp+177,(vlSelf->pc),32);
    bufp->chgIData(oldp+178,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+179,(vlSelf->inst),32);
    bufp->chgBit(oldp+180,(vlSelf->DIFFTEST));
    bufp->chgBit(oldp+181,(vlSelf->top_ysyx_24110017__DOT__LSU_DONE));
    bufp->chgIData(oldp+182,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                               ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr
                               : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                   ? vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR
                                   : 0U))),32);
    bufp->chgIData(oldp+183,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                               ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata
                               : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                   ? vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA
                                   : 0U))),32);
    bufp->chgCData(oldp+184,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                               ? (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                               : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                   : 0U))),8);
    bufp->chgCData(oldp+185,(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state),2);
    bufp->chgCData(oldp+186,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->chgIData(oldp+187,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->chgCData(oldp+188,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+189,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->chgCData(oldp+190,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+191,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                               ? (0x1fU & (vlSelf->inst 
                                           >> 0xfU))
                               : 0U)),5);
    bufp->chgCData(oldp+192,((0x1fU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->chgIData(oldp+193,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+194,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+195,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+196,((((- (IData)((vlSelf->inst 
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
    bufp->chgIData(oldp+197,((((- (IData)((vlSelf->inst 
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
    bufp->chgCData(oldp+198,((((0x33U == (0x7fU & vlSelf->inst)) 
                               | (0x13U == (0x7fU & vlSelf->inst)))
                               ? (vlSelf->inst >> 0x19U)
                               : 0U)),7);
    bufp->chgCData(oldp+199,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+200,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->chgCData(oldp+201,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->chgBit(oldp+202,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->chgBit(oldp+203,(((0U != (0xfU & vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR)) 
                            & vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf
                            [(7U & vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR)])));
    bufp->chgCData(oldp+204,((0xfU & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                       ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr
                                       : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                           ? vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR
                                           : 0U)))),4);
    bufp->chgCData(oldp+205,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state),2);
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
