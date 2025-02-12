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
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"rst", false,-1);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    tracep->declBus(c+80,"dnpc", false,-1, 31,0);
    tracep->declBus(c+81,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"rst", false,-1);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    tracep->declBus(c+80,"dnpc", false,-1, 31,0);
    tracep->declBus(c+81,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"funct3", false,-1, 2,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+7,"funct7", false,-1, 6,0);
    tracep->declBus(c+8,"shamt", false,-1, 4,0);
    tracep->declBit(c+9,"wr_en", false,-1);
    tracep->declBus(c+10,"res", false,-1, 31,0);
    tracep->declBus(c+4,"raddr1", false,-1, 4,0);
    tracep->declBus(c+11,"raddr2", false,-1, 4,0);
    tracep->declBus(c+12,"r1", false,-1, 31,0);
    tracep->declBus(c+13,"r2", false,-1, 31,0);
    tracep->declBus(c+14,"a", false,-1, 31,0);
    tracep->declBus(c+15,"b", false,-1, 31,0);
    tracep->declBus(c+82,"xrd", false,-1, 31,0);
    tracep->declBus(c+16,"csrs", false,-1, 31,0);
    tracep->declBus(c+17,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+83,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+18,"mepc", false,-1, 31,0);
    tracep->declBus(c+19,"mstatus", false,-1, 31,0);
    tracep->declBus(c+20,"mcause_in", false,-1, 31,0);
    tracep->declBus(c+21,"mcause", false,-1, 31,0);
    tracep->declBus(c+22,"mtvec", false,-1, 31,0);
    tracep->declBit(c+23,"mepc_wen", false,-1);
    tracep->declBit(c+24,"mstatus_wen", false,-1);
    tracep->declBit(c+25,"mcause_wen", false,-1);
    tracep->declBit(c+26,"mtvec_wen", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBus(c+14,"a", false,-1, 31,0);
    tracep->declBus(c+15,"b", false,-1, 31,0);
    tracep->declBus(c+3,"sel", false,-1, 2,0);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+7,"funct7", false,-1, 6,0);
    tracep->declBus(c+8,"shamt", false,-1, 4,0);
    tracep->declBus(c+6,"offset", false,-1, 31,0);
    tracep->declBus(c+12,"r1", false,-1, 31,0);
    tracep->declBus(c+13,"r2", false,-1, 31,0);
    tracep->declBus(c+16,"csrs", false,-1, 31,0);
    tracep->declBus(c+17,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+10,"res", false,-1, 31,0);
    tracep->declBus(c+27,"raddr", false,-1, 31,0);
    tracep->declBus(c+28,"rdata", false,-1, 31,0);
    tracep->declBit(c+29,"valid", false,-1);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->declBus(c+31,"waddr", false,-1, 31,0);
    tracep->declBus(c+32,"wdata", false,-1, 31,0);
    tracep->declBus(c+33,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+81,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"funct3", false,-1, 2,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+7,"funct7", false,-1, 6,0);
    tracep->declBus(c+8,"shamt", false,-1, 4,0);
    tracep->declBit(c+9,"wr_en", false,-1);
    tracep->declBus(c+84,"immI", false,-1, 31,0);
    tracep->declBus(c+85,"immU", false,-1, 31,0);
    tracep->declBus(c+34,"immS", false,-1, 31,0);
    tracep->declBus(c+86,"immB", false,-1, 31,0);
    tracep->declBus(c+87,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    tracep->declBus(c+81,"inst", false,-1, 31,0);
    tracep->declBus(c+89,"wdata", false,-1, 31,0);
    tracep->declBus(c+90,"r2", false,-1, 31,0);
    tracep->declBus(c+91,"waddr", false,-1, 7,0);
    tracep->declBus(c+92,"raddr2", false,-1, 7,0);
    tracep->pushNamePrefix("IM ");
    tracep->declBus(c+93,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBus(c+89,"wdata", false,-1, 31,0);
    tracep->declBus(c+91,"waddr", false,-1, 7,0);
    tracep->declBit(c+95,"wen", false,-1);
    tracep->declBus(c+88,"raddr1", false,-1, 7,0);
    tracep->declBus(c+81,"r1", false,-1, 31,0);
    tracep->declBus(c+92,"raddr2", false,-1, 7,0);
    tracep->declBus(c+90,"r2", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"rst", false,-1);
    tracep->declBus(c+1,"op", false,-1, 6,0);
    tracep->declBus(c+3,"funct3", false,-1, 2,0);
    tracep->declBus(c+6,"offset", false,-1, 31,0);
    tracep->declBus(c+12,"r1", false,-1, 31,0);
    tracep->declBus(c+13,"r2", false,-1, 31,0);
    tracep->declBus(c+22,"mtvec", false,-1, 31,0);
    tracep->declBus(c+18,"mepc", false,-1, 31,0);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    tracep->declBus(c+80,"dnpc", false,-1, 31,0);
    tracep->declBit(c+35,"jalen", false,-1);
    tracep->declBit(c+36,"jalren", false,-1);
    tracep->declBit(c+37,"beqen", false,-1);
    tracep->declBit(c+38,"bneen", false,-1);
    tracep->declBit(c+39,"blten", false,-1);
    tracep->declBit(c+40,"bgeen", false,-1);
    tracep->declBit(c+41,"bltuen", false,-1);
    tracep->declBit(c+42,"bgeuen", false,-1);
    tracep->declBit(c+43,"ecall_en", false,-1);
    tracep->declBit(c+44,"mret_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+96,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBus(c+82,"wdata", false,-1, 31,0);
    tracep->declBus(c+2,"waddr", false,-1, 4,0);
    tracep->declBit(c+9,"wen", false,-1);
    tracep->declBus(c+4,"raddr1", false,-1, 4,0);
    tracep->declBus(c+12,"r1", false,-1, 31,0);
    tracep->declBus(c+11,"raddr2", false,-1, 4,0);
    tracep->declBus(c+13,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+45+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+94,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"rst", false,-1);
    tracep->declBus(c+20,"din", false,-1, 31,0);
    tracep->declBus(c+21,"dout", false,-1, 31,0);
    tracep->declBit(c+25,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+94,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"rst", false,-1);
    tracep->declBus(c+83,"din", false,-1, 31,0);
    tracep->declBus(c+18,"dout", false,-1, 31,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+94,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"rst", false,-1);
    tracep->declBus(c+17,"din", false,-1, 31,0);
    tracep->declBus(c+19,"dout", false,-1, 31,0);
    tracep->declBit(c+24,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+94,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"rst", false,-1);
    tracep->declBus(c+17,"din", false,-1, 31,0);
    tracep->declBus(c+22,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
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
    bufp->fullCData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__op),7);
    bufp->fullCData(oldp+2,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                              ? (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc3969ba__0)
                              : 0U)),5);
    bufp->fullCData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
    bufp->fullCData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+5,(((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0)
                              ? (IData)(vlSelf->top_ysyx_24110017__DOT__shamt)
                              : 0U)),5);
    bufp->fullIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullCData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__shamt),5);
    bufp->fullBit(oldp+9,(vlSelf->top_ysyx_24110017__DOT__wr_en));
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullCData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__raddr2),5);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__a),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__b),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__csrs),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__csrs_in),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+20,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullBit(oldp+23,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+24,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+25,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+26,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullIData(oldp+27,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
    bufp->fullBit(oldp+29,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            | (3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))));
    bufp->fullBit(oldp+30,((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullIData(oldp+31,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+32,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : 0U)),32);
    bufp->fullCData(oldp+33,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                               ? 1U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                        & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                        ? 3U : (((0x23U 
                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                 & (2U 
                                                    == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                 ? 0xfU
                                                 : 0U)))),8);
    bufp->fullIData(oldp+34,((((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                               << 0xcU) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc327e75__0) 
                                            << 5U) 
                                           | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc3969ba__0)))),32);
    bufp->fullBit(oldp+35,((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+36,((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+37,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+38,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+39,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+40,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+41,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+42,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+43,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
    bufp->fullBit(oldp+44,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                               & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+69,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+70,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullBit(oldp+77,(vlSelf->clk));
    bufp->fullBit(oldp+78,(vlSelf->rst));
    bufp->fullIData(oldp+79,(vlSelf->pc),32);
    bufp->fullIData(oldp+80,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+81,(vlSelf->inst),32);
    bufp->fullIData(oldp+82,((((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               | ((0x13U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                  | ((0xfU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                     | ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                        | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))))
                               ? vlSelf->top_ysyx_24110017__DOT__res
                               : ((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                   ? ((IData)(4U) + vlSelf->pc)
                                   : ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                       ? ((IData)(4U) 
                                          + vlSelf->pc)
                                       : ((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                           ? vlSelf->top_ysyx_24110017__DOT__imm
                                           : ((0x17U 
                                               == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                               ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                               : 0U)))))),32);
    bufp->fullIData(oldp+83,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullIData(oldp+84,((((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                               << 0xcU) | ((0U == (0xffU 
                                                   & vlSelf->pc))
                                            ? 0U : 
                                           (vlSelf->__VdfgTmp_hfab7399b__0 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+85,((((0U == (0xffU & vlSelf->pc))
                                ? 0U : (vlSelf->__VdfgTmp_hfab7399b__0 
                                        >> 0xcU)) << 0xcU)),32);
    bufp->fullIData(oldp+86,((((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                               << 0xdU) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0) 
                                            << 0xcU) 
                                           | ((0xfffff800U 
                                               & (((0U 
                                                    != 
                                                    (0xffU 
                                                     & vlSelf->pc)) 
                                                   << 0xbU) 
                                                  & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                     << 4U))) 
                                              | ((((0U 
                                                    == 
                                                    (0xffU 
                                                     & vlSelf->pc))
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                       >> 0x19U))) 
                                                  << 5U) 
                                                 | (((0U 
                                                      == 
                                                      (0xffU 
                                                       & vlSelf->pc))
                                                      ? 0U
                                                      : 
                                                     (0xfU 
                                                      & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                         >> 8U))) 
                                                    << 1U)))))),32);
    bufp->fullIData(oldp+87,((((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                               << 0x15U) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0) 
                                             << 0x14U) 
                                            | ((((0U 
                                                  == 
                                                  (0xffU 
                                                   & vlSelf->pc))
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                     >> 0xcU))) 
                                                << 0xcU) 
                                               | ((0x7ff800U 
                                                   & (((0U 
                                                        != 
                                                        (0xffU 
                                                         & vlSelf->pc)) 
                                                       << 0xbU) 
                                                      & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                         >> 9U))) 
                                                  | (((0U 
                                                       == 
                                                       (0xffU 
                                                        & vlSelf->pc))
                                                       ? 0U
                                                       : 
                                                      (0x3ffU 
                                                       & (vlSelf->__VdfgTmp_hfab7399b__0 
                                                          >> 0x15U))) 
                                                     << 1U)))))),32);
    bufp->fullCData(oldp+88,((0xffU & vlSelf->pc)),8);
    bufp->fullIData(oldp+89,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__wdata),32);
    bufp->fullIData(oldp+90,(((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__raddr2))
                               ? 0U : vlSelf->top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf
                              [vlSelf->top_ysyx_24110017__DOT__IFU__DOT__raddr2])),32);
    bufp->fullCData(oldp+91,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__waddr),8);
    bufp->fullCData(oldp+92,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__raddr2),8);
    bufp->fullIData(oldp+93,(8U),32);
    bufp->fullIData(oldp+94,(0x20U),32);
    bufp->fullBit(oldp+95,(0U));
    bufp->fullIData(oldp+96,(5U),32);
    bufp->fullIData(oldp+97,(0U),32);
    bufp->fullIData(oldp+98,(0x1800U),32);
}
