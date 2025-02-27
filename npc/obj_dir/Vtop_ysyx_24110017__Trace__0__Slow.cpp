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
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+65,"pc", false,-1, 31,0);
    tracep->declBus(c+66,"dnpc", false,-1, 31,0);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+65,"pc", false,-1, 31,0);
    tracep->declBus(c+66,"dnpc", false,-1, 31,0);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+68,"op", false,-1, 6,0);
    tracep->declBus(c+69,"rd", false,-1, 4,0);
    tracep->declBus(c+70,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+3,"imm", false,-1, 31,0);
    tracep->declBus(c+71,"funct7", false,-1, 6,0);
    tracep->declBus(c+72,"shamt", false,-1, 4,0);
    tracep->declBit(c+4,"wr_en", false,-1);
    tracep->declBus(c+5,"res", false,-1, 31,0);
    tracep->declBus(c+6,"r1", false,-1, 31,0);
    tracep->declBus(c+7,"r2", false,-1, 31,0);
    tracep->declBus(c+8,"a", false,-1, 31,0);
    tracep->declBus(c+9,"b", false,-1, 31,0);
    tracep->declBus(c+73,"xrd", false,-1, 31,0);
    tracep->declBus(c+10,"csrs", false,-1, 31,0);
    tracep->declBus(c+11,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+74,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+12,"mepc", false,-1, 31,0);
    tracep->declBus(c+13,"mstatus", false,-1, 31,0);
    tracep->declBus(c+14,"mcause_in", false,-1, 31,0);
    tracep->declBus(c+15,"mcause", false,-1, 31,0);
    tracep->declBus(c+16,"mtvec", false,-1, 31,0);
    tracep->declBit(c+17,"mepc_wen", false,-1);
    tracep->declBit(c+18,"mstatus_wen", false,-1);
    tracep->declBit(c+19,"mcause_wen", false,-1);
    tracep->declBit(c+20,"mtvec_wen", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+21,"sel", false,-1, 2,0);
    tracep->declBus(c+22,"op", false,-1, 6,0);
    tracep->declBus(c+75,"funct7", false,-1, 6,0);
    tracep->declBus(c+76,"shamt", false,-1, 4,0);
    tracep->declBus(c+77,"offset", false,-1, 31,0);
    tracep->declBus(c+78,"a", false,-1, 31,0);
    tracep->declBus(c+3,"b", false,-1, 31,0);
    tracep->declBus(c+10,"csrs", false,-1, 31,0);
    tracep->declBus(c+11,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+5,"res", false,-1, 31,0);
    tracep->declBus(c+23,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("LSU_ysyx_24110017 ");
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+22,"op", false,-1, 6,0);
    tracep->declBus(c+78,"r1", false,-1, 31,0);
    tracep->declBus(c+3,"r2", false,-1, 31,0);
    tracep->declBus(c+77,"offset", false,-1, 31,0);
    tracep->declBus(c+21,"function3", false,-1, 2,0);
    tracep->declBus(c+23,"rdata", false,-1, 31,0);
    tracep->declBit(c+24,"valid", false,-1);
    tracep->declBit(c+25,"wen", false,-1);
    tracep->declBus(c+26,"raddr", false,-1, 31,0);
    tracep->declBus(c+27,"waddr", false,-1, 31,0);
    tracep->declBus(c+28,"wdata", false,-1, 31,0);
    tracep->declBus(c+29,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+68,"op", false,-1, 6,0);
    tracep->declBus(c+69,"rd", false,-1, 4,0);
    tracep->declBus(c+70,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+3,"imm", false,-1, 31,0);
    tracep->declBus(c+71,"funct7", false,-1, 6,0);
    tracep->declBus(c+72,"shamt", false,-1, 4,0);
    tracep->declBit(c+4,"wr_en", false,-1);
    tracep->declBit(c+17,"mepc_wen", false,-1);
    tracep->declBit(c+18,"mstatus_wen", false,-1);
    tracep->declBit(c+19,"mcause_wen", false,-1);
    tracep->declBit(c+20,"mtvec_wen", false,-1);
    tracep->declBus(c+79,"immI", false,-1, 31,0);
    tracep->declBus(c+80,"immU", false,-1, 31,0);
    tracep->declBus(c+81,"immS", false,-1, 31,0);
    tracep->declBus(c+82,"immB", false,-1, 31,0);
    tracep->declBus(c+83,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+65,"pc", false,-1, 31,0);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+68,"op", false,-1, 6,0);
    tracep->declBus(c+70,"funct3", false,-1, 2,0);
    tracep->declBus(c+3,"offset", false,-1, 31,0);
    tracep->declBus(c+6,"r1", false,-1, 31,0);
    tracep->declBus(c+7,"r2", false,-1, 31,0);
    tracep->declBus(c+16,"mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"mepc", false,-1, 31,0);
    tracep->declBus(c+65,"pc", false,-1, 31,0);
    tracep->declBus(c+66,"dnpc", false,-1, 31,0);
    tracep->declBit(c+84,"jalen", false,-1);
    tracep->declBit(c+85,"jalren", false,-1);
    tracep->declBit(c+86,"beqen", false,-1);
    tracep->declBit(c+87,"bneen", false,-1);
    tracep->declBit(c+88,"blten", false,-1);
    tracep->declBit(c+89,"bgeen", false,-1);
    tracep->declBit(c+90,"bltuen", false,-1);
    tracep->declBit(c+91,"bgeuen", false,-1);
    tracep->declBit(c+30,"ecall_en", false,-1);
    tracep->declBit(c+92,"mret_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+93,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBus(c+73,"wdata", false,-1, 31,0);
    tracep->declBus(c+69,"waddr", false,-1, 4,0);
    tracep->declBit(c+4,"wen", false,-1);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declBus(c+6,"r1", false,-1, 31,0);
    tracep->declBus(c+2,"raddr2", false,-1, 4,0);
    tracep->declBus(c+7,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+68,"op", false,-1, 6,0);
    tracep->declBus(c+3,"imm", false,-1, 31,0);
    tracep->declBus(c+70,"funct3", false,-1, 2,0);
    tracep->declBus(c+65,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"r1", false,-1, 31,0);
    tracep->declBus(c+7,"r2", false,-1, 31,0);
    tracep->declBus(c+5,"res", false,-1, 31,0);
    tracep->declBus(c+8,"a", false,-1, 31,0);
    tracep->declBus(c+9,"b", false,-1, 31,0);
    tracep->declBus(c+73,"xrd", false,-1, 31,0);
    tracep->declBus(c+12,"mepc", false,-1, 31,0);
    tracep->declBus(c+13,"mstatus", false,-1, 31,0);
    tracep->declBus(c+15,"mcause", false,-1, 31,0);
    tracep->declBus(c+16,"mtvec", false,-1, 31,0);
    tracep->declBus(c+10,"csrs", false,-1, 31,0);
    tracep->declBus(c+11,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+74,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+14,"mcause_in", false,-1, 31,0);
    tracep->declBit(c+95,"mepc_wen", false,-1);
    tracep->declBit(c+96,"mstatus_wen", false,-1);
    tracep->declBit(c+97,"mcause_wen", false,-1);
    tracep->declBit(c+98,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+94,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+14,"din", false,-1, 31,0);
    tracep->declBus(c+15,"dout", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+94,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+74,"din", false,-1, 31,0);
    tracep->declBus(c+12,"dout", false,-1, 31,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+94,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+100,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+11,"din", false,-1, 31,0);
    tracep->declBus(c+13,"dout", false,-1, 31,0);
    tracep->declBit(c+18,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+94,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+11,"din", false,-1, 31,0);
    tracep->declBus(c+16,"dout", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
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
    bufp->fullBit(oldp+4,(vlSelf->top_ysyx_24110017__DOT__wr_en));
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__a),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__b),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__csrs),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__csrs_in),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+14,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullBit(oldp+17,(((IData)(vlSelf->__VdfgTmp_he77478c1__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+18,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->__VdfgTmp_he7787a83__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+20,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullCData(oldp+21,((7U & vlSelf->top_ysyx_24110017__DOT__a)),3);
    bufp->fullCData(oldp+22,((0x7fU & vlSelf->top_ysyx_24110017__DOT__b)),7);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
    bufp->fullBit(oldp+24,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b)) 
                            | (3U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b)))));
    bufp->fullBit(oldp+25,((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b))));
    bufp->fullIData(oldp+26,(((3U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+27,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+28,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b))
                               ? vlSelf->top_ysyx_24110017__DOT__imm
                               : 0U)),32);
    bufp->fullCData(oldp+29,((((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b)) 
                               & (0U == (7U & vlSelf->top_ysyx_24110017__DOT__a)))
                               ? 1U : (((0x23U == (0x7fU 
                                                   & vlSelf->top_ysyx_24110017__DOT__b)) 
                                        & (1U == (7U 
                                                  & vlSelf->top_ysyx_24110017__DOT__a)))
                                        ? 3U : (((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top_ysyx_24110017__DOT__b)) 
                                                 & (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->top_ysyx_24110017__DOT__a)))
                                                 ? 0xfU
                                                 : 0U)))),8);
    bufp->fullBit(oldp+30,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullBit(oldp+63,(vlSelf->clk));
    bufp->fullBit(oldp+64,(vlSelf->rst));
    bufp->fullIData(oldp+65,(vlSelf->pc),32);
    bufp->fullIData(oldp+66,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+67,(vlSelf->inst),32);
    bufp->fullCData(oldp+68,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+69,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                               ? (0x1fU & (vlSelf->inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+70,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+71,((((0x33U == (0x7fU & vlSelf->inst)) 
                               | (0x13U == (0x7fU & vlSelf->inst)))
                               ? (vlSelf->inst >> 0x19U)
                               : 0U)),7);
    bufp->fullCData(oldp+72,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+73,((((3U == (0x7fU & vlSelf->inst)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->inst)) 
                                  | ((0xfU == (0x7fU 
                                               & vlSelf->inst)) 
                                     | ((0x73U == (0x7fU 
                                                   & vlSelf->inst)) 
                                        | (IData)(vlSelf->__VdfgTmp_hae9cdf9b__0)))))
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
    bufp->fullIData(oldp+74,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullCData(oldp+75,((7U & (vlSelf->inst >> 0xcU))),7);
    bufp->fullCData(oldp+76,((0x1fU & vlSelf->inst)),5);
    bufp->fullIData(oldp+77,((((0x33U == (0x7fU & vlSelf->inst)) 
                               | (0x13U == (0x7fU & vlSelf->inst)))
                               ? (vlSelf->inst >> 0x19U)
                               : 0U)),32);
    bufp->fullIData(oldp+78,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),32);
    bufp->fullIData(oldp+79,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+80,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+81,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+82,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+83,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+84,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+85,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+86,((IData)(((0x63U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+87,((IData)(((0x1063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+88,((IData)(((0x4063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+89,((IData)(((0x5063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+90,((IData)(((0x6063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+91,((IData)(((0x7063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+92,((IData)(((0x73U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
    bufp->fullIData(oldp+93,(5U),32);
    bufp->fullIData(oldp+94,(0x20U),32);
    bufp->fullBit(oldp+95,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mepc_wen));
    bufp->fullBit(oldp+96,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mstatus_wen));
    bufp->fullBit(oldp+97,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mcause_wen));
    bufp->fullBit(oldp+98,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mtvec_wen));
    bufp->fullIData(oldp+99,(0U),32);
    bufp->fullIData(oldp+100,(0x1800U),32);
}
