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
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+66,"pc", false,-1, 31,0);
    tracep->declBus(c+67,"dnpc", false,-1, 31,0);
    tracep->declBus(c+68,"inst", false,-1, 31,0);
    tracep->declBit(c+69,"IF_DONE", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+66,"pc", false,-1, 31,0);
    tracep->declBus(c+67,"dnpc", false,-1, 31,0);
    tracep->declBus(c+68,"inst", false,-1, 31,0);
    tracep->declBit(c+69,"IF_DONE", false,-1);
    tracep->declBus(c+70,"op", false,-1, 6,0);
    tracep->declBus(c+71,"rd", false,-1, 4,0);
    tracep->declBus(c+72,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+3,"imm", false,-1, 31,0);
    tracep->declBus(c+4,"funct7", false,-1, 6,0);
    tracep->declBus(c+73,"shamt", false,-1, 4,0);
    tracep->declBit(c+5,"wr_en", false,-1);
    tracep->declBus(c+6,"res", false,-1, 31,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+10,"b", false,-1, 31,0);
    tracep->declBus(c+74,"xrd", false,-1, 31,0);
    tracep->declBus(c+11,"csrs", false,-1, 31,0);
    tracep->declBus(c+12,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+75,"mepc_in", false,-1, 31,0);
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
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+70,"op", false,-1, 6,0);
    tracep->declBus(c+72,"sel", false,-1, 2,0);
    tracep->declBus(c+3,"imm", false,-1, 31,0);
    tracep->declBus(c+4,"funct7", false,-1, 6,0);
    tracep->declBus(c+73,"shamt", false,-1, 4,0);
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+10,"b", false,-1, 31,0);
    tracep->declBus(c+11,"csrs", false,-1, 31,0);
    tracep->declBus(c+12,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+6,"res", false,-1, 31,0);
    tracep->declBus(c+22,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("LSU_ysyx_24110017 ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+70,"op", false,-1, 6,0);
    tracep->declBus(c+9,"r1", false,-1, 31,0);
    tracep->declBus(c+10,"r2", false,-1, 31,0);
    tracep->declBus(c+3,"offset", false,-1, 31,0);
    tracep->declBus(c+72,"function3", false,-1, 2,0);
    tracep->declBus(c+22,"rdata", false,-1, 31,0);
    tracep->declBit(c+76,"valid", false,-1);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->declBus(c+78,"raddr", false,-1, 31,0);
    tracep->declBus(c+79,"waddr", false,-1, 31,0);
    tracep->declBus(c+80,"wdata", false,-1, 31,0);
    tracep->declBus(c+81,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+68,"inst", false,-1, 31,0);
    tracep->declBus(c+70,"op", false,-1, 6,0);
    tracep->declBus(c+71,"rd", false,-1, 4,0);
    tracep->declBus(c+72,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+3,"imm", false,-1, 31,0);
    tracep->declBus(c+4,"funct7", false,-1, 6,0);
    tracep->declBus(c+73,"shamt", false,-1, 4,0);
    tracep->declBit(c+5,"wr_en", false,-1);
    tracep->declBit(c+18,"mepc_wen", false,-1);
    tracep->declBit(c+19,"mstatus_wen", false,-1);
    tracep->declBit(c+20,"mcause_wen", false,-1);
    tracep->declBit(c+21,"mtvec_wen", false,-1);
    tracep->declBus(c+82,"immI", false,-1, 31,0);
    tracep->declBus(c+83,"immU", false,-1, 31,0);
    tracep->declBus(c+84,"immS", false,-1, 31,0);
    tracep->declBus(c+85,"immB", false,-1, 31,0);
    tracep->declBus(c+86,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+66,"pc", false,-1, 31,0);
    tracep->declBus(c+68,"inst", false,-1, 31,0);
    tracep->declBit(c+69,"done", false,-1);
    tracep->declBus(c+97,"AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+98,"AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+23,"AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+24,"AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+99,"AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+100,"AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+101,"AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+102,"AXI_AWVALID", false,-1);
    tracep->declBit(c+103,"AXI_AWREADY", false,-1);
    tracep->declBit(c+104,"AXI_WVALID", false,-1);
    tracep->declBit(c+105,"AXI_WREADY", false,-1);
    tracep->declBit(c+106,"AXI_BVALID", false,-1);
    tracep->declBit(c+107,"AXI_BREADY", false,-1);
    tracep->declBit(c+25,"AXI_ARVALID", false,-1);
    tracep->declBit(c+26,"AXI_ARREADY", false,-1);
    tracep->declBit(c+27,"AXI_RVALID", false,-1);
    tracep->declBit(c+28,"AXI_RREADY", false,-1);
    tracep->declBus(c+23,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+25,"axi_arvalid", false,-1);
    tracep->declBit(c+28,"axi_rready", false,-1);
    tracep->declBus(c+108,"IDLE", false,-1, 1,0);
    tracep->declBus(c+109,"FETCH", false,-1, 1,0);
    tracep->declBus(c+110,"DONE", false,-1, 1,0);
    tracep->declBus(c+111,"NULL", false,-1, 1,0);
    tracep->declBus(c+29,"state", false,-1, 1,0);
    tracep->declBit(c+87,"start", false,-1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+97,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+102,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+103,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+98,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+99,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+104,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+105,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+100,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+106,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+107,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+23,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+25,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+26,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+24,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+101,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+27,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+28,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+24,"rdata", false,-1, 31,0);
    tracep->declBus(c+30,"tmp", false,-1, 31,0);
    tracep->declBit(c+26,"arready", false,-1);
    tracep->declBit(c+27,"rvalid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+70,"op", false,-1, 6,0);
    tracep->declBus(c+72,"funct3", false,-1, 2,0);
    tracep->declBus(c+3,"offset", false,-1, 31,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+17,"mtvec", false,-1, 31,0);
    tracep->declBus(c+13,"mepc", false,-1, 31,0);
    tracep->declBus(c+66,"pc", false,-1, 31,0);
    tracep->declBus(c+67,"dnpc", false,-1, 31,0);
    tracep->declBit(c+69,"IF_DONE", false,-1);
    tracep->declBit(c+88,"jalen", false,-1);
    tracep->declBit(c+89,"jalren", false,-1);
    tracep->declBit(c+90,"beqen", false,-1);
    tracep->declBit(c+91,"bneen", false,-1);
    tracep->declBit(c+92,"blten", false,-1);
    tracep->declBit(c+93,"bgeen", false,-1);
    tracep->declBit(c+94,"bltuen", false,-1);
    tracep->declBit(c+95,"bgeuen", false,-1);
    tracep->declBit(c+31,"ecall_en", false,-1);
    tracep->declBit(c+96,"mret_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+112,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+113,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBus(c+74,"wdata", false,-1, 31,0);
    tracep->declBus(c+71,"waddr", false,-1, 4,0);
    tracep->declBit(c+5,"wen", false,-1);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+2,"raddr2", false,-1, 4,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+32+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+70,"op", false,-1, 6,0);
    tracep->declBus(c+3,"imm", false,-1, 31,0);
    tracep->declBus(c+72,"funct3", false,-1, 2,0);
    tracep->declBus(c+66,"pc", false,-1, 31,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+6,"res", false,-1, 31,0);
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+10,"b", false,-1, 31,0);
    tracep->declBus(c+74,"xrd", false,-1, 31,0);
    tracep->declBus(c+13,"mepc", false,-1, 31,0);
    tracep->declBus(c+14,"mstatus", false,-1, 31,0);
    tracep->declBus(c+16,"mcause", false,-1, 31,0);
    tracep->declBus(c+17,"mtvec", false,-1, 31,0);
    tracep->declBus(c+11,"csrs", false,-1, 31,0);
    tracep->declBus(c+12,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+75,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+15,"mcause_in", false,-1, 31,0);
    tracep->declBit(c+114,"mepc_wen", false,-1);
    tracep->declBit(c+115,"mstatus_wen", false,-1);
    tracep->declBit(c+116,"mcause_wen", false,-1);
    tracep->declBit(c+117,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+113,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+118,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+16,"dout", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+113,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+118,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+75,"din", false,-1, 31,0);
    tracep->declBus(c+13,"dout", false,-1, 31,0);
    tracep->declBit(c+18,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+113,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+119,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+12,"din", false,-1, 31,0);
    tracep->declBus(c+14,"dout", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+113,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+118,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
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
    bufp->fullCData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullBit(oldp+5,(vlSelf->top_ysyx_24110017__DOT__wr_en));
    bufp->fullIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__res),32);
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
    bufp->fullBit(oldp+18,(((IData)(vlSelf->__VdfgTmp_he77478c1__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+19,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+20,(((IData)(vlSelf->__VdfgTmp_he7787a83__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+21,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__SRAM_IFU_ysyx_24110017__DOT__rdata),32);
    bufp->fullBit(oldp+25,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+26,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__SRAM_IFU_ysyx_24110017__DOT__arready));
    bufp->fullBit(oldp+27,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__SRAM_IFU_ysyx_24110017__DOT__rvalid));
    bufp->fullBit(oldp+28,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullCData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullBit(oldp+31,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullBit(oldp+64,(vlSelf->clk));
    bufp->fullBit(oldp+65,(vlSelf->rst));
    bufp->fullIData(oldp+66,(vlSelf->pc),32);
    bufp->fullIData(oldp+67,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+68,(vlSelf->inst),32);
    bufp->fullBit(oldp+69,(vlSelf->IF_DONE));
    bufp->fullCData(oldp+70,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+71,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                               ? (0x1fU & (vlSelf->inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+72,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+73,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+74,((((3U == (0x7fU & vlSelf->inst)) 
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
                                               ? vlSelf->__VdfgTmp_h3bd1f014__0
                                               : 0U)))))),32);
    bufp->fullIData(oldp+75,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullBit(oldp+76,(((0x23U == (0x7fU & vlSelf->inst)) 
                            | (3U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+77,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+78,(((3U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+79,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+80,(((0x23U == (0x7fU & vlSelf->inst))
                               ? vlSelf->top_ysyx_24110017__DOT__b
                               : 0U)),32);
    bufp->fullCData(oldp+81,(((IData)((0x23U == (0x707fU 
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
    bufp->fullIData(oldp+82,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+83,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+84,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+85,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+86,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+87,((0x80000000U <= vlSelf->pc)));
    bufp->fullBit(oldp+88,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+89,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+90,((IData)(((0x63U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+91,((IData)(((0x1063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+92,((IData)(((0x4063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+93,((IData)(((0x5063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+94,((IData)(((0x6063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+95,((IData)(((0x7063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    & (vlSelf->top_ysyx_24110017__DOT__r1 
                                       >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+96,((IData)(((0x73U == (0x707fU 
                                               & vlSelf->inst)) 
                                    & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
    bufp->fullIData(oldp+97,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_AWADDR),32);
    bufp->fullIData(oldp+98,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_WDATA),32);
    bufp->fullCData(oldp+99,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_WSTRB),4);
    bufp->fullCData(oldp+100,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_BRESP),2);
    bufp->fullCData(oldp+101,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_RRESP),2);
    bufp->fullBit(oldp+102,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_AWVALID));
    bufp->fullBit(oldp+103,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_AWREADY));
    bufp->fullBit(oldp+104,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_WVALID));
    bufp->fullBit(oldp+105,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_WREADY));
    bufp->fullBit(oldp+106,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_BVALID));
    bufp->fullBit(oldp+107,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__AXI_BREADY));
    bufp->fullCData(oldp+108,(0U),2);
    bufp->fullCData(oldp+109,(1U),2);
    bufp->fullCData(oldp+110,(2U),2);
    bufp->fullCData(oldp+111,(3U),2);
    bufp->fullIData(oldp+112,(5U),32);
    bufp->fullIData(oldp+113,(0x20U),32);
    bufp->fullBit(oldp+114,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mepc_wen));
    bufp->fullBit(oldp+115,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mstatus_wen));
    bufp->fullBit(oldp+116,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mcause_wen));
    bufp->fullBit(oldp+117,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mtvec_wen));
    bufp->fullIData(oldp+118,(0U),32);
    bufp->fullIData(oldp+119,(0x1800U),32);
}
