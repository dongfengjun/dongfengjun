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
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+148,"pc", false,-1, 31,0);
    tracep->declBus(c+149,"dnpc", false,-1, 31,0);
    tracep->declBus(c+150,"inst", false,-1, 31,0);
    tracep->declBit(c+151,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+148,"pc", false,-1, 31,0);
    tracep->declBus(c+149,"dnpc", false,-1, 31,0);
    tracep->declBus(c+150,"inst", false,-1, 31,0);
    tracep->declBit(c+151,"DIFFTEST", false,-1);
    tracep->declBit(c+89,"PCU_VALID", false,-1);
    tracep->declBit(c+90,"IFU_READY", false,-1);
    tracep->declBit(c+91,"IFU_VALID", false,-1);
    tracep->declBit(c+92,"IDU_READY", false,-1);
    tracep->declBus(c+169,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+170,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+93,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+94,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+171,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+172,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+6,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+173,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+174,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+175,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+176,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+177,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+178,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+95,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+96,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+97,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+98,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+99,"IDU_VALID", false,-1);
    tracep->declBit(c+100,"EXU_READY", false,-1);
    tracep->declBus(c+101,"op", false,-1, 6,0);
    tracep->declBus(c+102,"rd", false,-1, 4,0);
    tracep->declBus(c+103,"funct3", false,-1, 2,0);
    tracep->declBus(c+7,"rs1", false,-1, 4,0);
    tracep->declBus(c+8,"rs2", false,-1, 4,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+10,"funct7", false,-1, 6,0);
    tracep->declBus(c+11,"shamt", false,-1, 4,0);
    tracep->declBit(c+12,"EXU_VALID", false,-1);
    tracep->declBit(c+13,"WBU_READY", false,-1);
    tracep->declBus(c+14,"res", false,-1, 31,0);
    tracep->declBit(c+104,"ls_valid", false,-1);
    tracep->declBit(c+105,"ls_wen", false,-1);
    tracep->declBus(c+106,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+107,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+108,"ls_raddr", false,-1, 31,0);
    tracep->declBit(c+109,"lbdone", false,-1);
    tracep->declBit(c+110,"lhdone", false,-1);
    tracep->declBit(c+111,"lwdone", false,-1);
    tracep->declBit(c+112,"lbudone", false,-1);
    tracep->declBit(c+113,"lhudone", false,-1);
    tracep->declBus(c+114,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+15,"mepc", false,-1, 31,0);
    tracep->declBus(c+152,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+16,"mstatus", false,-1, 31,0);
    tracep->declBus(c+115,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+17,"mcause", false,-1, 31,0);
    tracep->declBus(c+116,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+18,"mtvec", false,-1, 31,0);
    tracep->declBus(c+115,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+19,"gpr_wen", false,-1);
    tracep->declBit(c+117,"mepc_wen", false,-1);
    tracep->declBit(c+118,"mstatus_wen", false,-1);
    tracep->declBit(c+119,"mcause_wen", false,-1);
    tracep->declBit(c+120,"mtvec_wen", false,-1);
    tracep->declBus(c+20,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+68,"l_wen", false,-1);
    tracep->declBus(c+69,"l_rd", false,-1, 4,0);
    tracep->declBit(c+70,"lb_w", false,-1);
    tracep->declBit(c+71,"lh_w", false,-1);
    tracep->declBit(c+72,"lw_w", false,-1);
    tracep->declBit(c+73,"lbu_w", false,-1);
    tracep->declBit(c+74,"lhu_w", false,-1);
    tracep->declBus(c+75,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+76,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+77,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+20,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+78,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+21,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+179,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+79,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+121,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+80,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+122,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+123,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+81,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+82,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+124,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+125,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+83,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+126,"wbu_done", false,-1);
    tracep->declBit(c+22,"difftest", false,-1);
    tracep->declBus(c+23,"xrd", false,-1, 31,0);
    tracep->declBus(c+24,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+25,"rf_wen", false,-1);
    tracep->declBus(c+152,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+115,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+116,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+115,"w_mtvec", false,-1, 31,0);
    tracep->declBus(c+26,"r1", false,-1, 31,0);
    tracep->declBus(c+127,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBit(c+99,"IDU_VALID", false,-1);
    tracep->declBit(c+100,"EXU_READY", false,-1);
    tracep->declBit(c+12,"EXU_VALID", false,-1);
    tracep->declBit(c+13,"WBU_READY", false,-1);
    tracep->declBus(c+101,"op", false,-1, 6,0);
    tracep->declBus(c+103,"funct3", false,-1, 2,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+10,"funct7", false,-1, 6,0);
    tracep->declBus(c+11,"shamt", false,-1, 4,0);
    tracep->declBus(c+26,"r1", false,-1, 31,0);
    tracep->declBus(c+127,"r2", false,-1, 31,0);
    tracep->declBus(c+14,"res_reg", false,-1, 31,0);
    tracep->declBit(c+104,"ls_valid", false,-1);
    tracep->declBit(c+105,"ls_wen", false,-1);
    tracep->declBus(c+106,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+107,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+108,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+114,"ls_wmask", false,-1, 7,0);
    tracep->declBit(c+109,"lbdone", false,-1);
    tracep->declBit(c+110,"lhdone", false,-1);
    tracep->declBit(c+111,"lwdone", false,-1);
    tracep->declBit(c+112,"lbudone", false,-1);
    tracep->declBit(c+113,"lhudone", false,-1);
    tracep->declBus(c+148,"pc", false,-1, 31,0);
    tracep->declBus(c+149,"dnpc", false,-1, 31,0);
    tracep->declBus(c+15,"mepc", false,-1, 31,0);
    tracep->declBus(c+16,"mstatus", false,-1, 31,0);
    tracep->declBus(c+17,"mcause", false,-1, 31,0);
    tracep->declBus(c+18,"mtvec", false,-1, 31,0);
    tracep->declBus(c+152,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+115,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+116,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+115,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+19,"gpr_wen_reg", false,-1);
    tracep->declBit(c+117,"mepc_wen", false,-1);
    tracep->declBit(c+118,"mstatus_wen", false,-1);
    tracep->declBit(c+119,"mcause_wen", false,-1);
    tracep->declBit(c+120,"mtvec_wen", false,-1);
    tracep->declBit(c+100,"exu_ready", false,-1);
    tracep->declBit(c+12,"exu_valid", false,-1);
    tracep->declBus(c+180,"IDLE", false,-1, 0,0);
    tracep->declBus(c+181,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+128,"state", false,-1);
    tracep->declBit(c+1,"next_state", false,-1);
    tracep->declBus(c+129,"a", false,-1, 31,0);
    tracep->declBus(c+130,"b", false,-1, 31,0);
    tracep->declBus(c+131,"res", false,-1, 31,0);
    tracep->declBus(c+132,"csr", false,-1, 31,0);
    tracep->declBus(c+115,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+9,"offset", false,-1, 31,0);
    tracep->declBit(c+133,"jalen", false,-1);
    tracep->declBit(c+134,"jalren", false,-1);
    tracep->declBit(c+61,"beqen", false,-1);
    tracep->declBit(c+62,"bneen", false,-1);
    tracep->declBit(c+63,"blten", false,-1);
    tracep->declBit(c+64,"bgeen", false,-1);
    tracep->declBit(c+65,"bltuen", false,-1);
    tracep->declBit(c+66,"bgeuen", false,-1);
    tracep->declBit(c+135,"ecall_en", false,-1);
    tracep->declBit(c+67,"mret_en", false,-1);
    tracep->declBit(c+136,"gpr_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+150,"inst", false,-1, 31,0);
    tracep->declBit(c+91,"IFU_VALID", false,-1);
    tracep->declBit(c+92,"IDU_READY", false,-1);
    tracep->declBit(c+99,"IDU_VALID", false,-1);
    tracep->declBit(c+100,"EXU_READY", false,-1);
    tracep->declBus(c+101,"op_reg", false,-1, 6,0);
    tracep->declBus(c+102,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+103,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+7,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+8,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+9,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+10,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+11,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+153,"op", false,-1, 6,0);
    tracep->declBus(c+154,"rd", false,-1, 4,0);
    tracep->declBus(c+155,"funct3", false,-1, 2,0);
    tracep->declBus(c+156,"rs1", false,-1, 4,0);
    tracep->declBus(c+157,"rs2", false,-1, 4,0);
    tracep->declBus(c+158,"immI", false,-1, 31,0);
    tracep->declBus(c+159,"immU", false,-1, 31,0);
    tracep->declBus(c+160,"immS", false,-1, 31,0);
    tracep->declBus(c+161,"immB", false,-1, 31,0);
    tracep->declBus(c+162,"immJ", false,-1, 31,0);
    tracep->declBus(c+137,"imm", false,-1, 31,0);
    tracep->declBus(c+163,"funct7", false,-1, 6,0);
    tracep->declBus(c+164,"shamt", false,-1, 4,0);
    tracep->declBit(c+92,"idu_ready", false,-1);
    tracep->declBit(c+99,"idu_valid", false,-1);
    tracep->declBus(c+180,"IDLE", false,-1, 0,0);
    tracep->declBus(c+181,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+138,"state", false,-1);
    tracep->declBit(c+2,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+148,"pc", false,-1, 31,0);
    tracep->declBus(c+150,"inst", false,-1, 31,0);
    tracep->declBit(c+89,"PCU_VALID", false,-1);
    tracep->declBit(c+90,"IFU_READY", false,-1);
    tracep->declBit(c+91,"IFU_VALID", false,-1);
    tracep->declBit(c+92,"IDU_READY", false,-1);
    tracep->declBit(c+126,"wbu_done", false,-1);
    tracep->declBus(c+169,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+173,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+174,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+170,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+171,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+175,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+176,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+172,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+177,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+178,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+93,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+95,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+96,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+94,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+6,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+97,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+98,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+90,"ifu_ready", false,-1);
    tracep->declBit(c+91,"ifu_valid", false,-1);
    tracep->declBus(c+182,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+183,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+184,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+185,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+139,"current_state", false,-1, 1,0);
    tracep->declBus(c+3,"next_state", false,-1, 1,0);
    tracep->declBus(c+93,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+95,"axi_arvalid", false,-1);
    tracep->declBit(c+98,"axi_rready", false,-1);
    tracep->declBus(c+182,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+183,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+184,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+185,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+140,"state", false,-1, 1,0);
    tracep->declBit(c+141,"sram_start", false,-1);
    tracep->declBit(c+142,"sram_ifu_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+20,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+69,"l_rd", false,-1, 4,0);
    tracep->declBus(c+102,"rd", false,-1, 4,0);
    tracep->declBit(c+68,"l_wen", false,-1);
    tracep->declBit(c+109,"lbdone", false,-1);
    tracep->declBit(c+110,"lhdone", false,-1);
    tracep->declBit(c+111,"lwdone", false,-1);
    tracep->declBit(c+112,"lbudone", false,-1);
    tracep->declBit(c+113,"lhudone", false,-1);
    tracep->declBit(c+70,"lb_w", false,-1);
    tracep->declBit(c+71,"lh_w", false,-1);
    tracep->declBit(c+72,"lw_w", false,-1);
    tracep->declBit(c+73,"lbu_w", false,-1);
    tracep->declBit(c+74,"lhu_w", false,-1);
    tracep->declBit(c+104,"valid", false,-1);
    tracep->declBit(c+105,"wen", false,-1);
    tracep->declBus(c+106,"waddr", false,-1, 31,0);
    tracep->declBus(c+107,"wdata", false,-1, 31,0);
    tracep->declBus(c+108,"raddr", false,-1, 31,0);
    tracep->declBus(c+114,"wmask", false,-1, 7,0);
    tracep->declBus(c+75,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+79,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+121,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+76,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+78,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+80,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+122,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+21,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+123,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+81,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+77,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+82,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+124,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+20,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+179,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+125,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+83,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+84,"axi_araddr_reg", false,-1, 31,0);
    tracep->declBus(c+85,"axi_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+86,"axi_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+87,"axi_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+182,"IDLE", false,-1, 1,0);
    tracep->declBus(c+183,"READ", false,-1, 1,0);
    tracep->declBus(c+184,"WRITE", false,-1, 1,0);
    tracep->declBus(c+185,"DONE", false,-1, 1,0);
    tracep->declBus(c+88,"state", false,-1, 1,0);
    tracep->declBit(c+82,"axi_arvalid", false,-1);
    tracep->declBit(c+83,"axi_rready", false,-1);
    tracep->declBus(c+77,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+79,"axi_awvalid", false,-1);
    tracep->declBit(c+80,"axi_wvalid", false,-1);
    tracep->declBus(c+75,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+76,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+81,"axi_bready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+148,"pc", false,-1, 31,0);
    tracep->declBus(c+149,"dnpc", false,-1, 31,0);
    tracep->declBit(c+89,"PCU_VALID", false,-1);
    tracep->declBit(c+90,"IFU_READY", false,-1);
    tracep->declBit(c+89,"pcu_valid", false,-1);
    tracep->declBus(c+180,"IDLE", false,-1, 0,0);
    tracep->declBus(c+181,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+143,"state", false,-1);
    tracep->declBit(c+4,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+186,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+187,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBus(c+23,"wdata", false,-1, 31,0);
    tracep->declBus(c+24,"waddr", false,-1, 4,0);
    tracep->declBit(c+25,"wen", false,-1);
    tracep->declBus(c+7,"raddr1", false,-1, 4,0);
    tracep->declBus(c+26,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"raddr2", false,-1, 4,0);
    tracep->declBus(c+127,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+27+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_IFU_ysyx_24110017 ");
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+169,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+173,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+174,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+170,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+171,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+175,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+176,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+172,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+177,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+178,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+93,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+95,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+96,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+94,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+6,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+97,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+98,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+94,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+144,"tmp", false,-1, 31,0);
    tracep->declBit(c+96,"axi_arready", false,-1);
    tracep->declBit(c+97,"axi_rvalid", false,-1);
    tracep->declBus(c+6,"axi_rresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+75,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+79,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+121,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+76,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+78,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+80,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+122,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+21,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+123,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+81,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+77,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+82,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+124,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+20,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+179,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+125,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+83,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+124,"axi_arready", false,-1);
    tracep->declBit(c+125,"axi_rvalid", false,-1);
    tracep->declBit(c+121,"axi_awready", false,-1);
    tracep->declBit(c+122,"axi_wready", false,-1);
    tracep->declBit(c+123,"axi_bvalid", false,-1);
    tracep->declBus(c+59,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+21,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+20,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+60,"s_wen", false,-1);
    tracep->declBus(c+165,"s_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBit(c+12,"EXU_VALID", false,-1);
    tracep->declBit(c+13,"WBU_READY", false,-1);
    tracep->declBit(c+126,"wbu_done", false,-1);
    tracep->declBit(c+22,"difftest", false,-1);
    tracep->declBus(c+23,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+14,"res", false,-1, 31,0);
    tracep->declBus(c+20,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+70,"lb_w", false,-1);
    tracep->declBit(c+71,"lh_w", false,-1);
    tracep->declBit(c+72,"lw_w", false,-1);
    tracep->declBit(c+73,"lbu_w", false,-1);
    tracep->declBit(c+74,"lhu_w", false,-1);
    tracep->declBus(c+24,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+102,"rd", false,-1, 4,0);
    tracep->declBus(c+69,"l_rd", false,-1, 4,0);
    tracep->declBit(c+25,"wen_reg", false,-1);
    tracep->declBit(c+19,"gpr_wen", false,-1);
    tracep->declBit(c+68,"l_wen", false,-1);
    tracep->declBus(c+152,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+115,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+116,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+115,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+152,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+115,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+116,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+115,"w_mtvec", false,-1, 31,0);
    tracep->declBus(c+166,"xrd", false,-1, 31,0);
    tracep->declBus(c+167,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+168,"o_rf_wen", false,-1);
    tracep->declBit(c+13,"wbu_ready", false,-1);
    tracep->declBus(c+182,"IDLE", false,-1, 1,0);
    tracep->declBus(c+183,"WRITE", false,-1, 1,0);
    tracep->declBus(c+184,"DIFF", false,-1, 1,0);
    tracep->declBus(c+185,"NULL", false,-1, 1,0);
    tracep->declBus(c+145,"state", false,-1, 1,0);
    tracep->declBus(c+5,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+187,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+188,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+116,"din", false,-1, 31,0);
    tracep->declBus(c+17,"dout", false,-1, 31,0);
    tracep->declBit(c+119,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+187,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+188,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+152,"din", false,-1, 31,0);
    tracep->declBus(c+15,"dout", false,-1, 31,0);
    tracep->declBit(c+117,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+187,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+189,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+115,"din", false,-1, 31,0);
    tracep->declBus(c+16,"dout", false,-1, 31,0);
    tracep->declBit(c+118,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+187,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+188,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+146,"clk", false,-1);
    tracep->declBit(c+147,"rst", false,-1);
    tracep->declBus(c+115,"din", false,-1, 31,0);
    tracep->declBus(c+18,"dout", false,-1, 31,0);
    tracep->declBit(c+120,"wen", false,-1);
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
    bufp->fullBit(oldp+1,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state));
    bufp->fullBit(oldp+2,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+4,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullCData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullCData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__shamt),5);
    bufp->fullBit(oldp+12,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+13,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullBit(oldp+19,(vlSelf->top_ysyx_24110017__DOT__gpr_wen));
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullBit(oldp+22,(vlSelf->top_ysyx_24110017__DOT__difftest));
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__xrd),32);
    bufp->fullCData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__rf_addr),5);
    bufp->fullBit(oldp+25,(vlSelf->top_ysyx_24110017__DOT__rf_wen));
    bufp->fullIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+60,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen));
    bufp->fullBit(oldp+61,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+62,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+63,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+64,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+65,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+66,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+67,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                               & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
    bufp->fullBit(oldp+68,(vlSelf->top_ysyx_24110017__DOT__l_wen));
    bufp->fullCData(oldp+69,(vlSelf->top_ysyx_24110017__DOT__l_rd),5);
    bufp->fullBit(oldp+70,(vlSelf->top_ysyx_24110017__DOT__lb_w));
    bufp->fullBit(oldp+71,(vlSelf->top_ysyx_24110017__DOT__lh_w));
    bufp->fullBit(oldp+72,(vlSelf->top_ysyx_24110017__DOT__lw_w));
    bufp->fullBit(oldp+73,(vlSelf->top_ysyx_24110017__DOT__lbu_w));
    bufp->fullBit(oldp+74,(vlSelf->top_ysyx_24110017__DOT__lhu_w));
    bufp->fullIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+77,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+78,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+79,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+80,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+81,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+82,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+83,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+84,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr_reg),32);
    bufp->fullIData(oldp+85,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr_reg),32);
    bufp->fullIData(oldp+86,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata_reg),32);
    bufp->fullCData(oldp+87,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb_reg),8);
    bufp->fullCData(oldp+88,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+89,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+90,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_ready));
    bufp->fullBit(oldp+91,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+92,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+93,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullIData(oldp+94,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullBit(oldp+95,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+96,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+97,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+98,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+99,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+100,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+101,(vlSelf->top_ysyx_24110017__DOT__op),7);
    bufp->fullCData(oldp+102,(vlSelf->top_ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+103,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
    bufp->fullBit(oldp+104,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             | (0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))));
    bufp->fullBit(oldp+105,((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullIData(oldp+106,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+107,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+108,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullBit(oldp+109,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    bufp->fullBit(oldp+110,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    bufp->fullBit(oldp+111,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & (2U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    bufp->fullBit(oldp+112,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & (4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    bufp->fullBit(oldp+113,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                             & (5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))));
    bufp->fullCData(oldp+114,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),8);
    bufp->fullIData(oldp+115,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+116,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->fullBit(oldp+117,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+118,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+120,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullBit(oldp+121,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+122,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+123,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+124,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+125,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+126,(vlSelf->top_ysyx_24110017__DOT__wbu_done));
    bufp->fullIData(oldp+127,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullBit(oldp+128,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+129,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+130,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+131,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+132,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
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
                                               | (0x33U 
                                                  == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))))))))));
    bufp->fullIData(oldp+137,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm),32);
    bufp->fullBit(oldp+138,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+139,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+140,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+141,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+142,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullBit(oldp+143,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+144,(vlSelf->top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp),32);
    bufp->fullCData(oldp+145,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state),2);
    bufp->fullBit(oldp+146,(vlSelf->clk));
    bufp->fullBit(oldp+147,(vlSelf->rst));
    bufp->fullIData(oldp+148,(vlSelf->pc),32);
    bufp->fullIData(oldp+149,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+150,(vlSelf->inst),32);
    bufp->fullBit(oldp+151,(vlSelf->DIFFTEST));
    bufp->fullIData(oldp+152,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__o_mstatus)),32);
    bufp->fullCData(oldp+153,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+154,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+155,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+156,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+157,((0x1fU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+158,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+159,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+160,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+161,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+162,((((- (IData)((vlSelf->inst 
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
    bufp->fullCData(oldp+163,((((0x33U == (0x7fU & vlSelf->inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->inst)))
                                ? (vlSelf->inst >> 0x19U)
                                : 0U)),7);
    bufp->fullCData(oldp+164,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+165,(vlSelf->top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata),32);
    bufp->fullIData(oldp+166,((vlSelf->top_ysyx_24110017__DOT__res 
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
    bufp->fullCData(oldp+167,(((IData)(vlSelf->top_ysyx_24110017__DOT__l_rd) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__rd))),5);
    bufp->fullBit(oldp+168,(((IData)(vlSelf->top_ysyx_24110017__DOT__gpr_wen) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__l_wen))));
    bufp->fullIData(oldp+169,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+170,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+171,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),4);
    bufp->fullCData(oldp+172,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BRESP),2);
    bufp->fullBit(oldp+173,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+174,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWREADY));
    bufp->fullBit(oldp+175,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+176,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WREADY));
    bufp->fullBit(oldp+177,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BVALID));
    bufp->fullBit(oldp+178,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullCData(oldp+179,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RRESP),2);
    bufp->fullBit(oldp+180,(0U));
    bufp->fullBit(oldp+181,(1U));
    bufp->fullCData(oldp+182,(0U),2);
    bufp->fullCData(oldp+183,(1U),2);
    bufp->fullCData(oldp+184,(2U),2);
    bufp->fullCData(oldp+185,(3U),2);
    bufp->fullIData(oldp+186,(5U),32);
    bufp->fullIData(oldp+187,(0x20U),32);
    bufp->fullIData(oldp+188,(0U),32);
    bufp->fullIData(oldp+189,(0x1800U),32);
}
