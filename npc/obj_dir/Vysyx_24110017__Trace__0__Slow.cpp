// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24110017__Syms.h"


VL_ATTR_COLD void Vysyx_24110017___024root__trace_init_sub__TOP__0(Vysyx_24110017___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110017___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+243,"dnpc", false,-1, 31,0);
    tracep->declBus(c+244,"pc", false,-1, 31,0);
    tracep->declBus(c+245,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24110017 ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+243,"dnpc", false,-1, 31,0);
    tracep->declBus(c+244,"pc", false,-1, 31,0);
    tracep->declBus(c+245,"inst", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+168,"IFU_VALID", false,-1);
    tracep->declBit(c+169,"IDU_READY", false,-1);
    tracep->declBus(c+278,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+278,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+3,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+201,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+279,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+280,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+4,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+279,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+281,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+5,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+282,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+279,"IFU_AXI_AWSIZE", false,-1, 3,0);
    tracep->declBus(c+6,"IFU_AXI_ARSIZE", false,-1, 3,0);
    tracep->declBus(c+283,"IFU_AXI_AWBURST", false,-1, 2,0);
    tracep->declBus(c+7,"IFU_AXI_ARBURST", false,-1, 2,0);
    tracep->declBus(c+202,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+246,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+284,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+203,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+284,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+204,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+247,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+284,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+8,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+205,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+211,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+9,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+285,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+286,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+170,"IDU_VALID", false,-1);
    tracep->declBit(c+171,"EXU_READY", false,-1);
    tracep->declBus(c+172,"op", false,-1, 6,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+173,"funct3", false,-1, 2,0);
    tracep->declBus(c+11,"rs1", false,-1, 4,0);
    tracep->declBus(c+12,"rs2", false,-1, 4,0);
    tracep->declBus(c+13,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"funct7", false,-1, 6,0);
    tracep->declBus(c+15,"shamt", false,-1, 4,0);
    tracep->declBit(c+174,"sram_lsu_read", false,-1);
    tracep->declBit(c+175,"sram_lsu_write", false,-1);
    tracep->declBit(c+248,"LSU_DONE", false,-1);
    tracep->declBit(c+16,"EXU_VALID", false,-1);
    tracep->declBit(c+17,"WBU_READY", false,-1);
    tracep->declBus(c+18,"res", false,-1, 31,0);
    tracep->declBit(c+176,"ls_valid", false,-1);
    tracep->declBit(c+177,"ls_wen", false,-1);
    tracep->declBus(c+178,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+179,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+180,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+181,"ls_wmask", false,-1, 3,0);
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
    tracep->declBus(c+206,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+159,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+160,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+206,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+161,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+287,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+288,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+289,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+290,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+291,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+292,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+293,"LSU_AXI_AWSIZE", false,-1, 3,0);
    tracep->declBus(c+294,"LSU_AXI_ARSIZE", false,-1, 3,0);
    tracep->declBus(c+295,"LSU_AXI_AWBURST", false,-1, 2,0);
    tracep->declBus(c+296,"LSU_AXI_ARBURST", false,-1, 2,0);
    tracep->declBus(c+207,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+249,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+162,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+208,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+163,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+209,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+212,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+164,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+165,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+210,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+213,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+166,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+297,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+298,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+32,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+214,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+33,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+299,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+215,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+300,"S_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+301,"S_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+302,"S_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+34,"S_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+303,"S_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+35,"S_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+304,"S_AXI_AWSIZE", false,-1, 3,0);
    tracep->declBus(c+305,"S_AXI_ARSIZE", false,-1, 3,0);
    tracep->declBus(c+306,"S_AXI_AWBURST", false,-1, 2,0);
    tracep->declBus(c+307,"S_AXI_ARBURST", false,-1, 2,0);
    tracep->declBus(c+308,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+36,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+216,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+309,"S_AXI_AWREADY", false,-1);
    tracep->declBit(c+250,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+310,"S_AXI_WREADY", false,-1);
    tracep->declBit(c+37,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+38,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+217,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+311,"S_AXI_ARREADY", false,-1);
    tracep->declBit(c+39,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+40,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+41,"S_AXI_WLAST", false,-1);
    tracep->declBit(c+42,"S_AXI_RLAST", false,-1);
    tracep->declBus(c+43,"U_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+218,"U_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+44,"U_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+312,"U_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+219,"U_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+313,"U_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+314,"U_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+315,"U_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+45,"U_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+316,"U_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+46,"U_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+317,"U_AXI_AWSIZE", false,-1, 3,0);
    tracep->declBus(c+318,"U_AXI_ARSIZE", false,-1, 3,0);
    tracep->declBus(c+319,"U_AXI_AWBURST", false,-1, 2,0);
    tracep->declBus(c+320,"U_AXI_ARBURST", false,-1, 2,0);
    tracep->declBus(c+321,"U_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+47,"U_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+220,"U_AXI_AWVALID", false,-1);
    tracep->declBit(c+322,"U_AXI_AWREADY", false,-1);
    tracep->declBit(c+251,"U_AXI_WVALID", false,-1);
    tracep->declBit(c+323,"U_AXI_WREADY", false,-1);
    tracep->declBit(c+48,"U_AXI_BVALID", false,-1);
    tracep->declBit(c+49,"U_AXI_BREADY", false,-1);
    tracep->declBit(c+221,"U_AXI_ARVALID", false,-1);
    tracep->declBit(c+324,"U_AXI_ARREADY", false,-1);
    tracep->declBit(c+50,"U_AXI_RVALID", false,-1);
    tracep->declBit(c+51,"U_AXI_RREADY", false,-1);
    tracep->declBit(c+52,"U_AXI_WLAST", false,-1);
    tracep->declBit(c+53,"U_AXI_RLAST", false,-1);
    tracep->declBus(c+54,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+325,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+55,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+326,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+327,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+328,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+329,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+330,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+56,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+331,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+57,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+332,"C_AXI_AWSIZE", false,-1, 3,0);
    tracep->declBus(c+333,"C_AXI_ARSIZE", false,-1, 3,0);
    tracep->declBus(c+334,"C_AXI_AWBURST", false,-1, 2,0);
    tracep->declBus(c+335,"C_AXI_ARBURST", false,-1, 2,0);
    tracep->declBus(c+336,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+58,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+337,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+338,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+339,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+340,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+59,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+60,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+341,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+342,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+61,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+62,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+63,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+64,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+65,"wbu_done", false,-1);
    tracep->declBit(c+66,"difftest", false,-1);
    tracep->declBus(c+67,"xrd", false,-1, 31,0);
    tracep->declBus(c+68,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+69,"rf_wen", false,-1);
    tracep->declBus(c+70,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+71,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+72,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+73,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+74,"mepc_en", false,-1);
    tracep->declBit(c+75,"mstatus_en", false,-1);
    tracep->declBit(c+76,"mcause_en", false,-1);
    tracep->declBit(c+77,"mtvec_en", false,-1);
    tracep->declBus(c+78,"r1", false,-1, 31,0);
    tracep->declBus(c+182,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+174,"sram_lsu_read", false,-1);
    tracep->declBit(c+175,"sram_lsu_write", false,-1);
    tracep->declBit(c+248,"LSU_DONE", false,-1);
    tracep->declBit(c+170,"IDU_VALID", false,-1);
    tracep->declBit(c+171,"EXU_READY", false,-1);
    tracep->declBit(c+16,"EXU_VALID", false,-1);
    tracep->declBit(c+17,"WBU_READY", false,-1);
    tracep->declBus(c+172,"op", false,-1, 6,0);
    tracep->declBus(c+173,"funct3", false,-1, 2,0);
    tracep->declBus(c+13,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"funct7", false,-1, 6,0);
    tracep->declBus(c+15,"shamt", false,-1, 4,0);
    tracep->declBus(c+78,"r1", false,-1, 31,0);
    tracep->declBus(c+182,"r2", false,-1, 31,0);
    tracep->declBus(c+18,"res_reg", false,-1, 31,0);
    tracep->declBit(c+176,"ls_valid", false,-1);
    tracep->declBit(c+177,"ls_wen", false,-1);
    tracep->declBus(c+178,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+179,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+180,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+181,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+206,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"pc", false,-1, 31,0);
    tracep->declBus(c+243,"dnpc", false,-1, 31,0);
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
    tracep->declBit(c+171,"exu_ready", false,-1);
    tracep->declBit(c+16,"exu_valid", false,-1);
    tracep->declBus(c+343,"IDLE", false,-1, 1,0);
    tracep->declBus(c+344,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+345,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+346,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+183,"state", false,-1, 1,0);
    tracep->declBus(c+252,"next_state", false,-1, 1,0);
    tracep->declBus(c+184,"a", false,-1, 31,0);
    tracep->declBus(c+185,"b", false,-1, 31,0);
    tracep->declBus(c+222,"res", false,-1, 31,0);
    tracep->declBus(c+186,"csr", false,-1, 31,0);
    tracep->declBus(c+187,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+253,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+187,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+188,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+187,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+13,"offset", false,-1, 31,0);
    tracep->declBit(c+189,"jalen", false,-1);
    tracep->declBit(c+190,"jalren", false,-1);
    tracep->declBit(c+151,"beqen", false,-1);
    tracep->declBit(c+152,"bneen", false,-1);
    tracep->declBit(c+153,"blten", false,-1);
    tracep->declBit(c+154,"bgeen", false,-1);
    tracep->declBit(c+155,"bltuen", false,-1);
    tracep->declBit(c+156,"bgeuen", false,-1);
    tracep->declBit(c+191,"ecall_en", false,-1);
    tracep->declBit(c+157,"mret_en", false,-1);
    tracep->declBit(c+192,"gpr_wen", false,-1);
    tracep->declBit(c+193,"mepc_wen", false,-1);
    tracep->declBit(c+194,"mstatus_wen", false,-1);
    tracep->declBit(c+195,"mcause_wen", false,-1);
    tracep->declBit(c+196,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+245,"inst", false,-1, 31,0);
    tracep->declBit(c+168,"IFU_VALID", false,-1);
    tracep->declBit(c+169,"IDU_READY", false,-1);
    tracep->declBit(c+170,"IDU_VALID", false,-1);
    tracep->declBit(c+171,"EXU_READY", false,-1);
    tracep->declBus(c+172,"op_reg", false,-1, 6,0);
    tracep->declBus(c+10,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+173,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+11,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+12,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+13,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+14,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+15,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+254,"op", false,-1, 6,0);
    tracep->declBus(c+255,"rd", false,-1, 4,0);
    tracep->declBus(c+256,"funct3", false,-1, 2,0);
    tracep->declBus(c+257,"rs1", false,-1, 4,0);
    tracep->declBus(c+258,"rs2", false,-1, 4,0);
    tracep->declBus(c+259,"immI", false,-1, 31,0);
    tracep->declBus(c+260,"immU", false,-1, 31,0);
    tracep->declBus(c+261,"immS", false,-1, 31,0);
    tracep->declBus(c+262,"immB", false,-1, 31,0);
    tracep->declBus(c+263,"immJ", false,-1, 31,0);
    tracep->declBus(c+197,"imm", false,-1, 31,0);
    tracep->declBus(c+264,"funct7", false,-1, 6,0);
    tracep->declBus(c+265,"shamt", false,-1, 4,0);
    tracep->declBit(c+169,"idu_ready", false,-1);
    tracep->declBit(c+170,"idu_valid", false,-1);
    tracep->declBus(c+347,"IDLE", false,-1, 0,0);
    tracep->declBus(c+348,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+198,"state", false,-1);
    tracep->declBit(c+266,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+244,"pc", false,-1, 31,0);
    tracep->declBus(c+245,"inst", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+168,"IFU_VALID", false,-1);
    tracep->declBit(c+169,"IDU_READY", false,-1);
    tracep->declBit(c+65,"wbu_done", false,-1);
    tracep->declBit(c+203,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+284,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+279,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+278,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+280,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+283,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+343,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+204,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+284,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+278,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+279,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+285,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+284,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+247,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+281,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+202,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+205,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+8,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+5,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+3,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+4,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+79,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+80,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+9,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+211,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+282,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+201,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+246,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+286,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+2,"ifu_ready", false,-1);
    tracep->declBit(c+168,"ifu_valid", false,-1);
    tracep->declBus(c+343,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+344,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+345,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+346,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+199,"current_state", false,-1, 1,0);
    tracep->declBus(c+267,"next_state", false,-1, 1,0);
    tracep->declBit(c+8,"axi_arvalid", false,-1);
    tracep->declBit(c+9,"axi_rready", false,-1);
    tracep->declBus(c+5,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+3,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+4,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+79,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+80,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+343,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+344,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+345,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+346,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+81,"state", false,-1, 1,0);
    tracep->declBit(c+82,"sram_start", false,-1);
    tracep->declBit(c+83,"sram_ifu_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+174,"sram_lsu_read", false,-1);
    tracep->declBit(c+175,"sram_lsu_write", false,-1);
    tracep->declBit(c+248,"LSU_DONE", false,-1);
    tracep->declBus(c+206,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+176,"valid", false,-1);
    tracep->declBit(c+177,"wen", false,-1);
    tracep->declBus(c+178,"waddr", false,-1, 31,0);
    tracep->declBus(c+179,"wdata", false,-1, 31,0);
    tracep->declBus(c+180,"raddr", false,-1, 31,0);
    tracep->declBus(c+181,"wmask", false,-1, 3,0);
    tracep->declBit(c+208,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+162,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+289,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+158,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+287,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+349,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+350,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+209,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+163,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+159,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+161,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+297,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+164,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+212,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+290,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+207,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+210,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+165,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+291,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+160,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+288,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+351,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+352,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+166,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+213,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+292,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+206,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+249,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+298,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+343,"IDLE", false,-1, 1,0);
    tracep->declBus(c+344,"READ", false,-1, 1,0);
    tracep->declBus(c+345,"WRITE", false,-1, 1,0);
    tracep->declBus(c+346,"DONE", false,-1, 1,0);
    tracep->declBus(c+167,"state", false,-1, 1,0);
    tracep->declBit(c+162,"axi_awvalid", false,-1);
    tracep->declBit(c+163,"axi_wvalid", false,-1);
    tracep->declBus(c+289,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+158,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+159,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+287,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+349,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+350,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+161,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+164,"axi_bready", false,-1);
    tracep->declBit(c+165,"axi_arvalid", false,-1);
    tracep->declBit(c+166,"axi_rready", false,-1);
    tracep->declBus(c+291,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+160,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+288,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+351,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+352,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+244,"pc", false,-1, 31,0);
    tracep->declBus(c+243,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+1,"pcu_valid", false,-1);
    tracep->declBus(c+347,"IDLE", false,-1, 0,0);
    tracep->declBus(c+348,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+84,"state", false,-1);
    tracep->declBit(c+268,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+353,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+354,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBus(c+67,"wdata", false,-1, 31,0);
    tracep->declBus(c+68,"waddr", false,-1, 4,0);
    tracep->declBit(c+69,"wen", false,-1);
    tracep->declBus(c+11,"raddr1", false,-1, 4,0);
    tracep->declBus(c+78,"r1", false,-1, 31,0);
    tracep->declBus(c+12,"raddr2", false,-1, 4,0);
    tracep->declBus(c+182,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+85+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+16,"EXU_VALID", false,-1);
    tracep->declBit(c+17,"WBU_READY", false,-1);
    tracep->declBit(c+65,"wbu_done", false,-1);
    tracep->declBit(c+66,"difftest", false,-1);
    tracep->declBus(c+67,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+18,"res", false,-1, 31,0);
    tracep->declBus(c+68,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBit(c+69,"wen_reg", false,-1);
    tracep->declBit(c+27,"gpr_wen", false,-1);
    tracep->declBus(c+20,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+22,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+24,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+26,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+70,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+71,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+72,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+73,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+28,"mepc_wen", false,-1);
    tracep->declBit(c+29,"mstatus_wen", false,-1);
    tracep->declBit(c+30,"mcause_wen", false,-1);
    tracep->declBit(c+31,"mtvec_wen", false,-1);
    tracep->declBit(c+74,"mepc_wen_reg", false,-1);
    tracep->declBit(c+75,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+76,"mcause_wen_reg", false,-1);
    tracep->declBit(c+77,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+18,"xrd", false,-1, 31,0);
    tracep->declBus(c+10,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+27,"o_rf_wen", false,-1);
    tracep->declBus(c+20,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+22,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+24,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+26,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+17,"wbu_ready", false,-1);
    tracep->declBus(c+343,"IDLE", false,-1, 1,0);
    tracep->declBus(c+344,"WRITE", false,-1, 1,0);
    tracep->declBus(c+345,"DIFF", false,-1, 1,0);
    tracep->declBus(c+346,"NULL", false,-1, 1,0);
    tracep->declBus(c+117,"state", false,-1, 1,0);
    tracep->declBus(c+269,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+203,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+284,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+279,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+278,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+280,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+283,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+343,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+204,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+284,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+278,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+279,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+285,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+284,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+247,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+281,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+202,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+205,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+8,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+5,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+3,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+4,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+79,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+80,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+9,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+211,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+282,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+201,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+246,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+286,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+208,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+162,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+289,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+158,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+287,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+349,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+350,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+209,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+163,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+159,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+161,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+297,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+164,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+212,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+290,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+207,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+210,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+165,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+291,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+160,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+288,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+351,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+352,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+166,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+213,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+292,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+206,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+249,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+298,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+309,"S_AXI_AWREADY", false,-1);
    tracep->declBit(c+216,"S_AXI_AWVALID", false,-1);
    tracep->declBus(c+302,"S_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+32,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+300,"S_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+355,"S_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+356,"S_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+310,"S_AXI_WREADY", false,-1);
    tracep->declBit(c+250,"S_AXI_WVALID", false,-1);
    tracep->declBus(c+214,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+215,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+41,"S_AXI_WLAST", false,-1);
    tracep->declBit(c+38,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+37,"S_AXI_BVALID", false,-1);
    tracep->declBus(c+34,"S_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+308,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+311,"S_AXI_ARREADY", false,-1);
    tracep->declBit(c+217,"S_AXI_ARVALID", false,-1);
    tracep->declBus(c+303,"S_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+33,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+301,"S_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+357,"S_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+358,"S_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+40,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+39,"S_AXI_RVALID", false,-1);
    tracep->declBus(c+35,"S_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+299,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+36,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+42,"S_AXI_RLAST", false,-1);
    tracep->declBit(c+322,"U_AXI_AWREADY", false,-1);
    tracep->declBit(c+220,"U_AXI_AWVALID", false,-1);
    tracep->declBus(c+315,"U_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+43,"U_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+313,"U_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+359,"U_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+360,"U_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+323,"U_AXI_WREADY", false,-1);
    tracep->declBit(c+251,"U_AXI_WVALID", false,-1);
    tracep->declBus(c+218,"U_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+219,"U_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+52,"U_AXI_WLAST", false,-1);
    tracep->declBit(c+49,"U_AXI_BREADY", false,-1);
    tracep->declBit(c+48,"U_AXI_BVALID", false,-1);
    tracep->declBus(c+45,"U_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+321,"U_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+324,"U_AXI_ARREADY", false,-1);
    tracep->declBit(c+221,"U_AXI_ARVALID", false,-1);
    tracep->declBus(c+316,"U_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+44,"U_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+314,"U_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+361,"U_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+362,"U_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+51,"U_AXI_RREADY", false,-1);
    tracep->declBit(c+50,"U_AXI_RVALID", false,-1);
    tracep->declBus(c+46,"U_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+312,"U_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+47,"U_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+53,"U_AXI_RLAST", false,-1);
    tracep->declBit(c+322,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+220,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+315,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+43,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+313,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+363,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+364,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+323,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+251,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+218,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+219,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+52,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+49,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+48,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+45,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+321,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+324,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+221,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+316,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+44,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+314,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+365,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+366,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+51,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+50,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+46,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+312,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+47,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+53,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+223,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+224,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+225,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+226,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+227,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+367,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+368,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+369,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+370,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+371,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+372,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+373,"X_AXI_AWSIZE", false,-1, 3,0);
    tracep->declBus(c+374,"X_AXI_ARSIZE", false,-1, 3,0);
    tracep->declBus(c+375,"X_AXI_AWBURST", false,-1, 2,0);
    tracep->declBus(c+376,"X_AXI_ARBURST", false,-1, 2,0);
    tracep->declBus(c+228,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+270,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+229,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+230,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+271,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+231,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+272,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+273,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+232,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+233,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+234,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+274,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+377,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+378,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+343,"IDLE", false,-1, 1,0);
    tracep->declBus(c+344,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+345,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+346,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+200,"state", false,-1, 1,0);
    tracep->declBus(c+275,"next_state", false,-1, 1,0);
    tracep->declBus(c+379,"DEVICE_UART_ADDR", false,-1, 31,0);
    tracep->declBus(c+380,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+381,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+235,"sel_uart", false,-1);
    tracep->declBit(c+236,"sel_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+382,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+72,"din", false,-1, 31,0);
    tracep->declBus(c+23,"dout", false,-1, 31,0);
    tracep->declBit(c+76,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+382,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+70,"din", false,-1, 31,0);
    tracep->declBus(c+19,"dout", false,-1, 31,0);
    tracep->declBit(c+74,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+71,"din", false,-1, 31,0);
    tracep->declBus(c+21,"dout", false,-1, 31,0);
    tracep->declBit(c+75,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+382,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+73,"din", false,-1, 31,0);
    tracep->declBus(c+25,"dout", false,-1, 31,0);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+118,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+337,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+384,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+385,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+328,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+386,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+387,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+63,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+388,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+389,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+390,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+340,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+391,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+59,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+119,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+120,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+121,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+341,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+392,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+393,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+329,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+394,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+395,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+396,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+122,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+123,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+124,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+125,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+64,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+118,"axi_awready", false,-1);
    tracep->declBit(c+63,"axi_wready", false,-1);
    tracep->declBit(c+59,"axi_bvalid", false,-1);
    tracep->declBit(c+121,"axi_arready", false,-1);
    tracep->declBit(c+122,"axi_rvalid", false,-1);
    tracep->declBit(c+64,"axi_rlast", false,-1);
    tracep->declBus(c+120,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+125,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+119,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+123,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+124,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+126,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+380,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+381,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+127,"mtime", false,-1, 63,0);
    tracep->declBus(c+129,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_SRAM ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+130,"S_AXI_AWREADY", false,-1);
    tracep->declBit(c+216,"S_AXI_AWVALID", false,-1);
    tracep->declBus(c+397,"S_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+398,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+300,"S_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+355,"S_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+356,"S_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+41,"S_AXI_WREADY", false,-1);
    tracep->declBit(c+237,"S_AXI_WVALID", false,-1);
    tracep->declBus(c+238,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+276,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+310,"S_AXI_WLAST", false,-1);
    tracep->declBit(c+399,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+37,"S_AXI_BVALID", false,-1);
    tracep->declBus(c+131,"S_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+132,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+133,"S_AXI_ARREADY", false,-1);
    tracep->declBit(c+217,"S_AXI_ARVALID", false,-1);
    tracep->declBus(c+400,"S_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+401,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+301,"S_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+357,"S_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+358,"S_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+402,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+134,"S_AXI_RVALID", false,-1);
    tracep->declBus(c+135,"S_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+136,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+137,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+42,"S_AXI_RLAST", false,-1);
    tracep->declBit(c+130,"axi_awready", false,-1);
    tracep->declBit(c+41,"axi_wready", false,-1);
    tracep->declBit(c+37,"axi_bvalid", false,-1);
    tracep->declBit(c+133,"axi_arready", false,-1);
    tracep->declBit(c+134,"axi_rvalid", false,-1);
    tracep->declBit(c+42,"axi_rlast", false,-1);
    tracep->declBus(c+132,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+137,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+131,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+135,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+136,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+138,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+139,"s_wen", false,-1);
    tracep->declBus(c+140,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_UART ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+141,"U_AXI_AWREADY", false,-1);
    tracep->declBit(c+220,"U_AXI_AWVALID", false,-1);
    tracep->declBus(c+403,"U_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+404,"U_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+313,"U_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+363,"U_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+364,"U_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+52,"U_AXI_WREADY", false,-1);
    tracep->declBit(c+239,"U_AXI_WVALID", false,-1);
    tracep->declBus(c+240,"U_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+277,"U_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+323,"U_AXI_WLAST", false,-1);
    tracep->declBit(c+405,"U_AXI_BREADY", false,-1);
    tracep->declBit(c+48,"U_AXI_BVALID", false,-1);
    tracep->declBus(c+142,"U_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+143,"U_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+144,"U_AXI_ARREADY", false,-1);
    tracep->declBit(c+221,"U_AXI_ARVALID", false,-1);
    tracep->declBus(c+406,"U_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+407,"U_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+314,"U_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+365,"U_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+366,"U_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+408,"U_AXI_RREADY", false,-1);
    tracep->declBit(c+145,"U_AXI_RVALID", false,-1);
    tracep->declBus(c+146,"U_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+147,"U_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+148,"U_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+53,"U_AXI_RLAST", false,-1);
    tracep->declBit(c+141,"axi_awready", false,-1);
    tracep->declBit(c+52,"axi_wready", false,-1);
    tracep->declBit(c+48,"axi_bvalid", false,-1);
    tracep->declBit(c+144,"axi_arready", false,-1);
    tracep->declBit(c+145,"axi_rvalid", false,-1);
    tracep->declBit(c+53,"axi_rlast", false,-1);
    tracep->declBus(c+143,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+148,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+142,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+146,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+147,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+149,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+379,"DEVICE_UART_ADDR", false,-1, 31,0);
    tracep->declBus(c+409,"device_uart_reg", false,-1, 31,0);
    tracep->declBit(c+150,"ureg_wen", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_24110017___024root__trace_init_top(Vysyx_24110017___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110017___024root__trace_init_top\n"); );
    // Body
    Vysyx_24110017___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24110017___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24110017___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24110017___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24110017___024root__trace_register(Vysyx_24110017___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110017___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24110017___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24110017___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24110017___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24110017___024root__trace_full_sub_0(Vysyx_24110017___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24110017___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110017___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24110017___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24110017___024root*>(voidSelf);
    Vysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24110017___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24110017___024root__trace_full_sub_0(Vysyx_24110017___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110017___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyx_24110017__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+2,(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+3,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arsize),4);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arburst),3);
    bufp->fullBit(oldp+8,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullCData(oldp+10,(vlSelf->ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_24110017__DOT__funct7),7);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_24110017__DOT__shamt),5);
    bufp->fullBit(oldp+16,(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+17,(vlSelf->ysyx_24110017__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24110017__DOT__o_mepc),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24110017__DOT__o_mcause),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24110017__DOT__mtvec),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24110017__DOT__o_mtvec),32);
    bufp->fullBit(oldp+27,(vlSelf->ysyx_24110017__DOT__gpr_wen));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_24110017__DOT__mepc_wen));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_24110017__DOT__mcause_wen));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_24110017__DOT__mtvec_wen));
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_awready),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_arready),32);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp),4);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp),4);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid),2);
    bufp->fullBit(oldp+37,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid));
    bufp->fullBit(oldp+38,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bid))));
    bufp->fullBit(oldp+39,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rid))));
    bufp->fullBit(oldp+40,((1U & vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rdata)));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready));
    bufp->fullBit(oldp+42,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rlast));
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_awready),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_arready),32);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp),4);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp),4);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid),2);
    bufp->fullBit(oldp+48,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid));
    bufp->fullBit(oldp+49,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bid))));
    bufp->fullBit(oldp+50,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rid))));
    bufp->fullBit(oldp+51,((1U & vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rdata)));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rlast));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_awready),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_arready),32);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),4);
    bufp->fullCData(oldp+57,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),4);
    bufp->fullCData(oldp+58,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid),2);
    bufp->fullBit(oldp+59,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+60,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bid))));
    bufp->fullBit(oldp+61,((1U & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rid))));
    bufp->fullBit(oldp+62,((1U & vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rdata)));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_24110017__DOT__wbu_done));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_24110017__DOT__difftest));
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24110017__DOT__xrd),32);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_24110017__DOT__rf_addr),5);
    bufp->fullBit(oldp+69,(vlSelf->ysyx_24110017__DOT__rf_wen));
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24110017__DOT__w_mepc),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24110017__DOT__w_mstatus),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24110017__DOT__w_mcause),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24110017__DOT__w_mtvec),32);
    bufp->fullBit(oldp+74,(vlSelf->ysyx_24110017__DOT__mepc_en));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_24110017__DOT__mstatus_en));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_24110017__DOT__mcause_en));
    bufp->fullBit(oldp+77,(vlSelf->ysyx_24110017__DOT__mtvec_en));
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24110017__DOT__r1),32);
    bufp->fullCData(oldp+79,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+80,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+81,(vlSelf->ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+82,(vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+117,(vlSelf->ysyx_24110017__DOT__WBU__DOT__state),2);
    bufp->fullBit(oldp+118,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullCData(oldp+119,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+120,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullBit(oldp+121,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullCData(oldp+123,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+125,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+127,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+129,((((- (IData)((vlSelf->ysyx_24110017__DOT__C_AXI_RDATA 
                                            & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid)))) 
                                & ((- (IData)((0xa0000048U 
                                               == vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                   & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                               | ((- (IData)((0xa000004cU 
                                              == vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                  & (IData)((vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullBit(oldp+130,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_awready));
    bufp->fullCData(oldp+131,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bid),4);
    bufp->fullCData(oldp+132,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp),2);
    bufp->fullBit(oldp+133,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_arready));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid));
    bufp->fullCData(oldp+135,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rid),4);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rdata),32);
    bufp->fullCData(oldp+137,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp),2);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_araddr),32);
    bufp->fullBit(oldp+139,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_wen));
    bufp->fullIData(oldp+140,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_rdata),32);
    bufp->fullBit(oldp+141,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_awready));
    bufp->fullCData(oldp+142,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bid),4);
    bufp->fullCData(oldp+143,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp),2);
    bufp->fullBit(oldp+144,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_arready));
    bufp->fullBit(oldp+145,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid));
    bufp->fullCData(oldp+146,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rid),4);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rdata),32);
    bufp->fullCData(oldp+148,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp),2);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_araddr),32);
    bufp->fullBit(oldp+150,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__ureg_wen));
    bufp->fullBit(oldp+151,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   == vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+152,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   != vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+153,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+154,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+155,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   < vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+156,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   >= vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+157,(((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((0x302U == vlSelf->ysyx_24110017__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))));
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+161,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+162,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+163,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+164,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+165,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+166,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullCData(oldp+167,(vlSelf->ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+168,(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+169,(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_ready));
    bufp->fullBit(oldp+170,(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+171,(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+172,(vlSelf->ysyx_24110017__DOT__op),7);
    bufp->fullCData(oldp+173,(vlSelf->ysyx_24110017__DOT__funct3),3);
    bufp->fullBit(oldp+174,(vlSelf->ysyx_24110017__DOT__sram_lsu_read));
    bufp->fullBit(oldp+175,(vlSelf->ysyx_24110017__DOT__sram_lsu_write));
    bufp->fullBit(oldp+176,(vlSelf->ysyx_24110017__DOT__ls_valid));
    bufp->fullBit(oldp+177,((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))));
    bufp->fullIData(oldp+178,(((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+179,(((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                ? vlSelf->ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+180,(((3U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+181,((((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),4);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_24110017__DOT__r2),32);
    bufp->fullCData(oldp+183,(vlSelf->ysyx_24110017__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+188,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyx_24110017__DOT__r2
                                : vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+189,((0x6fU == (IData)(vlSelf->ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+190,((0x67U == (IData)(vlSelf->ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+191,(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+192,(((0x37U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             | ((0x17U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                | ((0x6fU == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                   | ((0x67U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                      | ((0x13U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                         | ((0xfU == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                            | ((0x73U 
                                                == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                               | ((0x33U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->ysyx_24110017__DOT__op))))))))))));
    bufp->fullBit(oldp+193,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+194,(vlSelf->ysyx_24110017__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+195,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+196,(vlSelf->ysyx_24110017__DOT__EXU__DOT__mtvec_wen));
    bufp->fullIData(oldp+197,(vlSelf->ysyx_24110017__DOT__IDU__DOT__imm),32);
    bufp->fullBit(oldp+198,(vlSelf->ysyx_24110017__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+199,(vlSelf->ysyx_24110017__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+200,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullIData(oldp+201,((((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                | (0U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)))
                                ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                : 0U)),32);
    bufp->fullCData(oldp+202,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_BRESP)))
                                : 0U)),2);
    bufp->fullBit(oldp+203,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    bufp->fullBit(oldp+204,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_WREADY))))));
    bufp->fullBit(oldp+205,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullIData(oldp+206,(((IData)(vlSelf->__VdfgTmp_h9f8b16d6__0)
                                ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                : 0U)),32);
    bufp->fullCData(oldp+207,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_BRESP)))
                                : 0U)),2);
    bufp->fullBit(oldp+208,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    bufp->fullBit(oldp+209,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_WREADY))))));
    bufp->fullBit(oldp+210,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+211,(vlSelf->ysyx_24110017__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+212,(vlSelf->ysyx_24110017__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+213,(vlSelf->ysyx_24110017__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+214,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7e9dd1a3__0[0U]),32);
    bufp->fullCData(oldp+215,((0xfU & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                        ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                           << 8U) : 
                                       ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                            << 4U) : (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB))))),4);
    bufp->fullBit(oldp+216,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0))));
    bufp->fullBit(oldp+217,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0))));
    bufp->fullIData(oldp+218,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7e9dd1a3__0[2U]),32);
    bufp->fullCData(oldp+219,((0xfU & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                         ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                            << 8U) : 
                                        ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                          ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                             << 4U)
                                          : (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB))) 
                                       >> 8U))),4);
    bufp->fullBit(oldp+220,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+221,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0) 
                                   >> 2U))));
    bufp->fullIData(oldp+222,(vlSelf->ysyx_24110017__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullCData(oldp+227,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+228,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP)
                                    : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_BRESP)))),2);
    bufp->fullBit(oldp+229,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+230,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY));
    bufp->fullBit(oldp+231,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                              ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                              : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY)
                                  : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_WREADY)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+233,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+234,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullBit(oldp+235,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart));
    bufp->fullBit(oldp+236,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullBit(oldp+237,((1U & vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7e9dd1a3__0[0U])));
    bufp->fullIData(oldp+238,((0xfU & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                        ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                           << 8U) : 
                                       ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                            << 4U) : (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB))))),32);
    bufp->fullBit(oldp+239,((1U & vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7e9dd1a3__0[2U])));
    bufp->fullIData(oldp+240,((0xfU & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                         ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                            << 8U) : 
                                        ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                          ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB) 
                                             << 4U)
                                          : (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB))) 
                                       >> 8U))),32);
    bufp->fullBit(oldp+241,(vlSelf->clk));
    bufp->fullBit(oldp+242,(vlSelf->rst));
    bufp->fullIData(oldp+243,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+244,(vlSelf->pc),32);
    bufp->fullIData(oldp+245,(vlSelf->inst),32);
    bufp->fullCData(oldp+246,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid)))
                                : 0U)),2);
    bufp->fullBit(oldp+247,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid))))));
    bufp->fullBit(oldp+248,(vlSelf->ysyx_24110017__DOT__LSU_DONE));
    bufp->fullCData(oldp+249,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid)))
                                : 0U)),2);
    bufp->fullBit(oldp+250,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                        & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                       << 2U) : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                  ? 
                                                 (((1U 
                                                    == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                   & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                                  << 1U)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                  & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)))))));
    bufp->fullBit(oldp+251,((1U & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                     ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                         & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                        << 2U) : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                   ? 
                                                  (((1U 
                                                     == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                    & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                                   << 1U)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                   & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)))) 
                                   >> 2U))));
    bufp->fullCData(oldp+252,(vlSelf->ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+253,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullCData(oldp+254,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+255,((((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+256,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+257,((((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+258,((0x1fU & ((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
                                         ? (vlSelf->inst 
                                            >> 0x14U)
                                         : ((IData)(
                                                    ((0x73U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst)) 
                                                     & (0U 
                                                        == vlSelf->ysyx_24110017__DOT__IDU__DOT__imm)))
                                             ? 0xfU
                                             : 0U)))),5);
    bufp->fullIData(oldp+259,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+260,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+261,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+262,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+263,((((- (IData)((vlSelf->inst 
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
    bufp->fullCData(oldp+264,((((0x33U == (0x7fU & vlSelf->inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->inst)))
                                ? (vlSelf->inst >> 0x19U)
                                : 0U)),7);
    bufp->fullCData(oldp+265,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+266,(vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+267,(vlSelf->ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+268,(vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+269,(vlSelf->ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+270,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid)
                                    : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid)))),2);
    bufp->fullBit(oldp+271,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid))));
    bufp->fullBit(oldp+272,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                              ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                  : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid)))));
    bufp->fullBit(oldp+273,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready))));
    bufp->fullBit(oldp+274,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                              ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready)
                              : ((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 & (IData)(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_rready)))));
    bufp->fullCData(oldp+275,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->fullCData(oldp+276,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                      ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                          & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                         << 2U) : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                                    ? 
                                                   (((1U 
                                                      == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                     & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                                    << 1U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                                    & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)))))),4);
    bufp->fullCData(oldp+277,((1U & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                       ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                           & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                          << 2U) : 
                                      ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                            & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)) 
                                           << 1U) : 
                                       ((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                        & (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid)))) 
                                     >> 2U))),4);
    bufp->fullIData(oldp+278,(0U),32);
    bufp->fullCData(oldp+279,(0U),4);
    bufp->fullCData(oldp+280,(0U),8);
    bufp->fullCData(oldp+281,(vlSelf->ysyx_24110017__DOT__IFU_AXI_BID),4);
    bufp->fullCData(oldp+282,(vlSelf->ysyx_24110017__DOT__IFU_AXI_RID),4);
    bufp->fullCData(oldp+283,(0U),3);
    bufp->fullBit(oldp+284,(0U));
    bufp->fullBit(oldp+285,(vlSelf->ysyx_24110017__DOT__IFU_AXI_WLAST));
    bufp->fullBit(oldp+286,(vlSelf->ysyx_24110017__DOT__IFU_AXI_RLAST));
    bufp->fullCData(oldp+287,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+288,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+289,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+290,(vlSelf->ysyx_24110017__DOT__LSU_AXI_BID),4);
    bufp->fullCData(oldp+291,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+292,(vlSelf->ysyx_24110017__DOT__LSU_AXI_RID),4);
    bufp->fullCData(oldp+293,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awsize),4);
    bufp->fullCData(oldp+294,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arsize),4);
    bufp->fullCData(oldp+295,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awburst),3);
    bufp->fullCData(oldp+296,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arburst),3);
    bufp->fullBit(oldp+297,(vlSelf->ysyx_24110017__DOT__LSU_AXI_WLAST));
    bufp->fullBit(oldp+298,(vlSelf->ysyx_24110017__DOT__LSU_AXI_RLAST));
    bufp->fullIData(oldp+299,(vlSelf->ysyx_24110017__DOT__S_AXI_RDATA),32);
    bufp->fullCData(oldp+300,(vlSelf->ysyx_24110017__DOT__S_AXI_AWLEN),8);
    bufp->fullCData(oldp+301,(vlSelf->ysyx_24110017__DOT__S_AXI_ARLEN),8);
    bufp->fullCData(oldp+302,(vlSelf->ysyx_24110017__DOT__S_AXI_AWID),4);
    bufp->fullCData(oldp+303,(vlSelf->ysyx_24110017__DOT__S_AXI_ARID),4);
    bufp->fullCData(oldp+304,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber66),4);
    bufp->fullCData(oldp+305,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber82),4);
    bufp->fullCData(oldp+306,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber67),3);
    bufp->fullCData(oldp+307,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber83),3);
    bufp->fullCData(oldp+308,(vlSelf->ysyx_24110017__DOT__S_AXI_BRESP),2);
    bufp->fullBit(oldp+309,(vlSelf->ysyx_24110017__DOT__S_AXI_AWREADY));
    bufp->fullBit(oldp+310,(vlSelf->ysyx_24110017__DOT__S_AXI_WREADY));
    bufp->fullBit(oldp+311,(vlSelf->ysyx_24110017__DOT__S_AXI_ARREADY));
    bufp->fullIData(oldp+312,(vlSelf->ysyx_24110017__DOT__U_AXI_RDATA),32);
    bufp->fullCData(oldp+313,(vlSelf->ysyx_24110017__DOT__U_AXI_AWLEN),8);
    bufp->fullCData(oldp+314,(vlSelf->ysyx_24110017__DOT__U_AXI_ARLEN),8);
    bufp->fullCData(oldp+315,(vlSelf->ysyx_24110017__DOT__U_AXI_AWID),4);
    bufp->fullCData(oldp+316,(vlSelf->ysyx_24110017__DOT__U_AXI_ARID),4);
    bufp->fullCData(oldp+317,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber124),4);
    bufp->fullCData(oldp+318,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber140),4);
    bufp->fullCData(oldp+319,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber125),3);
    bufp->fullCData(oldp+320,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber141),3);
    bufp->fullCData(oldp+321,(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP),2);
    bufp->fullBit(oldp+322,(vlSelf->ysyx_24110017__DOT__U_AXI_AWREADY));
    bufp->fullBit(oldp+323,(vlSelf->ysyx_24110017__DOT__U_AXI_WREADY));
    bufp->fullBit(oldp+324,(vlSelf->ysyx_24110017__DOT__U_AXI_ARREADY));
    bufp->fullIData(oldp+325,(vlSelf->ysyx_24110017__DOT__C_AXI_WDATA),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_24110017__DOT__C_AXI_RDATA),32);
    bufp->fullCData(oldp+327,(vlSelf->ysyx_24110017__DOT__C_AXI_WSTRB),4);
    bufp->fullCData(oldp+328,(vlSelf->ysyx_24110017__DOT__C_AXI_AWLEN),8);
    bufp->fullCData(oldp+329,(vlSelf->ysyx_24110017__DOT__C_AXI_ARLEN),8);
    bufp->fullCData(oldp+330,(vlSelf->ysyx_24110017__DOT__C_AXI_AWID),4);
    bufp->fullCData(oldp+331,(vlSelf->ysyx_24110017__DOT__C_AXI_ARID),4);
    bufp->fullCData(oldp+332,(vlSelf->ysyx_24110017__DOT__C_AXI_AWSIZE),4);
    bufp->fullCData(oldp+333,(vlSelf->ysyx_24110017__DOT__C_AXI_ARSIZE),4);
    bufp->fullCData(oldp+334,(vlSelf->ysyx_24110017__DOT__C_AXI_AWBURST),3);
    bufp->fullCData(oldp+335,(vlSelf->ysyx_24110017__DOT__C_AXI_ARBURST),3);
    bufp->fullCData(oldp+336,(vlSelf->ysyx_24110017__DOT__C_AXI_BRESP),2);
    bufp->fullBit(oldp+337,(vlSelf->ysyx_24110017__DOT__C_AXI_AWVALID));
    bufp->fullBit(oldp+338,(vlSelf->ysyx_24110017__DOT__C_AXI_AWREADY));
    bufp->fullBit(oldp+339,(vlSelf->ysyx_24110017__DOT__C_AXI_WVALID));
    bufp->fullBit(oldp+340,(vlSelf->ysyx_24110017__DOT__C_AXI_WREADY));
    bufp->fullBit(oldp+341,(vlSelf->ysyx_24110017__DOT__C_AXI_ARVALID));
    bufp->fullBit(oldp+342,(vlSelf->ysyx_24110017__DOT__C_AXI_ARREADY));
    bufp->fullCData(oldp+343,(0U),2);
    bufp->fullCData(oldp+344,(1U),2);
    bufp->fullCData(oldp+345,(2U),2);
    bufp->fullCData(oldp+346,(3U),2);
    bufp->fullBit(oldp+347,(0U));
    bufp->fullBit(oldp+348,(1U));
    bufp->fullCData(oldp+349,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+350,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+351,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+352,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullIData(oldp+353,(5U),32);
    bufp->fullIData(oldp+354,(0x20U),32);
    bufp->fullCData(oldp+355,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber66),3);
    bufp->fullCData(oldp+356,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber67),2);
    bufp->fullCData(oldp+357,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber82),3);
    bufp->fullCData(oldp+358,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber83),2);
    bufp->fullCData(oldp+359,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber95),3);
    bufp->fullCData(oldp+360,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber96),2);
    bufp->fullCData(oldp+361,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber111),3);
    bufp->fullCData(oldp+362,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber112),2);
    bufp->fullCData(oldp+363,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber124),3);
    bufp->fullCData(oldp+364,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber125),2);
    bufp->fullCData(oldp+365,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber140),3);
    bufp->fullCData(oldp+366,(vlSelf->ysyx_24110017__DOT____Vcellout__Xbar_ysyx_24110017____pinNumber141),2);
    bufp->fullCData(oldp+367,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+368,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+369,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+370,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BID),4);
    bufp->fullCData(oldp+371,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+372,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RID),4);
    bufp->fullCData(oldp+373,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWSIZE),4);
    bufp->fullCData(oldp+374,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARSIZE),4);
    bufp->fullCData(oldp+375,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWBURST),3);
    bufp->fullCData(oldp+376,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARBURST),3);
    bufp->fullBit(oldp+377,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+378,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RLAST));
    bufp->fullIData(oldp+379,(0xa00003f8U),32);
    bufp->fullIData(oldp+380,(0xa0000048U),32);
    bufp->fullIData(oldp+381,(0xa000004cU),32);
    bufp->fullIData(oldp+382,(0U),32);
    bufp->fullIData(oldp+383,(0x1800U),32);
    bufp->fullCData(oldp+384,(vlSelf->ysyx_24110017__DOT__C_AXI_AWREADY),4);
    bufp->fullIData(oldp+385,(vlSelf->ysyx_24110017__DOT__C_AXI_AWID),32);
    bufp->fullCData(oldp+386,((7U & (IData)(vlSelf->ysyx_24110017__DOT__C_AXI_AWSIZE))),3);
    bufp->fullCData(oldp+387,((3U & (IData)(vlSelf->ysyx_24110017__DOT__C_AXI_AWBURST))),2);
    bufp->fullBit(oldp+388,((1U & vlSelf->ysyx_24110017__DOT__C_AXI_WDATA)));
    bufp->fullIData(oldp+389,(vlSelf->ysyx_24110017__DOT__C_AXI_WSTRB),32);
    bufp->fullCData(oldp+390,(vlSelf->ysyx_24110017__DOT__C_AXI_WVALID),4);
    bufp->fullBit(oldp+391,((1U & (IData)(vlSelf->ysyx_24110017__DOT__C_AXI_BRESP))));
    bufp->fullCData(oldp+392,(vlSelf->ysyx_24110017__DOT__C_AXI_ARREADY),4);
    bufp->fullIData(oldp+393,(vlSelf->ysyx_24110017__DOT__C_AXI_ARID),32);
    bufp->fullCData(oldp+394,((7U & (IData)(vlSelf->ysyx_24110017__DOT__C_AXI_ARSIZE))),3);
    bufp->fullCData(oldp+395,((3U & (IData)(vlSelf->ysyx_24110017__DOT__C_AXI_ARBURST))),2);
    bufp->fullBit(oldp+396,((1U & vlSelf->ysyx_24110017__DOT__C_AXI_RDATA)));
    bufp->fullCData(oldp+397,(vlSelf->ysyx_24110017__DOT__S_AXI_AWREADY),4);
    bufp->fullIData(oldp+398,(vlSelf->ysyx_24110017__DOT__S_AXI_AWID),32);
    bufp->fullBit(oldp+399,((1U & (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_BRESP))));
    bufp->fullCData(oldp+400,(vlSelf->ysyx_24110017__DOT__S_AXI_ARREADY),4);
    bufp->fullIData(oldp+401,(vlSelf->ysyx_24110017__DOT__S_AXI_ARID),32);
    bufp->fullBit(oldp+402,((1U & vlSelf->ysyx_24110017__DOT__S_AXI_RDATA)));
    bufp->fullCData(oldp+403,(vlSelf->ysyx_24110017__DOT__U_AXI_AWREADY),4);
    bufp->fullIData(oldp+404,(vlSelf->ysyx_24110017__DOT__U_AXI_AWID),32);
    bufp->fullBit(oldp+405,((1U & (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_BRESP))));
    bufp->fullCData(oldp+406,(vlSelf->ysyx_24110017__DOT__U_AXI_ARREADY),4);
    bufp->fullIData(oldp+407,(vlSelf->ysyx_24110017__DOT__U_AXI_ARID),32);
    bufp->fullBit(oldp+408,((1U & vlSelf->ysyx_24110017__DOT__U_AXI_RDATA)));
    bufp->fullIData(oldp+409,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__device_uart_reg),32);
}
