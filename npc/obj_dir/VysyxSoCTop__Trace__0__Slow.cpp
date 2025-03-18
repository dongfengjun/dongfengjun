// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCTop__Syms.h"


VL_ATTR_COLD void VysyxSoCTop___024root__trace_init_sub__TOP__0(VysyxSoCTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->pushNamePrefix("ysyxSoCTop ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBus(c+1078,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1079,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1080,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1081,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1082,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1083,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1084,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1085,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1086,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1087,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1088,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1088,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1089,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1090,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1091,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1092,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1093,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1094,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1088,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+473,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+474,"spi_sck", false,-1);
    tracep->declBus(c+475,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1046,"spi_mosi", false,-1);
    tracep->declBit(c+1047,"spi_miso", false,-1);
    tracep->declBit(c+1088,"uart_rx", false,-1);
    tracep->declBit(c+473,"uart_tx", false,-1);
    tracep->declBit(c+1048,"psram_sck", false,-1);
    tracep->declBit(c+1049,"psram_ce_n", false,-1);
    tracep->declBus(c+933,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1050,"sdram_clk", false,-1);
    tracep->declBit(c+476,"sdram_cke", false,-1);
    tracep->declBit(c+477,"sdram_cs", false,-1);
    tracep->declBit(c+478,"sdram_ras", false,-1);
    tracep->declBit(c+479,"sdram_cas", false,-1);
    tracep->declBit(c+480,"sdram_we", false,-1);
    tracep->declBus(c+481,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+482,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+483,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+484,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1078,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1079,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1080,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1081,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1082,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1083,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1084,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1085,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1086,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1087,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1088,"ps2_clk", false,-1);
    tracep->declBit(c+1088,"ps2_data", false,-1);
    tracep->declBus(c+1089,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1090,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1091,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1092,"vga_hsync", false,-1);
    tracep->declBit(c+1093,"vga_vsync", false,-1);
    tracep->declBit(c+1094,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBus(c+797,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+798,"in_psel", false,-1);
    tracep->declBit(c+13,"in_penable", false,-1);
    tracep->declBus(c+1095,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+799,"in_pwrite", false,-1);
    tracep->declBus(c+800,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+934,"in_pready", false,-1);
    tracep->declBus(c+935,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+802,"in_pslverr", false,-1);
    tracep->declBus(c+797,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+798,"out_psel", false,-1);
    tracep->declBit(c+13,"out_penable", false,-1);
    tracep->declBus(c+1095,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+799,"out_pwrite", false,-1);
    tracep->declBus(c+800,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+934,"out_pready", false,-1);
    tracep->declBus(c+935,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+802,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+798,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+13,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+799,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+797,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+934,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+802,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+935,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+803,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+430,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+799,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+797,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+485,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1088,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+486,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+804,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+431,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+799,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+805,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1095,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1097,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1098,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+806,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+432,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+799,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+807,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1095,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1100,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1101,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+808,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+433,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+799,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+807,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1095,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1103,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1104,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+809,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+434,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+799,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+797,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1051,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1088,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+14,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+810,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+811,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+799,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+807,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1095,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+812,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1088,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1052,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+813,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+814,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+799,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+805,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1095,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+487,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1088,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+488,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+815,"sel_0", false,-1);
    tracep->declBit(c+816,"sel_1", false,-1);
    tracep->declBit(c+817,"sel_2", false,-1);
    tracep->declBit(c+818,"sel_3", false,-1);
    tracep->declBit(c+819,"sel_4", false,-1);
    tracep->declBit(c+820,"sel_5", false,-1);
    tracep->declBit(c+821,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+822,"auto_in_awready", false,-1);
    tracep->declBit(c+823,"auto_in_awvalid", false,-1);
    tracep->declBus(c+15,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+824,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+822,"auto_in_wready", false,-1);
    tracep->declBit(c+825,"auto_in_wvalid", false,-1);
    tracep->declBus(c+826,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+936,"auto_in_bready", false,-1);
    tracep->declBit(c+937,"auto_in_bvalid", false,-1);
    tracep->declBus(c+17,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+828,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+829,"auto_in_arready", false,-1);
    tracep->declBit(c+830,"auto_in_arvalid", false,-1);
    tracep->declBus(c+18,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+831,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+938,"auto_in_rready", false,-1);
    tracep->declBit(c+939,"auto_in_rvalid", false,-1);
    tracep->declBus(c+20,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+436,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+828,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+798,"auto_out_psel", false,-1);
    tracep->declBit(c+13,"auto_out_penable", false,-1);
    tracep->declBit(c+799,"auto_out_pwrite", false,-1);
    tracep->declBus(c+797,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+800,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+934,"auto_out_pready", false,-1);
    tracep->declBit(c+802,"auto_out_pslverr", false,-1);
    tracep->declBus(c+935,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+13,"nodeOut_penable", false,-1);
    tracep->declBus(c+21,"state", false,-1, 1,0);
    tracep->declBit(c+829,"accept_read", false,-1);
    tracep->declBit(c+822,"accept_write", false,-1);
    tracep->declBit(c+22,"is_write_r", false,-1);
    tracep->declBit(c+799,"is_write", false,-1);
    tracep->declBus(c+20,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+17,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+23,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+24,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+25,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+26,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+832,"resp", false,-1, 1,0);
    tracep->declBus(c+27,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+828,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+939,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+28,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+937,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+29,"auto_in_awready", false,-1);
    tracep->declBit(c+833,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1105,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+834,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+729,"auto_in_wready", false,-1);
    tracep->declBit(c+835,"auto_in_wvalid", false,-1);
    tracep->declBus(c+836,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+837,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1109,"auto_in_wlast", false,-1);
    tracep->declBit(c+838,"auto_in_bready", false,-1);
    tracep->declBit(c+940,"auto_in_bvalid", false,-1);
    tracep->declBus(c+941,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+437,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_in_arready", false,-1);
    tracep->declBit(c+839,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1110,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+840,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1112,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1113,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+841,"auto_in_rready", false,-1);
    tracep->declBit(c+942,"auto_in_rvalid", false,-1);
    tracep->declBus(c+943,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+438,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+439,"auto_in_rlast", false,-1);
    tracep->declBit(c+944,"auto_out_awready", false,-1);
    tracep->declBit(c+842,"auto_out_awvalid", false,-1);
    tracep->declBus(c+15,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+824,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+31,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+945,"auto_out_wready", false,-1);
    tracep->declBit(c+843,"auto_out_wvalid", false,-1);
    tracep->declBus(c+826,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+844,"auto_out_wlast", false,-1);
    tracep->declBit(c+946,"auto_out_bready", false,-1);
    tracep->declBit(c+947,"auto_out_bvalid", false,-1);
    tracep->declBus(c+941,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+948,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+949,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+950,"auto_out_arready", false,-1);
    tracep->declBit(c+845,"auto_out_arvalid", false,-1);
    tracep->declBus(c+18,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+831,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+32,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+841,"auto_out_rready", false,-1);
    tracep->declBit(c+942,"auto_out_rvalid", false,-1);
    tracep->declBus(c+943,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+438,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+440,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+951,"auto_out_rlast", false,-1);
    tracep->declBit(c+843,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+33,"w_idle", false,-1);
    tracep->declBit(c+952,"in_awready", false,-1);
    tracep->declBit(c+34,"busy", false,-1);
    tracep->declBus(c+35,"r_addr", false,-1, 31,0);
    tracep->declBus(c+36,"r_len", false,-1, 7,0);
    tracep->declBus(c+37,"len", false,-1, 7,0);
    tracep->declBus(c+846,"addr", false,-1, 31,0);
    tracep->declBit(c+38,"busy_1", false,-1);
    tracep->declBus(c+39,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+40,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+41,"len_1", false,-1, 7,0);
    tracep->declBus(c+847,"addr_1", false,-1, 31,0);
    tracep->declBit(c+42,"wbeats_latched", false,-1);
    tracep->declBit(c+842,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+848,"wbeats_valid", false,-1);
    tracep->declBus(c+43,"w_counter", false,-1, 8,0);
    tracep->declBus(c+849,"w_todo", false,-1, 8,0);
    tracep->declBit(c+844,"w_last", false,-1);
    tracep->declBit(c+946,"nodeOut_bready", false,-1);
    tracep->declBus(c+44,"error_0", false,-1, 1,0);
    tracep->declBus(c+45,"error_1", false,-1, 1,0);
    tracep->declBus(c+46,"error_2", false,-1, 1,0);
    tracep->declBus(c+47,"error_3", false,-1, 1,0);
    tracep->declBus(c+48,"error_4", false,-1, 1,0);
    tracep->declBus(c+49,"error_5", false,-1, 1,0);
    tracep->declBus(c+50,"error_6", false,-1, 1,0);
    tracep->declBus(c+51,"error_7", false,-1, 1,0);
    tracep->declBus(c+52,"error_8", false,-1, 1,0);
    tracep->declBus(c+53,"error_9", false,-1, 1,0);
    tracep->declBus(c+54,"error_10", false,-1, 1,0);
    tracep->declBus(c+55,"error_11", false,-1, 1,0);
    tracep->declBus(c+56,"error_12", false,-1, 1,0);
    tracep->declBus(c+57,"error_13", false,-1, 1,0);
    tracep->declBus(c+58,"error_14", false,-1, 1,0);
    tracep->declBus(c+59,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+30,"io_enq_ready", false,-1);
    tracep->declBit(c+839,"io_enq_valid", false,-1);
    tracep->declBus(c+1110,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+840,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1111,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1112,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1113,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+953,"io_deq_ready", false,-1);
    tracep->declBit(c+845,"io_deq_valid", false,-1);
    tracep->declBus(c+18,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+850,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+60,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+19,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+61,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+62,"ram", false,-1, 48,0);
    tracep->declBit(c+64,"full", false,-1);
    tracep->declBit(c+845,"io_deq_valid_0", false,-1);
    tracep->declBit(c+954,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+29,"io_enq_ready", false,-1);
    tracep->declBit(c+833,"io_enq_valid", false,-1);
    tracep->declBus(c+1105,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+834,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1106,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1107,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1108,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+955,"io_deq_ready", false,-1);
    tracep->declBit(c+851,"io_deq_valid", false,-1);
    tracep->declBus(c+15,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+852,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+65,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+16,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+66,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+67,"ram", false,-1, 48,0);
    tracep->declBit(c+69,"full", false,-1);
    tracep->declBit(c+851,"io_deq_valid_0", false,-1);
    tracep->declBit(c+956,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+729,"io_enq_ready", false,-1);
    tracep->declBit(c+835,"io_enq_valid", false,-1);
    tracep->declBus(c+836,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+837,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1109,"io_enq_bits_last", false,-1);
    tracep->declBit(c+957,"io_deq_ready", false,-1);
    tracep->declBit(c+853,"io_deq_valid", false,-1);
    tracep->declBus(c+826,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+827,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+417,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+70,"ram", false,-1, 36,0);
    tracep->declBit(c+730,"full", false,-1);
    tracep->declBit(c+853,"io_deq_valid_0", false,-1);
    tracep->declBit(c+958,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+959,"auto_in_awready", false,-1);
    tracep->declBit(c+854,"auto_in_awvalid", false,-1);
    tracep->declBus(c+15,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1054,"auto_in_wready", false,-1);
    tracep->declBit(c+856,"auto_in_wvalid", false,-1);
    tracep->declBus(c+826,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+960,"auto_in_bready", false,-1);
    tracep->declBit(c+72,"auto_in_bvalid", false,-1);
    tracep->declBus(c+73,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+74,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+961,"auto_in_arready", false,-1);
    tracep->declBit(c+857,"auto_in_arvalid", false,-1);
    tracep->declBus(c+18,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+858,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+962,"auto_in_rready", false,-1);
    tracep->declBit(c+75,"auto_in_rvalid", false,-1);
    tracep->declBus(c+76,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+961,"nodeIn_arready", false,-1);
    tracep->declBit(c+959,"nodeIn_awready", false,-1);
    tracep->declBit(c+859,"w_sel0", false,-1);
    tracep->declBit(c+72,"w_full", false,-1);
    tracep->declBus(c+73,"w_id", false,-1, 3,0);
    tracep->declBit(c+79,"r_sel1", false,-1);
    tracep->declBit(c+80,"w_sel1", false,-1);
    tracep->declBit(c+75,"r_full", false,-1);
    tracep->declBus(c+76,"r_id", false,-1, 3,0);
    tracep->declBit(c+963,"ren", false,-1);
    tracep->declBit(c+81,"rdata_REG", false,-1);
    tracep->declBus(c+82,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+83,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+84,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+85,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+860,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+963,"R0_en", false,-1);
    tracep->declBit(c+1044,"R0_clk", false,-1);
    tracep->declBus(c+86,"R0_data", false,-1, 31,0);
    tracep->declBus(c+861,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+964,"W0_en", false,-1);
    tracep->declBit(c+1044,"W0_clk", false,-1);
    tracep->declBus(c+826,"W0_data", false,-1, 31,0);
    tracep->declBus(c+827,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+29,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+833,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1105,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+834,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+729,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+835,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+836,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+837,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1109,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+838,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+940,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+941,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+437,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+839,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1110,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+840,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1112,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1113,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+841,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+942,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+943,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+438,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+439,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+29,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+833,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1105,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+834,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+729,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+835,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+836,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+837,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1109,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+838,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+940,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+941,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+437,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+839,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1110,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+840,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1112,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1113,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+841,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+942,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+943,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+438,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+439,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+965,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+862,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+15,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+824,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+945,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+843,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+826,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+844,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+946,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+947,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+941,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+948,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+966,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+863,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+18,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+831,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+841,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+942,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+943,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+438,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+951,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+959,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+854,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+15,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1054,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+856,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+826,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+960,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+72,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+73,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+74,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+961,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+857,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+18,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+858,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+962,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+75,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+76,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+864,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+865,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+87,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+866,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+18,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+867,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1055,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+88,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+89,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+90,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+822,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+823,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+15,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+824,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+822,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+825,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+826,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+936,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+937,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+17,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+828,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+829,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+830,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+18,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+831,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+938,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+939,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+20,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+436,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+828,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+947,"in_0_bvalid", false,-1);
    tracep->declBit(c+942,"in_0_rvalid", false,-1);
    tracep->declBit(c+967,"in_0_wready", false,-1);
    tracep->declBit(c+968,"in_0_awready", false,-1);
    tracep->declBit(c+966,"in_0_arready", false,-1);
    tracep->declBit(c+965,"anonIn_awready", false,-1);
    tracep->declBit(c+868,"requestARIO_0_0", false,-1);
    tracep->declBit(c+869,"requestARIO_0_1", false,-1);
    tracep->declBit(c+870,"requestARIO_0_2", false,-1);
    tracep->declBit(c+871,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+872,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+873,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+91,"arSel", false,-1, 15,0);
    tracep->declBus(c+92,"awSel", false,-1, 15,0);
    tracep->declBus(c+969,"rSel", false,-1, 15,0);
    tracep->declBus(c+970,"bSel", false,-1, 15,0);
    tracep->declBit(c+93,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+94,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+95,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+96,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+97,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+98,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+99,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+100,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+101,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+102,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+103,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+104,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+105,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+106,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+107,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+108,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+109,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+110,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+111,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+112,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+113,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+114,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+115,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+116,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+117,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+118,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+119,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+120,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+121,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+122,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+123,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+124,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+125,"latched", false,-1);
    tracep->declBit(c+874,"in_0_awvalid", false,-1);
    tracep->declBit(c+875,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+876,"in_0_wvalid", false,-1);
    tracep->declBit(c+126,"idle_3", false,-1);
    tracep->declBit(c+971,"anyValid", false,-1);
    tracep->declBus(c+972,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+127,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+973,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+974,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+975,"prefixOR_1", false,-1);
    tracep->declBit(c+976,"winner_3_1", false,-1);
    tracep->declBit(c+977,"winner_3_2", false,-1);
    tracep->declBit(c+128,"state_3_0", false,-1);
    tracep->declBit(c+129,"state_3_1", false,-1);
    tracep->declBit(c+130,"state_3_2", false,-1);
    tracep->declBit(c+978,"muxState_3_0", false,-1);
    tracep->declBit(c+979,"muxState_3_1", false,-1);
    tracep->declBit(c+980,"muxState_3_2", false,-1);
    tracep->declBit(c+131,"idle_4", false,-1);
    tracep->declBit(c+981,"anyValid_1", false,-1);
    tracep->declBus(c+982,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+132,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+983,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+984,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+985,"winner_4_0", false,-1);
    tracep->declBit(c+986,"winner_4_2", false,-1);
    tracep->declBit(c+133,"state_4_0", false,-1);
    tracep->declBit(c+134,"state_4_2", false,-1);
    tracep->declBit(c+987,"muxState_4_0", false,-1);
    tracep->declBit(c+988,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+135,"io_enq_ready", false,-1);
    tracep->declBit(c+875,"io_enq_valid", false,-1);
    tracep->declBus(c+877,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+989,"io_deq_ready", false,-1);
    tracep->declBit(c+878,"io_deq_valid", false,-1);
    tracep->declBus(c+879,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+136,"wrap", false,-1);
    tracep->declBit(c+137,"wrap_1", false,-1);
    tracep->declBit(c+138,"maybe_full", false,-1);
    tracep->declBit(c+139,"ptr_match", false,-1);
    tracep->declBit(c+140,"empty", false,-1);
    tracep->declBit(c+141,"full", false,-1);
    tracep->declBit(c+878,"io_deq_valid_0", false,-1);
    tracep->declBit(c+990,"do_deq", false,-1);
    tracep->declBit(c+991,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+137,"R0_addr", false,-1);
    tracep->declBit(c+1114,"R0_en", false,-1);
    tracep->declBit(c+1044,"R0_clk", false,-1);
    tracep->declBus(c+142,"R0_data", false,-1, 2,0);
    tracep->declBit(c+136,"W0_addr", false,-1);
    tracep->declBit(c+991,"W0_en", false,-1);
    tracep->declBit(c+1044,"W0_clk", false,-1);
    tracep->declBus(c+877,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+143+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+944,"auto_in_awready", false,-1);
    tracep->declBit(c+842,"auto_in_awvalid", false,-1);
    tracep->declBus(c+15,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+824,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+31,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+945,"auto_in_wready", false,-1);
    tracep->declBit(c+843,"auto_in_wvalid", false,-1);
    tracep->declBus(c+826,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+844,"auto_in_wlast", false,-1);
    tracep->declBit(c+946,"auto_in_bready", false,-1);
    tracep->declBit(c+947,"auto_in_bvalid", false,-1);
    tracep->declBus(c+941,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+948,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+949,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+950,"auto_in_arready", false,-1);
    tracep->declBit(c+845,"auto_in_arvalid", false,-1);
    tracep->declBus(c+18,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+831,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+32,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+841,"auto_in_rready", false,-1);
    tracep->declBit(c+942,"auto_in_rvalid", false,-1);
    tracep->declBus(c+943,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+438,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+440,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+951,"auto_in_rlast", false,-1);
    tracep->declBit(c+965,"auto_out_awready", false,-1);
    tracep->declBit(c+862,"auto_out_awvalid", false,-1);
    tracep->declBus(c+15,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+824,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+945,"auto_out_wready", false,-1);
    tracep->declBit(c+843,"auto_out_wvalid", false,-1);
    tracep->declBus(c+826,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+844,"auto_out_wlast", false,-1);
    tracep->declBit(c+946,"auto_out_bready", false,-1);
    tracep->declBit(c+947,"auto_out_bvalid", false,-1);
    tracep->declBus(c+941,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+948,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+966,"auto_out_arready", false,-1);
    tracep->declBit(c+863,"auto_out_arvalid", false,-1);
    tracep->declBus(c+18,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+831,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+841,"auto_out_rready", false,-1);
    tracep->declBit(c+942,"auto_out_rvalid", false,-1);
    tracep->declBus(c+943,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+438,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+951,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+145,"io_enq_ready", false,-1);
    tracep->declBit(c+441,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+992,"io_deq_ready", false,-1);
    tracep->declBit(c+146,"io_deq_valid", false,-1);
    tracep->declBit(c+147,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+146,"full", false,-1);
    tracep->declBit(c+147,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+148,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+149,"io_enq_ready", false,-1);
    tracep->declBit(c+442,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+993,"io_deq_ready", false,-1);
    tracep->declBit(c+150,"io_deq_valid", false,-1);
    tracep->declBit(c+151,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+150,"full", false,-1);
    tracep->declBit(c+151,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+152,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+153,"io_enq_ready", false,-1);
    tracep->declBit(c+443,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+994,"io_deq_ready", false,-1);
    tracep->declBit(c+154,"io_deq_valid", false,-1);
    tracep->declBit(c+155,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+154,"full", false,-1);
    tracep->declBit(c+155,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+156,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+157,"io_enq_ready", false,-1);
    tracep->declBit(c+444,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+995,"io_deq_ready", false,-1);
    tracep->declBit(c+158,"io_deq_valid", false,-1);
    tracep->declBit(c+159,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+158,"full", false,-1);
    tracep->declBit(c+159,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+160,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+161,"io_enq_ready", false,-1);
    tracep->declBit(c+445,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+996,"io_deq_ready", false,-1);
    tracep->declBit(c+162,"io_deq_valid", false,-1);
    tracep->declBit(c+163,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+162,"full", false,-1);
    tracep->declBit(c+163,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+164,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+165,"io_enq_ready", false,-1);
    tracep->declBit(c+446,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+997,"io_deq_ready", false,-1);
    tracep->declBit(c+166,"io_deq_valid", false,-1);
    tracep->declBit(c+167,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+166,"full", false,-1);
    tracep->declBit(c+167,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+168,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+169,"io_enq_ready", false,-1);
    tracep->declBit(c+447,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+998,"io_deq_ready", false,-1);
    tracep->declBit(c+170,"io_deq_valid", false,-1);
    tracep->declBit(c+171,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+170,"full", false,-1);
    tracep->declBit(c+171,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+172,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+173,"io_enq_ready", false,-1);
    tracep->declBit(c+448,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+999,"io_deq_ready", false,-1);
    tracep->declBit(c+174,"io_deq_valid", false,-1);
    tracep->declBit(c+175,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+174,"full", false,-1);
    tracep->declBit(c+175,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+176,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+177,"io_enq_ready", false,-1);
    tracep->declBit(c+449,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1000,"io_deq_ready", false,-1);
    tracep->declBit(c+178,"io_deq_valid", false,-1);
    tracep->declBit(c+179,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+178,"full", false,-1);
    tracep->declBit(c+179,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+180,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+181,"io_enq_ready", false,-1);
    tracep->declBit(c+450,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1001,"io_deq_ready", false,-1);
    tracep->declBit(c+182,"io_deq_valid", false,-1);
    tracep->declBit(c+183,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+182,"full", false,-1);
    tracep->declBit(c+183,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+184,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+185,"io_enq_ready", false,-1);
    tracep->declBit(c+451,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1002,"io_deq_ready", false,-1);
    tracep->declBit(c+186,"io_deq_valid", false,-1);
    tracep->declBit(c+187,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+186,"full", false,-1);
    tracep->declBit(c+187,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+188,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+189,"io_enq_ready", false,-1);
    tracep->declBit(c+452,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1003,"io_deq_ready", false,-1);
    tracep->declBit(c+190,"io_deq_valid", false,-1);
    tracep->declBit(c+191,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+190,"full", false,-1);
    tracep->declBit(c+191,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+192,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+193,"io_enq_ready", false,-1);
    tracep->declBit(c+453,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1004,"io_deq_ready", false,-1);
    tracep->declBit(c+194,"io_deq_valid", false,-1);
    tracep->declBit(c+195,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+194,"full", false,-1);
    tracep->declBit(c+195,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+196,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+197,"io_enq_ready", false,-1);
    tracep->declBit(c+454,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1005,"io_deq_ready", false,-1);
    tracep->declBit(c+198,"io_deq_valid", false,-1);
    tracep->declBit(c+199,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+198,"full", false,-1);
    tracep->declBit(c+199,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+200,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+201,"io_enq_ready", false,-1);
    tracep->declBit(c+455,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1006,"io_deq_ready", false,-1);
    tracep->declBit(c+202,"io_deq_valid", false,-1);
    tracep->declBit(c+203,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+202,"full", false,-1);
    tracep->declBit(c+203,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+204,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+205,"io_enq_ready", false,-1);
    tracep->declBit(c+456,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1007,"io_deq_ready", false,-1);
    tracep->declBit(c+206,"io_deq_valid", false,-1);
    tracep->declBit(c+207,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+206,"full", false,-1);
    tracep->declBit(c+207,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+208,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+209,"io_enq_ready", false,-1);
    tracep->declBit(c+457,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1008,"io_deq_ready", false,-1);
    tracep->declBit(c+210,"io_deq_valid", false,-1);
    tracep->declBit(c+211,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+210,"full", false,-1);
    tracep->declBit(c+211,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+212,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+458,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1009,"io_deq_ready", false,-1);
    tracep->declBit(c+214,"io_deq_valid", false,-1);
    tracep->declBit(c+215,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+214,"full", false,-1);
    tracep->declBit(c+215,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+216,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+459,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1010,"io_deq_ready", false,-1);
    tracep->declBit(c+218,"io_deq_valid", false,-1);
    tracep->declBit(c+219,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+218,"full", false,-1);
    tracep->declBit(c+219,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+220,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+460,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1011,"io_deq_ready", false,-1);
    tracep->declBit(c+222,"io_deq_valid", false,-1);
    tracep->declBit(c+223,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+222,"full", false,-1);
    tracep->declBit(c+223,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+224,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+461,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1012,"io_deq_ready", false,-1);
    tracep->declBit(c+226,"io_deq_valid", false,-1);
    tracep->declBit(c+227,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+226,"full", false,-1);
    tracep->declBit(c+227,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+228,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+462,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1013,"io_deq_ready", false,-1);
    tracep->declBit(c+230,"io_deq_valid", false,-1);
    tracep->declBit(c+231,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+230,"full", false,-1);
    tracep->declBit(c+231,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+232,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+463,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1014,"io_deq_ready", false,-1);
    tracep->declBit(c+234,"io_deq_valid", false,-1);
    tracep->declBit(c+235,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+234,"full", false,-1);
    tracep->declBit(c+235,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+236,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+464,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1015,"io_deq_ready", false,-1);
    tracep->declBit(c+238,"io_deq_valid", false,-1);
    tracep->declBit(c+239,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+238,"full", false,-1);
    tracep->declBit(c+239,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+240,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+465,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1016,"io_deq_ready", false,-1);
    tracep->declBit(c+242,"io_deq_valid", false,-1);
    tracep->declBit(c+243,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+242,"full", false,-1);
    tracep->declBit(c+243,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+244,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+466,"io_enq_valid", false,-1);
    tracep->declBit(c+31,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1017,"io_deq_ready", false,-1);
    tracep->declBit(c+246,"io_deq_valid", false,-1);
    tracep->declBit(c+247,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+246,"full", false,-1);
    tracep->declBit(c+247,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+248,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+467,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1018,"io_deq_ready", false,-1);
    tracep->declBit(c+250,"io_deq_valid", false,-1);
    tracep->declBit(c+251,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+250,"full", false,-1);
    tracep->declBit(c+251,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+252,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+468,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1019,"io_deq_ready", false,-1);
    tracep->declBit(c+254,"io_deq_valid", false,-1);
    tracep->declBit(c+255,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+254,"full", false,-1);
    tracep->declBit(c+255,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+256,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+469,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1020,"io_deq_ready", false,-1);
    tracep->declBit(c+258,"io_deq_valid", false,-1);
    tracep->declBit(c+259,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+258,"full", false,-1);
    tracep->declBit(c+259,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+260,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+470,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1021,"io_deq_ready", false,-1);
    tracep->declBit(c+262,"io_deq_valid", false,-1);
    tracep->declBit(c+263,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+262,"full", false,-1);
    tracep->declBit(c+263,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+264,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+471,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1022,"io_deq_ready", false,-1);
    tracep->declBit(c+266,"io_deq_valid", false,-1);
    tracep->declBit(c+267,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+266,"full", false,-1);
    tracep->declBit(c+267,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+268,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+472,"io_enq_valid", false,-1);
    tracep->declBit(c+32,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1023,"io_deq_ready", false,-1);
    tracep->declBit(c+270,"io_deq_valid", false,-1);
    tracep->declBit(c+271,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+270,"full", false,-1);
    tracep->declBit(c+271,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+272,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+29,"auto_master_out_awready", false,-1);
    tracep->declBit(c+833,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1105,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+834,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+729,"auto_master_out_wready", false,-1);
    tracep->declBit(c+835,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+836,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+837,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1109,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+838,"auto_master_out_bready", false,-1);
    tracep->declBit(c+940,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+941,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+437,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_master_out_arready", false,-1);
    tracep->declBit(c+839,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1110,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+840,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1112,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1113,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+841,"auto_master_out_rready", false,-1);
    tracep->declBit(c+942,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+943,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+438,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+439,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+1088,"io_interrupt", false,-1);
    tracep->declBit(c+29,"io_master_awready", false,-1);
    tracep->declBit(c+833,"io_master_awvalid", false,-1);
    tracep->declBus(c+1105,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+834,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1106,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+729,"io_master_wready", false,-1);
    tracep->declBit(c+835,"io_master_wvalid", false,-1);
    tracep->declBus(c+836,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+837,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1109,"io_master_wlast", false,-1);
    tracep->declBit(c+838,"io_master_bready", false,-1);
    tracep->declBit(c+940,"io_master_bvalid", false,-1);
    tracep->declBus(c+941,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+437,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"io_master_arready", false,-1);
    tracep->declBit(c+839,"io_master_arvalid", false,-1);
    tracep->declBus(c+1110,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+840,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1111,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1112,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1113,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+841,"io_master_rready", false,-1);
    tracep->declBit(c+942,"io_master_rvalid", false,-1);
    tracep->declBus(c+943,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+438,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+439,"io_master_rlast", false,-1);
    tracep->declBit(c+1115,"io_slave_awready", false,-1);
    tracep->declBit(c+1088,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1116,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1117,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1118,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1119,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1120,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1121,"io_slave_wready", false,-1);
    tracep->declBit(c+1088,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1117,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1116,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1088,"io_slave_wlast", false,-1);
    tracep->declBit(c+1088,"io_slave_bready", false,-1);
    tracep->declBit(c+1122,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1123,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1124,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1125,"io_slave_arready", false,-1);
    tracep->declBit(c+1088,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1116,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1117,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1118,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1119,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1120,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1088,"io_slave_rready", false,-1);
    tracep->declBit(c+1126,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1127,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1128,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1129,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1130,"io_slave_rlast", false,-1);
    tracep->declBus(c+273,"pc", false,-1, 31,0);
    tracep->declBus(c+731,"dnpc", false,-1, 31,0);
    tracep->declBit(c+274,"PCU_VALID", false,-1);
    tracep->declBit(c+275,"IFU_READY", false,-1);
    tracep->declBus(c+732,"inst", false,-1, 31,0);
    tracep->declBit(c+733,"IFU_VALID", false,-1);
    tracep->declBit(c+734,"IDU_READY", false,-1);
    tracep->declBus(c+1131,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1131,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+276,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1056,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1116,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1118,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+277,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1116,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+735,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+278,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+736,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1119,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+279,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1120,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+280,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1057,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1058,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1088,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+790,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1088,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+791,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1059,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+1088,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+281,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+792,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1024,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+282,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1132,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+737,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+738,"IDU_VALID", false,-1);
    tracep->declBit(c+739,"EXU_READY", false,-1);
    tracep->declBus(c+740,"op", false,-1, 6,0);
    tracep->declBus(c+283,"rd", false,-1, 4,0);
    tracep->declBus(c+741,"funct3", false,-1, 2,0);
    tracep->declBus(c+284,"rs1", false,-1, 4,0);
    tracep->declBus(c+285,"rs2", false,-1, 4,0);
    tracep->declBus(c+286,"imm", false,-1, 31,0);
    tracep->declBus(c+287,"funct7", false,-1, 6,0);
    tracep->declBus(c+288,"shamt", false,-1, 4,0);
    tracep->declBit(c+742,"sram_lsu_read", false,-1);
    tracep->declBit(c+743,"sram_lsu_write", false,-1);
    tracep->declBit(c+1060,"LSU_DONE", false,-1);
    tracep->declBit(c+289,"EXU_VALID", false,-1);
    tracep->declBit(c+290,"WBU_READY", false,-1);
    tracep->declBus(c+291,"res", false,-1, 31,0);
    tracep->declBit(c+744,"ls_valid", false,-1);
    tracep->declBit(c+745,"ls_wen", false,-1);
    tracep->declBus(c+746,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+747,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+748,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+749,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+292,"mepc", false,-1, 31,0);
    tracep->declBus(c+293,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+294,"mstatus", false,-1, 31,0);
    tracep->declBus(c+295,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+296,"mcause", false,-1, 31,0);
    tracep->declBus(c+297,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+298,"mtvec", false,-1, 31,0);
    tracep->declBus(c+299,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+300,"gpr_wen", false,-1);
    tracep->declBit(c+301,"mepc_wen", false,-1);
    tracep->declBit(c+302,"mstatus_wen", false,-1);
    tracep->declBit(c+303,"mcause_wen", false,-1);
    tracep->declBit(c+304,"mtvec_wen", false,-1);
    tracep->declBus(c+1061,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+713,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+714,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+715,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1061,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+716,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1133,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1134,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1135,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+750,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1136,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+751,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1137,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1138,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1139,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1140,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1062,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1063,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+717,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+793,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+718,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+794,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1025,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+719,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+720,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+795,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1026,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+721,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1141,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+752,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+880,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+881,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+882,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+305,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+883,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1142,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1143,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1144,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+306,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1145,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+307,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1146,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1147,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1148,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1149,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+308,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+309,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+884,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+310,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+885,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+753,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+311,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+886,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+887,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+312,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+313,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+888,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+1150,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+314,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+315,"wbu_done", false,-1);
    tracep->declBit(c+316,"difftest", false,-1);
    tracep->declBus(c+317,"xrd", false,-1, 31,0);
    tracep->declBus(c+318,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+319,"rf_wen", false,-1);
    tracep->declBus(c+320,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+321,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+322,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+323,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+324,"mepc_en", false,-1);
    tracep->declBit(c+325,"mstatus_en", false,-1);
    tracep->declBit(c+326,"mcause_en", false,-1);
    tracep->declBit(c+327,"mtvec_en", false,-1);
    tracep->declBus(c+328,"r1", false,-1, 31,0);
    tracep->declBus(c+754,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+742,"sram_lsu_read", false,-1);
    tracep->declBit(c+743,"sram_lsu_write", false,-1);
    tracep->declBit(c+1060,"LSU_DONE", false,-1);
    tracep->declBit(c+738,"IDU_VALID", false,-1);
    tracep->declBit(c+739,"EXU_READY", false,-1);
    tracep->declBit(c+289,"EXU_VALID", false,-1);
    tracep->declBit(c+290,"WBU_READY", false,-1);
    tracep->declBus(c+740,"op", false,-1, 6,0);
    tracep->declBus(c+741,"funct3", false,-1, 2,0);
    tracep->declBus(c+286,"imm", false,-1, 31,0);
    tracep->declBus(c+287,"funct7", false,-1, 6,0);
    tracep->declBus(c+288,"shamt", false,-1, 4,0);
    tracep->declBus(c+328,"r1", false,-1, 31,0);
    tracep->declBus(c+754,"r2", false,-1, 31,0);
    tracep->declBus(c+291,"res_reg", false,-1, 31,0);
    tracep->declBit(c+744,"ls_valid", false,-1);
    tracep->declBit(c+745,"ls_wen", false,-1);
    tracep->declBus(c+746,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+747,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+748,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+749,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1061,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+273,"pc", false,-1, 31,0);
    tracep->declBus(c+731,"dnpc", false,-1, 31,0);
    tracep->declBus(c+292,"mepc", false,-1, 31,0);
    tracep->declBus(c+294,"mstatus", false,-1, 31,0);
    tracep->declBus(c+296,"mcause", false,-1, 31,0);
    tracep->declBus(c+298,"mtvec", false,-1, 31,0);
    tracep->declBus(c+293,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+295,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+297,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+299,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+300,"gpr_wen_reg", false,-1);
    tracep->declBit(c+301,"mepc_wen_reg", false,-1);
    tracep->declBit(c+302,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+303,"mcause_wen_reg", false,-1);
    tracep->declBit(c+304,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+739,"exu_ready", false,-1);
    tracep->declBit(c+289,"exu_valid", false,-1);
    tracep->declBus(c+1120,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1151,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1152,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+1153,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+755,"state", false,-1, 1,0);
    tracep->declBus(c+1064,"next_state", false,-1, 1,0);
    tracep->declBus(c+756,"a", false,-1, 31,0);
    tracep->declBus(c+757,"b", false,-1, 31,0);
    tracep->declBus(c+1027,"res", false,-1, 31,0);
    tracep->declBus(c+758,"csr", false,-1, 31,0);
    tracep->declBus(c+759,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+418,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+759,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+760,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+759,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+286,"offset", false,-1, 31,0);
    tracep->declBit(c+761,"jalen", false,-1);
    tracep->declBit(c+762,"jalren", false,-1);
    tracep->declBit(c+419,"beqen", false,-1);
    tracep->declBit(c+420,"bneen", false,-1);
    tracep->declBit(c+421,"blten", false,-1);
    tracep->declBit(c+422,"bgeen", false,-1);
    tracep->declBit(c+423,"bltuen", false,-1);
    tracep->declBit(c+424,"bgeuen", false,-1);
    tracep->declBit(c+763,"ecall_en", false,-1);
    tracep->declBit(c+425,"mret_en", false,-1);
    tracep->declBit(c+764,"gpr_wen", false,-1);
    tracep->declBit(c+765,"mepc_wen", false,-1);
    tracep->declBit(c+766,"mstatus_wen", false,-1);
    tracep->declBit(c+767,"mcause_wen", false,-1);
    tracep->declBit(c+768,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+732,"inst", false,-1, 31,0);
    tracep->declBit(c+733,"IFU_VALID", false,-1);
    tracep->declBit(c+734,"IDU_READY", false,-1);
    tracep->declBit(c+738,"IDU_VALID", false,-1);
    tracep->declBit(c+739,"EXU_READY", false,-1);
    tracep->declBus(c+740,"op_reg", false,-1, 6,0);
    tracep->declBus(c+283,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+741,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+284,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+285,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+286,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+287,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+288,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+769,"op", false,-1, 6,0);
    tracep->declBus(c+770,"rd", false,-1, 4,0);
    tracep->declBus(c+771,"funct3", false,-1, 2,0);
    tracep->declBus(c+772,"rs1", false,-1, 4,0);
    tracep->declBus(c+773,"rs2", false,-1, 4,0);
    tracep->declBus(c+774,"immI", false,-1, 31,0);
    tracep->declBus(c+775,"immU", false,-1, 31,0);
    tracep->declBus(c+776,"immS", false,-1, 31,0);
    tracep->declBus(c+777,"immB", false,-1, 31,0);
    tracep->declBus(c+778,"immJ", false,-1, 31,0);
    tracep->declBus(c+779,"imm", false,-1, 31,0);
    tracep->declBus(c+780,"funct7", false,-1, 6,0);
    tracep->declBus(c+781,"shamt", false,-1, 4,0);
    tracep->declBit(c+734,"idu_ready", false,-1);
    tracep->declBit(c+738,"idu_valid", false,-1);
    tracep->declBus(c+1154,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1155,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+782,"state", false,-1);
    tracep->declBit(c+2,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+273,"pc", false,-1, 31,0);
    tracep->declBus(c+732,"inst", false,-1, 31,0);
    tracep->declBit(c+274,"PCU_VALID", false,-1);
    tracep->declBit(c+275,"IFU_READY", false,-1);
    tracep->declBit(c+733,"IFU_VALID", false,-1);
    tracep->declBit(c+734,"IDU_READY", false,-1);
    tracep->declBit(c+315,"wbu_done", false,-1);
    tracep->declBit(c+790,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+1088,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1116,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1131,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1118,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1119,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1120,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+791,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+1088,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1131,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1116,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1132,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+1088,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1059,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+735,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1057,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+792,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+281,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+278,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+276,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+277,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+279,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+280,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+282,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1024,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+736,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1056,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1058,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+737,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+275,"ifu_ready", false,-1);
    tracep->declBit(c+733,"ifu_valid", false,-1);
    tracep->declBus(c+1120,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1151,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1152,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1153,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+783,"current_state", false,-1, 1,0);
    tracep->declBus(c+3,"next_state", false,-1, 1,0);
    tracep->declBit(c+281,"axi_arvalid", false,-1);
    tracep->declBit(c+282,"axi_rready", false,-1);
    tracep->declBus(c+278,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+276,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+277,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+279,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+280,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1120,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+1151,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+1152,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+1153,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+329,"state", false,-1, 1,0);
    tracep->declBit(c+330,"sram_start", false,-1);
    tracep->declBit(c+331,"sram_ifu_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+742,"sram_lsu_read", false,-1);
    tracep->declBit(c+743,"sram_lsu_write", false,-1);
    tracep->declBit(c+1060,"LSU_DONE", false,-1);
    tracep->declBus(c+1061,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+744,"valid", false,-1);
    tracep->declBit(c+745,"wen", false,-1);
    tracep->declBus(c+746,"waddr", false,-1, 31,0);
    tracep->declBus(c+747,"wdata", false,-1, 31,0);
    tracep->declBus(c+748,"raddr", false,-1, 31,0);
    tracep->declBus(c+749,"wmask", false,-1, 3,0);
    tracep->declBit(c+793,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+717,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1135,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+713,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1133,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1137,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1139,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+794,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+718,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+714,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+716,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1141,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+719,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1025,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+750,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1062,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+795,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+720,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+1136,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+715,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1134,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1138,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1140,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+721,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1026,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+751,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1061,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1063,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+752,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+1120,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1151,"READ", false,-1, 1,0);
    tracep->declBus(c+1152,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1153,"DONE", false,-1, 1,0);
    tracep->declBus(c+722,"state", false,-1, 1,0);
    tracep->declBit(c+717,"axi_awvalid", false,-1);
    tracep->declBit(c+718,"axi_wvalid", false,-1);
    tracep->declBus(c+1135,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+713,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+714,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1133,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1137,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1139,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+716,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+719,"axi_bready", false,-1);
    tracep->declBit(c+720,"axi_arvalid", false,-1);
    tracep->declBit(c+721,"axi_rready", false,-1);
    tracep->declBus(c+1136,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+715,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1134,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1138,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1140,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+273,"pc", false,-1, 31,0);
    tracep->declBus(c+731,"dnpc", false,-1, 31,0);
    tracep->declBit(c+274,"PCU_VALID", false,-1);
    tracep->declBit(c+275,"IFU_READY", false,-1);
    tracep->declBit(c+274,"pcu_valid", false,-1);
    tracep->declBus(c+1154,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1155,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+332,"state", false,-1);
    tracep->declBit(c+4,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1156,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1157,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBus(c+317,"wdata", false,-1, 31,0);
    tracep->declBus(c+318,"waddr", false,-1, 4,0);
    tracep->declBit(c+319,"wen", false,-1);
    tracep->declBus(c+284,"raddr1", false,-1, 4,0);
    tracep->declBus(c+328,"r1", false,-1, 31,0);
    tracep->declBus(c+285,"raddr2", false,-1, 4,0);
    tracep->declBus(c+754,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+333+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+289,"EXU_VALID", false,-1);
    tracep->declBit(c+290,"WBU_READY", false,-1);
    tracep->declBit(c+315,"wbu_done", false,-1);
    tracep->declBit(c+316,"difftest", false,-1);
    tracep->declBus(c+317,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+291,"res", false,-1, 31,0);
    tracep->declBus(c+318,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+283,"rd", false,-1, 4,0);
    tracep->declBit(c+319,"wen_reg", false,-1);
    tracep->declBit(c+300,"gpr_wen", false,-1);
    tracep->declBus(c+293,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+295,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+297,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+299,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+320,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+321,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+322,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+323,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+301,"mepc_wen", false,-1);
    tracep->declBit(c+302,"mstatus_wen", false,-1);
    tracep->declBit(c+303,"mcause_wen", false,-1);
    tracep->declBit(c+304,"mtvec_wen", false,-1);
    tracep->declBit(c+324,"mepc_wen_reg", false,-1);
    tracep->declBit(c+325,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+326,"mcause_wen_reg", false,-1);
    tracep->declBit(c+327,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+291,"xrd", false,-1, 31,0);
    tracep->declBus(c+283,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+300,"o_rf_wen", false,-1);
    tracep->declBus(c+293,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+295,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+297,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+299,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+290,"wbu_ready", false,-1);
    tracep->declBus(c+1120,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1151,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1152,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1153,"NULL", false,-1, 1,0);
    tracep->declBus(c+365,"state", false,-1, 1,0);
    tracep->declBus(c+5,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+790,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1088,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1116,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1131,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1118,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1119,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1120,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+791,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1088,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1131,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1116,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1132,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1088,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+1059,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+735,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1057,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+792,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+281,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+278,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+276,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+277,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+279,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+280,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+282,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1024,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+736,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1056,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1058,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+737,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+793,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+717,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1135,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+713,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1133,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1137,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1139,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+794,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+718,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+714,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+716,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1141,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+719,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1025,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+750,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1062,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+795,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+720,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1136,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+715,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1134,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1138,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1140,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+721,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1026,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+751,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1061,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1063,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+752,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+29,"io_master_awready", false,-1);
    tracep->declBit(c+833,"io_master_awvalid", false,-1);
    tracep->declBus(c+1105,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+834,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1106,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1107,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+729,"io_master_wready", false,-1);
    tracep->declBit(c+835,"io_master_wvalid", false,-1);
    tracep->declBus(c+836,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+837,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1109,"io_master_wlast", false,-1);
    tracep->declBit(c+838,"io_master_bready", false,-1);
    tracep->declBit(c+940,"io_master_bvalid", false,-1);
    tracep->declBus(c+941,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+437,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"io_master_arready", false,-1);
    tracep->declBit(c+839,"io_master_arvalid", false,-1);
    tracep->declBus(c+1110,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+840,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1111,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1112,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1113,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+841,"io_master_rready", false,-1);
    tracep->declBit(c+942,"io_master_rvalid", false,-1);
    tracep->declBus(c+943,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+438,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+439,"io_master_rlast", false,-1);
    tracep->declBit(c+310,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+884,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1144,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+880,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1142,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1146,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1148,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+753,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+885,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+881,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+883,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1150,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+886,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+311,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+306,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+308,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+312,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+887,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1145,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+882,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1143,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1147,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1149,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+888,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+313,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+307,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+305,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+309,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+314,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+889,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+890,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+891,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1028,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+892,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+784,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+426,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+785,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1158,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+427,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1159,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+786,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+428,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+787,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+429,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1065,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1066,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+893,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+894,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+895,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+796,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1067,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+896,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+897,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+898,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1029,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+899,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+788,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1160,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1120,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1151,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1152,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1153,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+789,"state", false,-1, 1,0);
    tracep->declBus(c+6,"next_state", false,-1, 1,0);
    tracep->declBus(c+1161,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1162,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+900,"sel_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+1157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1117,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+322,"din", false,-1, 31,0);
    tracep->declBus(c+296,"dout", false,-1, 31,0);
    tracep->declBit(c+326,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+1157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1117,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+320,"din", false,-1, 31,0);
    tracep->declBus(c+292,"dout", false,-1, 31,0);
    tracep->declBit(c+324,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+1157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1163,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+321,"din", false,-1, 31,0);
    tracep->declBus(c+294,"dout", false,-1, 31,0);
    tracep->declBit(c+325,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+1157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1117,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+323,"din", false,-1, 31,0);
    tracep->declBus(c+298,"dout", false,-1, 31,0);
    tracep->declBit(c+327,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+310,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+884,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1144,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+880,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1142,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1146,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1148,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+753,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+885,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+881,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+883,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1150,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+886,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+311,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+306,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+308,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+312,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+887,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1145,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+882,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1143,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1147,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1149,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+888,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+313,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+307,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+305,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+309,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+314,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+310,"axi_awready", false,-1);
    tracep->declBit(c+753,"axi_wready", false,-1);
    tracep->declBit(c+311,"axi_bvalid", false,-1);
    tracep->declBit(c+312,"axi_arready", false,-1);
    tracep->declBit(c+313,"axi_rvalid", false,-1);
    tracep->declBit(c+314,"axi_rlast", false,-1);
    tracep->declBus(c+308,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+309,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+306,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+307,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+305,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1161,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1162,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+367,"mtime", false,-1, 63,0);
    tracep->declBus(c+435,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"io_d", false,-1);
    tracep->declBit(c+369,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"io_d", false,-1);
    tracep->declBit(c+369,"io_q", false,-1);
    tracep->declBit(c+369,"sync_0", false,-1);
    tracep->declBit(c+370,"sync_1", false,-1);
    tracep->declBit(c+371,"sync_2", false,-1);
    tracep->declBit(c+372,"sync_3", false,-1);
    tracep->declBit(c+373,"sync_4", false,-1);
    tracep->declBit(c+374,"sync_5", false,-1);
    tracep->declBit(c+375,"sync_6", false,-1);
    tracep->declBit(c+376,"sync_7", false,-1);
    tracep->declBit(c+377,"sync_8", false,-1);
    tracep->declBit(c+378,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+808,"auto_in_psel", false,-1);
    tracep->declBit(c+433,"auto_in_penable", false,-1);
    tracep->declBit(c+799,"auto_in_pwrite", false,-1);
    tracep->declBus(c+807,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1095,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"auto_in_pready", false,-1);
    tracep->declBit(c+1103,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1104,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1078,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1079,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1080,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1081,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1082,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1083,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1084,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1085,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1086,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1087,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBus(c+901,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+808,"in_psel", false,-1);
    tracep->declBit(c+433,"in_penable", false,-1);
    tracep->declBus(c+1095,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+799,"in_pwrite", false,-1);
    tracep->declBus(c+800,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"in_pready", false,-1);
    tracep->declBus(c+1104,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1103,"in_pslverr", false,-1);
    tracep->declBus(c+1078,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1079,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1080,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1081,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1082,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1083,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1084,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1085,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1086,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1087,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+806,"auto_in_psel", false,-1);
    tracep->declBit(c+432,"auto_in_penable", false,-1);
    tracep->declBit(c+799,"auto_in_pwrite", false,-1);
    tracep->declBus(c+807,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1095,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"auto_in_pready", false,-1);
    tracep->declBit(c+1100,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1101,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1088,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1088,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBus(c+901,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+806,"in_psel", false,-1);
    tracep->declBit(c+432,"in_penable", false,-1);
    tracep->declBus(c+1095,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+799,"in_pwrite", false,-1);
    tracep->declBus(c+800,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"in_pready", false,-1);
    tracep->declBus(c+1101,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1100,"in_pslverr", false,-1);
    tracep->declBit(c+1088,"ps2_clk", false,-1);
    tracep->declBit(c+1088,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+864,"auto_in_awvalid", false,-1);
    tracep->declBit(c+865,"auto_in_wvalid", false,-1);
    tracep->declBit(c+87,"auto_in_arready", false,-1);
    tracep->declBit(c+866,"auto_in_arvalid", false,-1);
    tracep->declBus(c+18,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+867,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1055,"auto_in_rready", false,-1);
    tracep->declBit(c+88,"auto_in_rvalid", false,-1);
    tracep->declBus(c+89,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+90,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+88,"state", false,-1);
    tracep->declBus(c+90,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+89,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+902,"raddr", false,-1, 31,0);
    tracep->declBit(c+903,"ren", false,-1);
    tracep->declBus(c+904,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+809,"auto_in_psel", false,-1);
    tracep->declBit(c+434,"auto_in_penable", false,-1);
    tracep->declBit(c+799,"auto_in_pwrite", false,-1);
    tracep->declBus(c+797,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1051,"auto_in_pready", false,-1);
    tracep->declBit(c+1088,"auto_in_pslverr", false,-1);
    tracep->declBus(c+14,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1048,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1049,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+933,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBus(c+797,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+809,"in_psel", false,-1);
    tracep->declBit(c+434,"in_penable", false,-1);
    tracep->declBus(c+1095,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+799,"in_pwrite", false,-1);
    tracep->declBus(c+800,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1051,"in_pready", false,-1);
    tracep->declBus(c+14,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1088,"in_pslverr", false,-1);
    tracep->declBit(c+1048,"qspi_sck", false,-1);
    tracep->declBit(c+1049,"qspi_ce_n", false,-1);
    tracep->declBus(c+933,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+933,"din", false,-1, 3,0);
    tracep->declBus(c+1030,"dout", false,-1, 3,0);
    tracep->declBus(c+1031,"douten", false,-1, 3,0);
    tracep->declBit(c+1068,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1044,"clk_i", false,-1);
    tracep->declBit(c+1045,"rst_i", false,-1);
    tracep->declBus(c+797,"adr_i", false,-1, 31,0);
    tracep->declBus(c+800,"dat_i", false,-1, 31,0);
    tracep->declBus(c+14,"dat_o", false,-1, 31,0);
    tracep->declBus(c+801,"sel_i", false,-1, 3,0);
    tracep->declBit(c+809,"cyc_i", false,-1);
    tracep->declBit(c+809,"stb_i", false,-1);
    tracep->declBit(c+1068,"ack_o", false,-1);
    tracep->declBit(c+799,"we_i", false,-1);
    tracep->declBit(c+1048,"sck", false,-1);
    tracep->declBit(c+1049,"ce_n", false,-1);
    tracep->declBus(c+933,"din", false,-1, 3,0);
    tracep->declBus(c+1030,"dout", false,-1, 3,0);
    tracep->declBus(c+1031,"douten", false,-1, 3,0);
    tracep->declBus(c+1154,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1155,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+489,"mr_sck", false,-1);
    tracep->declBit(c+490,"mr_ce_n", false,-1);
    tracep->declBus(c+933,"mr_din", false,-1, 3,0);
    tracep->declBus(c+491,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+492,"mr_doe", false,-1);
    tracep->declBit(c+493,"mw_sck", false,-1);
    tracep->declBit(c+494,"mw_ce_n", false,-1);
    tracep->declBus(c+933,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1032,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+495,"mw_doe", false,-1);
    tracep->declBit(c+1033,"mr_rd", false,-1);
    tracep->declBit(c+496,"mr_done", false,-1);
    tracep->declBit(c+1034,"mw_wr", false,-1);
    tracep->declBit(c+1035,"mw_done", false,-1);
    tracep->declBit(c+809,"wb_valid", false,-1);
    tracep->declBit(c+905,"wb_we", false,-1);
    tracep->declBit(c+906,"wb_re", false,-1);
    tracep->declBit(c+497,"state", false,-1);
    tracep->declBit(c+1036,"nstate", false,-1);
    tracep->declBus(c+907,"size", false,-1, 2,0);
    tracep->declBus(c+908,"byte0", false,-1, 7,0);
    tracep->declBus(c+909,"byte1", false,-1, 7,0);
    tracep->declBus(c+910,"byte2", false,-1, 7,0);
    tracep->declBus(c+911,"byte3", false,-1, 7,0);
    tracep->declBus(c+912,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1069,"rst_n", false,-1);
    tracep->declBus(c+913,"addr", false,-1, 23,0);
    tracep->declBit(c+1033,"rd", false,-1);
    tracep->declBus(c+1164,"size", false,-1, 2,0);
    tracep->declBit(c+496,"done", false,-1);
    tracep->declBus(c+14,"line", false,-1, 31,0);
    tracep->declBit(c+489,"sck", false,-1);
    tracep->declBit(c+490,"ce_n", false,-1);
    tracep->declBus(c+933,"din", false,-1, 3,0);
    tracep->declBus(c+491,"dout", false,-1, 3,0);
    tracep->declBit(c+492,"douten", false,-1);
    tracep->declBus(c+1154,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1155,"READ", false,-1, 0,0);
    tracep->declBus(c+1165,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+498,"state", false,-1);
    tracep->declBit(c+1037,"nstate", false,-1);
    tracep->declBus(c+499,"counter", false,-1, 7,0);
    tracep->declBus(c+500,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+379+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1166,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+501,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1069,"rst_n", false,-1);
    tracep->declBus(c+914,"addr", false,-1, 23,0);
    tracep->declBus(c+912,"line", false,-1, 31,0);
    tracep->declBus(c+907,"size", false,-1, 2,0);
    tracep->declBit(c+1034,"wr", false,-1);
    tracep->declBit(c+1035,"done", false,-1);
    tracep->declBit(c+493,"sck", false,-1);
    tracep->declBit(c+494,"ce_n", false,-1);
    tracep->declBus(c+933,"din", false,-1, 3,0);
    tracep->declBus(c+1032,"dout", false,-1, 3,0);
    tracep->declBit(c+495,"douten", false,-1);
    tracep->declBus(c+1154,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1155,"WRITE", false,-1, 0,0);
    tracep->declBus(c+915,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+502,"state", false,-1);
    tracep->declBit(c+1038,"nstate", false,-1);
    tracep->declBus(c+503,"counter", false,-1, 7,0);
    tracep->declBus(c+504,"saddr", false,-1, 23,0);
    tracep->declBus(c+1167,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+803,"auto_in_psel", false,-1);
    tracep->declBit(c+430,"auto_in_penable", false,-1);
    tracep->declBit(c+799,"auto_in_pwrite", false,-1);
    tracep->declBus(c+797,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+485,"auto_in_pready", false,-1);
    tracep->declBit(c+1088,"auto_in_pslverr", false,-1);
    tracep->declBus(c+486,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1050,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+476,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+477,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+478,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+479,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+480,"sdram_bundle_we", false,-1);
    tracep->declBus(c+481,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+482,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+483,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+484,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBus(c+797,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+803,"in_psel", false,-1);
    tracep->declBit(c+430,"in_penable", false,-1);
    tracep->declBus(c+1095,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+799,"in_pwrite", false,-1);
    tracep->declBus(c+800,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+485,"in_pready", false,-1);
    tracep->declBus(c+486,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1088,"in_pslverr", false,-1);
    tracep->declBit(c+1050,"sdram_clk", false,-1);
    tracep->declBit(c+476,"sdram_cke", false,-1);
    tracep->declBit(c+477,"sdram_cs", false,-1);
    tracep->declBit(c+478,"sdram_ras", false,-1);
    tracep->declBit(c+479,"sdram_cas", false,-1);
    tracep->declBit(c+480,"sdram_we", false,-1);
    tracep->declBus(c+481,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+482,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+483,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+484,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+505,"sdram_dout_en", false,-1);
    tracep->declBus(c+506,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+383,"state", false,-1, 1,0);
    tracep->declBit(c+507,"req_accept", false,-1);
    tracep->declBit(c+916,"is_read", false,-1);
    tracep->declBit(c+917,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1044,"clk_i", false,-1);
    tracep->declBit(c+1045,"rst_i", false,-1);
    tracep->declBus(c+918,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+916,"inport_rd_i", false,-1);
    tracep->declBus(c+1118,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+797,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+800,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+484,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+507,"inport_accept_o", false,-1);
    tracep->declBit(c+485,"inport_ack_o", false,-1);
    tracep->declBit(c+1088,"inport_error_o", false,-1);
    tracep->declBus(c+486,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1050,"sdram_clk_o", false,-1);
    tracep->declBit(c+476,"sdram_cke_o", false,-1);
    tracep->declBit(c+477,"sdram_cs_o", false,-1);
    tracep->declBit(c+478,"sdram_ras_o", false,-1);
    tracep->declBit(c+479,"sdram_cas_o", false,-1);
    tracep->declBit(c+480,"sdram_we_o", false,-1);
    tracep->declBus(c+483,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+481,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+482,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+506,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+505,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1168,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1169,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1170,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1171,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1171,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1171,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1172,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1173,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1174,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1175,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1176,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1172,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1177,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1178,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1179,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1180,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1181,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1182,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1183,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1116,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1184,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1172,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1116,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1183,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1182,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1178,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1180,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1179,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1181,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1177,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1185,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1186,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1187,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1187,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1188,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1187,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1171,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1171,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1189,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+797,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+918,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+916,"ram_rd_w", false,-1);
    tracep->declBit(c+507,"ram_accept_w", false,-1);
    tracep->declBus(c+800,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+486,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+485,"ram_ack_w", false,-1);
    tracep->declBit(c+919,"ram_req_w", false,-1);
    tracep->declBus(c+508,"command_q", false,-1, 3,0);
    tracep->declBus(c+481,"addr_q", false,-1, 12,0);
    tracep->declBus(c+506,"data_q", false,-1, 15,0);
    tracep->declBit(c+509,"data_rd_en_q", false,-1);
    tracep->declBus(c+483,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+476,"cke_q", false,-1);
    tracep->declBus(c+482,"bank_q", false,-1, 1,0);
    tracep->declBus(c+510,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+511,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+484,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+512,"refresh_q", false,-1);
    tracep->declBus(c+513,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+514+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+518,"state_q", false,-1, 3,0);
    tracep->declBus(c+1039,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1040,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+519,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+520,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+920,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+921,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+922,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1172,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+521,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1041,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1190,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+522,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+523,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+524,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+525,"idx", false,-1, 31,0);
    tracep->declBus(c+526,"rd_q", false,-1, 3,0);
    tracep->declBit(c+485,"ack_q", false,-1);
    tracep->declArray(c+527,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+813,"auto_in_psel", false,-1);
    tracep->declBit(c+814,"auto_in_penable", false,-1);
    tracep->declBit(c+799,"auto_in_pwrite", false,-1);
    tracep->declBus(c+805,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1095,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+487,"auto_in_pready", false,-1);
    tracep->declBit(c+1088,"auto_in_pslverr", false,-1);
    tracep->declBus(c+488,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+474,"spi_bundle_sck", false,-1);
    tracep->declBus(c+475,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1046,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1047,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1191,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1192,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1193,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBus(c+923,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+813,"in_psel", false,-1);
    tracep->declBit(c+814,"in_penable", false,-1);
    tracep->declBus(c+1095,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+799,"in_pwrite", false,-1);
    tracep->declBus(c+800,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+487,"in_pready", false,-1);
    tracep->declBus(c+488,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1088,"in_pslverr", false,-1);
    tracep->declBit(c+474,"spi_sck", false,-1);
    tracep->declBus(c+475,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1046,"spi_mosi", false,-1);
    tracep->declBit(c+1047,"spi_miso", false,-1);
    tracep->declBit(c+530,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1194,"Tp", false,-1, 31,0);
    tracep->declBit(c+1044,"wb_clk_i", false,-1);
    tracep->declBit(c+1045,"wb_rst_i", false,-1);
    tracep->declBus(c+924,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+800,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+488,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+801,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+799,"wb_we_i", false,-1);
    tracep->declBit(c+813,"wb_stb_i", false,-1);
    tracep->declBit(c+814,"wb_cyc_i", false,-1);
    tracep->declBit(c+487,"wb_ack_o", false,-1);
    tracep->declBit(c+1088,"wb_err_o", false,-1);
    tracep->declBit(c+530,"wb_int_o", false,-1);
    tracep->declBus(c+475,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+474,"sclk_pad_o", false,-1);
    tracep->declBit(c+1046,"mosi_pad_o", false,-1);
    tracep->declBit(c+1047,"miso_pad_i", false,-1);
    tracep->declBus(c+531,"divider", false,-1, 15,0);
    tracep->declBus(c+532,"ctrl", false,-1, 13,0);
    tracep->declBus(c+533,"ss", false,-1, 7,0);
    tracep->declBus(c+1042,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+534,"rx", false,-1, 127,0);
    tracep->declBit(c+538,"rx_negedge", false,-1);
    tracep->declBit(c+539,"tx_negedge", false,-1);
    tracep->declBus(c+540,"char_len", false,-1, 6,0);
    tracep->declBit(c+541,"go", false,-1);
    tracep->declBit(c+542,"lsb", false,-1);
    tracep->declBit(c+543,"ie", false,-1);
    tracep->declBit(c+544,"ass", false,-1);
    tracep->declBit(c+925,"spi_divider_sel", false,-1);
    tracep->declBit(c+926,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+927,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+928,"spi_ss_sel", false,-1);
    tracep->declBit(c+545,"tip", false,-1);
    tracep->declBit(c+546,"pos_edge", false,-1);
    tracep->declBit(c+547,"neg_edge", false,-1);
    tracep->declBit(c+548,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1194,"Tp", false,-1, 31,0);
    tracep->declBit(c+1044,"clk_in", false,-1);
    tracep->declBit(c+1045,"rst", false,-1);
    tracep->declBit(c+545,"enable", false,-1);
    tracep->declBit(c+541,"go", false,-1);
    tracep->declBit(c+548,"last_clk", false,-1);
    tracep->declBus(c+531,"divider", false,-1, 15,0);
    tracep->declBit(c+474,"clk_out", false,-1);
    tracep->declBit(c+546,"pos_edge", false,-1);
    tracep->declBit(c+547,"neg_edge", false,-1);
    tracep->declBus(c+549,"cnt", false,-1, 15,0);
    tracep->declBit(c+550,"cnt_zero", false,-1);
    tracep->declBit(c+551,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1194,"Tp", false,-1, 31,0);
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1045,"rst", false,-1);
    tracep->declBus(c+929,"latch", false,-1, 3,0);
    tracep->declBus(c+801,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+540,"len", false,-1, 6,0);
    tracep->declBit(c+542,"lsb", false,-1);
    tracep->declBit(c+541,"go", false,-1);
    tracep->declBit(c+546,"pos_edge", false,-1);
    tracep->declBit(c+547,"neg_edge", false,-1);
    tracep->declBit(c+538,"rx_negedge", false,-1);
    tracep->declBit(c+539,"tx_negedge", false,-1);
    tracep->declBit(c+545,"tip", false,-1);
    tracep->declBit(c+548,"last", false,-1);
    tracep->declBus(c+800,"p_in", false,-1, 31,0);
    tracep->declArray(c+534,"p_out", false,-1, 127,0);
    tracep->declBit(c+474,"s_clk", false,-1);
    tracep->declBit(c+1047,"s_in", false,-1);
    tracep->declBit(c+1046,"s_out", false,-1);
    tracep->declBus(c+552,"cnt", false,-1, 7,0);
    tracep->declArray(c+534,"data", false,-1, 127,0);
    tracep->declBus(c+553,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+554,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+555,"rx_clk", false,-1);
    tracep->declBit(c+556,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+810,"auto_in_psel", false,-1);
    tracep->declBit(c+811,"auto_in_penable", false,-1);
    tracep->declBit(c+799,"auto_in_pwrite", false,-1);
    tracep->declBus(c+807,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1095,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+812,"auto_in_pready", false,-1);
    tracep->declBit(c+1088,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1052,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1088,"uart_rx", false,-1);
    tracep->declBit(c+473,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+810,"in_psel", false,-1);
    tracep->declBit(c+811,"in_penable", false,-1);
    tracep->declBus(c+1095,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+812,"in_pready", false,-1);
    tracep->declBit(c+1088,"in_pslverr", false,-1);
    tracep->declBus(c+901,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+799,"in_pwrite", false,-1);
    tracep->declBus(c+1052,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+800,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1088,"uart_rx", false,-1);
    tracep->declBit(c+473,"uart_tx", false,-1);
    tracep->declBit(c+557,"rtsn", false,-1);
    tracep->declBit(c+1088,"ctsn", false,-1);
    tracep->declBit(c+558,"dtr_pad_o", false,-1);
    tracep->declBit(c+1088,"dsr_pad_i", false,-1);
    tracep->declBit(c+1088,"ri_pad_i", false,-1);
    tracep->declBit(c+1088,"dcd_pad_i", false,-1);
    tracep->declBit(c+559,"interrupt", false,-1);
    tracep->declBit(c+1070,"reg_we", false,-1);
    tracep->declBit(c+1071,"reg_re", false,-1);
    tracep->declBus(c+930,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+931,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+384,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1043,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+560,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1045,"wb_rst_i", false,-1);
    tracep->declBus(c+930,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+932,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1043,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1070,"wb_we_i", false,-1);
    tracep->declBit(c+1071,"wb_re_i", false,-1);
    tracep->declBit(c+473,"stx_pad_o", false,-1);
    tracep->declBit(c+1088,"srx_pad_i", false,-1);
    tracep->declBus(c+1185,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+560,"rts_pad_o", false,-1);
    tracep->declBit(c+558,"dtr_pad_o", false,-1);
    tracep->declBit(c+559,"int_o", false,-1);
    tracep->declBit(c+561,"enable", false,-1);
    tracep->declBit(c+562,"srx_pad", false,-1);
    tracep->declBus(c+563,"ier", false,-1, 3,0);
    tracep->declBus(c+564,"iir", false,-1, 3,0);
    tracep->declBus(c+565,"fcr", false,-1, 1,0);
    tracep->declBus(c+566,"mcr", false,-1, 4,0);
    tracep->declBus(c+567,"lcr", false,-1, 7,0);
    tracep->declBus(c+568,"msr", false,-1, 7,0);
    tracep->declBus(c+569,"dl", false,-1, 15,0);
    tracep->declBus(c+570,"scratch", false,-1, 7,0);
    tracep->declBit(c+571,"start_dlc", false,-1);
    tracep->declBit(c+572,"lsr_mask_d", false,-1);
    tracep->declBit(c+573,"msi_reset", false,-1);
    tracep->declBus(c+574,"dlc", false,-1, 15,0);
    tracep->declBus(c+575,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+576,"rx_reset", false,-1);
    tracep->declBit(c+577,"tx_reset", false,-1);
    tracep->declBit(c+578,"dlab", false,-1);
    tracep->declBit(c+1114,"cts_pad_i", false,-1);
    tracep->declBit(c+1088,"dsr_pad_i", false,-1);
    tracep->declBit(c+1088,"ri_pad_i", false,-1);
    tracep->declBit(c+1088,"dcd_pad_i", false,-1);
    tracep->declBit(c+579,"loopback", false,-1);
    tracep->declBit(c+1088,"cts", false,-1);
    tracep->declBit(c+1114,"dsr", false,-1);
    tracep->declBit(c+1114,"ri", false,-1);
    tracep->declBit(c+1114,"dcd", false,-1);
    tracep->declBit(c+580,"cts_c", false,-1);
    tracep->declBit(c+581,"dsr_c", false,-1);
    tracep->declBit(c+582,"ri_c", false,-1);
    tracep->declBit(c+583,"dcd_c", false,-1);
    tracep->declBus(c+584,"lsr", false,-1, 7,0);
    tracep->declBit(c+585,"lsr0", false,-1);
    tracep->declBit(c+586,"lsr1", false,-1);
    tracep->declBit(c+587,"lsr2", false,-1);
    tracep->declBit(c+588,"lsr3", false,-1);
    tracep->declBit(c+589,"lsr4", false,-1);
    tracep->declBit(c+590,"lsr5", false,-1);
    tracep->declBit(c+591,"lsr6", false,-1);
    tracep->declBit(c+592,"lsr7", false,-1);
    tracep->declBit(c+593,"lsr0r", false,-1);
    tracep->declBit(c+594,"lsr1r", false,-1);
    tracep->declBit(c+595,"lsr2r", false,-1);
    tracep->declBit(c+596,"lsr3r", false,-1);
    tracep->declBit(c+597,"lsr4r", false,-1);
    tracep->declBit(c+598,"lsr5r", false,-1);
    tracep->declBit(c+599,"lsr6r", false,-1);
    tracep->declBit(c+600,"lsr7r", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+601,"rls_int", false,-1);
    tracep->declBit(c+602,"rda_int", false,-1);
    tracep->declBit(c+603,"ti_int", false,-1);
    tracep->declBit(c+604,"thre_int", false,-1);
    tracep->declBit(c+605,"ms_int", false,-1);
    tracep->declBit(c+606,"tf_push", false,-1);
    tracep->declBit(c+607,"rf_pop", false,-1);
    tracep->declBus(c+1072,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+608,"rf_error_bit", false,-1);
    tracep->declBit(c+586,"rf_overrun", false,-1);
    tracep->declBit(c+609,"rf_push_pulse", false,-1);
    tracep->declBus(c+610,"rf_count", false,-1, 4,0);
    tracep->declBus(c+611,"tf_count", false,-1, 4,0);
    tracep->declBus(c+612,"tstate", false,-1, 2,0);
    tracep->declBus(c+613,"rstate", false,-1, 3,0);
    tracep->declBus(c+614,"counter_t", false,-1, 9,0);
    tracep->declBit(c+615,"thre_set_en", false,-1);
    tracep->declBus(c+616,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+617,"block_value", false,-1, 7,0);
    tracep->declBit(c+618,"serial_out", false,-1);
    tracep->declBit(c+619,"serial_in", false,-1);
    tracep->declBit(c+8,"lsr_mask_condition", false,-1);
    tracep->declBit(c+9,"iir_read", false,-1);
    tracep->declBit(c+10,"msr_read", false,-1);
    tracep->declBit(c+11,"fifo_read", false,-1);
    tracep->declBit(c+12,"fifo_write", false,-1);
    tracep->declBus(c+620,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+621,"lsr0_d", false,-1);
    tracep->declBit(c+622,"lsr1_d", false,-1);
    tracep->declBit(c+623,"lsr2_d", false,-1);
    tracep->declBit(c+624,"lsr3_d", false,-1);
    tracep->declBit(c+625,"lsr4_d", false,-1);
    tracep->declBit(c+626,"lsr5_d", false,-1);
    tracep->declBit(c+627,"lsr6_d", false,-1);
    tracep->declBit(c+628,"lsr7_d", false,-1);
    tracep->declBit(c+629,"rls_int_d", false,-1);
    tracep->declBit(c+630,"thre_int_d", false,-1);
    tracep->declBit(c+631,"ms_int_d", false,-1);
    tracep->declBit(c+632,"ti_int_d", false,-1);
    tracep->declBit(c+633,"rda_int_d", false,-1);
    tracep->declBit(c+634,"rls_int_rise", false,-1);
    tracep->declBit(c+635,"thre_int_rise", false,-1);
    tracep->declBit(c+636,"ms_int_rise", false,-1);
    tracep->declBit(c+637,"ti_int_rise", false,-1);
    tracep->declBit(c+638,"rda_int_rise", false,-1);
    tracep->declBit(c+639,"rls_int_pnd", false,-1);
    tracep->declBit(c+640,"rda_int_pnd", false,-1);
    tracep->declBit(c+641,"thre_int_pnd", false,-1);
    tracep->declBit(c+642,"ms_int_pnd", false,-1);
    tracep->declBit(c+643,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1194,"Tp", false,-1, 31,0);
    tracep->declBus(c+1194,"width", false,-1, 31,0);
    tracep->declBus(c+1155,"init_value", false,-1, 0,0);
    tracep->declBit(c+1045,"rst_i", false,-1);
    tracep->declBit(c+1044,"clk_i", false,-1);
    tracep->declBit(c+1088,"stage1_rst_i", false,-1);
    tracep->declBit(c+1114,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1088,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+562,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+644,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1045,"wb_rst_i", false,-1);
    tracep->declBus(c+567,"lcr", false,-1, 7,0);
    tracep->declBit(c+607,"rf_pop", false,-1);
    tracep->declBit(c+619,"srx_pad_i", false,-1);
    tracep->declBit(c+561,"enable", false,-1);
    tracep->declBit(c+576,"rx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBus(c+614,"counter_t", false,-1, 9,0);
    tracep->declBus(c+610,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1072,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+586,"rf_overrun", false,-1);
    tracep->declBit(c+608,"rf_error_bit", false,-1);
    tracep->declBus(c+613,"rstate", false,-1, 3,0);
    tracep->declBit(c+609,"rf_push_pulse", false,-1);
    tracep->declBus(c+645,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+646,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+647,"rshift", false,-1, 7,0);
    tracep->declBit(c+648,"rparity", false,-1);
    tracep->declBit(c+649,"rparity_error", false,-1);
    tracep->declBit(c+650,"rframing_error", false,-1);
    tracep->declBit(c+651,"rbit_in", false,-1);
    tracep->declBit(c+652,"rparity_xor", false,-1);
    tracep->declBus(c+653,"counter_b", false,-1, 7,0);
    tracep->declBit(c+654,"rf_push_q", false,-1);
    tracep->declBus(c+655,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+656,"rf_push", false,-1);
    tracep->declBit(c+657,"break_error", false,-1);
    tracep->declBit(c+658,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+659,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+660,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+661,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1116,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1183,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1182,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1178,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1180,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1179,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1181,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1177,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1185,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1186,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1195,"sr_push", false,-1, 3,0);
    tracep->declBus(c+662,"toc_value", false,-1, 9,0);
    tracep->declBus(c+663,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1196,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1188,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1172,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1156,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1045,"wb_rst_i", false,-1);
    tracep->declBit(c+609,"push", false,-1);
    tracep->declBit(c+607,"pop", false,-1);
    tracep->declBus(c+655,"data_in", false,-1, 10,0);
    tracep->declBit(c+576,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1072,"data_out", false,-1, 10,0);
    tracep->declBit(c+586,"overrun", false,-1);
    tracep->declBus(c+610,"count", false,-1, 4,0);
    tracep->declBit(c+608,"error_bit", false,-1);
    tracep->declBus(c+1073,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+664+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+680,"top", false,-1, 3,0);
    tracep->declBus(c+681,"bottom", false,-1, 3,0);
    tracep->declBus(c+682,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+683,"word0", false,-1, 2,0);
    tracep->declBus(c+684,"word1", false,-1, 2,0);
    tracep->declBus(c+685,"word2", false,-1, 2,0);
    tracep->declBus(c+686,"word3", false,-1, 2,0);
    tracep->declBus(c+687,"word4", false,-1, 2,0);
    tracep->declBus(c+688,"word5", false,-1, 2,0);
    tracep->declBus(c+689,"word6", false,-1, 2,0);
    tracep->declBus(c+690,"word7", false,-1, 2,0);
    tracep->declBus(c+691,"word8", false,-1, 2,0);
    tracep->declBus(c+692,"word9", false,-1, 2,0);
    tracep->declBus(c+693,"word10", false,-1, 2,0);
    tracep->declBus(c+694,"word11", false,-1, 2,0);
    tracep->declBus(c+695,"word12", false,-1, 2,0);
    tracep->declBus(c+696,"word13", false,-1, 2,0);
    tracep->declBus(c+697,"word14", false,-1, 2,0);
    tracep->declBus(c+698,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1172,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1193,"data_width", false,-1, 31,0);
    tracep->declBus(c+1188,"depth", false,-1, 31,0);
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+609,"we", false,-1);
    tracep->declBus(c+680,"a", false,-1, 3,0);
    tracep->declBus(c+681,"dpra", false,-1, 3,0);
    tracep->declBus(c+699,"di", false,-1, 7,0);
    tracep->declBus(c+1073,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+385+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1045,"wb_rst_i", false,-1);
    tracep->declBus(c+567,"lcr", false,-1, 7,0);
    tracep->declBit(c+606,"tf_push", false,-1);
    tracep->declBus(c+932,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+561,"enable", false,-1);
    tracep->declBit(c+577,"tx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+618,"stx_pad_o", false,-1);
    tracep->declBus(c+612,"tstate", false,-1, 2,0);
    tracep->declBus(c+611,"tf_count", false,-1, 4,0);
    tracep->declBus(c+700,"counter", false,-1, 4,0);
    tracep->declBus(c+701,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+702,"shift_out", false,-1, 6,0);
    tracep->declBit(c+703,"stx_o_tmp", false,-1);
    tracep->declBit(c+704,"parity_xor", false,-1);
    tracep->declBit(c+705,"tf_pop", false,-1);
    tracep->declBit(c+706,"bit_out", false,-1);
    tracep->declBus(c+932,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1074,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+707,"tf_overrun", false,-1);
    tracep->declBus(c+1119,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1095,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1197,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1198,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1164,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1199,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1193,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1188,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1172,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1156,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+1045,"wb_rst_i", false,-1);
    tracep->declBit(c+606,"push", false,-1);
    tracep->declBit(c+705,"pop", false,-1);
    tracep->declBus(c+932,"data_in", false,-1, 7,0);
    tracep->declBit(c+577,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1074,"data_out", false,-1, 7,0);
    tracep->declBit(c+707,"overrun", false,-1);
    tracep->declBus(c+611,"count", false,-1, 4,0);
    tracep->declBus(c+708,"top", false,-1, 3,0);
    tracep->declBus(c+709,"bottom", false,-1, 3,0);
    tracep->declBus(c+710,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1172,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1193,"data_width", false,-1, 31,0);
    tracep->declBus(c+1188,"depth", false,-1, 31,0);
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+606,"we", false,-1);
    tracep->declBus(c+708,"a", false,-1, 3,0);
    tracep->declBus(c+709,"dpra", false,-1, 3,0);
    tracep->declBus(c+932,"di", false,-1, 7,0);
    tracep->declBus(c+1074,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+401+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBit(c+804,"auto_in_psel", false,-1);
    tracep->declBit(c+431,"auto_in_penable", false,-1);
    tracep->declBit(c+799,"auto_in_pwrite", false,-1);
    tracep->declBus(c+805,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1095,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+800,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"auto_in_pready", false,-1);
    tracep->declBit(c+1097,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1098,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1089,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1090,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1091,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1092,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1093,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1094,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1044,"clock", false,-1);
    tracep->declBit(c+1045,"reset", false,-1);
    tracep->declBus(c+923,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+804,"in_psel", false,-1);
    tracep->declBit(c+431,"in_penable", false,-1);
    tracep->declBus(c+1095,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+799,"in_pwrite", false,-1);
    tracep->declBus(c+800,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+801,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"in_pready", false,-1);
    tracep->declBus(c+1098,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1097,"in_pslverr", false,-1);
    tracep->declBus(c+1089,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1090,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1091,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1092,"vga_hsync", false,-1);
    tracep->declBit(c+1093,"vga_vsync", false,-1);
    tracep->declBit(c+1094,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+474,"sck", false,-1);
    tracep->declBit(c+711,"ss", false,-1);
    tracep->declBit(c+1046,"mosi", false,-1);
    tracep->declBit(c+1114,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+474,"sck", false,-1);
    tracep->declBit(c+712,"ss", false,-1);
    tracep->declBit(c+1046,"mosi", false,-1);
    tracep->declBit(c+1047,"miso", false,-1);
    tracep->declBit(c+712,"reset", false,-1);
    tracep->declBus(c+723,"state", false,-1, 2,0);
    tracep->declBus(c+724,"counter", false,-1, 7,0);
    tracep->declBus(c+725,"cmd", false,-1, 7,0);
    tracep->declBus(c+726,"addr", false,-1, 23,0);
    tracep->declBus(c+727,"data", false,-1, 31,0);
    tracep->declBit(c+728,"ren", false,-1);
    tracep->declBus(c+1075,"rdata", false,-1, 31,0);
    tracep->declBus(c+1076,"raddr", false,-1, 31,0);
    tracep->declBus(c+1077,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+474,"clock", false,-1);
    tracep->declBit(c+728,"valid", false,-1);
    tracep->declBus(c+725,"cmd", false,-1, 7,0);
    tracep->declBus(c+1076,"addr", false,-1, 31,0);
    tracep->declBus(c+1075,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1048,"sck", false,-1);
    tracep->declBit(c+1049,"ce_n", false,-1);
    tracep->declBus(c+933,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1050,"clk", false,-1);
    tracep->declBit(c+476,"cke", false,-1);
    tracep->declBit(c+477,"cs", false,-1);
    tracep->declBit(c+478,"ras", false,-1);
    tracep->declBit(c+479,"cas", false,-1);
    tracep->declBit(c+480,"we", false,-1);
    tracep->declBus(c+481,"a", false,-1, 12,0);
    tracep->declBus(c+482,"ba", false,-1, 1,0);
    tracep->declBus(c+483,"dqm", false,-1, 1,0);
    tracep->declBus(c+484,"dq", false,-1, 15,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VysyxSoCTop___024root__trace_init_top(VysyxSoCTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCTop___024root__trace_init_top\n"); );
    // Body
    VysyxSoCTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCTop___024root__trace_register(VysyxSoCTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCTop___024root__trace_full_sub_0(VysyxSoCTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCTop___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCTop___024root*>(voidSelf);
    VysyxSoCTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCTop___024root__trace_full_sub_0(VysyxSoCTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+3,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+5,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+6,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+13,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+14,(((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+30,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+31,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+32,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+33,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+38,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+39,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+42,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+43,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+62,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+67,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+70,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+74,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+77,(((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                 ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                     ? (vlSelf->__VdfgTmp_hee80daa1__0 
                                        >> 0x18U) : 0U)
                                 : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                               << 0x18U) | ((0xff0000U 
                                             & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hee80daa1__0 
                                                   >> 0x10U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     (vlSelf->__VdfgTmp_hee80daa1__0 
                                                      >> 8U)
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? vlSelf->__VdfgTmp_hee80daa1__0
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+78,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+86,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+87,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+90,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+91,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+92,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+135,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+145,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+149,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+153,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+157,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+161,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+165,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+169,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+173,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+177,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+181,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+185,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+189,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+193,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+197,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+201,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+205,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+209,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+217,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+221,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+229,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+241,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+249,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+253,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+257,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+261,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+265,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+278,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+286,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct7),7);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__shamt),5);
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+291,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__res),32);
    bufp->fullIData(oldp+292,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mepc),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mstatus),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mcause),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mtvec),32);
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen));
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+309,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_done));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd),32);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_addr),5);
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_wen));
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mepc),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mstatus),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mcause),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mtvec),32);
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_en));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_en));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_en));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_en));
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+353,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+367,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+417,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullIData(oldp+418,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+419,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+420,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+421,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+422,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+423,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+424,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+425,(((0x73U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0x302U == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3))))));
    bufp->fullCData(oldp+426,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen)
                                : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen)
                                    : 0U))),8);
    bufp->fullCData(oldp+427,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid)
                                : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid)
                                    : 0U))),4);
    bufp->fullCData(oldp+428,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize)
                                : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize)
                                    : 0U))),3);
    bufp->fullCData(oldp+429,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst)
                                : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst)
                                    : 0U))),2);
    bufp->fullBit(oldp+430,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+431,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+432,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+433,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+434,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+435,((((- (IData)((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid)))) 
                                & ((- (IData)((0xa0000048U 
                                               == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                   & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                               | ((- (IData)((0xa000004cU 
                                              == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                  & (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullIData(oldp+436,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+437,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullIData(oldp+438,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                     : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                 : 0U) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hee80daa1__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hee80daa1__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hee80daa1__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? vlSelf->__VdfgTmp_hee80daa1__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullBit(oldp+439,((((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+440,((1U & ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+441,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+442,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+443,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+444,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+445,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+446,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+447,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+448,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+449,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+450,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+451,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+452,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+453,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+454,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+455,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+456,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+457,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+458,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+459,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+460,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+461,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+462,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+463,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+464,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+465,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+466,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+467,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+468,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+469,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+470,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+471,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+472,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+473,((1U & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U) | ((~ ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 6U)) 
                                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))))));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_sck));
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+477,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+478,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+479,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+480,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+481,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+484,(((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+486,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+491,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+492,((0xeU > (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+495,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+496,((0x1cU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+501,((3U & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+505,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+506,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+507,(((4U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+510,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+514,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+515,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+516,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+517,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+522,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+523,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+524,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+527,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+531,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+532,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+534,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+538,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+539,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+540,((0x7fU & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+541,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+542,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+543,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+544,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+548,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+549,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+550,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+551,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+553,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+557,((1U & (~ ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+558,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+560,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+569,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+574,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+578,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+579,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+580,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+581,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+582,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+583,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+584,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+587,((1U & ((IData)(vlSelf->__VdfgTmp_h67fdcefc__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+588,((1U & (IData)(vlSelf->__VdfgTmp_h67fdcefc__0))));
    bufp->fullBit(oldp+589,((1U & ((IData)(vlSelf->__VdfgTmp_h67fdcefc__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+608,((0U != (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+614,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+615,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+618,(((~ ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                 >> 6U)) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+634,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+635,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+636,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+637,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+638,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+655,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+657,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+658,((7U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+659,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+660,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+661,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+662,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+663,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+682,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+699,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+710,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+711,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCTop__DOT__dut__DOT____Vcellinp__flash__ss));
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+728,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+729,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullIData(oldp+731,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
    bufp->fullIData(oldp+732,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_ready));
    bufp->fullCData(oldp+735,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BID)
                                : 0U)),4);
    bufp->fullCData(oldp+736,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RID)
                                : 0U)),4);
    bufp->fullBit(oldp+737,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RLAST))));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op),7);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3),3);
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_read));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_write));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+745,((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullIData(oldp+746,(((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+747,(((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+748,(((3U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+749,((((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),4);
    bufp->fullCData(oldp+750,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BID)
                                : 0U)),4);
    bufp->fullCData(oldp+751,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RID)
                                : 0U)),4);
    bufp->fullBit(oldp+752,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RLAST))));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+758,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+760,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+761,((0x6fU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+762,((0x67U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+764,(((0x37U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             | ((0x17U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                | ((0x6fU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                   | ((0x67U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                      | ((0x13U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         | ((0xfU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                            | ((0x73U 
                                                == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                               | ((0x33U 
                                                   == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))))))))))));
    bufp->fullBit(oldp+765,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+767,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullCData(oldp+769,((0x7fU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+770,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                      | ((3U == (0x7fU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                         | ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                            | ((0xfU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                               | ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                  | (0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))))))))
                                ? (0x1fU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullCData(oldp+771,((7U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+772,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+773,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
                                         ? (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U)
                                         : ((IData)(
                                                    ((0x73U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                     & (0U 
                                                        == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)))
                                             ? 0xfU
                                             : 0U)))),5);
    bufp->fullIData(oldp+774,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+775,((0xfffff000U & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+776,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+777,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+778,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+779,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+780,((((0x33U == (0x7fU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                ? (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+781,((0x1fU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+784,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen)
                                : 0U)),8);
    bufp->fullCData(oldp+785,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid)
                                : 0U)),4);
    bufp->fullCData(oldp+786,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize)
                                : 0U)),3);
    bufp->fullCData(oldp+787,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst)
                                : 0U)),2);
    bufp->fullBit(oldp+788,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                              ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WLAST)
                              : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST)))));
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullBit(oldp+790,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    bufp->fullBit(oldp+791,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                 : (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+792,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+793,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    bufp->fullBit(oldp+794,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                 : (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+795,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+796,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                    : (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullIData(oldp+797,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+800,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+803,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+804,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+805,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+806,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+807,((0x1fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+808,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+812,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullIData(oldp+831,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+832,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+833,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb9a3b825__0))));
    bufp->fullIData(oldp+834,((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0)),32);
    bufp->fullBit(oldp+835,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0))));
    bufp->fullIData(oldp+836,((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0)),32);
    bufp->fullCData(oldp+837,((0xfU & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0))),4);
    bufp->fullBit(oldp+838,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0))));
    bufp->fullBit(oldp+839,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0))));
    bufp->fullIData(oldp+840,((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0)),32);
    bufp->fullBit(oldp+841,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0))));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+844,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+846,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+847,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+849,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+855,((0xfffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+856,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+857,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+858,((0xfffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+859,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+860,((0x7ffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+861,((0x7ffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+864,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+865,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+866,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+867,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+872,((0U == ((0x10U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+880,((IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+881,((IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+882,((IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+883,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+884,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb9a3b825__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+885,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+886,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+887,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+888,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                   >> 1U))));
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullIData(oldp+901,((0x1fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+902,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+910,((0xffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+911,((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+912,(((0xffff0000U & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+913,((0xfffffcU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+914,((0xffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+915,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+920,((0x1feU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+921,((0x1fffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+922,((3U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+923,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+924,((0x1fU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),5);
    bufp->fullBit(oldp+925,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+926,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+927,(((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr))))))),4);
    bufp->fullBit(oldp+928,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+930,((7U & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+933,((((((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+940,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+969,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+970,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+992,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+993,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+994,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+995,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+996,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+997,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+998,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+999,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+1000,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1001,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1002,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1003,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1004,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1005,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1006,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1007,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1008,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1009,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1010,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1011,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1012,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1013,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1014,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1015,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1016,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1017,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1018,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1019,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1020,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1021,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1022,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1023,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+1027,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1044,(vlSelf->clock));
    bufp->fullBit(oldp+1045,(vlSelf->reset));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1047,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1048,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1049,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1050,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1051,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1052,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1053,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1054,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1055,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                    & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                        ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullIData(oldp+1056,((((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                 ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1057,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                 ? (3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                           : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                              | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                            << 0x18U) 
                                                           | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                              << 0xcU) 
                                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                     << 1U))))))
                                 : 0U)),2);
    bufp->fullCData(oldp+1058,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                     : (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                          : 0U) | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))
                                 : 0U)),2);
    bufp->fullBit(oldp+1059,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                  : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                     & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_DONE));
    bufp->fullIData(oldp+1061,(((IData)(vlSelf->__VdfgTmp_hdf8f5741__0)
                                 ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1062,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                 ? (3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                           : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                              | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                            << 0x18U) 
                                                           | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                              << 0xcU) 
                                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                     << 1U))))))
                                 : 0U)),2);
    bufp->fullCData(oldp+1063,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                     : (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                          : 0U) | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))
                                 : 0U)),2);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullCData(oldp+1065,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                       : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                          | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                              << 0x14U) 
                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                 << 0x12U) 
                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                    << 0x10U) 
                                                                   | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                          << 0xcU) 
                                                                         | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                    << 1U))))))),2);
    bufp->fullCData(oldp+1066,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                 : (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                      ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                      : 0U) | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U)))),2);
    bufp->fullBit(oldp+1067,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                               : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                  & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+1068,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1069,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1072,(((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h67fdcefc__0))),11);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1076,(((0xfffffeU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data_bswap),32);
    bufp->fullSData(oldp+1078,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_out),16);
    bufp->fullSData(oldp+1079,(0U),16);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1088,(0U));
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_r),8);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_g),8);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_b),8);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_hsync));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_vsync));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_valid));
    bufp->fullCData(oldp+1095,(1U),3);
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+1114,(1U));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1116,(0U),4);
    bufp->fullIData(oldp+1117,(0U),32);
    bufp->fullCData(oldp+1118,(0U),8);
    bufp->fullCData(oldp+1119,(0U),3);
    bufp->fullCData(oldp+1120,(0U),2);
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1131,(0U),32);
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST));
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+1140,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WLAST));
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_AWLEN),8);
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_ARLEN),8);
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_AWID),4);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_ARID),4);
    bufp->fullCData(oldp+1146,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_AWBURST),2);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_ARBURST),2);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_WLAST));
    bufp->fullCData(oldp+1151,(1U),2);
    bufp->fullCData(oldp+1152,(2U),2);
    bufp->fullCData(oldp+1153,(3U),2);
    bufp->fullBit(oldp+1154,(0U));
    bufp->fullBit(oldp+1155,(1U));
    bufp->fullIData(oldp+1156,(5U),32);
    bufp->fullIData(oldp+1157,(0x20U),32);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BID),4);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RID),4);
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RLAST));
    bufp->fullIData(oldp+1161,(0xa0000048U),32);
    bufp->fullIData(oldp+1162,(0xa000004cU),32);
    bufp->fullIData(oldp+1163,(0x1800U),32);
    bufp->fullCData(oldp+1164,(4U),3);
    bufp->fullCData(oldp+1165,(0x1bU),8);
    bufp->fullCData(oldp+1166,(0xebU),8);
    bufp->fullCData(oldp+1167,(0x38U),8);
    bufp->fullIData(oldp+1168,(0x64U),32);
    bufp->fullIData(oldp+1169,(0x18U),32);
    bufp->fullIData(oldp+1170,(9U),32);
    bufp->fullIData(oldp+1171,(2U),32);
    bufp->fullIData(oldp+1172,(4U),32);
    bufp->fullIData(oldp+1173,(0xdU),32);
    bufp->fullIData(oldp+1174,(0x2000U),32);
    bufp->fullIData(oldp+1175,(0x2710U),32);
    bufp->fullIData(oldp+1176,(0x30cU),32);
    bufp->fullCData(oldp+1177,(7U),4);
    bufp->fullCData(oldp+1178,(3U),4);
    bufp->fullCData(oldp+1179,(5U),4);
    bufp->fullCData(oldp+1180,(4U),4);
    bufp->fullCData(oldp+1181,(6U),4);
    bufp->fullCData(oldp+1182,(2U),4);
    bufp->fullCData(oldp+1183,(1U),4);
    bufp->fullSData(oldp+1184,(0x21U),13);
    bufp->fullCData(oldp+1185,(8U),4);
    bufp->fullCData(oldp+1186,(9U),4);
    bufp->fullIData(oldp+1187,(0xaU),32);
    bufp->fullIData(oldp+1188,(0x10U),32);
    bufp->fullIData(oldp+1189,(6U),32);
    bufp->fullIData(oldp+1190,(0x11U),32);
    bufp->fullIData(oldp+1191,(0x30000000U),32);
    bufp->fullIData(oldp+1192,(0x3fffffffU),32);
    bufp->fullIData(oldp+1193,(8U),32);
    bufp->fullIData(oldp+1194,(1U),32);
    bufp->fullCData(oldp+1195,(0xaU),4);
    bufp->fullIData(oldp+1196,(0xbU),32);
    bufp->fullCData(oldp+1197,(2U),3);
    bufp->fullCData(oldp+1198,(3U),3);
    bufp->fullCData(oldp+1199,(5U),3);
}
