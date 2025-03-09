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
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+134,"pc", false,-1, 31,0);
    tracep->declBus(c+135,"dnpc", false,-1, 31,0);
    tracep->declBus(c+136,"inst", false,-1, 31,0);
    tracep->declBit(c+137,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+134,"pc", false,-1, 31,0);
    tracep->declBus(c+135,"dnpc", false,-1, 31,0);
    tracep->declBus(c+136,"inst", false,-1, 31,0);
    tracep->declBit(c+137,"DIFFTEST", false,-1);
    tracep->declBit(c+79,"PCU_VALID", false,-1);
    tracep->declBit(c+80,"IFU_READY", false,-1);
    tracep->declBit(c+81,"IFU_VALID", false,-1);
    tracep->declBit(c+82,"IDU_READY", false,-1);
    tracep->declBus(c+159,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+160,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+83,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+84,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+161,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+162,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+163,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+164,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+165,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+166,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+167,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+168,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+85,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+87,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+89,"IDU_VALID", false,-1);
    tracep->declBit(c+90,"EXU_READY", false,-1);
    tracep->declBus(c+91,"op", false,-1, 6,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+92,"funct3", false,-1, 2,0);
    tracep->declBus(c+3,"rs1", false,-1, 4,0);
    tracep->declBus(c+4,"rs2", false,-1, 4,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"funct7", false,-1, 6,0);
    tracep->declBus(c+7,"shamt", false,-1, 4,0);
    tracep->declBit(c+93,"sram_lsu_start", false,-1);
    tracep->declBit(c+65,"LSU_DONE", false,-1);
    tracep->declBit(c+8,"EXU_VALID", false,-1);
    tracep->declBit(c+9,"WBU_READY", false,-1);
    tracep->declBus(c+10,"res", false,-1, 31,0);
    tracep->declBit(c+94,"ls_valid", false,-1);
    tracep->declBit(c+95,"ls_wen", false,-1);
    tracep->declBus(c+96,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+97,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+99,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+11,"mepc", false,-1, 31,0);
    tracep->declBus(c+138,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+12,"mstatus", false,-1, 31,0);
    tracep->declBus(c+100,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+13,"mcause", false,-1, 31,0);
    tracep->declBus(c+101,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+14,"mtvec", false,-1, 31,0);
    tracep->declBus(c+100,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+15,"gpr_wen", false,-1);
    tracep->declBit(c+102,"mepc_wen", false,-1);
    tracep->declBit(c+103,"mstatus_wen", false,-1);
    tracep->declBit(c+104,"mcause_wen", false,-1);
    tracep->declBit(c+105,"mtvec_wen", false,-1);
    tracep->declBus(c+16,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+66,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+67,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+68,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+16,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+69,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+17,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+169,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+70,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+106,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+71,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+107,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+108,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+72,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+73,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+109,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+110,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+74,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+111,"wbu_done", false,-1);
    tracep->declBit(c+18,"difftest", false,-1);
    tracep->declBus(c+19,"xrd", false,-1, 31,0);
    tracep->declBus(c+20,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+170,"rf_wen", false,-1);
    tracep->declBus(c+171,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+172,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+101,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+100,"w_mtvec", false,-1, 31,0);
    tracep->declBus(c+21,"r1", false,-1, 31,0);
    tracep->declBus(c+112,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+93,"sram_lsu_start", false,-1);
    tracep->declBit(c+65,"LSU_DONE", false,-1);
    tracep->declBit(c+89,"IDU_VALID", false,-1);
    tracep->declBit(c+90,"EXU_READY", false,-1);
    tracep->declBit(c+8,"EXU_VALID", false,-1);
    tracep->declBit(c+9,"WBU_READY", false,-1);
    tracep->declBus(c+91,"op", false,-1, 6,0);
    tracep->declBus(c+92,"funct3", false,-1, 2,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"funct7", false,-1, 6,0);
    tracep->declBus(c+7,"shamt", false,-1, 4,0);
    tracep->declBus(c+21,"r1", false,-1, 31,0);
    tracep->declBus(c+112,"r2", false,-1, 31,0);
    tracep->declBus(c+10,"res_reg", false,-1, 31,0);
    tracep->declBit(c+94,"ls_valid", false,-1);
    tracep->declBit(c+95,"ls_wen", false,-1);
    tracep->declBus(c+96,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+97,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+99,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+134,"pc", false,-1, 31,0);
    tracep->declBus(c+135,"dnpc", false,-1, 31,0);
    tracep->declBus(c+11,"mepc", false,-1, 31,0);
    tracep->declBus(c+12,"mstatus", false,-1, 31,0);
    tracep->declBus(c+13,"mcause", false,-1, 31,0);
    tracep->declBus(c+14,"mtvec", false,-1, 31,0);
    tracep->declBus(c+138,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+100,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+101,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+100,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+15,"gpr_wen_reg", false,-1);
    tracep->declBit(c+102,"mepc_wen", false,-1);
    tracep->declBit(c+103,"mstatus_wen", false,-1);
    tracep->declBit(c+104,"mcause_wen", false,-1);
    tracep->declBit(c+105,"mtvec_wen", false,-1);
    tracep->declBit(c+90,"exu_ready", false,-1);
    tracep->declBit(c+8,"exu_valid", false,-1);
    tracep->declBus(c+173,"IDLE", false,-1, 1,0);
    tracep->declBus(c+174,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+175,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+176,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+113,"state", false,-1, 1,0);
    tracep->declBus(c+139,"next_state", false,-1, 1,0);
    tracep->declBus(c+114,"a", false,-1, 31,0);
    tracep->declBus(c+115,"b", false,-1, 31,0);
    tracep->declBus(c+116,"res", false,-1, 31,0);
    tracep->declBus(c+117,"csr", false,-1, 31,0);
    tracep->declBus(c+100,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+5,"offset", false,-1, 31,0);
    tracep->declBit(c+118,"jalen", false,-1);
    tracep->declBit(c+119,"jalren", false,-1);
    tracep->declBit(c+58,"beqen", false,-1);
    tracep->declBit(c+59,"bneen", false,-1);
    tracep->declBit(c+60,"blten", false,-1);
    tracep->declBit(c+61,"bgeen", false,-1);
    tracep->declBit(c+62,"bltuen", false,-1);
    tracep->declBit(c+63,"bgeuen", false,-1);
    tracep->declBit(c+120,"ecall_en", false,-1);
    tracep->declBit(c+64,"mret_en", false,-1);
    tracep->declBit(c+121,"gpr_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+136,"inst", false,-1, 31,0);
    tracep->declBit(c+81,"IFU_VALID", false,-1);
    tracep->declBit(c+82,"IDU_READY", false,-1);
    tracep->declBit(c+89,"IDU_VALID", false,-1);
    tracep->declBit(c+90,"EXU_READY", false,-1);
    tracep->declBus(c+91,"op_reg", false,-1, 6,0);
    tracep->declBus(c+2,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+92,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+3,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+4,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+5,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+6,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+7,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+140,"op", false,-1, 6,0);
    tracep->declBus(c+141,"rd", false,-1, 4,0);
    tracep->declBus(c+142,"funct3", false,-1, 2,0);
    tracep->declBus(c+143,"rs1", false,-1, 4,0);
    tracep->declBus(c+144,"rs2", false,-1, 4,0);
    tracep->declBus(c+145,"immI", false,-1, 31,0);
    tracep->declBus(c+146,"immU", false,-1, 31,0);
    tracep->declBus(c+147,"immS", false,-1, 31,0);
    tracep->declBus(c+148,"immB", false,-1, 31,0);
    tracep->declBus(c+149,"immJ", false,-1, 31,0);
    tracep->declBus(c+122,"imm", false,-1, 31,0);
    tracep->declBus(c+150,"funct7", false,-1, 6,0);
    tracep->declBus(c+151,"shamt", false,-1, 4,0);
    tracep->declBit(c+82,"idu_ready", false,-1);
    tracep->declBit(c+89,"idu_valid", false,-1);
    tracep->declBus(c+177,"IDLE", false,-1, 0,0);
    tracep->declBus(c+178,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+123,"state", false,-1);
    tracep->declBit(c+152,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+134,"pc", false,-1, 31,0);
    tracep->declBus(c+136,"inst", false,-1, 31,0);
    tracep->declBit(c+79,"PCU_VALID", false,-1);
    tracep->declBit(c+80,"IFU_READY", false,-1);
    tracep->declBit(c+81,"IFU_VALID", false,-1);
    tracep->declBit(c+82,"IDU_READY", false,-1);
    tracep->declBit(c+111,"wbu_done", false,-1);
    tracep->declBus(c+159,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+163,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+164,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+160,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+161,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+165,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+166,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+162,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+167,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+168,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+83,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+85,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+84,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+87,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+80,"ifu_ready", false,-1);
    tracep->declBit(c+81,"ifu_valid", false,-1);
    tracep->declBus(c+173,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+174,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+175,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+176,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+124,"current_state", false,-1, 1,0);
    tracep->declBus(c+153,"next_state", false,-1, 1,0);
    tracep->declBus(c+83,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+85,"axi_arvalid", false,-1);
    tracep->declBit(c+88,"axi_rready", false,-1);
    tracep->declBus(c+173,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+174,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+175,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+176,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+125,"state", false,-1, 1,0);
    tracep->declBit(c+126,"sram_start", false,-1);
    tracep->declBit(c+127,"sram_ifu_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+93,"sram_lsu_start", false,-1);
    tracep->declBit(c+65,"LSU_DONE", false,-1);
    tracep->declBus(c+16,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+94,"valid", false,-1);
    tracep->declBit(c+95,"wen", false,-1);
    tracep->declBus(c+96,"waddr", false,-1, 31,0);
    tracep->declBus(c+97,"wdata", false,-1, 31,0);
    tracep->declBus(c+98,"raddr", false,-1, 31,0);
    tracep->declBus(c+99,"wmask", false,-1, 7,0);
    tracep->declBus(c+66,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+70,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+106,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+67,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+69,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+71,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+107,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+17,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+108,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+72,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+68,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+73,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+109,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+16,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+169,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+110,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+74,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+179,"axi_araddr_reg", false,-1, 31,0);
    tracep->declBus(c+75,"axi_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+76,"axi_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+77,"axi_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+173,"IDLE", false,-1, 1,0);
    tracep->declBus(c+174,"READ", false,-1, 1,0);
    tracep->declBus(c+175,"WRITE", false,-1, 1,0);
    tracep->declBus(c+176,"DONE", false,-1, 1,0);
    tracep->declBus(c+78,"state", false,-1, 1,0);
    tracep->declBit(c+73,"axi_arvalid", false,-1);
    tracep->declBit(c+74,"axi_rready", false,-1);
    tracep->declBus(c+68,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+70,"axi_awvalid", false,-1);
    tracep->declBit(c+71,"axi_wvalid", false,-1);
    tracep->declBus(c+66,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+67,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+69,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+72,"axi_bready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+134,"pc", false,-1, 31,0);
    tracep->declBus(c+135,"dnpc", false,-1, 31,0);
    tracep->declBit(c+79,"PCU_VALID", false,-1);
    tracep->declBit(c+80,"IFU_READY", false,-1);
    tracep->declBit(c+79,"pcu_valid", false,-1);
    tracep->declBus(c+177,"IDLE", false,-1, 0,0);
    tracep->declBus(c+178,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+128,"state", false,-1);
    tracep->declBit(c+154,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+180,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+181,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBus(c+19,"wdata", false,-1, 31,0);
    tracep->declBus(c+20,"waddr", false,-1, 4,0);
    tracep->declBit(c+170,"wen", false,-1);
    tracep->declBus(c+3,"raddr1", false,-1, 4,0);
    tracep->declBus(c+21,"r1", false,-1, 31,0);
    tracep->declBus(c+4,"raddr2", false,-1, 4,0);
    tracep->declBus(c+112,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+22+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+159,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+163,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+164,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+160,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+161,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+165,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+166,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+162,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+167,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+168,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+83,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+85,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+86,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+84,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+87,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+88,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+84,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+129,"tmp", false,-1, 31,0);
    tracep->declBit(c+86,"axi_arready", false,-1);
    tracep->declBit(c+87,"axi_rvalid", false,-1);
    tracep->declBus(c+1,"axi_rresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+66,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+70,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+106,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+67,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+69,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+71,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+107,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+17,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+108,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+72,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+68,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+73,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+109,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+16,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+169,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+110,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+74,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+109,"axi_arready", false,-1);
    tracep->declBit(c+110,"axi_rvalid", false,-1);
    tracep->declBit(c+106,"axi_awready", false,-1);
    tracep->declBit(c+107,"axi_wready", false,-1);
    tracep->declBit(c+108,"axi_bvalid", false,-1);
    tracep->declBus(c+54,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+17,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+16,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+55,"s_wen", false,-1);
    tracep->declBus(c+155,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBit(c+8,"EXU_VALID", false,-1);
    tracep->declBit(c+9,"WBU_READY", false,-1);
    tracep->declBit(c+111,"wbu_done", false,-1);
    tracep->declBit(c+18,"difftest", false,-1);
    tracep->declBus(c+19,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+10,"res", false,-1, 31,0);
    tracep->declBus(c+16,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+20,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+182,"l_rd", false,-1, 4,0);
    tracep->declBit(c+15,"wen_reg", false,-1);
    tracep->declBit(c+156,"gpr_wen", false,-1);
    tracep->declBit(c+130,"l_wen", false,-1);
    tracep->declBus(c+101,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+100,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+171,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+172,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+101,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+100,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+171,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+172,"w_mtvec", false,-1, 31,0);
    tracep->declBus(c+56,"xrd", false,-1, 31,0);
    tracep->declBus(c+57,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+157,"o_rf_wen", false,-1);
    tracep->declBit(c+9,"wbu_ready", false,-1);
    tracep->declBus(c+173,"IDLE", false,-1, 1,0);
    tracep->declBus(c+174,"WRITE", false,-1, 1,0);
    tracep->declBus(c+175,"DIFF", false,-1, 1,0);
    tracep->declBus(c+176,"NULL", false,-1, 1,0);
    tracep->declBus(c+131,"state", false,-1, 1,0);
    tracep->declBus(c+158,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+181,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+183,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+101,"din", false,-1, 31,0);
    tracep->declBus(c+13,"dout", false,-1, 31,0);
    tracep->declBit(c+104,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+181,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+183,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+171,"din", false,-1, 31,0);
    tracep->declBus(c+11,"dout", false,-1, 31,0);
    tracep->declBit(c+102,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+181,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+184,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+172,"din", false,-1, 31,0);
    tracep->declBus(c+12,"dout", false,-1, 31,0);
    tracep->declBit(c+103,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+181,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+183,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+132,"clk", false,-1);
    tracep->declBit(c+133,"rst", false,-1);
    tracep->declBus(c+100,"din", false,-1, 31,0);
    tracep->declBus(c+14,"dout", false,-1, 31,0);
    tracep->declBit(c+105,"wen", false,-1);
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
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullBit(oldp+15,(vlSelf->top_ysyx_24110017__DOT__gpr_wen));
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullBit(oldp+18,(vlSelf->top_ysyx_24110017__DOT__difftest));
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__xrd),32);
    bufp->fullCData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__rf_addr),5);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+55,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    bufp->fullIData(oldp+56,((vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata 
                              | vlSelf->top_ysyx_24110017__DOT__res)),32);
    bufp->fullCData(oldp+57,(((IData)(vlSelf->top_ysyx_24110017__DOT__rf_wen) 
                              | (IData)(vlSelf->top_ysyx_24110017__DOT__rd))),5);
    bufp->fullBit(oldp+58,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+59,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+60,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+61,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+62,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+63,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+64,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                               & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
    bufp->fullBit(oldp+65,(vlSelf->top_ysyx_24110017__DOT__LSU_DONE));
    bufp->fullIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+69,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+70,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+71,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+72,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+73,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+74,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
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
    bufp->fullCData(oldp+92,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
    bufp->fullBit(oldp+93,(vlSelf->top_ysyx_24110017__DOT__sram_lsu_start));
    bufp->fullBit(oldp+94,(vlSelf->top_ysyx_24110017__DOT__ls_valid));
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
    bufp->fullCData(oldp+99,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                               ? 1U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                        & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                        ? 3U : (((0x23U 
                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                 & (2U 
                                                    == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                 ? 0xfU
                                                 : 0U)))),8);
    bufp->fullIData(oldp+100,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+101,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->fullBit(oldp+102,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+103,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+105,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullBit(oldp+106,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+107,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+108,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+109,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+110,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+111,(vlSelf->top_ysyx_24110017__DOT__wbu_done));
    bufp->fullIData(oldp+112,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullCData(oldp+113,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+114,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+115,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+116,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+117,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullBit(oldp+118,((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+119,((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+120,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+121,(((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
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
    bufp->fullIData(oldp+122,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm),32);
    bufp->fullBit(oldp+123,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+124,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+125,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+126,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+127,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullBit(oldp+128,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+129,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullBit(oldp+130,((1U & vlSelf->top_ysyx_24110017__DOT__o_mstatus)));
    bufp->fullCData(oldp+131,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state),2);
    bufp->fullBit(oldp+132,(vlSelf->clk));
    bufp->fullBit(oldp+133,(vlSelf->rst));
    bufp->fullIData(oldp+134,(vlSelf->pc),32);
    bufp->fullIData(oldp+135,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+136,(vlSelf->inst),32);
    bufp->fullBit(oldp+137,(vlSelf->DIFFTEST));
    bufp->fullIData(oldp+138,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->fullCData(oldp+139,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->fullCData(oldp+140,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+141,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+142,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+143,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+144,((0x1fU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+145,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+146,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+147,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+148,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+149,((((- (IData)((vlSelf->inst 
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
    bufp->fullCData(oldp+150,((((0x33U == (0x7fU & vlSelf->inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->inst)))
                                ? (vlSelf->inst >> 0x19U)
                                : 0U)),7);
    bufp->fullCData(oldp+151,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+152,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+153,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+154,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullIData(oldp+155,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
    bufp->fullBit(oldp+156,((1U & ((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                    ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__o_mstatus))));
    bufp->fullBit(oldp+157,((1U & (((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                     ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__o_mstatus) 
                                   | vlSelf->top_ysyx_24110017__DOT__o_mstatus))));
    bufp->fullCData(oldp+158,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->fullIData(oldp+159,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+160,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+161,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),4);
    bufp->fullCData(oldp+162,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BRESP),2);
    bufp->fullBit(oldp+163,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+164,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWREADY));
    bufp->fullBit(oldp+165,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+166,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WREADY));
    bufp->fullBit(oldp+167,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BVALID));
    bufp->fullBit(oldp+168,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullCData(oldp+169,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RRESP),2);
    bufp->fullBit(oldp+170,(vlSelf->top_ysyx_24110017__DOT__rf_wen));
    bufp->fullIData(oldp+171,(vlSelf->top_ysyx_24110017__DOT__w_mepc),32);
    bufp->fullIData(oldp+172,(vlSelf->top_ysyx_24110017__DOT__w_mstatus),32);
    bufp->fullCData(oldp+173,(0U),2);
    bufp->fullCData(oldp+174,(1U),2);
    bufp->fullCData(oldp+175,(2U),2);
    bufp->fullCData(oldp+176,(3U),2);
    bufp->fullBit(oldp+177,(0U));
    bufp->fullBit(oldp+178,(1U));
    bufp->fullIData(oldp+179,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr_reg),32);
    bufp->fullIData(oldp+180,(5U),32);
    bufp->fullIData(oldp+181,(0x20U),32);
    bufp->fullCData(oldp+182,(vlSelf->top_ysyx_24110017__DOT__rf_wen),5);
    bufp->fullIData(oldp+183,(0U),32);
    bufp->fullIData(oldp+184,(0x1800U),32);
}
