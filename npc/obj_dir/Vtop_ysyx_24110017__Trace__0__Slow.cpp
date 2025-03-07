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
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"dnpc", false,-1, 31,0);
    tracep->declBus(c+104,"inst", false,-1, 31,0);
    tracep->declBit(c+105,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"dnpc", false,-1, 31,0);
    tracep->declBus(c+104,"inst", false,-1, 31,0);
    tracep->declBit(c+105,"DIFFTEST", false,-1);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+143,"IFU_READY", false,-1);
    tracep->declBit(c+2,"IFU_VALID", false,-1);
    tracep->declBit(c+143,"IDU_READY", false,-1);
    tracep->declBus(c+144,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+145,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+65,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+66,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+146,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+147,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+67,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+148,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+149,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+150,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+151,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+152,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+153,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+68,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+69,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+70,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+71,"IFU_AXI_RREADY", false,-1);
    tracep->declBus(c+106,"op", false,-1, 6,0);
    tracep->declBus(c+72,"rd", false,-1, 4,0);
    tracep->declBus(c+107,"funct3", false,-1, 2,0);
    tracep->declBus(c+73,"rs1", false,-1, 4,0);
    tracep->declBus(c+74,"rs2", false,-1, 4,0);
    tracep->declBus(c+75,"imm", false,-1, 31,0);
    tracep->declBus(c+76,"funct7", false,-1, 6,0);
    tracep->declBus(c+108,"shamt", false,-1, 4,0);
    tracep->declBus(c+77,"res", false,-1, 31,0);
    tracep->declBit(c+109,"ls_valid", false,-1);
    tracep->declBit(c+110,"ls_wen", false,-1);
    tracep->declBus(c+111,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+112,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+113,"ls_raddr", false,-1, 31,0);
    tracep->declBit(c+114,"lbdone", false,-1);
    tracep->declBit(c+115,"lhdone", false,-1);
    tracep->declBit(c+116,"lwdone", false,-1);
    tracep->declBit(c+117,"lbudone", false,-1);
    tracep->declBit(c+118,"lhudone", false,-1);
    tracep->declBus(c+119,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+3,"mepc", false,-1, 31,0);
    tracep->declBus(c+120,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+4,"mstatus", false,-1, 31,0);
    tracep->declBus(c+78,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+5,"mcause", false,-1, 31,0);
    tracep->declBus(c+79,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+6,"mtvec", false,-1, 31,0);
    tracep->declBus(c+78,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+121,"gpr_wen", false,-1);
    tracep->declBit(c+80,"mepc_wen", false,-1);
    tracep->declBit(c+81,"mstatus_wen", false,-1);
    tracep->declBit(c+82,"mcause_wen", false,-1);
    tracep->declBit(c+83,"mtvec_wen", false,-1);
    tracep->declBus(c+7,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+44,"l_wen", false,-1);
    tracep->declBus(c+45,"l_rd", false,-1, 4,0);
    tracep->declBit(c+46,"lb_w", false,-1);
    tracep->declBit(c+47,"lh_w", false,-1);
    tracep->declBit(c+48,"lw_w", false,-1);
    tracep->declBit(c+49,"lbu_w", false,-1);
    tracep->declBit(c+50,"lhu_w", false,-1);
    tracep->declBus(c+51,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+52,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+53,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+7,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+54,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+8,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+154,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+55,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+84,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+56,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+85,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+86,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+57,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+58,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+87,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+88,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+59,"LSU_AXI_RREADY", false,-1);
    tracep->declBus(c+122,"xrd", false,-1, 31,0);
    tracep->declBus(c+123,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+124,"rf_wen", false,-1);
    tracep->declBus(c+120,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+78,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+79,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+78,"w_mtvec", false,-1, 31,0);
    tracep->declBus(c+89,"r1", false,-1, 31,0);
    tracep->declBus(c+90,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+106,"op", false,-1, 6,0);
    tracep->declBus(c+107,"funct3", false,-1, 2,0);
    tracep->declBus(c+75,"imm", false,-1, 31,0);
    tracep->declBus(c+76,"funct7", false,-1, 6,0);
    tracep->declBus(c+108,"shamt", false,-1, 4,0);
    tracep->declBus(c+89,"r1", false,-1, 31,0);
    tracep->declBus(c+90,"r2", false,-1, 31,0);
    tracep->declBus(c+77,"res", false,-1, 31,0);
    tracep->declBit(c+109,"ls_valid", false,-1);
    tracep->declBit(c+110,"ls_wen", false,-1);
    tracep->declBus(c+111,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+112,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+113,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+119,"ls_wmask", false,-1, 7,0);
    tracep->declBit(c+114,"lbdone", false,-1);
    tracep->declBit(c+115,"lhdone", false,-1);
    tracep->declBit(c+116,"lwdone", false,-1);
    tracep->declBit(c+117,"lbudone", false,-1);
    tracep->declBit(c+118,"lhudone", false,-1);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"dnpc", false,-1, 31,0);
    tracep->declBus(c+3,"mepc", false,-1, 31,0);
    tracep->declBus(c+4,"mstatus", false,-1, 31,0);
    tracep->declBus(c+5,"mcause", false,-1, 31,0);
    tracep->declBus(c+6,"mtvec", false,-1, 31,0);
    tracep->declBus(c+120,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+78,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+79,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+78,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+121,"gpr_wen", false,-1);
    tracep->declBit(c+80,"mepc_wen", false,-1);
    tracep->declBit(c+81,"mstatus_wen", false,-1);
    tracep->declBit(c+82,"mcause_wen", false,-1);
    tracep->declBit(c+83,"mtvec_wen", false,-1);
    tracep->declBus(c+91,"a", false,-1, 31,0);
    tracep->declBus(c+92,"b", false,-1, 31,0);
    tracep->declBus(c+93,"csr", false,-1, 31,0);
    tracep->declBus(c+78,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+75,"offset", false,-1, 31,0);
    tracep->declBit(c+125,"jalen", false,-1);
    tracep->declBit(c+126,"jalren", false,-1);
    tracep->declBit(c+127,"beqen", false,-1);
    tracep->declBit(c+128,"bneen", false,-1);
    tracep->declBit(c+129,"blten", false,-1);
    tracep->declBit(c+130,"bgeen", false,-1);
    tracep->declBit(c+131,"bltuen", false,-1);
    tracep->declBit(c+132,"bgeuen", false,-1);
    tracep->declBit(c+94,"ecall_en", false,-1);
    tracep->declBit(c+133,"mret_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+104,"inst", false,-1, 31,0);
    tracep->declBit(c+143,"IDU_READY", false,-1);
    tracep->declBus(c+106,"op", false,-1, 6,0);
    tracep->declBus(c+72,"rd", false,-1, 4,0);
    tracep->declBus(c+107,"funct3", false,-1, 2,0);
    tracep->declBus(c+73,"rs1", false,-1, 4,0);
    tracep->declBus(c+74,"rs2", false,-1, 4,0);
    tracep->declBus(c+75,"imm", false,-1, 31,0);
    tracep->declBus(c+76,"funct7", false,-1, 6,0);
    tracep->declBus(c+108,"shamt", false,-1, 4,0);
    tracep->declBus(c+134,"immI", false,-1, 31,0);
    tracep->declBus(c+135,"immU", false,-1, 31,0);
    tracep->declBus(c+136,"immS", false,-1, 31,0);
    tracep->declBus(c+137,"immB", false,-1, 31,0);
    tracep->declBus(c+138,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+104,"inst", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+143,"IFU_READY", false,-1);
    tracep->declBit(c+2,"IFU_VALID", false,-1);
    tracep->declBit(c+143,"IDU_READY", false,-1);
    tracep->declBit(c+105,"difftest", false,-1);
    tracep->declBus(c+144,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+148,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+149,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+145,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+146,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+150,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+151,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+147,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+152,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+153,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+65,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+68,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+69,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+66,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+67,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+70,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+71,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+2,"ifu_valid", false,-1);
    tracep->declBus(c+155,"WAIT_VALID", false,-1, 0,0);
    tracep->declBus(c+156,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+95,"current_state", false,-1);
    tracep->declBit(c+139,"next_state", false,-1);
    tracep->declBus(c+65,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+68,"axi_arvalid", false,-1);
    tracep->declBit(c+71,"axi_rready", false,-1);
    tracep->declBus(c+157,"IDLE", false,-1, 1,0);
    tracep->declBus(c+158,"FETCH", false,-1, 1,0);
    tracep->declBus(c+159,"DONE", false,-1, 1,0);
    tracep->declBus(c+160,"DIFF", false,-1, 1,0);
    tracep->declBus(c+96,"state", false,-1, 1,0);
    tracep->declBit(c+140,"start", false,-1);
    tracep->declBit(c+97,"if_done", false,-1);
    tracep->declBus(c+98,"inst_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+7,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+45,"l_rd", false,-1, 4,0);
    tracep->declBus(c+72,"rd", false,-1, 4,0);
    tracep->declBit(c+44,"l_wen", false,-1);
    tracep->declBit(c+114,"lbdone", false,-1);
    tracep->declBit(c+115,"lhdone", false,-1);
    tracep->declBit(c+116,"lwdone", false,-1);
    tracep->declBit(c+117,"lbudone", false,-1);
    tracep->declBit(c+118,"lhudone", false,-1);
    tracep->declBit(c+46,"lb_w", false,-1);
    tracep->declBit(c+47,"lh_w", false,-1);
    tracep->declBit(c+48,"lw_w", false,-1);
    tracep->declBit(c+49,"lbu_w", false,-1);
    tracep->declBit(c+50,"lhu_w", false,-1);
    tracep->declBit(c+109,"valid", false,-1);
    tracep->declBit(c+110,"wen", false,-1);
    tracep->declBus(c+111,"waddr", false,-1, 31,0);
    tracep->declBus(c+112,"wdata", false,-1, 31,0);
    tracep->declBus(c+113,"raddr", false,-1, 31,0);
    tracep->declBus(c+119,"wmask", false,-1, 7,0);
    tracep->declBus(c+51,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+55,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+84,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+52,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+54,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+56,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+85,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+8,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+86,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+57,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+53,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+58,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+87,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+7,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+154,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+88,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+59,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+60,"axi_araddr_reg", false,-1, 31,0);
    tracep->declBus(c+61,"axi_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+62,"axi_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+63,"axi_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+157,"IDLE", false,-1, 1,0);
    tracep->declBus(c+158,"READ", false,-1, 1,0);
    tracep->declBus(c+159,"WRITE", false,-1, 1,0);
    tracep->declBus(c+160,"DONE", false,-1, 1,0);
    tracep->declBus(c+64,"state", false,-1, 1,0);
    tracep->declBit(c+58,"axi_arvalid", false,-1);
    tracep->declBit(c+59,"axi_rready", false,-1);
    tracep->declBus(c+53,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+55,"axi_awvalid", false,-1);
    tracep->declBit(c+56,"axi_wvalid", false,-1);
    tracep->declBus(c+51,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+52,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+54,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+57,"axi_bready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+143,"IFU_READY", false,-1);
    tracep->declBit(c+1,"pcu_valid", false,-1);
    tracep->declBus(c+155,"IDLE", false,-1, 0,0);
    tracep->declBus(c+156,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+9,"state", false,-1);
    tracep->declBit(c+141,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+161,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+162,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBus(c+122,"wdata", false,-1, 31,0);
    tracep->declBus(c+123,"waddr", false,-1, 4,0);
    tracep->declBit(c+124,"wen", false,-1);
    tracep->declBus(c+73,"raddr1", false,-1, 4,0);
    tracep->declBus(c+89,"r1", false,-1, 31,0);
    tracep->declBus(c+74,"raddr2", false,-1, 4,0);
    tracep->declBus(c+90,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+10+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+144,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+148,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+149,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+145,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+146,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+150,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+151,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+147,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+152,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+153,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+65,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+68,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+69,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+66,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+67,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+70,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+71,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+66,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+99,"tmp", false,-1, 31,0);
    tracep->declBit(c+69,"axi_arready", false,-1);
    tracep->declBit(c+70,"axi_rvalid", false,-1);
    tracep->declBus(c+67,"axi_rresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+51,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+55,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+84,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+52,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+54,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+56,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+85,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+8,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+86,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+57,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+53,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+58,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+87,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+7,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+154,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+88,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+59,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+87,"axi_arready", false,-1);
    tracep->declBit(c+88,"axi_rvalid", false,-1);
    tracep->declBit(c+84,"axi_awready", false,-1);
    tracep->declBit(c+85,"axi_wready", false,-1);
    tracep->declBit(c+86,"axi_bvalid", false,-1);
    tracep->declBus(c+42,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+8,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+7,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+43,"s_wen", false,-1);
    tracep->declBus(c+142,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+122,"xrd", false,-1, 31,0);
    tracep->declBus(c+77,"res", false,-1, 31,0);
    tracep->declBus(c+7,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+46,"lb_w", false,-1);
    tracep->declBit(c+47,"lh_w", false,-1);
    tracep->declBit(c+48,"lw_w", false,-1);
    tracep->declBit(c+49,"lbu_w", false,-1);
    tracep->declBit(c+50,"lhu_w", false,-1);
    tracep->declBus(c+123,"o_rf_raddr", false,-1, 4,0);
    tracep->declBus(c+72,"rd", false,-1, 4,0);
    tracep->declBus(c+45,"l_rd", false,-1, 4,0);
    tracep->declBit(c+124,"o_rf_wen", false,-1);
    tracep->declBit(c+121,"gpr_wen", false,-1);
    tracep->declBit(c+44,"l_wen", false,-1);
    tracep->declBus(c+120,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+78,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+79,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+78,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+120,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+78,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+79,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+78,"w_mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+79,"din", false,-1, 31,0);
    tracep->declBus(c+5,"dout", false,-1, 31,0);
    tracep->declBit(c+82,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+120,"din", false,-1, 31,0);
    tracep->declBus(c+3,"dout", false,-1, 31,0);
    tracep->declBit(c+80,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+164,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+78,"din", false,-1, 31,0);
    tracep->declBus(c+4,"dout", false,-1, 31,0);
    tracep->declBit(c+81,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+78,"din", false,-1, 31,0);
    tracep->declBus(c+6,"dout", false,-1, 31,0);
    tracep->declBit(c+83,"wen", false,-1);
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
    bufp->fullBit(oldp+1,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+2,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid));
    bufp->fullIData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullBit(oldp+9,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+43,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    bufp->fullBit(oldp+44,(vlSelf->top_ysyx_24110017__DOT__l_wen));
    bufp->fullCData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__l_rd),5);
    bufp->fullBit(oldp+46,(vlSelf->top_ysyx_24110017__DOT__lb_w));
    bufp->fullBit(oldp+47,(vlSelf->top_ysyx_24110017__DOT__lh_w));
    bufp->fullBit(oldp+48,(vlSelf->top_ysyx_24110017__DOT__lw_w));
    bufp->fullBit(oldp+49,(vlSelf->top_ysyx_24110017__DOT__lbu_w));
    bufp->fullBit(oldp+50,(vlSelf->top_ysyx_24110017__DOT__lhu_w));
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+55,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+56,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+57,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+58,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+59,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr_reg),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr_reg),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata_reg),32);
    bufp->fullCData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb_reg),8);
    bufp->fullCData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+68,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+69,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+70,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+71,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullCData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullIData(oldp+77,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+78,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+79,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->fullBit(oldp+80,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+81,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+83,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullBit(oldp+84,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+85,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+86,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+87,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+88,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullIData(oldp+89,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+90,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+91,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+92,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+93,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullBit(oldp+94,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+95,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state));
    bufp->fullCData(oldp+96,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+97,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__if_done));
    bufp->fullIData(oldp+98,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__inst_reg),32);
    bufp->fullIData(oldp+99,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullBit(oldp+100,(vlSelf->clk));
    bufp->fullBit(oldp+101,(vlSelf->rst));
    bufp->fullIData(oldp+102,(vlSelf->pc),32);
    bufp->fullIData(oldp+103,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+104,(vlSelf->inst),32);
    bufp->fullBit(oldp+105,(vlSelf->DIFFTEST));
    bufp->fullCData(oldp+106,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+107,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+108,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+109,(((3U == (0x7fU & vlSelf->inst)) 
                             | (0x23U == (0x7fU & vlSelf->inst)))));
    bufp->fullBit(oldp+110,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+111,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+112,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+113,(((3U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullBit(oldp+114,((IData)((3U == (0x707fU 
                                            & vlSelf->inst)))));
    bufp->fullBit(oldp+115,((IData)((0x1003U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+116,((IData)((0x2003U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+117,((IData)((0x4003U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+118,((IData)((0x5003U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullCData(oldp+119,(((IData)((0x23U == (0x707fU 
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
    bufp->fullIData(oldp+120,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->fullBit(oldp+121,(((0x37U == (0x7fU & vlSelf->inst)) 
                             | ((0x17U == (0x7fU & vlSelf->inst)) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->inst)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelf->inst)) 
                                      | (IData)(vlSelf->__VdfgTmp_h066b65f5__0)))))));
    bufp->fullIData(oldp+122,((vlSelf->top_ysyx_24110017__DOT__res 
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
    bufp->fullCData(oldp+123,(((IData)(vlSelf->top_ysyx_24110017__DOT__l_rd) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__rd))),5);
    bufp->fullBit(oldp+124,((((0x37U == (0x7fU & vlSelf->inst)) 
                              | ((0x17U == (0x7fU & vlSelf->inst)) 
                                 | ((0x6fU == (0x7fU 
                                               & vlSelf->inst)) 
                                    | ((0x67U == (0x7fU 
                                                  & vlSelf->inst)) 
                                       | (IData)(vlSelf->__VdfgTmp_h066b65f5__0))))) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__l_wen))));
    bufp->fullBit(oldp+125,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+126,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+127,((IData)(((0x63U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+128,((IData)(((0x1063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+129,((IData)(((0x4063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+130,((IData)(((0x5063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+131,((IData)(((0x6063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+132,((IData)(((0x7063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+133,((IData)(((0x73U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
    bufp->fullIData(oldp+134,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+135,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+136,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+137,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+138,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+139,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state));
    bufp->fullBit(oldp+140,((0x80000000U <= vlSelf->pc)));
    bufp->fullBit(oldp+141,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullIData(oldp+142,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
    bufp->fullBit(oldp+143,(1U));
    bufp->fullIData(oldp+144,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+145,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+146,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),4);
    bufp->fullCData(oldp+147,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BRESP),2);
    bufp->fullBit(oldp+148,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+149,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWREADY));
    bufp->fullBit(oldp+150,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+151,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WREADY));
    bufp->fullBit(oldp+152,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BVALID));
    bufp->fullBit(oldp+153,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullCData(oldp+154,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RRESP),2);
    bufp->fullBit(oldp+155,(0U));
    bufp->fullBit(oldp+156,(1U));
    bufp->fullCData(oldp+157,(0U),2);
    bufp->fullCData(oldp+158,(1U),2);
    bufp->fullCData(oldp+159,(2U),2);
    bufp->fullCData(oldp+160,(3U),2);
    bufp->fullIData(oldp+161,(5U),32);
    bufp->fullIData(oldp+162,(0x20U),32);
    bufp->fullIData(oldp+163,(0U),32);
    bufp->fullIData(oldp+164,(0x1800U),32);
}
