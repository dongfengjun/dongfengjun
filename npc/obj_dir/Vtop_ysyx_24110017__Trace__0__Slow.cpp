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
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+100,"pc", false,-1, 31,0);
    tracep->declBus(c+101,"dnpc", false,-1, 31,0);
    tracep->declBus(c+102,"inst", false,-1, 31,0);
    tracep->declBit(c+103,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+100,"pc", false,-1, 31,0);
    tracep->declBus(c+101,"dnpc", false,-1, 31,0);
    tracep->declBus(c+102,"inst", false,-1, 31,0);
    tracep->declBit(c+103,"DIFFTEST", false,-1);
    tracep->declBus(c+104,"op", false,-1, 6,0);
    tracep->declBus(c+64,"rd", false,-1, 4,0);
    tracep->declBus(c+43,"lrd", false,-1, 4,0);
    tracep->declBus(c+105,"funct3", false,-1, 2,0);
    tracep->declBus(c+65,"rs1", false,-1, 4,0);
    tracep->declBus(c+66,"rs2", false,-1, 4,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+68,"funct7", false,-1, 6,0);
    tracep->declBus(c+106,"shamt", false,-1, 4,0);
    tracep->declBit(c+69,"wr_en", false,-1);
    tracep->declBus(c+107,"res", false,-1, 31,0);
    tracep->declBit(c+44,"ldone", false,-1);
    tracep->declBus(c+70,"r1", false,-1, 31,0);
    tracep->declBus(c+71,"r2", false,-1, 31,0);
    tracep->declBus(c+72,"a", false,-1, 31,0);
    tracep->declBus(c+73,"b", false,-1, 31,0);
    tracep->declBus(c+108,"xrd", false,-1, 31,0);
    tracep->declBus(c+74,"csrs", false,-1, 31,0);
    tracep->declBus(c+75,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+109,"mepc_in", false,-1, 31,0);
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
    tracep->declBus(c+135,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+136,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+82,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+83,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+137,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+138,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+84,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+139,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+140,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+141,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+142,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+143,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+144,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+85,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+87,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"IFU_AXI_RREADY", false,-1);
    tracep->declBus(c+145,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+146,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+147,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+148,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+149,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+150,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+151,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+152,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+153,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+154,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+155,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+156,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+157,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+158,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+159,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+160,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+161,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+5,"rdata", false,-1);
    tracep->declBit(c+45,"lbdone", false,-1);
    tracep->declBit(c+46,"lhdone", false,-1);
    tracep->declBit(c+47,"lwdone", false,-1);
    tracep->declBit(c+48,"lbudone", false,-1);
    tracep->declBit(c+49,"lhudone", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+104,"op", false,-1, 6,0);
    tracep->declBus(c+105,"sel", false,-1, 2,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+68,"funct7", false,-1, 6,0);
    tracep->declBus(c+106,"shamt", false,-1, 4,0);
    tracep->declBus(c+72,"a", false,-1, 31,0);
    tracep->declBus(c+73,"b", false,-1, 31,0);
    tracep->declBus(c+74,"csrs", false,-1, 31,0);
    tracep->declBus(c+75,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+107,"res", false,-1, 31,0);
    tracep->declBus(c+6,"rdata", false,-1, 31,0);
    tracep->declBit(c+45,"lbdone", false,-1);
    tracep->declBit(c+46,"lhdone", false,-1);
    tracep->declBit(c+47,"lwdone", false,-1);
    tracep->declBit(c+48,"lbudone", false,-1);
    tracep->declBit(c+49,"lhudone", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+102,"inst", false,-1, 31,0);
    tracep->declBus(c+104,"op", false,-1, 6,0);
    tracep->declBus(c+64,"rd", false,-1, 4,0);
    tracep->declBus(c+105,"funct3", false,-1, 2,0);
    tracep->declBus(c+65,"rs1", false,-1, 4,0);
    tracep->declBus(c+66,"rs2", false,-1, 4,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+68,"funct7", false,-1, 6,0);
    tracep->declBus(c+106,"shamt", false,-1, 4,0);
    tracep->declBit(c+69,"wr_en", false,-1);
    tracep->declBit(c+77,"mepc_wen", false,-1);
    tracep->declBit(c+78,"mstatus_wen", false,-1);
    tracep->declBit(c+79,"mcause_wen", false,-1);
    tracep->declBit(c+80,"mtvec_wen", false,-1);
    tracep->declBus(c+110,"immI", false,-1, 31,0);
    tracep->declBus(c+111,"immU", false,-1, 31,0);
    tracep->declBus(c+112,"immS", false,-1, 31,0);
    tracep->declBus(c+113,"immB", false,-1, 31,0);
    tracep->declBus(c+114,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+100,"pc", false,-1, 31,0);
    tracep->declBus(c+102,"inst", false,-1, 31,0);
    tracep->declBit(c+81,"if_done", false,-1);
    tracep->declBit(c+103,"difftest", false,-1);
    tracep->declBus(c+135,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+139,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+140,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+136,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+137,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+141,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+142,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+138,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+143,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+144,"M_AXI_BREADY", false,-1);
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
    tracep->declBus(c+162,"IDLE", false,-1, 1,0);
    tracep->declBus(c+163,"FETCH", false,-1, 1,0);
    tracep->declBus(c+164,"DONE", false,-1, 1,0);
    tracep->declBus(c+165,"DIFF", false,-1, 1,0);
    tracep->declBus(c+89,"state", false,-1, 1,0);
    tracep->declBit(c+115,"start", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU_ysyx_24110017 ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+104,"op", false,-1, 6,0);
    tracep->declBus(c+64,"rd", false,-1, 4,0);
    tracep->declBus(c+72,"offset", false,-1, 31,0);
    tracep->declBus(c+90,"funct3", false,-1, 2,0);
    tracep->declBus(c+67,"r1", false,-1, 31,0);
    tracep->declBus(c+116,"r2", false,-1, 31,0);
    tracep->declBus(c+7,"rdata", false,-1, 31,0);
    tracep->declBus(c+43,"lrd", false,-1, 4,0);
    tracep->declBit(c+44,"ldone", false,-1);
    tracep->declBit(c+45,"lbdone", false,-1);
    tracep->declBit(c+46,"lhdone", false,-1);
    tracep->declBit(c+47,"lwdone", false,-1);
    tracep->declBit(c+48,"lbudone", false,-1);
    tracep->declBit(c+49,"lhudone", false,-1);
    tracep->declBit(c+117,"valid", false,-1);
    tracep->declBit(c+118,"wen", false,-1);
    tracep->declBus(c+119,"raddr", false,-1, 31,0);
    tracep->declBus(c+120,"waddr", false,-1, 31,0);
    tracep->declBus(c+121,"wdata", false,-1, 31,0);
    tracep->declBus(c+122,"wmask", false,-1, 7,0);
    tracep->declBus(c+50,"axi_araddr_reg", false,-1, 31,0);
    tracep->declBus(c+51,"axi_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+52,"axi_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+53,"axi_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+54,"AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+55,"AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+56,"AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+7,"AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+57,"AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+8,"AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+166,"AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+58,"AXI_AWVALID", false,-1);
    tracep->declBit(c+91,"AXI_AWREADY", false,-1);
    tracep->declBit(c+59,"AXI_WVALID", false,-1);
    tracep->declBit(c+92,"AXI_WREADY", false,-1);
    tracep->declBit(c+93,"AXI_BVALID", false,-1);
    tracep->declBit(c+60,"AXI_BREADY", false,-1);
    tracep->declBit(c+61,"AXI_ARVALID", false,-1);
    tracep->declBit(c+94,"AXI_ARREADY", false,-1);
    tracep->declBit(c+95,"AXI_RVALID", false,-1);
    tracep->declBit(c+62,"AXI_RREADY", false,-1);
    tracep->declBus(c+162,"IDLE", false,-1, 1,0);
    tracep->declBus(c+163,"READ", false,-1, 1,0);
    tracep->declBus(c+164,"WRITE", false,-1, 1,0);
    tracep->declBus(c+165,"DONE", false,-1, 1,0);
    tracep->declBus(c+63,"state", false,-1, 1,0);
    tracep->declBit(c+61,"axi_arvalid", false,-1);
    tracep->declBit(c+62,"axi_rready", false,-1);
    tracep->declBus(c+56,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+58,"axi_awvalid", false,-1);
    tracep->declBit(c+59,"axi_wvalid", false,-1);
    tracep->declBus(c+54,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+57,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+60,"axi_bready", false,-1);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+54,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+58,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+91,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+55,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+57,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+59,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+92,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+8,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+93,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+60,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+56,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+61,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+94,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+7,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+166,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+95,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+62,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+94,"axi_arready", false,-1);
    tracep->declBit(c+95,"axi_rvalid", false,-1);
    tracep->declBit(c+91,"axi_awready", false,-1);
    tracep->declBit(c+92,"axi_wready", false,-1);
    tracep->declBit(c+93,"axi_bvalid", false,-1);
    tracep->declBus(c+9,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+8,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+7,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+10,"s_wen", false,-1);
    tracep->declBus(c+123,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+104,"op", false,-1, 6,0);
    tracep->declBus(c+105,"funct3", false,-1, 2,0);
    tracep->declBus(c+67,"offset", false,-1, 31,0);
    tracep->declBus(c+70,"r1", false,-1, 31,0);
    tracep->declBus(c+71,"r2", false,-1, 31,0);
    tracep->declBus(c+4,"mtvec", false,-1, 31,0);
    tracep->declBus(c+1,"mepc", false,-1, 31,0);
    tracep->declBus(c+100,"pc", false,-1, 31,0);
    tracep->declBus(c+101,"dnpc", false,-1, 31,0);
    tracep->declBit(c+81,"IF_DONE", false,-1);
    tracep->declBit(c+124,"jalen", false,-1);
    tracep->declBit(c+125,"jalren", false,-1);
    tracep->declBit(c+126,"beqen", false,-1);
    tracep->declBit(c+127,"bneen", false,-1);
    tracep->declBit(c+128,"blten", false,-1);
    tracep->declBit(c+129,"bgeen", false,-1);
    tracep->declBit(c+130,"bltuen", false,-1);
    tracep->declBit(c+131,"bgeuen", false,-1);
    tracep->declBit(c+96,"ecall_en", false,-1);
    tracep->declBit(c+132,"mret_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+167,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+168,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBus(c+108,"wdata", false,-1, 31,0);
    tracep->declBus(c+133,"waddr", false,-1, 4,0);
    tracep->declBit(c+134,"wen", false,-1);
    tracep->declBus(c+65,"raddr1", false,-1, 4,0);
    tracep->declBus(c+70,"r1", false,-1, 31,0);
    tracep->declBus(c+66,"raddr2", false,-1, 4,0);
    tracep->declBus(c+71,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+11+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+135,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+139,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+140,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+136,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+137,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+141,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+142,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+138,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+143,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+144,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+82,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+85,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+83,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+84,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+87,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+83,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+97,"tmp", false,-1, 31,0);
    tracep->declBit(c+86,"axi_arready", false,-1);
    tracep->declBit(c+87,"axi_rvalid", false,-1);
    tracep->declBus(c+84,"axi_rresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+104,"op", false,-1, 6,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+105,"funct3", false,-1, 2,0);
    tracep->declBus(c+100,"pc", false,-1, 31,0);
    tracep->declBus(c+70,"r1", false,-1, 31,0);
    tracep->declBus(c+71,"r2", false,-1, 31,0);
    tracep->declBus(c+107,"res", false,-1, 31,0);
    tracep->declBus(c+72,"a", false,-1, 31,0);
    tracep->declBus(c+73,"b", false,-1, 31,0);
    tracep->declBus(c+108,"xrd", false,-1, 31,0);
    tracep->declBit(c+44,"ldone", false,-1);
    tracep->declBus(c+1,"mepc", false,-1, 31,0);
    tracep->declBus(c+2,"mstatus", false,-1, 31,0);
    tracep->declBus(c+3,"mcause", false,-1, 31,0);
    tracep->declBus(c+4,"mtvec", false,-1, 31,0);
    tracep->declBus(c+74,"csrs", false,-1, 31,0);
    tracep->declBus(c+75,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+109,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+76,"mcause_in", false,-1, 31,0);
    tracep->declBit(c+169,"mepc_wen", false,-1);
    tracep->declBit(c+170,"mstatus_wen", false,-1);
    tracep->declBit(c+171,"mcause_wen", false,-1);
    tracep->declBit(c+172,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+168,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+76,"din", false,-1, 31,0);
    tracep->declBus(c+3,"dout", false,-1, 31,0);
    tracep->declBit(c+79,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+168,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+109,"din", false,-1, 31,0);
    tracep->declBus(c+1,"dout", false,-1, 31,0);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+168,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+174,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+75,"din", false,-1, 31,0);
    tracep->declBus(c+2,"dout", false,-1, 31,0);
    tracep->declBit(c+78,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+168,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
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
    bufp->fullBit(oldp+5,((1U & vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata)));
    bufp->fullIData(oldp+6,((1U & vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata)),32);
    bufp->fullIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullCData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+10,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullCData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__lrd),5);
    bufp->fullBit(oldp+44,(vlSelf->top_ysyx_24110017__DOT__ldone));
    bufp->fullBit(oldp+45,(vlSelf->top_ysyx_24110017__DOT__lbdone));
    bufp->fullBit(oldp+46,(vlSelf->top_ysyx_24110017__DOT__lhdone));
    bufp->fullBit(oldp+47,(vlSelf->top_ysyx_24110017__DOT__lwdone));
    bufp->fullBit(oldp+48,(vlSelf->top_ysyx_24110017__DOT__lbudone));
    bufp->fullBit(oldp+49,(vlSelf->top_ysyx_24110017__DOT__lhudone));
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_araddr_reg),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr_reg),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata_reg),32);
    bufp->fullCData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb_reg),8);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wdata),32);
    bufp->fullIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_araddr),32);
    bufp->fullCData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+58,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_awvalid));
    bufp->fullBit(oldp+59,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_wvalid));
    bufp->fullBit(oldp+60,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_bready));
    bufp->fullBit(oldp+61,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_arvalid));
    bufp->fullBit(oldp+62,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__axi_rready));
    bufp->fullCData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__state),2);
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
    bufp->fullCData(oldp+89,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullCData(oldp+90,((7U & vlSelf->top_ysyx_24110017__DOT__b)),3);
    bufp->fullBit(oldp+91,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+92,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+93,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+94,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+95,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+96,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
    bufp->fullIData(oldp+97,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullBit(oldp+98,(vlSelf->clk));
    bufp->fullBit(oldp+99,(vlSelf->rst));
    bufp->fullIData(oldp+100,(vlSelf->pc),32);
    bufp->fullIData(oldp+101,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+102,(vlSelf->inst),32);
    bufp->fullBit(oldp+103,(vlSelf->DIFFTEST));
    bufp->fullCData(oldp+104,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+105,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+106,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+107,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+108,((((0x13U == (0x7fU & vlSelf->inst)) 
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
    bufp->fullIData(oldp+109,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullIData(oldp+110,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+111,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+112,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+113,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+114,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+115,((0x80000000U <= vlSelf->pc)));
    bufp->fullIData(oldp+116,((7U & (vlSelf->inst >> 0xcU))),32);
    bufp->fullBit(oldp+117,(((3U == (0x7fU & vlSelf->inst)) 
                             | (0x23U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+118,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+119,(((3U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+120,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+121,(((0x23U == (0x7fU & vlSelf->inst))
                                ? (7U & (vlSelf->inst 
                                         >> 0xcU)) : 0U)),32);
    bufp->fullCData(oldp+122,((((0x23U == (0x7fU & vlSelf->inst)) 
                                & (0U == (7U & vlSelf->top_ysyx_24110017__DOT__b)))
                                ? 1U : (((0x23U == 
                                          (0x7fU & vlSelf->inst)) 
                                         & (1U == (7U 
                                                   & vlSelf->top_ysyx_24110017__DOT__b)))
                                         ? 3U : (((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->top_ysyx_24110017__DOT__b)))
                                                  ? 0xfU
                                                  : 0U)))),8);
    bufp->fullIData(oldp+123,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
    bufp->fullBit(oldp+124,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+125,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+126,((IData)(((0x63U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+127,((IData)(((0x1063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+128,((IData)(((0x4063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+129,((IData)(((0x5063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+130,((IData)(((0x6063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+131,((IData)(((0x7063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+132,((IData)(((0x73U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
    bufp->fullCData(oldp+133,(((IData)(vlSelf->top_ysyx_24110017__DOT__lrd) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__rd))),5);
    bufp->fullBit(oldp+134,(((IData)(vlSelf->top_ysyx_24110017__DOT__ldone) 
                             | ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h152fdc2a__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h061acfa6__0)))));
    bufp->fullIData(oldp+135,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+136,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+137,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),4);
    bufp->fullCData(oldp+138,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BRESP),2);
    bufp->fullBit(oldp+139,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+140,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWREADY));
    bufp->fullBit(oldp+141,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+142,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WREADY));
    bufp->fullBit(oldp+143,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BVALID));
    bufp->fullBit(oldp+144,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullIData(oldp+145,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWADDR),32);
    bufp->fullIData(oldp+146,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_WDATA),32);
    bufp->fullIData(oldp+147,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_ARADDR),32);
    bufp->fullIData(oldp+148,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RDATA),32);
    bufp->fullCData(oldp+149,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_WSTRB),4);
    bufp->fullCData(oldp+150,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BRESP),2);
    bufp->fullCData(oldp+151,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RRESP),2);
    bufp->fullBit(oldp+152,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWVALID));
    bufp->fullBit(oldp+153,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY));
    bufp->fullBit(oldp+154,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_WVALID));
    bufp->fullBit(oldp+155,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_WREADY));
    bufp->fullBit(oldp+156,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+157,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BREADY));
    bufp->fullBit(oldp+158,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_ARVALID));
    bufp->fullBit(oldp+159,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_ARREADY));
    bufp->fullBit(oldp+160,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RVALID));
    bufp->fullBit(oldp+161,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RREADY));
    bufp->fullCData(oldp+162,(0U),2);
    bufp->fullCData(oldp+163,(1U),2);
    bufp->fullCData(oldp+164,(2U),2);
    bufp->fullCData(oldp+165,(3U),2);
    bufp->fullCData(oldp+166,(vlSelf->top_ysyx_24110017__DOT__LSU_ysyx_24110017__DOT__AXI_RRESP),2);
    bufp->fullIData(oldp+167,(5U),32);
    bufp->fullIData(oldp+168,(0x20U),32);
    bufp->fullBit(oldp+169,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mepc_wen));
    bufp->fullBit(oldp+170,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mstatus_wen));
    bufp->fullBit(oldp+171,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mcause_wen));
    bufp->fullBit(oldp+172,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mtvec_wen));
    bufp->fullIData(oldp+173,(0U),32);
    bufp->fullIData(oldp+174,(0x1800U),32);
}
