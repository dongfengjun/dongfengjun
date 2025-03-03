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
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+99,"pc", false,-1, 31,0);
    tracep->declBus(c+100,"dnpc", false,-1, 31,0);
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBit(c+102,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+99,"pc", false,-1, 31,0);
    tracep->declBus(c+100,"dnpc", false,-1, 31,0);
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBit(c+102,"DIFFTEST", false,-1);
    tracep->declBus(c+103,"op", false,-1, 6,0);
    tracep->declBus(c+64,"rd", false,-1, 4,0);
    tracep->declBus(c+41,"lrd", false,-1, 4,0);
    tracep->declBus(c+104,"funct3", false,-1, 2,0);
    tracep->declBus(c+65,"rs1", false,-1, 4,0);
    tracep->declBus(c+66,"rs2", false,-1, 4,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+68,"funct7", false,-1, 6,0);
    tracep->declBus(c+105,"shamt", false,-1, 4,0);
    tracep->declBit(c+69,"wr_en", false,-1);
    tracep->declBus(c+106,"res", false,-1, 31,0);
    tracep->declBit(c+42,"ldone", false,-1);
    tracep->declBus(c+70,"r1", false,-1, 31,0);
    tracep->declBus(c+71,"r2", false,-1, 31,0);
    tracep->declBus(c+72,"a", false,-1, 31,0);
    tracep->declBus(c+73,"b", false,-1, 31,0);
    tracep->declBus(c+107,"xrd", false,-1, 31,0);
    tracep->declBus(c+74,"csrs", false,-1, 31,0);
    tracep->declBus(c+75,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+108,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+1,"mepc", false,-1, 31,0);
    tracep->declBus(c+2,"mstatus", false,-1, 31,0);
    tracep->declBus(c+76,"mcause_in", false,-1, 31,0);
    tracep->declBus(c+3,"mcause", false,-1, 31,0);
    tracep->declBus(c+4,"mtvec", false,-1, 31,0);
    tracep->declBit(c+77,"mepc_wen", false,-1);
    tracep->declBit(c+78,"mstatus_wen", false,-1);
    tracep->declBit(c+79,"mcause_wen", false,-1);
    tracep->declBit(c+80,"mtvec_wen", false,-1);
    tracep->declBit(c+81,"IFU_DONE", false,-1);
    tracep->declBus(c+133,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+134,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+82,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+83,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+135,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+136,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+84,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+137,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+138,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+139,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+140,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+141,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+142,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+85,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+87,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"IFU_AXI_RREADY", false,-1);
    tracep->declBus(c+5,"rdata", false,-1, 31,0);
    tracep->declBit(c+43,"lbdone", false,-1);
    tracep->declBit(c+44,"lhdone", false,-1);
    tracep->declBit(c+45,"lwdone", false,-1);
    tracep->declBit(c+46,"lbudone", false,-1);
    tracep->declBit(c+47,"lhudone", false,-1);
    tracep->declBus(c+48,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+49,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+50,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+5,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+51,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+6,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+143,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+52,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+89,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+53,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+90,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+91,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+54,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+55,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+92,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+93,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+56,"LSU_AXI_RREADY", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+103,"op", false,-1, 6,0);
    tracep->declBus(c+104,"sel", false,-1, 2,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+68,"funct7", false,-1, 6,0);
    tracep->declBus(c+105,"shamt", false,-1, 4,0);
    tracep->declBus(c+72,"a", false,-1, 31,0);
    tracep->declBus(c+73,"b", false,-1, 31,0);
    tracep->declBus(c+74,"csrs", false,-1, 31,0);
    tracep->declBus(c+75,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+106,"res", false,-1, 31,0);
    tracep->declBus(c+5,"rdata", false,-1, 31,0);
    tracep->declBit(c+43,"lbdone", false,-1);
    tracep->declBit(c+44,"lhdone", false,-1);
    tracep->declBit(c+45,"lwdone", false,-1);
    tracep->declBit(c+46,"lbudone", false,-1);
    tracep->declBit(c+47,"lhudone", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBus(c+103,"op", false,-1, 6,0);
    tracep->declBus(c+64,"rd", false,-1, 4,0);
    tracep->declBus(c+104,"funct3", false,-1, 2,0);
    tracep->declBus(c+65,"rs1", false,-1, 4,0);
    tracep->declBus(c+66,"rs2", false,-1, 4,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+68,"funct7", false,-1, 6,0);
    tracep->declBus(c+105,"shamt", false,-1, 4,0);
    tracep->declBit(c+69,"wr_en", false,-1);
    tracep->declBit(c+77,"mepc_wen", false,-1);
    tracep->declBit(c+78,"mstatus_wen", false,-1);
    tracep->declBit(c+79,"mcause_wen", false,-1);
    tracep->declBit(c+80,"mtvec_wen", false,-1);
    tracep->declBus(c+109,"immI", false,-1, 31,0);
    tracep->declBus(c+110,"immU", false,-1, 31,0);
    tracep->declBus(c+111,"immS", false,-1, 31,0);
    tracep->declBus(c+112,"immB", false,-1, 31,0);
    tracep->declBus(c+113,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+99,"pc", false,-1, 31,0);
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBit(c+81,"if_done", false,-1);
    tracep->declBit(c+102,"difftest", false,-1);
    tracep->declBus(c+133,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+137,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+138,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+134,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+135,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+139,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+140,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+136,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+141,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+142,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+82,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+85,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+83,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+84,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+87,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+82,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+85,"axi_arvalid", false,-1);
    tracep->declBit(c+88,"axi_rready", false,-1);
    tracep->declBus(c+144,"IDLE", false,-1, 1,0);
    tracep->declBus(c+145,"FETCH", false,-1, 1,0);
    tracep->declBus(c+146,"DONE", false,-1, 1,0);
    tracep->declBus(c+147,"DIFF", false,-1, 1,0);
    tracep->declBus(c+94,"state", false,-1, 1,0);
    tracep->declBit(c+114,"start", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU_ysyx_24110017 ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+103,"op", false,-1, 6,0);
    tracep->declBus(c+64,"rd", false,-1, 4,0);
    tracep->declBus(c+67,"offset", false,-1, 31,0);
    tracep->declBus(c+104,"funct3", false,-1, 2,0);
    tracep->declBus(c+72,"r1", false,-1, 31,0);
    tracep->declBus(c+73,"r2", false,-1, 31,0);
    tracep->declBus(c+5,"rdata", false,-1, 31,0);
    tracep->declBus(c+41,"lrd", false,-1, 4,0);
    tracep->declBit(c+42,"ldone", false,-1);
    tracep->declBit(c+43,"lbdone", false,-1);
    tracep->declBit(c+44,"lhdone", false,-1);
    tracep->declBit(c+45,"lwdone", false,-1);
    tracep->declBit(c+46,"lbudone", false,-1);
    tracep->declBit(c+47,"lhudone", false,-1);
    tracep->declBus(c+48,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+52,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+89,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+49,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+57,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+53,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+90,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+6,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+91,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+54,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+50,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+55,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+92,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+5,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+143,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+93,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+56,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+115,"valid", false,-1);
    tracep->declBit(c+116,"wen", false,-1);
    tracep->declBus(c+117,"raddr", false,-1, 31,0);
    tracep->declBus(c+118,"waddr", false,-1, 31,0);
    tracep->declBus(c+119,"wdata", false,-1, 31,0);
    tracep->declBus(c+120,"wmask", false,-1, 7,0);
    tracep->declBus(c+58,"axi_araddr_reg", false,-1, 31,0);
    tracep->declBus(c+59,"axi_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+60,"axi_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+61,"axi_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+144,"IDLE", false,-1, 1,0);
    tracep->declBus(c+145,"READ", false,-1, 1,0);
    tracep->declBus(c+146,"WRITE", false,-1, 1,0);
    tracep->declBus(c+147,"DONE", false,-1, 1,0);
    tracep->declBus(c+62,"state", false,-1, 1,0);
    tracep->declBit(c+55,"axi_arvalid", false,-1);
    tracep->declBit(c+56,"axi_rready", false,-1);
    tracep->declBus(c+50,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+52,"axi_awvalid", false,-1);
    tracep->declBit(c+53,"axi_wvalid", false,-1);
    tracep->declBus(c+48,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+49,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+57,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+54,"axi_bready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+103,"op", false,-1, 6,0);
    tracep->declBus(c+104,"funct3", false,-1, 2,0);
    tracep->declBus(c+67,"offset", false,-1, 31,0);
    tracep->declBus(c+70,"r1", false,-1, 31,0);
    tracep->declBus(c+71,"r2", false,-1, 31,0);
    tracep->declBus(c+4,"mtvec", false,-1, 31,0);
    tracep->declBus(c+1,"mepc", false,-1, 31,0);
    tracep->declBus(c+99,"pc", false,-1, 31,0);
    tracep->declBus(c+100,"dnpc", false,-1, 31,0);
    tracep->declBit(c+81,"IF_DONE", false,-1);
    tracep->declBit(c+121,"jalen", false,-1);
    tracep->declBit(c+122,"jalren", false,-1);
    tracep->declBit(c+123,"beqen", false,-1);
    tracep->declBit(c+124,"bneen", false,-1);
    tracep->declBit(c+125,"blten", false,-1);
    tracep->declBit(c+126,"bgeen", false,-1);
    tracep->declBit(c+127,"bltuen", false,-1);
    tracep->declBit(c+128,"bgeuen", false,-1);
    tracep->declBit(c+95,"ecall_en", false,-1);
    tracep->declBit(c+129,"mret_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+148,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBus(c+107,"wdata", false,-1, 31,0);
    tracep->declBus(c+130,"waddr", false,-1, 4,0);
    tracep->declBit(c+131,"wen", false,-1);
    tracep->declBus(c+65,"raddr1", false,-1, 4,0);
    tracep->declBus(c+70,"r1", false,-1, 31,0);
    tracep->declBus(c+66,"raddr2", false,-1, 4,0);
    tracep->declBus(c+71,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+7+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+133,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+137,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+138,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+134,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+135,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+139,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+140,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+136,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+141,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+142,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+82,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+85,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+83,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+84,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+87,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+83,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+96,"tmp", false,-1, 31,0);
    tracep->declBit(c+86,"axi_arready", false,-1);
    tracep->declBit(c+87,"axi_rvalid", false,-1);
    tracep->declBus(c+84,"axi_rresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+48,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+52,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+89,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+49,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+63,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+53,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+90,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+6,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+91,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+54,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+50,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+55,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+92,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+5,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+143,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+93,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+56,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+92,"axi_arready", false,-1);
    tracep->declBit(c+93,"axi_rvalid", false,-1);
    tracep->declBit(c+89,"axi_awready", false,-1);
    tracep->declBit(c+90,"axi_wready", false,-1);
    tracep->declBit(c+91,"axi_bvalid", false,-1);
    tracep->declBus(c+39,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+6,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+5,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+40,"s_wen", false,-1);
    tracep->declBus(c+132,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+103,"op", false,-1, 6,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+104,"funct3", false,-1, 2,0);
    tracep->declBus(c+99,"pc", false,-1, 31,0);
    tracep->declBus(c+70,"r1", false,-1, 31,0);
    tracep->declBus(c+71,"r2", false,-1, 31,0);
    tracep->declBus(c+106,"res", false,-1, 31,0);
    tracep->declBus(c+72,"a", false,-1, 31,0);
    tracep->declBus(c+73,"b", false,-1, 31,0);
    tracep->declBus(c+107,"xrd", false,-1, 31,0);
    tracep->declBit(c+42,"ldone", false,-1);
    tracep->declBus(c+1,"mepc", false,-1, 31,0);
    tracep->declBus(c+2,"mstatus", false,-1, 31,0);
    tracep->declBus(c+3,"mcause", false,-1, 31,0);
    tracep->declBus(c+4,"mtvec", false,-1, 31,0);
    tracep->declBus(c+74,"csrs", false,-1, 31,0);
    tracep->declBus(c+75,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+108,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+76,"mcause_in", false,-1, 31,0);
    tracep->declBit(c+150,"mepc_wen", false,-1);
    tracep->declBit(c+151,"mstatus_wen", false,-1);
    tracep->declBit(c+152,"mcause_wen", false,-1);
    tracep->declBit(c+153,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+149,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+76,"din", false,-1, 31,0);
    tracep->declBus(c+3,"dout", false,-1, 31,0);
    tracep->declBit(c+79,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+149,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+108,"din", false,-1, 31,0);
    tracep->declBus(c+1,"dout", false,-1, 31,0);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+149,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+155,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+75,"din", false,-1, 31,0);
    tracep->declBus(c+2,"dout", false,-1, 31,0);
    tracep->declBit(c+78,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+149,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBus(c+75,"din", false,-1, 31,0);
    tracep->declBus(c+4,"dout", false,-1, 31,0);
    tracep->declBit(c+80,"wen", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullCData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+40,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    bufp->fullCData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__lrd),5);
    bufp->fullBit(oldp+42,(vlSelf->top_ysyx_24110017__DOT__ldone));
    bufp->fullBit(oldp+43,(vlSelf->top_ysyx_24110017__DOT__lbdone));
    bufp->fullBit(oldp+44,(vlSelf->top_ysyx_24110017__DOT__lhdone));
    bufp->fullBit(oldp+45,(vlSelf->top_ysyx_24110017__DOT__lwdone));
    bufp->fullBit(oldp+46,(vlSelf->top_ysyx_24110017__DOT__lbudone));
    bufp->fullBit(oldp+47,(vlSelf->top_ysyx_24110017__DOT__lhudone));
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_araddr),32);
    bufp->fullCData(oldp+51,((0xfU & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb))),4);
    bufp->fullBit(oldp+52,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awvalid));
    bufp->fullBit(oldp+53,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wvalid));
    bufp->fullBit(oldp+54,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_bready));
    bufp->fullBit(oldp+55,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_arvalid));
    bufp->fullBit(oldp+56,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_rready));
    bufp->fullCData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb),8);
    bufp->fullIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_araddr_reg),32);
    bufp->fullIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr_reg),32);
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata_reg),32);
    bufp->fullCData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb_reg),8);
    bufp->fullCData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state),2);
    bufp->fullCData(oldp+63,((0xfU & (IData)(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb))),8);
    bufp->fullCData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullBit(oldp+69,(((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h152fdc2a__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h061acfa6__0))));
    bufp->fullIData(oldp+70,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__a),32);
    bufp->fullIData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__b),32);
    bufp->fullIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__csrs),32);
    bufp->fullIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__csrs_in),32);
    bufp->fullIData(oldp+76,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullBit(oldp+77,(((IData)(vlSelf->__VdfgTmp_he77478c1__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+78,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+79,(((IData)(vlSelf->__VdfgTmp_he7787a83__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+80,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullBit(oldp+81,(vlSelf->top_ysyx_24110017__DOT__IFU_DONE));
    bufp->fullIData(oldp+82,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullIData(oldp+83,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+84,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+85,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+86,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+87,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+88,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+89,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+90,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+91,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+92,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+93,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullCData(oldp+94,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+95,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
    bufp->fullIData(oldp+96,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullBit(oldp+97,(vlSelf->clk));
    bufp->fullBit(oldp+98,(vlSelf->rst));
    bufp->fullIData(oldp+99,(vlSelf->pc),32);
    bufp->fullIData(oldp+100,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+101,(vlSelf->inst),32);
    bufp->fullBit(oldp+102,(vlSelf->DIFFTEST));
    bufp->fullCData(oldp+103,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+104,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+105,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+106,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+107,((((0x13U == (0x7fU & vlSelf->inst)) 
                                | ((0xfU == (0x7fU 
                                             & vlSelf->inst)) 
                                   | ((0x73U == (0x7fU 
                                                 & vlSelf->inst)) 
                                      | ((0x23U == 
                                          (0x7fU & vlSelf->inst)) 
                                         | ((0x33U 
                                             == (0x7fU 
                                                 & vlSelf->inst)) 
                                            | (IData)(vlSelf->top_ysyx_24110017__DOT__ldone))))))
                                ? vlSelf->top_ysyx_24110017__DOT__res
                                : ((0x6fU == (0x7fU 
                                              & vlSelf->inst))
                                    ? ((IData)(4U) 
                                       + vlSelf->pc)
                                    : ((0x67U == (0x7fU 
                                                  & vlSelf->inst))
                                        ? ((IData)(4U) 
                                           + vlSelf->pc)
                                        : ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->inst))
                                            ? vlSelf->top_ysyx_24110017__DOT__imm
                                            : ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst))
                                                ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                                : 0U)))))),32);
    bufp->fullIData(oldp+108,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullIData(oldp+109,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+110,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+111,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+112,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+113,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+114,((0x80000000U <= vlSelf->pc)));
    bufp->fullBit(oldp+115,(((3U == (0x7fU & vlSelf->inst)) 
                             | (0x23U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+116,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+117,(((3U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+118,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+119,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__b
                                : 0U)),32);
    bufp->fullCData(oldp+120,(((IData)((0x23U == (0x707fU 
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
    bufp->fullBit(oldp+121,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+122,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+123,((IData)(((0x63U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+124,((IData)(((0x1063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+125,((IData)(((0x4063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+126,((IData)(((0x5063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+127,((IData)(((0x6063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+128,((IData)(((0x7063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+129,((IData)(((0x73U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
    bufp->fullCData(oldp+130,(((IData)(vlSelf->top_ysyx_24110017__DOT__lrd) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__rd))),5);
    bufp->fullBit(oldp+131,(((IData)(vlSelf->top_ysyx_24110017__DOT__ldone) 
                             | ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h152fdc2a__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h061acfa6__0)))));
    bufp->fullIData(oldp+132,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
    bufp->fullIData(oldp+133,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+134,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+135,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),4);
    bufp->fullCData(oldp+136,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BRESP),2);
    bufp->fullBit(oldp+137,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+138,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWREADY));
    bufp->fullBit(oldp+139,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+140,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WREADY));
    bufp->fullBit(oldp+141,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BVALID));
    bufp->fullBit(oldp+142,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullCData(oldp+143,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RRESP),2);
    bufp->fullCData(oldp+144,(0U),2);
    bufp->fullCData(oldp+145,(1U),2);
    bufp->fullCData(oldp+146,(2U),2);
    bufp->fullCData(oldp+147,(3U),2);
    bufp->fullIData(oldp+148,(5U),32);
    bufp->fullIData(oldp+149,(0x20U),32);
    bufp->fullBit(oldp+150,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mepc_wen));
    bufp->fullBit(oldp+151,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mstatus_wen));
    bufp->fullBit(oldp+152,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mcause_wen));
    bufp->fullBit(oldp+153,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mtvec_wen));
    bufp->fullIData(oldp+154,(0U),32);
    bufp->fullIData(oldp+155,(0x1800U),32);
}
