// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBus(c+1127,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1128,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1129,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1130,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1131,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1132,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1133,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1134,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1135,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1136,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1137,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1138,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1139,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1140,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1141,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1142,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1143,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1144,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1145,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1146,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBus(c+1127,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1128,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1129,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1130,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1131,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1132,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1133,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1134,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1135,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1136,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1137,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1138,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1139,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1140,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1141,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1142,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1143,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1144,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1145,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1146,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+451,"spi_sck", false,-1);
    tracep->declBus(c+452,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1147,"spi_mosi", false,-1);
    tracep->declBit(c+1148,"spi_miso", false,-1);
    tracep->declBit(c+1145,"uart_rx", false,-1);
    tracep->declBit(c+1146,"uart_tx", false,-1);
    tracep->declBit(c+1121,"psram_sck", false,-1);
    tracep->declBit(c+1122,"psram_ce_n", false,-1);
    tracep->declBus(c+1149,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1150,"sdram_clk", false,-1);
    tracep->declBit(c+453,"sdram_cke", false,-1);
    tracep->declBit(c+454,"sdram_cs", false,-1);
    tracep->declBit(c+455,"sdram_ras", false,-1);
    tracep->declBit(c+456,"sdram_cas", false,-1);
    tracep->declBit(c+457,"sdram_we", false,-1);
    tracep->declBus(c+458,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+459,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+460,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+461,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1127,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1128,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1129,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1131,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1132,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1133,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1134,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1135,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1136,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1137,"ps2_clk", false,-1);
    tracep->declBit(c+1138,"ps2_data", false,-1);
    tracep->declBus(c+1139,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1140,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1141,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1142,"vga_hsync", false,-1);
    tracep->declBit(c+1143,"vga_vsync", false,-1);
    tracep->declBit(c+1144,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBus(c+802,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+803,"in_psel", false,-1);
    tracep->declBit(c+16,"in_penable", false,-1);
    tracep->declBus(c+1174,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1013,"in_pready", false,-1);
    tracep->declBus(c+1014,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+807,"in_pslverr", false,-1);
    tracep->declBus(c+802,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+803,"out_psel", false,-1);
    tracep->declBit(c+16,"out_penable", false,-1);
    tracep->declBus(c+1174,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"out_pwrite", false,-1);
    tracep->declBus(c+805,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1013,"out_pready", false,-1);
    tracep->declBus(c+1014,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+807,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+803,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+16,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+802,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1174,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1013,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+807,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1014,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+808,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+429,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+802,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1174,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+462,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1175,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+463,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+809,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+430,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+810,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1174,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1176,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1177,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1178,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+811,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+431,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+812,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1174,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1179,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1180,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1181,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+813,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+432,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+812,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1174,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1182,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1183,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1184,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+814,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+433,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+802,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1174,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1151,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1175,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+17,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+815,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+816,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+812,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1174,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+817,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1175,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+979,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+818,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+434,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+810,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1174,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1175,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1015,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+819,"sel_0", false,-1);
    tracep->declBit(c+820,"sel_1", false,-1);
    tracep->declBit(c+821,"sel_2", false,-1);
    tracep->declBit(c+822,"sel_3", false,-1);
    tracep->declBit(c+823,"sel_4", false,-1);
    tracep->declBit(c+824,"sel_5", false,-1);
    tracep->declBit(c+825,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+826,"auto_in_awready", false,-1);
    tracep->declBit(c+827,"auto_in_awvalid", false,-1);
    tracep->declBus(c+828,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+829,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+830,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+826,"auto_in_wready", false,-1);
    tracep->declBit(c+831,"auto_in_wvalid", false,-1);
    tracep->declBus(c+832,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+833,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1016,"auto_in_bready", false,-1);
    tracep->declBit(c+1017,"auto_in_bvalid", false,-1);
    tracep->declBus(c+18,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+834,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+835,"auto_in_arready", false,-1);
    tracep->declBit(c+836,"auto_in_arvalid", false,-1);
    tracep->declBus(c+837,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+838,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+839,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1018,"auto_in_rready", false,-1);
    tracep->declBit(c+1019,"auto_in_rvalid", false,-1);
    tracep->declBus(c+19,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+446,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+834,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+803,"auto_out_psel", false,-1);
    tracep->declBit(c+16,"auto_out_penable", false,-1);
    tracep->declBit(c+804,"auto_out_pwrite", false,-1);
    tracep->declBus(c+802,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+805,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1013,"auto_out_pready", false,-1);
    tracep->declBit(c+807,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1014,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+16,"nodeOut_penable", false,-1);
    tracep->declBus(c+20,"state", false,-1, 1,0);
    tracep->declBit(c+835,"accept_read", false,-1);
    tracep->declBit(c+826,"accept_write", false,-1);
    tracep->declBit(c+21,"is_write_r", false,-1);
    tracep->declBit(c+804,"is_write", false,-1);
    tracep->declBus(c+19,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+18,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+22,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+23,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+24,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+25,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+840,"resp", false,-1, 1,0);
    tracep->declBus(c+26,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+834,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1019,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+27,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1017,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+721,"auto_in_awready", false,-1);
    tracep->declBit(c+841,"auto_in_awvalid", false,-1);
    tracep->declBus(c+842,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+843,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+844,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+845,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+846,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"auto_in_wready", false,-1);
    tracep->declBit(c+847,"auto_in_wvalid", false,-1);
    tracep->declBus(c+848,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+849,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+850,"auto_in_wlast", false,-1);
    tracep->declBit(c+851,"auto_in_bready", false,-1);
    tracep->declBit(c+1020,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1021,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+447,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"auto_in_arready", false,-1);
    tracep->declBit(c+852,"auto_in_arvalid", false,-1);
    tracep->declBus(c+853,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+854,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+855,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+856,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+857,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+858,"auto_in_rready", false,-1);
    tracep->declBit(c+1022,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+448,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+449,"auto_in_rlast", false,-1);
    tracep->declBit(c+1024,"auto_out_awready", false,-1);
    tracep->declBit(c+859,"auto_out_awvalid", false,-1);
    tracep->declBus(c+828,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+829,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+830,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+860,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1025,"auto_out_wready", false,-1);
    tracep->declBit(c+861,"auto_out_wvalid", false,-1);
    tracep->declBus(c+832,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+833,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+862,"auto_out_wlast", false,-1);
    tracep->declBit(c+1026,"auto_out_bready", false,-1);
    tracep->declBit(c+1027,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1021,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1028,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1029,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1030,"auto_out_arready", false,-1);
    tracep->declBit(c+863,"auto_out_arvalid", false,-1);
    tracep->declBus(c+837,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+838,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+839,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+864,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+858,"auto_out_rready", false,-1);
    tracep->declBit(c+1022,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1023,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+448,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+450,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1031,"auto_out_rlast", false,-1);
    tracep->declBit(c+861,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+30,"w_idle", false,-1);
    tracep->declBit(c+1032,"in_awready", false,-1);
    tracep->declBit(c+31,"busy", false,-1);
    tracep->declBus(c+32,"r_addr", false,-1, 31,0);
    tracep->declBus(c+33,"r_len", false,-1, 7,0);
    tracep->declBus(c+865,"len", false,-1, 7,0);
    tracep->declBus(c+866,"addr", false,-1, 31,0);
    tracep->declBit(c+34,"busy_1", false,-1);
    tracep->declBus(c+35,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+36,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+867,"len_1", false,-1, 7,0);
    tracep->declBus(c+868,"addr_1", false,-1, 31,0);
    tracep->declBit(c+37,"wbeats_latched", false,-1);
    tracep->declBit(c+859,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+869,"wbeats_valid", false,-1);
    tracep->declBus(c+38,"w_counter", false,-1, 8,0);
    tracep->declBus(c+870,"w_todo", false,-1, 8,0);
    tracep->declBit(c+862,"w_last", false,-1);
    tracep->declBit(c+1026,"nodeOut_bready", false,-1);
    tracep->declBus(c+39,"error_0", false,-1, 1,0);
    tracep->declBus(c+40,"error_1", false,-1, 1,0);
    tracep->declBus(c+41,"error_2", false,-1, 1,0);
    tracep->declBus(c+42,"error_3", false,-1, 1,0);
    tracep->declBus(c+43,"error_4", false,-1, 1,0);
    tracep->declBus(c+44,"error_5", false,-1, 1,0);
    tracep->declBus(c+45,"error_6", false,-1, 1,0);
    tracep->declBus(c+46,"error_7", false,-1, 1,0);
    tracep->declBus(c+47,"error_8", false,-1, 1,0);
    tracep->declBus(c+48,"error_9", false,-1, 1,0);
    tracep->declBus(c+49,"error_10", false,-1, 1,0);
    tracep->declBus(c+50,"error_11", false,-1, 1,0);
    tracep->declBus(c+51,"error_12", false,-1, 1,0);
    tracep->declBus(c+52,"error_13", false,-1, 1,0);
    tracep->declBus(c+53,"error_14", false,-1, 1,0);
    tracep->declBus(c+54,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+29,"io_enq_ready", false,-1);
    tracep->declBit(c+852,"io_enq_valid", false,-1);
    tracep->declBus(c+853,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+854,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+855,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+856,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+857,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1033,"io_deq_ready", false,-1);
    tracep->declBit(c+863,"io_deq_valid", false,-1);
    tracep->declBus(c+837,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+871,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+872,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+839,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+873,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+55,"ram", false,-1, 48,0);
    tracep->declBit(c+57,"full", false,-1);
    tracep->declBit(c+863,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1034,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+721,"io_enq_ready", false,-1);
    tracep->declBit(c+841,"io_enq_valid", false,-1);
    tracep->declBus(c+842,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+843,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+844,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+845,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+846,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1035,"io_deq_ready", false,-1);
    tracep->declBit(c+874,"io_deq_valid", false,-1);
    tracep->declBus(c+828,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+875,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+876,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+830,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+877,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+58,"ram", false,-1, 48,0);
    tracep->declBit(c+722,"full", false,-1);
    tracep->declBit(c+874,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1036,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+28,"io_enq_ready", false,-1);
    tracep->declBit(c+847,"io_enq_valid", false,-1);
    tracep->declBus(c+848,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+849,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+850,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1037,"io_deq_ready", false,-1);
    tracep->declBit(c+878,"io_deq_valid", false,-1);
    tracep->declBus(c+832,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+833,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+435,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+60,"ram", false,-1, 36,0);
    tracep->declBit(c+62,"full", false,-1);
    tracep->declBit(c+878,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1038,"do_enq", false,-1);
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
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+1039,"auto_in_awready", false,-1);
    tracep->declBit(c+879,"auto_in_awvalid", false,-1);
    tracep->declBus(c+828,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+880,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+980,"auto_in_wready", false,-1);
    tracep->declBit(c+881,"auto_in_wvalid", false,-1);
    tracep->declBus(c+832,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+833,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1040,"auto_in_bready", false,-1);
    tracep->declBit(c+63,"auto_in_bvalid", false,-1);
    tracep->declBus(c+64,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1041,"auto_in_arready", false,-1);
    tracep->declBit(c+882,"auto_in_arvalid", false,-1);
    tracep->declBus(c+837,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+883,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1042,"auto_in_rready", false,-1);
    tracep->declBit(c+66,"auto_in_rvalid", false,-1);
    tracep->declBus(c+67,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+69,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1041,"nodeIn_arready", false,-1);
    tracep->declBit(c+1039,"nodeIn_awready", false,-1);
    tracep->declBit(c+884,"w_sel0", false,-1);
    tracep->declBit(c+63,"w_full", false,-1);
    tracep->declBus(c+64,"w_id", false,-1, 3,0);
    tracep->declBit(c+70,"r_sel1", false,-1);
    tracep->declBit(c+71,"w_sel1", false,-1);
    tracep->declBit(c+66,"r_full", false,-1);
    tracep->declBus(c+67,"r_id", false,-1, 3,0);
    tracep->declBit(c+1043,"ren", false,-1);
    tracep->declBit(c+72,"rdata_REG", false,-1);
    tracep->declBus(c+73,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+74,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+75,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+76,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+885,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1043,"R0_en", false,-1);
    tracep->declBit(c+1125,"R0_clk", false,-1);
    tracep->declBus(c+77,"R0_data", false,-1, 31,0);
    tracep->declBus(c+886,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1044,"W0_en", false,-1);
    tracep->declBit(c+1125,"W0_clk", false,-1);
    tracep->declBus(c+832,"W0_data", false,-1, 31,0);
    tracep->declBus(c+833,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+721,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+841,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+842,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+843,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+844,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+845,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+846,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+847,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+848,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+849,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+850,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+851,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1020,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1021,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+447,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+852,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+853,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+854,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+855,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+856,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+857,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+858,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1022,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+448,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+449,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+721,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+841,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+842,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+843,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+844,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+845,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+846,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+847,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+848,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+849,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+850,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+851,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1020,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1021,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+447,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+852,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+853,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+854,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+855,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+856,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+857,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+858,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1022,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+448,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+449,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+1045,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+887,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+828,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+829,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+830,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1025,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+861,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+832,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+833,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+862,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1026,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1027,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1021,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1028,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1046,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+888,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+837,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+838,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+839,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+858,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1022,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+448,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1031,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1039,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+879,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+828,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+880,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+980,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+881,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+832,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+833,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1040,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+63,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+64,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1041,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+882,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+837,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+883,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1042,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+66,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+67,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+69,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+889,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+890,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+78,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+891,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+837,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+892,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+439,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+79,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+80,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+826,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+827,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+828,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+829,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+830,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+826,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+831,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+832,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+833,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1016,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1017,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+18,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+834,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+835,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+836,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+837,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+838,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+839,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1018,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1019,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+19,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+446,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+834,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1027,"in_0_bvalid", false,-1);
    tracep->declBit(c+1022,"in_0_rvalid", false,-1);
    tracep->declBit(c+1047,"in_0_wready", false,-1);
    tracep->declBit(c+1048,"in_0_awready", false,-1);
    tracep->declBit(c+1046,"in_0_arready", false,-1);
    tracep->declBit(c+1045,"anonIn_awready", false,-1);
    tracep->declBit(c+893,"requestARIO_0_0", false,-1);
    tracep->declBit(c+894,"requestARIO_0_1", false,-1);
    tracep->declBit(c+895,"requestARIO_0_2", false,-1);
    tracep->declBit(c+896,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+897,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+898,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+899,"arSel", false,-1, 15,0);
    tracep->declBus(c+900,"awSel", false,-1, 15,0);
    tracep->declBus(c+1049,"rSel", false,-1, 15,0);
    tracep->declBus(c+1050,"bSel", false,-1, 15,0);
    tracep->declBit(c+82,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+83,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+84,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+85,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+86,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+87,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+88,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+89,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+90,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+91,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+92,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+93,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+94,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+95,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+96,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+97,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+98,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+99,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+100,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+101,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+102,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+103,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+104,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+105,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+106,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+107,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+108,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+109,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+110,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+111,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+112,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+113,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+114,"latched", false,-1);
    tracep->declBit(c+901,"in_0_awvalid", false,-1);
    tracep->declBit(c+902,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+903,"in_0_wvalid", false,-1);
    tracep->declBit(c+115,"idle_3", false,-1);
    tracep->declBit(c+1051,"anyValid", false,-1);
    tracep->declBus(c+1052,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+116,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1053,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1054,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1055,"prefixOR_1", false,-1);
    tracep->declBit(c+1056,"winner_3_1", false,-1);
    tracep->declBit(c+1057,"winner_3_2", false,-1);
    tracep->declBit(c+117,"state_3_0", false,-1);
    tracep->declBit(c+118,"state_3_1", false,-1);
    tracep->declBit(c+119,"state_3_2", false,-1);
    tracep->declBit(c+1058,"muxState_3_0", false,-1);
    tracep->declBit(c+1059,"muxState_3_1", false,-1);
    tracep->declBit(c+1060,"muxState_3_2", false,-1);
    tracep->declBit(c+120,"idle_4", false,-1);
    tracep->declBit(c+1061,"anyValid_1", false,-1);
    tracep->declBus(c+1062,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+121,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1063,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1064,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1065,"winner_4_0", false,-1);
    tracep->declBit(c+1066,"winner_4_2", false,-1);
    tracep->declBit(c+122,"state_4_0", false,-1);
    tracep->declBit(c+123,"state_4_2", false,-1);
    tracep->declBit(c+1067,"muxState_4_0", false,-1);
    tracep->declBit(c+1068,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+124,"io_enq_ready", false,-1);
    tracep->declBit(c+902,"io_enq_valid", false,-1);
    tracep->declBus(c+904,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1069,"io_deq_ready", false,-1);
    tracep->declBit(c+905,"io_deq_valid", false,-1);
    tracep->declBus(c+906,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+125,"wrap", false,-1);
    tracep->declBit(c+126,"wrap_1", false,-1);
    tracep->declBit(c+127,"maybe_full", false,-1);
    tracep->declBit(c+128,"ptr_match", false,-1);
    tracep->declBit(c+129,"empty", false,-1);
    tracep->declBit(c+130,"full", false,-1);
    tracep->declBit(c+905,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1070,"do_deq", false,-1);
    tracep->declBit(c+1071,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+126,"R0_addr", false,-1);
    tracep->declBit(c+1185,"R0_en", false,-1);
    tracep->declBit(c+1125,"R0_clk", false,-1);
    tracep->declBus(c+131,"R0_data", false,-1, 2,0);
    tracep->declBit(c+125,"W0_addr", false,-1);
    tracep->declBit(c+1071,"W0_en", false,-1);
    tracep->declBit(c+1125,"W0_clk", false,-1);
    tracep->declBus(c+904,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+132+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+1024,"auto_in_awready", false,-1);
    tracep->declBit(c+859,"auto_in_awvalid", false,-1);
    tracep->declBus(c+828,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+829,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+830,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+860,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1025,"auto_in_wready", false,-1);
    tracep->declBit(c+861,"auto_in_wvalid", false,-1);
    tracep->declBus(c+832,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+833,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+862,"auto_in_wlast", false,-1);
    tracep->declBit(c+1026,"auto_in_bready", false,-1);
    tracep->declBit(c+1027,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1021,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1028,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1029,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1030,"auto_in_arready", false,-1);
    tracep->declBit(c+863,"auto_in_arvalid", false,-1);
    tracep->declBus(c+837,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+838,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+839,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+864,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+858,"auto_in_rready", false,-1);
    tracep->declBit(c+1022,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+448,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+450,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1031,"auto_in_rlast", false,-1);
    tracep->declBit(c+1045,"auto_out_awready", false,-1);
    tracep->declBit(c+887,"auto_out_awvalid", false,-1);
    tracep->declBus(c+828,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+829,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+830,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1025,"auto_out_wready", false,-1);
    tracep->declBit(c+861,"auto_out_wvalid", false,-1);
    tracep->declBus(c+832,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+833,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+862,"auto_out_wlast", false,-1);
    tracep->declBit(c+1026,"auto_out_bready", false,-1);
    tracep->declBit(c+1027,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1021,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1028,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1046,"auto_out_arready", false,-1);
    tracep->declBit(c+888,"auto_out_arvalid", false,-1);
    tracep->declBus(c+837,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+838,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+839,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+858,"auto_out_rready", false,-1);
    tracep->declBit(c+1022,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1023,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+448,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1031,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+134,"io_enq_ready", false,-1);
    tracep->declBit(c+981,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1072,"io_deq_ready", false,-1);
    tracep->declBit(c+135,"io_deq_valid", false,-1);
    tracep->declBit(c+136,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+135,"full", false,-1);
    tracep->declBit(c+136,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+137,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+138,"io_enq_ready", false,-1);
    tracep->declBit(c+982,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1073,"io_deq_ready", false,-1);
    tracep->declBit(c+139,"io_deq_valid", false,-1);
    tracep->declBit(c+140,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+139,"full", false,-1);
    tracep->declBit(c+140,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+141,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+142,"io_enq_ready", false,-1);
    tracep->declBit(c+983,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1074,"io_deq_ready", false,-1);
    tracep->declBit(c+143,"io_deq_valid", false,-1);
    tracep->declBit(c+144,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+143,"full", false,-1);
    tracep->declBit(c+144,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+145,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+146,"io_enq_ready", false,-1);
    tracep->declBit(c+984,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1075,"io_deq_ready", false,-1);
    tracep->declBit(c+147,"io_deq_valid", false,-1);
    tracep->declBit(c+148,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+147,"full", false,-1);
    tracep->declBit(c+148,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+149,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+150,"io_enq_ready", false,-1);
    tracep->declBit(c+985,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1076,"io_deq_ready", false,-1);
    tracep->declBit(c+151,"io_deq_valid", false,-1);
    tracep->declBit(c+152,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+151,"full", false,-1);
    tracep->declBit(c+152,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+153,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+154,"io_enq_ready", false,-1);
    tracep->declBit(c+986,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1077,"io_deq_ready", false,-1);
    tracep->declBit(c+155,"io_deq_valid", false,-1);
    tracep->declBit(c+156,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+155,"full", false,-1);
    tracep->declBit(c+156,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+157,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+158,"io_enq_ready", false,-1);
    tracep->declBit(c+987,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1078,"io_deq_ready", false,-1);
    tracep->declBit(c+159,"io_deq_valid", false,-1);
    tracep->declBit(c+160,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+159,"full", false,-1);
    tracep->declBit(c+160,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+161,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+162,"io_enq_ready", false,-1);
    tracep->declBit(c+988,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1079,"io_deq_ready", false,-1);
    tracep->declBit(c+163,"io_deq_valid", false,-1);
    tracep->declBit(c+164,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+163,"full", false,-1);
    tracep->declBit(c+164,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+165,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+166,"io_enq_ready", false,-1);
    tracep->declBit(c+989,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1080,"io_deq_ready", false,-1);
    tracep->declBit(c+167,"io_deq_valid", false,-1);
    tracep->declBit(c+168,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+167,"full", false,-1);
    tracep->declBit(c+168,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+169,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+170,"io_enq_ready", false,-1);
    tracep->declBit(c+990,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1081,"io_deq_ready", false,-1);
    tracep->declBit(c+171,"io_deq_valid", false,-1);
    tracep->declBit(c+172,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+171,"full", false,-1);
    tracep->declBit(c+172,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+173,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+174,"io_enq_ready", false,-1);
    tracep->declBit(c+991,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1082,"io_deq_ready", false,-1);
    tracep->declBit(c+175,"io_deq_valid", false,-1);
    tracep->declBit(c+176,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+175,"full", false,-1);
    tracep->declBit(c+176,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+177,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+178,"io_enq_ready", false,-1);
    tracep->declBit(c+992,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1083,"io_deq_ready", false,-1);
    tracep->declBit(c+179,"io_deq_valid", false,-1);
    tracep->declBit(c+180,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+179,"full", false,-1);
    tracep->declBit(c+180,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+181,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+182,"io_enq_ready", false,-1);
    tracep->declBit(c+993,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1084,"io_deq_ready", false,-1);
    tracep->declBit(c+183,"io_deq_valid", false,-1);
    tracep->declBit(c+184,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+183,"full", false,-1);
    tracep->declBit(c+184,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+185,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+186,"io_enq_ready", false,-1);
    tracep->declBit(c+994,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1085,"io_deq_ready", false,-1);
    tracep->declBit(c+187,"io_deq_valid", false,-1);
    tracep->declBit(c+188,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+187,"full", false,-1);
    tracep->declBit(c+188,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+189,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+190,"io_enq_ready", false,-1);
    tracep->declBit(c+995,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1086,"io_deq_ready", false,-1);
    tracep->declBit(c+191,"io_deq_valid", false,-1);
    tracep->declBit(c+192,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+191,"full", false,-1);
    tracep->declBit(c+192,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+193,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+194,"io_enq_ready", false,-1);
    tracep->declBit(c+996,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1087,"io_deq_ready", false,-1);
    tracep->declBit(c+195,"io_deq_valid", false,-1);
    tracep->declBit(c+196,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+195,"full", false,-1);
    tracep->declBit(c+196,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+197,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+198,"io_enq_ready", false,-1);
    tracep->declBit(c+997,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1088,"io_deq_ready", false,-1);
    tracep->declBit(c+199,"io_deq_valid", false,-1);
    tracep->declBit(c+200,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+199,"full", false,-1);
    tracep->declBit(c+200,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+201,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+202,"io_enq_ready", false,-1);
    tracep->declBit(c+998,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1089,"io_deq_ready", false,-1);
    tracep->declBit(c+203,"io_deq_valid", false,-1);
    tracep->declBit(c+204,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+203,"full", false,-1);
    tracep->declBit(c+204,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+205,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+206,"io_enq_ready", false,-1);
    tracep->declBit(c+999,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1090,"io_deq_ready", false,-1);
    tracep->declBit(c+207,"io_deq_valid", false,-1);
    tracep->declBit(c+208,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+207,"full", false,-1);
    tracep->declBit(c+208,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+209,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+210,"io_enq_ready", false,-1);
    tracep->declBit(c+1000,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1091,"io_deq_ready", false,-1);
    tracep->declBit(c+211,"io_deq_valid", false,-1);
    tracep->declBit(c+212,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+211,"full", false,-1);
    tracep->declBit(c+212,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+213,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+214,"io_enq_ready", false,-1);
    tracep->declBit(c+1001,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1092,"io_deq_ready", false,-1);
    tracep->declBit(c+215,"io_deq_valid", false,-1);
    tracep->declBit(c+216,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+215,"full", false,-1);
    tracep->declBit(c+216,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+217,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+218,"io_enq_ready", false,-1);
    tracep->declBit(c+1002,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1093,"io_deq_ready", false,-1);
    tracep->declBit(c+219,"io_deq_valid", false,-1);
    tracep->declBit(c+220,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+219,"full", false,-1);
    tracep->declBit(c+220,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+221,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+222,"io_enq_ready", false,-1);
    tracep->declBit(c+1003,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1094,"io_deq_ready", false,-1);
    tracep->declBit(c+223,"io_deq_valid", false,-1);
    tracep->declBit(c+224,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+223,"full", false,-1);
    tracep->declBit(c+224,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+225,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+226,"io_enq_ready", false,-1);
    tracep->declBit(c+1004,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1095,"io_deq_ready", false,-1);
    tracep->declBit(c+227,"io_deq_valid", false,-1);
    tracep->declBit(c+228,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+227,"full", false,-1);
    tracep->declBit(c+228,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+229,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+230,"io_enq_ready", false,-1);
    tracep->declBit(c+1005,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1096,"io_deq_ready", false,-1);
    tracep->declBit(c+231,"io_deq_valid", false,-1);
    tracep->declBit(c+232,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+231,"full", false,-1);
    tracep->declBit(c+232,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+233,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+234,"io_enq_ready", false,-1);
    tracep->declBit(c+1006,"io_enq_valid", false,-1);
    tracep->declBit(c+860,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1097,"io_deq_ready", false,-1);
    tracep->declBit(c+235,"io_deq_valid", false,-1);
    tracep->declBit(c+236,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+235,"full", false,-1);
    tracep->declBit(c+236,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+237,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+238,"io_enq_ready", false,-1);
    tracep->declBit(c+1007,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1098,"io_deq_ready", false,-1);
    tracep->declBit(c+239,"io_deq_valid", false,-1);
    tracep->declBit(c+240,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+239,"full", false,-1);
    tracep->declBit(c+240,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+241,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+242,"io_enq_ready", false,-1);
    tracep->declBit(c+1008,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1099,"io_deq_ready", false,-1);
    tracep->declBit(c+243,"io_deq_valid", false,-1);
    tracep->declBit(c+244,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+243,"full", false,-1);
    tracep->declBit(c+244,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+245,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+246,"io_enq_ready", false,-1);
    tracep->declBit(c+1009,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1100,"io_deq_ready", false,-1);
    tracep->declBit(c+247,"io_deq_valid", false,-1);
    tracep->declBit(c+248,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+247,"full", false,-1);
    tracep->declBit(c+248,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+249,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+250,"io_enq_ready", false,-1);
    tracep->declBit(c+1010,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1101,"io_deq_ready", false,-1);
    tracep->declBit(c+251,"io_deq_valid", false,-1);
    tracep->declBit(c+252,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+251,"full", false,-1);
    tracep->declBit(c+252,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+253,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+254,"io_enq_ready", false,-1);
    tracep->declBit(c+1011,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1102,"io_deq_ready", false,-1);
    tracep->declBit(c+255,"io_deq_valid", false,-1);
    tracep->declBit(c+256,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+255,"full", false,-1);
    tracep->declBit(c+256,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+257,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+258,"io_enq_ready", false,-1);
    tracep->declBit(c+1012,"io_enq_valid", false,-1);
    tracep->declBit(c+864,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1103,"io_deq_ready", false,-1);
    tracep->declBit(c+259,"io_deq_valid", false,-1);
    tracep->declBit(c+260,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+259,"full", false,-1);
    tracep->declBit(c+260,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+261,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+721,"auto_master_out_awready", false,-1);
    tracep->declBit(c+841,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+842,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+843,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+844,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+845,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+846,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"auto_master_out_wready", false,-1);
    tracep->declBit(c+847,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+848,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+849,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+850,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+851,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1020,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1021,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+447,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"auto_master_out_arready", false,-1);
    tracep->declBit(c+852,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+853,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+854,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+855,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+856,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+857,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+858,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1022,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1023,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+448,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+449,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+1175,"io_interrupt", false,-1);
    tracep->declBit(c+721,"io_master_awready", false,-1);
    tracep->declBit(c+841,"io_master_awvalid", false,-1);
    tracep->declBus(c+842,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+843,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+844,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+845,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+846,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"io_master_wready", false,-1);
    tracep->declBit(c+847,"io_master_wvalid", false,-1);
    tracep->declBus(c+848,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+849,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+850,"io_master_wlast", false,-1);
    tracep->declBit(c+851,"io_master_bready", false,-1);
    tracep->declBit(c+1020,"io_master_bvalid", false,-1);
    tracep->declBus(c+1021,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+447,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"io_master_arready", false,-1);
    tracep->declBit(c+852,"io_master_arvalid", false,-1);
    tracep->declBus(c+853,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+854,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+855,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+856,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+857,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+858,"io_master_rready", false,-1);
    tracep->declBit(c+1022,"io_master_rvalid", false,-1);
    tracep->declBus(c+1023,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+448,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+449,"io_master_rlast", false,-1);
    tracep->declBit(c+1186,"io_slave_awready", false,-1);
    tracep->declBit(c+1175,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1187,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1188,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1189,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1190,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1191,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1192,"io_slave_wready", false,-1);
    tracep->declBit(c+1175,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1188,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1187,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1175,"io_slave_wlast", false,-1);
    tracep->declBit(c+1175,"io_slave_bready", false,-1);
    tracep->declBit(c+1193,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1194,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1195,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1196,"io_slave_arready", false,-1);
    tracep->declBit(c+1175,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1187,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1188,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1189,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1190,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1191,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1175,"io_slave_rready", false,-1);
    tracep->declBit(c+1197,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1198,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1199,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1200,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1201,"io_slave_rlast", false,-1);
    tracep->declBit(c+262,"DIFFTEST", false,-1);
    tracep->declBus(c+723,"pc", false,-1, 31,0);
    tracep->declBus(c+724,"dnpc", false,-1, 31,0);
    tracep->declBit(c+725,"PCU_VALID", false,-1);
    tracep->declBit(c+726,"IFU_READY", false,-1);
    tracep->declBus(c+727,"inst", false,-1, 31,0);
    tracep->declBit(c+728,"IFU_VALID", false,-1);
    tracep->declBit(c+729,"IDU_READY", false,-1);
    tracep->declBus(c+1202,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1202,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+730,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1153,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1187,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1189,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+263,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1187,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+418,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+264,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+419,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1190,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+265,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1191,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+266,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+420,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+421,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1175,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+789,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1175,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+1154,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+422,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+1175,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+731,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+790,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1104,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+732,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1203,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+423,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+733,"IDU_VALID", false,-1);
    tracep->declBit(c+734,"EXU_READY", false,-1);
    tracep->declBus(c+735,"op", false,-1, 6,0);
    tracep->declBus(c+267,"rd", false,-1, 4,0);
    tracep->declBus(c+736,"funct3", false,-1, 2,0);
    tracep->declBus(c+268,"rs1", false,-1, 4,0);
    tracep->declBus(c+269,"rs2", false,-1, 4,0);
    tracep->declBus(c+270,"imm", false,-1, 31,0);
    tracep->declBus(c+271,"funct7", false,-1, 6,0);
    tracep->declBus(c+272,"shamt", false,-1, 4,0);
    tracep->declBit(c+737,"sram_lsu_read", false,-1);
    tracep->declBit(c+738,"sram_lsu_write", false,-1);
    tracep->declBit(c+1155,"LSU_DONE", false,-1);
    tracep->declBit(c+273,"EXU_VALID", false,-1);
    tracep->declBit(c+274,"WBU_READY", false,-1);
    tracep->declBus(c+275,"res", false,-1, 31,0);
    tracep->declBit(c+739,"ls_valid", false,-1);
    tracep->declBit(c+740,"ls_wen", false,-1);
    tracep->declBus(c+741,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+409,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+742,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+743,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+744,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+745,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+276,"mepc", false,-1, 31,0);
    tracep->declBus(c+277,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+278,"mstatus", false,-1, 31,0);
    tracep->declBus(c+279,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+280,"mcause", false,-1, 31,0);
    tracep->declBus(c+281,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+282,"mtvec", false,-1, 31,0);
    tracep->declBus(c+283,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+284,"gpr_wen", false,-1);
    tracep->declBit(c+285,"mepc_wen", false,-1);
    tracep->declBit(c+286,"mstatus_wen", false,-1);
    tracep->declBit(c+287,"mcause_wen", false,-1);
    tracep->declBit(c+288,"mtvec_wen", false,-1);
    tracep->declBus(c+695,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+696,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1156,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+697,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1157,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+791,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1204,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1205,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1206,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+424,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1207,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+425,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+698,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+699,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+700,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1208,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+426,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+427,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+701,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+792,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+702,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+907,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1105,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+703,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+704,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+793,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1106,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+705,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+706,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+428,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+908,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+909,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+910,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+289,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+911,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+912,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+913,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+914,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+290,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+915,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+291,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+916,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+917,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+918,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+919,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+292,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+293,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+920,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+746,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+921,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+294,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+295,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+922,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+923,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+296,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+297,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+924,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+925,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+298,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+747,"wbu_done", false,-1);
    tracep->declBit(c+262,"difftest", false,-1);
    tracep->declBus(c+299,"xrd", false,-1, 31,0);
    tracep->declBus(c+300,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+301,"rf_wen", false,-1);
    tracep->declBus(c+302,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+303,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+304,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+305,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+306,"mepc_en", false,-1);
    tracep->declBit(c+307,"mstatus_en", false,-1);
    tracep->declBit(c+308,"mcause_en", false,-1);
    tracep->declBit(c+309,"mtvec_en", false,-1);
    tracep->declBus(c+310,"r1", false,-1, 31,0);
    tracep->declBus(c+311,"r2", false,-1, 31,0);
    tracep->declBus(c+312,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+313,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+737,"sram_lsu_read", false,-1);
    tracep->declBit(c+738,"sram_lsu_write", false,-1);
    tracep->declBit(c+1155,"LSU_DONE", false,-1);
    tracep->declBit(c+733,"IDU_VALID", false,-1);
    tracep->declBit(c+734,"EXU_READY", false,-1);
    tracep->declBit(c+273,"EXU_VALID", false,-1);
    tracep->declBit(c+274,"WBU_READY", false,-1);
    tracep->declBus(c+735,"op", false,-1, 6,0);
    tracep->declBus(c+736,"funct3", false,-1, 2,0);
    tracep->declBus(c+270,"imm", false,-1, 31,0);
    tracep->declBus(c+271,"funct7", false,-1, 6,0);
    tracep->declBus(c+272,"shamt", false,-1, 4,0);
    tracep->declBus(c+310,"r1", false,-1, 31,0);
    tracep->declBus(c+311,"r2", false,-1, 31,0);
    tracep->declBus(c+275,"res_reg", false,-1, 31,0);
    tracep->declBit(c+739,"ls_valid", false,-1);
    tracep->declBit(c+740,"ls_wen", false,-1);
    tracep->declBus(c+741,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+409,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+742,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+743,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+744,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+745,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+695,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+723,"pc", false,-1, 31,0);
    tracep->declBus(c+724,"dnpc", false,-1, 31,0);
    tracep->declBus(c+276,"mepc", false,-1, 31,0);
    tracep->declBus(c+278,"mstatus", false,-1, 31,0);
    tracep->declBus(c+280,"mcause", false,-1, 31,0);
    tracep->declBus(c+282,"mtvec", false,-1, 31,0);
    tracep->declBus(c+277,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+279,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+281,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+283,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+284,"gpr_wen_reg", false,-1);
    tracep->declBit(c+285,"mepc_wen_reg", false,-1);
    tracep->declBit(c+286,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+287,"mcause_wen_reg", false,-1);
    tracep->declBit(c+288,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+734,"exu_ready", false,-1);
    tracep->declBit(c+273,"exu_valid", false,-1);
    tracep->declBus(c+1191,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1209,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1210,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+1211,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+748,"state", false,-1, 1,0);
    tracep->declBus(c+1158,"next_state", false,-1, 1,0);
    tracep->declBus(c+314,"s_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+749,"a", false,-1, 31,0);
    tracep->declBus(c+750,"b", false,-1, 31,0);
    tracep->declBus(c+751,"res", false,-1, 31,0);
    tracep->declBus(c+752,"csr", false,-1, 31,0);
    tracep->declBus(c+753,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+754,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+753,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+410,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+753,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+926,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+1212,"ls_wsize", false,-1, 2,0);
    tracep->declBus(c+1213,"ls_rsize", false,-1, 2,0);
    tracep->declBus(c+270,"offset", false,-1, 31,0);
    tracep->declBit(c+755,"jalen", false,-1);
    tracep->declBit(c+756,"jalren", false,-1);
    tracep->declBit(c+411,"beqen", false,-1);
    tracep->declBit(c+412,"bneen", false,-1);
    tracep->declBit(c+413,"blten", false,-1);
    tracep->declBit(c+414,"bgeen", false,-1);
    tracep->declBit(c+415,"bltuen", false,-1);
    tracep->declBit(c+416,"bgeuen", false,-1);
    tracep->declBit(c+757,"ecall_en", false,-1);
    tracep->declBit(c+417,"mret_en", false,-1);
    tracep->declBit(c+758,"gpr_wen", false,-1);
    tracep->declBit(c+759,"mepc_wen", false,-1);
    tracep->declBit(c+760,"mstatus_wen", false,-1);
    tracep->declBit(c+761,"mcause_wen", false,-1);
    tracep->declBit(c+762,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+727,"inst", false,-1, 31,0);
    tracep->declBit(c+728,"IFU_VALID", false,-1);
    tracep->declBit(c+729,"IDU_READY", false,-1);
    tracep->declBit(c+733,"IDU_VALID", false,-1);
    tracep->declBit(c+734,"EXU_READY", false,-1);
    tracep->declBus(c+735,"op_reg", false,-1, 6,0);
    tracep->declBus(c+267,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+736,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+268,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+269,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+270,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+271,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+272,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+763,"op", false,-1, 6,0);
    tracep->declBus(c+764,"rd", false,-1, 4,0);
    tracep->declBus(c+765,"funct3", false,-1, 2,0);
    tracep->declBus(c+766,"rs1", false,-1, 4,0);
    tracep->declBus(c+767,"rs2", false,-1, 4,0);
    tracep->declBus(c+768,"immI", false,-1, 31,0);
    tracep->declBus(c+769,"immU", false,-1, 31,0);
    tracep->declBus(c+770,"immS", false,-1, 31,0);
    tracep->declBus(c+771,"immB", false,-1, 31,0);
    tracep->declBus(c+772,"immJ", false,-1, 31,0);
    tracep->declBus(c+773,"imm", false,-1, 31,0);
    tracep->declBus(c+774,"funct7", false,-1, 6,0);
    tracep->declBus(c+775,"shamt", false,-1, 4,0);
    tracep->declBit(c+729,"idu_ready", false,-1);
    tracep->declBit(c+733,"idu_valid", false,-1);
    tracep->declBus(c+1214,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1215,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+776,"state", false,-1);
    tracep->declBit(c+2,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+723,"pc", false,-1, 31,0);
    tracep->declBus(c+727,"inst", false,-1, 31,0);
    tracep->declBit(c+725,"PCU_VALID", false,-1);
    tracep->declBit(c+726,"IFU_READY", false,-1);
    tracep->declBit(c+728,"IFU_VALID", false,-1);
    tracep->declBit(c+729,"IDU_READY", false,-1);
    tracep->declBit(c+747,"wbu_done", false,-1);
    tracep->declBit(c+789,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+1175,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1187,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1202,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1189,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1190,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1191,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1154,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+1175,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1202,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1187,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1203,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+1175,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+422,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+418,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+420,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+790,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+731,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+264,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+730,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+263,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+265,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+266,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+732,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1104,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+419,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1153,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+421,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+423,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+726,"ifu_ready", false,-1);
    tracep->declBit(c+728,"ifu_valid", false,-1);
    tracep->declBus(c+1191,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1209,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1210,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1211,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+777,"current_state", false,-1, 1,0);
    tracep->declBus(c+3,"next_state", false,-1, 1,0);
    tracep->declBit(c+731,"axi_arvalid", false,-1);
    tracep->declBit(c+732,"axi_rready", false,-1);
    tracep->declBus(c+264,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+730,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+263,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+265,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+266,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1214,"SRAM_IDLE", false,-1, 0,0);
    tracep->declBus(c+1215,"SRAM_FETCH", false,-1, 0,0);
    tracep->declBit(c+778,"state", false,-1);
    tracep->declBit(c+779,"sram_start", false,-1);
    tracep->declBus(c+780,"inst_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+737,"sram_lsu_read", false,-1);
    tracep->declBit(c+738,"sram_lsu_write", false,-1);
    tracep->declBit(c+1155,"LSU_DONE", false,-1);
    tracep->declBus(c+695,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+739,"valid", false,-1);
    tracep->declBit(c+740,"wen", false,-1);
    tracep->declBus(c+741,"waddr", false,-1, 31,0);
    tracep->declBus(c+409,"wdata", false,-1, 31,0);
    tracep->declBus(c+742,"raddr", false,-1, 31,0);
    tracep->declBus(c+743,"wmask", false,-1, 3,0);
    tracep->declBus(c+744,"awsize", false,-1, 2,0);
    tracep->declBus(c+745,"arsize", false,-1, 2,0);
    tracep->declBit(c+792,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+701,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1206,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+696,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1204,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+698,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+700,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+907,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+702,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1156,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+791,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+706,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+703,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1105,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+424,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+426,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+793,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+704,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+1207,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+697,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1205,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+699,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1208,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+705,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1106,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+425,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1157,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+427,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+428,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+1191,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1209,"READ", false,-1, 1,0);
    tracep->declBus(c+1210,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1211,"DONE", false,-1, 1,0);
    tracep->declBus(c+707,"state", false,-1, 1,0);
    tracep->declBit(c+701,"axi_awvalid", false,-1);
    tracep->declBit(c+702,"axi_wvalid", false,-1);
    tracep->declBus(c+1206,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+696,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+708,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1204,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+698,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+700,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+709,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+703,"axi_bready", false,-1);
    tracep->declBit(c+706,"axi_wlast", false,-1);
    tracep->declBit(c+704,"axi_arvalid", false,-1);
    tracep->declBit(c+705,"axi_rready", false,-1);
    tracep->declBus(c+1207,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+697,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1205,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+699,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1208,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+723,"pc", false,-1, 31,0);
    tracep->declBus(c+724,"dnpc", false,-1, 31,0);
    tracep->declBit(c+725,"PCU_VALID", false,-1);
    tracep->declBit(c+726,"IFU_READY", false,-1);
    tracep->declBit(c+725,"pcu_valid", false,-1);
    tracep->declBus(c+1214,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1215,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+781,"state", false,-1);
    tracep->declBit(c+4,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1216,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1217,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBus(c+299,"wdata", false,-1, 31,0);
    tracep->declBus(c+300,"waddr", false,-1, 4,0);
    tracep->declBit(c+301,"wen", false,-1);
    tracep->declBus(c+268,"raddr1", false,-1, 4,0);
    tracep->declBus(c+310,"r1", false,-1, 31,0);
    tracep->declBus(c+269,"raddr2", false,-1, 4,0);
    tracep->declBus(c+311,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+315+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+273,"EXU_VALID", false,-1);
    tracep->declBit(c+274,"WBU_READY", false,-1);
    tracep->declBit(c+747,"wbu_done", false,-1);
    tracep->declBit(c+262,"difftest", false,-1);
    tracep->declBus(c+299,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+275,"res", false,-1, 31,0);
    tracep->declBus(c+300,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+267,"rd", false,-1, 4,0);
    tracep->declBit(c+301,"wen_reg", false,-1);
    tracep->declBit(c+284,"gpr_wen", false,-1);
    tracep->declBus(c+277,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+279,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+281,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+283,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+302,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+303,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+304,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+305,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+285,"mepc_wen", false,-1);
    tracep->declBit(c+286,"mstatus_wen", false,-1);
    tracep->declBit(c+287,"mcause_wen", false,-1);
    tracep->declBit(c+288,"mtvec_wen", false,-1);
    tracep->declBit(c+306,"mepc_wen_reg", false,-1);
    tracep->declBit(c+307,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+308,"mcause_wen_reg", false,-1);
    tracep->declBit(c+309,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+275,"xrd", false,-1, 31,0);
    tracep->declBus(c+267,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+284,"o_rf_wen", false,-1);
    tracep->declBus(c+277,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+279,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+281,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+283,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+274,"wbu_ready", false,-1);
    tracep->declBus(c+1191,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1209,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1210,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1211,"NULL", false,-1, 1,0);
    tracep->declBus(c+782,"state", false,-1, 1,0);
    tracep->declBus(c+5,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+789,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1175,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1187,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1202,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1189,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1190,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1191,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1154,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1175,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1202,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1187,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1203,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1175,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+422,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+418,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+420,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+790,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+731,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+264,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+730,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+263,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+265,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+266,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+732,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1104,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+419,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1153,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+421,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+423,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+792,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+701,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1206,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+696,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1204,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+698,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+700,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+907,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+702,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1156,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+791,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+706,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+703,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1105,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+424,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+426,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+793,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+704,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1207,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+697,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1205,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+699,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1208,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+705,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1106,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+425,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1157,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+427,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+428,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+721,"io_master_awready", false,-1);
    tracep->declBit(c+841,"io_master_awvalid", false,-1);
    tracep->declBus(c+842,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+843,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+844,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+845,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+846,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"io_master_wready", false,-1);
    tracep->declBit(c+847,"io_master_wvalid", false,-1);
    tracep->declBus(c+848,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+849,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+850,"io_master_wlast", false,-1);
    tracep->declBit(c+851,"io_master_bready", false,-1);
    tracep->declBit(c+1020,"io_master_bvalid", false,-1);
    tracep->declBus(c+1021,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+447,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"io_master_arready", false,-1);
    tracep->declBit(c+852,"io_master_arvalid", false,-1);
    tracep->declBus(c+853,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+854,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+855,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+856,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+857,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+858,"io_master_rready", false,-1);
    tracep->declBit(c+1022,"io_master_rvalid", false,-1);
    tracep->declBus(c+1023,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+448,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+438,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+449,"io_master_rlast", false,-1);
    tracep->declBit(c+746,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+920,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+914,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+908,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+912,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+916,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+918,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+294,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+921,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+909,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+911,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+925,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+922,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+295,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+290,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+292,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+296,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+923,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+915,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+910,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+913,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+917,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+919,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+924,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+297,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+291,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+289,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+293,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+298,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+927,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+928,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+929,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1107,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+930,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+783,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+784,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+785,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+440,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+786,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+441,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+931,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+932,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+933,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+787,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+442,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+443,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+934,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+794,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+935,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+436,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+444,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+936,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+937,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+938,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1108,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+939,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+940,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+445,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1191,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1209,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1210,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1211,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+788,"state", false,-1, 1,0);
    tracep->declBus(c+6,"next_state", false,-1, 1,0);
    tracep->declBus(c+1218,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1219,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+941,"sel_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1217,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1220,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1188,"din", false,-1, 31,0);
    tracep->declBus(c+313,"dout", false,-1, 31,0);
    tracep->declBit(c+1175,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1217,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1188,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+304,"din", false,-1, 31,0);
    tracep->declBus(c+280,"dout", false,-1, 31,0);
    tracep->declBit(c+308,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1217,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1188,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+302,"din", false,-1, 31,0);
    tracep->declBus(c+276,"dout", false,-1, 31,0);
    tracep->declBit(c+306,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1217,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1221,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+303,"din", false,-1, 31,0);
    tracep->declBus(c+278,"dout", false,-1, 31,0);
    tracep->declBit(c+307,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1217,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1188,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+305,"din", false,-1, 31,0);
    tracep->declBus(c+282,"dout", false,-1, 31,0);
    tracep->declBit(c+309,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1217,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1222,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1188,"din", false,-1, 31,0);
    tracep->declBus(c+312,"dout", false,-1, 31,0);
    tracep->declBit(c+1175,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+746,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+920,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+914,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+908,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+912,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+916,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+918,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+294,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+921,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+909,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+911,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+925,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+922,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+295,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+290,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+292,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+296,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+923,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+915,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+910,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+913,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+917,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+919,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+924,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+297,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+291,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+289,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+293,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+298,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+746,"axi_awready", false,-1);
    tracep->declBit(c+294,"axi_wready", false,-1);
    tracep->declBit(c+295,"axi_bvalid", false,-1);
    tracep->declBit(c+296,"axi_arready", false,-1);
    tracep->declBit(c+297,"axi_rvalid", false,-1);
    tracep->declBit(c+298,"axi_rlast", false,-1);
    tracep->declBus(c+292,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+293,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+290,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+291,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+289,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1218,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1219,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+348,"mtime", false,-1, 63,0);
    tracep->declBus(c+437,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"io_d", false,-1);
    tracep->declBit(c+350,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"io_d", false,-1);
    tracep->declBit(c+350,"io_q", false,-1);
    tracep->declBit(c+350,"sync_0", false,-1);
    tracep->declBit(c+351,"sync_1", false,-1);
    tracep->declBit(c+352,"sync_2", false,-1);
    tracep->declBit(c+353,"sync_3", false,-1);
    tracep->declBit(c+354,"sync_4", false,-1);
    tracep->declBit(c+355,"sync_5", false,-1);
    tracep->declBit(c+356,"sync_6", false,-1);
    tracep->declBit(c+357,"sync_7", false,-1);
    tracep->declBit(c+358,"sync_8", false,-1);
    tracep->declBit(c+359,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+813,"auto_in_psel", false,-1);
    tracep->declBit(c+432,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+812,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1174,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1182,"auto_in_pready", false,-1);
    tracep->declBit(c+1183,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1184,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1127,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1128,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1129,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1131,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1132,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1133,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1134,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1135,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1136,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBus(c+942,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+813,"in_psel", false,-1);
    tracep->declBit(c+432,"in_penable", false,-1);
    tracep->declBus(c+1174,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1182,"in_pready", false,-1);
    tracep->declBus(c+1184,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1183,"in_pslverr", false,-1);
    tracep->declBus(c+1127,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1128,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1129,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1131,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1132,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1133,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1134,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1135,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1136,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+811,"auto_in_psel", false,-1);
    tracep->declBit(c+431,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+812,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1174,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1179,"auto_in_pready", false,-1);
    tracep->declBit(c+1180,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1181,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1137,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1138,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBus(c+942,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+811,"in_psel", false,-1);
    tracep->declBit(c+431,"in_penable", false,-1);
    tracep->declBus(c+1174,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1179,"in_pready", false,-1);
    tracep->declBus(c+1181,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1180,"in_pslverr", false,-1);
    tracep->declBit(c+1137,"ps2_clk", false,-1);
    tracep->declBit(c+1138,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+889,"auto_in_awvalid", false,-1);
    tracep->declBit(c+890,"auto_in_wvalid", false,-1);
    tracep->declBit(c+78,"auto_in_arready", false,-1);
    tracep->declBit(c+891,"auto_in_arvalid", false,-1);
    tracep->declBus(c+837,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+892,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+439,"auto_in_rready", false,-1);
    tracep->declBit(c+79,"auto_in_rvalid", false,-1);
    tracep->declBus(c+80,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+79,"state", false,-1);
    tracep->declBus(c+81,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+80,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+943,"raddr", false,-1, 31,0);
    tracep->declBit(c+944,"ren", false,-1);
    tracep->declBus(c+945,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+814,"auto_in_psel", false,-1);
    tracep->declBit(c+433,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+802,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1174,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1151,"auto_in_pready", false,-1);
    tracep->declBit(c+1175,"auto_in_pslverr", false,-1);
    tracep->declBus(c+17,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1121,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1122,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1149,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBus(c+802,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+814,"in_psel", false,-1);
    tracep->declBit(c+433,"in_penable", false,-1);
    tracep->declBus(c+1174,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1151,"in_pready", false,-1);
    tracep->declBus(c+17,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1175,"in_pslverr", false,-1);
    tracep->declBit(c+1121,"qspi_sck", false,-1);
    tracep->declBit(c+1122,"qspi_ce_n", false,-1);
    tracep->declBus(c+1149,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1149,"din", false,-1, 3,0);
    tracep->declBus(c+1123,"dout", false,-1, 3,0);
    tracep->declBus(c+1124,"douten", false,-1, 3,0);
    tracep->declBit(c+1159,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1125,"clk_i", false,-1);
    tracep->declBit(c+1126,"rst_i", false,-1);
    tracep->declBus(c+802,"adr_i", false,-1, 31,0);
    tracep->declBus(c+805,"dat_i", false,-1, 31,0);
    tracep->declBus(c+17,"dat_o", false,-1, 31,0);
    tracep->declBus(c+806,"sel_i", false,-1, 3,0);
    tracep->declBit(c+814,"cyc_i", false,-1);
    tracep->declBit(c+814,"stb_i", false,-1);
    tracep->declBit(c+1159,"ack_o", false,-1);
    tracep->declBit(c+804,"we_i", false,-1);
    tracep->declBit(c+1121,"sck", false,-1);
    tracep->declBit(c+1122,"ce_n", false,-1);
    tracep->declBus(c+1149,"din", false,-1, 3,0);
    tracep->declBus(c+1123,"dout", false,-1, 3,0);
    tracep->declBus(c+1124,"douten", false,-1, 3,0);
    tracep->declBus(c+1214,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1215,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+464,"mr_sck", false,-1);
    tracep->declBit(c+465,"mr_ce_n", false,-1);
    tracep->declBus(c+1149,"mr_din", false,-1, 3,0);
    tracep->declBus(c+466,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+467,"mr_doe", false,-1);
    tracep->declBit(c+468,"mw_sck", false,-1);
    tracep->declBit(c+469,"mw_ce_n", false,-1);
    tracep->declBus(c+1149,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1109,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+470,"mw_doe", false,-1);
    tracep->declBit(c+1110,"mr_rd", false,-1);
    tracep->declBit(c+471,"mr_done", false,-1);
    tracep->declBit(c+1111,"mw_wr", false,-1);
    tracep->declBit(c+1112,"mw_done", false,-1);
    tracep->declBit(c+814,"wb_valid", false,-1);
    tracep->declBit(c+946,"wb_we", false,-1);
    tracep->declBit(c+947,"wb_re", false,-1);
    tracep->declBit(c+472,"state", false,-1);
    tracep->declBit(c+1113,"nstate", false,-1);
    tracep->declBus(c+948,"size", false,-1, 2,0);
    tracep->declBus(c+949,"byte0", false,-1, 7,0);
    tracep->declBus(c+950,"byte1", false,-1, 7,0);
    tracep->declBus(c+951,"byte2", false,-1, 7,0);
    tracep->declBus(c+952,"byte3", false,-1, 7,0);
    tracep->declBus(c+953,"wdata", false,-1, 31,0);
    tracep->declBit(c+689,"qpi_flag", false,-1);
    tracep->declBit(c+690,"qpi_sck", false,-1);
    tracep->declBit(c+691,"qpi_ce_n", false,-1);
    tracep->declBus(c+692,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+693,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+694,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1160,"rst_n", false,-1);
    tracep->declBus(c+954,"addr", false,-1, 23,0);
    tracep->declBit(c+1110,"rd", false,-1);
    tracep->declBus(c+1223,"size", false,-1, 2,0);
    tracep->declBit(c+471,"done", false,-1);
    tracep->declBus(c+17,"line", false,-1, 31,0);
    tracep->declBit(c+464,"sck", false,-1);
    tracep->declBit(c+465,"ce_n", false,-1);
    tracep->declBus(c+1149,"din", false,-1, 3,0);
    tracep->declBus(c+466,"dout", false,-1, 3,0);
    tracep->declBit(c+467,"douten", false,-1);
    tracep->declBus(c+1214,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1215,"READ", false,-1, 0,0);
    tracep->declBus(c+1224,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+473,"state", false,-1);
    tracep->declBit(c+1114,"nstate", false,-1);
    tracep->declBus(c+474,"counter", false,-1, 7,0);
    tracep->declBus(c+475,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+360+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1225,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+476,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1160,"rst_n", false,-1);
    tracep->declBus(c+955,"addr", false,-1, 23,0);
    tracep->declBus(c+953,"line", false,-1, 31,0);
    tracep->declBus(c+948,"size", false,-1, 2,0);
    tracep->declBit(c+1111,"wr", false,-1);
    tracep->declBit(c+1112,"done", false,-1);
    tracep->declBit(c+468,"sck", false,-1);
    tracep->declBit(c+469,"ce_n", false,-1);
    tracep->declBus(c+1149,"din", false,-1, 3,0);
    tracep->declBus(c+1109,"dout", false,-1, 3,0);
    tracep->declBit(c+470,"douten", false,-1);
    tracep->declBus(c+1214,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1215,"WRITE", false,-1, 0,0);
    tracep->declBus(c+956,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+477,"state", false,-1);
    tracep->declBit(c+1115,"nstate", false,-1);
    tracep->declBus(c+478,"counter", false,-1, 7,0);
    tracep->declBus(c+479,"saddr", false,-1, 23,0);
    tracep->declBus(c+1226,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+808,"auto_in_psel", false,-1);
    tracep->declBit(c+429,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+802,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1174,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+462,"auto_in_pready", false,-1);
    tracep->declBit(c+1175,"auto_in_pslverr", false,-1);
    tracep->declBus(c+463,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1150,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+453,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+454,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+455,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+456,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+457,"sdram_bundle_we", false,-1);
    tracep->declBus(c+458,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+459,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+460,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+461,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBus(c+802,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+808,"in_psel", false,-1);
    tracep->declBit(c+429,"in_penable", false,-1);
    tracep->declBus(c+1174,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+462,"in_pready", false,-1);
    tracep->declBus(c+463,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1175,"in_pslverr", false,-1);
    tracep->declBit(c+1150,"sdram_clk", false,-1);
    tracep->declBit(c+453,"sdram_cke", false,-1);
    tracep->declBit(c+454,"sdram_cs", false,-1);
    tracep->declBit(c+455,"sdram_ras", false,-1);
    tracep->declBit(c+456,"sdram_cas", false,-1);
    tracep->declBit(c+457,"sdram_we", false,-1);
    tracep->declBus(c+458,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+459,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+460,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+461,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+480,"sdram_dout_en", false,-1);
    tracep->declBus(c+481,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+364,"state", false,-1, 1,0);
    tracep->declBit(c+482,"req_accept", false,-1);
    tracep->declBit(c+957,"is_read", false,-1);
    tracep->declBit(c+958,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1125,"clk_i", false,-1);
    tracep->declBit(c+1126,"rst_i", false,-1);
    tracep->declBus(c+959,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+957,"inport_rd_i", false,-1);
    tracep->declBus(c+1189,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+802,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+805,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+461,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+482,"inport_accept_o", false,-1);
    tracep->declBit(c+462,"inport_ack_o", false,-1);
    tracep->declBit(c+1175,"inport_error_o", false,-1);
    tracep->declBus(c+463,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1150,"sdram_clk_o", false,-1);
    tracep->declBit(c+453,"sdram_cke_o", false,-1);
    tracep->declBit(c+454,"sdram_cs_o", false,-1);
    tracep->declBit(c+455,"sdram_ras_o", false,-1);
    tracep->declBit(c+456,"sdram_cas_o", false,-1);
    tracep->declBit(c+457,"sdram_we_o", false,-1);
    tracep->declBus(c+460,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+458,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+459,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+481,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+480,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1227,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1228,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1229,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1231,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1232,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1233,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1234,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1231,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1236,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1237,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1238,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1239,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1240,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1241,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1242,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1187,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1243,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1231,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1187,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1242,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1241,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1237,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1239,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1238,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1240,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1236,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1244,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1245,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1246,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1246,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1247,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1246,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1248,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+802,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+959,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+957,"ram_rd_w", false,-1);
    tracep->declBit(c+482,"ram_accept_w", false,-1);
    tracep->declBus(c+805,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+463,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+462,"ram_ack_w", false,-1);
    tracep->declBit(c+960,"ram_req_w", false,-1);
    tracep->declBus(c+483,"command_q", false,-1, 3,0);
    tracep->declBus(c+458,"addr_q", false,-1, 12,0);
    tracep->declBus(c+481,"data_q", false,-1, 15,0);
    tracep->declBit(c+484,"data_rd_en_q", false,-1);
    tracep->declBus(c+460,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+453,"cke_q", false,-1);
    tracep->declBus(c+459,"bank_q", false,-1, 1,0);
    tracep->declBus(c+485,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+486,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+461,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+487,"refresh_q", false,-1);
    tracep->declBus(c+488,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+489+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+493,"state_q", false,-1, 3,0);
    tracep->declBus(c+1116,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1117,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+494,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+495,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+961,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+962,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+963,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1231,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+496,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1118,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1249,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+497,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+498,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+499,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+500,"idx", false,-1, 31,0);
    tracep->declBus(c+501,"rd_q", false,-1, 3,0);
    tracep->declBit(c+462,"ack_q", false,-1);
    tracep->declArray(c+502,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+818,"auto_in_psel", false,-1);
    tracep->declBit(c+434,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+810,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1174,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"auto_in_pready", false,-1);
    tracep->declBit(c+1175,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1015,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+451,"spi_bundle_sck", false,-1);
    tracep->declBus(c+452,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1147,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1148,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1250,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1251,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1252,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBus(c+964,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+818,"in_psel", false,-1);
    tracep->declBit(c+434,"in_penable", false,-1);
    tracep->declBus(c+1174,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"in_pready", false,-1);
    tracep->declBus(c+1015,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1175,"in_pslverr", false,-1);
    tracep->declBit(c+451,"spi_sck", false,-1);
    tracep->declBus(c+452,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1147,"spi_mosi", false,-1);
    tracep->declBit(c+1148,"spi_miso", false,-1);
    tracep->declBit(c+505,"spi_irq_out", false,-1);
    tracep->declBus(c+965,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+966,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+967,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+968,"wb_we_i", false,-1);
    tracep->declBit(c+969,"wb_stb_i", false,-1);
    tracep->declBit(c+970,"wb_cyc_i", false,-1);
    tracep->declBit(c+506,"wb_ack_o", false,-1);
    tracep->declBus(c+507,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1190,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1174,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1253,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1254,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1223,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1255,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1256,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1257,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+365,"state", false,-1, 2,0);
    tracep->declBus(c+366,"next_state", false,-1, 2,0);
    tracep->declBus(c+367,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+368,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+369,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+370,"flash_pwrite", false,-1);
    tracep->declBit(c+371,"flash_psel", false,-1);
    tracep->declBit(c+372,"flash_penable", false,-1);
    tracep->declBit(c+373,"flash_pready", false,-1);
    tracep->declBus(c+374,"in_paddr_reg", false,-1, 31,0);
    tracep->declBus(c+375,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1258,"Tp", false,-1, 31,0);
    tracep->declBit(c+1125,"wb_clk_i", false,-1);
    tracep->declBit(c+1126,"wb_rst_i", false,-1);
    tracep->declBus(c+965,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+966,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+507,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+967,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+968,"wb_we_i", false,-1);
    tracep->declBit(c+969,"wb_stb_i", false,-1);
    tracep->declBit(c+970,"wb_cyc_i", false,-1);
    tracep->declBit(c+506,"wb_ack_o", false,-1);
    tracep->declBit(c+1175,"wb_err_o", false,-1);
    tracep->declBit(c+505,"wb_int_o", false,-1);
    tracep->declBus(c+452,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+451,"sclk_pad_o", false,-1);
    tracep->declBit(c+1147,"mosi_pad_o", false,-1);
    tracep->declBit(c+1148,"miso_pad_i", false,-1);
    tracep->declBus(c+508,"divider", false,-1, 15,0);
    tracep->declBus(c+509,"ctrl", false,-1, 13,0);
    tracep->declBus(c+510,"ss", false,-1, 7,0);
    tracep->declBus(c+1119,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+511,"rx", false,-1, 127,0);
    tracep->declBit(c+515,"rx_negedge", false,-1);
    tracep->declBit(c+516,"tx_negedge", false,-1);
    tracep->declBus(c+517,"char_len", false,-1, 6,0);
    tracep->declBit(c+518,"go", false,-1);
    tracep->declBit(c+519,"lsb", false,-1);
    tracep->declBit(c+520,"ie", false,-1);
    tracep->declBit(c+521,"ass", false,-1);
    tracep->declBit(c+971,"spi_divider_sel", false,-1);
    tracep->declBit(c+972,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+973,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+974,"spi_ss_sel", false,-1);
    tracep->declBit(c+522,"tip", false,-1);
    tracep->declBit(c+523,"pos_edge", false,-1);
    tracep->declBit(c+524,"neg_edge", false,-1);
    tracep->declBit(c+525,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1258,"Tp", false,-1, 31,0);
    tracep->declBit(c+1125,"clk_in", false,-1);
    tracep->declBit(c+1126,"rst", false,-1);
    tracep->declBit(c+522,"enable", false,-1);
    tracep->declBit(c+518,"go", false,-1);
    tracep->declBit(c+525,"last_clk", false,-1);
    tracep->declBus(c+508,"divider", false,-1, 15,0);
    tracep->declBit(c+451,"clk_out", false,-1);
    tracep->declBit(c+523,"pos_edge", false,-1);
    tracep->declBit(c+524,"neg_edge", false,-1);
    tracep->declBus(c+526,"cnt", false,-1, 15,0);
    tracep->declBit(c+527,"cnt_zero", false,-1);
    tracep->declBit(c+528,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1258,"Tp", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1126,"rst", false,-1);
    tracep->declBus(c+975,"latch", false,-1, 3,0);
    tracep->declBus(c+967,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+517,"len", false,-1, 6,0);
    tracep->declBit(c+519,"lsb", false,-1);
    tracep->declBit(c+518,"go", false,-1);
    tracep->declBit(c+523,"pos_edge", false,-1);
    tracep->declBit(c+524,"neg_edge", false,-1);
    tracep->declBit(c+515,"rx_negedge", false,-1);
    tracep->declBit(c+516,"tx_negedge", false,-1);
    tracep->declBit(c+522,"tip", false,-1);
    tracep->declBit(c+525,"last", false,-1);
    tracep->declBus(c+966,"p_in", false,-1, 31,0);
    tracep->declArray(c+511,"p_out", false,-1, 127,0);
    tracep->declBit(c+451,"s_clk", false,-1);
    tracep->declBit(c+1148,"s_in", false,-1);
    tracep->declBit(c+1147,"s_out", false,-1);
    tracep->declBus(c+529,"cnt", false,-1, 7,0);
    tracep->declArray(c+511,"data", false,-1, 127,0);
    tracep->declBus(c+530,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+531,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+532,"rx_clk", false,-1);
    tracep->declBit(c+533,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+815,"auto_in_psel", false,-1);
    tracep->declBit(c+816,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+812,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1174,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+817,"auto_in_pready", false,-1);
    tracep->declBit(c+1175,"auto_in_pslverr", false,-1);
    tracep->declBus(c+979,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1145,"uart_rx", false,-1);
    tracep->declBit(c+1146,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+815,"in_psel", false,-1);
    tracep->declBit(c+816,"in_penable", false,-1);
    tracep->declBus(c+1174,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+817,"in_pready", false,-1);
    tracep->declBit(c+1175,"in_pslverr", false,-1);
    tracep->declBus(c+942,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+979,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1145,"uart_rx", false,-1);
    tracep->declBit(c+1146,"uart_tx", false,-1);
    tracep->declBit(c+534,"rtsn", false,-1);
    tracep->declBit(c+1175,"ctsn", false,-1);
    tracep->declBit(c+535,"dtr_pad_o", false,-1);
    tracep->declBit(c+1175,"dsr_pad_i", false,-1);
    tracep->declBit(c+1175,"ri_pad_i", false,-1);
    tracep->declBit(c+1175,"dcd_pad_i", false,-1);
    tracep->declBit(c+536,"interrupt", false,-1);
    tracep->declBit(c+1161,"reg_we", false,-1);
    tracep->declBit(c+1162,"reg_re", false,-1);
    tracep->declBus(c+976,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+977,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+376,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1120,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+537,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1126,"wb_rst_i", false,-1);
    tracep->declBus(c+976,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+978,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1120,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1161,"wb_we_i", false,-1);
    tracep->declBit(c+1162,"wb_re_i", false,-1);
    tracep->declBit(c+1146,"stx_pad_o", false,-1);
    tracep->declBit(c+1145,"srx_pad_i", false,-1);
    tracep->declBus(c+1244,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+537,"rts_pad_o", false,-1);
    tracep->declBit(c+535,"dtr_pad_o", false,-1);
    tracep->declBit(c+536,"int_o", false,-1);
    tracep->declBit(c+538,"enable", false,-1);
    tracep->declBit(c+539,"srx_pad", false,-1);
    tracep->declBus(c+540,"ier", false,-1, 3,0);
    tracep->declBus(c+541,"iir", false,-1, 3,0);
    tracep->declBus(c+542,"fcr", false,-1, 1,0);
    tracep->declBus(c+543,"mcr", false,-1, 4,0);
    tracep->declBus(c+544,"lcr", false,-1, 7,0);
    tracep->declBus(c+545,"msr", false,-1, 7,0);
    tracep->declBus(c+546,"dl", false,-1, 15,0);
    tracep->declBus(c+547,"scratch", false,-1, 7,0);
    tracep->declBit(c+548,"start_dlc", false,-1);
    tracep->declBit(c+549,"lsr_mask_d", false,-1);
    tracep->declBit(c+550,"msi_reset", false,-1);
    tracep->declBus(c+551,"dlc", false,-1, 15,0);
    tracep->declBus(c+552,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+553,"rx_reset", false,-1);
    tracep->declBit(c+554,"tx_reset", false,-1);
    tracep->declBit(c+555,"dlab", false,-1);
    tracep->declBit(c+1185,"cts_pad_i", false,-1);
    tracep->declBit(c+1175,"dsr_pad_i", false,-1);
    tracep->declBit(c+1175,"ri_pad_i", false,-1);
    tracep->declBit(c+1175,"dcd_pad_i", false,-1);
    tracep->declBit(c+556,"loopback", false,-1);
    tracep->declBit(c+1175,"cts", false,-1);
    tracep->declBit(c+1185,"dsr", false,-1);
    tracep->declBit(c+1185,"ri", false,-1);
    tracep->declBit(c+1185,"dcd", false,-1);
    tracep->declBit(c+557,"cts_c", false,-1);
    tracep->declBit(c+558,"dsr_c", false,-1);
    tracep->declBit(c+559,"ri_c", false,-1);
    tracep->declBit(c+560,"dcd_c", false,-1);
    tracep->declBus(c+561,"lsr", false,-1, 7,0);
    tracep->declBit(c+562,"lsr0", false,-1);
    tracep->declBit(c+563,"lsr1", false,-1);
    tracep->declBit(c+564,"lsr2", false,-1);
    tracep->declBit(c+565,"lsr3", false,-1);
    tracep->declBit(c+566,"lsr4", false,-1);
    tracep->declBit(c+567,"lsr5", false,-1);
    tracep->declBit(c+568,"lsr6", false,-1);
    tracep->declBit(c+569,"lsr7", false,-1);
    tracep->declBit(c+570,"lsr0r", false,-1);
    tracep->declBit(c+571,"lsr1r", false,-1);
    tracep->declBit(c+572,"lsr2r", false,-1);
    tracep->declBit(c+573,"lsr3r", false,-1);
    tracep->declBit(c+574,"lsr4r", false,-1);
    tracep->declBit(c+575,"lsr5r", false,-1);
    tracep->declBit(c+576,"lsr6r", false,-1);
    tracep->declBit(c+577,"lsr7r", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+578,"rls_int", false,-1);
    tracep->declBit(c+579,"rda_int", false,-1);
    tracep->declBit(c+580,"ti_int", false,-1);
    tracep->declBit(c+581,"thre_int", false,-1);
    tracep->declBit(c+582,"ms_int", false,-1);
    tracep->declBit(c+583,"tf_push", false,-1);
    tracep->declBit(c+584,"rf_pop", false,-1);
    tracep->declBus(c+1163,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+585,"rf_error_bit", false,-1);
    tracep->declBit(c+563,"rf_overrun", false,-1);
    tracep->declBit(c+586,"rf_push_pulse", false,-1);
    tracep->declBus(c+587,"rf_count", false,-1, 4,0);
    tracep->declBus(c+588,"tf_count", false,-1, 4,0);
    tracep->declBus(c+589,"tstate", false,-1, 2,0);
    tracep->declBus(c+590,"rstate", false,-1, 3,0);
    tracep->declBus(c+591,"counter_t", false,-1, 9,0);
    tracep->declBit(c+592,"thre_set_en", false,-1);
    tracep->declBus(c+593,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+594,"block_value", false,-1, 7,0);
    tracep->declBit(c+595,"serial_out", false,-1);
    tracep->declBit(c+596,"serial_in", false,-1);
    tracep->declBit(c+8,"lsr_mask_condition", false,-1);
    tracep->declBit(c+9,"iir_read", false,-1);
    tracep->declBit(c+10,"msr_read", false,-1);
    tracep->declBit(c+11,"fifo_read", false,-1);
    tracep->declBit(c+12,"fifo_write", false,-1);
    tracep->declBus(c+597,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+598,"lsr0_d", false,-1);
    tracep->declBit(c+599,"lsr1_d", false,-1);
    tracep->declBit(c+600,"lsr2_d", false,-1);
    tracep->declBit(c+601,"lsr3_d", false,-1);
    tracep->declBit(c+602,"lsr4_d", false,-1);
    tracep->declBit(c+603,"lsr5_d", false,-1);
    tracep->declBit(c+604,"lsr6_d", false,-1);
    tracep->declBit(c+605,"lsr7_d", false,-1);
    tracep->declBit(c+606,"rls_int_d", false,-1);
    tracep->declBit(c+607,"thre_int_d", false,-1);
    tracep->declBit(c+608,"ms_int_d", false,-1);
    tracep->declBit(c+609,"ti_int_d", false,-1);
    tracep->declBit(c+610,"rda_int_d", false,-1);
    tracep->declBit(c+611,"rls_int_rise", false,-1);
    tracep->declBit(c+612,"thre_int_rise", false,-1);
    tracep->declBit(c+613,"ms_int_rise", false,-1);
    tracep->declBit(c+614,"ti_int_rise", false,-1);
    tracep->declBit(c+615,"rda_int_rise", false,-1);
    tracep->declBit(c+616,"rls_int_pnd", false,-1);
    tracep->declBit(c+617,"rda_int_pnd", false,-1);
    tracep->declBit(c+618,"thre_int_pnd", false,-1);
    tracep->declBit(c+619,"ms_int_pnd", false,-1);
    tracep->declBit(c+620,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1258,"Tp", false,-1, 31,0);
    tracep->declBus(c+1258,"width", false,-1, 31,0);
    tracep->declBus(c+1215,"init_value", false,-1, 0,0);
    tracep->declBit(c+1126,"rst_i", false,-1);
    tracep->declBit(c+1125,"clk_i", false,-1);
    tracep->declBit(c+1175,"stage1_rst_i", false,-1);
    tracep->declBit(c+1185,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1145,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+539,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+621,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1126,"wb_rst_i", false,-1);
    tracep->declBus(c+544,"lcr", false,-1, 7,0);
    tracep->declBit(c+584,"rf_pop", false,-1);
    tracep->declBit(c+596,"srx_pad_i", false,-1);
    tracep->declBit(c+538,"enable", false,-1);
    tracep->declBit(c+553,"rx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBus(c+591,"counter_t", false,-1, 9,0);
    tracep->declBus(c+587,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1163,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+563,"rf_overrun", false,-1);
    tracep->declBit(c+585,"rf_error_bit", false,-1);
    tracep->declBus(c+590,"rstate", false,-1, 3,0);
    tracep->declBit(c+586,"rf_push_pulse", false,-1);
    tracep->declBus(c+622,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+623,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+624,"rshift", false,-1, 7,0);
    tracep->declBit(c+625,"rparity", false,-1);
    tracep->declBit(c+626,"rparity_error", false,-1);
    tracep->declBit(c+627,"rframing_error", false,-1);
    tracep->declBit(c+628,"rbit_in", false,-1);
    tracep->declBit(c+629,"rparity_xor", false,-1);
    tracep->declBus(c+630,"counter_b", false,-1, 7,0);
    tracep->declBit(c+631,"rf_push_q", false,-1);
    tracep->declBus(c+632,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+633,"rf_push", false,-1);
    tracep->declBit(c+634,"break_error", false,-1);
    tracep->declBit(c+635,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+636,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+637,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+638,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1187,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1242,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1241,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1237,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1239,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1238,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1240,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1236,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1244,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1245,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1259,"sr_push", false,-1, 3,0);
    tracep->declBus(c+639,"toc_value", false,-1, 9,0);
    tracep->declBus(c+640,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1260,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1247,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1231,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1216,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1126,"wb_rst_i", false,-1);
    tracep->declBit(c+586,"push", false,-1);
    tracep->declBit(c+584,"pop", false,-1);
    tracep->declBus(c+632,"data_in", false,-1, 10,0);
    tracep->declBit(c+553,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1163,"data_out", false,-1, 10,0);
    tracep->declBit(c+563,"overrun", false,-1);
    tracep->declBus(c+587,"count", false,-1, 4,0);
    tracep->declBit(c+585,"error_bit", false,-1);
    tracep->declBus(c+1164,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+641+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+657,"top", false,-1, 3,0);
    tracep->declBus(c+658,"bottom", false,-1, 3,0);
    tracep->declBus(c+659,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+660,"word0", false,-1, 2,0);
    tracep->declBus(c+661,"word1", false,-1, 2,0);
    tracep->declBus(c+662,"word2", false,-1, 2,0);
    tracep->declBus(c+663,"word3", false,-1, 2,0);
    tracep->declBus(c+664,"word4", false,-1, 2,0);
    tracep->declBus(c+665,"word5", false,-1, 2,0);
    tracep->declBus(c+666,"word6", false,-1, 2,0);
    tracep->declBus(c+667,"word7", false,-1, 2,0);
    tracep->declBus(c+668,"word8", false,-1, 2,0);
    tracep->declBus(c+669,"word9", false,-1, 2,0);
    tracep->declBus(c+670,"word10", false,-1, 2,0);
    tracep->declBus(c+671,"word11", false,-1, 2,0);
    tracep->declBus(c+672,"word12", false,-1, 2,0);
    tracep->declBus(c+673,"word13", false,-1, 2,0);
    tracep->declBus(c+674,"word14", false,-1, 2,0);
    tracep->declBus(c+675,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1231,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1252,"data_width", false,-1, 31,0);
    tracep->declBus(c+1247,"depth", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+586,"we", false,-1);
    tracep->declBus(c+657,"a", false,-1, 3,0);
    tracep->declBus(c+658,"dpra", false,-1, 3,0);
    tracep->declBus(c+676,"di", false,-1, 7,0);
    tracep->declBus(c+1164,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+377+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1126,"wb_rst_i", false,-1);
    tracep->declBus(c+544,"lcr", false,-1, 7,0);
    tracep->declBit(c+583,"tf_push", false,-1);
    tracep->declBus(c+978,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+538,"enable", false,-1);
    tracep->declBit(c+554,"tx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+595,"stx_pad_o", false,-1);
    tracep->declBus(c+589,"tstate", false,-1, 2,0);
    tracep->declBus(c+588,"tf_count", false,-1, 4,0);
    tracep->declBus(c+677,"counter", false,-1, 4,0);
    tracep->declBus(c+678,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+679,"shift_out", false,-1, 6,0);
    tracep->declBit(c+680,"stx_o_tmp", false,-1);
    tracep->declBit(c+681,"parity_xor", false,-1);
    tracep->declBit(c+682,"tf_pop", false,-1);
    tracep->declBit(c+683,"bit_out", false,-1);
    tracep->declBus(c+978,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1165,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+684,"tf_overrun", false,-1);
    tracep->declBus(c+1190,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1174,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1253,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1254,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1223,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1255,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1252,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1247,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1231,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1216,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+1126,"wb_rst_i", false,-1);
    tracep->declBit(c+583,"push", false,-1);
    tracep->declBit(c+682,"pop", false,-1);
    tracep->declBus(c+978,"data_in", false,-1, 7,0);
    tracep->declBit(c+554,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1165,"data_out", false,-1, 7,0);
    tracep->declBit(c+684,"overrun", false,-1);
    tracep->declBus(c+588,"count", false,-1, 4,0);
    tracep->declBus(c+685,"top", false,-1, 3,0);
    tracep->declBus(c+686,"bottom", false,-1, 3,0);
    tracep->declBus(c+687,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1231,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1252,"data_width", false,-1, 31,0);
    tracep->declBus(c+1247,"depth", false,-1, 31,0);
    tracep->declBit(c+1125,"clk", false,-1);
    tracep->declBit(c+583,"we", false,-1);
    tracep->declBus(c+685,"a", false,-1, 3,0);
    tracep->declBus(c+686,"dpra", false,-1, 3,0);
    tracep->declBus(c+978,"di", false,-1, 7,0);
    tracep->declBus(c+1165,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+393+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBit(c+809,"auto_in_psel", false,-1);
    tracep->declBit(c+430,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+810,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1174,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1176,"auto_in_pready", false,-1);
    tracep->declBit(c+1177,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1178,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1139,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1140,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1141,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1142,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1143,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1144,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBus(c+964,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+809,"in_psel", false,-1);
    tracep->declBit(c+430,"in_penable", false,-1);
    tracep->declBus(c+1174,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1176,"in_pready", false,-1);
    tracep->declBus(c+1178,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1177,"in_pslverr", false,-1);
    tracep->declBus(c+1139,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1140,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1141,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1142,"vga_hsync", false,-1);
    tracep->declBit(c+1143,"vga_vsync", false,-1);
    tracep->declBit(c+1144,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+451,"sck", false,-1);
    tracep->declBit(c+1166,"ss", false,-1);
    tracep->declBit(c+1147,"mosi", false,-1);
    tracep->declBit(c+716,"miso", false,-1);
    tracep->declBus(c+717,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+718,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+719,"counter", false,-1, 2,0);
    tracep->declBit(c+720,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+451,"sck", false,-1);
    tracep->declBit(c+688,"ss", false,-1);
    tracep->declBit(c+1147,"mosi", false,-1);
    tracep->declBit(c+1167,"miso", false,-1);
    tracep->declBit(c+688,"reset", false,-1);
    tracep->declBus(c+710,"state", false,-1, 2,0);
    tracep->declBus(c+711,"counter", false,-1, 7,0);
    tracep->declBus(c+712,"cmd", false,-1, 7,0);
    tracep->declBus(c+713,"addr", false,-1, 23,0);
    tracep->declBus(c+714,"data", false,-1, 31,0);
    tracep->declBit(c+715,"ren", false,-1);
    tracep->declBus(c+1168,"rdata", false,-1, 31,0);
    tracep->declBus(c+1169,"raddr", false,-1, 31,0);
    tracep->declBus(c+1170,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+451,"clock", false,-1);
    tracep->declBit(c+715,"valid", false,-1);
    tracep->declBus(c+712,"cmd", false,-1, 7,0);
    tracep->declBus(c+1169,"addr", false,-1, 31,0);
    tracep->declBus(c+1168,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1121,"sck", false,-1);
    tracep->declBit(c+1122,"ce_n", false,-1);
    tracep->declBus(c+1149,"dio", false,-1, 3,0);
    tracep->declBit(c+1122,"reset", false,-1);
    tracep->declBus(c+13,"state", false,-1, 3,0);
    tracep->declBus(c+14,"counter", false,-1, 7,0);
    tracep->declBus(c+795,"cmd", false,-1, 7,0);
    tracep->declBus(c+796,"addr", false,-1, 23,0);
    tracep->declBus(c+15,"data", false,-1, 31,0);
    tracep->declBus(c+797,"wdata", false,-1, 31,0);
    tracep->declBit(c+1171,"qpi_flag", false,-1);
    tracep->declBus(c+1172,"rdata_bswap", false,-1, 31,0);
    tracep->declBus(c+798,"wdata_bswap", false,-1, 31,0);
    tracep->declBit(c+799,"ren", false,-1);
    tracep->declBit(c+800,"wen", false,-1);
    tracep->declBus(c+1173,"rdata", false,-1, 31,0);
    tracep->declBus(c+801,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1121,"clock", false,-1);
    tracep->declBit(c+799,"ren", false,-1);
    tracep->declBit(c+800,"wen", false,-1);
    tracep->declBus(c+795,"cmd", false,-1, 7,0);
    tracep->declBus(c+801,"saddr", false,-1, 31,0);
    tracep->declBus(c+1173,"rdata", false,-1, 31,0);
    tracep->declBus(c+798,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+453,"cke", false,-1);
    tracep->declBit(c+454,"cs", false,-1);
    tracep->declBit(c+455,"ras", false,-1);
    tracep->declBit(c+456,"cas", false,-1);
    tracep->declBit(c+457,"we", false,-1);
    tracep->declBus(c+458,"a", false,-1, 12,0);
    tracep->declBus(c+459,"ba", false,-1, 1,0);
    tracep->declBus(c+460,"dqm", false,-1, 1,0);
    tracep->declBus(c+461,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullIData(oldp+15,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullBit(oldp+16,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+17,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+30,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullQData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+65,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+68,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                     ? (vlSelf->__VdfgTmp_hf132a334__0 
                                        >> 0x18U) : 0U)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                               << 0x18U) | ((0xff0000U 
                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x10U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     (vlSelf->__VdfgTmp_hf132a334__0 
                                                      >> 8U)
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? vlSelf->__VdfgTmp_hf132a334__0
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+69,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+78,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+124,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+134,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+142,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+146,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+150,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+154,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+158,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+162,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+170,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+174,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+178,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+182,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+186,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+190,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+194,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+198,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+202,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+206,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+210,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+214,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+218,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+226,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+230,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+234,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+238,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+246,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+250,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+254,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+258,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct7),7);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__shamt),5);
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__res),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mepc),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mstatus),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mcause),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mtvec),32);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen));
    bufp->fullIData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd),32);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_addr),5);
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_wen));
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mepc),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mstatus),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mcause),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mtvec),32);
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_en));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_en));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_en));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_en));
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata_reg),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_paddr_reg),32);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullIData(oldp+409,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                       << 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0)
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                  << 0x10U)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0)
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                   << 0x18U)
                                                   : 0U))))),32);
    bufp->fullIData(oldp+410,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+411,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+412,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+413,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+414,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+415,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+416,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+417,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3))))));
    bufp->fullCData(oldp+418,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))
                                : 0U)),4);
    bufp->fullCData(oldp+419,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))
                                : 0U)),4);
    bufp->fullCData(oldp+420,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                             | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                           << 0x18U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                    << 0x12U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                          << 0xeU) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                             << 0xcU) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                    << 1U))))))
                                : 0U)),2);
    bufp->fullCData(oldp+421,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                         : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                   : 0U)))
                                : 0U)),2);
    bufp->fullBit(oldp+422,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+423,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast)
                                 : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                       << 0xfU) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                       << 0xdU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullCData(oldp+424,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))
                                : 0U)),4);
    bufp->fullCData(oldp+425,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))
                                : 0U)),4);
    bufp->fullCData(oldp+426,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                             | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                           << 0x18U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                    << 0x12U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                          << 0xeU) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                             << 0xcU) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                    << 1U))))))
                                : 0U)),2);
    bufp->fullCData(oldp+427,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                         : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                   : 0U)))
                                : 0U)),2);
    bufp->fullBit(oldp+428,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast)
                                 : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                       << 0xfU) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                       << 0xdU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+429,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+430,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+431,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+432,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+433,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+434,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+435,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                           << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))))));
    bufp->fullBit(oldp+436,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullIData(oldp+437,((((- (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid)))) 
                                & ((- (IData)((0xa0000048U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                               | ((- (IData)((0xa000004cU 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                  & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullCData(oldp+438,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                 : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->fullBit(oldp+439,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                          >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullCData(oldp+440,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))),4);
    bufp->fullCData(oldp+441,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))),4);
    bufp->fullCData(oldp+442,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                         | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                 << 0x1cU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                    << 0x1aU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                          << 0x16U) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                             << 0x14U) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                << 0x12U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                   << 0x10U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                      << 0xeU) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                         << 0xcU) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                   << 1U))))))),2);
    bufp->fullCData(oldp+443,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                     : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U)))),2);
    bufp->fullBit(oldp+444,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+445,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast)
                              : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                  >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullIData(oldp+446,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+447,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullIData(oldp+448,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? vlSelf->__VdfgTmp_hf132a334__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullBit(oldp+449,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+450,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+454,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+455,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+456,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+457,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+461,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+463,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+466,((0xfU & ((2U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                                      << 2U)))))
                                        : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+467,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+471,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+476,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+480,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+482,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+515,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+516,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+517,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+518,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+519,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+520,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+521,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+525,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+527,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+528,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+530,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+534,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+535,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+537,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+555,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+556,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+557,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+558,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+559,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+560,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+561,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+564,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+565,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+566,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+585,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+592,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+611,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+612,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+613,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+614,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+615,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+634,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+635,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+636,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+637,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+638,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+640,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+659,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+676,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+687,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullIData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullIData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+715,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+721,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op),7);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3),3);
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_read));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_write));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+740,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+743,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                  ? 0xfU
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                    & (1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                     ? 0xeU
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                      & (0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                      ? 4U
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                       & (1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                       ? 0xcU
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                        & (2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                        ? 0xcU
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                         & (0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                         ? 8U
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                          & (1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                          ? 8U
                                                          : 
                                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                           & (2U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                           ? 8U
                                                           : 0U))))))))))))),4);
    bufp->fullCData(oldp+744,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+745,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf0b4f3eb__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf2be8e81__0))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_done));
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+754,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+755,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+756,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+758,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             | ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                | ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                   | ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                      | ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                            | ((0x73U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                               | ((0x33U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))))))))))));
    bufp->fullBit(oldp+759,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+761,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullCData(oldp+763,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+764,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                      | ((3U == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                         | ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                            | ((0xfU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                               | ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                  | (0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))))))))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullCData(oldp+765,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+766,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+767,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U)
                                         : ((IData)(
                                                    ((0x73U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                     & (0U 
                                                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)))
                                             ? 0xfU
                                             : 0U)))),5);
    bufp->fullIData(oldp+768,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+769,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+770,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+771,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+772,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+774,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+775,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_start));
    bufp->fullIData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARBURST),2);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullBit(oldp+789,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+790,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullCData(oldp+791,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                    ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                             & (1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                             ? 3U : 
                                            (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                              & (2U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                              ? 0xfU
                                              : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                  & (0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                  ? 2U
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                   & (1U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                   ? 6U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                    & (2U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                    ? 0xeU
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                     ? 4U
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                      & (1U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                      ? 0xcU
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                       & (2U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                       ? 0xcU
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                        & (0U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                        ? 8U
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                         & (1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                         ? 8U
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                          & (2U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                          ? 8U
                                                          : 0U))))))))))))
                                : 0U)),4);
    bufp->fullBit(oldp+792,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+793,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+794,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+796,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullIData(oldp+797,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata),32);
    bufp->fullIData(oldp+798,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata 
                                << 0x18U) | ((0xff0000U 
                                              & (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata 
                                                 << 8U)) 
                                             | ((0xff00U 
                                                 & (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata 
                                                    >> 8U)) 
                                                | (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata 
                                                   >> 0x18U))))),32);
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullIData(oldp+801,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+808,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+809,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+810,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+811,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+812,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+813,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+817,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+818,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+840,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+841,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf7188004__0))));
    bufp->fullCData(oldp+842,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h827cdd7a__0))),4);
    bufp->fullIData(oldp+843,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0)),32);
    bufp->fullCData(oldp+844,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_ha6afd63c__0))),8);
    bufp->fullCData(oldp+845,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf391cef2__0))),3);
    bufp->fullCData(oldp+846,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h959727d0__0))),2);
    bufp->fullBit(oldp+847,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0))));
    bufp->fullIData(oldp+848,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0)),32);
    bufp->fullCData(oldp+849,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0))),4);
    bufp->fullBit(oldp+850,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                       << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)))));
    bufp->fullBit(oldp+851,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0))));
    bufp->fullBit(oldp+852,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0))));
    bufp->fullCData(oldp+853,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he10d6d01__0))),4);
    bufp->fullIData(oldp+854,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0)),32);
    bufp->fullCData(oldp+855,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf8ac29e2__0))),8);
    bufp->fullCData(oldp+856,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h9cbb9c75__0))),3);
    bufp->fullCData(oldp+857,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc2b2e256__0))),2);
    bufp->fullBit(oldp+858,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0))));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+860,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+862,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+864,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+880,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+881,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+882,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+883,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+884,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+885,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+886,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+889,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+890,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+891,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+892,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+897,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+899,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+900,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WREADY));
    bufp->fullIData(oldp+908,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+909,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+910,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+911,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+912,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_ha6afd63c__0) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+913,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf8ac29e2__0) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+914,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h827cdd7a__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+915,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he10d6d01__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+916,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf391cef2__0) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+917,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h9cbb9c75__0) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+918,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h959727d0__0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+919,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc2b2e256__0) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+920,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf7188004__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+921,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+922,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+923,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+924,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+925,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                        << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)) 
                                   >> 1U))));
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata),32);
    bufp->fullIData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWBURST),2);
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullIData(oldp+942,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+943,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+951,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+952,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+953,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+954,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+955,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+956,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+961,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+962,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+963,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+964,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+971,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+972,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+974,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+976,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+979,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+980,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+982,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+983,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+984,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+985,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+986,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+987,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+988,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+990,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+991,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+992,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+993,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+994,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+995,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+996,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+997,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+998,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+999,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+1000,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1001,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1002,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1003,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1004,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1005,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1006,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1007,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1008,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1009,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1010,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1011,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1012,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1020,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1049,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1050,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1072,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1073,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1074,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1075,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1076,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1077,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1078,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1079,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1080,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1081,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1082,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1083,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1084,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1085,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1086,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1087,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1088,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1089,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1090,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1091,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1092,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1093,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1094,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1095,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1096,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1097,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1098,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1099,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1100,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1101,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1102,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1103,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1125,(vlSelf->clock));
    bufp->fullBit(oldp+1126,(vlSelf->reset));
    bufp->fullSData(oldp+1127,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1128,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1129,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1130,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1131,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1132,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1133,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1134,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1135,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1136,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1137,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1138,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1139,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1140,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1141,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1142,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1143,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1144,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1145,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1146,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1148,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1150,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1151,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1152,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullIData(oldp+1153,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullBit(oldp+1154,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_DONE));
    bufp->fullIData(oldp+1156,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0)
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                            << 8U) : 
                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0)
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                             << 0x10U)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0)
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                 << 0x18U)
                                              : 0U))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1157,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullBit(oldp+1159,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1160,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1163,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1167,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1169,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1172,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1174,(1U),3);
    bufp->fullBit(oldp+1175,(0U));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1185,(1U));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1187,(0U),4);
    bufp->fullIData(oldp+1188,(0U),32);
    bufp->fullCData(oldp+1189,(0U),8);
    bufp->fullCData(oldp+1190,(0U),3);
    bufp->fullCData(oldp+1191,(0U),2);
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1202,(0U),32);
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST));
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+1209,(1U),2);
    bufp->fullCData(oldp+1210,(2U),2);
    bufp->fullCData(oldp+1211,(3U),2);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_wsize),3);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rsize),3);
    bufp->fullBit(oldp+1214,(0U));
    bufp->fullBit(oldp+1215,(1U));
    bufp->fullIData(oldp+1216,(5U),32);
    bufp->fullIData(oldp+1217,(0x20U),32);
    bufp->fullIData(oldp+1218,(0xa0000048U),32);
    bufp->fullIData(oldp+1219,(0xa000004cU),32);
    bufp->fullIData(oldp+1220,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1221,(0x1800U),32);
    bufp->fullIData(oldp+1222,(0x79737978U),32);
    bufp->fullCData(oldp+1223,(4U),3);
    bufp->fullCData(oldp+1224,(0x15U),8);
    bufp->fullCData(oldp+1225,(0xebU),8);
    bufp->fullCData(oldp+1226,(0x38U),8);
    bufp->fullIData(oldp+1227,(0x64U),32);
    bufp->fullIData(oldp+1228,(0x18U),32);
    bufp->fullIData(oldp+1229,(9U),32);
    bufp->fullIData(oldp+1230,(2U),32);
    bufp->fullIData(oldp+1231,(4U),32);
    bufp->fullIData(oldp+1232,(0xdU),32);
    bufp->fullIData(oldp+1233,(0x2000U),32);
    bufp->fullIData(oldp+1234,(0x2710U),32);
    bufp->fullIData(oldp+1235,(0x30cU),32);
    bufp->fullCData(oldp+1236,(7U),4);
    bufp->fullCData(oldp+1237,(3U),4);
    bufp->fullCData(oldp+1238,(5U),4);
    bufp->fullCData(oldp+1239,(4U),4);
    bufp->fullCData(oldp+1240,(6U),4);
    bufp->fullCData(oldp+1241,(2U),4);
    bufp->fullCData(oldp+1242,(1U),4);
    bufp->fullSData(oldp+1243,(0x21U),13);
    bufp->fullCData(oldp+1244,(8U),4);
    bufp->fullCData(oldp+1245,(9U),4);
    bufp->fullIData(oldp+1246,(0xaU),32);
    bufp->fullIData(oldp+1247,(0x10U),32);
    bufp->fullIData(oldp+1248,(6U),32);
    bufp->fullIData(oldp+1249,(0x11U),32);
    bufp->fullIData(oldp+1250,(0x30000000U),32);
    bufp->fullIData(oldp+1251,(0x3fffffffU),32);
    bufp->fullIData(oldp+1252,(8U),32);
    bufp->fullCData(oldp+1253,(2U),3);
    bufp->fullCData(oldp+1254,(3U),3);
    bufp->fullCData(oldp+1255,(5U),3);
    bufp->fullCData(oldp+1256,(6U),3);
    bufp->fullCData(oldp+1257,(7U),3);
    bufp->fullIData(oldp+1258,(1U),32);
    bufp->fullCData(oldp+1259,(0xaU),4);
    bufp->fullIData(oldp+1260,(0xbU),32);
}
