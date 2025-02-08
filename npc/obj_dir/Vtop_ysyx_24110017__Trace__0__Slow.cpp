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
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+53,"pc", false,-1, 31,0);
    tracep->declBus(c+54,"dnpc", false,-1, 31,0);
    tracep->declBus(c+55,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+53,"pc", false,-1, 31,0);
    tracep->declBus(c+54,"dnpc", false,-1, 31,0);
    tracep->declBus(c+55,"inst", false,-1, 31,0);
    tracep->declBus(c+56,"op", false,-1, 6,0);
    tracep->declBus(c+57,"rd", false,-1, 4,0);
    tracep->declBus(c+58,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+3,"imm", false,-1, 31,0);
    tracep->declBus(c+4,"funct7", false,-1, 6,0);
    tracep->declBus(c+59,"shamt", false,-1, 4,0);
    tracep->declBit(c+5,"wr_en", false,-1);
    tracep->declBit(c+60,"jalen", false,-1);
    tracep->declBit(c+61,"jalren", false,-1);
    tracep->declBus(c+6,"res", false,-1, 31,0);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declBus(c+2,"raddr2", false,-1, 4,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+10,"b", false,-1, 31,0);
    tracep->declBus(c+62,"xrd", false,-1, 31,0);
    tracep->declBus(c+63,"csrs", false,-1, 31,0);
    tracep->declBus(c+11,"mepc", false,-1, 31,0);
    tracep->declBus(c+12,"mstatus", false,-1, 31,0);
    tracep->declBus(c+13,"mcause", false,-1, 31,0);
    tracep->declBus(c+14,"mtvec", false,-1, 31,0);
    tracep->declBit(c+15,"mepc_en", false,-1);
    tracep->declBit(c+64,"mstatus_en", false,-1);
    tracep->declBit(c+65,"mcause_en", false,-1);
    tracep->declBit(c+15,"mtvec_en", false,-1);
    tracep->declBit(c+84,"mepc_wen", false,-1);
    tracep->declBit(c+85,"mstatus_wen", false,-1);
    tracep->declBit(c+86,"mcause_wen", false,-1);
    tracep->declBit(c+87,"mtvec_wen", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+10,"b", false,-1, 31,0);
    tracep->declBus(c+58,"sel", false,-1, 2,0);
    tracep->declBus(c+56,"op", false,-1, 6,0);
    tracep->declBus(c+4,"funct7", false,-1, 6,0);
    tracep->declBus(c+59,"shamt", false,-1, 4,0);
    tracep->declBus(c+3,"offset", false,-1, 31,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+63,"csrs", false,-1, 31,0);
    tracep->declBus(c+6,"res", false,-1, 31,0);
    tracep->declBit(c+16,"test1", false,-1);
    tracep->declBit(c+17,"test2", false,-1);
    tracep->declBus(c+66,"raddr", false,-1, 31,0);
    tracep->declBus(c+18,"rdata", false,-1, 31,0);
    tracep->declBit(c+67,"valid", false,-1);
    tracep->declBit(c+68,"wen", false,-1);
    tracep->declBus(c+69,"waddr", false,-1, 31,0);
    tracep->declBus(c+70,"wdata", false,-1, 31,0);
    tracep->declBus(c+71,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPRs ");
    tracep->declBus(c+88,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+89,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBus(c+62,"wdata", false,-1, 31,0);
    tracep->declBus(c+57,"waddr", false,-1, 4,0);
    tracep->declBit(c+5,"wen", false,-1);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+2,"raddr2", false,-1, 4,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+19+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+55,"inst", false,-1, 31,0);
    tracep->declBus(c+56,"op", false,-1, 6,0);
    tracep->declBus(c+57,"rd", false,-1, 4,0);
    tracep->declBus(c+58,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+3,"imm", false,-1, 31,0);
    tracep->declBus(c+4,"funct7", false,-1, 6,0);
    tracep->declBus(c+59,"shamt", false,-1, 4,0);
    tracep->declBit(c+5,"wr_en", false,-1);
    tracep->declBus(c+72,"immI", false,-1, 31,0);
    tracep->declBus(c+73,"immU", false,-1, 31,0);
    tracep->declBus(c+74,"immS", false,-1, 31,0);
    tracep->declBus(c+75,"immB", false,-1, 31,0);
    tracep->declBus(c+76,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBus(c+53,"pc", false,-1, 31,0);
    tracep->declBus(c+55,"inst", false,-1, 31,0);
    tracep->declBit(c+77,"ifuen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+56,"op", false,-1, 6,0);
    tracep->declBus(c+58,"funct3", false,-1, 2,0);
    tracep->declBus(c+3,"offset", false,-1, 31,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+53,"pc", false,-1, 31,0);
    tracep->declBus(c+54,"dnpc", false,-1, 31,0);
    tracep->declBit(c+60,"jalen", false,-1);
    tracep->declBit(c+61,"jalren", false,-1);
    tracep->declBit(c+78,"beqen", false,-1);
    tracep->declBit(c+79,"bneen", false,-1);
    tracep->declBit(c+80,"blten", false,-1);
    tracep->declBit(c+81,"bgeen", false,-1);
    tracep->declBit(c+82,"bltuen", false,-1);
    tracep->declBit(c+83,"bgeuen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+89,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+7,"din", false,-1, 31,0);
    tracep->declBus(c+13,"dout", false,-1, 31,0);
    tracep->declBit(c+86,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+89,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+7,"din", false,-1, 31,0);
    tracep->declBus(c+11,"dout", false,-1, 31,0);
    tracep->declBit(c+84,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+89,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+7,"din", false,-1, 31,0);
    tracep->declBus(c+12,"dout", false,-1, 31,0);
    tracep->declBit(c+85,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+89,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+7,"din", false,-1, 31,0);
    tracep->declBus(c+14,"dout", false,-1, 31,0);
    tracep->declBit(c+87,"wen", false,-1);
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
    bufp->fullCData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullBit(oldp+5,(vlSelf->top_ysyx_24110017__DOT__wr_en));
    bufp->fullIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__a),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__b),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullBit(oldp+15,(vlSelf->top_ysyx_24110017__DOT__mepc_en));
    bufp->fullBit(oldp+16,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h6cd55200__0) 
                            & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))));
    bufp->fullBit(oldp+17,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h6cd55200__0) 
                            & (0x20U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct7)))));
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[0]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[1]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[2]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[3]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[4]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[5]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[6]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[7]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[8]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[9]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[10]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[11]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[12]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[13]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[14]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[15]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[16]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[17]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[18]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[19]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[20]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[21]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[22]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[23]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[24]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[25]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[26]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[27]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[28]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[29]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[30]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__GPRs__DOT__rf[31]),32);
    bufp->fullBit(oldp+51,(vlSelf->clk));
    bufp->fullBit(oldp+52,(vlSelf->rst));
    bufp->fullIData(oldp+53,(vlSelf->pc),32);
    bufp->fullIData(oldp+54,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+55,(vlSelf->inst),32);
    bufp->fullCData(oldp+56,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+57,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                               ? (0x1fU & (vlSelf->inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+58,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+60,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+61,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+62,((((3U == (0x7fU & vlSelf->inst)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->inst)) 
                                  | ((0xfU == (0x7fU 
                                               & vlSelf->inst)) 
                                     | ((0x73U == (0x7fU 
                                                   & vlSelf->inst)) 
                                        | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))))
                               ? vlSelf->top_ysyx_24110017__DOT__res
                               : ((0x6fU == (0x7fU 
                                             & vlSelf->inst))
                                   ? ((IData)(4U) + vlSelf->pc)
                                   : ((0x67U == (0x7fU 
                                                 & vlSelf->inst))
                                       ? ((IData)(4U) 
                                          + vlSelf->pc)
                                       : ((0x37U == 
                                           (0x7fU & vlSelf->inst))
                                           ? vlSelf->top_ysyx_24110017__DOT__imm
                                           : ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->inst))
                                               ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                               : 0U)))))),32);
    bufp->fullIData(oldp+63,(((IData)(vlSelf->top_ysyx_24110017__DOT__mepc_en)
                               ? vlSelf->top_ysyx_24110017__DOT__mepc
                               : (((0x73U == (0x7fU 
                                              & vlSelf->inst)) 
                                   & (0x300U == vlSelf->top_ysyx_24110017__DOT__imm))
                                   ? vlSelf->top_ysyx_24110017__DOT__mstatus
                                   : (((0x73U == (0x7fU 
                                                  & vlSelf->inst)) 
                                       & (0x342U == vlSelf->top_ysyx_24110017__DOT__imm))
                                       ? vlSelf->top_ysyx_24110017__DOT__mcause
                                       : ((IData)(vlSelf->top_ysyx_24110017__DOT__mepc_en)
                                           ? vlSelf->top_ysyx_24110017__DOT__mtvec
                                           : 0U))))),32);
    bufp->fullBit(oldp+64,(((0x73U == (0x7fU & vlSelf->inst)) 
                            & (0x300U == vlSelf->top_ysyx_24110017__DOT__imm))));
    bufp->fullBit(oldp+65,(((0x73U == (0x7fU & vlSelf->inst)) 
                            & (0x342U == vlSelf->top_ysyx_24110017__DOT__imm))));
    bufp->fullIData(oldp+66,(((3U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->fullBit(oldp+67,(((0x23U == (0x7fU & vlSelf->inst)) 
                            | (3U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+68,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+69,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+70,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : 0U)),32);
    bufp->fullCData(oldp+71,(((IData)((0x23U == (0x707fU 
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
    bufp->fullIData(oldp+72,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+73,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+74,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+75,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+76,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+77,((0U != vlSelf->pc)));
    bufp->fullBit(oldp+78,((IData)(((0x63U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+79,((IData)(((0x1063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+80,((IData)(((0x4063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+81,((IData)(((0x5063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+82,((IData)(((0x6063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+83,((IData)(((0x7063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+84,(vlSelf->top_ysyx_24110017__DOT__mepc_wen));
    bufp->fullBit(oldp+85,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+86,(vlSelf->top_ysyx_24110017__DOT__mcause_wen));
    bufp->fullBit(oldp+87,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullIData(oldp+88,(5U),32);
    bufp->fullIData(oldp+89,(0x20U),32);
    bufp->fullIData(oldp+90,(0U),32);
}
