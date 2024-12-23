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
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+70,"pc", false,-1, 31,0);
    tracep->declBus(c+71,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+70,"pc", false,-1, 31,0);
    tracep->declBus(c+71,"dnpc", false,-1, 31,0);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"funct3", false,-1, 2,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+7,"funct7", false,-1, 6,0);
    tracep->declBus(c+8,"shamt", false,-1, 4,0);
    tracep->declBit(c+9,"wr_en", false,-1);
    tracep->declBus(c+10,"inst", false,-1, 31,0);
    tracep->declBit(c+11,"jalen", false,-1);
    tracep->declBit(c+12,"jalren", false,-1);
    tracep->declBus(c+13,"res", false,-1, 31,0);
    tracep->declBus(c+4,"raddr1", false,-1, 4,0);
    tracep->declBus(c+5,"raddr2", false,-1, 4,0);
    tracep->declBus(c+14,"r1", false,-1, 31,0);
    tracep->declBus(c+15,"r2", false,-1, 31,0);
    tracep->declBus(c+16,"a", false,-1, 31,0);
    tracep->declBus(c+17,"b", false,-1, 31,0);
    tracep->declBus(c+72,"xrd", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBus(c+16,"a", false,-1, 31,0);
    tracep->declBus(c+17,"b", false,-1, 31,0);
    tracep->declBus(c+3,"sel", false,-1, 2,0);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+7,"funct7", false,-1, 6,0);
    tracep->declBus(c+8,"shamt", false,-1, 4,0);
    tracep->declBus(c+6,"offset", false,-1, 31,0);
    tracep->declBus(c+14,"r1", false,-1, 31,0);
    tracep->declBus(c+15,"r2", false,-1, 31,0);
    tracep->declBus(c+13,"res", false,-1, 31,0);
    tracep->declBus(c+18,"raddr", false,-1, 31,0);
    tracep->declBus(c+19,"rdata", false,-1, 31,0);
    tracep->declBit(c+20,"valid", false,-1);
    tracep->declBit(c+21,"wen", false,-1);
    tracep->declBus(c+22,"waddr", false,-1, 31,0);
    tracep->declBus(c+23,"wdata", false,-1, 31,0);
    tracep->declBus(c+24,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+10,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"funct3", false,-1, 2,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+7,"funct7", false,-1, 6,0);
    tracep->declBus(c+8,"shamt", false,-1, 4,0);
    tracep->declBit(c+9,"wr_en", false,-1);
    tracep->declBus(c+25,"immI", false,-1, 31,0);
    tracep->declBus(c+26,"immU", false,-1, 31,0);
    tracep->declBus(c+27,"immS", false,-1, 31,0);
    tracep->declBus(c+28,"immB", false,-1, 31,0);
    tracep->declBus(c+29,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBus(c+70,"pc", false,-1, 31,0);
    tracep->declBus(c+10,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+3,"funct3", false,-1, 2,0);
    tracep->declBus(c+6,"offset", false,-1, 31,0);
    tracep->declBus(c+14,"r1", false,-1, 31,0);
    tracep->declBus(c+15,"r2", false,-1, 31,0);
    tracep->declBus(c+70,"pc", false,-1, 31,0);
    tracep->declBus(c+71,"dnpc", false,-1, 31,0);
    tracep->declBit(c+11,"jalen", false,-1);
    tracep->declBit(c+12,"jalren", false,-1);
    tracep->declBit(c+30,"beqen", false,-1);
    tracep->declBit(c+31,"bneen", false,-1);
    tracep->declBit(c+32,"blten", false,-1);
    tracep->declBit(c+33,"bgeen", false,-1);
    tracep->declBit(c+34,"bltuen", false,-1);
    tracep->declBit(c+35,"bgeuen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+73,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBus(c+72,"wdata", false,-1, 31,0);
    tracep->declBus(c+2,"waddr", false,-1, 4,0);
    tracep->declBit(c+9,"wen", false,-1);
    tracep->declBus(c+4,"raddr1", false,-1, 4,0);
    tracep->declBus(c+14,"r1", false,-1, 31,0);
    tracep->declBus(c+5,"raddr2", false,-1, 4,0);
    tracep->declBus(c+15,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullCData(oldp+1,((0x7fU & vlSelf->top_ysyx_24110017__DOT__inst)),7);
    bufp->fullCData(oldp+2,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                              ? (0x1fU & (vlSelf->top_ysyx_24110017__DOT__inst 
                                          >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+3,((7U & (vlSelf->top_ysyx_24110017__DOT__inst 
                                   >> 0xcU))),3);
    bufp->fullCData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->top_ysyx_24110017__DOT__inst 
                                      >> 0x14U))),5);
    bufp->fullBit(oldp+9,(vlSelf->top_ysyx_24110017__DOT__wr_en));
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__inst),32);
    bufp->fullBit(oldp+11,((0x6fU == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))));
    bufp->fullBit(oldp+12,((0x67U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))));
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__a),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__b),32);
    bufp->fullIData(oldp+18,(((3U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))
                               ? (0xfffffffcU & vlSelf->__VdfgTmp_hf40cef09__0)
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
    bufp->fullBit(oldp+20,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst)) 
                            | (3U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst)))));
    bufp->fullBit(oldp+21,((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))));
    bufp->fullIData(oldp+22,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))
                               ? (0xfffffffcU & vlSelf->__VdfgTmp_hf40cef09__0)
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+23,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : 0U)),32);
    bufp->fullCData(oldp+24,(((IData)((0x23U == (0x707fU 
                                                 & vlSelf->top_ysyx_24110017__DOT__inst)))
                               ? 1U : ((IData)((0x1023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top_ysyx_24110017__DOT__inst)))
                                        ? 3U : ((IData)(
                                                        (0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top_ysyx_24110017__DOT__inst)))
                                                 ? 0xfU
                                                 : 0U)))),8);
    bufp->fullIData(oldp+25,((((- (IData)((vlSelf->top_ysyx_24110017__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->top_ysyx_24110017__DOT__inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+26,((0xfffff000U & vlSelf->top_ysyx_24110017__DOT__inst)),32);
    bufp->fullIData(oldp+27,((((- (IData)((vlSelf->top_ysyx_24110017__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->top_ysyx_24110017__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+28,((((- (IData)((vlSelf->top_ysyx_24110017__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xdU) | ((0x1000U 
                                            & (vlSelf->top_ysyx_24110017__DOT__inst 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                       >> 7U))))))),32);
    bufp->fullIData(oldp+29,((((- (IData)((vlSelf->top_ysyx_24110017__DOT__inst 
                                           >> 0x1fU))) 
                               << 0x15U) | ((0x100000U 
                                             & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                >> 0xbU)) 
                                            | ((0xff000U 
                                                & vlSelf->top_ysyx_24110017__DOT__inst) 
                                               | ((0x800U 
                                                   & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                        >> 0x14U))))))),32);
    bufp->fullBit(oldp+30,((IData)(((0x63U == (0x707fU 
                                               & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+31,((IData)(((0x1063U == (0x707fU 
                                                 & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+32,((IData)(((0x4063U == (0x707fU 
                                                 & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                    & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+33,((IData)(((0x5063U == (0x707fU 
                                                 & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                    & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+34,((IData)(((0x6063U == (0x707fU 
                                                 & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+35,((IData)(((0x7063U == (0x707fU 
                                                 & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullBit(oldp+68,(vlSelf->clk));
    bufp->fullBit(oldp+69,(vlSelf->rst));
    bufp->fullIData(oldp+70,(vlSelf->pc),32);
    bufp->fullIData(oldp+71,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+72,((((3U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                  | ((0xfU == (0x7fU 
                                               & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                     | ((0x73U == (0x7fU 
                                                   & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                        | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))))
                               ? vlSelf->top_ysyx_24110017__DOT__res
                               : ((0x6fU == (0x7fU 
                                             & vlSelf->top_ysyx_24110017__DOT__inst))
                                   ? ((IData)(4U) + vlSelf->pc)
                                   : ((0x37U == (0x7fU 
                                                 & vlSelf->top_ysyx_24110017__DOT__inst))
                                       ? vlSelf->top_ysyx_24110017__DOT__imm
                                       : ((0x17U == 
                                           (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))
                                           ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                           : 0U))))),32);
    bufp->fullIData(oldp+73,(5U),32);
    bufp->fullIData(oldp+74,(0x20U),32);
}
