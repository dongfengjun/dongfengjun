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
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+229,"dnpc", false,-1, 31,0);
    tracep->declBus(c+230,"pc", false,-1, 31,0);
    tracep->declBus(c+231,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24110017 ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+229,"dnpc", false,-1, 31,0);
    tracep->declBus(c+230,"pc", false,-1, 31,0);
    tracep->declBus(c+231,"inst", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+135,"IFU_VALID", false,-1);
    tracep->declBit(c+136,"IDU_READY", false,-1);
    tracep->declBus(c+255,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+255,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+3,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+183,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+256,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+257,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+4,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+256,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+258,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+5,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+259,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+260,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+6,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+261,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+7,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+117,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+118,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+262,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+184,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+262,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+185,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+119,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+262,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+8,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+186,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+192,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+9,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+263,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+264,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+137,"IDU_VALID", false,-1);
    tracep->declBit(c+138,"EXU_READY", false,-1);
    tracep->declBus(c+139,"op", false,-1, 6,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+140,"funct3", false,-1, 2,0);
    tracep->declBus(c+11,"rs1", false,-1, 4,0);
    tracep->declBus(c+12,"rs2", false,-1, 4,0);
    tracep->declBus(c+13,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"funct7", false,-1, 6,0);
    tracep->declBus(c+15,"shamt", false,-1, 4,0);
    tracep->declBit(c+141,"sram_lsu_read", false,-1);
    tracep->declBit(c+142,"sram_lsu_write", false,-1);
    tracep->declBit(c+232,"LSU_DONE", false,-1);
    tracep->declBit(c+16,"EXU_VALID", false,-1);
    tracep->declBit(c+17,"WBU_READY", false,-1);
    tracep->declBus(c+18,"res", false,-1, 31,0);
    tracep->declBit(c+143,"ls_valid", false,-1);
    tracep->declBit(c+144,"ls_wen", false,-1);
    tracep->declBus(c+145,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+146,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+147,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+148,"ls_wmask", false,-1, 3,0);
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
    tracep->declBus(c+187,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+125,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+126,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+127,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+187,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+128,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+265,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+266,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+267,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+268,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+269,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+270,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+271,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+272,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+273,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+274,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+120,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+121,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+129,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+188,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+130,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+189,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+193,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+131,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+132,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+190,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+194,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+133,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+275,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+276,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+195,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+196,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+197,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+32,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+233,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+277,"S_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+278,"S_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+279,"S_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+33,"S_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+280,"S_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+34,"S_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+281,"S_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+282,"S_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+283,"S_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+284,"S_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+35,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+36,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+198,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+37,"S_AXI_AWREADY", false,-1);
    tracep->declBit(c+199,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+149,"S_AXI_WREADY", false,-1);
    tracep->declBit(c+38,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+200,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+201,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+39,"S_AXI_ARREADY", false,-1);
    tracep->declBit(c+40,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+202,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+285,"S_AXI_WLAST", false,-1);
    tracep->declBit(c+41,"S_AXI_RLAST", false,-1);
    tracep->declBus(c+203,"U_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+204,"U_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+205,"U_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+150,"U_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+234,"U_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+286,"U_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+287,"U_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+288,"U_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+151,"U_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+289,"U_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+152,"U_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+290,"U_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+291,"U_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+292,"U_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+293,"U_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+153,"U_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+154,"U_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+206,"U_AXI_AWVALID", false,-1);
    tracep->declBit(c+155,"U_AXI_AWREADY", false,-1);
    tracep->declBit(c+207,"U_AXI_WVALID", false,-1);
    tracep->declBit(c+156,"U_AXI_WREADY", false,-1);
    tracep->declBit(c+157,"U_AXI_BVALID", false,-1);
    tracep->declBit(c+208,"U_AXI_BREADY", false,-1);
    tracep->declBit(c+209,"U_AXI_ARVALID", false,-1);
    tracep->declBit(c+158,"U_AXI_ARREADY", false,-1);
    tracep->declBit(c+159,"U_AXI_RVALID", false,-1);
    tracep->declBit(c+210,"U_AXI_RREADY", false,-1);
    tracep->declBit(c+294,"U_AXI_WLAST", false,-1);
    tracep->declBit(c+160,"U_AXI_RLAST", false,-1);
    tracep->declBus(c+295,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+296,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+297,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+42,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+298,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+299,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+300,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+301,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+43,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+302,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+44,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+303,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+304,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+305,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+306,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+45,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+46,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+307,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+47,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+308,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+48,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+49,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+309,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+310,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+50,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+51,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+311,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+312,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+52,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+53,"wbu_done", false,-1);
    tracep->declBit(c+54,"difftest", false,-1);
    tracep->declBus(c+55,"xrd", false,-1, 31,0);
    tracep->declBus(c+56,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+57,"rf_wen", false,-1);
    tracep->declBus(c+58,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+59,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+60,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+61,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+62,"mepc_en", false,-1);
    tracep->declBit(c+63,"mstatus_en", false,-1);
    tracep->declBit(c+64,"mcause_en", false,-1);
    tracep->declBit(c+65,"mtvec_en", false,-1);
    tracep->declBus(c+66,"r1", false,-1, 31,0);
    tracep->declBus(c+161,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBit(c+141,"sram_lsu_read", false,-1);
    tracep->declBit(c+142,"sram_lsu_write", false,-1);
    tracep->declBit(c+232,"LSU_DONE", false,-1);
    tracep->declBit(c+137,"IDU_VALID", false,-1);
    tracep->declBit(c+138,"EXU_READY", false,-1);
    tracep->declBit(c+16,"EXU_VALID", false,-1);
    tracep->declBit(c+17,"WBU_READY", false,-1);
    tracep->declBus(c+139,"op", false,-1, 6,0);
    tracep->declBus(c+140,"funct3", false,-1, 2,0);
    tracep->declBus(c+13,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"funct7", false,-1, 6,0);
    tracep->declBus(c+15,"shamt", false,-1, 4,0);
    tracep->declBus(c+66,"r1", false,-1, 31,0);
    tracep->declBus(c+161,"r2", false,-1, 31,0);
    tracep->declBus(c+18,"res_reg", false,-1, 31,0);
    tracep->declBit(c+143,"ls_valid", false,-1);
    tracep->declBit(c+144,"ls_wen", false,-1);
    tracep->declBus(c+145,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+146,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+147,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+148,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+187,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+230,"pc", false,-1, 31,0);
    tracep->declBus(c+229,"dnpc", false,-1, 31,0);
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
    tracep->declBit(c+138,"exu_ready", false,-1);
    tracep->declBit(c+16,"exu_valid", false,-1);
    tracep->declBus(c+261,"IDLE", false,-1, 1,0);
    tracep->declBus(c+313,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+314,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+315,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+162,"state", false,-1, 1,0);
    tracep->declBus(c+235,"next_state", false,-1, 1,0);
    tracep->declBus(c+163,"a", false,-1, 31,0);
    tracep->declBus(c+164,"b", false,-1, 31,0);
    tracep->declBus(c+211,"res", false,-1, 31,0);
    tracep->declBus(c+165,"csr", false,-1, 31,0);
    tracep->declBus(c+166,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+236,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+166,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+167,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+166,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+13,"offset", false,-1, 31,0);
    tracep->declBit(c+168,"jalen", false,-1);
    tracep->declBit(c+169,"jalren", false,-1);
    tracep->declBit(c+110,"beqen", false,-1);
    tracep->declBit(c+111,"bneen", false,-1);
    tracep->declBit(c+112,"blten", false,-1);
    tracep->declBit(c+113,"bgeen", false,-1);
    tracep->declBit(c+114,"bltuen", false,-1);
    tracep->declBit(c+115,"bgeuen", false,-1);
    tracep->declBit(c+170,"ecall_en", false,-1);
    tracep->declBit(c+116,"mret_en", false,-1);
    tracep->declBit(c+171,"gpr_wen", false,-1);
    tracep->declBit(c+172,"mepc_wen", false,-1);
    tracep->declBit(c+173,"mstatus_wen", false,-1);
    tracep->declBit(c+174,"mcause_wen", false,-1);
    tracep->declBit(c+175,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+231,"inst", false,-1, 31,0);
    tracep->declBit(c+135,"IFU_VALID", false,-1);
    tracep->declBit(c+136,"IDU_READY", false,-1);
    tracep->declBit(c+137,"IDU_VALID", false,-1);
    tracep->declBit(c+138,"EXU_READY", false,-1);
    tracep->declBus(c+139,"op_reg", false,-1, 6,0);
    tracep->declBus(c+10,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+140,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+11,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+12,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+13,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+14,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+15,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+237,"op", false,-1, 6,0);
    tracep->declBus(c+238,"rd", false,-1, 4,0);
    tracep->declBus(c+239,"funct3", false,-1, 2,0);
    tracep->declBus(c+240,"rs1", false,-1, 4,0);
    tracep->declBus(c+241,"rs2", false,-1, 4,0);
    tracep->declBus(c+242,"immI", false,-1, 31,0);
    tracep->declBus(c+243,"immU", false,-1, 31,0);
    tracep->declBus(c+244,"immS", false,-1, 31,0);
    tracep->declBus(c+245,"immB", false,-1, 31,0);
    tracep->declBus(c+246,"immJ", false,-1, 31,0);
    tracep->declBus(c+176,"imm", false,-1, 31,0);
    tracep->declBus(c+247,"funct7", false,-1, 6,0);
    tracep->declBus(c+248,"shamt", false,-1, 4,0);
    tracep->declBit(c+136,"idu_ready", false,-1);
    tracep->declBit(c+137,"idu_valid", false,-1);
    tracep->declBus(c+316,"IDLE", false,-1, 0,0);
    tracep->declBus(c+317,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+177,"state", false,-1);
    tracep->declBit(c+249,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+230,"pc", false,-1, 31,0);
    tracep->declBus(c+231,"inst", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+135,"IFU_VALID", false,-1);
    tracep->declBit(c+136,"IDU_READY", false,-1);
    tracep->declBit(c+53,"wbu_done", false,-1);
    tracep->declBit(c+184,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+262,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+256,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+255,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+257,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+260,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+261,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+185,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+262,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+255,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+256,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+263,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+262,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+119,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+258,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+117,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+186,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+8,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+5,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+3,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+4,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+6,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+7,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+9,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+192,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+259,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+183,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+118,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+264,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+2,"ifu_ready", false,-1);
    tracep->declBit(c+135,"ifu_valid", false,-1);
    tracep->declBus(c+261,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+313,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+314,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+315,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+178,"current_state", false,-1, 1,0);
    tracep->declBus(c+250,"next_state", false,-1, 1,0);
    tracep->declBit(c+8,"axi_arvalid", false,-1);
    tracep->declBit(c+9,"axi_rready", false,-1);
    tracep->declBus(c+5,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+3,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+4,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+6,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+7,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+261,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+313,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+314,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+315,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+67,"state", false,-1, 1,0);
    tracep->declBit(c+68,"sram_start", false,-1);
    tracep->declBit(c+69,"sram_ifu_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBit(c+141,"sram_lsu_read", false,-1);
    tracep->declBit(c+142,"sram_lsu_write", false,-1);
    tracep->declBit(c+232,"LSU_DONE", false,-1);
    tracep->declBus(c+187,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+143,"valid", false,-1);
    tracep->declBit(c+144,"wen", false,-1);
    tracep->declBus(c+145,"waddr", false,-1, 31,0);
    tracep->declBus(c+146,"wdata", false,-1, 31,0);
    tracep->declBus(c+147,"raddr", false,-1, 31,0);
    tracep->declBus(c+148,"wmask", false,-1, 3,0);
    tracep->declBit(c+188,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+129,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+267,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+125,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+265,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+271,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+273,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+189,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+130,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+126,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+128,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+275,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+131,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+193,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+268,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+120,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+190,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+132,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+269,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+127,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+266,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+272,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+274,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+133,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+194,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+270,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+187,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+121,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+276,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+261,"IDLE", false,-1, 1,0);
    tracep->declBus(c+313,"READ", false,-1, 1,0);
    tracep->declBus(c+314,"WRITE", false,-1, 1,0);
    tracep->declBus(c+315,"DONE", false,-1, 1,0);
    tracep->declBus(c+134,"state", false,-1, 1,0);
    tracep->declBit(c+129,"axi_awvalid", false,-1);
    tracep->declBit(c+130,"axi_wvalid", false,-1);
    tracep->declBus(c+267,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+125,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+126,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+265,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+271,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+273,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+128,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+131,"axi_bready", false,-1);
    tracep->declBit(c+132,"axi_arvalid", false,-1);
    tracep->declBit(c+133,"axi_rready", false,-1);
    tracep->declBus(c+269,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+127,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+266,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+272,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+274,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+230,"pc", false,-1, 31,0);
    tracep->declBus(c+229,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+1,"pcu_valid", false,-1);
    tracep->declBus(c+316,"IDLE", false,-1, 0,0);
    tracep->declBus(c+317,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+70,"state", false,-1);
    tracep->declBit(c+251,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+318,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+319,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBus(c+55,"wdata", false,-1, 31,0);
    tracep->declBus(c+56,"waddr", false,-1, 4,0);
    tracep->declBit(c+57,"wen", false,-1);
    tracep->declBus(c+11,"raddr1", false,-1, 4,0);
    tracep->declBus(c+66,"r1", false,-1, 31,0);
    tracep->declBus(c+12,"raddr2", false,-1, 4,0);
    tracep->declBus(c+161,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+71+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBit(c+16,"EXU_VALID", false,-1);
    tracep->declBit(c+17,"WBU_READY", false,-1);
    tracep->declBit(c+53,"wbu_done", false,-1);
    tracep->declBit(c+54,"difftest", false,-1);
    tracep->declBus(c+55,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+18,"res", false,-1, 31,0);
    tracep->declBus(c+56,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBit(c+57,"wen_reg", false,-1);
    tracep->declBit(c+27,"gpr_wen", false,-1);
    tracep->declBus(c+20,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+22,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+24,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+26,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+58,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+59,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+60,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+61,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+28,"mepc_wen", false,-1);
    tracep->declBit(c+29,"mstatus_wen", false,-1);
    tracep->declBit(c+30,"mcause_wen", false,-1);
    tracep->declBit(c+31,"mtvec_wen", false,-1);
    tracep->declBit(c+62,"mepc_wen_reg", false,-1);
    tracep->declBit(c+63,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+64,"mcause_wen_reg", false,-1);
    tracep->declBit(c+65,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+18,"xrd", false,-1, 31,0);
    tracep->declBus(c+10,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+27,"o_rf_wen", false,-1);
    tracep->declBus(c+20,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+22,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+24,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+26,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+17,"wbu_ready", false,-1);
    tracep->declBus(c+261,"IDLE", false,-1, 1,0);
    tracep->declBus(c+313,"WRITE", false,-1, 1,0);
    tracep->declBus(c+314,"DIFF", false,-1, 1,0);
    tracep->declBus(c+315,"NULL", false,-1, 1,0);
    tracep->declBus(c+103,"state", false,-1, 1,0);
    tracep->declBus(c+252,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBit(c+184,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+262,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+256,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+255,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+257,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+260,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+261,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+185,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+262,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+255,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+256,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+263,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+262,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+119,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+258,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+117,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+186,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+8,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+5,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+3,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+4,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+6,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+7,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+9,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+192,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+259,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+183,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+118,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+264,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+188,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+129,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+267,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+125,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+265,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+271,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+273,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+189,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+130,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+126,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+128,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+275,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+131,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+193,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+268,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+120,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+190,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+132,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+269,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+127,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+266,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+272,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+274,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+133,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+194,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+270,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+187,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+121,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+276,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+37,"S_AXI_AWREADY", false,-1);
    tracep->declBit(c+198,"S_AXI_AWVALID", false,-1);
    tracep->declBus(c+279,"S_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+195,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+277,"S_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+281,"S_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+283,"S_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+149,"S_AXI_WREADY", false,-1);
    tracep->declBit(c+199,"S_AXI_WVALID", false,-1);
    tracep->declBus(c+196,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+233,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+285,"S_AXI_WLAST", false,-1);
    tracep->declBit(c+200,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+38,"S_AXI_BVALID", false,-1);
    tracep->declBus(c+33,"S_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+35,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+39,"S_AXI_ARREADY", false,-1);
    tracep->declBit(c+201,"S_AXI_ARVALID", false,-1);
    tracep->declBus(c+280,"S_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+197,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+278,"S_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+282,"S_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+284,"S_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+202,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+40,"S_AXI_RVALID", false,-1);
    tracep->declBus(c+34,"S_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+32,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+36,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+41,"S_AXI_RLAST", false,-1);
    tracep->declBit(c+155,"U_AXI_AWREADY", false,-1);
    tracep->declBit(c+206,"U_AXI_AWVALID", false,-1);
    tracep->declBus(c+288,"U_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+203,"U_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+286,"U_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+290,"U_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+292,"U_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+156,"U_AXI_WREADY", false,-1);
    tracep->declBit(c+207,"U_AXI_WVALID", false,-1);
    tracep->declBus(c+204,"U_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+234,"U_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+294,"U_AXI_WLAST", false,-1);
    tracep->declBit(c+208,"U_AXI_BREADY", false,-1);
    tracep->declBit(c+157,"U_AXI_BVALID", false,-1);
    tracep->declBus(c+151,"U_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+153,"U_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+158,"U_AXI_ARREADY", false,-1);
    tracep->declBit(c+209,"U_AXI_ARVALID", false,-1);
    tracep->declBus(c+289,"U_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+205,"U_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+287,"U_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+291,"U_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+293,"U_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+210,"U_AXI_RREADY", false,-1);
    tracep->declBit(c+159,"U_AXI_RVALID", false,-1);
    tracep->declBus(c+152,"U_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+150,"U_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+154,"U_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+160,"U_AXI_RLAST", false,-1);
    tracep->declBit(c+155,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+206,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+288,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+203,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+286,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+290,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+292,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+156,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+207,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+204,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+234,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+294,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+208,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+157,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+151,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+153,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+158,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+209,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+289,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+205,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+287,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+291,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+293,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+210,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+159,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+152,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+150,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+154,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+160,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+212,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+213,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+214,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+215,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+253,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+320,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+321,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+322,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+323,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+324,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+325,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+326,"X_AXI_AWSIZE", false,-1, 3,0);
    tracep->declBus(c+327,"X_AXI_ARSIZE", false,-1, 3,0);
    tracep->declBus(c+328,"X_AXI_AWBURST", false,-1, 2,0);
    tracep->declBus(c+329,"X_AXI_ARBURST", false,-1, 2,0);
    tracep->declBus(c+122,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+123,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+216,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+217,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+218,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+191,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+124,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+219,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+220,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+221,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+222,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+223,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+330,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+331,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+261,"IDLE", false,-1, 1,0);
    tracep->declBus(c+313,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+314,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+315,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+179,"state", false,-1, 1,0);
    tracep->declBus(c+254,"next_state", false,-1, 1,0);
    tracep->declBus(c+332,"DEVICE_UART_ADDR", false,-1, 31,0);
    tracep->declBus(c+333,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+334,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+224,"sel_uart", false,-1);
    tracep->declBit(c+225,"sel_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+319,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+335,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+60,"din", false,-1, 31,0);
    tracep->declBus(c+23,"dout", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+319,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+335,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+58,"din", false,-1, 31,0);
    tracep->declBus(c+19,"dout", false,-1, 31,0);
    tracep->declBit(c+62,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+319,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+336,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+59,"din", false,-1, 31,0);
    tracep->declBus(c+21,"dout", false,-1, 31,0);
    tracep->declBit(c+63,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+319,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+335,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+61,"din", false,-1, 31,0);
    tracep->declBus(c+25,"dout", false,-1, 31,0);
    tracep->declBit(c+65,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBit(c+47,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+307,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+301,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+295,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+299,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+303,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+305,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+48,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+308,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+296,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+298,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+312,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+309,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+49,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+43,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+45,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+50,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+310,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+302,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+297,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+300,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+304,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+306,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+311,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+51,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+44,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+42,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+46,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+52,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+47,"axi_awready", false,-1);
    tracep->declBit(c+48,"axi_wready", false,-1);
    tracep->declBit(c+49,"axi_bvalid", false,-1);
    tracep->declBit(c+50,"axi_arready", false,-1);
    tracep->declBit(c+51,"axi_rvalid", false,-1);
    tracep->declBit(c+52,"axi_rlast", false,-1);
    tracep->declBus(c+45,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+46,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+43,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+44,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+42,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+104,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+333,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+334,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+105,"mtime", false,-1, 63,0);
    tracep->declBus(c+107,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_SRAM ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBit(c+37,"S_AXI_AWREADY", false,-1);
    tracep->declBit(c+198,"S_AXI_AWVALID", false,-1);
    tracep->declBus(c+279,"S_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+195,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+277,"S_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+281,"S_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+283,"S_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+149,"S_AXI_WREADY", false,-1);
    tracep->declBit(c+199,"S_AXI_WVALID", false,-1);
    tracep->declBus(c+196,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+233,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+285,"S_AXI_WLAST", false,-1);
    tracep->declBit(c+200,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+38,"S_AXI_BVALID", false,-1);
    tracep->declBus(c+33,"S_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+35,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+39,"S_AXI_ARREADY", false,-1);
    tracep->declBit(c+201,"S_AXI_ARVALID", false,-1);
    tracep->declBus(c+280,"S_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+197,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+278,"S_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+282,"S_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+284,"S_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+202,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+40,"S_AXI_RVALID", false,-1);
    tracep->declBus(c+34,"S_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+32,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+36,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+41,"S_AXI_RLAST", false,-1);
    tracep->declBit(c+37,"axi_awready", false,-1);
    tracep->declBit(c+149,"axi_wready", false,-1);
    tracep->declBit(c+38,"axi_bvalid", false,-1);
    tracep->declBit(c+39,"axi_arready", false,-1);
    tracep->declBit(c+40,"axi_rvalid", false,-1);
    tracep->declBit(c+41,"axi_rlast", false,-1);
    tracep->declBus(c+35,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+36,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+33,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+34,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+32,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+108,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+109,"s_wen", false,-1);
    tracep->declBus(c+226,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_UART ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBit(c+155,"U_AXI_AWREADY", false,-1);
    tracep->declBit(c+206,"U_AXI_AWVALID", false,-1);
    tracep->declBus(c+288,"U_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+203,"U_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+286,"U_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+290,"U_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+292,"U_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+156,"U_AXI_WREADY", false,-1);
    tracep->declBit(c+207,"U_AXI_WVALID", false,-1);
    tracep->declBus(c+204,"U_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+234,"U_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+294,"U_AXI_WLAST", false,-1);
    tracep->declBit(c+208,"U_AXI_BREADY", false,-1);
    tracep->declBit(c+157,"U_AXI_BVALID", false,-1);
    tracep->declBus(c+151,"U_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+153,"U_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+158,"U_AXI_ARREADY", false,-1);
    tracep->declBit(c+209,"U_AXI_ARVALID", false,-1);
    tracep->declBus(c+289,"U_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+205,"U_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+287,"U_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+291,"U_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+293,"U_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+210,"U_AXI_RREADY", false,-1);
    tracep->declBit(c+159,"U_AXI_RVALID", false,-1);
    tracep->declBus(c+152,"U_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+150,"U_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+154,"U_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+160,"U_AXI_RLAST", false,-1);
    tracep->declBit(c+155,"axi_awready", false,-1);
    tracep->declBit(c+156,"axi_wready", false,-1);
    tracep->declBit(c+157,"axi_bvalid", false,-1);
    tracep->declBit(c+158,"axi_arready", false,-1);
    tracep->declBit(c+159,"axi_rvalid", false,-1);
    tracep->declBit(c+160,"axi_rlast", false,-1);
    tracep->declBus(c+153,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+154,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+151,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+152,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+150,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+180,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+332,"DEVICE_UART_ADDR", false,-1, 31,0);
    tracep->declBus(c+181,"device_uart_reg", false,-1, 31,0);
    tracep->declBit(c+182,"ureg_wen", false,-1);
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
    bufp->fullCData(oldp+6,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arburst),2);
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
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rdata),32);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bid),4);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rid),4);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp),2);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp),2);
    bufp->fullBit(oldp+37,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_awready));
    bufp->fullBit(oldp+38,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_arready));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rlast));
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+43,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+47,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_24110017__DOT__wbu_done));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_24110017__DOT__difftest));
    bufp->fullIData(oldp+55,(vlSelf->ysyx_24110017__DOT__xrd),32);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_24110017__DOT__rf_addr),5);
    bufp->fullBit(oldp+57,(vlSelf->ysyx_24110017__DOT__rf_wen));
    bufp->fullIData(oldp+58,(vlSelf->ysyx_24110017__DOT__w_mepc),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24110017__DOT__w_mstatus),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24110017__DOT__w_mcause),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24110017__DOT__w_mtvec),32);
    bufp->fullBit(oldp+62,(vlSelf->ysyx_24110017__DOT__mepc_en));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_24110017__DOT__mstatus_en));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_24110017__DOT__mcause_en));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_24110017__DOT__mtvec_en));
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24110017__DOT__r1),32);
    bufp->fullCData(oldp+67,(vlSelf->ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+68,(vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+103,(vlSelf->ysyx_24110017__DOT__WBU__DOT__state),2);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+105,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+107,((((- (IData)(((IData)(vlSelf->ysyx_24110017__DOT__C_AXI_RREADY) 
                                            & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid)))) 
                                & ((- (IData)((0xa0000048U 
                                               == vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                   & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                               | ((- (IData)((0xa000004cU 
                                              == vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                  & (IData)((vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_araddr),32);
    bufp->fullBit(oldp+109,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_wen));
    bufp->fullBit(oldp+110,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   == vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+111,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   != vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+112,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+113,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+114,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   < vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+115,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   >= vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+116,(((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((0x302U == vlSelf->ysyx_24110017__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))));
    bufp->fullCData(oldp+117,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp)))
                                : 0U)),2);
    bufp->fullCData(oldp+118,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp)))
                                : 0U)),2);
    bufp->fullBit(oldp+119,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid))))));
    bufp->fullCData(oldp+120,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp)))
                                : 0U)),2);
    bufp->fullCData(oldp+121,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp)))
                                : 0U)),2);
    bufp->fullCData(oldp+122,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                    : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp)))),2);
    bufp->fullCData(oldp+123,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp)
                                    : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp)))),2);
    bufp->fullBit(oldp+124,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                              ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                  : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid)))));
    bufp->fullIData(oldp+125,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+128,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+129,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+130,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+131,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+133,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullCData(oldp+134,(vlSelf->ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+135,(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_ready));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+139,(vlSelf->ysyx_24110017__DOT__op),7);
    bufp->fullCData(oldp+140,(vlSelf->ysyx_24110017__DOT__funct3),3);
    bufp->fullBit(oldp+141,(vlSelf->ysyx_24110017__DOT__sram_lsu_read));
    bufp->fullBit(oldp+142,(vlSelf->ysyx_24110017__DOT__sram_lsu_write));
    bufp->fullBit(oldp+143,(vlSelf->ysyx_24110017__DOT__ls_valid));
    bufp->fullBit(oldp+144,((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))));
    bufp->fullIData(oldp+145,(((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+146,(((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                ? vlSelf->ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+147,(((3U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+148,((((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),4);
    bufp->fullBit(oldp+149,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready));
    bufp->fullIData(oldp+150,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rdata),32);
    bufp->fullCData(oldp+151,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bid),4);
    bufp->fullCData(oldp+152,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rid),4);
    bufp->fullCData(oldp+153,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp),2);
    bufp->fullCData(oldp+154,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp),2);
    bufp->fullBit(oldp+155,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_awready));
    bufp->fullBit(oldp+156,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready));
    bufp->fullBit(oldp+157,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid));
    bufp->fullBit(oldp+158,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_arready));
    bufp->fullBit(oldp+159,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid));
    bufp->fullBit(oldp+160,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rlast));
    bufp->fullIData(oldp+161,(vlSelf->ysyx_24110017__DOT__r2),32);
    bufp->fullCData(oldp+162,(vlSelf->ysyx_24110017__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+167,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyx_24110017__DOT__r2
                                : vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+168,((0x6fU == (IData)(vlSelf->ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+169,((0x67U == (IData)(vlSelf->ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+170,(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+171,(((0x37U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
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
    bufp->fullBit(oldp+172,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+173,(vlSelf->ysyx_24110017__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+174,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+175,(vlSelf->ysyx_24110017__DOT__EXU__DOT__mtvec_wen));
    bufp->fullIData(oldp+176,(vlSelf->ysyx_24110017__DOT__IDU__DOT__imm),32);
    bufp->fullBit(oldp+177,(vlSelf->ysyx_24110017__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+178,(vlSelf->ysyx_24110017__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+179,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_araddr),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__device_uart_reg),32);
    bufp->fullBit(oldp+182,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__ureg_wen));
    bufp->fullIData(oldp+183,((((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                | (0U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)))
                                ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                : 0U)),32);
    bufp->fullBit(oldp+184,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    bufp->fullBit(oldp+185,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready))))));
    bufp->fullBit(oldp+186,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullIData(oldp+187,(((IData)(vlSelf->__VdfgTmp_h9f8b16d6__0)
                                ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                : 0U)),32);
    bufp->fullBit(oldp+188,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    bufp->fullBit(oldp+189,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready))))));
    bufp->fullBit(oldp+190,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+191,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                              ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                              : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                  : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready)))));
    bufp->fullBit(oldp+192,(vlSelf->ysyx_24110017__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+193,(vlSelf->ysyx_24110017__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+194,(vlSelf->ysyx_24110017__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+195,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? 0U : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? 0U : vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR))),32);
    bufp->fullIData(oldp+196,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? 0U : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? 0U : vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA))),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[0U]),32);
    bufp->fullBit(oldp+198,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0))));
    bufp->fullBit(oldp+199,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0))));
    bufp->fullBit(oldp+200,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0))));
    bufp->fullBit(oldp+201,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0))));
    bufp->fullBit(oldp+202,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0))));
    bufp->fullIData(oldp+203,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(((QData)((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR)) 
                                               >> 0x20U))
                                    : 0U))),32);
    bufp->fullIData(oldp+204,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(((QData)((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA)) 
                                               >> 0x20U))
                                    : 0U))),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[2U]),32);
    bufp->fullBit(oldp+206,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+207,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+208,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+209,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+210,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0) 
                                   >> 2U))));
    bufp->fullIData(oldp+211,(vlSelf->ysyx_24110017__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+216,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+217,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY));
    bufp->fullBit(oldp+218,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+219,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+220,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+221,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+222,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullBit(oldp+223,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+224,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart));
    bufp->fullBit(oldp+225,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullIData(oldp+226,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_rdata),32);
    bufp->fullBit(oldp+227,(vlSelf->clk));
    bufp->fullBit(oldp+228,(vlSelf->rst));
    bufp->fullIData(oldp+229,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+230,(vlSelf->pc),32);
    bufp->fullIData(oldp+231,(vlSelf->inst),32);
    bufp->fullBit(oldp+232,(vlSelf->ysyx_24110017__DOT__LSU_DONE));
    bufp->fullCData(oldp+233,((0xfU & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                        ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                             ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                             : 0U) 
                                           << 8U) : 
                                       ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                              ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                              : 0U) 
                                            << 4U) : 
                                        ((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                          ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                          : 0U))))),4);
    bufp->fullCData(oldp+234,((0xfU & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                         ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                              ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                              : 0U) 
                                            << 8U) : 
                                        ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                          ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                               ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                               : 0U) 
                                             << 4U)
                                          : ((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                              ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                              : 0U))) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+235,(vlSelf->ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+236,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullCData(oldp+237,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+238,((((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+239,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+240,((((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+241,((0x1fU & ((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+242,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+243,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+244,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+245,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+246,((((- (IData)((vlSelf->inst 
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
    bufp->fullCData(oldp+247,((((0x33U == (0x7fU & vlSelf->inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->inst)))
                                ? (vlSelf->inst >> 0x19U)
                                : 0U)),7);
    bufp->fullCData(oldp+248,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+249,(vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+250,(vlSelf->ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+251,(vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+252,(vlSelf->ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+253,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                : 0U)),4);
    bufp->fullCData(oldp+254,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->fullIData(oldp+255,(0U),32);
    bufp->fullCData(oldp+256,(0U),4);
    bufp->fullCData(oldp+257,(0U),8);
    bufp->fullCData(oldp+258,(vlSelf->ysyx_24110017__DOT__IFU_AXI_BID),4);
    bufp->fullCData(oldp+259,(vlSelf->ysyx_24110017__DOT__IFU_AXI_RID),4);
    bufp->fullCData(oldp+260,(0U),3);
    bufp->fullCData(oldp+261,(0U),2);
    bufp->fullBit(oldp+262,(0U));
    bufp->fullBit(oldp+263,(vlSelf->ysyx_24110017__DOT__IFU_AXI_WLAST));
    bufp->fullBit(oldp+264,(vlSelf->ysyx_24110017__DOT__IFU_AXI_RLAST));
    bufp->fullCData(oldp+265,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+266,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+267,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+268,(vlSelf->ysyx_24110017__DOT__LSU_AXI_BID),4);
    bufp->fullCData(oldp+269,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+270,(vlSelf->ysyx_24110017__DOT__LSU_AXI_RID),4);
    bufp->fullCData(oldp+271,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+272,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+273,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+274,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+275,(vlSelf->ysyx_24110017__DOT__LSU_AXI_WLAST));
    bufp->fullBit(oldp+276,(vlSelf->ysyx_24110017__DOT__LSU_AXI_RLAST));
    bufp->fullCData(oldp+277,(vlSelf->ysyx_24110017__DOT__S_AXI_AWLEN),8);
    bufp->fullCData(oldp+278,(vlSelf->ysyx_24110017__DOT__S_AXI_ARLEN),8);
    bufp->fullCData(oldp+279,(vlSelf->ysyx_24110017__DOT__S_AXI_AWID),4);
    bufp->fullCData(oldp+280,(vlSelf->ysyx_24110017__DOT__S_AXI_ARID),4);
    bufp->fullCData(oldp+281,(vlSelf->ysyx_24110017__DOT__S_AXI_AWSIZE),3);
    bufp->fullCData(oldp+282,(vlSelf->ysyx_24110017__DOT__S_AXI_ARSIZE),3);
    bufp->fullCData(oldp+283,(vlSelf->ysyx_24110017__DOT__S_AXI_AWBURST),2);
    bufp->fullCData(oldp+284,(vlSelf->ysyx_24110017__DOT__S_AXI_ARBURST),2);
    bufp->fullBit(oldp+285,(vlSelf->ysyx_24110017__DOT__S_AXI_WLAST));
    bufp->fullCData(oldp+286,(vlSelf->ysyx_24110017__DOT__U_AXI_AWLEN),8);
    bufp->fullCData(oldp+287,(vlSelf->ysyx_24110017__DOT__U_AXI_ARLEN),8);
    bufp->fullCData(oldp+288,(vlSelf->ysyx_24110017__DOT__U_AXI_AWID),4);
    bufp->fullCData(oldp+289,(vlSelf->ysyx_24110017__DOT__U_AXI_ARID),4);
    bufp->fullCData(oldp+290,(vlSelf->ysyx_24110017__DOT__U_AXI_AWSIZE),3);
    bufp->fullCData(oldp+291,(vlSelf->ysyx_24110017__DOT__U_AXI_ARSIZE),3);
    bufp->fullCData(oldp+292,(vlSelf->ysyx_24110017__DOT__U_AXI_AWBURST),2);
    bufp->fullCData(oldp+293,(vlSelf->ysyx_24110017__DOT__U_AXI_ARBURST),2);
    bufp->fullBit(oldp+294,(vlSelf->ysyx_24110017__DOT__U_AXI_WLAST));
    bufp->fullIData(oldp+295,(vlSelf->ysyx_24110017__DOT__C_AXI_AWADDR),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_24110017__DOT__C_AXI_WDATA),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_24110017__DOT__C_AXI_ARADDR),32);
    bufp->fullCData(oldp+298,(vlSelf->ysyx_24110017__DOT__C_AXI_WSTRB),4);
    bufp->fullCData(oldp+299,(vlSelf->ysyx_24110017__DOT__C_AXI_AWLEN),8);
    bufp->fullCData(oldp+300,(vlSelf->ysyx_24110017__DOT__C_AXI_ARLEN),8);
    bufp->fullCData(oldp+301,(vlSelf->ysyx_24110017__DOT__C_AXI_AWID),4);
    bufp->fullCData(oldp+302,(vlSelf->ysyx_24110017__DOT__C_AXI_ARID),4);
    bufp->fullCData(oldp+303,(vlSelf->ysyx_24110017__DOT__C_AXI_AWSIZE),3);
    bufp->fullCData(oldp+304,(vlSelf->ysyx_24110017__DOT__C_AXI_ARSIZE),3);
    bufp->fullCData(oldp+305,(vlSelf->ysyx_24110017__DOT__C_AXI_AWBURST),2);
    bufp->fullCData(oldp+306,(vlSelf->ysyx_24110017__DOT__C_AXI_ARBURST),2);
    bufp->fullBit(oldp+307,(vlSelf->ysyx_24110017__DOT__C_AXI_AWVALID));
    bufp->fullBit(oldp+308,(vlSelf->ysyx_24110017__DOT__C_AXI_WVALID));
    bufp->fullBit(oldp+309,(vlSelf->ysyx_24110017__DOT__C_AXI_BREADY));
    bufp->fullBit(oldp+310,(vlSelf->ysyx_24110017__DOT__C_AXI_ARVALID));
    bufp->fullBit(oldp+311,(vlSelf->ysyx_24110017__DOT__C_AXI_RREADY));
    bufp->fullBit(oldp+312,(vlSelf->ysyx_24110017__DOT__C_AXI_WLAST));
    bufp->fullCData(oldp+313,(1U),2);
    bufp->fullCData(oldp+314,(2U),2);
    bufp->fullCData(oldp+315,(3U),2);
    bufp->fullBit(oldp+316,(0U));
    bufp->fullBit(oldp+317,(1U));
    bufp->fullIData(oldp+318,(5U),32);
    bufp->fullIData(oldp+319,(0x20U),32);
    bufp->fullCData(oldp+320,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+321,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+322,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+323,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BID),4);
    bufp->fullCData(oldp+324,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+325,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RID),4);
    bufp->fullCData(oldp+326,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWSIZE),4);
    bufp->fullCData(oldp+327,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARSIZE),4);
    bufp->fullCData(oldp+328,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWBURST),3);
    bufp->fullCData(oldp+329,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARBURST),3);
    bufp->fullBit(oldp+330,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+331,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RLAST));
    bufp->fullIData(oldp+332,(0xa00003f8U),32);
    bufp->fullIData(oldp+333,(0xa0000048U),32);
    bufp->fullIData(oldp+334,(0xa000004cU),32);
    bufp->fullIData(oldp+335,(0U),32);
    bufp->fullIData(oldp+336,(0x1800U),32);
}
