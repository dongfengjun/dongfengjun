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
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+91,"dnpc", false,-1, 31,0);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("top_ysyx_24110017 ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+91,"dnpc", false,-1, 31,0);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBus(c+93,"op", false,-1, 6,0);
    tracep->declBus(c+94,"rd", false,-1, 4,0);
    tracep->declBus(c+95,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+96,"rs2", false,-1, 4,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+3,"funct7", false,-1, 6,0);
    tracep->declBus(c+97,"shamt", false,-1, 4,0);
    tracep->declBit(c+4,"wr_en", false,-1);
    tracep->declBus(c+5,"res", false,-1, 31,0);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declBus(c+6,"raddr2", false,-1, 4,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+10,"b", false,-1, 31,0);
    tracep->declBus(c+98,"xrd", false,-1, 31,0);
    tracep->declBus(c+11,"csrs", false,-1, 31,0);
    tracep->declBus(c+12,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+99,"mepc_in", false,-1, 31,0);
    tracep->declBus(c+13,"mepc", false,-1, 31,0);
    tracep->declBus(c+14,"mstatus", false,-1, 31,0);
    tracep->declBus(c+15,"mcause_in", false,-1, 31,0);
    tracep->declBus(c+16,"mcause", false,-1, 31,0);
    tracep->declBus(c+17,"mtvec", false,-1, 31,0);
    tracep->declBit(c+18,"mepc_wen", false,-1);
    tracep->declBit(c+19,"mstatus_wen", false,-1);
    tracep->declBit(c+20,"mcause_wen", false,-1);
    tracep->declBit(c+21,"mtvec_wen", false,-1);
    tracep->declBus(c+120,"AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+120,"AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+22,"AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+23,"AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+121,"AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+24,"AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+25,"AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+122,"INIT_AXI_TXN", false,-1);
    tracep->declBit(c+26,"ERROR", false,-1);
    tracep->declBit(c+27,"TXN_DONE", false,-1);
    tracep->declBit(c+123,"AXI_AWVALID", false,-1);
    tracep->declBit(c+28,"AXI_AWREADY", false,-1);
    tracep->declBit(c+123,"AXI_WVALID", false,-1);
    tracep->declBit(c+29,"AXI_WREADY", false,-1);
    tracep->declBit(c+30,"AXI_BVALID", false,-1);
    tracep->declBit(c+123,"AXI_BREADY", false,-1);
    tracep->declBit(c+31,"AXI_ARVALID", false,-1);
    tracep->declBit(c+32,"AXI_ARREADY", false,-1);
    tracep->declBit(c+33,"AXI_RVALID", false,-1);
    tracep->declBit(c+34,"AXI_RREADY", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+9,"a", false,-1, 31,0);
    tracep->declBus(c+10,"b", false,-1, 31,0);
    tracep->declBus(c+95,"sel", false,-1, 2,0);
    tracep->declBus(c+93,"op", false,-1, 6,0);
    tracep->declBus(c+3,"funct7", false,-1, 6,0);
    tracep->declBus(c+97,"shamt", false,-1, 4,0);
    tracep->declBus(c+2,"offset", false,-1, 31,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+11,"csrs", false,-1, 31,0);
    tracep->declBus(c+12,"csrs_in", false,-1, 31,0);
    tracep->declBus(c+5,"res", false,-1, 31,0);
    tracep->declBit(c+27,"TXN_DONE", false,-1);
    tracep->declBus(c+35,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("LSU_ysyx_24110017 ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+93,"op", false,-1, 6,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+2,"offset", false,-1, 31,0);
    tracep->declBus(c+95,"function3", false,-1, 2,0);
    tracep->declBus(c+35,"rdata", false,-1, 31,0);
    tracep->declBit(c+124,"TXN_DONE", false,-1);
    tracep->declBit(c+100,"valid", false,-1);
    tracep->declBit(c+101,"wen", false,-1);
    tracep->declBus(c+102,"raddr", false,-1, 31,0);
    tracep->declBus(c+103,"waddr", false,-1, 31,0);
    tracep->declBus(c+104,"wdata", false,-1, 31,0);
    tracep->declBus(c+105,"wmask", false,-1, 7,0);
    tracep->pushNamePrefix("SRAM_LSU_ysyx_24110017 ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBit(c+100,"valid", false,-1);
    tracep->declBit(c+101,"wen", false,-1);
    tracep->declBus(c+103,"waddr", false,-1, 31,0);
    tracep->declBus(c+104,"wdata", false,-1, 31,0);
    tracep->declBus(c+105,"wmask", false,-1, 7,0);
    tracep->declBus(c+102,"raddr", false,-1, 31,0);
    tracep->declBus(c+35,"rdata", false,-1, 31,0);
    tracep->declBus(c+36,"tmp", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBus(c+93,"op", false,-1, 6,0);
    tracep->declBus(c+94,"rd", false,-1, 4,0);
    tracep->declBus(c+95,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+96,"rs2", false,-1, 4,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+3,"funct7", false,-1, 6,0);
    tracep->declBus(c+97,"shamt", false,-1, 4,0);
    tracep->declBit(c+4,"wr_en", false,-1);
    tracep->declBus(c+106,"immI", false,-1, 31,0);
    tracep->declBus(c+107,"immU", false,-1, 31,0);
    tracep->declBus(c+108,"immS", false,-1, 31,0);
    tracep->declBus(c+109,"immB", false,-1, 31,0);
    tracep->declBus(c+110,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU_AXI4_ysyx_24110017 ");
    tracep->declBus(c+120,"C_M_START_DATA_VALUE", false,-1, 31,0);
    tracep->declBus(c+120,"C_M_TARGET_SLAVE_BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+125,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+126,"C_M_TRANSACTIONS_NUM", false,-1, 31,0);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBit(c+122,"INIT_AXI_TXN", false,-1);
    tracep->declBit(c+26,"ERROR", false,-1);
    tracep->declBit(c+27,"TXN_DONE", false,-1);
    tracep->declBit(c+88,"M_AXI_ACLK", false,-1);
    tracep->declBit(c+89,"M_AXI_ARESET", false,-1);
    tracep->declBus(c+120,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+123,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+28,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+120,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+121,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+123,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+29,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+24,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+30,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+123,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+22,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+31,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+32,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+23,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+25,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+33,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+34,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+127,"IDLE", false,-1, 1,0);
    tracep->declBus(c+128,"INIT_WRITE", false,-1, 1,0);
    tracep->declBus(c+129,"INIT_READ", false,-1, 1,0);
    tracep->declBus(c+130,"INIT_COMPARE", false,-1, 1,0);
    tracep->declBus(c+37,"mst_exec_state", false,-1, 1,0);
    tracep->declBit(c+131,"axi_awvalid", false,-1);
    tracep->declBit(c+132,"axi_wvalid", false,-1);
    tracep->declBit(c+31,"axi_arvalid", false,-1);
    tracep->declBit(c+34,"axi_rready", false,-1);
    tracep->declBit(c+133,"axi_bready", false,-1);
    tracep->declBus(c+38,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+40,"read_resp_error", false,-1);
    tracep->declBit(c+41,"start_single_write", false,-1);
    tracep->declBit(c+42,"start_single_read", false,-1);
    tracep->declBit(c+43,"write_issued", false,-1);
    tracep->declBit(c+44,"read_issued", false,-1);
    tracep->declBit(c+45,"writes_done", false,-1);
    tracep->declBit(c+46,"reads_done", false,-1);
    tracep->declBit(c+47,"error_reg", false,-1);
    tracep->declBit(c+27,"txn_done", false,-1);
    tracep->declBit(c+48,"last_write", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+93,"op", false,-1, 6,0);
    tracep->declBus(c+95,"funct3", false,-1, 2,0);
    tracep->declBus(c+2,"offset", false,-1, 31,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    tracep->declBus(c+17,"mtvec", false,-1, 31,0);
    tracep->declBus(c+13,"mepc", false,-1, 31,0);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+91,"dnpc", false,-1, 31,0);
    tracep->declBit(c+122,"INIT_AXI_TXN", false,-1);
    tracep->declBit(c+27,"TXN_DONE", false,-1);
    tracep->declBit(c+111,"jalen", false,-1);
    tracep->declBit(c+112,"jalren", false,-1);
    tracep->declBit(c+113,"beqen", false,-1);
    tracep->declBit(c+114,"bneen", false,-1);
    tracep->declBit(c+115,"blten", false,-1);
    tracep->declBit(c+116,"bgeen", false,-1);
    tracep->declBit(c+117,"bltuen", false,-1);
    tracep->declBit(c+118,"bgeuen", false,-1);
    tracep->declBit(c+49,"ecall_en", false,-1);
    tracep->declBit(c+119,"mret_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+134,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+135,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBus(c+98,"wdata", false,-1, 31,0);
    tracep->declBus(c+94,"waddr", false,-1, 4,0);
    tracep->declBit(c+50,"wen", false,-1);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declBus(c+7,"r1", false,-1, 31,0);
    tracep->declBus(c+6,"raddr2", false,-1, 4,0);
    tracep->declBus(c+8,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+51+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM_AXI4_ysyx_24110017 ");
    tracep->declBus(c+125,"C_S_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+89,"S_AXI_ARESET", false,-1);
    tracep->declBus(c+120,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+123,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+28,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+120,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+121,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+123,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+29,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+24,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+30,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+123,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+22,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+31,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+32,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+23,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+25,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+33,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+34,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+83,"axi_awaddr", false,-1, 31,0);
    tracep->declBit(c+28,"axi_awready", false,-1);
    tracep->declBit(c+29,"axi_wready", false,-1);
    tracep->declBus(c+24,"axi_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"axi_bvalid", false,-1);
    tracep->declBus(c+84,"axi_araddr", false,-1, 31,0);
    tracep->declBit(c+32,"axi_arready", false,-1);
    tracep->declBus(c+23,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+25,"axi_rresp", false,-1, 1,0);
    tracep->declBit(c+33,"axi_rvalid", false,-1);
    tracep->declBus(c+136,"ADDR_LSB", false,-1, 31,0);
    tracep->declBus(c+126,"OPT_MEM_ADDR_BITS", false,-1, 31,0);
    tracep->declBit(c+85,"slv_reg_rden", false,-1);
    tracep->declBit(c+123,"slv_reg_wren", false,-1);
    tracep->declBus(c+86,"reg_data_out", false,-1, 31,0);
    tracep->declBus(c+137,"byte_index", false,-1, 31,0);
    tracep->declBit(c+87,"aw_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+135,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+120,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+16,"dout", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+135,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+120,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+99,"din", false,-1, 31,0);
    tracep->declBus(c+13,"dout", false,-1, 31,0);
    tracep->declBit(c+18,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+135,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+138,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+12,"din", false,-1, 31,0);
    tracep->declBus(c+14,"dout", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+135,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+120,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+12,"din", false,-1, 31,0);
    tracep->declBus(c+17,"dout", false,-1, 31,0);
    tracep->declBit(c+21,"wen", false,-1);
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
    bufp->fullCData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
    bufp->fullIData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__imm),32);
    bufp->fullCData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
    bufp->fullBit(oldp+4,(vlSelf->top_ysyx_24110017__DOT__wr_en));
    bufp->fullIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__res),32);
    bufp->fullCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__raddr2),5);
    bufp->fullIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__r1),32);
    bufp->fullIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__r2),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__a),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__b),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__csrs),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__csrs_in),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
    bufp->fullIData(oldp+15,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->top_ysyx_24110017__DOT__r2
                               : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
    bufp->fullBit(oldp+18,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+19,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
    bufp->fullBit(oldp+20,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0) 
                            | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
    bufp->fullBit(oldp+21,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
    bufp->fullIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_araddr),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rdata),32);
    bufp->fullCData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_bresp),2);
    bufp->fullCData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rresp),2);
    bufp->fullBit(oldp+26,(vlSelf->top_ysyx_24110017__DOT__ERROR));
    bufp->fullBit(oldp+27,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__txn_done));
    bufp->fullBit(oldp+28,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_awready));
    bufp->fullBit(oldp+29,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_wready));
    bufp->fullBit(oldp+30,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_bvalid));
    bufp->fullBit(oldp+31,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_arvalid));
    bufp->fullBit(oldp+32,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_arready));
    bufp->fullBit(oldp+33,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rvalid));
    bufp->fullBit(oldp+34,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_rready));
    bufp->fullIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__tmp),32);
    bufp->fullCData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__mst_exec_state),2);
    bufp->fullIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_wdata),32);
    bufp->fullBit(oldp+40,(((IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_rready) 
                            & ((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rvalid) 
                               & ((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rresp) 
                                  >> 1U)))));
    bufp->fullBit(oldp+41,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__start_single_write));
    bufp->fullBit(oldp+42,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__start_single_read));
    bufp->fullBit(oldp+43,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__write_issued));
    bufp->fullBit(oldp+44,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__read_issued));
    bufp->fullBit(oldp+45,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__writes_done));
    bufp->fullBit(oldp+46,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__reads_done));
    bufp->fullBit(oldp+47,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__error_reg));
    bufp->fullBit(oldp+48,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__last_write));
    bufp->fullBit(oldp+49,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__txn_done) 
                            & (IData)(vlSelf->top_ysyx_24110017__DOT__wr_en))));
    bufp->fullIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+69,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+70,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+76,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+77,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+78,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+79,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+80,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+81,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+82,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    bufp->fullIData(oldp+83,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+84,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_araddr),32);
    bufp->fullBit(oldp+85,(((IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_arready) 
                            & ((~ (IData)(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__axi_rvalid)) 
                               & (IData)(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_arvalid)))));
    bufp->fullIData(oldp+86,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__reg_data_out),32);
    bufp->fullBit(oldp+87,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__aw_en));
    bufp->fullBit(oldp+88,(vlSelf->clk));
    bufp->fullBit(oldp+89,(vlSelf->rst));
    bufp->fullIData(oldp+90,(vlSelf->pc),32);
    bufp->fullIData(oldp+91,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+92,(vlSelf->inst),32);
    bufp->fullCData(oldp+93,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+94,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                               ? (0x1fU & (vlSelf->inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+95,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+96,(((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0)
                               ? (0x1fU & (vlSelf->inst 
                                           >> 0x14U))
                               : 0U)),5);
    bufp->fullCData(oldp+97,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+98,((((3U == (0x7fU & vlSelf->inst)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->inst)) 
                                  | ((0xfU == (0x7fU 
                                               & vlSelf->inst)) 
                                     | ((0x73U == (0x7fU 
                                                   & vlSelf->inst)) 
                                        | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))))
                               ? vlSelf->top_ysyx_24110017__DOT__res
                               : ((0x6fU == (0x7fU 
                                             & vlSelf->inst))
                                   ? vlSelf->pc : (
                                                   (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))
                                                    ? vlSelf->pc
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst))
                                                     ? vlSelf->top_ysyx_24110017__DOT__imm
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst))
                                                      ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h9c887a2e__0
                                                      : 0U)))))),32);
    bufp->fullIData(oldp+99,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                               ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->fullBit(oldp+100,(((0x23U == (0x7fU & vlSelf->inst)) 
                             | ((3U == (0x7fU & vlSelf->inst)) 
                                & (IData)(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__TXN_DONE)))));
    bufp->fullBit(oldp+101,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+102,(((3U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+103,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+104,(((0x23U == (0x7fU & vlSelf->inst))
                                ? vlSelf->top_ysyx_24110017__DOT__r2
                                : 0U)),32);
    bufp->fullCData(oldp+105,(((IData)((0x23U == (0x707fU 
                                                  & vlSelf->inst)))
                                ? 1U : ((IData)((0x1023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)))
                                         ? 3U : ((IData)(
                                                         (0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst)))
                                                  ? 0xfU
                                                  : 0U)))),8);
    bufp->fullIData(oldp+106,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+107,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+108,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+109,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+110,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+111,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+112,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+113,((IData)(((0x63U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+114,((IData)(((0x1063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+115,((IData)(((0x4063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+116,((IData)(((0x5063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+117,((IData)(((0x6063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+118,((IData)(((0x7063U == (0x707fU 
                                                  & vlSelf->inst)) 
                                     & (vlSelf->top_ysyx_24110017__DOT__r1 
                                        >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->fullBit(oldp+119,((IData)(((0x73U == (0x707fU 
                                                & vlSelf->inst)) 
                                     & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
    bufp->fullIData(oldp+120,(0U),32);
    bufp->fullCData(oldp+121,(0U),4);
    bufp->fullBit(oldp+122,(1U));
    bufp->fullBit(oldp+123,(0U));
    bufp->fullBit(oldp+124,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__TXN_DONE));
    bufp->fullIData(oldp+125,(0x20U),32);
    bufp->fullIData(oldp+126,(4U),32);
    bufp->fullCData(oldp+127,(0U),2);
    bufp->fullCData(oldp+128,(1U),2);
    bufp->fullCData(oldp+129,(2U),2);
    bufp->fullCData(oldp+130,(3U),2);
    bufp->fullBit(oldp+131,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_awvalid));
    bufp->fullBit(oldp+132,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_wvalid));
    bufp->fullBit(oldp+133,(vlSelf->top_ysyx_24110017__DOT__IFU_AXI4_ysyx_24110017__DOT__axi_bready));
    bufp->fullIData(oldp+134,(5U),32);
    bufp->fullIData(oldp+135,(0x20U),32);
    bufp->fullIData(oldp+136,(2U),32);
    bufp->fullIData(oldp+137,(vlSelf->top_ysyx_24110017__DOT__SRAM_AXI4_ysyx_24110017__DOT__byte_index),32);
    bufp->fullIData(oldp+138,(0x1800U),32);
}
