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
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+178,"pc", false,-1, 31,0);
    tracep->declBus(c+179,"dnpc", false,-1, 31,0);
    tracep->declBus(c+180,"inst", false,-1, 31,0);
    tracep->declBit(c+181,"DIFFTEST", false,-1);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+178,"pc", false,-1, 31,0);
    tracep->declBus(c+179,"dnpc", false,-1, 31,0);
    tracep->declBus(c+180,"inst", false,-1, 31,0);
    tracep->declBit(c+181,"DIFFTEST", false,-1);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+111,"IFU_VALID", false,-1);
    tracep->declBit(c+112,"IDU_READY", false,-1);
    tracep->declBus(c+207,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+208,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+3,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+113,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+209,"IFU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+85,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+114,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+210,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+86,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+211,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+115,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+87,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+212,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+4,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+116,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+117,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+5,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+118,"IDU_VALID", false,-1);
    tracep->declBit(c+119,"EXU_READY", false,-1);
    tracep->declBus(c+120,"op", false,-1, 6,0);
    tracep->declBus(c+6,"rd", false,-1, 4,0);
    tracep->declBus(c+121,"funct3", false,-1, 2,0);
    tracep->declBus(c+7,"rs1", false,-1, 4,0);
    tracep->declBus(c+8,"rs2", false,-1, 4,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+10,"funct7", false,-1, 6,0);
    tracep->declBus(c+11,"shamt", false,-1, 4,0);
    tracep->declBit(c+122,"sram_lsu_read", false,-1);
    tracep->declBit(c+123,"sram_lsu_write", false,-1);
    tracep->declBit(c+182,"LSU_DONE", false,-1);
    tracep->declBit(c+12,"EXU_VALID", false,-1);
    tracep->declBit(c+13,"WBU_READY", false,-1);
    tracep->declBus(c+14,"res", false,-1, 31,0);
    tracep->declBit(c+124,"ls_valid", false,-1);
    tracep->declBit(c+125,"ls_wen", false,-1);
    tracep->declBus(c+126,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+127,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+128,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+129,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+15,"mepc", false,-1, 31,0);
    tracep->declBus(c+16,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+17,"mstatus", false,-1, 31,0);
    tracep->declBus(c+18,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+19,"mcause", false,-1, 31,0);
    tracep->declBus(c+20,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+21,"mtvec", false,-1, 31,0);
    tracep->declBus(c+22,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+23,"gpr_wen", false,-1);
    tracep->declBit(c+24,"mepc_wen", false,-1);
    tracep->declBit(c+25,"mstatus_wen", false,-1);
    tracep->declBit(c+26,"mcause_wen", false,-1);
    tracep->declBit(c+27,"mtvec_wen", false,-1);
    tracep->declBus(c+130,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+96,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+97,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+98,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+130,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+99,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+88,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+131,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+100,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+132,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+101,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+133,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+134,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+102,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+103,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+135,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+136,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+104,"LSU_AXI_RREADY", false,-1);
    tracep->declBus(c+183,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+184,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+169,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+137,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+185,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBus(c+28,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+213,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+170,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+29,"S_AXI_AWREADY", false,-1);
    tracep->declBit(c+171,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+138,"S_AXI_WREADY", false,-1);
    tracep->declBit(c+30,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+172,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+173,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+139,"S_AXI_ARREADY", false,-1);
    tracep->declBit(c+140,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+174,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+31,"wbu_done", false,-1);
    tracep->declBit(c+32,"difftest", false,-1);
    tracep->declBus(c+33,"xrd", false,-1, 31,0);
    tracep->declBus(c+34,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+35,"rf_wen", false,-1);
    tracep->declBus(c+36,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+37,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+38,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+39,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+40,"mepc_en", false,-1);
    tracep->declBit(c+41,"mstatus_en", false,-1);
    tracep->declBit(c+42,"mcause_en", false,-1);
    tracep->declBit(c+43,"mtvec_en", false,-1);
    tracep->declBus(c+44,"r1", false,-1, 31,0);
    tracep->declBus(c+141,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("Arbiter_ysyx_24110017 ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+207,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+210,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+86,"IFU_AXI_AWREADY", false,-1);
    tracep->declBus(c+208,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+209,"IFU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+211,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+115,"IFU_AXI_WREADY", false,-1);
    tracep->declBus(c+85,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+87,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+212,"IFU_AXI_BREADY", false,-1);
    tracep->declBus(c+3,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+4,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+116,"IFU_AXI_ARREADY", false,-1);
    tracep->declBus(c+113,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+114,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+117,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+5,"IFU_AXI_RREADY", false,-1);
    tracep->declBus(c+96,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+100,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+132,"LSU_AXI_AWREADY", false,-1);
    tracep->declBus(c+97,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+99,"LSU_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+101,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+133,"LSU_AXI_WREADY", false,-1);
    tracep->declBus(c+88,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+134,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+102,"LSU_AXI_BREADY", false,-1);
    tracep->declBus(c+98,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+103,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+135,"LSU_AXI_ARREADY", false,-1);
    tracep->declBus(c+130,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+131,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+136,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+104,"LSU_AXI_RREADY", false,-1);
    tracep->declBus(c+183,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+170,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+29,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+184,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+185,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+171,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+138,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+28,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+30,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+172,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+169,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+173,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+139,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+137,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+213,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+140,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+174,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+214,"IDLE", false,-1, 1,0);
    tracep->declBus(c+215,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+216,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+142,"state", false,-1, 1,0);
    tracep->declBus(c+186,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBit(c+122,"sram_lsu_read", false,-1);
    tracep->declBit(c+123,"sram_lsu_write", false,-1);
    tracep->declBit(c+182,"LSU_DONE", false,-1);
    tracep->declBit(c+118,"IDU_VALID", false,-1);
    tracep->declBit(c+119,"EXU_READY", false,-1);
    tracep->declBit(c+12,"EXU_VALID", false,-1);
    tracep->declBit(c+13,"WBU_READY", false,-1);
    tracep->declBus(c+120,"op", false,-1, 6,0);
    tracep->declBus(c+121,"funct3", false,-1, 2,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+10,"funct7", false,-1, 6,0);
    tracep->declBus(c+11,"shamt", false,-1, 4,0);
    tracep->declBus(c+44,"r1", false,-1, 31,0);
    tracep->declBus(c+141,"r2", false,-1, 31,0);
    tracep->declBus(c+14,"res_reg", false,-1, 31,0);
    tracep->declBit(c+124,"ls_valid", false,-1);
    tracep->declBit(c+125,"ls_wen", false,-1);
    tracep->declBus(c+126,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+127,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+128,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+129,"ls_wmask", false,-1, 7,0);
    tracep->declBus(c+130,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+178,"pc", false,-1, 31,0);
    tracep->declBus(c+179,"dnpc", false,-1, 31,0);
    tracep->declBus(c+15,"mepc", false,-1, 31,0);
    tracep->declBus(c+17,"mstatus", false,-1, 31,0);
    tracep->declBus(c+19,"mcause", false,-1, 31,0);
    tracep->declBus(c+21,"mtvec", false,-1, 31,0);
    tracep->declBus(c+16,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+18,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+20,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+22,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+23,"gpr_wen_reg", false,-1);
    tracep->declBit(c+24,"mepc_wen_reg", false,-1);
    tracep->declBit(c+25,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+26,"mcause_wen_reg", false,-1);
    tracep->declBit(c+27,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+119,"exu_ready", false,-1);
    tracep->declBit(c+12,"exu_valid", false,-1);
    tracep->declBus(c+214,"IDLE", false,-1, 1,0);
    tracep->declBus(c+215,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+216,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+217,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+143,"state", false,-1, 1,0);
    tracep->declBus(c+187,"next_state", false,-1, 1,0);
    tracep->declBus(c+144,"a", false,-1, 31,0);
    tracep->declBus(c+145,"b", false,-1, 31,0);
    tracep->declBus(c+146,"res", false,-1, 31,0);
    tracep->declBus(c+147,"csr", false,-1, 31,0);
    tracep->declBus(c+148,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+188,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+148,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+149,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+148,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+9,"offset", false,-1, 31,0);
    tracep->declBit(c+150,"jalen", false,-1);
    tracep->declBit(c+151,"jalren", false,-1);
    tracep->declBit(c+89,"beqen", false,-1);
    tracep->declBit(c+90,"bneen", false,-1);
    tracep->declBit(c+91,"blten", false,-1);
    tracep->declBit(c+92,"bgeen", false,-1);
    tracep->declBit(c+93,"bltuen", false,-1);
    tracep->declBit(c+94,"bgeuen", false,-1);
    tracep->declBit(c+152,"ecall_en", false,-1);
    tracep->declBit(c+95,"mret_en", false,-1);
    tracep->declBit(c+153,"gpr_wen", false,-1);
    tracep->declBit(c+154,"mepc_wen", false,-1);
    tracep->declBit(c+155,"mstatus_wen", false,-1);
    tracep->declBit(c+156,"mcause_wen", false,-1);
    tracep->declBit(c+157,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+180,"inst", false,-1, 31,0);
    tracep->declBit(c+111,"IFU_VALID", false,-1);
    tracep->declBit(c+112,"IDU_READY", false,-1);
    tracep->declBit(c+118,"IDU_VALID", false,-1);
    tracep->declBit(c+119,"EXU_READY", false,-1);
    tracep->declBus(c+120,"op_reg", false,-1, 6,0);
    tracep->declBus(c+6,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+121,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+7,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+8,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+9,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+10,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+11,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+189,"op", false,-1, 6,0);
    tracep->declBus(c+190,"rd", false,-1, 4,0);
    tracep->declBus(c+191,"funct3", false,-1, 2,0);
    tracep->declBus(c+192,"rs1", false,-1, 4,0);
    tracep->declBus(c+193,"rs2", false,-1, 4,0);
    tracep->declBus(c+194,"immI", false,-1, 31,0);
    tracep->declBus(c+195,"immU", false,-1, 31,0);
    tracep->declBus(c+196,"immS", false,-1, 31,0);
    tracep->declBus(c+197,"immB", false,-1, 31,0);
    tracep->declBus(c+198,"immJ", false,-1, 31,0);
    tracep->declBus(c+158,"imm", false,-1, 31,0);
    tracep->declBus(c+199,"funct7", false,-1, 6,0);
    tracep->declBus(c+200,"shamt", false,-1, 4,0);
    tracep->declBit(c+112,"idu_ready", false,-1);
    tracep->declBit(c+118,"idu_valid", false,-1);
    tracep->declBus(c+218,"IDLE", false,-1, 0,0);
    tracep->declBus(c+219,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+159,"state", false,-1);
    tracep->declBit(c+201,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+178,"pc", false,-1, 31,0);
    tracep->declBus(c+180,"inst", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+111,"IFU_VALID", false,-1);
    tracep->declBit(c+112,"IDU_READY", false,-1);
    tracep->declBit(c+31,"wbu_done", false,-1);
    tracep->declBus(c+207,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+210,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+86,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+208,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+209,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+211,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+115,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+85,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+87,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+212,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+3,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+4,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+116,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+113,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+114,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+117,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+5,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+2,"ifu_ready", false,-1);
    tracep->declBit(c+111,"ifu_valid", false,-1);
    tracep->declBus(c+214,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+215,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+216,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+217,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+160,"current_state", false,-1, 1,0);
    tracep->declBus(c+202,"next_state", false,-1, 1,0);
    tracep->declBus(c+3,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"axi_arvalid", false,-1);
    tracep->declBit(c+5,"axi_rready", false,-1);
    tracep->declBus(c+214,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+215,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+216,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+217,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+45,"state", false,-1, 1,0);
    tracep->declBit(c+46,"sram_start", false,-1);
    tracep->declBit(c+47,"sram_ifu_done", false,-1);
    tracep->declBus(c+105,"rand_delay", false,-1, 7,0);
    tracep->declBus(c+48,"delay_counter", false,-1, 7,0);
    tracep->pushNamePrefix("lfsr_ysyx_20110017 ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+105,"rand_out", false,-1, 7,0);
    tracep->declBit(c+106,"feedback", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBit(c+122,"sram_lsu_read", false,-1);
    tracep->declBit(c+123,"sram_lsu_write", false,-1);
    tracep->declBit(c+182,"LSU_DONE", false,-1);
    tracep->declBus(c+130,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+124,"valid", false,-1);
    tracep->declBit(c+125,"wen", false,-1);
    tracep->declBus(c+126,"waddr", false,-1, 31,0);
    tracep->declBus(c+127,"wdata", false,-1, 31,0);
    tracep->declBus(c+128,"raddr", false,-1, 31,0);
    tracep->declBus(c+129,"wmask", false,-1, 7,0);
    tracep->declBus(c+96,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+100,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+132,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+97,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+99,"M_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+101,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+133,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+88,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+134,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+102,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+98,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+103,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+135,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+130,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+131,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+136,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+104,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+105,"rand_delay", false,-1, 7,0);
    tracep->declBus(c+107,"delay_counter", false,-1, 7,0);
    tracep->declBus(c+108,"avalid_delay_counter", false,-1, 7,0);
    tracep->declBus(c+109,"wvalid_delay_counter", false,-1, 7,0);
    tracep->declBus(c+214,"IDLE", false,-1, 1,0);
    tracep->declBus(c+215,"READ", false,-1, 1,0);
    tracep->declBus(c+216,"WRITE", false,-1, 1,0);
    tracep->declBus(c+217,"DONE", false,-1, 1,0);
    tracep->declBus(c+110,"state", false,-1, 1,0);
    tracep->declBit(c+103,"axi_arvalid", false,-1);
    tracep->declBit(c+104,"axi_rready", false,-1);
    tracep->declBus(c+98,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+100,"axi_awvalid", false,-1);
    tracep->declBit(c+101,"axi_wvalid", false,-1);
    tracep->declBus(c+96,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+97,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+99,"axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+102,"axi_bready", false,-1);
    tracep->pushNamePrefix("lfsr_ysyx_20110017 ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+105,"rand_out", false,-1, 7,0);
    tracep->declBit(c+106,"feedback", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+178,"pc", false,-1, 31,0);
    tracep->declBus(c+179,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1,"PCU_VALID", false,-1);
    tracep->declBit(c+2,"IFU_READY", false,-1);
    tracep->declBit(c+1,"pcu_valid", false,-1);
    tracep->declBus(c+218,"IDLE", false,-1, 0,0);
    tracep->declBus(c+219,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+49,"state", false,-1);
    tracep->declBit(c+203,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+220,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+221,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBus(c+33,"wdata", false,-1, 31,0);
    tracep->declBus(c+34,"waddr", false,-1, 4,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->declBus(c+7,"raddr1", false,-1, 4,0);
    tracep->declBus(c+44,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"raddr2", false,-1, 4,0);
    tracep->declBus(c+141,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+50+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_ysyx_24110017 ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+183,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+170,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+29,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+184,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+185,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+171,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+138,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+28,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+30,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+172,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+169,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+173,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+139,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+137,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+213,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+140,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+174,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+139,"axi_arready", false,-1);
    tracep->declBit(c+140,"axi_rvalid", false,-1);
    tracep->declBit(c+29,"axi_awready", false,-1);
    tracep->declBit(c+138,"axi_wready", false,-1);
    tracep->declBit(c+30,"axi_bvalid", false,-1);
    tracep->declBus(c+82,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+28,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+137,"axi_rdata", false,-1, 31,0);
    tracep->declBit(c+83,"s_wen", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+161+i*1,"sta_rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+204,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+205,"waddr", false,-1, 3,0);
    tracep->declBus(c+175,"raddr", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBit(c+12,"EXU_VALID", false,-1);
    tracep->declBit(c+13,"WBU_READY", false,-1);
    tracep->declBit(c+31,"wbu_done", false,-1);
    tracep->declBit(c+32,"difftest", false,-1);
    tracep->declBus(c+33,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+14,"res", false,-1, 31,0);
    tracep->declBus(c+34,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+6,"rd", false,-1, 4,0);
    tracep->declBit(c+35,"wen_reg", false,-1);
    tracep->declBit(c+23,"gpr_wen", false,-1);
    tracep->declBus(c+16,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+18,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+20,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+22,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+36,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+37,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+38,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+39,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+24,"mepc_wen", false,-1);
    tracep->declBit(c+25,"mstatus_wen", false,-1);
    tracep->declBit(c+26,"mcause_wen", false,-1);
    tracep->declBit(c+27,"mtvec_wen", false,-1);
    tracep->declBit(c+40,"mepc_wen_reg", false,-1);
    tracep->declBit(c+41,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+42,"mcause_wen_reg", false,-1);
    tracep->declBit(c+43,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+14,"xrd", false,-1, 31,0);
    tracep->declBus(c+6,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+23,"o_rf_wen", false,-1);
    tracep->declBus(c+16,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+18,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+20,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+22,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+13,"wbu_ready", false,-1);
    tracep->declBus(c+214,"IDLE", false,-1, 1,0);
    tracep->declBus(c+215,"WRITE", false,-1, 1,0);
    tracep->declBus(c+216,"DIFF", false,-1, 1,0);
    tracep->declBus(c+217,"NULL", false,-1, 1,0);
    tracep->declBus(c+84,"state", false,-1, 1,0);
    tracep->declBus(c+206,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+221,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+222,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+38,"din", false,-1, 31,0);
    tracep->declBus(c+19,"dout", false,-1, 31,0);
    tracep->declBit(c+42,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+221,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+222,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+36,"din", false,-1, 31,0);
    tracep->declBus(c+15,"dout", false,-1, 31,0);
    tracep->declBit(c+40,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+221,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+223,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+37,"din", false,-1, 31,0);
    tracep->declBus(c+17,"dout", false,-1, 31,0);
    tracep->declBit(c+41,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+221,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+222,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+176,"clk", false,-1);
    tracep->declBit(c+177,"rst", false,-1);
    tracep->declBus(c+39,"din", false,-1, 31,0);
    tracep->declBus(c+21,"dout", false,-1, 31,0);
    tracep->declBit(c+43,"wen", false,-1);
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
    bufp->fullIData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+4,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+5,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__axi_rready));
    bufp->fullCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__rd),5);
    bufp->fullCData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullCData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullCData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__shamt),5);
    bufp->fullBit(oldp+12,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+13,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__o_mepc),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__o_mstatus),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__o_mcause),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__o_mtvec),32);
    bufp->fullBit(oldp+23,(vlSelf->top_ysyx_24110017__DOT__gpr_wen));
    bufp->fullBit(oldp+24,(vlSelf->top_ysyx_24110017__DOT__mepc_wen));
    bufp->fullBit(oldp+25,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+26,(vlSelf->top_ysyx_24110017__DOT__mcause_wen));
    bufp->fullBit(oldp+27,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullCData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullBit(oldp+29,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+30,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+31,(vlSelf->top_ysyx_24110017__DOT__wbu_done));
    bufp->fullBit(oldp+32,(vlSelf->top_ysyx_24110017__DOT__difftest));
    bufp->fullIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__xrd),32);
    bufp->fullCData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__rf_addr),5);
    bufp->fullBit(oldp+35,(vlSelf->top_ysyx_24110017__DOT__rf_wen));
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__w_mepc),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__w_mstatus),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__w_mcause),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__w_mtvec),32);
    bufp->fullBit(oldp+40,(vlSelf->top_ysyx_24110017__DOT__mepc_en));
    bufp->fullBit(oldp+41,(vlSelf->top_ysyx_24110017__DOT__mstatus_en));
    bufp->fullBit(oldp+42,(vlSelf->top_ysyx_24110017__DOT__mcause_en));
    bufp->fullBit(oldp+43,(vlSelf->top_ysyx_24110017__DOT__mtvec_en));
    bufp->fullIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullCData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+46,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+47,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullCData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__delay_counter),8);
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
    bufp->fullCData(oldp+82,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+83,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__s_wen));
    bufp->fullCData(oldp+84,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+85,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                               ? (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp)
                               : 0U)),2);
    bufp->fullBit(oldp+86,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                            & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_awready))));
    bufp->fullBit(oldp+87,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                            & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bvalid))));
    bufp->fullCData(oldp+88,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                               ? (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_bresp)
                               : 0U)),2);
    bufp->fullBit(oldp+89,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+90,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+91,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+92,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+93,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+94,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                               & (vlSelf->top_ysyx_24110017__DOT__r1 
                                  >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+95,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                            & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                               & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
    bufp->fullIData(oldp+96,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+97,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+98,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+99,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb),8);
    bufp->fullBit(oldp+100,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+101,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+102,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+103,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+104,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_rready));
    bufp->fullCData(oldp+105,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay),8);
    bufp->fullBit(oldp+106,((1U & VL_REDXOR_8((0xb8U 
                                               & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rand_delay))))));
    bufp->fullCData(oldp+107,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__delay_counter),8);
    bufp->fullCData(oldp+108,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__avalid_delay_counter),8);
    bufp->fullCData(oldp+109,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__wvalid_delay_counter),8);
    bufp->fullCData(oldp+110,(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+111,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+112,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+113,((((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                                | (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)))
                                ? vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata
                                : 0U)),32);
    bufp->fullCData(oldp+114,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_RRESP)
                                : 0U)),2);
    bufp->fullBit(oldp+115,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready))));
    bufp->fullBit(oldp+116,(((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready))));
    bufp->fullBit(oldp+117,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+118,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+119,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+120,(vlSelf->top_ysyx_24110017__DOT__op),7);
    bufp->fullCData(oldp+121,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
    bufp->fullBit(oldp+122,(vlSelf->top_ysyx_24110017__DOT__sram_lsu_read));
    bufp->fullBit(oldp+123,(vlSelf->top_ysyx_24110017__DOT__sram_lsu_write));
    bufp->fullBit(oldp+124,(vlSelf->top_ysyx_24110017__DOT__ls_valid));
    bufp->fullBit(oldp+125,((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullIData(oldp+126,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+127,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+128,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+129,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                         & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),8);
    bufp->fullIData(oldp+130,(((IData)(vlSelf->__VdfgTmp_h4120b2cc__0)
                                ? vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata
                                : 0U)),32);
    bufp->fullCData(oldp+131,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->top_ysyx_24110017__DOT__S_AXI_RRESP)
                                : 0U)),2);
    bufp->fullBit(oldp+132,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_AWREADY));
    bufp->fullBit(oldp+133,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready))));
    bufp->fullBit(oldp+134,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+135,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready))));
    bufp->fullBit(oldp+136,(vlSelf->top_ysyx_24110017__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+137,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullBit(oldp+138,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+139,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+140,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullIData(oldp+141,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullCData(oldp+142,(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state),2);
    bufp->fullCData(oldp+143,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+144,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+145,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+146,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+147,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+148,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+149,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+150,((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+151,((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
    bufp->fullBit(oldp+152,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+153,(((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
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
    bufp->fullBit(oldp+154,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+155,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+156,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+157,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__mtvec_wen));
    bufp->fullIData(oldp+158,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__imm),32);
    bufp->fullBit(oldp+159,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+160,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__current_state),2);
    bufp->fullIData(oldp+161,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[0]),32);
    bufp->fullIData(oldp+162,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[1]),32);
    bufp->fullIData(oldp+163,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[2]),32);
    bufp->fullIData(oldp+164,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[3]),32);
    bufp->fullIData(oldp+165,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[4]),32);
    bufp->fullIData(oldp+166,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[5]),32);
    bufp->fullIData(oldp+167,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[6]),32);
    bufp->fullIData(oldp+168,(vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf[7]),32);
    bufp->fullIData(oldp+169,(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR),32);
    bufp->fullBit(oldp+170,(vlSelf->top_ysyx_24110017__DOT__S_AXI_AWVALID));
    bufp->fullBit(oldp+171,(vlSelf->top_ysyx_24110017__DOT__S_AXI_WVALID));
    bufp->fullBit(oldp+172,(vlSelf->top_ysyx_24110017__DOT__S_AXI_BREADY));
    bufp->fullBit(oldp+173,(vlSelf->top_ysyx_24110017__DOT__S_AXI_ARVALID));
    bufp->fullBit(oldp+174,(vlSelf->top_ysyx_24110017__DOT__S_AXI_RREADY));
    bufp->fullCData(oldp+175,((0xfU & vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR)),4);
    bufp->fullBit(oldp+176,(vlSelf->clk));
    bufp->fullBit(oldp+177,(vlSelf->rst));
    bufp->fullIData(oldp+178,(vlSelf->pc),32);
    bufp->fullIData(oldp+179,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+180,(vlSelf->inst),32);
    bufp->fullBit(oldp+181,(vlSelf->DIFFTEST));
    bufp->fullBit(oldp+182,(vlSelf->top_ysyx_24110017__DOT__LSU_DONE));
    bufp->fullIData(oldp+183,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr
                                : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                    ? vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR
                                    : 0U))),32);
    bufp->fullIData(oldp+184,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wdata
                                : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                    ? vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA
                                    : 0U))),32);
    bufp->fullCData(oldp+185,(((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb)
                                : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB)
                                    : 0U))),8);
    bufp->fullCData(oldp+186,(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__next_state),2);
    bufp->fullCData(oldp+187,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+188,(((IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullCData(oldp+189,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+190,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+191,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+192,((((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+193,((0x1fU & ((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+194,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+195,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+196,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+197,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+198,((((- (IData)((vlSelf->inst 
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
    bufp->fullCData(oldp+199,((((0x33U == (0x7fU & vlSelf->inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->inst)))
                                ? (vlSelf->inst >> 0x19U)
                                : 0U)),7);
    bufp->fullCData(oldp+200,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+201,(vlSelf->top_ysyx_24110017__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+202,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+203,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__next_state));
    bufp->fullIData(oldp+204,(((0U == (0xfU & vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR))
                                ? 0U : vlSelf->top_ysyx_24110017__DOT__SRAM_ysyx_24110017__DOT__sta_rf
                               [(7U & vlSelf->top_ysyx_24110017__DOT__S_AXI_ARADDR)])),32);
    bufp->fullCData(oldp+205,((0xfU & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                        ? vlSelf->top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr
                                        : ((2U == (IData)(vlSelf->top_ysyx_24110017__DOT__Arbiter_ysyx_24110017__DOT__state))
                                            ? vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR
                                            : 0U)))),4);
    bufp->fullCData(oldp+206,(vlSelf->top_ysyx_24110017__DOT__WBU__DOT__next_state),2);
    bufp->fullIData(oldp+207,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWADDR),32);
    bufp->fullIData(oldp+208,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WDATA),32);
    bufp->fullCData(oldp+209,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WSTRB),8);
    bufp->fullBit(oldp+210,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_AWVALID));
    bufp->fullBit(oldp+211,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_WVALID));
    bufp->fullBit(oldp+212,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI_BREADY));
    bufp->fullCData(oldp+213,(vlSelf->top_ysyx_24110017__DOT__S_AXI_RRESP),2);
    bufp->fullCData(oldp+214,(0U),2);
    bufp->fullCData(oldp+215,(1U),2);
    bufp->fullCData(oldp+216,(2U),2);
    bufp->fullCData(oldp+217,(3U),2);
    bufp->fullBit(oldp+218,(0U));
    bufp->fullBit(oldp+219,(1U));
    bufp->fullIData(oldp+220,(5U),32);
    bufp->fullIData(oldp+221,(0x20U),32);
    bufp->fullIData(oldp+222,(0U),32);
    bufp->fullIData(oldp+223,(0x1800U),32);
}
