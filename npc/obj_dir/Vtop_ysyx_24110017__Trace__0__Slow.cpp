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
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+58,"pc", false,-1, 31,0);
    tracep->declBus(c+59,"dnpc", false,-1, 31,0);
    tracep->declBus(c+60,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+58,"pc", false,-1, 31,0);
    tracep->declBus(c+59,"dnpc", false,-1, 31,0);
    tracep->declBus(c+60,"inst", false,-1, 31,0);
    tracep->declBus(c+61,"op", false,-1, 6,0);
    tracep->declBus(c+62,"rd", false,-1, 4,0);
    tracep->declBus(c+63,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+64,"rs2", false,-1, 4,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+3,"funct7", false,-1, 6,0);
    tracep->declBus(c+65,"shamt", false,-1, 4,0);
    tracep->declBit(c+4,"wr_en", false,-1);
    tracep->declBus(c+5,"res", false,-1, 31,0);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declBus(c+6,"raddr2", false,-1, 4,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+10,"b", false,-1, 31,0);
    tracep->declBus(c+66,"xrd", false,-1, 31,0);
    tracep->declBus(c+11,"csrs", false,-1, 31,0);
    tracep->declBus(c+12,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+67,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+13,"mepc", false,-1, 31,0);
    tracep->declBus(c+14,"mstatus", false,-1, 31,0);
    tracep->declBus(c+15,"mcause_in", false,-1, 31,0);
    tracep->declBus(c+16,"mcause", false,-1, 31,0);
    tracep->declBus(c+17,"mtvec", false,-1, 31,0);
    tracep->declBit(c+18,"mepc_wen", false,-1);
    tracep->declBit(c+19,"mstatus_wen", false,-1);
    tracep->declBit(c+20,"mcause_wen", false,-1);
    tracep->declBit(c+21,"mtvec_wen", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+10,"b", false,-1, 31,0);
    tracep->declBus(c+63,"sel", false,-1, 2,0);
    tracep->declBus(c+61,"op", false,-1, 6,0);
    tracep->declBus(c+3,"funct7", false,-1, 6,0);
    tracep->declBus(c+65,"shamt", false,-1, 4,0);
    tracep->declBus(c+2,"offset", false,-1, 31,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+11,"csrs", false,-1, 31,0);
    tracep->declBus(c+12,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+5,"res", false,-1, 31,0);
    tracep->declBus(c+68,"raddr", false,-1, 31,0);
    tracep->declBus(c+22,"rdata", false,-1, 31,0);
    tracep->declBit(c+69,"valid", false,-1);
    tracep->declBit(c+70,"wen", false,-1);
    tracep->declBus(c+71,"waddr", false,-1, 31,0);
    tracep->declBus(c+72,"wdata", false,-1, 31,0);
    tracep->declBus(c+73,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+60,"inst", false,-1, 31,0);
    tracep->declBus(c+61,"op", false,-1, 6,0);
    tracep->declBus(c+62,"rd", false,-1, 4,0);
    tracep->declBus(c+63,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+64,"rs2", false,-1, 4,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+3,"funct7", false,-1, 6,0);
    tracep->declBus(c+65,"shamt", false,-1, 4,0);
    tracep->declBit(c+4,"wr_en", false,-1);
    tracep->declBus(c+74,"immI", false,-1, 31,0);
    tracep->declBus(c+75,"immU", false,-1, 31,0);
    tracep->declBus(c+76,"immS", false,-1, 31,0);
    tracep->declBus(c+77,"immB", false,-1, 31,0);
    tracep->declBus(c+78,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBus(c+58,"pc", false,-1, 31,0);
    tracep->declBus(c+60,"inst", false,-1, 31,0);
    tracep->declBit(c+79,"ifuen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+61,"op", false,-1, 6,0);
    tracep->declBus(c+63,"funct3", false,-1, 2,0);
    tracep->declBus(c+2,"offset", false,-1, 31,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+17,"mtvec", false,-1, 31,0);
    tracep->declBus(c+13,"mepc", false,-1, 31,0);
    tracep->declBus(c+58,"pc", false,-1, 31,0);
    tracep->declBus(c+59,"dnpc", false,-1, 31,0);
    tracep->declBit(c+80,"jalen", false,-1);
    tracep->declBit(c+81,"jalren", false,-1);
    tracep->declBit(c+82,"beqen", false,-1);
    tracep->declBit(c+83,"bneen", false,-1);
    tracep->declBit(c+84,"blten", false,-1);
    tracep->declBit(c+85,"bgeen", false,-1);
    tracep->declBit(c+86,"bltuen", false,-1);
    tracep->declBit(c+87,"bgeuen", false,-1);
    tracep->declBit(c+23,"ecall_en", false,-1);
    tracep->declBit(c+88,"mret_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+89,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBus(c+66,"wdata", false,-1, 31,0);
    tracep->declBus(c+62,"waddr", false,-1, 4,0);
    tracep->declBit(c+4,"wen", false,-1);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+6,"raddr2", false,-1, 4,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+24+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+91,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+16,"dout", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+91,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+67,"din", false,-1, 31,0);
    tracep->declBus(c+13,"dout", false,-1, 31,0);
    tracep->declBit(c+18,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+92,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+12,"din", false,-1, 31,0);
    tracep->declBus(c+14,"dout", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+91,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+12,"din", false,-1, 31,0);
    tracep->declBus(c+17,"dout", false,-1, 31,0);
    tracep->declBit(c+21,"wen", false,-1);
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
    bufp->fullIData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullBit(oldp+4,(vlSelf->top_ysyx_24110017__DOT__wr_en));
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__raddr2),5);
    bufp->fullIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__a),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__b),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__csrs),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__csrs_in),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+15,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullBit(oldp+18,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+19,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+20,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+21,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
    bufp->fullBit(oldp+23,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullBit(oldp+56,(vlSelf->clk));
    bufp->fullBit(oldp+57,(vlSelf->rst));
    bufp->fullIData(oldp+58,(vlSelf->pc),32);
    bufp->fullIData(oldp+59,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+60,(vlSelf->inst),32);
    bufp->fullCData(oldp+61,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+62,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                               ? (0x1fU & (vlSelf->inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+63,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+64,(((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0)
                               ? (0x1fU & (vlSelf->inst 
                                           >> 0x14U))
                               : 0U)),5);
    bufp->fullCData(oldp+65,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+66,((((3U == (0x7fU & vlSelf->inst)) 
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
    bufp->fullIData(oldp+67,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullIData(oldp+68,(((3U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->fullBit(oldp+69,(((0x23U == (0x7fU & vlSelf->inst)) 
                            | (3U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+70,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+71,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+72,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : 0U)),32);
    bufp->fullCData(oldp+73,(((IData)((0x23U == (0x707fU 
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
    bufp->fullIData(oldp+74,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+75,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+76,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+77,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+78,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+79,((0U != vlSelf->pc)));
    bufp->fullBit(oldp+80,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+81,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+82,((IData)(((0x63U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+83,((IData)(((0x1063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+84,((IData)(((0x4063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+85,((IData)(((0x5063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+86,((IData)(((0x6063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+87,((IData)(((0x7063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+88,((IData)(((0x73U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
    bufp->fullIData(oldp+89,(5U),32);
    bufp->fullIData(oldp+90,(0x20U),32);
    bufp->fullIData(oldp+91,(0U),32);
    bufp->fullIData(oldp+92,(0x1800U),32);
}
