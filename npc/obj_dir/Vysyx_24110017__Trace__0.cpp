// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24110017__Syms.h"


void Vysyx_24110017___024root__trace_chg_sub_0(Vysyx_24110017___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24110017___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110017___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_24110017___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24110017___024root*>(voidSelf);
    Vysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24110017___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24110017___024root__trace_chg_sub_0(Vysyx_24110017___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110017___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->ysyx_24110017__DOT__PCU__DOT__pcu_valid));
        bufp->chgBit(oldp+1,(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_ready));
        bufp->chgIData(oldp+2,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arlen),8);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arid),4);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arsize),4);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arburst),3);
        bufp->chgBit(oldp+7,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_rready));
        bufp->chgCData(oldp+9,(vlSelf->ysyx_24110017__DOT__rd),5);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_24110017__DOT__rs1),5);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_24110017__DOT__rs2),5);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_24110017__DOT__imm),32);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_24110017__DOT__funct7),7);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_24110017__DOT__shamt),5);
        bufp->chgBit(oldp+15,(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_valid));
        bufp->chgBit(oldp+16,(vlSelf->ysyx_24110017__DOT__WBU__DOT__wbu_ready));
        bufp->chgIData(oldp+17,(vlSelf->ysyx_24110017__DOT__res),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_24110017__DOT__mepc),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_24110017__DOT__o_mepc),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_24110017__DOT__mstatus),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_24110017__DOT__o_mstatus),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_24110017__DOT__mcause),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_24110017__DOT__o_mcause),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_24110017__DOT__mtvec),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_24110017__DOT__o_mtvec),32);
        bufp->chgBit(oldp+26,(vlSelf->ysyx_24110017__DOT__gpr_wen));
        bufp->chgBit(oldp+27,(vlSelf->ysyx_24110017__DOT__mepc_wen));
        bufp->chgBit(oldp+28,(vlSelf->ysyx_24110017__DOT__mstatus_wen));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_24110017__DOT__mcause_wen));
        bufp->chgBit(oldp+30,(vlSelf->ysyx_24110017__DOT__mtvec_wen));
        bufp->chgIData(oldp+31,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_awready),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_arready),32);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp),4);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp),4);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid),2);
        bufp->chgBit(oldp+36,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid));
        bufp->chgBit(oldp+37,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bid))));
        bufp->chgBit(oldp+38,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rid))));
        bufp->chgBit(oldp+39,((1U & vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rdata)));
        bufp->chgBit(oldp+40,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready));
        bufp->chgBit(oldp+41,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rlast));
        bufp->chgIData(oldp+42,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_awready),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_arready),32);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp),4);
        bufp->chgCData(oldp+45,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp),4);
        bufp->chgCData(oldp+46,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid),2);
        bufp->chgBit(oldp+47,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid));
        bufp->chgBit(oldp+48,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bid))));
        bufp->chgBit(oldp+49,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rid))));
        bufp->chgBit(oldp+50,((1U & vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rdata)));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rlast));
        bufp->chgIData(oldp+53,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_awready),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_arready),32);
        bufp->chgCData(oldp+55,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),4);
        bufp->chgCData(oldp+56,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),4);
        bufp->chgCData(oldp+57,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid),2);
        bufp->chgBit(oldp+58,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
        bufp->chgBit(oldp+59,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bid))));
        bufp->chgBit(oldp+60,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rid))));
        bufp->chgBit(oldp+61,((1U & vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rdata)));
        bufp->chgBit(oldp+62,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_24110017__DOT__wbu_done));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_24110017__DOT__difftest));
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24110017__DOT__xrd),32);
        bufp->chgCData(oldp+67,(vlSelf->ysyx_24110017__DOT__rf_addr),5);
        bufp->chgBit(oldp+68,(vlSelf->ysyx_24110017__DOT__rf_wen));
        bufp->chgIData(oldp+69,(vlSelf->ysyx_24110017__DOT__w_mepc),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_24110017__DOT__w_mstatus),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_24110017__DOT__w_mcause),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_24110017__DOT__w_mtvec),32);
        bufp->chgBit(oldp+73,(vlSelf->ysyx_24110017__DOT__mepc_en));
        bufp->chgBit(oldp+74,(vlSelf->ysyx_24110017__DOT__mstatus_en));
        bufp->chgBit(oldp+75,(vlSelf->ysyx_24110017__DOT__mcause_en));
        bufp->chgBit(oldp+76,(vlSelf->ysyx_24110017__DOT__mtvec_en));
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24110017__DOT__r1),32);
        bufp->chgCData(oldp+78,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arsize),3);
        bufp->chgCData(oldp+79,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arburst),2);
        bufp->chgCData(oldp+80,(vlSelf->ysyx_24110017__DOT__IFU__DOT__state),2);
        bufp->chgBit(oldp+81,(vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_start));
        bufp->chgBit(oldp+82,(vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
        bufp->chgBit(oldp+83,(vlSelf->ysyx_24110017__DOT__PCU__DOT__state));
        bufp->chgIData(oldp+84,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
        bufp->chgCData(oldp+116,(vlSelf->ysyx_24110017__DOT__WBU__DOT__state),2);
        bufp->chgBit(oldp+117,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
        bufp->chgCData(oldp+118,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
        bufp->chgCData(oldp+119,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
        bufp->chgBit(oldp+120,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
        bufp->chgBit(oldp+121,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
        bufp->chgCData(oldp+122,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
        bufp->chgCData(oldp+124,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
        bufp->chgQData(oldp+126,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
        bufp->chgIData(oldp+128,((((- (IData)((vlSelf->ysyx_24110017__DOT__C_AXI_RDATA 
                                               & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid)))) 
                                   & ((- (IData)((0xa0000048U 
                                                  == vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                      & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                                  | ((- (IData)((0xa000004cU 
                                                 == vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                     & (IData)((vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                                >> 0x20U))))),32);
        bufp->chgBit(oldp+129,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_awready));
        bufp->chgCData(oldp+130,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bid),4);
        bufp->chgCData(oldp+131,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp),2);
        bufp->chgBit(oldp+132,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_arready));
        bufp->chgBit(oldp+133,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid));
        bufp->chgCData(oldp+134,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rid),4);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rdata),32);
        bufp->chgCData(oldp+136,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp),2);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_araddr),32);
        bufp->chgBit(oldp+138,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_wen));
        bufp->chgIData(oldp+139,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_rdata),32);
        bufp->chgBit(oldp+140,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_awready));
        bufp->chgCData(oldp+141,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bid),4);
        bufp->chgCData(oldp+142,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp),2);
        bufp->chgBit(oldp+143,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_arready));
        bufp->chgBit(oldp+144,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid));
        bufp->chgCData(oldp+145,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rid),4);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rdata),32);
        bufp->chgCData(oldp+147,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp),2);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_araddr),32);
        bufp->chgBit(oldp+149,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__ureg_wen));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+150,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & (vlSelf->ysyx_24110017__DOT__r1 
                                      == vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+151,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & (vlSelf->ysyx_24110017__DOT__r1 
                                      != vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+152,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((4U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & VL_LTS_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+153,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((5U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & VL_GTES_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+154,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((6U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & (vlSelf->ysyx_24110017__DOT__r1 
                                      < vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+155,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((7U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & (vlSelf->ysyx_24110017__DOT__r1 
                                      >= vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+156,(((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((0x302U == vlSelf->ysyx_24110017__DOT__imm) 
                                   & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+157,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
        bufp->chgIData(oldp+159,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
        bufp->chgCData(oldp+160,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb),4);
        bufp->chgBit(oldp+161,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
        bufp->chgBit(oldp+162,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
        bufp->chgBit(oldp+163,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready));
        bufp->chgBit(oldp+164,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
        bufp->chgBit(oldp+165,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready));
        bufp->chgCData(oldp+166,(vlSelf->ysyx_24110017__DOT__LSU__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+167,(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_valid));
        bufp->chgBit(oldp+168,(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_ready));
        bufp->chgBit(oldp+169,(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_valid));
        bufp->chgBit(oldp+170,(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_ready));
        bufp->chgCData(oldp+171,(vlSelf->ysyx_24110017__DOT__op),7);
        bufp->chgCData(oldp+172,(vlSelf->ysyx_24110017__DOT__funct3),3);
        bufp->chgBit(oldp+173,(vlSelf->ysyx_24110017__DOT__sram_lsu_read));
        bufp->chgBit(oldp+174,(vlSelf->ysyx_24110017__DOT__sram_lsu_write));
        bufp->chgBit(oldp+175,(vlSelf->ysyx_24110017__DOT__ls_valid));
        bufp->chgBit(oldp+176,((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))));
        bufp->chgIData(oldp+177,(((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                   ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                   : 0x80000000U)),32);
        bufp->chgIData(oldp+178,(((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                   ? vlSelf->ysyx_24110017__DOT__r2
                                   : 0U)),32);
        bufp->chgIData(oldp+179,(((3U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                   ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                   : 0x80000000U)),32);
        bufp->chgCData(oldp+180,((((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                   & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                   ? 1U : (((0x23U 
                                             == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                            & (1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                            ? 3U : 
                                           (((0x23U 
                                              == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                             & (2U 
                                                == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                             ? 0xfU
                                             : 0U)))),4);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_24110017__DOT__r2),32);
        bufp->chgCData(oldp+182,(vlSelf->ysyx_24110017__DOT__EXU__DOT__state),2);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_24110017__DOT__EXU__DOT__a),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_24110017__DOT__EXU__DOT__b),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_24110017__DOT__EXU__DOT__csr),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs),32);
        bufp->chgIData(oldp+187,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                   ? vlSelf->ysyx_24110017__DOT__r2
                                   : vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
        bufp->chgBit(oldp+188,((0x6fU == (IData)(vlSelf->ysyx_24110017__DOT__op))));
        bufp->chgBit(oldp+189,((0x67U == (IData)(vlSelf->ysyx_24110017__DOT__op))));
        bufp->chgBit(oldp+190,(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en));
        bufp->chgBit(oldp+191,(((0x37U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                | ((0x17U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                   | ((0x6fU == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                      | ((0x67U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                         | ((0x13U 
                                             == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                            | ((0xfU 
                                                == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                               | ((0x73U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                  | ((0x33U 
                                                      == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                     | (3U 
                                                        == (IData)(vlSelf->ysyx_24110017__DOT__op))))))))))));
        bufp->chgBit(oldp+192,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                                | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+193,(vlSelf->ysyx_24110017__DOT__EXU__DOT__mstatus_wen));
        bufp->chgBit(oldp+194,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                                | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+195,(vlSelf->ysyx_24110017__DOT__EXU__DOT__mtvec_wen));
        bufp->chgIData(oldp+196,(vlSelf->ysyx_24110017__DOT__IDU__DOT__imm),32);
        bufp->chgBit(oldp+197,(vlSelf->ysyx_24110017__DOT__IDU__DOT__state));
        bufp->chgCData(oldp+198,(vlSelf->ysyx_24110017__DOT__IFU__DOT__current_state),2);
        bufp->chgCData(oldp+199,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+200,((((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                   | (0U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)))
                                   ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                   : 0U)),32);
        bufp->chgCData(oldp+201,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                       : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                           : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_BRESP)))
                                   : 0U)),2);
        bufp->chgBit(oldp+202,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
        bufp->chgBit(oldp+203,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_WREADY))))));
        bufp->chgBit(oldp+204,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
        bufp->chgIData(oldp+205,(((IData)(vlSelf->__VdfgTmp_h9f8b16d6__0)
                                   ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                   : 0U)),32);
        bufp->chgCData(oldp+206,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                       : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                           : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_BRESP)))
                                   : 0U)),2);
        bufp->chgBit(oldp+207,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
        bufp->chgBit(oldp+208,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_WREADY))))));
        bufp->chgBit(oldp+209,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+210,(vlSelf->ysyx_24110017__DOT__IFU_AXI_RVALID));
        bufp->chgBit(oldp+211,(vlSelf->ysyx_24110017__DOT__LSU_AXI_BVALID));
        bufp->chgBit(oldp+212,(vlSelf->ysyx_24110017__DOT__LSU_AXI_RVALID));
        bufp->chgIData(oldp+213,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7e9dd1a3__0[0U]),32);
        bufp->chgCData(oldp+214,((0xfU & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                           ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                              << 8U)
                                           : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                               ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                                  << 4U)
                                               : (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB))))),4);
        bufp->chgBit(oldp+215,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0))));
        bufp->chgBit(oldp+216,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0))));
        bufp->chgIData(oldp+217,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7e9dd1a3__0[2U]),32);
        bufp->chgCData(oldp+218,((0xfU & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                            ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                               << 8U)
                                            : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                                   << 4U)
                                                : (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB))) 
                                          >> 8U))),4);
        bufp->chgBit(oldp+219,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+220,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0) 
                                      >> 2U))));
        bufp->chgIData(oldp+221,(vlSelf->ysyx_24110017__DOT__EXU__DOT__res),32);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
        bufp->chgIData(oldp+224,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
        bufp->chgIData(oldp+225,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
        bufp->chgCData(oldp+226,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
        bufp->chgCData(oldp+227,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                   ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                   : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                       : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_BRESP)))),2);
        bufp->chgBit(oldp+228,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
        bufp->chgBit(oldp+229,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY));
        bufp->chgBit(oldp+230,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_WREADY)))));
        bufp->chgBit(oldp+231,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
        bufp->chgBit(oldp+232,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
        bufp->chgBit(oldp+233,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
        bufp->chgBit(oldp+234,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart));
        bufp->chgBit(oldp+235,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
        bufp->chgBit(oldp+236,((1U & vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7e9dd1a3__0[0U])));
        bufp->chgIData(oldp+237,((0xfU & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                           ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                              << 8U)
                                           : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                               ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                                  << 4U)
                                               : (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB))))),32);
        bufp->chgBit(oldp+238,((1U & vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7e9dd1a3__0[2U])));
        bufp->chgIData(oldp+239,((0xfU & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                            ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                               << 8U)
                                            : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                                   << 4U)
                                                : (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB))) 
                                          >> 8U))),32);
    }
    bufp->chgBit(oldp+240,(vlSelf->clk));
    bufp->chgBit(oldp+241,(vlSelf->rst));
    bufp->chgIData(oldp+242,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+243,(vlSelf->pc),32);
    bufp->chgIData(oldp+244,(vlSelf->inst),32);
    bufp->chgCData(oldp+245,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                               ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                   ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                   : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                       : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid)))
                               : 0U)),2);
    bufp->chgBit(oldp+246,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                            & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                    : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid))))));
    bufp->chgBit(oldp+247,(vlSelf->ysyx_24110017__DOT__LSU_DONE));
    bufp->chgCData(oldp+248,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                               ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                   ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                   : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                       : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid)))
                               : 0U)),2);
    bufp->chgBit(oldp+249,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                   ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                       & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                      << 2U) : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                 ? 
                                                (((1U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                  & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                                 << 1U)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                 & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)))))));
    bufp->chgBit(oldp+250,((1U & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                        & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                       << 2U) : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                  ? 
                                                 (((1U 
                                                    == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                   & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                                  << 1U)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                  & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)))) 
                                  >> 2U))));
    bufp->chgCData(oldp+251,(vlSelf->ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->chgIData(oldp+252,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->chgCData(oldp+253,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+254,((((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->chgCData(oldp+255,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+256,((((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                               | (IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                               ? (0x1fU & (vlSelf->inst 
                                           >> 0xfU))
                               : 0U)),5);
    bufp->chgCData(oldp+257,((0x1fU & ((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
                                        ? (vlSelf->inst 
                                           >> 0x14U)
                                        : ((IData)(
                                                   ((0x73U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst)) 
                                                    & (0U 
                                                       == vlSelf->ysyx_24110017__DOT__IDU__DOT__imm)))
                                            ? 0xfU : 0U)))),5);
    bufp->chgIData(oldp+258,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+259,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+260,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+261,((((- (IData)((vlSelf->inst 
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
    bufp->chgIData(oldp+262,((((- (IData)((vlSelf->inst 
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
    bufp->chgCData(oldp+263,((((0x33U == (0x7fU & vlSelf->inst)) 
                               | (0x13U == (0x7fU & vlSelf->inst)))
                               ? (vlSelf->inst >> 0x19U)
                               : 0U)),7);
    bufp->chgCData(oldp+264,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+265,(vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->chgCData(oldp+266,(vlSelf->ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->chgBit(oldp+267,(vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->chgCData(oldp+268,(vlSelf->ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->chgCData(oldp+269,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                               ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                               : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                   ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                   : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid)))),2);
    bufp->chgBit(oldp+270,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                            & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid))));
    bufp->chgBit(oldp+271,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                             ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                             : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                 : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid)))));
    bufp->chgBit(oldp+272,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                            & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready))));
    bufp->chgBit(oldp+273,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                             ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready)
                             : ((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_rready)))));
    bufp->chgCData(oldp+274,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->chgCData(oldp+275,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                     ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                         & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                        << 2U) : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                   ? 
                                                  (((1U 
                                                     == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                    & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                                   << 1U)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                   & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)))))),4);
    bufp->chgCData(oldp+276,((1U & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                      ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                          & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                         << 2U) : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                    ? 
                                                   (((1U 
                                                      == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                     & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                                    << 1U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                    & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)))) 
                                    >> 2U))),4);
}

void Vysyx_24110017___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110017___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24110017___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24110017___024root*>(voidSelf);
    Vysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
