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
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rst", false,-1);
    tracep->declBus(c+38,"pc", false,-1, 31,0);
    tracep->declBus(c+39,"dnpc", false,-1, 31,0);
    tracep->declBus(c+40,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rst", false,-1);
    tracep->declBus(c+38,"pc", false,-1, 31,0);
    tracep->declBus(c+39,"dnpc", false,-1, 31,0);
    tracep->declBus(c+40,"inst", false,-1, 31,0);
    tracep->declBus(c+41,"op", false,-1, 6,0);
    tracep->declBus(c+42,"rd", false,-1, 4,0);
    tracep->declBus(c+53,"sel", false,-1, 2,0);
    tracep->declBus(c+43,"rs1", false,-1, 4,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+2,"offset", false,-1, 31,0);
    tracep->declBit(c+44,"wr_en", false,-1);
    tracep->declBit(c+45,"jalen", false,-1);
    tracep->declBit(c+46,"jalren", false,-1);
    tracep->declBus(c+47,"res", false,-1, 31,0);
    tracep->declBus(c+48,"r1", false,-1, 31,0);
    tracep->declBus(c+49,"a", false,-1, 31,0);
    tracep->declBus(c+1,"b", false,-1, 31,0);
    tracep->declBus(c+50,"xrd", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBus(c+49,"a", false,-1, 31,0);
    tracep->declBus(c+1,"b", false,-1, 31,0);
    tracep->declBus(c+53,"sel", false,-1, 2,0);
    tracep->declBus(c+47,"res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+40,"inst", false,-1, 31,0);
    tracep->declBus(c+41,"op", false,-1, 6,0);
    tracep->declBus(c+42,"rd", false,-1, 4,0);
    tracep->declBus(c+53,"sel", false,-1, 2,0);
    tracep->declBus(c+43,"rs1", false,-1, 4,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+2,"offset", false,-1, 31,0);
    tracep->declBit(c+44,"wr_en", false,-1);
    tracep->declBus(c+51,"funct3", false,-1, 2,0);
    tracep->declBus(c+3,"immI", false,-1, 31,0);
    tracep->declBus(c+52,"immU", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rst", false,-1);
    tracep->declBit(c+45,"jalen", false,-1);
    tracep->declBit(c+46,"jalren", false,-1);
    tracep->declBus(c+2,"offset", false,-1, 31,0);
    tracep->declBus(c+48,"r1", false,-1, 31,0);
    tracep->declBus(c+38,"pc", false,-1, 31,0);
    tracep->declBus(c+39,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+54,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBus(c+50,"wdata", false,-1, 31,0);
    tracep->declBus(c+42,"waddr", false,-1, 4,0);
    tracep->declBit(c+44,"wen", false,-1);
    tracep->declBus(c+43,"raddr", false,-1, 4,0);
    tracep->declBus(c+48,"rdata", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullIData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__offset),32);
    bufp->fullIData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__immI),32);
    bufp->fullIData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullBit(oldp+36,(vlSelf->clk));
    bufp->fullBit(oldp+37,(vlSelf->rst));
    bufp->fullIData(oldp+38,(vlSelf->pc),32);
    bufp->fullIData(oldp+39,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+40,(vlSelf->inst),32);
    bufp->fullCData(oldp+41,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullBit(oldp+44,(((0x13U == (0x7fU & vlSelf->inst)) 
                            | ((0x17U == (0x7fU & vlSelf->inst)) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->inst)) 
                                  | (0x67U == (0x7fU 
                                               & vlSelf->inst)))))));
    bufp->fullBit(oldp+45,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+46,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+47,((vlSelf->top_ysyx_24110017__DOT__a 
                              + vlSelf->top_ysyx_24110017__DOT__imm)),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__a),32);
    bufp->fullIData(oldp+50,(((0x6fU == (0x7fU & vlSelf->inst))
                               ? ((IData)(4U) + vlSelf->pc)
                               : (vlSelf->top_ysyx_24110017__DOT__a 
                                  + vlSelf->top_ysyx_24110017__DOT__imm))),32);
    bufp->fullCData(oldp+51,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullIData(oldp+52,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullCData(oldp+53,(0U),3);
    bufp->fullIData(oldp+54,(5U),32);
    bufp->fullIData(oldp+55,(0x20U),32);
}
