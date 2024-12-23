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
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBus(c+9,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBus(c+9,"dnpc", false,-1, 31,0);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+11,"funct3", false,-1, 2,0);
    tracep->declBus(c+10,"rs1", false,-1, 4,0);
    tracep->declBus(c+10,"rs2", false,-1, 4,0);
    tracep->declBus(c+12,"imm", false,-1, 31,0);
    tracep->declBus(c+13,"funct7", false,-1, 6,0);
    tracep->declBus(c+10,"shamt", false,-1, 4,0);
    tracep->declBit(c+14,"wr_en", false,-1);
    tracep->declBit(c+14,"jalen", false,-1);
    tracep->declBit(c+14,"jalren", false,-1);
    tracep->declBus(c+12,"res", false,-1, 31,0);
    tracep->declBus(c+10,"raddr1", false,-1, 4,0);
    tracep->declBus(c+10,"raddr2", false,-1, 4,0);
    tracep->declBus(c+12,"r1", false,-1, 31,0);
    tracep->declBus(c+12,"r2", false,-1, 31,0);
    tracep->declBus(c+8,"a", false,-1, 31,0);
    tracep->declBus(c+12,"b", false,-1, 31,0);
    tracep->declBus(c+12,"xrd", false,-1, 31,0);
    tracep->declBit(c+2,"inst", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBus(c+8,"a", false,-1, 31,0);
    tracep->declBus(c+12,"b", false,-1, 31,0);
    tracep->declBus(c+11,"sel", false,-1, 2,0);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+13,"funct7", false,-1, 6,0);
    tracep->declBus(c+10,"shamt", false,-1, 4,0);
    tracep->declBus(c+12,"offset", false,-1, 31,0);
    tracep->declBus(c+12,"r1", false,-1, 31,0);
    tracep->declBus(c+12,"r2", false,-1, 31,0);
    tracep->declBus(c+12,"res", false,-1, 31,0);
    tracep->declBus(c+15,"raddr", false,-1, 31,0);
    tracep->declBus(c+16,"rdata", false,-1, 31,0);
    tracep->declBit(c+14,"valid", false,-1);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->declBus(c+15,"waddr", false,-1, 31,0);
    tracep->declBus(c+12,"wdata", false,-1, 31,0);
    tracep->declBus(c+17,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+11,"funct3", false,-1, 2,0);
    tracep->declBus(c+10,"rs1", false,-1, 4,0);
    tracep->declBus(c+10,"rs2", false,-1, 4,0);
    tracep->declBus(c+12,"imm", false,-1, 31,0);
    tracep->declBus(c+13,"funct7", false,-1, 6,0);
    tracep->declBus(c+10,"shamt", false,-1, 4,0);
    tracep->declBit(c+14,"wr_en", false,-1);
    tracep->declBus(c+4,"immI", false,-1, 31,0);
    tracep->declBus(c+12,"immU", false,-1, 31,0);
    tracep->declBus(c+12,"immS", false,-1, 31,0);
    tracep->declBus(c+12,"immB", false,-1, 31,0);
    tracep->declBus(c+12,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBus(c+5,"inst", false,-1, 31,0);
    tracep->declBit(c+18,"ifen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+11,"funct3", false,-1, 2,0);
    tracep->declBus(c+12,"offset", false,-1, 31,0);
    tracep->declBus(c+12,"r1", false,-1, 31,0);
    tracep->declBus(c+12,"r2", false,-1, 31,0);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBus(c+9,"dnpc", false,-1, 31,0);
    tracep->declBit(c+14,"jalen", false,-1);
    tracep->declBit(c+14,"jalren", false,-1);
    tracep->declBit(c+14,"beqen", false,-1);
    tracep->declBit(c+14,"bneen", false,-1);
    tracep->declBit(c+14,"blten", false,-1);
    tracep->declBit(c+14,"bgeen", false,-1);
    tracep->declBit(c+14,"bltuen", false,-1);
    tracep->declBit(c+14,"bgeuen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+19,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBus(c+12,"wdata", false,-1, 31,0);
    tracep->declBus(c+10,"waddr", false,-1, 4,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->declBus(c+10,"raddr1", false,-1, 4,0);
    tracep->declBus(c+12,"r1", false,-1, 31,0);
    tracep->declBus(c+10,"raddr2", false,-1, 4,0);
    tracep->declBus(c+12,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+21+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullCData(oldp+1,((1U & vlSelf->top_ysyx_24110017__DOT____Vcellout__IFU____pinNumber2)),7);
    bufp->fullBit(oldp+2,((1U & vlSelf->top_ysyx_24110017__DOT____Vcellout__IFU____pinNumber2)));
    bufp->fullIData(oldp+3,((1U & vlSelf->top_ysyx_24110017__DOT____Vcellout__IFU____pinNumber2)),32);
    bufp->fullIData(oldp+4,(0U),32);
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT____Vcellout__IFU____pinNumber2),32);
    bufp->fullBit(oldp+6,(vlSelf->clk));
    bufp->fullBit(oldp+7,(vlSelf->rst));
    bufp->fullIData(oldp+8,(vlSelf->pc),32);
    bufp->fullIData(oldp+9,(vlSelf->dnpc),32);
    bufp->fullCData(oldp+10,(0U),5);
    bufp->fullCData(oldp+11,(0U),3);
    bufp->fullIData(oldp+12,(0U),32);
    bufp->fullCData(oldp+13,(0U),7);
    bufp->fullBit(oldp+14,(0U));
    bufp->fullIData(oldp+15,(0x80000000U),32);
    bufp->fullIData(oldp+16,(0U),32);
    bufp->fullCData(oldp+17,(0U),8);
    bufp->fullBit(oldp+18,(1U));
    bufp->fullIData(oldp+19,(5U),32);
    bufp->fullIData(oldp+20,(0x20U),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
}
