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
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+91,"dnpc", false,-1, 31,0);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBit(c+93,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+91,"dnpc", false,-1, 31,0);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBit(c+93,"DIFFTEST", false,-1);
    tracep->declBus(c+94,"op", false,-1, 6,0);
    tracep->declBus(c+95,"rd", false,-1, 4,0);
    tracep->declBus(c+96,"funct3", false,-1, 2,0);
    tracep->declBus(c+55,"rs1", false,-1, 4,0);
    tracep->declBus(c+56,"rs2", false,-1, 4,0);
    tracep->declBus(c+57,"imm", false,-1, 31,0);
    tracep->declBus(c+58,"funct7", false,-1, 6,0);
    tracep->declBus(c+97,"shamt", false,-1, 4,0);
    tracep->declBit(c+59,"wr_en", false,-1);
    tracep->declBus(c+60,"res", false,-1, 31,0);
    tracep->declBus(c+61,"r1", false,-1, 31,0);
    tracep->declBus(c+62,"r2", false,-1, 31,0);
    tracep->declBus(c+63,"a", false,-1, 31,0);
    tracep->declBus(c+64,"b", false,-1, 31,0);
    tracep->declBus(c+98,"xrd", false,-1, 31,0);
    tracep->declBus(c+65,"csrs", false,-1, 31,0);
    tracep->declBus(c+66,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+99,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+1,"mepc", false,-1, 31,0);
    tracep->declBus(c+2,"mstatus", false,-1, 31,0);
    tracep->declBus(c+67,"mcause_in", false,-1, 31,0);
    tracep->declBus(c+3,"mcause", false,-1, 31,0);
    tracep->declBus(c+4,"mtvec", false,-1, 31,0);
    tracep->declBit(c+68,"mepc_wen", false,-1);
    tracep->declBit(c+69,"mstatus_wen", false,-1);
    tracep->declBit(c+70,"mcause_wen", false,-1);
    tracep->declBit(c+71,"mtvec_wen", false,-1);
    tracep->declBit(c+72,"IF_DONE", false,-1);
    tracep->declBus(c+123,"AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+124,"AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+73,"AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+74,"AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+125,"AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+126,"AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+75,"AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+127,"AXI_AWVALID", false,-1);
    tracep->declBit(c+128,"AXI_AWREADY", false,-1);
    tracep->declBit(c+129,"AXI_WVALID", false,-1);
    tracep->declBit(c+130,"AXI_WREADY", false,-1);
    tracep->declBit(c+131,"AXI_BVALID", false,-1);
    tracep->declBit(c+132,"AXI_BREADY", false,-1);
    tracep->declBit(c+76,"AXI_ARVALID", false,-1);
    tracep->declBit(c+77,"AXI_ARREADY", false,-1);
    tracep->declBit(c+78,"AXI_RVALID", false,-1);
    tracep->declBit(c+79,"AXI_RREADY", false,-1);
    tracep->declBit(c+40,"ldone", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+94,"op", false,-1, 6,0);
    tracep->declBus(c+96,"sel", false,-1, 2,0);
    tracep->declBus(c+57,"imm", false,-1, 31,0);
    tracep->declBus(c+58,"funct7", false,-1, 6,0);
    tracep->declBus(c+97,"shamt", false,-1, 4,0);
    tracep->declBus(c+63,"a", false,-1, 31,0);
    tracep->declBus(c+64,"b", false,-1, 31,0);
    tracep->declBus(c+65,"csrs", false,-1, 31,0);
    tracep->declBus(c+66,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+60,"res", false,-1, 31,0);
    tracep->declBit(c+40,"ldone", false,-1);
    tracep->declBus(c+5,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("LSU_ysyx_24110017 ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+94,"op", false,-1, 6,0);
    tracep->declBus(c+63,"r1", false,-1, 31,0);
    tracep->declBus(c+64,"r2", false,-1, 31,0);
    tracep->declBus(c+57,"offset", false,-1, 31,0);
    tracep->declBus(c+96,"function3", false,-1, 2,0);
    tracep->declBus(c+5,"rdata", false,-1, 31,0);
    tracep->declBit(c+40,"ldone", false,-1);
    tracep->declBit(c+100,"valid", false,-1);
    tracep->declBit(c+101,"wen", false,-1);
    tracep->declBus(c+102,"raddr", false,-1, 31,0);
    tracep->declBus(c+103,"waddr", false,-1, 31,0);
    tracep->declBus(c+104,"wdata", false,-1, 31,0);
    tracep->declBus(c+105,"wmask", false,-1, 7,0);
    tracep->declBus(c+41,"axi_araddr_reg", false,-1, 31,0);
    tracep->declBus(c+42,"axi_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+43,"axi_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+44,"axi_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+45,"AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+46,"AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+47,"AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+5,"AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+48,"AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+6,"AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+133,"AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+49,"AXI_AWVALID", false,-1);
    tracep->declBit(c+80,"AXI_AWREADY", false,-1);
    tracep->declBit(c+50,"AXI_WVALID", false,-1);
    tracep->declBit(c+81,"AXI_WREADY", false,-1);
    tracep->declBit(c+82,"AXI_BVALID", false,-1);
    tracep->declBit(c+51,"AXI_BREADY", false,-1);
    tracep->declBit(c+52,"AXI_ARVALID", false,-1);
    tracep->declBit(c+83,"AXI_ARREADY", false,-1);
    tracep->declBit(c+84,"AXI_RVALID", false,-1);
    tracep->declBit(c+53,"AXI_RREADY", false,-1);
    tracep->declBus(c+134,"IDLE", false,-1, 1,0);
    tracep->declBus(c+135,"READ", false,-1, 1,0);
    tracep->declBus(c+136,"WRITE", false,-1, 1,0);
    tracep->declBus(c+137,"DONE", false,-1, 1,0);
    tracep->declBus(c+54,"state", false,-1, 1,0);
    tracep->declBit(c+52,"axi_arvalid", false,-1);
    tracep->declBit(c+53,"axi_rready", false,-1);
    tracep->declBus(c+47,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+49,"axi_awvalid", false,-1);
    tracep->declBit(c+50,"axi_wvalid", false,-1);
    tracep->declBus(c+45,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+46,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+48,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+51,"axi_bready", false,-1);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+45,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+49,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+80,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+46,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+48,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+50,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+81,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+6,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+82,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+51,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+47,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+52,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+83,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+5,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+133,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+84,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+53,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+83,"axi_arready", false,-1);
    tracep->declBit(c+84,"axi_rvalid", false,-1);
    tracep->declBit(c+80,"axi_awready", false,-1);
    tracep->declBit(c+81,"axi_wready", false,-1);
    tracep->declBit(c+82,"axi_bvalid", false,-1);
    tracep->declBus(c+7,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+6,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+5,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+106,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBus(c+94,"op", false,-1, 6,0);
    tracep->declBus(c+95,"rd", false,-1, 4,0);
    tracep->declBus(c+96,"funct3", false,-1, 2,0);
    tracep->declBus(c+55,"rs1", false,-1, 4,0);
    tracep->declBus(c+56,"rs2", false,-1, 4,0);
    tracep->declBus(c+57,"imm", false,-1, 31,0);
    tracep->declBus(c+58,"funct7", false,-1, 6,0);
    tracep->declBus(c+97,"shamt", false,-1, 4,0);
    tracep->declBit(c+59,"wr_en", false,-1);
    tracep->declBit(c+68,"mepc_wen", false,-1);
    tracep->declBit(c+69,"mstatus_wen", false,-1);
    tracep->declBit(c+70,"mcause_wen", false,-1);
    tracep->declBit(c+71,"mtvec_wen", false,-1);
    tracep->declBus(c+107,"immI", false,-1, 31,0);
    tracep->declBus(c+108,"immU", false,-1, 31,0);
    tracep->declBus(c+109,"immS", false,-1, 31,0);
    tracep->declBus(c+110,"immB", false,-1, 31,0);
    tracep->declBus(c+111,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBit(c+72,"if_done", false,-1);
    tracep->declBit(c+93,"difftest", false,-1);
    tracep->declBus(c+123,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+127,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+128,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+124,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+125,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+129,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+130,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+126,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+131,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+132,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+73,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+76,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+77,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+74,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+75,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+78,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+79,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+73,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+76,"axi_arvalid", false,-1);
    tracep->declBit(c+79,"axi_rready", false,-1);
    tracep->declBus(c+134,"IDLE", false,-1, 1,0);
    tracep->declBus(c+135,"FETCH", false,-1, 1,0);
    tracep->declBus(c+136,"DONE", false,-1, 1,0);
    tracep->declBus(c+137,"DIFF", false,-1, 1,0);
    tracep->declBus(c+85,"state", false,-1, 1,0);
    tracep->declBit(c+112,"start", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+94,"op", false,-1, 6,0);
    tracep->declBus(c+96,"funct3", false,-1, 2,0);
    tracep->declBus(c+57,"offset", false,-1, 31,0);
    tracep->declBus(c+61,"r1", false,-1, 31,0);
    tracep->declBus(c+62,"r2", false,-1, 31,0);
    tracep->declBus(c+4,"mtvec", false,-1, 31,0);
    tracep->declBus(c+1,"mepc", false,-1, 31,0);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+91,"dnpc", false,-1, 31,0);
    tracep->declBit(c+72,"IF_DONE", false,-1);
    tracep->declBit(c+113,"jalen", false,-1);
    tracep->declBit(c+114,"jalren", false,-1);
    tracep->declBit(c+115,"beqen", false,-1);
    tracep->declBit(c+116,"bneen", false,-1);
    tracep->declBit(c+117,"blten", false,-1);
    tracep->declBit(c+118,"bgeen", false,-1);
    tracep->declBit(c+119,"bltuen", false,-1);
    tracep->declBit(c+120,"bgeuen", false,-1);
    tracep->declBit(c+86,"ecall_en", false,-1);
    tracep->declBit(c+121,"mret_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+138,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+139,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBus(c+98,"wdata", false,-1, 31,0);
    tracep->declBus(c+95,"waddr", false,-1, 4,0);
    tracep->declBit(c+122,"wen", false,-1);
    tracep->declBus(c+55,"raddr1", false,-1, 4,0);
    tracep->declBus(c+61,"r1", false,-1, 31,0);
    tracep->declBus(c+56,"raddr2", false,-1, 4,0);
    tracep->declBus(c+62,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+8+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+123,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+127,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+128,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+124,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+125,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+129,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+130,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+126,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+131,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+132,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+73,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+76,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+77,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+74,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+75,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+78,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+79,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+74,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+87,"tmp", false,-1, 31,0);
    tracep->declBit(c+77,"axi_arready", false,-1);
    tracep->declBit(c+78,"axi_rvalid", false,-1);
    tracep->declBus(c+75,"axi_rresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+94,"op", false,-1, 6,0);
    tracep->declBus(c+57,"imm", false,-1, 31,0);
    tracep->declBus(c+96,"funct3", false,-1, 2,0);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+61,"r1", false,-1, 31,0);
    tracep->declBus(c+62,"r2", false,-1, 31,0);
    tracep->declBus(c+60,"res", false,-1, 31,0);
    tracep->declBus(c+63,"a", false,-1, 31,0);
    tracep->declBus(c+64,"b", false,-1, 31,0);
    tracep->declBus(c+98,"xrd", false,-1, 31,0);
    tracep->declBus(c+1,"mepc", false,-1, 31,0);
    tracep->declBus(c+2,"mstatus", false,-1, 31,0);
    tracep->declBus(c+3,"mcause", false,-1, 31,0);
    tracep->declBus(c+4,"mtvec", false,-1, 31,0);
    tracep->declBus(c+65,"csrs", false,-1, 31,0);
    tracep->declBus(c+66,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+99,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+67,"mcause_in", false,-1, 31,0);
    tracep->declBit(c+140,"mepc_wen", false,-1);
    tracep->declBit(c+141,"mstatus_wen", false,-1);
    tracep->declBit(c+142,"mcause_wen", false,-1);
    tracep->declBit(c+143,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+139,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+144,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+67,"din", false,-1, 31,0);
    tracep->declBus(c+3,"dout", false,-1, 31,0);
    tracep->declBit(c+70,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+139,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+144,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+99,"din", false,-1, 31,0);
    tracep->declBus(c+1,"dout", false,-1, 31,0);
    tracep->declBit(c+68,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+139,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+145,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+66,"din", false,-1, 31,0);
    tracep->declBus(c+2,"dout", false,-1, 31,0);
    tracep->declBit(c+69,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+139,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+144,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+66,"din", false,-1, 31,0);
    tracep->declBus(c+4,"dout", false,-1, 31,0);
    tracep->declBit(c+71,"wen", false,-1);
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
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullCData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullBit(oldp+40,(vlSelf->top_ysyx_24110017__DOT__ldone));
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_araddr_reg),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_awaddr_reg),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_wdata_reg),32);
    bufp->fullCData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_wstrb_reg),8);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_wdata),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_araddr),32);
    bufp->fullCData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+49,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_awvalid));
    bufp->fullBit(oldp+50,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_wvalid));
    bufp->fullBit(oldp+51,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_bready));
    bufp->fullBit(oldp+52,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_arvalid));
    bufp->fullBit(oldp+53,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_rready));
    bufp->fullCData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__state),2);
    bufp->fullCData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullBit(oldp+59,(((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h152fdc2a__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h061acfa6__0))));
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__a),32);
    bufp->fullIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__b),32);
    bufp->fullIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__csrs),32);
    bufp->fullIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__csrs_in),32);
    bufp->fullIData(oldp+67,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullBit(oldp+68,(((IData)(vlSelf->__VdfgTmp_he77478c1__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+69,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->__VdfgTmp_he7787a83__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+71,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullBit(oldp+72,(vlSelf->top_ysyx_24110017__DOT__IF_DONE));
    bufp->fullIData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+76,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+77,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+78,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+79,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+80,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+81,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+82,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+83,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+84,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullCData(oldp+85,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+86,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
    bufp->fullIData(oldp+87,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullBit(oldp+88,(vlSelf->clk));
    bufp->fullBit(oldp+89,(vlSelf->rst));
    bufp->fullIData(oldp+90,(vlSelf->pc),32);
    bufp->fullIData(oldp+91,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+92,(vlSelf->inst),32);
    bufp->fullBit(oldp+93,(vlSelf->DIFFTEST));
    bufp->fullCData(oldp+94,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+95,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h152fdc2a__0) 
                               | ((3U == (0x7fU & vlSelf->inst)) 
                                  | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h061acfa6__0)))
                               ? (0x1fU & (vlSelf->inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+96,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+97,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+98,((((3U == (0x7fU & vlSelf->inst)) 
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
    bufp->fullIData(oldp+99,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullBit(oldp+100,(((3U == (0x7fU & vlSelf->inst)) 
                             | (0x23U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+101,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+102,(((3U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+103,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+104,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__b
                                : 0U)),32);
    bufp->fullCData(oldp+105,(((IData)((0x23U == (0x707fU 
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
    bufp->fullIData(oldp+106,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
    bufp->fullIData(oldp+107,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+108,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+109,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+110,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+111,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+112,((0x80000000U <= vlSelf->pc)));
    bufp->fullBit(oldp+113,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+114,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+115,((IData)(((0x63U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+116,((IData)(((0x1063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+117,((IData)(((0x4063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+118,((IData)(((0x5063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+119,((IData)(((0x6063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+120,((IData)(((0x7063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+121,((IData)(((0x73U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->top_ysyx_24110017__DOT__ldone) 
                             | ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h152fdc2a__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_h061acfa6__0)))));
    bufp->fullIData(oldp+123,(vlSelf->top_ysyx_24110017__DOT__AXI_AWADDR),32);
    bufp->fullIData(oldp+124,(vlSelf->top_ysyx_24110017__DOT__AXI_WDATA),32);
    bufp->fullCData(oldp+125,(vlSelf->top_ysyx_24110017__DOT__AXI_WSTRB),4);
    bufp->fullCData(oldp+126,(vlSelf->top_ysyx_24110017__DOT__AXI_BRESP),2);
    bufp->fullBit(oldp+127,(vlSelf->top_ysyx_24110017__DOT__AXI_AWVALID));
    bufp->fullBit(oldp+128,(vlSelf->top_ysyx_24110017__DOT__AXI_AWREADY));
    bufp->fullBit(oldp+129,(vlSelf->top_ysyx_24110017__DOT__AXI_WVALID));
    bufp->fullBit(oldp+130,(vlSelf->top_ysyx_24110017__DOT__AXI_WREADY));
    bufp->fullBit(oldp+131,(vlSelf->top_ysyx_24110017__DOT__AXI_BVALID));
    bufp->fullBit(oldp+132,(vlSelf->top_ysyx_24110017__DOT__AXI_BREADY));
    bufp->fullCData(oldp+133,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__AXI_RRESP),2);
    bufp->fullCData(oldp+134,(0U),2);
    bufp->fullCData(oldp+135,(1U),2);
    bufp->fullCData(oldp+136,(2U),2);
    bufp->fullCData(oldp+137,(3U),2);
    bufp->fullIData(oldp+138,(5U),32);
    bufp->fullIData(oldp+139,(0x20U),32);
    bufp->fullBit(oldp+140,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mepc_wen));
    bufp->fullBit(oldp+141,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mstatus_wen));
    bufp->fullBit(oldp+142,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mcause_wen));
    bufp->fullBit(oldp+143,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__mtvec_wen));
    bufp->fullIData(oldp+144,(0U),32);
    bufp->fullIData(oldp+145,(0x1800U),32);
}
