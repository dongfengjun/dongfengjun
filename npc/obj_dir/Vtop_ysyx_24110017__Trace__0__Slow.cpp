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
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+150,"pc", false,-1, 31,0);
    tracep->declBus(c+151,"dnpc", false,-1, 31,0);
    tracep->declBus(c+152,"inst", false,-1, 31,0);
    tracep->declBit(c+153,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+150,"pc", false,-1, 31,0);
    tracep->declBus(c+151,"dnpc", false,-1, 31,0);
    tracep->declBus(c+152,"inst", false,-1, 31,0);
    tracep->declBit(c+153,"DIFFTEST", false,-1);
    tracep->declBit(c+96,"PCU_VALID", false,-1);
    tracep->declBit(c+97,"IFU_READY", false,-1);
    tracep->declBit(c+98,"IFU_VALID", false,-1);
    tracep->declBit(c+99,"IDU_READY", false,-1);
    tracep->declBus(c+172,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+173,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+100,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+101,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+174,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+175,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+176,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+177,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+178,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+179,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+180,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+181,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+102,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+103,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+104,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+105,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+106,"IDU_VALID", false,-1);
    tracep->declBit(c+107,"EXU_READY", false,-1);
    tracep->declBus(c+108,"op", false,-1, 6,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+109,"funct3", false,-1, 2,0);
    tracep->declBus(c+3,"rs1", false,-1, 4,0);
    tracep->declBus(c+4,"rs2", false,-1, 4,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"funct7", false,-1, 6,0);
    tracep->declBus(c+7,"shamt", false,-1, 4,0);
    tracep->declBit(c+110,"sram_lsu_start", false,-1);
    tracep->declBit(c+82,"LSU_DONE", false,-1);
    tracep->declBit(c+8,"EXU_VALID", false,-1);
    tracep->declBit(c+9,"WBU_READY", false,-1);
    tracep->declBus(c+10,"res", false,-1, 31,0);
    tracep->declBit(c+111,"ls_valid", false,-1);
    tracep->declBit(c+112,"ls_wen", false,-1);
    tracep->declBus(c+113,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+114,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+115,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+116,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+11,"mepc", false,-1, 31,0);
    tracep->declBus(c+12,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+13,"mstatus", false,-1, 31,0);
    tracep->declBus(c+14,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+15,"mcause", false,-1, 31,0);
    tracep->declBus(c+16,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+17,"mtvec", false,-1, 31,0);
    tracep->declBus(c+18,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+19,"gpr_wen", false,-1);
    tracep->declBit(c+20,"mepc_wen", false,-1);
    tracep->declBit(c+21,"mstatus_wen", false,-1);
    tracep->declBit(c+22,"mcause_wen", false,-1);
    tracep->declBit(c+23,"mtvec_wen", false,-1);
    tracep->declBus(c+24,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+83,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+84,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+85,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+24,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+86,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+25,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+182,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+87,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+117,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+88,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+118,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+119,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+89,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+90,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+120,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+121,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+91,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+122,"wbu_done", false,-1);
    tracep->declBit(c+26,"difftest", false,-1);
    tracep->declBus(c+27,"xrd", false,-1, 31,0);
    tracep->declBus(c+28,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+29,"rf_wen", false,-1);
    tracep->declBus(c+30,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+31,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+32,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+33,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+34,"mepc_en", false,-1);
    tracep->declBit(c+35,"mstatus_en", false,-1);
    tracep->declBit(c+36,"mcause_en", false,-1);
    tracep->declBit(c+37,"mtvec_en", false,-1);
    tracep->declBus(c+38,"r1", false,-1, 31,0);
    tracep->declBus(c+123,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBit(c+110,"sram_lsu_start", false,-1);
    tracep->declBit(c+82,"LSU_DONE", false,-1);
    tracep->declBit(c+106,"IDU_VALID", false,-1);
    tracep->declBit(c+107,"EXU_READY", false,-1);
    tracep->declBit(c+8,"EXU_VALID", false,-1);
    tracep->declBit(c+9,"WBU_READY", false,-1);
    tracep->declBus(c+108,"op", false,-1, 6,0);
    tracep->declBus(c+109,"funct3", false,-1, 2,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"funct7", false,-1, 6,0);
    tracep->declBus(c+7,"shamt", false,-1, 4,0);
    tracep->declBus(c+38,"r1", false,-1, 31,0);
    tracep->declBus(c+123,"r2", false,-1, 31,0);
    tracep->declBus(c+10,"res_reg", false,-1, 31,0);
    tracep->declBit(c+111,"ls_valid", false,-1);
    tracep->declBit(c+112,"ls_wen", false,-1);
    tracep->declBus(c+113,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+114,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+115,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+116,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+24,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+150,"pc", false,-1, 31,0);
    tracep->declBus(c+151,"dnpc", false,-1, 31,0);
    tracep->declBus(c+11,"mepc", false,-1, 31,0);
    tracep->declBus(c+13,"mstatus", false,-1, 31,0);
    tracep->declBus(c+15,"mcause", false,-1, 31,0);
    tracep->declBus(c+17,"mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+14,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+16,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+18,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+19,"gpr_wen_reg", false,-1);
    tracep->declBit(c+20,"mepc_wen_reg", false,-1);
    tracep->declBit(c+21,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+22,"mcause_wen_reg", false,-1);
    tracep->declBit(c+23,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+107,"exu_ready", false,-1);
    tracep->declBit(c+8,"exu_valid", false,-1);
    tracep->declBus(c+183,"IDLE", false,-1, 1,0);
    tracep->declBus(c+184,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+185,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+186,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+124,"state", false,-1, 1,0);
    tracep->declBus(c+154,"next_state", false,-1, 1,0);
    tracep->declBus(c+125,"a", false,-1, 31,0);
    tracep->declBus(c+126,"b", false,-1, 31,0);
    tracep->declBus(c+127,"res", false,-1, 31,0);
    tracep->declBus(c+128,"csr", false,-1, 31,0);
    tracep->declBus(c+129,"w_csrs", false,-1, 31,0);
    tracep->declBit(c+130,"o_mepc", false,-1);
    tracep->declBit(c+131,"o_mstatus", false,-1);
    tracep->declBit(c+132,"o_mcause", false,-1);
    tracep->declBit(c+131,"o_mtvec", false,-1);
    tracep->declBus(c+5,"offset", false,-1, 31,0);
    tracep->declBit(c+133,"jalen", false,-1);
    tracep->declBit(c+134,"jalren", false,-1);
    tracep->declBit(c+73,"beqen", false,-1);
    tracep->declBit(c+74,"bneen", false,-1);
    tracep->declBit(c+75,"blten", false,-1);
    tracep->declBit(c+76,"bgeen", false,-1);
    tracep->declBit(c+77,"bltuen", false,-1);
    tracep->declBit(c+78,"bgeuen", false,-1);
    tracep->declBit(c+135,"ecall_en", false,-1);
    tracep->declBit(c+79,"mret_en", false,-1);
    tracep->declBit(c+136,"gpr_wen", false,-1);
    tracep->declBit(c+137,"mepc_wen", false,-1);
    tracep->declBit(c+80,"mstatus_wen", false,-1);
    tracep->declBit(c+138,"mcause_wen", false,-1);
    tracep->declBit(c+81,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+152,"inst", false,-1, 31,0);
    tracep->declBit(c+98,"IFU_VALID", false,-1);
    tracep->declBit(c+99,"IDU_READY", false,-1);
    tracep->declBit(c+106,"IDU_VALID", false,-1);
    tracep->declBit(c+107,"EXU_READY", false,-1);
    tracep->declBus(c+108,"op_reg", false,-1, 6,0);
    tracep->declBus(c+2,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+109,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+3,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+4,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+5,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+6,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+7,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+155,"op", false,-1, 6,0);
    tracep->declBus(c+156,"rd", false,-1, 4,0);
    tracep->declBus(c+157,"funct3", false,-1, 2,0);
    tracep->declBus(c+158,"rs1", false,-1, 4,0);
    tracep->declBus(c+159,"rs2", false,-1, 4,0);
    tracep->declBus(c+160,"immI", false,-1, 31,0);
    tracep->declBus(c+161,"immU", false,-1, 31,0);
    tracep->declBus(c+162,"immS", false,-1, 31,0);
    tracep->declBus(c+163,"immB", false,-1, 31,0);
    tracep->declBus(c+164,"immJ", false,-1, 31,0);
    tracep->declBus(c+139,"imm", false,-1, 31,0);
    tracep->declBus(c+165,"funct7", false,-1, 6,0);
    tracep->declBus(c+166,"shamt", false,-1, 4,0);
    tracep->declBit(c+99,"idu_ready", false,-1);
    tracep->declBit(c+106,"idu_valid", false,-1);
    tracep->declBus(c+187,"IDLE", false,-1, 0,0);
    tracep->declBus(c+188,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+140,"state", false,-1);
    tracep->declBit(c+167,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+150,"pc", false,-1, 31,0);
    tracep->declBus(c+152,"inst", false,-1, 31,0);
    tracep->declBit(c+96,"PCU_VALID", false,-1);
    tracep->declBit(c+97,"IFU_READY", false,-1);
    tracep->declBit(c+98,"IFU_VALID", false,-1);
    tracep->declBit(c+99,"IDU_READY", false,-1);
    tracep->declBit(c+122,"wbu_done", false,-1);
    tracep->declBus(c+172,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+176,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+177,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+173,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+174,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+178,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+179,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+175,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+180,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+181,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+100,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+102,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+103,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+101,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+104,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+105,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+97,"ifu_ready", false,-1);
    tracep->declBit(c+98,"ifu_valid", false,-1);
    tracep->declBus(c+183,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+184,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+185,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+186,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+141,"current_state", false,-1, 1,0);
    tracep->declBus(c+168,"next_state", false,-1, 1,0);
    tracep->declBus(c+100,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+102,"axi_arvalid", false,-1);
    tracep->declBit(c+105,"axi_rready", false,-1);
    tracep->declBus(c+183,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+184,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+185,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+186,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+142,"state", false,-1, 1,0);
    tracep->declBit(c+143,"sram_start", false,-1);
    tracep->declBit(c+144,"sram_ifu_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBit(c+110,"sram_lsu_start", false,-1);
    tracep->declBit(c+82,"LSU_DONE", false,-1);
    tracep->declBus(c+24,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+111,"valid", false,-1);
    tracep->declBit(c+112,"wen", false,-1);
    tracep->declBus(c+113,"waddr", false,-1, 31,0);
    tracep->declBus(c+114,"wdata", false,-1, 31,0);
    tracep->declBus(c+115,"raddr", false,-1, 31,0);
    tracep->declBus(c+116,"wmask", false,-1, 7,0);
    tracep->declBus(c+83,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+87,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+117,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+84,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+86,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+88,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+118,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+25,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+119,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+89,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+85,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+90,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+120,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+24,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+182,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+121,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+91,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+92,"axi_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+93,"axi_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+94,"axi_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+183,"IDLE", false,-1, 1,0);
    tracep->declBus(c+184,"READ", false,-1, 1,0);
    tracep->declBus(c+185,"WRITE", false,-1, 1,0);
    tracep->declBus(c+186,"DONE", false,-1, 1,0);
    tracep->declBus(c+95,"state", false,-1, 1,0);
    tracep->declBit(c+90,"axi_arvalid", false,-1);
    tracep->declBit(c+91,"axi_rready", false,-1);
    tracep->declBus(c+85,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+87,"axi_awvalid", false,-1);
    tracep->declBit(c+88,"axi_wvalid", false,-1);
    tracep->declBus(c+83,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+84,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+86,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+89,"axi_bready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+150,"pc", false,-1, 31,0);
    tracep->declBus(c+151,"dnpc", false,-1, 31,0);
    tracep->declBit(c+96,"PCU_VALID", false,-1);
    tracep->declBit(c+97,"IFU_READY", false,-1);
    tracep->declBit(c+96,"pcu_valid", false,-1);
    tracep->declBus(c+187,"IDLE", false,-1, 0,0);
    tracep->declBus(c+188,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+145,"state", false,-1);
    tracep->declBit(c+169,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+189,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+190,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBus(c+27,"wdata", false,-1, 31,0);
    tracep->declBus(c+28,"waddr", false,-1, 4,0);
    tracep->declBit(c+29,"wen", false,-1);
    tracep->declBus(c+3,"raddr1", false,-1, 4,0);
    tracep->declBus(c+38,"r1", false,-1, 31,0);
    tracep->declBus(c+4,"raddr2", false,-1, 4,0);
    tracep->declBus(c+123,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+39+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+172,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+176,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+177,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+173,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+174,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+178,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+179,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+175,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+180,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+181,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+100,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+102,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+103,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+101,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+104,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+105,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+101,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+146,"tmp", false,-1, 31,0);
    tracep->declBit(c+103,"axi_arready", false,-1);
    tracep->declBit(c+104,"axi_rvalid", false,-1);
    tracep->declBus(c+1,"axi_rresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+83,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+87,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+117,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+84,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+86,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+88,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+118,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+25,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+119,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+89,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+85,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+90,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+120,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+24,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+182,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+121,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+91,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+120,"axi_arready", false,-1);
    tracep->declBit(c+121,"axi_rvalid", false,-1);
    tracep->declBit(c+117,"axi_awready", false,-1);
    tracep->declBit(c+118,"axi_wready", false,-1);
    tracep->declBit(c+119,"axi_bvalid", false,-1);
    tracep->declBus(c+71,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+25,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+24,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+72,"s_wen", false,-1);
    tracep->declBus(c+170,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBit(c+8,"EXU_VALID", false,-1);
    tracep->declBit(c+9,"WBU_READY", false,-1);
    tracep->declBit(c+122,"wbu_done", false,-1);
    tracep->declBit(c+26,"difftest", false,-1);
    tracep->declBus(c+27,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+10,"res", false,-1, 31,0);
    tracep->declBus(c+28,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBit(c+29,"wen_reg", false,-1);
    tracep->declBit(c+19,"gpr_wen", false,-1);
    tracep->declBus(c+12,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+14,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+16,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+18,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+30,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+31,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+32,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+33,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+20,"mepc_wen", false,-1);
    tracep->declBit(c+21,"mstatus_wen", false,-1);
    tracep->declBit(c+22,"mcause_wen", false,-1);
    tracep->declBit(c+23,"mtvec_wen", false,-1);
    tracep->declBit(c+34,"mepc_wen_reg", false,-1);
    tracep->declBit(c+35,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+36,"mcause_wen_reg", false,-1);
    tracep->declBit(c+37,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+10,"xrd", false,-1, 31,0);
    tracep->declBus(c+2,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+19,"o_rf_wen", false,-1);
    tracep->declBus(c+12,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+14,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+16,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+18,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+9,"wbu_ready", false,-1);
    tracep->declBus(c+183,"IDLE", false,-1, 1,0);
    tracep->declBus(c+184,"WRITE", false,-1, 1,0);
    tracep->declBus(c+185,"DIFF", false,-1, 1,0);
    tracep->declBus(c+186,"NULL", false,-1, 1,0);
    tracep->declBus(c+147,"state", false,-1, 1,0);
    tracep->declBus(c+171,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+190,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+191,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+32,"din", false,-1, 31,0);
    tracep->declBus(c+15,"dout", false,-1, 31,0);
    tracep->declBit(c+36,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+190,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+191,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+30,"din", false,-1, 31,0);
    tracep->declBus(c+11,"dout", false,-1, 31,0);
    tracep->declBit(c+34,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+190,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+192,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+31,"din", false,-1, 31,0);
    tracep->declBus(c+13,"dout", false,-1, 31,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+190,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+191,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+33,"din", false,-1, 31,0);
    tracep->declBus(c+17,"dout", false,-1, 31,0);
    tracep->declBit(c+37,"wen", false,-1);
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
    bufp->fullCData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullCData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__shamt),5);
    bufp->fullBit(oldp+8,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+9,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__o_mepc),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__o_mcause),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__o_mtvec),32);
    bufp->fullBit(oldp+19,(vlSelf->top_ysyx_24110017__DOT__gpr_wen));
    bufp->fullBit(oldp+20,(vlSelf->top_ysyx_24110017__DOT__mepc_wen));
    bufp->fullBit(oldp+21,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+22,(vlSelf->top_ysyx_24110017__DOT__mcause_wen));
    bufp->fullBit(oldp+23,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullBit(oldp+26,(vlSelf->top_ysyx_24110017__DOT__difftest));
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__xrd),32);
    bufp->fullCData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__rf_addr),5);
    bufp->fullBit(oldp+29,(vlSelf->top_ysyx_24110017__DOT__rf_wen));
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__w_mepc),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__w_mstatus),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__w_mcause),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__w_mtvec),32);
    bufp->fullBit(oldp+34,(vlSelf->top_ysyx_24110017__DOT__mepc_en));
    bufp->fullBit(oldp+35,(vlSelf->top_ysyx_24110017__DOT__mstatus_en));
    bufp->fullBit(oldp+36,(vlSelf->top_ysyx_24110017__DOT__mcause_en));
    bufp->fullBit(oldp+37,(vlSelf->top_ysyx_24110017__DOT__mtvec_en));
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+69,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+70,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+72,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    bufp->fullBit(oldp+73,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+74,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+75,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+76,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+77,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+78,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+79,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                               & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
    bufp->fullBit(oldp+80,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & (0x300U == vlSelf->top_ysyx_24110017__DOT__imm))));
    bufp->fullBit(oldp+81,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & (0x305U == vlSelf->top_ysyx_24110017__DOT__imm))));
    bufp->fullBit(oldp+82,(vlSelf->top_ysyx_24110017__DOT__LSU_DONE));
    bufp->fullIData(oldp+83,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+84,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+85,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+86,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+87,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+88,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+89,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+90,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+91,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+92,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr_reg),32);
    bufp->fullIData(oldp+93,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata_reg),32);
    bufp->fullCData(oldp+94,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb_reg),8);
    bufp->fullCData(oldp+95,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+96,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+97,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready));
    bufp->fullBit(oldp+98,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+99,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+100,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullIData(oldp+101,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullBit(oldp+102,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+103,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+104,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+105,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+106,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+107,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+108,(vlSelf->top_ysyx_24110017__DOT__op),7);
    bufp->fullCData(oldp+109,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
    bufp->fullBit(oldp+110,(vlSelf->top_ysyx_24110017__DOT__sram_lsu_start));
    bufp->fullBit(oldp+111,(vlSelf->top_ysyx_24110017__DOT__ls_valid));
    bufp->fullBit(oldp+112,((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullIData(oldp+113,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+114,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+115,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+116,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),8);
    bufp->fullBit(oldp+117,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+118,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+119,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+120,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+121,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+122,(vlSelf->top_ysyx_24110017__DOT__wbu_done));
    bufp->fullIData(oldp+123,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullCData(oldp+124,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+125,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+126,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+127,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+128,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+129,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs),32);
    bufp->fullBit(oldp+130,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__o_mepc));
    bufp->fullBit(oldp+131,((1U & vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs)));
    bufp->fullBit(oldp+132,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__o_mcause));
    bufp->fullBit(oldp+133,((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+134,((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+135,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+136,(((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
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
    bufp->fullBit(oldp+137,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+138,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullIData(oldp+139,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm),32);
    bufp->fullBit(oldp+140,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+141,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+142,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+143,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+144,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullBit(oldp+145,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+146,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullCData(oldp+147,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state),2);
    bufp->fullBit(oldp+148,(vlSelf->clk));
    bufp->fullBit(oldp+149,(vlSelf->rst));
    bufp->fullIData(oldp+150,(vlSelf->pc),32);
    bufp->fullIData(oldp+151,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+152,(vlSelf->inst),32);
    bufp->fullBit(oldp+153,(vlSelf->DIFFTEST));
    bufp->fullCData(oldp+154,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->fullCData(oldp+155,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+156,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+157,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+158,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+159,((0x1fU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+160,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+161,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+162,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+163,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+164,((((- (IData)((vlSelf->inst 
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
    bufp->fullCData(oldp+165,((((0x33U == (0x7fU & vlSelf->inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->inst)))
                                ? (vlSelf->inst >> 0x19U)
                                : 0U)),7);
    bufp->fullCData(oldp+166,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+167,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+168,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+169,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullIData(oldp+170,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
    bufp->fullCData(oldp+171,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->fullIData(oldp+172,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+173,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+174,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),4);
    bufp->fullCData(oldp+175,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BRESP),2);
    bufp->fullBit(oldp+176,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+177,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWREADY));
    bufp->fullBit(oldp+178,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+179,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WREADY));
    bufp->fullBit(oldp+180,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BVALID));
    bufp->fullBit(oldp+181,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullCData(oldp+182,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RRESP),2);
    bufp->fullCData(oldp+183,(0U),2);
    bufp->fullCData(oldp+184,(1U),2);
    bufp->fullCData(oldp+185,(2U),2);
    bufp->fullCData(oldp+186,(3U),2);
    bufp->fullBit(oldp+187,(0U));
    bufp->fullBit(oldp+188,(1U));
    bufp->fullIData(oldp+189,(5U),32);
    bufp->fullIData(oldp+190,(0x20U),32);
    bufp->fullIData(oldp+191,(0U),32);
    bufp->fullIData(oldp+192,(0x1800U),32);
}
