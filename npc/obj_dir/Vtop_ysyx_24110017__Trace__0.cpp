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
        bufp->chgCData(oldp+0,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
        bufp->chgIData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__imm),32);
        bufp->chgCData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
        bufp->chgBit(oldp+3,(vlSelf->top_ysyx_24110017__DOT__wr_en));
        bufp->chgIData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__res),32);
        bufp->chgCData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__raddr2),5);
        bufp->chgIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__r1),32);
        bufp->chgIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__r2),32);
        bufp->chgIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__a),32);
        bufp->chgIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__b),32);
        bufp->chgIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__csrs),32);
        bufp->chgIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__csrs_in),32);
        bufp->chgIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
        bufp->chgIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
        bufp->chgIData(oldp+14,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                                  ? vlSelf->top_ysyx_24110017__DOT__r2
                                  : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
        bufp->chgIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
        bufp->chgIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
        bufp->chgBit(oldp+17,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
        bufp->chgBit(oldp+18,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
        bufp->chgBit(oldp+19,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
        bufp->chgBit(oldp+20,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
        bufp->chgIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_araddr),32);
        bufp->chgIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rdata),32);
        bufp->chgCData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_bresp),2);
        bufp->chgCData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rresp),2);
        bufp->chgBit(oldp+25,(vlSelf->top_ysyx_24110017__DOT__ERROR));
        bufp->chgBit(oldp+26,((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__mst_exec_state))));
        bufp->chgBit(oldp+27,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_awready));
        bufp->chgBit(oldp+28,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_wready));
        bufp->chgBit(oldp+29,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_bvalid));
        bufp->chgBit(oldp+30,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_arvalid));
        bufp->chgBit(oldp+31,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_arready));
        bufp->chgBit(oldp+32,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rvalid));
        bufp->chgBit(oldp+33,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_rready));
        bufp->chgIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
        bufp->chgIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__tmp),32);
        bufp->chgCData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__mst_exec_state),2);
        bufp->chgIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_awaddr),32);
        bufp->chgIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_wdata),32);
        bufp->chgBit(oldp+39,(((IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_rready) 
                               & ((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rvalid) 
                                  & ((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rresp) 
                                     >> 1U)))));
        bufp->chgBit(oldp+40,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__start_single_write));
        bufp->chgBit(oldp+41,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__start_single_read));
        bufp->chgBit(oldp+42,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__write_issued));
        bufp->chgBit(oldp+43,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__read_issued));
        bufp->chgBit(oldp+44,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__writes_done));
        bufp->chgBit(oldp+45,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__reads_done));
        bufp->chgBit(oldp+46,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__error_reg));
        bufp->chgBit(oldp+47,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__last_write));
        bufp->chgBit(oldp+48,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
        bufp->chgBit(oldp+49,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__mst_exec_state)) 
                               & (IData)(vlSelf->top_ysyx_24110017__DOT__wr_en))));
        bufp->chgIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
        bufp->chgIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
        bufp->chgIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
        bufp->chgIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
        bufp->chgIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
        bufp->chgIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
        bufp->chgIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
        bufp->chgIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
        bufp->chgIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
        bufp->chgIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
        bufp->chgIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
        bufp->chgIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
        bufp->chgIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
        bufp->chgIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
        bufp->chgIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
        bufp->chgIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
        bufp->chgIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
        bufp->chgIData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
        bufp->chgIData(oldp+69,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
        bufp->chgIData(oldp+70,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
        bufp->chgIData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
        bufp->chgIData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
        bufp->chgIData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
        bufp->chgIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
        bufp->chgIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
        bufp->chgIData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
        bufp->chgIData(oldp+77,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
        bufp->chgIData(oldp+78,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
        bufp->chgIData(oldp+79,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
        bufp->chgIData(oldp+80,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
        bufp->chgIData(oldp+81,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
        bufp->chgIData(oldp+82,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_awaddr),32);
        bufp->chgIData(oldp+83,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_araddr),32);
        bufp->chgBit(oldp+84,(((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_arready) 
                               & ((~ (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rvalid)) 
                                  & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_arvalid)))));
        bufp->chgIData(oldp+85,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__reg_data_out),32);
        bufp->chgBit(oldp+86,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__aw_en));
    }
    bufp->chgBit(oldp+87,(vlSelf->clk));
    bufp->chgBit(oldp+88,(vlSelf->rst));
    bufp->chgIData(oldp+89,(vlSelf->pc),32);
    bufp->chgIData(oldp+90,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+91,(vlSelf->inst),32);
    bufp->chgCData(oldp+92,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+93,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                              ? (0x1fU & (vlSelf->inst 
                                          >> 7U)) : 0U)),5);
    bufp->chgCData(oldp+94,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+95,(((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0)
                              ? (0x1fU & (vlSelf->inst 
                                          >> 0x14U))
                              : 0U)),5);
    bufp->chgCData(oldp+96,((0x1fU & (vlSelf->inst 
                                      >> 0x14U))),5);
    bufp->chgIData(oldp+97,((((3U == (0x7fU & vlSelf->inst)) 
                              | ((0x13U == (0x7fU & vlSelf->inst)) 
                                 | ((0xfU == (0x7fU 
                                              & vlSelf->inst)) 
                                    | ((0x73U == (0x7fU 
                                                  & vlSelf->inst)) 
                                       | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))))
                              ? vlSelf->top_ysyx_24110017__DOT__res
                              : ((0x6fU == (0x7fU & vlSelf->inst))
                                  ? vlSelf->pc : ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))
                                                   ? vlSelf->pc
                                                   : 
                                                  ((0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))
                                                    ? vlSelf->top_ysyx_24110017__DOT__imm
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst))
                                                     ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h9c887a2e__0
                                                     : 0U)))))),32);
    bufp->chgIData(oldp+98,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                              ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->chgBit(oldp+99,(((0x23U == (0x7fU & vlSelf->inst)) 
                           | (3U == (0x7fU & vlSelf->inst)))));
    bufp->chgBit(oldp+100,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->chgIData(oldp+101,(((3U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->chgIData(oldp+102,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->chgIData(oldp+103,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : 0U)),32);
    bufp->chgCData(oldp+104,(((IData)((0x23U == (0x707fU 
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
    bufp->chgIData(oldp+105,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+106,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+107,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+108,((((- (IData)((vlSelf->inst 
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
    bufp->chgIData(oldp+109,((((- (IData)((vlSelf->inst 
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
    bufp->chgBit(oldp+110,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+111,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+112,((IData)(((0x63U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+113,((IData)(((0x1063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+114,((IData)(((0x4063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+115,((IData)(((0x5063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+116,((IData)(((0x6063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+117,((IData)(((0x7063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+118,((IData)(((0x73U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
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
}
