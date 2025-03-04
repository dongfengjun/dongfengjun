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
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+96,"pc", false,-1, 31,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBus(c+98,"inst", false,-1, 31,0);
    tracep->declBit(c+99,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+96,"pc", false,-1, 31,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBus(c+98,"inst", false,-1, 31,0);
    tracep->declBit(c+99,"DIFFTEST", false,-1);
    tracep->declBit(c+100,"PCU_VALID", false,-1);
    tracep->declBit(c+63,"IFU_READY", false,-1);
    tracep->declBit(c+139,"IFU_DONE", false,-1);
    tracep->declBus(c+140,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+141,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+64,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+65,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+142,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+143,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+66,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+144,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+145,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+146,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+147,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+148,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+149,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+67,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+68,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+69,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+70,"IFU_AXI_RREADY", false,-1);
    tracep->declBus(c+101,"op", false,-1, 6,0);
    tracep->declBus(c+71,"rd", false,-1, 4,0);
    tracep->declBus(c+102,"funct3", false,-1, 2,0);
    tracep->declBus(c+72,"rs1", false,-1, 4,0);
    tracep->declBus(c+73,"rs2", false,-1, 4,0);
    tracep->declBus(c+74,"imm", false,-1, 31,0);
    tracep->declBus(c+75,"funct7", false,-1, 6,0);
    tracep->declBus(c+103,"shamt", false,-1, 4,0);
    tracep->declBus(c+104,"res", false,-1, 31,0);
    tracep->declBit(c+105,"ls_valid", false,-1);
    tracep->declBit(c+106,"ls_wen", false,-1);
    tracep->declBus(c+107,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+108,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+109,"ls_raddr", false,-1, 31,0);
    tracep->declBit(c+110,"lbdone", false,-1);
    tracep->declBit(c+111,"lhdone", false,-1);
    tracep->declBit(c+112,"lwdone", false,-1);
    tracep->declBit(c+113,"lbudone", false,-1);
    tracep->declBit(c+114,"lhudone", false,-1);
    tracep->declBus(c+115,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+1,"mepc", false,-1, 31,0);
    tracep->declBus(c+116,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+2,"mstatus", false,-1, 31,0);
    tracep->declBus(c+76,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+3,"mcause", false,-1, 31,0);
    tracep->declBus(c+77,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+4,"mtvec", false,-1, 31,0);
    tracep->declBus(c+76,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+117,"gpr_wen", false,-1);
    tracep->declBit(c+78,"mepc_wen", false,-1);
    tracep->declBit(c+79,"mstatus_wen", false,-1);
    tracep->declBit(c+80,"mcause_wen", false,-1);
    tracep->declBit(c+81,"mtvec_wen", false,-1);
    tracep->declBus(c+5,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+42,"l_wen", false,-1);
    tracep->declBus(c+43,"l_rd", false,-1, 4,0);
    tracep->declBit(c+44,"lb_w", false,-1);
    tracep->declBit(c+45,"lh_w", false,-1);
    tracep->declBit(c+46,"lw_w", false,-1);
    tracep->declBit(c+47,"lbu_w", false,-1);
    tracep->declBit(c+48,"lhu_w", false,-1);
    tracep->declBus(c+49,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+50,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+51,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+5,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+52,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+6,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+150,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+53,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+82,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+54,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+83,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+84,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+55,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+56,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+85,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+86,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+57,"LSU_AXI_RREADY", false,-1);
    tracep->declBus(c+118,"xrd", false,-1, 31,0);
    tracep->declBus(c+119,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+120,"rf_wen", false,-1);
    tracep->declBus(c+116,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+76,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+77,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+76,"w_mtvec", false,-1, 31,0);
    tracep->declBus(c+87,"r1", false,-1, 31,0);
    tracep->declBus(c+88,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+101,"op", false,-1, 6,0);
    tracep->declBus(c+102,"funct3", false,-1, 2,0);
    tracep->declBus(c+74,"imm", false,-1, 31,0);
    tracep->declBus(c+75,"funct7", false,-1, 6,0);
    tracep->declBus(c+103,"shamt", false,-1, 4,0);
    tracep->declBus(c+87,"r1", false,-1, 31,0);
    tracep->declBus(c+88,"r2", false,-1, 31,0);
    tracep->declBus(c+104,"res", false,-1, 31,0);
    tracep->declBit(c+105,"ls_valid", false,-1);
    tracep->declBit(c+106,"ls_wen", false,-1);
    tracep->declBus(c+107,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+108,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+109,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+115,"ls_wmask", false,-1, 7,0);
    tracep->declBit(c+110,"lbdone", false,-1);
    tracep->declBit(c+111,"lhdone", false,-1);
    tracep->declBit(c+112,"lwdone", false,-1);
    tracep->declBit(c+113,"lbudone", false,-1);
    tracep->declBit(c+114,"lhudone", false,-1);
    tracep->declBus(c+96,"pc", false,-1, 31,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBus(c+1,"mepc", false,-1, 31,0);
    tracep->declBus(c+2,"mstatus", false,-1, 31,0);
    tracep->declBus(c+3,"mcause", false,-1, 31,0);
    tracep->declBus(c+4,"mtvec", false,-1, 31,0);
    tracep->declBus(c+116,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+76,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+77,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+76,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+117,"gpr_wen", false,-1);
    tracep->declBit(c+78,"mepc_wen", false,-1);
    tracep->declBit(c+79,"mstatus_wen", false,-1);
    tracep->declBit(c+80,"mcause_wen", false,-1);
    tracep->declBit(c+81,"mtvec_wen", false,-1);
    tracep->declBus(c+121,"a", false,-1, 31,0);
    tracep->declBus(c+89,"b", false,-1, 31,0);
    tracep->declBus(c+90,"csr", false,-1, 31,0);
    tracep->declBus(c+76,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+74,"offset", false,-1, 31,0);
    tracep->declBit(c+122,"jalen", false,-1);
    tracep->declBit(c+123,"jalren", false,-1);
    tracep->declBit(c+124,"beqen", false,-1);
    tracep->declBit(c+125,"bneen", false,-1);
    tracep->declBit(c+126,"blten", false,-1);
    tracep->declBit(c+127,"bgeen", false,-1);
    tracep->declBit(c+128,"bltuen", false,-1);
    tracep->declBit(c+129,"bgeuen", false,-1);
    tracep->declBit(c+91,"ecall_en", false,-1);
    tracep->declBit(c+130,"mret_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+98,"inst", false,-1, 31,0);
    tracep->declBus(c+101,"op", false,-1, 6,0);
    tracep->declBus(c+71,"rd", false,-1, 4,0);
    tracep->declBus(c+102,"funct3", false,-1, 2,0);
    tracep->declBus(c+72,"rs1", false,-1, 4,0);
    tracep->declBus(c+73,"rs2", false,-1, 4,0);
    tracep->declBus(c+74,"imm", false,-1, 31,0);
    tracep->declBus(c+75,"funct7", false,-1, 6,0);
    tracep->declBus(c+103,"shamt", false,-1, 4,0);
    tracep->declBus(c+131,"immI", false,-1, 31,0);
    tracep->declBus(c+132,"immU", false,-1, 31,0);
    tracep->declBus(c+133,"immS", false,-1, 31,0);
    tracep->declBus(c+134,"immB", false,-1, 31,0);
    tracep->declBus(c+135,"immJ", false,-1, 31,0);
    tracep->declBit(c+151,"wr_en", false,-1);
    tracep->declBit(c+152,"mepc_wen", false,-1);
    tracep->declBit(c+153,"mstatus_wen", false,-1);
    tracep->declBit(c+154,"mcause_wen", false,-1);
    tracep->declBit(c+155,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+96,"pc", false,-1, 31,0);
    tracep->declBus(c+98,"inst", false,-1, 31,0);
    tracep->declBit(c+100,"PCU_VALID", false,-1);
    tracep->declBit(c+63,"IFU_READY", false,-1);
    tracep->declBit(c+99,"difftest", false,-1);
    tracep->declBus(c+140,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+144,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+145,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+141,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+142,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+146,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+147,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+143,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+148,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+149,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+64,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+67,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+68,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+65,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+66,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+69,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+70,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+64,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+67,"axi_arvalid", false,-1);
    tracep->declBit(c+70,"axi_rready", false,-1);
    tracep->declBus(c+156,"IDLE", false,-1, 1,0);
    tracep->declBus(c+157,"FETCH", false,-1, 1,0);
    tracep->declBus(c+158,"DONE", false,-1, 1,0);
    tracep->declBus(c+159,"DIFF", false,-1, 1,0);
    tracep->declBus(c+92,"state", false,-1, 1,0);
    tracep->declBit(c+136,"start", false,-1);
    tracep->declBit(c+63,"if_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+5,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+43,"l_rd", false,-1, 4,0);
    tracep->declBus(c+71,"rd", false,-1, 4,0);
    tracep->declBit(c+42,"l_wen", false,-1);
    tracep->declBit(c+110,"lbdone", false,-1);
    tracep->declBit(c+111,"lhdone", false,-1);
    tracep->declBit(c+112,"lwdone", false,-1);
    tracep->declBit(c+113,"lbudone", false,-1);
    tracep->declBit(c+114,"lhudone", false,-1);
    tracep->declBit(c+44,"lb_w", false,-1);
    tracep->declBit(c+45,"lh_w", false,-1);
    tracep->declBit(c+46,"lw_w", false,-1);
    tracep->declBit(c+47,"lbu_w", false,-1);
    tracep->declBit(c+48,"lhu_w", false,-1);
    tracep->declBit(c+105,"valid", false,-1);
    tracep->declBit(c+106,"wen", false,-1);
    tracep->declBus(c+107,"waddr", false,-1, 31,0);
    tracep->declBus(c+108,"wdata", false,-1, 31,0);
    tracep->declBus(c+109,"raddr", false,-1, 31,0);
    tracep->declBus(c+115,"wmask", false,-1, 7,0);
    tracep->declBus(c+49,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+53,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+82,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+50,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+52,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+54,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+83,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+6,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+84,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+55,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+51,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+56,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+85,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+5,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+150,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+86,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+57,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+58,"axi_araddr_reg", false,-1, 31,0);
    tracep->declBus(c+59,"axi_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+60,"axi_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+61,"axi_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+156,"IDLE", false,-1, 1,0);
    tracep->declBus(c+157,"READ", false,-1, 1,0);
    tracep->declBus(c+158,"WRITE", false,-1, 1,0);
    tracep->declBus(c+159,"DONE", false,-1, 1,0);
    tracep->declBus(c+62,"state", false,-1, 1,0);
    tracep->declBit(c+56,"axi_arvalid", false,-1);
    tracep->declBit(c+57,"axi_rready", false,-1);
    tracep->declBus(c+51,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+53,"axi_awvalid", false,-1);
    tracep->declBit(c+54,"axi_wvalid", false,-1);
    tracep->declBus(c+49,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+50,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+52,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+55,"axi_bready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+96,"pc", false,-1, 31,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBit(c+100,"PC_VALID", false,-1);
    tracep->declBit(c+63,"IFU_READY", false,-1);
    tracep->declBit(c+100,"pc_valid", false,-1);
    tracep->declBit(c+160,"IFU_VALID", false,-1);
    tracep->declBus(c+161,"IDLE", false,-1, 0,0);
    tracep->declBus(c+162,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+7,"state", false,-1);
    tracep->declBit(c+137,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+163,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+164,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBus(c+118,"wdata", false,-1, 31,0);
    tracep->declBus(c+119,"waddr", false,-1, 4,0);
    tracep->declBit(c+120,"wen", false,-1);
    tracep->declBus(c+72,"raddr1", false,-1, 4,0);
    tracep->declBus(c+87,"r1", false,-1, 31,0);
    tracep->declBus(c+73,"raddr2", false,-1, 4,0);
    tracep->declBus(c+88,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+8+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+140,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+144,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+145,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+141,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+142,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+146,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+147,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+143,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+148,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+149,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+64,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+67,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+68,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+65,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+66,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+69,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+70,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+65,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+93,"tmp", false,-1, 31,0);
    tracep->declBit(c+68,"axi_arready", false,-1);
    tracep->declBit(c+69,"axi_rvalid", false,-1);
    tracep->declBus(c+66,"axi_rresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+49,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+53,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+82,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+50,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+52,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+54,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+83,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+6,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+84,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+55,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+51,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+56,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+85,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+5,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+150,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+86,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+57,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+85,"axi_arready", false,-1);
    tracep->declBit(c+86,"axi_rvalid", false,-1);
    tracep->declBit(c+82,"axi_awready", false,-1);
    tracep->declBit(c+83,"axi_wready", false,-1);
    tracep->declBit(c+84,"axi_bvalid", false,-1);
    tracep->declBus(c+40,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+6,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+5,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+41,"s_wen", false,-1);
    tracep->declBus(c+138,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+118,"xrd", false,-1, 31,0);
    tracep->declBus(c+104,"res", false,-1, 31,0);
    tracep->declBus(c+5,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+44,"lb_w", false,-1);
    tracep->declBit(c+45,"lh_w", false,-1);
    tracep->declBit(c+46,"lw_w", false,-1);
    tracep->declBit(c+47,"lbu_w", false,-1);
    tracep->declBit(c+48,"lhu_w", false,-1);
    tracep->declBus(c+119,"o_rf_raddr", false,-1, 4,0);
    tracep->declBus(c+71,"rd", false,-1, 4,0);
    tracep->declBus(c+43,"l_rd", false,-1, 4,0);
    tracep->declBit(c+120,"o_rf_wen", false,-1);
    tracep->declBit(c+117,"gpr_wen", false,-1);
    tracep->declBit(c+42,"l_wen", false,-1);
    tracep->declBus(c+116,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+76,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+77,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+76,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+116,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+76,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+77,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+76,"w_mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+164,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+165,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+77,"din", false,-1, 31,0);
    tracep->declBus(c+3,"dout", false,-1, 31,0);
    tracep->declBit(c+80,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+164,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+165,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+116,"din", false,-1, 31,0);
    tracep->declBus(c+1,"dout", false,-1, 31,0);
    tracep->declBit(c+78,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+164,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+166,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+76,"din", false,-1, 31,0);
    tracep->declBus(c+2,"dout", false,-1, 31,0);
    tracep->declBit(c+79,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+164,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+165,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+76,"din", false,-1, 31,0);
    tracep->declBus(c+4,"dout", false,-1, 31,0);
    tracep->declBit(c+81,"wen", false,-1);
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
    bufp->fullBit(oldp+7,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+41,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    bufp->fullBit(oldp+42,(vlSelf->top_ysyx_24110017__DOT__l_wen));
    bufp->fullCData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__l_rd),5);
    bufp->fullBit(oldp+44,(vlSelf->top_ysyx_24110017__DOT__lb_w));
    bufp->fullBit(oldp+45,(vlSelf->top_ysyx_24110017__DOT__lh_w));
    bufp->fullBit(oldp+46,(vlSelf->top_ysyx_24110017__DOT__lw_w));
    bufp->fullBit(oldp+47,(vlSelf->top_ysyx_24110017__DOT__lbu_w));
    bufp->fullBit(oldp+48,(vlSelf->top_ysyx_24110017__DOT__lhu_w));
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+53,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+54,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+55,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+56,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+57,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr_reg),32);
    bufp->fullIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr_reg),32);
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata_reg),32);
    bufp->fullCData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb_reg),8);
    bufp->fullCData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+63,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__if_done));
    bufp->fullIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+67,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+68,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+69,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+70,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullCData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullIData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+77,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->fullBit(oldp+78,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+79,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+81,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullBit(oldp+82,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+83,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+84,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+85,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+86,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullIData(oldp+87,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+88,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+89,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+90,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullBit(oldp+91,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullCData(oldp+92,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullIData(oldp+93,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullBit(oldp+94,(vlSelf->clk));
    bufp->fullBit(oldp+95,(vlSelf->rst));
    bufp->fullIData(oldp+96,(vlSelf->pc),32);
    bufp->fullIData(oldp+97,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+98,(vlSelf->inst),32);
    bufp->fullBit(oldp+99,(vlSelf->DIFFTEST));
    bufp->fullBit(oldp+100,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pc_valid));
    bufp->fullCData(oldp+101,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+102,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+103,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+104,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullBit(oldp+105,(((3U == (0x7fU & vlSelf->inst)) 
                             | (0x23U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+106,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+107,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+108,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+109,(((3U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullBit(oldp+110,((IData)((3U == (0x707fU 
                                            & vlSelf->inst)))));
    bufp->fullBit(oldp+111,((IData)((0x1003U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+112,((IData)((0x2003U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+113,((IData)((0x4003U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+114,((IData)((0x5003U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullCData(oldp+115,(((IData)((0x23U == (0x707fU 
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
    bufp->fullIData(oldp+116,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->fullBit(oldp+117,(((0x37U == (0x7fU & vlSelf->inst)) 
                             | ((0x17U == (0x7fU & vlSelf->inst)) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->inst)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelf->inst)) 
                                      | (IData)(vlSelf->__VdfgTmp_h066b65f5__0)))))));
    bufp->fullIData(oldp+118,((vlSelf->top_ysyx_24110017__DOT__res 
                               | (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lb_w))) 
                                   & (((- (IData)((1U 
                                                   & (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata 
                                                      >> 7U)))) 
                                       << 8U) | (0xffU 
                                                 & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata))) 
                                  | (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lh_w))) 
                                      & (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata))) 
                                     | (((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lw_w))) 
                                         & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata) 
                                        | ((0xffU & 
                                            ((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lbu_w))) 
                                             & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata)) 
                                           | (0xffffU 
                                              & ((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__lhu_w))) 
                                                 & vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata)))))))),32);
    bufp->fullCData(oldp+119,(((IData)(vlSelf->top_ysyx_24110017__DOT__l_rd) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__rd))),5);
    bufp->fullBit(oldp+120,((((0x37U == (0x7fU & vlSelf->inst)) 
                              | ((0x17U == (0x7fU & vlSelf->inst)) 
                                 | ((0x6fU == (0x7fU 
                                               & vlSelf->inst)) 
                                    | ((0x67U == (0x7fU 
                                                  & vlSelf->inst)) 
                                       | (IData)(vlSelf->__VdfgTmp_h066b65f5__0))))) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__l_wen))));
    bufp->fullIData(oldp+121,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullBit(oldp+122,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+123,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+124,((IData)(((0x63U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+125,((IData)(((0x1063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+126,((IData)(((0x4063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+127,((IData)(((0x5063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+128,((IData)(((0x6063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+129,((IData)(((0x7063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+130,((IData)(((0x73U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
    bufp->fullIData(oldp+131,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+132,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+133,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+134,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+135,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+136,((0x80000000U <= vlSelf->pc)));
    bufp->fullBit(oldp+137,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullIData(oldp+138,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
    bufp->fullBit(oldp+139,(vlSelf->top_ysyx_24110017__DOT__IFU_DONE));
    bufp->fullIData(oldp+140,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+141,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+142,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),4);
    bufp->fullCData(oldp+143,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BRESP),2);
    bufp->fullBit(oldp+144,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+145,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWREADY));
    bufp->fullBit(oldp+146,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+147,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WREADY));
    bufp->fullBit(oldp+148,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BVALID));
    bufp->fullBit(oldp+149,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullCData(oldp+150,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RRESP),2);
    bufp->fullBit(oldp+151,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__wr_en));
    bufp->fullBit(oldp+152,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__mepc_wen));
    bufp->fullBit(oldp+153,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__mstatus_wen));
    bufp->fullBit(oldp+154,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__mcause_wen));
    bufp->fullBit(oldp+155,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__mtvec_wen));
    bufp->fullCData(oldp+156,(0U),2);
    bufp->fullCData(oldp+157,(1U),2);
    bufp->fullCData(oldp+158,(2U),2);
    bufp->fullCData(oldp+159,(3U),2);
    bufp->fullBit(oldp+160,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__IFU_VALID));
    bufp->fullBit(oldp+161,(0U));
    bufp->fullBit(oldp+162,(1U));
    bufp->fullIData(oldp+163,(5U),32);
    bufp->fullIData(oldp+164,(0x20U),32);
    bufp->fullIData(oldp+165,(0U),32);
    bufp->fullIData(oldp+166,(0x1800U),32);
}
