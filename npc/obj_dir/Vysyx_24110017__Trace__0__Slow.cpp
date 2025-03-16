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
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBit(c+234,"io_interrupt", false,-1);
    tracep->pushNamePrefix("ysyx_24110017 ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBit(c+234,"io_interrupt", false,-1);
    tracep->declBit(c+1,"DIFFTEST", false,-1);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+117,"dnpc", false,-1, 31,0);
    tracep->declBit(c+3,"PCU_VALID", false,-1);
    tracep->declBit(c+4,"IFU_READY", false,-1);
    tracep->declBus(c+118,"inst", false,-1, 31,0);
    tracep->declBit(c+119,"IFU_VALID", false,-1);
    tracep->declBit(c+120,"IDU_READY", false,-1);
    tracep->declBus(c+252,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+253,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+5,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+177,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+254,"IFU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+235,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+178,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+255,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+179,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+256,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+180,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+236,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+257,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+6,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+181,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+188,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+7,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+121,"IDU_VALID", false,-1);
    tracep->declBit(c+122,"EXU_READY", false,-1);
    tracep->declBus(c+123,"op", false,-1, 6,0);
    tracep->declBus(c+8,"rd", false,-1, 4,0);
    tracep->declBus(c+124,"funct3", false,-1, 2,0);
    tracep->declBus(c+9,"rs1", false,-1, 4,0);
    tracep->declBus(c+10,"rs2", false,-1, 4,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"funct7", false,-1, 6,0);
    tracep->declBus(c+13,"shamt", false,-1, 4,0);
    tracep->declBit(c+125,"sram_lsu_read", false,-1);
    tracep->declBit(c+126,"sram_lsu_write", false,-1);
    tracep->declBit(c+237,"LSU_DONE", false,-1);
    tracep->declBit(c+14,"EXU_VALID", false,-1);
    tracep->declBit(c+15,"WBU_READY", false,-1);
    tracep->declBus(c+16,"res", false,-1, 31,0);
    tracep->declBit(c+127,"ls_valid", false,-1);
    tracep->declBit(c+128,"ls_wen", false,-1);
    tracep->declBus(c+129,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+130,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+131,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+132,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+17,"mepc", false,-1, 31,0);
    tracep->declBus(c+18,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+19,"mstatus", false,-1, 31,0);
    tracep->declBus(c+20,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+21,"mcause", false,-1, 31,0);
    tracep->declBus(c+22,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+23,"mtvec", false,-1, 31,0);
    tracep->declBus(c+24,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+25,"gpr_wen", false,-1);
    tracep->declBit(c+26,"mepc_wen", false,-1);
    tracep->declBit(c+27,"mstatus_wen", false,-1);
    tracep->declBit(c+28,"mcause_wen", false,-1);
    tracep->declBit(c+29,"mtvec_wen", false,-1);
    tracep->declBus(c+182,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+107,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+108,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+109,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+182,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+110,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+238,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+183,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+111,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+184,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+112,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+185,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+189,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+113,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+114,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+186,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+190,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+115,"LSU_AXI_RREADY", false,-1);
    tracep->declBus(c+191,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+192,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+193,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+30,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+239,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+31,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+258,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+194,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+32,"S_AXI_AWREADY", false,-1);
    tracep->declBit(c+195,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+133,"S_AXI_WREADY", false,-1);
    tracep->declBit(c+33,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+196,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+197,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+34,"S_AXI_ARREADY", false,-1);
    tracep->declBit(c+35,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+198,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+199,"U_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+200,"U_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+201,"U_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+134,"U_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+240,"U_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+135,"U_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+259,"U_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+202,"U_AXI_AWVALID", false,-1);
    tracep->declBit(c+136,"U_AXI_AWREADY", false,-1);
    tracep->declBit(c+203,"U_AXI_WVALID", false,-1);
    tracep->declBit(c+137,"U_AXI_WREADY", false,-1);
    tracep->declBit(c+138,"U_AXI_BVALID", false,-1);
    tracep->declBit(c+204,"U_AXI_BREADY", false,-1);
    tracep->declBit(c+205,"U_AXI_ARVALID", false,-1);
    tracep->declBit(c+139,"U_AXI_ARREADY", false,-1);
    tracep->declBit(c+140,"U_AXI_RVALID", false,-1);
    tracep->declBit(c+206,"U_AXI_RREADY", false,-1);
    tracep->declBus(c+207,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+208,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+209,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+36,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+241,"C_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+37,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+260,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+210,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+38,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+211,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+141,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+39,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+212,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+213,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+40,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+41,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+214,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+42,"wbu_done", false,-1);
    tracep->declBit(c+1,"difftest", false,-1);
    tracep->declBus(c+43,"xrd", false,-1, 31,0);
    tracep->declBus(c+44,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+45,"rf_wen", false,-1);
    tracep->declBus(c+46,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+47,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+48,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+49,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+50,"mepc_en", false,-1);
    tracep->declBit(c+51,"mstatus_en", false,-1);
    tracep->declBit(c+52,"mcause_en", false,-1);
    tracep->declBit(c+53,"mtvec_en", false,-1);
    tracep->declBus(c+54,"r1", false,-1, 31,0);
    tracep->declBus(c+142,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBit(c+125,"sram_lsu_read", false,-1);
    tracep->declBit(c+126,"sram_lsu_write", false,-1);
    tracep->declBit(c+237,"LSU_DONE", false,-1);
    tracep->declBit(c+121,"IDU_VALID", false,-1);
    tracep->declBit(c+122,"EXU_READY", false,-1);
    tracep->declBit(c+14,"EXU_VALID", false,-1);
    tracep->declBit(c+15,"WBU_READY", false,-1);
    tracep->declBus(c+123,"op", false,-1, 6,0);
    tracep->declBus(c+124,"funct3", false,-1, 2,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"funct7", false,-1, 6,0);
    tracep->declBus(c+13,"shamt", false,-1, 4,0);
    tracep->declBus(c+54,"r1", false,-1, 31,0);
    tracep->declBus(c+142,"r2", false,-1, 31,0);
    tracep->declBus(c+16,"res_reg", false,-1, 31,0);
    tracep->declBit(c+127,"ls_valid", false,-1);
    tracep->declBit(c+128,"ls_wen", false,-1);
    tracep->declBus(c+129,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+130,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+131,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+132,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+182,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+117,"dnpc", false,-1, 31,0);
    tracep->declBus(c+17,"mepc", false,-1, 31,0);
    tracep->declBus(c+19,"mstatus", false,-1, 31,0);
    tracep->declBus(c+21,"mcause", false,-1, 31,0);
    tracep->declBus(c+23,"mtvec", false,-1, 31,0);
    tracep->declBus(c+18,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+20,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+22,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+24,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+25,"gpr_wen_reg", false,-1);
    tracep->declBit(c+26,"mepc_wen_reg", false,-1);
    tracep->declBit(c+27,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+28,"mcause_wen_reg", false,-1);
    tracep->declBit(c+29,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+122,"exu_ready", false,-1);
    tracep->declBit(c+14,"exu_valid", false,-1);
    tracep->declBus(c+261,"IDLE", false,-1, 1,0);
    tracep->declBus(c+262,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+263,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+264,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+143,"state", false,-1, 1,0);
    tracep->declBus(c+242,"next_state", false,-1, 1,0);
    tracep->declBus(c+144,"a", false,-1, 31,0);
    tracep->declBus(c+145,"b", false,-1, 31,0);
    tracep->declBus(c+215,"res", false,-1, 31,0);
    tracep->declBus(c+146,"csr", false,-1, 31,0);
    tracep->declBus(c+147,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+99,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+147,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+148,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+147,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+11,"offset", false,-1, 31,0);
    tracep->declBit(c+149,"jalen", false,-1);
    tracep->declBit(c+150,"jalren", false,-1);
    tracep->declBit(c+100,"beqen", false,-1);
    tracep->declBit(c+101,"bneen", false,-1);
    tracep->declBit(c+102,"blten", false,-1);
    tracep->declBit(c+103,"bgeen", false,-1);
    tracep->declBit(c+104,"bltuen", false,-1);
    tracep->declBit(c+105,"bgeuen", false,-1);
    tracep->declBit(c+151,"ecall_en", false,-1);
    tracep->declBit(c+106,"mret_en", false,-1);
    tracep->declBit(c+152,"gpr_wen", false,-1);
    tracep->declBit(c+153,"mepc_wen", false,-1);
    tracep->declBit(c+154,"mstatus_wen", false,-1);
    tracep->declBit(c+155,"mcause_wen", false,-1);
    tracep->declBit(c+156,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+118,"inst", false,-1, 31,0);
    tracep->declBit(c+119,"IFU_VALID", false,-1);
    tracep->declBit(c+120,"IDU_READY", false,-1);
    tracep->declBit(c+121,"IDU_VALID", false,-1);
    tracep->declBit(c+122,"EXU_READY", false,-1);
    tracep->declBus(c+123,"op_reg", false,-1, 6,0);
    tracep->declBus(c+8,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+124,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+9,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+10,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+11,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+12,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+13,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+157,"op", false,-1, 6,0);
    tracep->declBus(c+158,"rd", false,-1, 4,0);
    tracep->declBus(c+159,"funct3", false,-1, 2,0);
    tracep->declBus(c+160,"rs1", false,-1, 4,0);
    tracep->declBus(c+161,"rs2", false,-1, 4,0);
    tracep->declBus(c+162,"immI", false,-1, 31,0);
    tracep->declBus(c+163,"immU", false,-1, 31,0);
    tracep->declBus(c+164,"immS", false,-1, 31,0);
    tracep->declBus(c+165,"immB", false,-1, 31,0);
    tracep->declBus(c+166,"immJ", false,-1, 31,0);
    tracep->declBus(c+167,"imm", false,-1, 31,0);
    tracep->declBus(c+168,"funct7", false,-1, 6,0);
    tracep->declBus(c+169,"shamt", false,-1, 4,0);
    tracep->declBit(c+120,"idu_ready", false,-1);
    tracep->declBit(c+121,"idu_valid", false,-1);
    tracep->declBus(c+265,"IDLE", false,-1, 0,0);
    tracep->declBus(c+266,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+170,"state", false,-1);
    tracep->declBit(c+243,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+118,"inst", false,-1, 31,0);
    tracep->declBit(c+3,"PCU_VALID", false,-1);
    tracep->declBit(c+4,"IFU_READY", false,-1);
    tracep->declBit(c+119,"IFU_VALID", false,-1);
    tracep->declBit(c+120,"IDU_READY", false,-1);
    tracep->declBit(c+42,"wbu_done", false,-1);
    tracep->declBus(c+252,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+255,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+179,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+253,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+254,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+256,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+180,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+235,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+236,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+257,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+5,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+6,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+181,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+177,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+178,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+188,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+7,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+4,"ifu_ready", false,-1);
    tracep->declBit(c+119,"ifu_valid", false,-1);
    tracep->declBus(c+261,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+262,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+263,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+264,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+171,"current_state", false,-1, 1,0);
    tracep->declBus(c+244,"next_state", false,-1, 1,0);
    tracep->declBus(c+5,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+6,"axi_arvalid", false,-1);
    tracep->declBit(c+7,"axi_rready", false,-1);
    tracep->declBus(c+261,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+262,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+263,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+264,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+55,"state", false,-1, 1,0);
    tracep->declBit(c+56,"sram_start", false,-1);
    tracep->declBit(c+57,"sram_ifu_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBit(c+125,"sram_lsu_read", false,-1);
    tracep->declBit(c+126,"sram_lsu_write", false,-1);
    tracep->declBit(c+237,"LSU_DONE", false,-1);
    tracep->declBus(c+182,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+127,"valid", false,-1);
    tracep->declBit(c+128,"wen", false,-1);
    tracep->declBus(c+129,"waddr", false,-1, 31,0);
    tracep->declBus(c+130,"wdata", false,-1, 31,0);
    tracep->declBus(c+131,"raddr", false,-1, 31,0);
    tracep->declBus(c+132,"wmask", false,-1, 7,0);
    tracep->declBus(c+107,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+111,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+184,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+108,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+110,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+112,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+185,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+238,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+189,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+113,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+109,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+114,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+186,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+182,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+183,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+190,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+115,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+261,"IDLE", false,-1, 1,0);
    tracep->declBus(c+262,"READ", false,-1, 1,0);
    tracep->declBus(c+263,"WRITE", false,-1, 1,0);
    tracep->declBus(c+264,"DONE", false,-1, 1,0);
    tracep->declBus(c+116,"state", false,-1, 1,0);
    tracep->declBit(c+114,"axi_arvalid", false,-1);
    tracep->declBit(c+115,"axi_rready", false,-1);
    tracep->declBus(c+109,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+111,"axi_awvalid", false,-1);
    tracep->declBit(c+112,"axi_wvalid", false,-1);
    tracep->declBus(c+107,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+108,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+113,"axi_bready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+117,"dnpc", false,-1, 31,0);
    tracep->declBit(c+3,"PCU_VALID", false,-1);
    tracep->declBit(c+4,"IFU_READY", false,-1);
    tracep->declBit(c+3,"pcu_valid", false,-1);
    tracep->declBus(c+265,"IDLE", false,-1, 0,0);
    tracep->declBus(c+266,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+58,"state", false,-1);
    tracep->declBit(c+245,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+267,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+268,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBus(c+43,"wdata", false,-1, 31,0);
    tracep->declBus(c+44,"waddr", false,-1, 4,0);
    tracep->declBit(c+45,"wen", false,-1);
    tracep->declBus(c+9,"raddr1", false,-1, 4,0);
    tracep->declBus(c+54,"r1", false,-1, 31,0);
    tracep->declBus(c+10,"raddr2", false,-1, 4,0);
    tracep->declBus(c+142,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+59+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBit(c+14,"EXU_VALID", false,-1);
    tracep->declBit(c+15,"WBU_READY", false,-1);
    tracep->declBit(c+42,"wbu_done", false,-1);
    tracep->declBit(c+1,"difftest", false,-1);
    tracep->declBus(c+43,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+16,"res", false,-1, 31,0);
    tracep->declBus(c+44,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+8,"rd", false,-1, 4,0);
    tracep->declBit(c+45,"wen_reg", false,-1);
    tracep->declBit(c+25,"gpr_wen", false,-1);
    tracep->declBus(c+18,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+20,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+22,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+24,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+46,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+47,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+48,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+49,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+26,"mepc_wen", false,-1);
    tracep->declBit(c+27,"mstatus_wen", false,-1);
    tracep->declBit(c+28,"mcause_wen", false,-1);
    tracep->declBit(c+29,"mtvec_wen", false,-1);
    tracep->declBit(c+50,"mepc_wen_reg", false,-1);
    tracep->declBit(c+51,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+52,"mcause_wen_reg", false,-1);
    tracep->declBit(c+53,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+16,"xrd", false,-1, 31,0);
    tracep->declBus(c+8,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+25,"o_rf_wen", false,-1);
    tracep->declBus(c+18,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+20,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+22,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+24,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+15,"wbu_ready", false,-1);
    tracep->declBus(c+261,"IDLE", false,-1, 1,0);
    tracep->declBus(c+262,"WRITE", false,-1, 1,0);
    tracep->declBus(c+263,"DIFF", false,-1, 1,0);
    tracep->declBus(c+264,"NULL", false,-1, 1,0);
    tracep->declBus(c+91,"state", false,-1, 1,0);
    tracep->declBus(c+246,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+252,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+255,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+179,"IFU_AXI_AWREADY", false,-1);
    tracep->declBus(c+253,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+254,"IFU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+256,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+180,"IFU_AXI_WREADY", false,-1);
    tracep->declBus(c+235,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+236,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+257,"IFU_AXI_BREADY", false,-1);
    tracep->declBus(c+5,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+6,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+181,"IFU_AXI_ARREADY", false,-1);
    tracep->declBus(c+177,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+178,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+188,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+7,"IFU_AXI_RREADY", false,-1);
    tracep->declBus(c+107,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+111,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+184,"LSU_AXI_AWREADY", false,-1);
    tracep->declBus(c+108,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+110,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+112,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+185,"LSU_AXI_WREADY", false,-1);
    tracep->declBus(c+238,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+189,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+113,"LSU_AXI_BREADY", false,-1);
    tracep->declBus(c+109,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+114,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+186,"LSU_AXI_ARREADY", false,-1);
    tracep->declBus(c+182,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+183,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+190,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+115,"LSU_AXI_RREADY", false,-1);
    tracep->declBus(c+191,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+194,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+32,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+192,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+239,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+195,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+133,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+31,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+33,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+196,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+193,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+197,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+34,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+30,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+258,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+35,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+198,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+199,"U_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+202,"U_AXI_AWVALID", false,-1);
    tracep->declBit(c+136,"U_AXI_AWREADY", false,-1);
    tracep->declBus(c+200,"U_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+240,"U_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+203,"U_AXI_WVALID", false,-1);
    tracep->declBit(c+137,"U_AXI_WREADY", false,-1);
    tracep->declBus(c+135,"U_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+138,"U_AXI_BVALID", false,-1);
    tracep->declBit(c+204,"U_AXI_BREADY", false,-1);
    tracep->declBus(c+201,"U_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+205,"U_AXI_ARVALID", false,-1);
    tracep->declBit(c+139,"U_AXI_ARREADY", false,-1);
    tracep->declBus(c+134,"U_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+259,"U_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+140,"U_AXI_RVALID", false,-1);
    tracep->declBit(c+206,"U_AXI_RREADY", false,-1);
    tracep->declBus(c+207,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+210,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+38,"C_AXI_AWREADY", false,-1);
    tracep->declBus(c+208,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+241,"C_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+211,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+141,"C_AXI_WREADY", false,-1);
    tracep->declBus(c+37,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+39,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+212,"C_AXI_BREADY", false,-1);
    tracep->declBus(c+209,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+213,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+40,"C_AXI_ARREADY", false,-1);
    tracep->declBus(c+36,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+260,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+41,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+214,"C_AXI_RREADY", false,-1);
    tracep->declBus(c+216,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+217,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+218,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+219,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+247,"X_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+248,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+220,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+221,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+222,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+223,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+187,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+249,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+224,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+225,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+226,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+227,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+228,"X_AXI_RREADY", false,-1);
    tracep->declBus(c+261,"IDLE", false,-1, 1,0);
    tracep->declBus(c+262,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+263,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+264,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+172,"state", false,-1, 1,0);
    tracep->declBus(c+250,"next_state", false,-1, 1,0);
    tracep->declBus(c+269,"DEVICE_UART_ADDR", false,-1, 31,0);
    tracep->declBus(c+270,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+271,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+229,"sel_uart", false,-1);
    tracep->declBit(c+230,"sel_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+272,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+48,"din", false,-1, 31,0);
    tracep->declBus(c+21,"dout", false,-1, 31,0);
    tracep->declBit(c+52,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+272,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+46,"din", false,-1, 31,0);
    tracep->declBus(c+17,"dout", false,-1, 31,0);
    tracep->declBit(c+50,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+273,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+47,"din", false,-1, 31,0);
    tracep->declBus(c+19,"dout", false,-1, 31,0);
    tracep->declBit(c+51,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+272,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+49,"din", false,-1, 31,0);
    tracep->declBus(c+23,"dout", false,-1, 31,0);
    tracep->declBit(c+53,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+207,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+210,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+38,"C_AXI_AWREADY", false,-1);
    tracep->declBus(c+208,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+241,"C_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+211,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+141,"C_AXI_WREADY", false,-1);
    tracep->declBus(c+37,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+39,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+212,"C_AXI_BREADY", false,-1);
    tracep->declBus(c+209,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+213,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+40,"C_AXI_ARREADY", false,-1);
    tracep->declBus(c+36,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+260,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+41,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+214,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+40,"axi_arready", false,-1);
    tracep->declBit(c+41,"axi_rvalid", false,-1);
    tracep->declBit(c+38,"axi_awready", false,-1);
    tracep->declBit(c+141,"axi_wready", false,-1);
    tracep->declBit(c+39,"axi_bvalid", false,-1);
    tracep->declBus(c+92,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+37,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+36,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+93,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+270,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+271,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+94,"mtime", false,-1, 63,0);
    tracep->declBus(c+251,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_SRAM ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+191,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+194,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+32,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+192,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+239,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+195,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+133,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+31,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+33,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+196,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+193,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+197,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+34,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+30,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+258,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+35,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+198,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+34,"axi_arready", false,-1);
    tracep->declBit(c+35,"axi_rvalid", false,-1);
    tracep->declBit(c+32,"axi_awready", false,-1);
    tracep->declBit(c+133,"axi_wready", false,-1);
    tracep->declBit(c+33,"axi_bvalid", false,-1);
    tracep->declBus(c+96,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+31,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+30,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+97,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+98,"s_wen", false,-1);
    tracep->declBus(c+231,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_UART ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBit(c+233,"rst", false,-1);
    tracep->declBus(c+199,"U_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+202,"U_AXI_AWVALID", false,-1);
    tracep->declBit(c+136,"U_AXI_AWREADY", false,-1);
    tracep->declBus(c+200,"U_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+240,"U_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+203,"U_AXI_WVALID", false,-1);
    tracep->declBit(c+137,"U_AXI_WREADY", false,-1);
    tracep->declBus(c+135,"U_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+138,"U_AXI_BVALID", false,-1);
    tracep->declBit(c+204,"U_AXI_BREADY", false,-1);
    tracep->declBus(c+201,"U_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+205,"U_AXI_ARVALID", false,-1);
    tracep->declBit(c+139,"U_AXI_ARREADY", false,-1);
    tracep->declBus(c+134,"U_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+259,"U_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+140,"U_AXI_RVALID", false,-1);
    tracep->declBit(c+206,"U_AXI_RREADY", false,-1);
    tracep->declBit(c+139,"axi_arready", false,-1);
    tracep->declBit(c+140,"axi_rvalid", false,-1);
    tracep->declBit(c+136,"axi_awready", false,-1);
    tracep->declBit(c+137,"axi_wready", false,-1);
    tracep->declBit(c+138,"axi_bvalid", false,-1);
    tracep->declBus(c+173,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+135,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+134,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+174,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+269,"DEVICE_UART_ADDR", false,-1, 31,0);
    tracep->declBus(c+175,"device_uart_reg", false,-1, 31,0);
    tracep->declBit(c+176,"ureg_wen", false,-1);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyx_24110017__DOT__difftest));
    bufp->fullIData(oldp+2,(vlSelf->ysyx_24110017__DOT__pc),32);
    bufp->fullBit(oldp+3,(vlSelf->ysyx_24110017__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+4,(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+5,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+6,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullCData(oldp+8,(vlSelf->ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_24110017__DOT__funct7),7);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_24110017__DOT__shamt),5);
    bufp->fullBit(oldp+14,(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_24110017__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24110017__DOT__o_mepc),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24110017__DOT__o_mcause),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24110017__DOT__mtvec),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24110017__DOT__o_mtvec),32);
    bufp->fullBit(oldp+25,(vlSelf->ysyx_24110017__DOT__gpr_wen));
    bufp->fullBit(oldp+26,(vlSelf->ysyx_24110017__DOT__mepc_wen));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_24110017__DOT__mcause_wen));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_24110017__DOT__mtvec_wen));
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rdata),32);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp),2);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_awready));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_arready));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid));
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullBit(oldp+38,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+42,(vlSelf->ysyx_24110017__DOT__wbu_done));
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24110017__DOT__xrd),32);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_24110017__DOT__rf_addr),5);
    bufp->fullBit(oldp+45,(vlSelf->ysyx_24110017__DOT__rf_wen));
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24110017__DOT__w_mepc),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24110017__DOT__w_mstatus),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24110017__DOT__w_mcause),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24110017__DOT__w_mtvec),32);
    bufp->fullBit(oldp+50,(vlSelf->ysyx_24110017__DOT__mepc_en));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_24110017__DOT__mstatus_en));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_24110017__DOT__mcause_en));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_24110017__DOT__mtvec_en));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24110017__DOT__r1),32);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+56,(vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+91,(vlSelf->ysyx_24110017__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+92,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+94,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullCData(oldp+96,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp),2);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_araddr),32);
    bufp->fullBit(oldp+98,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_wen));
    bufp->fullIData(oldp+99,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                               ? vlSelf->ysyx_24110017__DOT__pc
                               : vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+100,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   == vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+101,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   != vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+102,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+103,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyx_24110017__DOT__r1, vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+104,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   < vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+105,(((0x63U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)) 
                                & (vlSelf->ysyx_24110017__DOT__r1 
                                   >= vlSelf->ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+106,(((0x73U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                             & ((0x302U == vlSelf->ysyx_24110017__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3))))));
    bufp->fullIData(oldp+107,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+110,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+111,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullCData(oldp+116,(vlSelf->ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24110017__DOT__dnpc),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_24110017__DOT__inst),32);
    bufp->fullBit(oldp+119,(vlSelf->ysyx_24110017__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_ready));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_24110017__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_24110017__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+123,(vlSelf->ysyx_24110017__DOT__op),7);
    bufp->fullCData(oldp+124,(vlSelf->ysyx_24110017__DOT__funct3),3);
    bufp->fullBit(oldp+125,(vlSelf->ysyx_24110017__DOT__sram_lsu_read));
    bufp->fullBit(oldp+126,(vlSelf->ysyx_24110017__DOT__sram_lsu_write));
    bufp->fullBit(oldp+127,(vlSelf->ysyx_24110017__DOT__ls_valid));
    bufp->fullBit(oldp+128,((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))));
    bufp->fullIData(oldp+129,(((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+130,(((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                ? vlSelf->ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+131,(((3U == (IData)(vlSelf->ysyx_24110017__DOT__op))
                                ? vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+132,((((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyx_24110017__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),8);
    bufp->fullBit(oldp+133,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready));
    bufp->fullIData(oldp+134,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rdata),32);
    bufp->fullCData(oldp+135,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp),2);
    bufp->fullBit(oldp+136,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_awready));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_arready));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid));
    bufp->fullBit(oldp+141,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullIData(oldp+142,(vlSelf->ysyx_24110017__DOT__r2),32);
    bufp->fullCData(oldp+143,(vlSelf->ysyx_24110017__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+148,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyx_24110017__DOT__r2
                                : vlSelf->ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+149,((0x6fU == (IData)(vlSelf->ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+150,((0x67U == (IData)(vlSelf->ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+151,(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+152,(((0x37U == (IData)(vlSelf->ysyx_24110017__DOT__op)) 
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
    bufp->fullBit(oldp+153,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+154,(vlSelf->ysyx_24110017__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+155,(((IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+156,(vlSelf->ysyx_24110017__DOT__EXU__DOT__mtvec_wen));
    bufp->fullCData(oldp+157,((0x7fU & vlSelf->ysyx_24110017__DOT__inst)),7);
    bufp->fullCData(oldp+158,((((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->ysyx_24110017__DOT__inst)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelf->ysyx_24110017__DOT__inst)) 
                                      | ((3U == (0x7fU 
                                                 & vlSelf->ysyx_24110017__DOT__inst)) 
                                         | ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_24110017__DOT__inst)) 
                                            | ((0xfU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24110017__DOT__inst)) 
                                               | ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24110017__DOT__inst)) 
                                                  | (0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_24110017__DOT__inst)))))))))
                                ? (0x1fU & (vlSelf->ysyx_24110017__DOT__inst 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullCData(oldp+159,((7U & (vlSelf->ysyx_24110017__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+160,((((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->ysyx_24110017__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+161,((0x1fU & ((IData)(vlSelf->ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
                                         ? (vlSelf->ysyx_24110017__DOT__inst 
                                            >> 0x14U)
                                         : ((IData)(
                                                    ((0x73U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_24110017__DOT__inst)) 
                                                     & (0U 
                                                        == vlSelf->ysyx_24110017__DOT__IDU__DOT__imm)))
                                             ? 0xfU
                                             : 0U)))),5);
    bufp->fullIData(oldp+162,((((- (IData)((vlSelf->ysyx_24110017__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyx_24110017__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+163,((0xfffff000U & vlSelf->ysyx_24110017__DOT__inst)),32);
    bufp->fullIData(oldp+164,((((- (IData)((vlSelf->ysyx_24110017__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_24110017__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_24110017__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+165,((((- (IData)((vlSelf->ysyx_24110017__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyx_24110017__DOT__inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_24110017__DOT__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_24110017__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_24110017__DOT__inst 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+166,((((- (IData)((vlSelf->ysyx_24110017__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->ysyx_24110017__DOT__inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->ysyx_24110017__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_24110017__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_24110017__DOT__inst 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_24110017__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+168,((((0x33U == (0x7fU & vlSelf->ysyx_24110017__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyx_24110017__DOT__inst)))
                                ? (vlSelf->ysyx_24110017__DOT__inst 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+169,((0x1fU & (vlSelf->ysyx_24110017__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+170,(vlSelf->ysyx_24110017__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+171,(vlSelf->ysyx_24110017__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+172,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullCData(oldp+173,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp),2);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_araddr),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__device_uart_reg),32);
    bufp->fullBit(oldp+176,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__ureg_wen));
    bufp->fullIData(oldp+177,((((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                | (0U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)))
                                ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                : 0U)),32);
    bufp->fullCData(oldp+178,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_RRESP)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__C_AXI_RRESP)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_RRESP)))
                                : 0U)),2);
    bufp->fullBit(oldp+179,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    bufp->fullBit(oldp+180,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready))))));
    bufp->fullBit(oldp+181,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullIData(oldp+182,(((IData)(vlSelf->__VdfgTmp_h9f8b16d6__0)
                                ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                : 0U)),32);
    bufp->fullCData(oldp+183,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_RRESP)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__C_AXI_RRESP)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_RRESP)))
                                : 0U)),2);
    bufp->fullBit(oldp+184,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    bufp->fullBit(oldp+185,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready))))));
    bufp->fullBit(oldp+186,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+187,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                              ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready)
                              : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                  : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready)))));
    bufp->fullBit(oldp+188,(vlSelf->ysyx_24110017__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+189,(vlSelf->ysyx_24110017__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+190,(vlSelf->ysyx_24110017__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+191,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? 0U : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? 0U : vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR))),32);
    bufp->fullIData(oldp+192,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? 0U : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? 0U : vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA))),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[0U]),32);
    bufp->fullBit(oldp+194,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0))));
    bufp->fullBit(oldp+195,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0))));
    bufp->fullBit(oldp+196,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0))));
    bufp->fullBit(oldp+197,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0))));
    bufp->fullBit(oldp+198,((1U & (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0))));
    bufp->fullIData(oldp+199,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(((QData)((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR)) 
                                               >> 0x20U))
                                    : 0U))),32);
    bufp->fullIData(oldp+200,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(((QData)((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA)) 
                                               >> 0x20U))
                                    : 0U))),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[2U]),32);
    bufp->fullBit(oldp+202,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+203,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+204,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+205,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+206,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0) 
                                   >> 2U))));
    bufp->fullIData(oldp+207,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? 0U : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? (IData)((QData)((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR)))
                                         : 0U))),32);
    bufp->fullIData(oldp+208,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? 0U : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? (IData)((QData)((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA)))
                                         : 0U))),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0[1U]),32);
    bufp->fullBit(oldp+210,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+211,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+212,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+213,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+214,((1U & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0) 
                                   >> 1U))));
    bufp->fullIData(oldp+215,(vlSelf->ysyx_24110017__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullCData(oldp+220,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? (IData)(vlSelf->ysyx_24110017__DOT__U_AXI_RRESP)
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__C_AXI_RRESP)
                                    : (IData)(vlSelf->ysyx_24110017__DOT__S_AXI_RRESP)))),2);
    bufp->fullBit(oldp+221,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+222,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY));
    bufp->fullBit(oldp+223,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+224,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+225,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+226,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+227,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullBit(oldp+228,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+229,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart));
    bufp->fullBit(oldp+230,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullIData(oldp+231,(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_rdata),32);
    bufp->fullBit(oldp+232,(vlSelf->clk));
    bufp->fullBit(oldp+233,(vlSelf->rst));
    bufp->fullBit(oldp+234,(vlSelf->io_interrupt));
    bufp->fullCData(oldp+235,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp)))
                                : 0U)),2);
    bufp->fullBit(oldp+236,(((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                 ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                     : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid))))));
    bufp->fullBit(oldp+237,(vlSelf->ysyx_24110017__DOT__LSU_DONE));
    bufp->fullCData(oldp+238,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                    : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                        : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp)))
                                : 0U)),2);
    bufp->fullCData(oldp+239,((0xffU & ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                         ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                              ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                  ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                  : 0U)) 
                                            << 0x10U)
                                         : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                             ? (((1U 
                                                  == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                  ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                   ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                   : 0U)) 
                                                << 8U)
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                 ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                  ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                  : 0U)))))),8);
    bufp->fullCData(oldp+240,((0xffU & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                          ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                               ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                   ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                   : 0U)) 
                                             << 0x10U)
                                          : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                              ? (((1U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                   ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                    ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                    : 0U)) 
                                                 << 8U)
                                              : ((1U 
                                                  == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                  ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                   ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                   : 0U)))) 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+241,((0xffU & (((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                          ? (((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                               ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                   ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                   : 0U)) 
                                             << 0x10U)
                                          : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                              ? (((1U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                   ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                    ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                    : 0U)) 
                                                 << 8U)
                                              : ((1U 
                                                  == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                  ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                                   ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                                   : 0U)))) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+242,(vlSelf->ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->fullBit(oldp+243,(vlSelf->ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+244,(vlSelf->ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+245,(vlSelf->ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+246,(vlSelf->ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+247,(((1U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                : ((2U == (IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                    : 0U))),8);
    bufp->fullCData(oldp+248,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                                ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp)
                                : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                    : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp)))),2);
    bufp->fullBit(oldp+249,(((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart)
                              ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                  : (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid)))));
    bufp->fullCData(oldp+250,(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->fullIData(oldp+251,((((- (IData)((((IData)(vlSelf->ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid)))) 
                                & ((- (IData)((0xa0000048U 
                                               == vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                   & (IData)(vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                               | ((- (IData)((0xa000004cU 
                                              == vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                  & (IData)((vlSelf->ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+253,(vlSelf->ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+254,(vlSelf->ysyx_24110017__DOT__IFU_AXI_WSTRB),8);
    bufp->fullBit(oldp+255,(vlSelf->ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+256,(vlSelf->ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+257,(vlSelf->ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullCData(oldp+258,(vlSelf->ysyx_24110017__DOT__S_AXI_RRESP),2);
    bufp->fullCData(oldp+259,(vlSelf->ysyx_24110017__DOT__U_AXI_RRESP),2);
    bufp->fullCData(oldp+260,(vlSelf->ysyx_24110017__DOT__C_AXI_RRESP),2);
    bufp->fullCData(oldp+261,(0U),2);
    bufp->fullCData(oldp+262,(1U),2);
    bufp->fullCData(oldp+263,(2U),2);
    bufp->fullCData(oldp+264,(3U),2);
    bufp->fullBit(oldp+265,(0U));
    bufp->fullBit(oldp+266,(1U));
    bufp->fullIData(oldp+267,(5U),32);
    bufp->fullIData(oldp+268,(0x20U),32);
    bufp->fullIData(oldp+269,(0xa00003f8U),32);
    bufp->fullIData(oldp+270,(0xa0000048U),32);
    bufp->fullIData(oldp+271,(0xa000004cU),32);
    bufp->fullIData(oldp+272,(0U),32);
    bufp->fullIData(oldp+273,(0x1800U),32);
}
