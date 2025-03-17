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
        bufp->chgCData(oldp+5,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arsize),3);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arburst),2);
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
        bufp->chgIData(oldp+31,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rdata),32);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bid),4);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rid),4);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp),2);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp),2);
        bufp->chgBit(oldp+36,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_awready));
        bufp->chgBit(oldp+37,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid));
        bufp->chgBit(oldp+38,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_arready));
        bufp->chgBit(oldp+39,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid));
        bufp->chgBit(oldp+40,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rlast));
        bufp->chgIData(oldp+41,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
        bufp->chgCData(oldp+42,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
        bufp->chgCData(oldp+43,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
        bufp->chgCData(oldp+45,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
        bufp->chgBit(oldp+46,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
        bufp->chgBit(oldp+48,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
        bufp->chgBit(oldp+49,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_24110017__DOT__wbu_done));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_24110017__DOT__difftest));
        bufp->chgIData(oldp+54,(vlSelf->ysyx_24110017__DOT__xrd),32);
        bufp->chgCData(oldp+55,(vlSelf->ysyx_24110017__DOT__rf_addr),5);
        bufp->chgBit(oldp+56,(vlSelf->ysyx_24110017__DOT__rf_wen));
        bufp->chgIData(oldp+57,(vlSelf->ysyx_24110017__DOT__w_mepc),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_24110017__DOT__w_mstatus),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_24110017__DOT__w_mcause),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24110017__DOT__w_mtvec),32);
        bufp->chgBit(oldp+61,(vlSelf->ysyx_24110017__DOT__mepc_en));
        bufp->chgBit(oldp+62,(vlSelf->ysyx_24110017__DOT__mstatus_en));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_24110017__DOT__mcause_en));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_24110017__DOT__mtvec_en));
        bufp->chgIData(oldp+65,(vlSelf->ysyx_24110017__DOT__r1),32);
        bufp->chgCData(oldp+66,(vlSelf->ysyx_24110017__DOT__IFU__DOT__state),2);
        bufp->chgBit(oldp+67,(vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_start));
        bufp->chgBit(oldp+68,(vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
        bufp->chgBit(oldp+69,(vlSelf->ysyx_24110017__DOT__PCU__DOT__state));
        bufp->chgIData(oldp+70,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
        bufp->chgCData(oldp+102,(vlSelf->ysyx_24110017__DOT__WBU__DOT__state),2);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
        bufp->chgQData(oldp+104,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
        bufp->chgIData(oldp+106,((((- (IData)(((IData)(vlSelf->ysyx_24110017__DOT__C_AXI_RREADY) 
                                               & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid)))) 
                                   & ((- (IData)((0xa0000048U 
                                                  == vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                      & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                                  | ((- (IData)((0xa000004cU 
                                                 == vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                     & (IData)((vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                                >> 0x20U))))),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_araddr),32);
        bufp->chgBit(oldp+108,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_wen));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+109,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & (vlSelf->ysyx_24110017__DOT__r1 
                                      == vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+110,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & (vlSelf->ysyx_24110017__DOT__r1 
                                      != vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+111,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((4U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & VL_LTS_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+112,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((5U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & VL_GTES_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+113,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((6U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & (vlSelf->ysyx_24110017__DOT__r1 
                                      < vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+114,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((7U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                   & (vlSelf->ysyx_24110017__DOT__r1 
                                      >= vlSelf->ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+115,(((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & ((0x302U == vlSelf->ysyx_24110017__DOT__imm) 
                                   & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+116,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                       : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                           : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp)))
                                   : 0U)),2);
        bufp->chgCData(oldp+117,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                       : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                           : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp)))
                                   : 0U)),2);
        bufp->chgBit(oldp+118,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid))))));
        bufp->chgCData(oldp+119,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                       : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                           : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp)))
                                   : 0U)),2);
        bufp->chgCData(oldp+120,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                       : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                           : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp)))
                                   : 0U)),2);
        bufp->chgCData(oldp+121,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                   ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                   : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                       : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp)))),2);
        bufp->chgCData(oldp+122,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                   ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                   : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                       : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp)))),2);
        bufp->chgBit(oldp+123,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+124,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
        bufp->chgCData(oldp+127,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb),4);
        bufp->chgBit(oldp+128,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
        bufp->chgBit(oldp+129,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
        bufp->chgBit(oldp+130,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready));
        bufp->chgBit(oldp+131,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
        bufp->chgBit(oldp+132,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready));
        bufp->chgCData(oldp+133,(vlSelf->ysyx_24110017__DOT__LSU__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+134,(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_valid));
        bufp->chgBit(oldp+135,(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_ready));
        bufp->chgBit(oldp+136,(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_valid));
        bufp->chgBit(oldp+137,(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_ready));
        bufp->chgCData(oldp+138,(vlSelf->ysyx_24110017__DOT__op),7);
        bufp->chgCData(oldp+139,(vlSelf->ysyx_24110017__DOT__funct3),3);
        bufp->chgBit(oldp+140,(vlSelf->ysyx_24110017__DOT__sram_lsu_read));
        bufp->chgBit(oldp+141,(vlSelf->ysyx_24110017__DOT__sram_lsu_write));
        bufp->chgBit(oldp+142,(vlSelf->ysyx_24110017__DOT__ls_valid));
        bufp->chgBit(oldp+143,((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))));
        bufp->chgIData(oldp+144,(((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                   ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                   : 0x80000000U)),32);
        bufp->chgIData(oldp+145,(((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                   ? vlSelf->ysyx_24110017__DOT__r2
                                   : 0U)),32);
        bufp->chgIData(oldp+146,(((3U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                   ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                   : 0x80000000U)),32);
        bufp->chgCData(oldp+147,((((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
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
        bufp->chgBit(oldp+148,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready));
        bufp->chgIData(oldp+149,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rdata),32);
        bufp->chgCData(oldp+150,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bid),4);
        bufp->chgCData(oldp+151,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rid),4);
        bufp->chgCData(oldp+152,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp),2);
        bufp->chgCData(oldp+153,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp),2);
        bufp->chgBit(oldp+154,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_awready));
        bufp->chgBit(oldp+155,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready));
        bufp->chgBit(oldp+156,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid));
        bufp->chgBit(oldp+157,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_arready));
        bufp->chgBit(oldp+158,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid));
        bufp->chgBit(oldp+159,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rlast));
        bufp->chgIData(oldp+160,(vlSelf->ysyx_24110017__DOT__r2),32);
        bufp->chgCData(oldp+161,(vlSelf->ysyx_24110017__DOT__EXU__DOT__state),2);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_24110017__DOT__EXU__DOT__a),32);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_24110017__DOT__EXU__DOT__b),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_24110017__DOT__EXU__DOT__csr),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs),32);
        bufp->chgIData(oldp+166,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                   ? vlSelf->ysyx_24110017__DOT__r2
                                   : vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
        bufp->chgBit(oldp+167,((0x6fU == (IData)(vlSelf->ysyx_24110017__DOT__op))));
        bufp->chgBit(oldp+168,((0x67U == (IData)(vlSelf->ysyx_24110017__DOT__op))));
        bufp->chgBit(oldp+169,(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en));
        bufp->chgBit(oldp+170,(((0x37U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
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
        bufp->chgBit(oldp+171,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                                | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+172,(vlSelf->ysyx_24110017__DOT__EXU__DOT__mstatus_wen));
        bufp->chgBit(oldp+173,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                                | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+174,(vlSelf->ysyx_24110017__DOT__EXU__DOT__mtvec_wen));
        bufp->chgIData(oldp+175,(vlSelf->ysyx_24110017__DOT__IDU__DOT__imm),32);
        bufp->chgBit(oldp+176,(vlSelf->ysyx_24110017__DOT__IDU__DOT__state));
        bufp->chgCData(oldp+177,(vlSelf->ysyx_24110017__DOT__IFU__DOT__current_state),2);
        bufp->chgCData(oldp+178,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state),2);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_araddr),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__device_uart_reg),32);
        bufp->chgBit(oldp+181,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__ureg_wen));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+182,((((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                   | (0U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)))
                                   ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                   : 0U)),32);
        bufp->chgBit(oldp+183,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
        bufp->chgBit(oldp+184,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready))))));
        bufp->chgBit(oldp+185,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
        bufp->chgIData(oldp+186,(((IData)(vlSelf->__VdfgTmp_h9f8b16d6__0)
                                   ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                   : 0U)),32);
        bufp->chgBit(oldp+187,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
        bufp->chgBit(oldp+188,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready))))));
        bufp->chgBit(oldp+189,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
        bufp->chgBit(oldp+190,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+191,(vlSelf->ysyx_24110017__DOT__IFU_AXI_RVALID));
        bufp->chgBit(oldp+192,(vlSelf->ysyx_24110017__DOT__LSU_AXI_BVALID));
        bufp->chgBit(oldp+193,(vlSelf->ysyx_24110017__DOT__LSU_AXI_RVALID));
        bufp->chgIData(oldp+194,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                   ? 0U : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                            ? 0U : vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR))),32);
        bufp->chgIData(oldp+195,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                   ? 0U : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                            ? 0U : vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA))),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[0U]),32);
        bufp->chgBit(oldp+197,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0))));
        bufp->chgBit(oldp+198,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0))));
        bufp->chgBit(oldp+199,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0))));
        bufp->chgBit(oldp+200,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0))));
        bufp->chgBit(oldp+201,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0))));
        bufp->chgIData(oldp+202,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                   ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR
                                   : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                       ? (IData)(((QData)((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR)) 
                                                  >> 0x20U))
                                       : 0U))),32);
        bufp->chgIData(oldp+203,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                   ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA
                                   : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                       ? (IData)(((QData)((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA)) 
                                                  >> 0x20U))
                                       : 0U))),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[2U]),32);
        bufp->chgBit(oldp+205,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+206,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+207,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+208,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+209,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0) 
                                      >> 2U))));
        bufp->chgIData(oldp+210,(vlSelf->ysyx_24110017__DOT__EXU__DOT__res),32);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
        bufp->chgIData(oldp+212,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
        bufp->chgIData(oldp+214,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
        bufp->chgBit(oldp+215,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
        bufp->chgBit(oldp+216,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY));
        bufp->chgBit(oldp+217,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
        bufp->chgBit(oldp+218,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
        bufp->chgBit(oldp+219,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
        bufp->chgBit(oldp+220,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
        bufp->chgBit(oldp+221,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
        bufp->chgBit(oldp+222,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
        bufp->chgBit(oldp+223,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart));
        bufp->chgBit(oldp+224,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
        bufp->chgIData(oldp+225,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_rdata),32);
    }
    bufp->chgBit(oldp+226,(vlSelf->clk));
    bufp->chgBit(oldp+227,(vlSelf->rst));
    bufp->chgIData(oldp+228,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+229,(vlSelf->pc),32);
    bufp->chgIData(oldp+230,(vlSelf->inst),32);
    bufp->chgBit(oldp+231,(vlSelf->ysyx_24110017__DOT__LSU_DONE));
    bufp->chgCData(oldp+232,((0xfU & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                       ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                            ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                            : 0U) << 8U)
                                       : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (((1U 
                                                == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                                : 0U) 
                                              << 4U)
                                           : ((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                               ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                               : 0U))))),4);
    bufp->chgCData(oldp+233,((0xfU & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                        ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                             ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                             : 0U) 
                                           << 8U) : 
                                       ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                              ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                              : 0U) 
                                            << 4U) : 
                                        ((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                          ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                          : 0U))) >> 8U))),4);
    bufp->chgCData(oldp+234,(vlSelf->ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->chgIData(oldp+235,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->chgCData(oldp+236,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+237,((((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->chgCData(oldp+238,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+239,((((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                               | (IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                               ? (0x1fU & (vlSelf->inst 
                                           >> 0xfU))
                               : 0U)),5);
    bufp->chgCData(oldp+240,((0x1fU & ((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->chgIData(oldp+241,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+242,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+243,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+244,((((- (IData)((vlSelf->inst 
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
    bufp->chgIData(oldp+245,((((- (IData)((vlSelf->inst 
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
    bufp->chgCData(oldp+246,((((0x33U == (0x7fU & vlSelf->inst)) 
                               | (0x13U == (0x7fU & vlSelf->inst)))
                               ? (vlSelf->inst >> 0x19U)
                               : 0U)),7);
    bufp->chgCData(oldp+247,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+248,(vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->chgCData(oldp+249,(vlSelf->ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->chgBit(oldp+250,(vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->chgCData(oldp+251,(vlSelf->ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->chgCData(oldp+252,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                               ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                               : 0U)),4);
    bufp->chgCData(oldp+253,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
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
