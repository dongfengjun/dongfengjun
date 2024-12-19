// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_ysyx_24110017__Syms.h"


VL_ATTR_COLD void Vtop_ysyx_24110017___024root__trace_init_sub__TOP__0(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"rst", false,-1);
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"dnpc", false,-1, 31,0);
    tracep->declBus(c+37,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"rst", false,-1);
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"dnpc", false,-1, 31,0);
    tracep->declBus(c+37,"inst", false,-1, 31,0);
    tracep->declBus(c+38,"op", false,-1, 6,0);
    tracep->declBus(c+39,"rd", false,-1, 4,0);
    tracep->declBus(c+40,"funct3", false,-1, 2,0);
    tracep->declBus(c+41,"rs1", false,-1, 4,0);
    tracep->declBus(c+42,"rs2", false,-1, 4,0);
    tracep->declBus(c+43,"imm", false,-1, 31,0);
    tracep->declBus(c+72,"funct7", false,-1, 6,0);
    tracep->declBus(c+44,"shamt", false,-1, 4,0);
    tracep->declBit(c+45,"wr_en", false,-1);
    tracep->declBit(c+46,"jalen", false,-1);
    tracep->declBit(c+47,"jalren", false,-1);
    tracep->declBus(c+48,"res", false,-1, 31,0);
    tracep->declBus(c+41,"raddr1", false,-1, 4,0);
    tracep->declBus(c+42,"raddr2", false,-1, 4,0);
    tracep->declBus(c+49,"r1", false,-1, 31,0);
    tracep->declBus(c+50,"r2", false,-1, 31,0);
    tracep->declBus(c+51,"a", false,-1, 31,0);
    tracep->declBus(c+52,"b", false,-1, 31,0);
    tracep->declBus(c+53,"xrd", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBus(c+51,"a", false,-1, 31,0);
    tracep->declBus(c+52,"b", false,-1, 31,0);
    tracep->declBus(c+40,"sel", false,-1, 2,0);
    tracep->declBus(c+38,"op", false,-1, 6,0);
    tracep->declBus(c+72,"funct7", false,-1, 6,0);
    tracep->declBus(c+44,"shamt", false,-1, 4,0);
    tracep->declBus(c+43,"offset", false,-1, 31,0);
    tracep->declBus(c+49,"r1", false,-1, 31,0);
    tracep->declBus(c+50,"r2", false,-1, 31,0);
    tracep->declBus(c+48,"res", false,-1, 31,0);
    tracep->declBus(c+54,"raddr", false,-1, 31,0);
    tracep->declBus(c+55,"rdata", false,-1, 31,0);
    tracep->declBit(c+56,"valid", false,-1);
    tracep->declBit(c+57,"wen", false,-1);
    tracep->declBus(c+58,"waddr", false,-1, 31,0);
    tracep->declBus(c+59,"wdata", false,-1, 31,0);
    tracep->declBus(c+60,"wmask", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+37,"inst", false,-1, 31,0);
    tracep->declBus(c+38,"op", false,-1, 6,0);
    tracep->declBus(c+39,"rd", false,-1, 4,0);
    tracep->declBus(c+40,"funct3", false,-1, 2,0);
    tracep->declBus(c+41,"rs1", false,-1, 4,0);
    tracep->declBus(c+42,"rs2", false,-1, 4,0);
    tracep->declBus(c+43,"imm", false,-1, 31,0);
    tracep->declBus(c+72,"funct7", false,-1, 6,0);
    tracep->declBus(c+44,"shamt", false,-1, 4,0);
    tracep->declBit(c+45,"wr_en", false,-1);
    tracep->declBus(c+61,"immI", false,-1, 31,0);
    tracep->declBus(c+62,"immU", false,-1, 31,0);
    tracep->declBus(c+63,"immS", false,-1, 31,0);
    tracep->declBus(c+64,"immB", false,-1, 31,0);
    tracep->declBus(c+65,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBit(c+34,"rst", false,-1);
    tracep->declBus(c+38,"op", false,-1, 6,0);
    tracep->declBus(c+40,"funct3", false,-1, 2,0);
    tracep->declBus(c+43,"offset", false,-1, 31,0);
    tracep->declBus(c+49,"r1", false,-1, 31,0);
    tracep->declBus(c+50,"r2", false,-1, 31,0);
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"dnpc", false,-1, 31,0);
    tracep->declBit(c+46,"jalen", false,-1);
    tracep->declBit(c+47,"jalren", false,-1);
    tracep->declBit(c+66,"beqen", false,-1);
    tracep->declBit(c+67,"bneen", false,-1);
    tracep->declBit(c+68,"blten", false,-1);
    tracep->declBit(c+69,"bgeen", false,-1);
    tracep->declBit(c+70,"bltuen", false,-1);
    tracep->declBit(c+71,"bgeuen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+73,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBus(c+53,"wdata", false,-1, 31,0);
    tracep->declBus(c+39,"waddr", false,-1, 4,0);
    tracep->declBit(c+45,"wen", false,-1);
    tracep->declBus(c+41,"raddr1", false,-1, 4,0);
    tracep->declBus(c+49,"r1", false,-1, 31,0);
    tracep->declBus(c+42,"raddr2", false,-1, 4,0);
    tracep->declBus(c+50,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_ysyx_24110017___024root__trace_init_top(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_init_top\n"); );
    // Body
    Vtop_ysyx_24110017___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_ysyx_24110017___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_ysyx_24110017___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_ysyx_24110017___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_ysyx_24110017___024root__trace_register(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_ysyx_24110017___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_ysyx_24110017___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_ysyx_24110017___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_ysyx_24110017___024root__trace_full_sub_0(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_ysyx_24110017___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_full_top_0\n"); );
    // Init
    Vtop_ysyx_24110017___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ysyx_24110017___024root*>(voidSelf);
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_ysyx_24110017___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_ysyx_24110017___024root__trace_full_sub_0(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullBit(oldp+33,(vlSelf->clk));
    bufp->fullBit(oldp+34,(vlSelf->rst));
    bufp->fullIData(oldp+35,(vlSelf->pc),32);
    bufp->fullIData(oldp+36,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+37,(vlSelf->inst),32);
    bufp->fullCData(oldp+38,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+39,((((0x37U == (0x7fU & vlSelf->inst)) 
                               | ((0xbU == (0x7fU & vlSelf->inst)) 
                                  | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hb469f585__0)))
                               ? (0x1fU & (vlSelf->inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+40,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+45,(((0x37U == (0x7fU & vlSelf->inst)) 
                            | ((0x17U == (0x7fU & vlSelf->inst)) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hb469f585__0)))));
    bufp->fullBit(oldp+46,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+47,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__a),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__b),32);
    bufp->fullIData(oldp+53,((((3U == (0x7fU & vlSelf->inst)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->inst)) 
                                  | ((0xfU == (0x7fU 
                                               & vlSelf->inst)) 
                                     | ((0x73U == (0x7fU 
                                                   & vlSelf->inst)) 
                                        | (IData)(vlSelf->__VdfgTmp_hae92e65f__0)))))
                               ? vlSelf->top_ysyx_24110017__DOT__res
                               : ((0x6fU == (0x7fU 
                                             & vlSelf->inst))
                                   ? ((IData)(4U) + vlSelf->pc)
                                   : ((0x37U == (0x7fU 
                                                 & vlSelf->inst))
                                       ? vlSelf->top_ysyx_24110017__DOT__imm
                                       : ((0x17U == 
                                           (0x7fU & vlSelf->inst))
                                           ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                           : 0U))))),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__raddr),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
    bufp->fullBit(oldp+56,(((0x23U == (0x7fU & vlSelf->inst)) 
                            | (3U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+57,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+58,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__raddr
                               : 0U)),32);
    bufp->fullIData(oldp+59,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : 0U)),32);
    bufp->fullSData(oldp+60,((((0x23U == (0x7fU & vlSelf->inst)) 
                               | (0U == (7U & (vlSelf->inst 
                                               >> 0xcU))))
                               ? 1U : (((0x23U == (0x7fU 
                                                   & vlSelf->inst)) 
                                        | (1U == (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))))
                                        ? 3U : (((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 | (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))))
                                                 ? 0xfU
                                                 : 0U)))),9);
    bufp->fullIData(oldp+61,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+62,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+63,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+64,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+65,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+66,((IData)(((0x63U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+67,((IData)(((0x1063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+68,((IData)(((0x4063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+69,((IData)(((0x5063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+70,((IData)(((0x6063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+71,((IData)(((0x7063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullCData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullIData(oldp+73,(5U),32);
    bufp->fullIData(oldp+74,(0x20U),32);
}
