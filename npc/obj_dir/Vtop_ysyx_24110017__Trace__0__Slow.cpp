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
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+136,"pc", false,-1, 31,0);
    tracep->declBus(c+137,"dnpc", false,-1, 31,0);
    tracep->declBus(c+138,"inst", false,-1, 31,0);
    tracep->declBit(c+139,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+136,"pc", false,-1, 31,0);
    tracep->declBus(c+137,"dnpc", false,-1, 31,0);
    tracep->declBus(c+138,"inst", false,-1, 31,0);
    tracep->declBit(c+139,"DIFFTEST", false,-1);
    tracep->declBit(c+79,"PCU_VALID", false,-1);
    tracep->declBit(c+80,"IFU_READY", false,-1);
    tracep->declBit(c+81,"IFU_VALID", false,-1);
    tracep->declBit(c+82,"IDU_READY", false,-1);
    tracep->declBus(c+161,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+162,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+83,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+84,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+163,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+164,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+165,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+166,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+167,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+168,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+169,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+170,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+85,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+87,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+89,"IDU_VALID", false,-1);
    tracep->declBit(c+90,"EXU_READY", false,-1);
    tracep->declBus(c+91,"op", false,-1, 6,0);
    tracep->declBus(c+92,"rd", false,-1, 4,0);
    tracep->declBus(c+93,"funct3", false,-1, 2,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBus(c+5,"funct7", false,-1, 6,0);
    tracep->declBus(c+6,"shamt", false,-1, 4,0);
    tracep->declBit(c+7,"EXU_VALID", false,-1);
    tracep->declBit(c+171,"WBU_READY", false,-1);
    tracep->declBus(c+8,"res", false,-1, 31,0);
    tracep->declBit(c+94,"ls_valid", false,-1);
    tracep->declBit(c+95,"ls_wen", false,-1);
    tracep->declBus(c+96,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+97,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"ls_raddr", false,-1, 31,0);
    tracep->declBit(c+99,"lbdone", false,-1);
    tracep->declBit(c+100,"lhdone", false,-1);
    tracep->declBit(c+101,"lwdone", false,-1);
    tracep->declBit(c+102,"lbudone", false,-1);
    tracep->declBit(c+103,"lhudone", false,-1);
    tracep->declBus(c+104,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+9,"mepc", false,-1, 31,0);
    tracep->declBus(c+140,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+10,"mstatus", false,-1, 31,0);
    tracep->declBus(c+105,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+11,"mcause", false,-1, 31,0);
    tracep->declBus(c+106,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+12,"mtvec", false,-1, 31,0);
    tracep->declBus(c+105,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+13,"gpr_wen", false,-1);
    tracep->declBit(c+107,"mepc_wen", false,-1);
    tracep->declBit(c+108,"mstatus_wen", false,-1);
    tracep->declBit(c+109,"mcause_wen", false,-1);
    tracep->declBit(c+110,"mtvec_wen", false,-1);
    tracep->declBus(c+14,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+58,"l_wen", false,-1);
    tracep->declBus(c+59,"l_rd", false,-1, 4,0);
    tracep->declBit(c+60,"lb_w", false,-1);
    tracep->declBit(c+61,"lh_w", false,-1);
    tracep->declBit(c+62,"lw_w", false,-1);
    tracep->declBit(c+63,"lbu_w", false,-1);
    tracep->declBit(c+64,"lhu_w", false,-1);
    tracep->declBus(c+65,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+66,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+67,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+14,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+68,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+15,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+172,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+69,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+111,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+70,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+112,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+113,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+71,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+72,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+114,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+115,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+73,"LSU_AXI_RREADY", false,-1);
    tracep->declBus(c+141,"xrd", false,-1, 31,0);
    tracep->declBus(c+142,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+143,"rf_wen", false,-1);
    tracep->declBus(c+140,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+105,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+106,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+105,"w_mtvec", false,-1, 31,0);
    tracep->declBus(c+16,"r1", false,-1, 31,0);
    tracep->declBus(c+116,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBit(c+89,"IDU_VALID", false,-1);
    tracep->declBit(c+90,"EXU_READY", false,-1);
    tracep->declBit(c+7,"EXU_VALID", false,-1);
    tracep->declBit(c+171,"WBU_READY", false,-1);
    tracep->declBus(c+91,"op", false,-1, 6,0);
    tracep->declBus(c+93,"funct3", false,-1, 2,0);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBus(c+5,"funct7", false,-1, 6,0);
    tracep->declBus(c+6,"shamt", false,-1, 4,0);
    tracep->declBus(c+16,"r1", false,-1, 31,0);
    tracep->declBus(c+116,"r2", false,-1, 31,0);
    tracep->declBus(c+8,"res_reg", false,-1, 31,0);
    tracep->declBit(c+94,"ls_valid", false,-1);
    tracep->declBit(c+95,"ls_wen", false,-1);
    tracep->declBus(c+96,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+97,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+104,"ls_wmask", false,-1, 7,0);
    tracep->declBit(c+99,"lbdone", false,-1);
    tracep->declBit(c+100,"lhdone", false,-1);
    tracep->declBit(c+101,"lwdone", false,-1);
    tracep->declBit(c+102,"lbudone", false,-1);
    tracep->declBit(c+103,"lhudone", false,-1);
    tracep->declBus(c+136,"pc", false,-1, 31,0);
    tracep->declBus(c+137,"dnpc", false,-1, 31,0);
    tracep->declBus(c+9,"mepc", false,-1, 31,0);
    tracep->declBus(c+10,"mstatus", false,-1, 31,0);
    tracep->declBus(c+11,"mcause", false,-1, 31,0);
    tracep->declBus(c+12,"mtvec", false,-1, 31,0);
    tracep->declBus(c+140,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+105,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+106,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+105,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+13,"gpr_wen_reg", false,-1);
    tracep->declBit(c+107,"mepc_wen", false,-1);
    tracep->declBit(c+108,"mstatus_wen", false,-1);
    tracep->declBit(c+109,"mcause_wen", false,-1);
    tracep->declBit(c+110,"mtvec_wen", false,-1);
    tracep->declBit(c+90,"exu_ready", false,-1);
    tracep->declBit(c+7,"exu_valid", false,-1);
    tracep->declBus(c+173,"IDLE", false,-1, 0,0);
    tracep->declBus(c+174,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+117,"state", false,-1);
    tracep->declBit(c+144,"next_state", false,-1);
    tracep->declBit(c+118,"res", false,-1);
    tracep->declBus(c+119,"a", false,-1, 31,0);
    tracep->declBus(c+120,"b", false,-1, 31,0);
    tracep->declBus(c+121,"csr", false,-1, 31,0);
    tracep->declBus(c+105,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+4,"offset", false,-1, 31,0);
    tracep->declBit(c+122,"jalen", false,-1);
    tracep->declBit(c+123,"jalren", false,-1);
    tracep->declBit(c+51,"beqen", false,-1);
    tracep->declBit(c+52,"bneen", false,-1);
    tracep->declBit(c+53,"blten", false,-1);
    tracep->declBit(c+54,"bgeen", false,-1);
    tracep->declBit(c+55,"bltuen", false,-1);
    tracep->declBit(c+56,"bgeuen", false,-1);
    tracep->declBit(c+124,"ecall_en", false,-1);
    tracep->declBit(c+57,"mret_en", false,-1);
    tracep->declBit(c+125,"gpr_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+138,"inst", false,-1, 31,0);
    tracep->declBit(c+81,"IFU_VALID", false,-1);
    tracep->declBit(c+82,"IDU_READY", false,-1);
    tracep->declBit(c+89,"IDU_VALID", false,-1);
    tracep->declBit(c+90,"EXU_READY", false,-1);
    tracep->declBus(c+91,"op_reg", false,-1, 6,0);
    tracep->declBus(c+92,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+93,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+2,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+3,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+4,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+5,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+6,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+145,"op", false,-1, 6,0);
    tracep->declBus(c+146,"rd", false,-1, 4,0);
    tracep->declBus(c+147,"funct3", false,-1, 2,0);
    tracep->declBus(c+148,"rs1", false,-1, 4,0);
    tracep->declBus(c+149,"rs2", false,-1, 4,0);
    tracep->declBus(c+150,"immI", false,-1, 31,0);
    tracep->declBus(c+151,"immU", false,-1, 31,0);
    tracep->declBus(c+152,"immS", false,-1, 31,0);
    tracep->declBus(c+153,"immB", false,-1, 31,0);
    tracep->declBus(c+154,"immJ", false,-1, 31,0);
    tracep->declBus(c+126,"imm", false,-1, 31,0);
    tracep->declBus(c+155,"funct7", false,-1, 6,0);
    tracep->declBus(c+156,"shamt", false,-1, 4,0);
    tracep->declBit(c+82,"idu_ready", false,-1);
    tracep->declBit(c+89,"idu_valid", false,-1);
    tracep->declBus(c+173,"IDLE", false,-1, 0,0);
    tracep->declBus(c+174,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+127,"state", false,-1);
    tracep->declBit(c+157,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+136,"pc", false,-1, 31,0);
    tracep->declBus(c+138,"inst", false,-1, 31,0);
    tracep->declBit(c+79,"PCU_VALID", false,-1);
    tracep->declBit(c+80,"IFU_READY", false,-1);
    tracep->declBit(c+81,"IFU_VALID", false,-1);
    tracep->declBit(c+82,"IDU_READY", false,-1);
    tracep->declBus(c+161,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+165,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+166,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+162,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+163,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+167,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+168,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+164,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+169,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+170,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+83,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+85,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+84,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+87,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+80,"ifu_ready", false,-1);
    tracep->declBit(c+81,"ifu_valid", false,-1);
    tracep->declBus(c+175,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+176,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+177,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+178,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+128,"current_state", false,-1, 1,0);
    tracep->declBus(c+158,"next_state", false,-1, 1,0);
    tracep->declBus(c+83,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+85,"axi_arvalid", false,-1);
    tracep->declBit(c+88,"axi_rready", false,-1);
    tracep->declBus(c+175,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+176,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+177,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+178,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+129,"state", false,-1, 1,0);
    tracep->declBit(c+130,"sram_start", false,-1);
    tracep->declBit(c+131,"sram_ifu_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+14,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"l_rd", false,-1, 4,0);
    tracep->declBus(c+92,"rd", false,-1, 4,0);
    tracep->declBit(c+58,"l_wen", false,-1);
    tracep->declBit(c+99,"lbdone", false,-1);
    tracep->declBit(c+100,"lhdone", false,-1);
    tracep->declBit(c+101,"lwdone", false,-1);
    tracep->declBit(c+102,"lbudone", false,-1);
    tracep->declBit(c+103,"lhudone", false,-1);
    tracep->declBit(c+60,"lb_w", false,-1);
    tracep->declBit(c+61,"lh_w", false,-1);
    tracep->declBit(c+62,"lw_w", false,-1);
    tracep->declBit(c+63,"lbu_w", false,-1);
    tracep->declBit(c+64,"lhu_w", false,-1);
    tracep->declBit(c+94,"valid", false,-1);
    tracep->declBit(c+95,"wen", false,-1);
    tracep->declBus(c+96,"waddr", false,-1, 31,0);
    tracep->declBus(c+97,"wdata", false,-1, 31,0);
    tracep->declBus(c+98,"raddr", false,-1, 31,0);
    tracep->declBus(c+104,"wmask", false,-1, 7,0);
    tracep->declBus(c+65,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+69,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+111,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+66,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+68,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+70,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+112,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+15,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+113,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+71,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+67,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+72,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+114,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+14,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+172,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+115,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+73,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+74,"axi_araddr_reg", false,-1, 31,0);
    tracep->declBus(c+75,"axi_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+76,"axi_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+77,"axi_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+175,"IDLE", false,-1, 1,0);
    tracep->declBus(c+176,"READ", false,-1, 1,0);
    tracep->declBus(c+177,"WRITE", false,-1, 1,0);
    tracep->declBus(c+178,"DONE", false,-1, 1,0);
    tracep->declBus(c+78,"state", false,-1, 1,0);
    tracep->declBit(c+72,"axi_arvalid", false,-1);
    tracep->declBit(c+73,"axi_rready", false,-1);
    tracep->declBus(c+67,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+69,"axi_awvalid", false,-1);
    tracep->declBit(c+70,"axi_wvalid", false,-1);
    tracep->declBus(c+65,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+66,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+68,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+71,"axi_bready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+136,"pc", false,-1, 31,0);
    tracep->declBus(c+137,"dnpc", false,-1, 31,0);
    tracep->declBit(c+79,"PCU_VALID", false,-1);
    tracep->declBit(c+80,"IFU_READY", false,-1);
    tracep->declBit(c+79,"pcu_valid", false,-1);
    tracep->declBus(c+173,"IDLE", false,-1, 0,0);
    tracep->declBus(c+174,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+132,"state", false,-1);
    tracep->declBit(c+159,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+179,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBus(c+141,"wdata", false,-1, 31,0);
    tracep->declBus(c+142,"waddr", false,-1, 4,0);
    tracep->declBit(c+143,"wen", false,-1);
    tracep->declBus(c+2,"raddr1", false,-1, 4,0);
    tracep->declBus(c+16,"r1", false,-1, 31,0);
    tracep->declBus(c+3,"raddr2", false,-1, 4,0);
    tracep->declBus(c+116,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+17+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+161,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+165,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+166,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+162,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+163,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+167,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+168,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+164,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+169,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+170,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+83,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+85,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+84,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+87,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+84,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"tmp", false,-1, 31,0);
    tracep->declBit(c+86,"axi_arready", false,-1);
    tracep->declBit(c+87,"axi_rvalid", false,-1);
    tracep->declBus(c+1,"axi_rresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+65,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+69,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+111,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+66,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+68,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+70,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+112,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+15,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+113,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+71,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+67,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+72,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+114,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+14,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+172,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+115,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+73,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+114,"axi_arready", false,-1);
    tracep->declBit(c+115,"axi_rvalid", false,-1);
    tracep->declBit(c+111,"axi_awready", false,-1);
    tracep->declBit(c+112,"axi_wready", false,-1);
    tracep->declBit(c+113,"axi_bvalid", false,-1);
    tracep->declBus(c+49,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+15,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+14,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+50,"s_wen", false,-1);
    tracep->declBus(c+160,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+141,"xrd", false,-1, 31,0);
    tracep->declBus(c+8,"res", false,-1, 31,0);
    tracep->declBus(c+14,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+60,"lb_w", false,-1);
    tracep->declBit(c+61,"lh_w", false,-1);
    tracep->declBit(c+62,"lw_w", false,-1);
    tracep->declBit(c+63,"lbu_w", false,-1);
    tracep->declBit(c+64,"lhu_w", false,-1);
    tracep->declBus(c+142,"o_rf_raddr", false,-1, 4,0);
    tracep->declBus(c+92,"rd", false,-1, 4,0);
    tracep->declBus(c+59,"l_rd", false,-1, 4,0);
    tracep->declBit(c+143,"o_rf_wen", false,-1);
    tracep->declBit(c+13,"gpr_wen", false,-1);
    tracep->declBit(c+58,"l_wen", false,-1);
    tracep->declBus(c+140,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+105,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+106,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+105,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+140,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+105,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+106,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+105,"w_mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+180,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+181,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+106,"din", false,-1, 31,0);
    tracep->declBus(c+11,"dout", false,-1, 31,0);
    tracep->declBit(c+109,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+180,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+181,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+140,"din", false,-1, 31,0);
    tracep->declBus(c+9,"dout", false,-1, 31,0);
    tracep->declBit(c+107,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+180,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+182,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+105,"din", false,-1, 31,0);
    tracep->declBus(c+10,"dout", false,-1, 31,0);
    tracep->declBit(c+108,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+180,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+181,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+134,"clk", false,-1);
    tracep->declBit(c+135,"rst", false,-1);
    tracep->declBus(c+105,"din", false,-1, 31,0);
    tracep->declBus(c+12,"dout", false,-1, 31,0);
    tracep->declBit(c+110,"wen", false,-1);
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
    bufp->fullCData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullCData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__shamt),5);
    bufp->fullBit(oldp+7,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid));
    bufp->fullIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullBit(oldp+13,(vlSelf->top_ysyx_24110017__DOT__gpr_wen));
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+50,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    bufp->fullBit(oldp+51,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+52,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+53,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+54,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+55,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+56,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+57,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                               & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
    bufp->fullBit(oldp+58,(vlSelf->top_ysyx_24110017__DOT__l_wen));
    bufp->fullCData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__l_rd),5);
    bufp->fullBit(oldp+60,(vlSelf->top_ysyx_24110017__DOT__lb_w));
    bufp->fullBit(oldp+61,(vlSelf->top_ysyx_24110017__DOT__lh_w));
    bufp->fullBit(oldp+62,(vlSelf->top_ysyx_24110017__DOT__lw_w));
    bufp->fullBit(oldp+63,(vlSelf->top_ysyx_24110017__DOT__lbu_w));
    bufp->fullBit(oldp+64,(vlSelf->top_ysyx_24110017__DOT__lhu_w));
    bufp->fullIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+69,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+70,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+71,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+72,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+73,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr_reg),32);
    bufp->fullIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr_reg),32);
    bufp->fullIData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata_reg),32);
    bufp->fullCData(oldp+77,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb_reg),8);
    bufp->fullCData(oldp+78,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+79,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+80,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready));
    bufp->fullBit(oldp+81,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+82,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+83,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullIData(oldp+84,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullBit(oldp+85,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+86,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+87,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+88,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+89,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+90,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+91,(vlSelf->top_ysyx_24110017__DOT__op),7);
    bufp->fullCData(oldp+92,(vlSelf->top_ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+93,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
    bufp->fullBit(oldp+94,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            | (0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))));
    bufp->fullBit(oldp+95,((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullIData(oldp+96,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+97,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : 0U)),32);
    bufp->fullIData(oldp+98,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                               ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                               : 0x80000000U)),32);
    bufp->fullBit(oldp+99,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    bufp->fullBit(oldp+100,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    bufp->fullBit(oldp+101,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & (2U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    bufp->fullBit(oldp+102,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & (4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    bufp->fullBit(oldp+103,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & (5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    bufp->fullCData(oldp+104,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),8);
    bufp->fullIData(oldp+105,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+106,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->fullBit(oldp+107,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+108,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+109,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+110,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullBit(oldp+111,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+112,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+113,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+114,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+115,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullIData(oldp+116,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullBit(oldp+117,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state));
    bufp->fullBit(oldp+118,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res));
    bufp->fullIData(oldp+119,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+120,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+121,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullBit(oldp+122,((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+123,((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+124,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+125,(((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             | ((0x17U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                | ((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                   | ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                      | ((0x13U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         | ((0xfU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                            | ((0x73U 
                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                               | (0x33U 
                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))))))))));
    bufp->fullIData(oldp+126,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm),32);
    bufp->fullBit(oldp+127,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+128,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+129,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+130,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+131,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullBit(oldp+132,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+133,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullBit(oldp+134,(vlSelf->clk));
    bufp->fullBit(oldp+135,(vlSelf->rst));
    bufp->fullIData(oldp+136,(vlSelf->pc),32);
    bufp->fullIData(oldp+137,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+138,(vlSelf->inst),32);
    bufp->fullBit(oldp+139,(vlSelf->DIFFTEST));
    bufp->fullIData(oldp+140,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->fullIData(oldp+141,((vlSelf->top_ysyx_24110017__DOT__res 
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
    bufp->fullCData(oldp+142,(((IData)(vlSelf->top_ysyx_24110017__DOT__l_rd) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__rd))),5);
    bufp->fullBit(oldp+143,(((IData)(vlSelf->top_ysyx_24110017__DOT__gpr_wen) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__l_wen))));
    bufp->fullBit(oldp+144,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state));
    bufp->fullCData(oldp+145,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+146,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->inst)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelf->inst)) 
                                      | ((3U == (0x7fU 
                                                 & vlSelf->inst)) 
                                         | ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->inst)) 
                                            | ((0xfU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               | ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst)) 
                                                  | (0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst)))))))))
                                ? (0x1fU & (vlSelf->inst 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullCData(oldp+147,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+148,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+149,((0x1fU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
                                         ? (vlSelf->inst 
                                            >> 0x14U)
                                         : ((IData)(
                                                    ((0x73U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst)) 
                                                     & (0U 
                                                        == vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm)))
                                             ? 0xfU
                                             : 0U)))),5);
    bufp->fullIData(oldp+150,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+151,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+152,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+153,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+154,((((- (IData)((vlSelf->inst 
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
    bufp->fullCData(oldp+155,((((0x33U == (0x7fU & vlSelf->inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->inst)))
                                ? (vlSelf->inst >> 0x19U)
                                : 0U)),7);
    bufp->fullCData(oldp+156,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+157,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+158,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+159,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullIData(oldp+160,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
    bufp->fullIData(oldp+161,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+162,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+163,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),4);
    bufp->fullCData(oldp+164,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BRESP),2);
    bufp->fullBit(oldp+165,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+166,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWREADY));
    bufp->fullBit(oldp+167,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+168,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WREADY));
    bufp->fullBit(oldp+169,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BVALID));
    bufp->fullBit(oldp+170,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullBit(oldp+171,(vlSelf->top_ysyx_24110017__DOT__WBU_READY));
    bufp->fullCData(oldp+172,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RRESP),2);
    bufp->fullBit(oldp+173,(0U));
    bufp->fullBit(oldp+174,(1U));
    bufp->fullCData(oldp+175,(0U),2);
    bufp->fullCData(oldp+176,(1U),2);
    bufp->fullCData(oldp+177,(2U),2);
    bufp->fullCData(oldp+178,(3U),2);
    bufp->fullIData(oldp+179,(5U),32);
    bufp->fullIData(oldp+180,(0x20U),32);
    bufp->fullIData(oldp+181,(0U),32);
    bufp->fullIData(oldp+182,(0x1800U),32);
}
