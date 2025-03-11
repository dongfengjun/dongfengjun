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
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+171,"pc", false,-1, 31,0);
    tracep->declBus(c+172,"dnpc", false,-1, 31,0);
    tracep->declBus(c+173,"inst", false,-1, 31,0);
    tracep->declBit(c+174,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+171,"pc", false,-1, 31,0);
    tracep->declBus(c+172,"dnpc", false,-1, 31,0);
    tracep->declBus(c+173,"inst", false,-1, 31,0);
    tracep->declBit(c+174,"DIFFTEST", false,-1);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+3,"IFU_VALID", false,-1);
    tracep->declBit(c+4,"IDU_READY", false,-1);
    tracep->declBus(c+201,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+202,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+5,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+97,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+203,"IFU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+98,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+126,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+204,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+99,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+205,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+127,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+100,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+206,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+6,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+128,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+129,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+7,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+8,"IDU_VALID", false,-1);
    tracep->declBit(c+9,"EXU_READY", false,-1);
    tracep->declBus(c+130,"op", false,-1, 6,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+131,"funct3", false,-1, 2,0);
    tracep->declBus(c+11,"rs1", false,-1, 4,0);
    tracep->declBus(c+12,"rs2", false,-1, 4,0);
    tracep->declBus(c+13,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"funct7", false,-1, 6,0);
    tracep->declBus(c+15,"shamt", false,-1, 4,0);
    tracep->declBit(c+132,"sram_lsu_read", false,-1);
    tracep->declBit(c+133,"sram_lsu_write", false,-1);
    tracep->declBit(c+110,"LSU_DONE", false,-1);
    tracep->declBit(c+16,"EXU_VALID", false,-1);
    tracep->declBit(c+17,"WBU_READY", false,-1);
    tracep->declBus(c+18,"res", false,-1, 31,0);
    tracep->declBit(c+134,"ls_valid", false,-1);
    tracep->declBit(c+135,"ls_wen", false,-1);
    tracep->declBus(c+136,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+137,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+138,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+139,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+19,"mepc", false,-1, 31,0);
    tracep->declBus(c+20,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+21,"mstatus", false,-1, 31,0);
    tracep->declBus(c+22,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+23,"mcause", false,-1, 31,0);
    tracep->declBus(c+24,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+25,"mtvec", false,-1, 31,0);
    tracep->declBus(c+26,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+27,"gpr_wen", false,-1);
    tracep->declBit(c+28,"mepc_wen", false,-1);
    tracep->declBit(c+29,"mstatus_wen", false,-1);
    tracep->declBit(c+30,"mcause_wen", false,-1);
    tracep->declBit(c+31,"mtvec_wen", false,-1);
    tracep->declBus(c+101,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+111,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+112,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+113,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+101,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+114,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+102,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+140,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+115,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+141,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+116,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+142,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+143,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+117,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+118,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+144,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+145,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+119,"LSU_AXI_RREADY", false,-1);
    tracep->declBus(c+175,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+176,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+177,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+32,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+178,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+33,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+207,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+164,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+34,"S_AXI_AWREADY", false,-1);
    tracep->declBit(c+165,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+146,"S_AXI_WREADY", false,-1);
    tracep->declBit(c+35,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+166,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+167,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+147,"S_AXI_ARREADY", false,-1);
    tracep->declBit(c+36,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+168,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+37,"wbu_done", false,-1);
    tracep->declBit(c+38,"difftest", false,-1);
    tracep->declBus(c+39,"xrd", false,-1, 31,0);
    tracep->declBus(c+40,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+41,"rf_wen", false,-1);
    tracep->declBus(c+42,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+43,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+44,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+45,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+46,"mepc_en", false,-1);
    tracep->declBit(c+47,"mstatus_en", false,-1);
    tracep->declBit(c+48,"mcause_en", false,-1);
    tracep->declBit(c+49,"mtvec_en", false,-1);
    tracep->declBus(c+50,"r1", false,-1, 31,0);
    tracep->declBus(c+148,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("Arbiter_ysyx_24110017 ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+201,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+204,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+99,"IFU_AXI_AWREADY", false,-1);
    tracep->declBus(c+202,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+203,"IFU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+205,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+127,"IFU_AXI_WREADY", false,-1);
    tracep->declBus(c+98,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+100,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+206,"IFU_AXI_BREADY", false,-1);
    tracep->declBus(c+5,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+6,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+128,"IFU_AXI_ARREADY", false,-1);
    tracep->declBus(c+97,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+126,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+129,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+7,"IFU_AXI_RREADY", false,-1);
    tracep->declBus(c+111,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+115,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+141,"LSU_AXI_AWREADY", false,-1);
    tracep->declBus(c+112,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+114,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+116,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+142,"LSU_AXI_WREADY", false,-1);
    tracep->declBus(c+102,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+143,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+117,"LSU_AXI_BREADY", false,-1);
    tracep->declBus(c+113,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+118,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+144,"LSU_AXI_ARREADY", false,-1);
    tracep->declBus(c+101,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+140,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+145,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+119,"LSU_AXI_RREADY", false,-1);
    tracep->declBus(c+175,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+164,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+34,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+176,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+178,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+165,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+146,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+33,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+35,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+166,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+177,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+167,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+147,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+32,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+207,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+36,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+168,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+208,"IDLE", false,-1, 1,0);
    tracep->declBus(c+209,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+210,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+149,"state", false,-1, 1,0);
    tracep->declBus(c+179,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBit(c+132,"sram_lsu_read", false,-1);
    tracep->declBit(c+133,"sram_lsu_write", false,-1);
    tracep->declBit(c+110,"LSU_DONE", false,-1);
    tracep->declBit(c+8,"IDU_VALID", false,-1);
    tracep->declBit(c+9,"EXU_READY", false,-1);
    tracep->declBit(c+16,"EXU_VALID", false,-1);
    tracep->declBit(c+17,"WBU_READY", false,-1);
    tracep->declBus(c+130,"op", false,-1, 6,0);
    tracep->declBus(c+131,"funct3", false,-1, 2,0);
    tracep->declBus(c+13,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"funct7", false,-1, 6,0);
    tracep->declBus(c+15,"shamt", false,-1, 4,0);
    tracep->declBus(c+50,"r1", false,-1, 31,0);
    tracep->declBus(c+148,"r2", false,-1, 31,0);
    tracep->declBus(c+18,"res_reg", false,-1, 31,0);
    tracep->declBit(c+134,"ls_valid", false,-1);
    tracep->declBit(c+135,"ls_wen", false,-1);
    tracep->declBus(c+136,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+137,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+138,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+139,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+101,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+171,"pc", false,-1, 31,0);
    tracep->declBus(c+172,"dnpc", false,-1, 31,0);
    tracep->declBus(c+19,"mepc", false,-1, 31,0);
    tracep->declBus(c+21,"mstatus", false,-1, 31,0);
    tracep->declBus(c+23,"mcause", false,-1, 31,0);
    tracep->declBus(c+25,"mtvec", false,-1, 31,0);
    tracep->declBus(c+20,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+22,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+24,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+26,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+27,"gpr_wen_reg", false,-1);
    tracep->declBit(c+28,"mepc_wen_reg", false,-1);
    tracep->declBit(c+29,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+30,"mcause_wen_reg", false,-1);
    tracep->declBit(c+31,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+9,"exu_ready", false,-1);
    tracep->declBit(c+16,"exu_valid", false,-1);
    tracep->declBus(c+208,"IDLE", false,-1, 1,0);
    tracep->declBus(c+209,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+210,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+211,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+51,"state", false,-1, 1,0);
    tracep->declBus(c+180,"next_state", false,-1, 1,0);
    tracep->declBus(c+150,"a", false,-1, 31,0);
    tracep->declBus(c+151,"b", false,-1, 31,0);
    tracep->declBus(c+152,"res", false,-1, 31,0);
    tracep->declBus(c+153,"csr", false,-1, 31,0);
    tracep->declBus(c+154,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+181,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+154,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+155,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+154,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+13,"offset", false,-1, 31,0);
    tracep->declBit(c+156,"jalen", false,-1);
    tracep->declBit(c+157,"jalren", false,-1);
    tracep->declBit(c+103,"beqen", false,-1);
    tracep->declBit(c+104,"bneen", false,-1);
    tracep->declBit(c+105,"blten", false,-1);
    tracep->declBit(c+106,"bgeen", false,-1);
    tracep->declBit(c+107,"bltuen", false,-1);
    tracep->declBit(c+108,"bgeuen", false,-1);
    tracep->declBit(c+158,"ecall_en", false,-1);
    tracep->declBit(c+109,"mret_en", false,-1);
    tracep->declBit(c+159,"gpr_wen", false,-1);
    tracep->declBit(c+160,"mepc_wen", false,-1);
    tracep->declBit(c+161,"mstatus_wen", false,-1);
    tracep->declBit(c+162,"mcause_wen", false,-1);
    tracep->declBit(c+163,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+173,"inst", false,-1, 31,0);
    tracep->declBit(c+3,"IFU_VALID", false,-1);
    tracep->declBit(c+4,"IDU_READY", false,-1);
    tracep->declBit(c+8,"IDU_VALID", false,-1);
    tracep->declBit(c+9,"EXU_READY", false,-1);
    tracep->declBus(c+130,"op_reg", false,-1, 6,0);
    tracep->declBus(c+10,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+131,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+11,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+12,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+13,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+14,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+15,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+182,"op", false,-1, 6,0);
    tracep->declBus(c+183,"rd", false,-1, 4,0);
    tracep->declBus(c+184,"funct3", false,-1, 2,0);
    tracep->declBus(c+185,"rs1", false,-1, 4,0);
    tracep->declBus(c+186,"rs2", false,-1, 4,0);
    tracep->declBus(c+187,"immI", false,-1, 31,0);
    tracep->declBus(c+188,"immU", false,-1, 31,0);
    tracep->declBus(c+189,"immS", false,-1, 31,0);
    tracep->declBus(c+190,"immB", false,-1, 31,0);
    tracep->declBus(c+191,"immJ", false,-1, 31,0);
    tracep->declBus(c+52,"imm", false,-1, 31,0);
    tracep->declBus(c+192,"funct7", false,-1, 6,0);
    tracep->declBus(c+193,"shamt", false,-1, 4,0);
    tracep->declBit(c+4,"idu_ready", false,-1);
    tracep->declBit(c+8,"idu_valid", false,-1);
    tracep->declBus(c+212,"IDLE", false,-1, 0,0);
    tracep->declBus(c+213,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+53,"state", false,-1);
    tracep->declBit(c+194,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+171,"pc", false,-1, 31,0);
    tracep->declBus(c+173,"inst", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+3,"IFU_VALID", false,-1);
    tracep->declBit(c+4,"IDU_READY", false,-1);
    tracep->declBit(c+37,"wbu_done", false,-1);
    tracep->declBus(c+201,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+204,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+99,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+202,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+203,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+205,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+127,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+98,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+100,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+206,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+5,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+6,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+128,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+97,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+126,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+129,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+7,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+2,"ifu_ready", false,-1);
    tracep->declBit(c+3,"ifu_valid", false,-1);
    tracep->declBus(c+208,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+209,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+210,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+211,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+54,"current_state", false,-1, 1,0);
    tracep->declBus(c+195,"next_state", false,-1, 1,0);
    tracep->declBus(c+5,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+6,"axi_arvalid", false,-1);
    tracep->declBit(c+7,"axi_rready", false,-1);
    tracep->declBus(c+208,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+209,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+210,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+211,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+55,"state", false,-1, 1,0);
    tracep->declBit(c+56,"sram_start", false,-1);
    tracep->declBit(c+57,"sram_ifu_done", false,-1);
    tracep->declBus(c+120,"rand_delay", false,-1, 7,0);
    tracep->declBus(c+58,"delay_counter", false,-1, 7,0);
    tracep->pushNamePrefix("lfsr_ysyx_20110017 ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+120,"rand_out", false,-1, 7,0);
    tracep->declBit(c+121,"feedback", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBit(c+132,"sram_lsu_read", false,-1);
    tracep->declBit(c+133,"sram_lsu_write", false,-1);
    tracep->declBit(c+110,"LSU_DONE", false,-1);
    tracep->declBus(c+101,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+134,"valid", false,-1);
    tracep->declBit(c+135,"wen", false,-1);
    tracep->declBus(c+136,"waddr", false,-1, 31,0);
    tracep->declBus(c+137,"wdata", false,-1, 31,0);
    tracep->declBus(c+138,"raddr", false,-1, 31,0);
    tracep->declBus(c+139,"wmask", false,-1, 7,0);
    tracep->declBus(c+111,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+115,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+141,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+112,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+114,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+116,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+142,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+102,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+143,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+117,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+113,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+118,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+144,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+101,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+140,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+145,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+119,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+120,"rand_delay", false,-1, 7,0);
    tracep->declBus(c+122,"delay_counter", false,-1, 7,0);
    tracep->declBus(c+123,"avalid_delay_counter", false,-1, 7,0);
    tracep->declBus(c+124,"wvalid_delay_counter", false,-1, 7,0);
    tracep->declBus(c+208,"IDLE", false,-1, 1,0);
    tracep->declBus(c+209,"READ", false,-1, 1,0);
    tracep->declBus(c+210,"WRITE", false,-1, 1,0);
    tracep->declBus(c+211,"DONE", false,-1, 1,0);
    tracep->declBus(c+125,"state", false,-1, 1,0);
    tracep->declBit(c+118,"axi_arvalid", false,-1);
    tracep->declBit(c+119,"axi_rready", false,-1);
    tracep->declBus(c+113,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+115,"axi_awvalid", false,-1);
    tracep->declBit(c+116,"axi_wvalid", false,-1);
    tracep->declBus(c+111,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+112,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+114,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+117,"axi_bready", false,-1);
    tracep->pushNamePrefix("lfsr_ysyx_20110017 ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+120,"rand_out", false,-1, 7,0);
    tracep->declBit(c+121,"feedback", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+171,"pc", false,-1, 31,0);
    tracep->declBus(c+172,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+1,"pcu_valid", false,-1);
    tracep->declBus(c+212,"IDLE", false,-1, 0,0);
    tracep->declBus(c+213,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+59,"state", false,-1);
    tracep->declBit(c+196,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+214,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+215,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBus(c+39,"wdata", false,-1, 31,0);
    tracep->declBus(c+40,"waddr", false,-1, 4,0);
    tracep->declBit(c+41,"wen", false,-1);
    tracep->declBus(c+11,"raddr1", false,-1, 4,0);
    tracep->declBus(c+50,"r1", false,-1, 31,0);
    tracep->declBus(c+12,"raddr2", false,-1, 4,0);
    tracep->declBus(c+148,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+60+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_ysyx_24110017 ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+175,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+164,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+34,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+176,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+178,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+165,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+146,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+33,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+35,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+166,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+177,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+167,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+147,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+32,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+207,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+36,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+168,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+147,"axi_arready", false,-1);
    tracep->declBit(c+36,"axi_rvalid", false,-1);
    tracep->declBit(c+34,"axi_awready", false,-1);
    tracep->declBit(c+146,"axi_wready", false,-1);
    tracep->declBit(c+35,"axi_bvalid", false,-1);
    tracep->declBus(c+92,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+33,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+32,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+93,"s_wen", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+94+i*1,"sta_rf", true,(i+-1), 31,0);
    }
    tracep->declBus(c+197,"s_rdata", false,-1, 31,0);
    tracep->declBit(c+198,"waddr", false,-1);
    tracep->declBit(c+199,"raddr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBit(c+16,"EXU_VALID", false,-1);
    tracep->declBit(c+17,"WBU_READY", false,-1);
    tracep->declBit(c+37,"wbu_done", false,-1);
    tracep->declBit(c+38,"difftest", false,-1);
    tracep->declBus(c+39,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+18,"res", false,-1, 31,0);
    tracep->declBus(c+40,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBit(c+41,"wen_reg", false,-1);
    tracep->declBit(c+27,"gpr_wen", false,-1);
    tracep->declBus(c+20,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+22,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+24,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+26,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+42,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+43,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+44,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+45,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+28,"mepc_wen", false,-1);
    tracep->declBit(c+29,"mstatus_wen", false,-1);
    tracep->declBit(c+30,"mcause_wen", false,-1);
    tracep->declBit(c+31,"mtvec_wen", false,-1);
    tracep->declBit(c+46,"mepc_wen_reg", false,-1);
    tracep->declBit(c+47,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+48,"mcause_wen_reg", false,-1);
    tracep->declBit(c+49,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+18,"xrd", false,-1, 31,0);
    tracep->declBus(c+10,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+27,"o_rf_wen", false,-1);
    tracep->declBus(c+20,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+22,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+24,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+26,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+17,"wbu_ready", false,-1);
    tracep->declBus(c+208,"IDLE", false,-1, 1,0);
    tracep->declBus(c+209,"WRITE", false,-1, 1,0);
    tracep->declBus(c+210,"DIFF", false,-1, 1,0);
    tracep->declBus(c+211,"NULL", false,-1, 1,0);
    tracep->declBus(c+96,"state", false,-1, 1,0);
    tracep->declBus(c+200,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+215,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+216,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+44,"din", false,-1, 31,0);
    tracep->declBus(c+23,"dout", false,-1, 31,0);
    tracep->declBit(c+48,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+215,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+216,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+42,"din", false,-1, 31,0);
    tracep->declBus(c+19,"dout", false,-1, 31,0);
    tracep->declBit(c+46,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+215,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+217,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+43,"din", false,-1, 31,0);
    tracep->declBus(c+21,"dout", false,-1, 31,0);
    tracep->declBit(c+47,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+215,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+216,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+45,"din", false,-1, 31,0);
    tracep->declBus(c+25,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
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
    bufp->fullBit(oldp+2,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready));
    bufp->fullBit(oldp+3,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+4,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+6,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+7,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+8,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+9,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullCData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__shamt),5);
    bufp->fullBit(oldp+16,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+17,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__o_mepc),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__o_mcause),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__o_mtvec),32);
    bufp->fullBit(oldp+27,(vlSelf->top_ysyx_24110017__DOT__gpr_wen));
    bufp->fullBit(oldp+28,(vlSelf->top_ysyx_24110017__DOT__mepc_wen));
    bufp->fullBit(oldp+29,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+30,(vlSelf->top_ysyx_24110017__DOT__mcause_wen));
    bufp->fullBit(oldp+31,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullBit(oldp+34,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+35,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+36,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+37,(vlSelf->top_ysyx_24110017__DOT__wbu_done));
    bufp->fullBit(oldp+38,(vlSelf->top_ysyx_24110017__DOT__difftest));
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__xrd),32);
    bufp->fullCData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__rf_addr),5);
    bufp->fullBit(oldp+41,(vlSelf->top_ysyx_24110017__DOT__rf_wen));
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__w_mepc),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__w_mstatus),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__w_mcause),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__w_mtvec),32);
    bufp->fullBit(oldp+46,(vlSelf->top_ysyx_24110017__DOT__mepc_en));
    bufp->fullBit(oldp+47,(vlSelf->top_ysyx_24110017__DOT__mstatus_en));
    bufp->fullBit(oldp+48,(vlSelf->top_ysyx_24110017__DOT__mcause_en));
    bufp->fullBit(oldp+49,(vlSelf->top_ysyx_24110017__DOT__mtvec_en));
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullCData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm),32);
    bufp->fullBit(oldp+53,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+56,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+57,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullCData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter),8);
    bufp->fullBit(oldp+59,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+69,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+70,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+77,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+78,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+79,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+80,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+81,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+82,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+83,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+84,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+85,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+86,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+87,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+88,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+89,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+90,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+91,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+92,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+93,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen));
    bufp->fullIData(oldp+94,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[0]),32);
    bufp->fullIData(oldp+95,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[1]),32);
    bufp->fullCData(oldp+96,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state),2);
    bufp->fullIData(oldp+97,((((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                               | (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)))
                               ? vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata
                               : 0U)),32);
    bufp->fullCData(oldp+98,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                               ? (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp)
                               : 0U)),2);
    bufp->fullBit(oldp+99,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                            & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready))));
    bufp->fullBit(oldp+100,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid))));
    bufp->fullIData(oldp+101,(((IData)(vlSelf->__VdfgTmp_h4120b2cc__0)
                                ? vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata
                                : 0U)),32);
    bufp->fullCData(oldp+102,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp)
                                : 0U)),2);
    bufp->fullBit(oldp+103,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->top_ysyx_24110017__DOT__r1 
                                   == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+104,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->top_ysyx_24110017__DOT__r1 
                                   != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+105,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+106,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+107,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->top_ysyx_24110017__DOT__r1 
                                   < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+108,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->top_ysyx_24110017__DOT__r1 
                                   >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+109,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                                & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
    bufp->fullBit(oldp+110,(vlSelf->top_ysyx_24110017__DOT__LSU_DONE));
    bufp->fullIData(oldp+111,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+112,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+113,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+114,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+115,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+116,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+117,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+118,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+119,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullCData(oldp+120,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay),8);
    bufp->fullBit(oldp+121,((1U & VL_REDXOR_8((0xb8U 
                                               & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay))))));
    bufp->fullCData(oldp+122,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter),8);
    bufp->fullCData(oldp+123,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter),8);
    bufp->fullCData(oldp+124,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter),8);
    bufp->fullCData(oldp+125,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullCData(oldp+126,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_RRESP)
                                : 0U)),2);
    bufp->fullBit(oldp+127,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready))));
    bufp->fullBit(oldp+128,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready))));
    bufp->fullBit(oldp+129,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_RVALID));
    bufp->fullCData(oldp+130,(vlSelf->top_ysyx_24110017__DOT__op),7);
    bufp->fullCData(oldp+131,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
    bufp->fullBit(oldp+132,(vlSelf->top_ysyx_24110017__DOT__sram_lsu_read));
    bufp->fullBit(oldp+133,(vlSelf->top_ysyx_24110017__DOT__sram_lsu_write));
    bufp->fullBit(oldp+134,(vlSelf->top_ysyx_24110017__DOT__ls_valid));
    bufp->fullBit(oldp+135,((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullIData(oldp+136,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+137,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+138,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+139,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),8);
    bufp->fullCData(oldp+140,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_RRESP)
                                : 0U)),2);
    bufp->fullBit(oldp+141,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY));
    bufp->fullBit(oldp+142,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready))));
    bufp->fullBit(oldp+143,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+144,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready))));
    bufp->fullBit(oldp+145,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RVALID));
    bufp->fullBit(oldp+146,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+147,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready));
    bufp->fullIData(oldp+148,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullCData(oldp+149,(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state),2);
    bufp->fullIData(oldp+150,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+151,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+152,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+153,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+154,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+155,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+156,((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+157,((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+158,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+159,(((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             | ((0x17U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                | ((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                   | ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                      | ((0x13U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         | ((0xfU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                            | ((0x73U 
                                                == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                               | ((0x33U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__op))))))))))));
    bufp->fullBit(oldp+160,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+161,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+162,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+163,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mtvec_wen));
    bufp->fullBit(oldp+164,(vlSelf->top_ysyx_24110017__DOT__S_AXI_AWVALID));
    bufp->fullBit(oldp+165,(vlSelf->top_ysyx_24110017__DOT__S_AXI_WVALID));
    bufp->fullBit(oldp+166,(vlSelf->top_ysyx_24110017__DOT__S_AXI_BREADY));
    bufp->fullBit(oldp+167,(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARVALID));
    bufp->fullBit(oldp+168,(vlSelf->top_ysyx_24110017__DOT__S_AXI_RREADY));
    bufp->fullBit(oldp+169,(vlSelf->clk));
    bufp->fullBit(oldp+170,(vlSelf->rst));
    bufp->fullIData(oldp+171,(vlSelf->pc),32);
    bufp->fullIData(oldp+172,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+173,(vlSelf->inst),32);
    bufp->fullBit(oldp+174,(vlSelf->DIFFTEST));
    bufp->fullIData(oldp+175,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr
                                : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                    ? vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR
                                    : 0U))),32);
    bufp->fullIData(oldp+176,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata
                                : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                    ? vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA
                                    : 0U))),32);
    bufp->fullIData(oldp+177,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr
                                : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                    ? vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr
                                    : 0U))),32);
    bufp->fullCData(oldp+178,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                    : 0U))),8);
    bufp->fullCData(oldp+179,(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state),2);
    bufp->fullCData(oldp+180,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+181,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullCData(oldp+182,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+183,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+184,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+185,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+186,((0x1fU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+187,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+188,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+189,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+190,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+191,((((- (IData)((vlSelf->inst 
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
    bufp->fullCData(oldp+192,((((0x33U == (0x7fU & vlSelf->inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->inst)))
                                ? (vlSelf->inst >> 0x19U)
                                : 0U)),7);
    bufp->fullCData(oldp+193,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+194,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+195,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+196,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullIData(oldp+197,(((1U & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                       ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr
                                       : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                           ? vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr
                                           : 0U))) ? 
                               vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf
                               [(1U & ((IData)(1U) 
                                       + ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                           ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr
                                           : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                               ? vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr
                                               : 0U))))]
                                : 0U)),32);
    bufp->fullBit(oldp+198,((1U & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                    ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr
                                    : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                        ? vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR
                                        : 0U)))));
    bufp->fullBit(oldp+199,((1U & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                    ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr
                                    : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                        ? vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr
                                        : 0U)))));
    bufp->fullCData(oldp+200,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->fullIData(oldp+201,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+202,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+203,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),8);
    bufp->fullBit(oldp+204,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+205,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+206,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullCData(oldp+207,(vlSelf->top_ysyx_24110017__DOT__S_AXI_RRESP),2);
    bufp->fullCData(oldp+208,(0U),2);
    bufp->fullCData(oldp+209,(1U),2);
    bufp->fullCData(oldp+210,(2U),2);
    bufp->fullCData(oldp+211,(3U),2);
    bufp->fullBit(oldp+212,(0U));
    bufp->fullBit(oldp+213,(1U));
    bufp->fullIData(oldp+214,(5U),32);
    bufp->fullIData(oldp+215,(0x20U),32);
    bufp->fullIData(oldp+216,(0U),32);
    bufp->fullIData(oldp+217,(0x1800U),32);
}
