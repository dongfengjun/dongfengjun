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
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+152,"pc", false,-1, 31,0);
    tracep->declBus(c+153,"dnpc", false,-1, 31,0);
    tracep->declBus(c+154,"inst", false,-1, 31,0);
    tracep->declBit(c+155,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+152,"pc", false,-1, 31,0);
    tracep->declBus(c+153,"dnpc", false,-1, 31,0);
    tracep->declBus(c+154,"inst", false,-1, 31,0);
    tracep->declBit(c+155,"DIFFTEST", false,-1);
    tracep->declBit(c+5,"PCU_VALID", false,-1);
    tracep->declBit(c+6,"IFU_READY", false,-1);
    tracep->declBit(c+106,"IFU_VALID", false,-1);
    tracep->declBit(c+107,"IDU_READY", false,-1);
    tracep->declBus(c+177,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+178,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+7,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+108,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+179,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+180,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+109,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+181,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+182,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+183,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+184,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+185,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+186,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+110,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+156,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+111,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+112,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+113,"IDU_VALID", false,-1);
    tracep->declBit(c+114,"EXU_READY", false,-1);
    tracep->declBus(c+115,"op", false,-1, 6,0);
    tracep->declBus(c+8,"rd", false,-1, 4,0);
    tracep->declBus(c+116,"funct3", false,-1, 2,0);
    tracep->declBus(c+9,"rs1", false,-1, 4,0);
    tracep->declBus(c+10,"rs2", false,-1, 4,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"funct7", false,-1, 6,0);
    tracep->declBus(c+13,"shamt", false,-1, 4,0);
    tracep->declBit(c+117,"sram_lsu_read", false,-1);
    tracep->declBit(c+118,"sram_lsu_write", false,-1);
    tracep->declBit(c+157,"LSU_DONE", false,-1);
    tracep->declBit(c+14,"EXU_VALID", false,-1);
    tracep->declBit(c+15,"WBU_READY", false,-1);
    tracep->declBus(c+16,"res", false,-1, 31,0);
    tracep->declBit(c+119,"ls_valid", false,-1);
    tracep->declBit(c+120,"ls_wen", false,-1);
    tracep->declBus(c+121,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+122,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+123,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+124,"ls_wmask", false,-1, 7,0);
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
    tracep->declBus(c+30,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+93,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+94,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+95,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+30,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+96,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+31,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+187,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+97,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+125,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+98,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+126,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+127,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+99,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+100,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+128,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+129,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+101,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+32,"wbu_done", false,-1);
    tracep->declBit(c+33,"difftest", false,-1);
    tracep->declBus(c+34,"xrd", false,-1, 31,0);
    tracep->declBus(c+35,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+36,"rf_wen", false,-1);
    tracep->declBus(c+37,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+38,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+39,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+40,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+41,"mepc_en", false,-1);
    tracep->declBit(c+42,"mstatus_en", false,-1);
    tracep->declBit(c+43,"mcause_en", false,-1);
    tracep->declBit(c+44,"mtvec_en", false,-1);
    tracep->declBus(c+45,"r1", false,-1, 31,0);
    tracep->declBus(c+130,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBit(c+117,"sram_lsu_read", false,-1);
    tracep->declBit(c+118,"sram_lsu_write", false,-1);
    tracep->declBit(c+157,"LSU_DONE", false,-1);
    tracep->declBit(c+113,"IDU_VALID", false,-1);
    tracep->declBit(c+114,"EXU_READY", false,-1);
    tracep->declBit(c+14,"EXU_VALID", false,-1);
    tracep->declBit(c+15,"WBU_READY", false,-1);
    tracep->declBus(c+115,"op", false,-1, 6,0);
    tracep->declBus(c+116,"funct3", false,-1, 2,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"funct7", false,-1, 6,0);
    tracep->declBus(c+13,"shamt", false,-1, 4,0);
    tracep->declBus(c+45,"r1", false,-1, 31,0);
    tracep->declBus(c+130,"r2", false,-1, 31,0);
    tracep->declBus(c+16,"res_reg", false,-1, 31,0);
    tracep->declBit(c+119,"ls_valid", false,-1);
    tracep->declBit(c+120,"ls_wen", false,-1);
    tracep->declBus(c+121,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+122,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+123,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+124,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+30,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+152,"pc", false,-1, 31,0);
    tracep->declBus(c+153,"dnpc", false,-1, 31,0);
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
    tracep->declBit(c+114,"exu_ready", false,-1);
    tracep->declBit(c+14,"exu_valid", false,-1);
    tracep->declBus(c+188,"IDLE", false,-1, 1,0);
    tracep->declBus(c+189,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+190,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+191,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+131,"state", false,-1, 1,0);
    tracep->declBus(c+158,"next_state", false,-1, 1,0);
    tracep->declBus(c+132,"a", false,-1, 31,0);
    tracep->declBus(c+133,"b", false,-1, 31,0);
    tracep->declBus(c+134,"res", false,-1, 31,0);
    tracep->declBus(c+135,"csr", false,-1, 31,0);
    tracep->declBus(c+136,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+159,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+136,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+137,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+136,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+11,"offset", false,-1, 31,0);
    tracep->declBit(c+138,"jalen", false,-1);
    tracep->declBit(c+139,"jalren", false,-1);
    tracep->declBit(c+86,"beqen", false,-1);
    tracep->declBit(c+87,"bneen", false,-1);
    tracep->declBit(c+88,"blten", false,-1);
    tracep->declBit(c+89,"bgeen", false,-1);
    tracep->declBit(c+90,"bltuen", false,-1);
    tracep->declBit(c+91,"bgeuen", false,-1);
    tracep->declBit(c+140,"ecall_en", false,-1);
    tracep->declBit(c+92,"mret_en", false,-1);
    tracep->declBit(c+141,"gpr_wen", false,-1);
    tracep->declBit(c+142,"mepc_wen", false,-1);
    tracep->declBit(c+143,"mstatus_wen", false,-1);
    tracep->declBit(c+144,"mcause_wen", false,-1);
    tracep->declBit(c+145,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+154,"inst", false,-1, 31,0);
    tracep->declBit(c+106,"IFU_VALID", false,-1);
    tracep->declBit(c+107,"IDU_READY", false,-1);
    tracep->declBit(c+113,"IDU_VALID", false,-1);
    tracep->declBit(c+114,"EXU_READY", false,-1);
    tracep->declBus(c+115,"op_reg", false,-1, 6,0);
    tracep->declBus(c+8,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+116,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+9,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+10,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+11,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+12,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+13,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+160,"op", false,-1, 6,0);
    tracep->declBus(c+161,"rd", false,-1, 4,0);
    tracep->declBus(c+162,"funct3", false,-1, 2,0);
    tracep->declBus(c+163,"rs1", false,-1, 4,0);
    tracep->declBus(c+164,"rs2", false,-1, 4,0);
    tracep->declBus(c+165,"immI", false,-1, 31,0);
    tracep->declBus(c+166,"immU", false,-1, 31,0);
    tracep->declBus(c+167,"immS", false,-1, 31,0);
    tracep->declBus(c+168,"immB", false,-1, 31,0);
    tracep->declBus(c+169,"immJ", false,-1, 31,0);
    tracep->declBus(c+146,"imm", false,-1, 31,0);
    tracep->declBus(c+170,"funct7", false,-1, 6,0);
    tracep->declBus(c+171,"shamt", false,-1, 4,0);
    tracep->declBit(c+107,"idu_ready", false,-1);
    tracep->declBit(c+113,"idu_valid", false,-1);
    tracep->declBus(c+192,"IDLE", false,-1, 0,0);
    tracep->declBus(c+193,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+147,"state", false,-1);
    tracep->declBit(c+172,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+152,"pc", false,-1, 31,0);
    tracep->declBus(c+154,"inst", false,-1, 31,0);
    tracep->declBit(c+5,"PCU_VALID", false,-1);
    tracep->declBit(c+6,"IFU_READY", false,-1);
    tracep->declBit(c+106,"IFU_VALID", false,-1);
    tracep->declBit(c+107,"IDU_READY", false,-1);
    tracep->declBit(c+32,"wbu_done", false,-1);
    tracep->declBus(c+177,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+181,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+182,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+178,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+179,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+183,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+184,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+180,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+185,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+186,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+7,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+110,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+156,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+108,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+109,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+111,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+112,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+6,"ifu_ready", false,-1);
    tracep->declBit(c+106,"ifu_valid", false,-1);
    tracep->declBus(c+188,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+189,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+190,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+191,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+148,"current_state", false,-1, 1,0);
    tracep->declBus(c+173,"next_state", false,-1, 1,0);
    tracep->declBus(c+7,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+110,"axi_arvalid", false,-1);
    tracep->declBit(c+112,"axi_rready", false,-1);
    tracep->declBus(c+188,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+189,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+190,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+191,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+46,"state", false,-1, 1,0);
    tracep->declBit(c+47,"sram_start", false,-1);
    tracep->declBit(c+48,"sram_ifu_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBit(c+117,"sram_lsu_read", false,-1);
    tracep->declBit(c+118,"sram_lsu_write", false,-1);
    tracep->declBit(c+157,"LSU_DONE", false,-1);
    tracep->declBus(c+30,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+119,"valid", false,-1);
    tracep->declBit(c+120,"wen", false,-1);
    tracep->declBus(c+121,"waddr", false,-1, 31,0);
    tracep->declBus(c+122,"wdata", false,-1, 31,0);
    tracep->declBus(c+123,"raddr", false,-1, 31,0);
    tracep->declBus(c+124,"wmask", false,-1, 7,0);
    tracep->declBus(c+93,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+97,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+125,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+94,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+96,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+98,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+126,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+31,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+127,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+99,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+95,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+100,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+128,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+30,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+187,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+129,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+101,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+102,"axi_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+103,"axi_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+104,"axi_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+188,"IDLE", false,-1, 1,0);
    tracep->declBus(c+189,"READ", false,-1, 1,0);
    tracep->declBus(c+190,"WRITE", false,-1, 1,0);
    tracep->declBus(c+191,"DONE", false,-1, 1,0);
    tracep->declBus(c+105,"state", false,-1, 1,0);
    tracep->declBit(c+100,"axi_arvalid", false,-1);
    tracep->declBit(c+101,"axi_rready", false,-1);
    tracep->declBus(c+95,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+97,"axi_awvalid", false,-1);
    tracep->declBit(c+98,"axi_wvalid", false,-1);
    tracep->declBus(c+93,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+94,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+96,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+99,"axi_bready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+152,"pc", false,-1, 31,0);
    tracep->declBus(c+153,"dnpc", false,-1, 31,0);
    tracep->declBit(c+5,"PCU_VALID", false,-1);
    tracep->declBit(c+6,"IFU_READY", false,-1);
    tracep->declBit(c+5,"pcu_valid", false,-1);
    tracep->declBus(c+192,"IDLE", false,-1, 0,0);
    tracep->declBus(c+193,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+49,"state", false,-1);
    tracep->declBit(c+174,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+194,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+195,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBus(c+34,"wdata", false,-1, 31,0);
    tracep->declBus(c+35,"waddr", false,-1, 4,0);
    tracep->declBit(c+36,"wen", false,-1);
    tracep->declBus(c+9,"raddr1", false,-1, 4,0);
    tracep->declBus(c+45,"r1", false,-1, 31,0);
    tracep->declBus(c+10,"raddr2", false,-1, 4,0);
    tracep->declBus(c+130,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+50+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+177,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+181,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+182,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+178,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+179,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+183,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+184,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+180,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+185,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+186,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+7,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+110,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+156,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+108,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+109,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+111,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+112,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+108,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+149,"tmp", false,-1, 31,0);
    tracep->declBit(c+156,"axi_arready", false,-1);
    tracep->declBit(c+111,"axi_rvalid", false,-1);
    tracep->declBus(c+109,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+82,"delay_test", false,-1, 5,0);
    tracep->declBus(c+1,"rand_delay", false,-1, 7,0);
    tracep->declBus(c+2,"delay_counter", false,-1, 7,0);
    tracep->declBus(c+3,"current_delay", false,-1, 7,0);
    tracep->pushNamePrefix("lfsr_ysyx_20110017 ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+1,"rand_out", false,-1, 7,0);
    tracep->declBit(c+4,"feedback", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+93,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+97,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+125,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+94,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+96,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+98,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+126,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+31,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+127,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+99,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+95,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+100,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+128,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+30,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+187,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+129,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+101,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+128,"axi_arready", false,-1);
    tracep->declBit(c+129,"axi_rvalid", false,-1);
    tracep->declBit(c+125,"axi_awready", false,-1);
    tracep->declBit(c+126,"axi_wready", false,-1);
    tracep->declBit(c+127,"axi_bvalid", false,-1);
    tracep->declBus(c+83,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+31,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+30,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+84,"s_wen", false,-1);
    tracep->declBus(c+175,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBit(c+14,"EXU_VALID", false,-1);
    tracep->declBit(c+15,"WBU_READY", false,-1);
    tracep->declBit(c+32,"wbu_done", false,-1);
    tracep->declBit(c+33,"difftest", false,-1);
    tracep->declBus(c+34,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+16,"res", false,-1, 31,0);
    tracep->declBus(c+35,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+8,"rd", false,-1, 4,0);
    tracep->declBit(c+36,"wen_reg", false,-1);
    tracep->declBit(c+25,"gpr_wen", false,-1);
    tracep->declBus(c+18,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+20,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+22,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+24,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+37,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+38,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+39,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+40,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+26,"mepc_wen", false,-1);
    tracep->declBit(c+27,"mstatus_wen", false,-1);
    tracep->declBit(c+28,"mcause_wen", false,-1);
    tracep->declBit(c+29,"mtvec_wen", false,-1);
    tracep->declBit(c+41,"mepc_wen_reg", false,-1);
    tracep->declBit(c+42,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+43,"mcause_wen_reg", false,-1);
    tracep->declBit(c+44,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+16,"xrd", false,-1, 31,0);
    tracep->declBus(c+8,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+25,"o_rf_wen", false,-1);
    tracep->declBus(c+18,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+20,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+22,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+24,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+15,"wbu_ready", false,-1);
    tracep->declBus(c+188,"IDLE", false,-1, 1,0);
    tracep->declBus(c+189,"WRITE", false,-1, 1,0);
    tracep->declBus(c+190,"DIFF", false,-1, 1,0);
    tracep->declBus(c+191,"NULL", false,-1, 1,0);
    tracep->declBus(c+85,"state", false,-1, 1,0);
    tracep->declBus(c+176,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+195,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+196,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+39,"din", false,-1, 31,0);
    tracep->declBus(c+21,"dout", false,-1, 31,0);
    tracep->declBit(c+43,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+195,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+196,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+37,"din", false,-1, 31,0);
    tracep->declBus(c+17,"dout", false,-1, 31,0);
    tracep->declBit(c+41,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+195,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+197,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+38,"din", false,-1, 31,0);
    tracep->declBus(c+19,"dout", false,-1, 31,0);
    tracep->declBit(c+42,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+195,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+196,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+40,"din", false,-1, 31,0);
    tracep->declBus(c+23,"dout", false,-1, 31,0);
    tracep->declBit(c+44,"wen", false,-1);
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
    bufp->fullCData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__rand_delay),8);
    bufp->fullCData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__delay_counter),8);
    bufp->fullCData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__current_delay),8);
    bufp->fullBit(oldp+4,((1U & VL_REDXOR_8((0xb8U 
                                             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__rand_delay))))));
    bufp->fullBit(oldp+5,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+6,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullCData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__shamt),5);
    bufp->fullBit(oldp+14,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+15,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__o_mepc),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__o_mcause),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__o_mtvec),32);
    bufp->fullBit(oldp+25,(vlSelf->top_ysyx_24110017__DOT__gpr_wen));
    bufp->fullBit(oldp+26,(vlSelf->top_ysyx_24110017__DOT__mepc_wen));
    bufp->fullBit(oldp+27,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+28,(vlSelf->top_ysyx_24110017__DOT__mcause_wen));
    bufp->fullBit(oldp+29,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullBit(oldp+32,(vlSelf->top_ysyx_24110017__DOT__wbu_done));
    bufp->fullBit(oldp+33,(vlSelf->top_ysyx_24110017__DOT__difftest));
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__xrd),32);
    bufp->fullCData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__rf_addr),5);
    bufp->fullBit(oldp+36,(vlSelf->top_ysyx_24110017__DOT__rf_wen));
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__w_mepc),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__w_mstatus),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__w_mcause),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__w_mtvec),32);
    bufp->fullBit(oldp+41,(vlSelf->top_ysyx_24110017__DOT__mepc_en));
    bufp->fullBit(oldp+42,(vlSelf->top_ysyx_24110017__DOT__mstatus_en));
    bufp->fullBit(oldp+43,(vlSelf->top_ysyx_24110017__DOT__mcause_en));
    bufp->fullBit(oldp+44,(vlSelf->top_ysyx_24110017__DOT__mtvec_en));
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullCData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+47,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+48,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullBit(oldp+49,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+69,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+70,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+77,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+78,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+79,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+80,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+81,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+82,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__delay_test),6);
    bufp->fullCData(oldp+83,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+84,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    bufp->fullCData(oldp+85,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state),2);
    bufp->fullBit(oldp+86,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+87,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+88,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+89,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+90,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+91,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+92,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                               & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
    bufp->fullIData(oldp+93,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+94,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+95,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+96,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+97,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+98,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+99,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+100,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+101,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+102,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr_reg),32);
    bufp->fullIData(oldp+103,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata_reg),32);
    bufp->fullCData(oldp+104,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb_reg),8);
    bufp->fullCData(oldp+105,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+106,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+107,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+108,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+109,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+110,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+111,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+112,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+113,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+114,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+115,(vlSelf->top_ysyx_24110017__DOT__op),7);
    bufp->fullCData(oldp+116,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
    bufp->fullBit(oldp+117,(vlSelf->top_ysyx_24110017__DOT__sram_lsu_read));
    bufp->fullBit(oldp+118,(vlSelf->top_ysyx_24110017__DOT__sram_lsu_write));
    bufp->fullBit(oldp+119,(vlSelf->top_ysyx_24110017__DOT__ls_valid));
    bufp->fullBit(oldp+120,((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullIData(oldp+121,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+122,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+123,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+124,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),8);
    bufp->fullBit(oldp+125,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+126,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+127,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+128,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+129,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullIData(oldp+130,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullCData(oldp+131,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+132,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+133,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+134,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+135,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+136,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+137,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+138,((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+139,((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+140,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+141,(((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
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
    bufp->fullBit(oldp+142,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+143,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+144,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+145,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mtvec_wen));
    bufp->fullIData(oldp+146,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm),32);
    bufp->fullBit(oldp+147,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+148,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state),2);
    bufp->fullIData(oldp+149,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullBit(oldp+150,(vlSelf->clk));
    bufp->fullBit(oldp+151,(vlSelf->rst));
    bufp->fullIData(oldp+152,(vlSelf->pc),32);
    bufp->fullIData(oldp+153,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+154,(vlSelf->inst),32);
    bufp->fullBit(oldp+155,(vlSelf->DIFFTEST));
    bufp->fullBit(oldp+156,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+157,(vlSelf->top_ysyx_24110017__DOT__LSU_DONE));
    bufp->fullCData(oldp+158,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+159,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullCData(oldp+160,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+161,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+162,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+163,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+164,((0x1fU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+165,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+166,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+167,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+168,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+169,((((- (IData)((vlSelf->inst 
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
    bufp->fullCData(oldp+170,((((0x33U == (0x7fU & vlSelf->inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->inst)))
                                ? (vlSelf->inst >> 0x19U)
                                : 0U)),7);
    bufp->fullCData(oldp+171,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+172,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+173,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+174,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullIData(oldp+175,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
    bufp->fullCData(oldp+176,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->fullIData(oldp+177,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+178,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+179,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),4);
    bufp->fullCData(oldp+180,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BRESP),2);
    bufp->fullBit(oldp+181,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+182,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWREADY));
    bufp->fullBit(oldp+183,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+184,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WREADY));
    bufp->fullBit(oldp+185,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BVALID));
    bufp->fullBit(oldp+186,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullCData(oldp+187,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RRESP),2);
    bufp->fullCData(oldp+188,(0U),2);
    bufp->fullCData(oldp+189,(1U),2);
    bufp->fullCData(oldp+190,(2U),2);
    bufp->fullCData(oldp+191,(3U),2);
    bufp->fullBit(oldp+192,(0U));
    bufp->fullBit(oldp+193,(1U));
    bufp->fullIData(oldp+194,(5U),32);
    bufp->fullIData(oldp+195,(0x20U),32);
    bufp->fullIData(oldp+196,(0U),32);
    bufp->fullIData(oldp+197,(0x1800U),32);
}
