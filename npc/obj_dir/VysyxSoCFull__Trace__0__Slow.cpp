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
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+1131,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1132,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1133,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1134,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1135,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1136,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1137,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1138,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1139,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1140,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1141,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1142,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1143,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1144,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1145,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1146,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1147,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1148,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1149,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1150,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+1131,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1132,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1133,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1134,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1135,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1136,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1137,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1138,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1139,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1140,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1141,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1142,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1143,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1144,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1145,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1146,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1147,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1148,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1149,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1150,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+427,"spi_sck", false,-1);
    tracep->declBus(c+428,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1151,"spi_mosi", false,-1);
    tracep->declBit(c+1152,"spi_miso", false,-1);
    tracep->declBit(c+1149,"uart_rx", false,-1);
    tracep->declBit(c+1150,"uart_tx", false,-1);
    tracep->declBit(c+1125,"psram_sck", false,-1);
    tracep->declBit(c+1126,"psram_ce_n", false,-1);
    tracep->declBus(c+1153,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1154,"sdram_clk", false,-1);
    tracep->declBit(c+429,"sdram_cke", false,-1);
    tracep->declBit(c+430,"sdram_cs", false,-1);
    tracep->declBit(c+431,"sdram_ras", false,-1);
    tracep->declBit(c+432,"sdram_cas", false,-1);
    tracep->declBit(c+433,"sdram_we", false,-1);
    tracep->declBus(c+434,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+435,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+436,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+437,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1131,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1132,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1133,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1134,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1135,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1136,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1137,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1138,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1139,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1140,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1141,"ps2_clk", false,-1);
    tracep->declBit(c+1142,"ps2_data", false,-1);
    tracep->declBus(c+1143,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1144,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1145,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1146,"vga_hsync", false,-1);
    tracep->declBit(c+1147,"vga_vsync", false,-1);
    tracep->declBit(c+1148,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+802,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+803,"in_psel", false,-1);
    tracep->declBit(c+17,"in_penable", false,-1);
    tracep->declBus(c+1182,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"in_pready", false,-1);
    tracep->declBus(c+1018,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+807,"in_pslverr", false,-1);
    tracep->declBus(c+802,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+803,"out_psel", false,-1);
    tracep->declBit(c+17,"out_penable", false,-1);
    tracep->declBus(c+1182,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"out_pwrite", false,-1);
    tracep->declBus(c+805,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"out_pready", false,-1);
    tracep->declBus(c+1018,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+807,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+803,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+17,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+802,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+807,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1018,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+808,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+416,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+802,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+438,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1183,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+439,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+809,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+417,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+810,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1182,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1184,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1185,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1186,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+811,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+418,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+812,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1182,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1188,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1189,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+813,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+419,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+812,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1182,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1190,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1191,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1192,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+814,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+420,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+802,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1155,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1183,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+18,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+815,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+816,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+812,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1182,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+817,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1183,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+983,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+818,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+819,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+804,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+810,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1182,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1183,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1019,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+820,"sel_0", false,-1);
    tracep->declBit(c+821,"sel_1", false,-1);
    tracep->declBit(c+822,"sel_2", false,-1);
    tracep->declBit(c+823,"sel_3", false,-1);
    tracep->declBit(c+824,"sel_4", false,-1);
    tracep->declBit(c+825,"sel_5", false,-1);
    tracep->declBit(c+826,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+827,"auto_in_awready", false,-1);
    tracep->declBit(c+828,"auto_in_awvalid", false,-1);
    tracep->declBus(c+829,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+830,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+831,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+827,"auto_in_wready", false,-1);
    tracep->declBit(c+832,"auto_in_wvalid", false,-1);
    tracep->declBus(c+833,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+834,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"auto_in_bready", false,-1);
    tracep->declBit(c+1021,"auto_in_bvalid", false,-1);
    tracep->declBus(c+19,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+835,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+836,"auto_in_arready", false,-1);
    tracep->declBit(c+837,"auto_in_arvalid", false,-1);
    tracep->declBus(c+838,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+839,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+840,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1022,"auto_in_rready", false,-1);
    tracep->declBit(c+1023,"auto_in_rvalid", false,-1);
    tracep->declBus(c+20,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+422,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+835,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+803,"auto_out_psel", false,-1);
    tracep->declBit(c+17,"auto_out_penable", false,-1);
    tracep->declBit(c+804,"auto_out_pwrite", false,-1);
    tracep->declBus(c+802,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+805,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"auto_out_pready", false,-1);
    tracep->declBit(c+807,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1018,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+17,"nodeOut_penable", false,-1);
    tracep->declBus(c+21,"state", false,-1, 1,0);
    tracep->declBit(c+836,"accept_read", false,-1);
    tracep->declBit(c+827,"accept_write", false,-1);
    tracep->declBit(c+22,"is_write_r", false,-1);
    tracep->declBit(c+804,"is_write", false,-1);
    tracep->declBus(c+20,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+19,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+23,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+24,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+25,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+26,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+841,"resp", false,-1, 1,0);
    tracep->declBus(c+27,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+835,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1023,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+28,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1021,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+700,"auto_in_awready", false,-1);
    tracep->declBit(c+842,"auto_in_awvalid", false,-1);
    tracep->declBus(c+843,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+844,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+845,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+846,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+847,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_in_wready", false,-1);
    tracep->declBit(c+848,"auto_in_wvalid", false,-1);
    tracep->declBus(c+849,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+850,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+851,"auto_in_wlast", false,-1);
    tracep->declBit(c+852,"auto_in_bready", false,-1);
    tracep->declBit(c+1024,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1025,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_in_arready", false,-1);
    tracep->declBit(c+853,"auto_in_arvalid", false,-1);
    tracep->declBus(c+854,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+856,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+857,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+858,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+859,"auto_in_rready", false,-1);
    tracep->declBit(c+1026,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1027,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1157,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_in_rlast", false,-1);
    tracep->declBit(c+1028,"auto_out_awready", false,-1);
    tracep->declBit(c+860,"auto_out_awvalid", false,-1);
    tracep->declBus(c+829,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+830,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+831,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+861,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1029,"auto_out_wready", false,-1);
    tracep->declBit(c+862,"auto_out_wvalid", false,-1);
    tracep->declBus(c+833,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+834,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+863,"auto_out_wlast", false,-1);
    tracep->declBit(c+1030,"auto_out_bready", false,-1);
    tracep->declBit(c+1031,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1025,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1032,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1033,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1034,"auto_out_arready", false,-1);
    tracep->declBit(c+864,"auto_out_arvalid", false,-1);
    tracep->declBus(c+838,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+839,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+840,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+865,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+859,"auto_out_rready", false,-1);
    tracep->declBit(c+1026,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1027,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1157,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+426,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1035,"auto_out_rlast", false,-1);
    tracep->declBit(c+862,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+31,"w_idle", false,-1);
    tracep->declBit(c+1036,"in_awready", false,-1);
    tracep->declBit(c+32,"busy", false,-1);
    tracep->declBus(c+33,"r_addr", false,-1, 31,0);
    tracep->declBus(c+34,"r_len", false,-1, 7,0);
    tracep->declBus(c+866,"len", false,-1, 7,0);
    tracep->declBus(c+867,"addr", false,-1, 31,0);
    tracep->declBit(c+35,"busy_1", false,-1);
    tracep->declBus(c+36,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+37,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+868,"len_1", false,-1, 7,0);
    tracep->declBus(c+869,"addr_1", false,-1, 31,0);
    tracep->declBit(c+38,"wbeats_latched", false,-1);
    tracep->declBit(c+860,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+870,"wbeats_valid", false,-1);
    tracep->declBus(c+39,"w_counter", false,-1, 8,0);
    tracep->declBus(c+871,"w_todo", false,-1, 8,0);
    tracep->declBit(c+863,"w_last", false,-1);
    tracep->declBit(c+1030,"nodeOut_bready", false,-1);
    tracep->declBus(c+40,"error_0", false,-1, 1,0);
    tracep->declBus(c+41,"error_1", false,-1, 1,0);
    tracep->declBus(c+42,"error_2", false,-1, 1,0);
    tracep->declBus(c+43,"error_3", false,-1, 1,0);
    tracep->declBus(c+44,"error_4", false,-1, 1,0);
    tracep->declBus(c+45,"error_5", false,-1, 1,0);
    tracep->declBus(c+46,"error_6", false,-1, 1,0);
    tracep->declBus(c+47,"error_7", false,-1, 1,0);
    tracep->declBus(c+48,"error_8", false,-1, 1,0);
    tracep->declBus(c+49,"error_9", false,-1, 1,0);
    tracep->declBus(c+50,"error_10", false,-1, 1,0);
    tracep->declBus(c+51,"error_11", false,-1, 1,0);
    tracep->declBus(c+52,"error_12", false,-1, 1,0);
    tracep->declBus(c+53,"error_13", false,-1, 1,0);
    tracep->declBus(c+54,"error_14", false,-1, 1,0);
    tracep->declBus(c+55,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+30,"io_enq_ready", false,-1);
    tracep->declBit(c+853,"io_enq_valid", false,-1);
    tracep->declBus(c+854,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+855,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+856,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+857,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+858,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1037,"io_deq_ready", false,-1);
    tracep->declBit(c+864,"io_deq_valid", false,-1);
    tracep->declBus(c+838,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+872,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+873,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+840,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+874,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+56,"ram", false,-1, 48,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+864,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1038,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+700,"io_enq_ready", false,-1);
    tracep->declBit(c+842,"io_enq_valid", false,-1);
    tracep->declBus(c+843,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+844,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+845,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+846,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+847,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1039,"io_deq_ready", false,-1);
    tracep->declBit(c+875,"io_deq_valid", false,-1);
    tracep->declBus(c+829,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+876,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+877,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+831,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+878,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+59,"ram", false,-1, 48,0);
    tracep->declBit(c+701,"full", false,-1);
    tracep->declBit(c+875,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1040,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+29,"io_enq_ready", false,-1);
    tracep->declBit(c+848,"io_enq_valid", false,-1);
    tracep->declBus(c+849,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+850,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+851,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1041,"io_deq_ready", false,-1);
    tracep->declBit(c+879,"io_deq_valid", false,-1);
    tracep->declBus(c+833,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+834,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+421,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+61,"ram", false,-1, 36,0);
    tracep->declBit(c+63,"full", false,-1);
    tracep->declBit(c+879,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1042,"do_enq", false,-1);
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
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+1043,"auto_in_awready", false,-1);
    tracep->declBit(c+880,"auto_in_awvalid", false,-1);
    tracep->declBus(c+829,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+881,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+984,"auto_in_wready", false,-1);
    tracep->declBit(c+882,"auto_in_wvalid", false,-1);
    tracep->declBus(c+833,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+834,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1044,"auto_in_bready", false,-1);
    tracep->declBit(c+64,"auto_in_bvalid", false,-1);
    tracep->declBus(c+65,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1045,"auto_in_arready", false,-1);
    tracep->declBit(c+883,"auto_in_arvalid", false,-1);
    tracep->declBus(c+838,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+884,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1046,"auto_in_rready", false,-1);
    tracep->declBit(c+67,"auto_in_rvalid", false,-1);
    tracep->declBus(c+68,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+69,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+70,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1045,"nodeIn_arready", false,-1);
    tracep->declBit(c+1043,"nodeIn_awready", false,-1);
    tracep->declBit(c+885,"w_sel0", false,-1);
    tracep->declBit(c+64,"w_full", false,-1);
    tracep->declBus(c+65,"w_id", false,-1, 3,0);
    tracep->declBit(c+71,"r_sel1", false,-1);
    tracep->declBit(c+72,"w_sel1", false,-1);
    tracep->declBit(c+67,"r_full", false,-1);
    tracep->declBus(c+68,"r_id", false,-1, 3,0);
    tracep->declBit(c+1047,"ren", false,-1);
    tracep->declBit(c+73,"rdata_REG", false,-1);
    tracep->declBus(c+74,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+75,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+76,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+77,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+886,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1047,"R0_en", false,-1);
    tracep->declBit(c+1129,"R0_clk", false,-1);
    tracep->declBus(c+78,"R0_data", false,-1, 31,0);
    tracep->declBus(c+887,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1048,"W0_en", false,-1);
    tracep->declBit(c+1129,"W0_clk", false,-1);
    tracep->declBus(c+833,"W0_data", false,-1, 31,0);
    tracep->declBus(c+834,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+700,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+842,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+843,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+844,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+845,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+846,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+847,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+848,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+849,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+850,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+851,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+852,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1024,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1025,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+853,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+854,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+856,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+857,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+858,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+859,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1026,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1027,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1157,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+700,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+842,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+843,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+844,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+845,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+846,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+847,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+848,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+849,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+850,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+851,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+852,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1024,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1025,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+853,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+854,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+856,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+857,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+858,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+859,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1026,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1027,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1157,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+1049,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+888,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+829,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+830,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+831,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1029,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+862,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+833,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+834,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+863,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1030,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1031,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1025,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1032,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1050,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+889,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+838,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+839,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+840,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+859,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1026,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1027,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1157,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1035,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1043,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+880,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+829,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+881,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+984,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+882,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+833,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+834,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1044,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+64,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+65,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1045,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+883,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+838,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+884,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1046,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+67,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+68,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+69,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+70,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+890,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+891,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+79,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+892,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+838,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+893,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1158,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+80,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+81,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+827,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+828,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+829,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+830,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+831,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+827,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+832,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+833,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+834,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1021,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+19,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+835,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+836,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+837,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+838,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+839,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+840,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1022,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1023,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+20,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+422,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+835,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1031,"in_0_bvalid", false,-1);
    tracep->declBit(c+1026,"in_0_rvalid", false,-1);
    tracep->declBit(c+1051,"in_0_wready", false,-1);
    tracep->declBit(c+1052,"in_0_awready", false,-1);
    tracep->declBit(c+1050,"in_0_arready", false,-1);
    tracep->declBit(c+1049,"anonIn_awready", false,-1);
    tracep->declBit(c+894,"requestARIO_0_0", false,-1);
    tracep->declBit(c+895,"requestARIO_0_1", false,-1);
    tracep->declBit(c+896,"requestARIO_0_2", false,-1);
    tracep->declBit(c+897,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+898,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+899,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+900,"arSel", false,-1, 15,0);
    tracep->declBus(c+901,"awSel", false,-1, 15,0);
    tracep->declBus(c+1053,"rSel", false,-1, 15,0);
    tracep->declBus(c+1054,"bSel", false,-1, 15,0);
    tracep->declBit(c+83,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+84,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+85,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+86,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+87,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+88,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+89,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+90,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+91,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+92,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+93,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+94,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+95,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+96,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+97,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+98,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+99,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+100,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+101,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+102,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+103,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+104,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+105,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+106,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+107,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+108,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+109,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+110,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+111,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+112,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+113,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+114,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+115,"latched", false,-1);
    tracep->declBit(c+902,"in_0_awvalid", false,-1);
    tracep->declBit(c+903,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+904,"in_0_wvalid", false,-1);
    tracep->declBit(c+116,"idle_3", false,-1);
    tracep->declBit(c+1055,"anyValid", false,-1);
    tracep->declBus(c+1056,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+117,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1057,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1058,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1059,"prefixOR_1", false,-1);
    tracep->declBit(c+1060,"winner_3_1", false,-1);
    tracep->declBit(c+1061,"winner_3_2", false,-1);
    tracep->declBit(c+118,"state_3_0", false,-1);
    tracep->declBit(c+119,"state_3_1", false,-1);
    tracep->declBit(c+120,"state_3_2", false,-1);
    tracep->declBit(c+1062,"muxState_3_0", false,-1);
    tracep->declBit(c+1063,"muxState_3_1", false,-1);
    tracep->declBit(c+1064,"muxState_3_2", false,-1);
    tracep->declBit(c+121,"idle_4", false,-1);
    tracep->declBit(c+1065,"anyValid_1", false,-1);
    tracep->declBus(c+1066,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+122,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1067,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1068,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1069,"winner_4_0", false,-1);
    tracep->declBit(c+1070,"winner_4_2", false,-1);
    tracep->declBit(c+123,"state_4_0", false,-1);
    tracep->declBit(c+124,"state_4_2", false,-1);
    tracep->declBit(c+1071,"muxState_4_0", false,-1);
    tracep->declBit(c+1072,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+125,"io_enq_ready", false,-1);
    tracep->declBit(c+903,"io_enq_valid", false,-1);
    tracep->declBus(c+905,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1073,"io_deq_ready", false,-1);
    tracep->declBit(c+906,"io_deq_valid", false,-1);
    tracep->declBus(c+907,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+126,"wrap", false,-1);
    tracep->declBit(c+127,"wrap_1", false,-1);
    tracep->declBit(c+128,"maybe_full", false,-1);
    tracep->declBit(c+129,"ptr_match", false,-1);
    tracep->declBit(c+130,"empty", false,-1);
    tracep->declBit(c+131,"full", false,-1);
    tracep->declBit(c+906,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1074,"do_deq", false,-1);
    tracep->declBit(c+1075,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+127,"R0_addr", false,-1);
    tracep->declBit(c+1193,"R0_en", false,-1);
    tracep->declBit(c+1129,"R0_clk", false,-1);
    tracep->declBus(c+132,"R0_data", false,-1, 2,0);
    tracep->declBit(c+126,"W0_addr", false,-1);
    tracep->declBit(c+1075,"W0_en", false,-1);
    tracep->declBit(c+1129,"W0_clk", false,-1);
    tracep->declBus(c+905,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+133+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+1028,"auto_in_awready", false,-1);
    tracep->declBit(c+860,"auto_in_awvalid", false,-1);
    tracep->declBus(c+829,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+830,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+831,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+861,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1029,"auto_in_wready", false,-1);
    tracep->declBit(c+862,"auto_in_wvalid", false,-1);
    tracep->declBus(c+833,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+834,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+863,"auto_in_wlast", false,-1);
    tracep->declBit(c+1030,"auto_in_bready", false,-1);
    tracep->declBit(c+1031,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1025,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1032,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1033,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1034,"auto_in_arready", false,-1);
    tracep->declBit(c+864,"auto_in_arvalid", false,-1);
    tracep->declBus(c+838,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+839,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+840,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+865,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+859,"auto_in_rready", false,-1);
    tracep->declBit(c+1026,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1027,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1157,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+426,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1035,"auto_in_rlast", false,-1);
    tracep->declBit(c+1049,"auto_out_awready", false,-1);
    tracep->declBit(c+888,"auto_out_awvalid", false,-1);
    tracep->declBus(c+829,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+830,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+831,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1029,"auto_out_wready", false,-1);
    tracep->declBit(c+862,"auto_out_wvalid", false,-1);
    tracep->declBus(c+833,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+834,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+863,"auto_out_wlast", false,-1);
    tracep->declBit(c+1030,"auto_out_bready", false,-1);
    tracep->declBit(c+1031,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1025,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1032,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1050,"auto_out_arready", false,-1);
    tracep->declBit(c+889,"auto_out_arvalid", false,-1);
    tracep->declBus(c+838,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+839,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+840,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+859,"auto_out_rready", false,-1);
    tracep->declBit(c+1026,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1027,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1157,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1035,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+135,"io_enq_ready", false,-1);
    tracep->declBit(c+985,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1076,"io_deq_ready", false,-1);
    tracep->declBit(c+136,"io_deq_valid", false,-1);
    tracep->declBit(c+137,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+136,"full", false,-1);
    tracep->declBit(c+137,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+138,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+139,"io_enq_ready", false,-1);
    tracep->declBit(c+986,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1077,"io_deq_ready", false,-1);
    tracep->declBit(c+140,"io_deq_valid", false,-1);
    tracep->declBit(c+141,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+140,"full", false,-1);
    tracep->declBit(c+141,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+142,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+143,"io_enq_ready", false,-1);
    tracep->declBit(c+987,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1078,"io_deq_ready", false,-1);
    tracep->declBit(c+144,"io_deq_valid", false,-1);
    tracep->declBit(c+145,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+144,"full", false,-1);
    tracep->declBit(c+145,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+146,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+988,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1079,"io_deq_ready", false,-1);
    tracep->declBit(c+148,"io_deq_valid", false,-1);
    tracep->declBit(c+149,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+148,"full", false,-1);
    tracep->declBit(c+149,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+150,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+151,"io_enq_ready", false,-1);
    tracep->declBit(c+989,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1080,"io_deq_ready", false,-1);
    tracep->declBit(c+152,"io_deq_valid", false,-1);
    tracep->declBit(c+153,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+152,"full", false,-1);
    tracep->declBit(c+153,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+154,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+155,"io_enq_ready", false,-1);
    tracep->declBit(c+990,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1081,"io_deq_ready", false,-1);
    tracep->declBit(c+156,"io_deq_valid", false,-1);
    tracep->declBit(c+157,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+156,"full", false,-1);
    tracep->declBit(c+157,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+158,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+159,"io_enq_ready", false,-1);
    tracep->declBit(c+991,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1082,"io_deq_ready", false,-1);
    tracep->declBit(c+160,"io_deq_valid", false,-1);
    tracep->declBit(c+161,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+160,"full", false,-1);
    tracep->declBit(c+161,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+162,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+163,"io_enq_ready", false,-1);
    tracep->declBit(c+992,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1083,"io_deq_ready", false,-1);
    tracep->declBit(c+164,"io_deq_valid", false,-1);
    tracep->declBit(c+165,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+164,"full", false,-1);
    tracep->declBit(c+165,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+166,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+167,"io_enq_ready", false,-1);
    tracep->declBit(c+993,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1084,"io_deq_ready", false,-1);
    tracep->declBit(c+168,"io_deq_valid", false,-1);
    tracep->declBit(c+169,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+168,"full", false,-1);
    tracep->declBit(c+169,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+170,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+171,"io_enq_ready", false,-1);
    tracep->declBit(c+994,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1085,"io_deq_ready", false,-1);
    tracep->declBit(c+172,"io_deq_valid", false,-1);
    tracep->declBit(c+173,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+172,"full", false,-1);
    tracep->declBit(c+173,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+174,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+175,"io_enq_ready", false,-1);
    tracep->declBit(c+995,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1086,"io_deq_ready", false,-1);
    tracep->declBit(c+176,"io_deq_valid", false,-1);
    tracep->declBit(c+177,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+176,"full", false,-1);
    tracep->declBit(c+177,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+178,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+179,"io_enq_ready", false,-1);
    tracep->declBit(c+996,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1087,"io_deq_ready", false,-1);
    tracep->declBit(c+180,"io_deq_valid", false,-1);
    tracep->declBit(c+181,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+180,"full", false,-1);
    tracep->declBit(c+181,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+182,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+183,"io_enq_ready", false,-1);
    tracep->declBit(c+997,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1088,"io_deq_ready", false,-1);
    tracep->declBit(c+184,"io_deq_valid", false,-1);
    tracep->declBit(c+185,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+184,"full", false,-1);
    tracep->declBit(c+185,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+186,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+187,"io_enq_ready", false,-1);
    tracep->declBit(c+998,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1089,"io_deq_ready", false,-1);
    tracep->declBit(c+188,"io_deq_valid", false,-1);
    tracep->declBit(c+189,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+188,"full", false,-1);
    tracep->declBit(c+189,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+190,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+191,"io_enq_ready", false,-1);
    tracep->declBit(c+999,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1090,"io_deq_ready", false,-1);
    tracep->declBit(c+192,"io_deq_valid", false,-1);
    tracep->declBit(c+193,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+192,"full", false,-1);
    tracep->declBit(c+193,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+194,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+195,"io_enq_ready", false,-1);
    tracep->declBit(c+1000,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1091,"io_deq_ready", false,-1);
    tracep->declBit(c+196,"io_deq_valid", false,-1);
    tracep->declBit(c+197,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+196,"full", false,-1);
    tracep->declBit(c+197,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+198,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+199,"io_enq_ready", false,-1);
    tracep->declBit(c+1001,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1092,"io_deq_ready", false,-1);
    tracep->declBit(c+200,"io_deq_valid", false,-1);
    tracep->declBit(c+201,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+200,"full", false,-1);
    tracep->declBit(c+201,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+202,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1002,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1093,"io_deq_ready", false,-1);
    tracep->declBit(c+204,"io_deq_valid", false,-1);
    tracep->declBit(c+205,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+204,"full", false,-1);
    tracep->declBit(c+205,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+206,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+207,"io_enq_ready", false,-1);
    tracep->declBit(c+1003,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1094,"io_deq_ready", false,-1);
    tracep->declBit(c+208,"io_deq_valid", false,-1);
    tracep->declBit(c+209,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+208,"full", false,-1);
    tracep->declBit(c+209,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+210,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+1004,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1095,"io_deq_ready", false,-1);
    tracep->declBit(c+212,"io_deq_valid", false,-1);
    tracep->declBit(c+213,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+212,"full", false,-1);
    tracep->declBit(c+213,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+214,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+215,"io_enq_ready", false,-1);
    tracep->declBit(c+1005,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1096,"io_deq_ready", false,-1);
    tracep->declBit(c+216,"io_deq_valid", false,-1);
    tracep->declBit(c+217,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+216,"full", false,-1);
    tracep->declBit(c+217,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+218,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+1006,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1097,"io_deq_ready", false,-1);
    tracep->declBit(c+220,"io_deq_valid", false,-1);
    tracep->declBit(c+221,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+220,"full", false,-1);
    tracep->declBit(c+221,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+222,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+1007,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1098,"io_deq_ready", false,-1);
    tracep->declBit(c+224,"io_deq_valid", false,-1);
    tracep->declBit(c+225,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+224,"full", false,-1);
    tracep->declBit(c+225,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+226,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+1008,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1099,"io_deq_ready", false,-1);
    tracep->declBit(c+228,"io_deq_valid", false,-1);
    tracep->declBit(c+229,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+228,"full", false,-1);
    tracep->declBit(c+229,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+230,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+1009,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1100,"io_deq_ready", false,-1);
    tracep->declBit(c+232,"io_deq_valid", false,-1);
    tracep->declBit(c+233,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+232,"full", false,-1);
    tracep->declBit(c+233,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+234,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+1010,"io_enq_valid", false,-1);
    tracep->declBit(c+861,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1101,"io_deq_ready", false,-1);
    tracep->declBit(c+236,"io_deq_valid", false,-1);
    tracep->declBit(c+237,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+236,"full", false,-1);
    tracep->declBit(c+237,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+238,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+239,"io_enq_ready", false,-1);
    tracep->declBit(c+1011,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1102,"io_deq_ready", false,-1);
    tracep->declBit(c+240,"io_deq_valid", false,-1);
    tracep->declBit(c+241,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+240,"full", false,-1);
    tracep->declBit(c+241,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+1012,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1103,"io_deq_ready", false,-1);
    tracep->declBit(c+244,"io_deq_valid", false,-1);
    tracep->declBit(c+245,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+244,"full", false,-1);
    tracep->declBit(c+245,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+246,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+1013,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1104,"io_deq_ready", false,-1);
    tracep->declBit(c+248,"io_deq_valid", false,-1);
    tracep->declBit(c+249,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+249,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+250,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+251,"io_enq_ready", false,-1);
    tracep->declBit(c+1014,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1105,"io_deq_ready", false,-1);
    tracep->declBit(c+252,"io_deq_valid", false,-1);
    tracep->declBit(c+253,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+252,"full", false,-1);
    tracep->declBit(c+253,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+254,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+1015,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1106,"io_deq_ready", false,-1);
    tracep->declBit(c+256,"io_deq_valid", false,-1);
    tracep->declBit(c+257,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+256,"full", false,-1);
    tracep->declBit(c+257,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+1016,"io_enq_valid", false,-1);
    tracep->declBit(c+865,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1107,"io_deq_ready", false,-1);
    tracep->declBit(c+260,"io_deq_valid", false,-1);
    tracep->declBit(c+261,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+260,"full", false,-1);
    tracep->declBit(c+261,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+262,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+700,"auto_master_out_awready", false,-1);
    tracep->declBit(c+842,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+843,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+844,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+845,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+846,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+847,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_master_out_wready", false,-1);
    tracep->declBit(c+848,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+849,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+850,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+851,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+852,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1024,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1025,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_master_out_arready", false,-1);
    tracep->declBit(c+853,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+854,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+856,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+857,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+858,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+859,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1026,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1027,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1157,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+1183,"io_interrupt", false,-1);
    tracep->declBit(c+700,"io_master_awready", false,-1);
    tracep->declBit(c+842,"io_master_awvalid", false,-1);
    tracep->declBus(c+843,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+844,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+845,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+846,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+847,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"io_master_wready", false,-1);
    tracep->declBit(c+848,"io_master_wvalid", false,-1);
    tracep->declBus(c+849,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+850,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+851,"io_master_wlast", false,-1);
    tracep->declBit(c+852,"io_master_bready", false,-1);
    tracep->declBit(c+1024,"io_master_bvalid", false,-1);
    tracep->declBus(c+1025,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+423,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"io_master_arready", false,-1);
    tracep->declBit(c+853,"io_master_arvalid", false,-1);
    tracep->declBus(c+854,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+855,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+856,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+857,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+858,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+859,"io_master_rready", false,-1);
    tracep->declBit(c+1026,"io_master_rvalid", false,-1);
    tracep->declBus(c+1027,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+424,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1157,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"io_master_rlast", false,-1);
    tracep->declBit(c+1194,"io_slave_awready", false,-1);
    tracep->declBit(c+1183,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1195,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1196,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1197,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1198,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1199,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1200,"io_slave_wready", false,-1);
    tracep->declBit(c+1183,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1196,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1195,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1183,"io_slave_wlast", false,-1);
    tracep->declBit(c+1183,"io_slave_bready", false,-1);
    tracep->declBit(c+1201,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1202,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1203,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1204,"io_slave_arready", false,-1);
    tracep->declBit(c+1183,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1195,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1196,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1197,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1198,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1199,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1183,"io_slave_rready", false,-1);
    tracep->declBit(c+1205,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1206,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1207,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1208,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1209,"io_slave_rlast", false,-1);
    tracep->declBit(c+263,"DIFFTEST", false,-1);
    tracep->declBus(c+702,"pc", false,-1, 31,0);
    tracep->declBus(c+703,"dnpc", false,-1, 31,0);
    tracep->declBit(c+704,"PCU_VALID", false,-1);
    tracep->declBit(c+705,"IFU_READY", false,-1);
    tracep->declBus(c+706,"inst", false,-1, 31,0);
    tracep->declBit(c+707,"IFU_VALID", false,-1);
    tracep->declBit(c+708,"IDU_READY", false,-1);
    tracep->declBus(c+1210,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1210,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+709,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1159,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1195,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1197,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+264,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1195,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+783,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+265,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+784,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1198,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+266,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1199,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+267,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+407,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+408,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1183,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+777,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1183,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+1160,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+785,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+1183,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+710,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+778,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1108,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+711,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1211,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+409,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+712,"IDU_VALID", false,-1);
    tracep->declBit(c+713,"EXU_READY", false,-1);
    tracep->declBus(c+714,"op", false,-1, 6,0);
    tracep->declBus(c+268,"rd", false,-1, 4,0);
    tracep->declBus(c+715,"funct3", false,-1, 2,0);
    tracep->declBus(c+269,"rs1", false,-1, 4,0);
    tracep->declBus(c+270,"rs2", false,-1, 4,0);
    tracep->declBus(c+271,"imm", false,-1, 31,0);
    tracep->declBus(c+272,"funct7", false,-1, 6,0);
    tracep->declBus(c+273,"shamt", false,-1, 4,0);
    tracep->declBit(c+716,"sram_lsu_read", false,-1);
    tracep->declBit(c+717,"sram_lsu_write", false,-1);
    tracep->declBit(c+1161,"LSU_DONE", false,-1);
    tracep->declBit(c+274,"EXU_VALID", false,-1);
    tracep->declBit(c+275,"WBU_READY", false,-1);
    tracep->declBus(c+276,"res", false,-1, 31,0);
    tracep->declBit(c+718,"ls_valid", false,-1);
    tracep->declBit(c+719,"ls_wen", false,-1);
    tracep->declBus(c+720,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+398,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+721,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+722,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1198,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1198,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+723,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+724,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1212,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1212,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+277,"mepc", false,-1, 31,0);
    tracep->declBus(c+278,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+279,"mstatus", false,-1, 31,0);
    tracep->declBus(c+280,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+281,"mcause", false,-1, 31,0);
    tracep->declBus(c+282,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+283,"mtvec", false,-1, 31,0);
    tracep->declBus(c+284,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+285,"gpr_wen", false,-1);
    tracep->declBit(c+286,"mepc_wen", false,-1);
    tracep->declBit(c+287,"mstatus_wen", false,-1);
    tracep->declBit(c+288,"mcause_wen", false,-1);
    tracep->declBit(c+289,"mtvec_wen", false,-1);
    tracep->declBus(c+671,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+672,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1162,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+673,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1163,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+779,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+674,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+675,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1213,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+786,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1214,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+787,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+676,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+677,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+678,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+679,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+410,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+411,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+680,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+780,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+681,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+908,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1109,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+682,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+683,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+781,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1110,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+684,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+685,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+412,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+909,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+910,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+911,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+725,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+912,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+913,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+914,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+915,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+726,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+916,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+727,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+917,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+918,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+919,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+920,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+728,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+729,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+921,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+730,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+922,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+731,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+732,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+923,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+924,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+733,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+734,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+925,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+926,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+735,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+736,"wbu_done", false,-1);
    tracep->declBit(c+263,"difftest", false,-1);
    tracep->declBus(c+290,"xrd", false,-1, 31,0);
    tracep->declBus(c+291,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+292,"rf_wen", false,-1);
    tracep->declBus(c+293,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+294,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+295,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+296,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+297,"mepc_en", false,-1);
    tracep->declBit(c+298,"mstatus_en", false,-1);
    tracep->declBit(c+299,"mcause_en", false,-1);
    tracep->declBit(c+300,"mtvec_en", false,-1);
    tracep->declBus(c+301,"r1", false,-1, 31,0);
    tracep->declBus(c+302,"r2", false,-1, 31,0);
    tracep->declBus(c+303,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+304,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+716,"sram_lsu_read", false,-1);
    tracep->declBit(c+717,"sram_lsu_write", false,-1);
    tracep->declBit(c+1161,"LSU_DONE", false,-1);
    tracep->declBit(c+712,"IDU_VALID", false,-1);
    tracep->declBit(c+713,"EXU_READY", false,-1);
    tracep->declBit(c+274,"EXU_VALID", false,-1);
    tracep->declBit(c+275,"WBU_READY", false,-1);
    tracep->declBus(c+714,"op", false,-1, 6,0);
    tracep->declBus(c+715,"funct3", false,-1, 2,0);
    tracep->declBus(c+271,"imm", false,-1, 31,0);
    tracep->declBus(c+272,"funct7", false,-1, 6,0);
    tracep->declBus(c+273,"shamt", false,-1, 4,0);
    tracep->declBus(c+301,"r1", false,-1, 31,0);
    tracep->declBus(c+302,"r2", false,-1, 31,0);
    tracep->declBus(c+276,"res_reg", false,-1, 31,0);
    tracep->declBit(c+718,"ls_valid", false,-1);
    tracep->declBit(c+719,"ls_wen", false,-1);
    tracep->declBus(c+720,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+398,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+721,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+722,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1198,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1198,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+723,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+724,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1212,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1212,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+671,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+702,"pc", false,-1, 31,0);
    tracep->declBus(c+703,"dnpc_reg", false,-1, 31,0);
    tracep->declBus(c+277,"mepc", false,-1, 31,0);
    tracep->declBus(c+279,"mstatus", false,-1, 31,0);
    tracep->declBus(c+281,"mcause", false,-1, 31,0);
    tracep->declBus(c+283,"mtvec", false,-1, 31,0);
    tracep->declBus(c+278,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+280,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+282,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+284,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+285,"gpr_wen_reg", false,-1);
    tracep->declBit(c+286,"mepc_wen_reg", false,-1);
    tracep->declBit(c+287,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+288,"mcause_wen_reg", false,-1);
    tracep->declBit(c+289,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+713,"exu_ready", false,-1);
    tracep->declBit(c+274,"exu_valid", false,-1);
    tracep->declBus(c+1199,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1212,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1215,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+1216,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+737,"state", false,-1, 1,0);
    tracep->declBus(c+1164,"next_state", false,-1, 1,0);
    tracep->declBus(c+305,"s_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+738,"a", false,-1, 31,0);
    tracep->declBus(c+739,"b", false,-1, 31,0);
    tracep->declBus(c+740,"res", false,-1, 31,0);
    tracep->declBus(c+741,"csr", false,-1, 31,0);
    tracep->declBus(c+742,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+743,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+742,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+399,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+742,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+927,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+1217,"ls_wsize", false,-1, 2,0);
    tracep->declBus(c+1218,"ls_rsize", false,-1, 2,0);
    tracep->declBus(c+744,"dnpc", false,-1, 31,0);
    tracep->declBus(c+271,"offset", false,-1, 31,0);
    tracep->declBit(c+745,"jalen", false,-1);
    tracep->declBit(c+746,"jalren", false,-1);
    tracep->declBit(c+400,"beqen", false,-1);
    tracep->declBit(c+401,"bneen", false,-1);
    tracep->declBit(c+402,"blten", false,-1);
    tracep->declBit(c+403,"bgeen", false,-1);
    tracep->declBit(c+404,"bltuen", false,-1);
    tracep->declBit(c+405,"bgeuen", false,-1);
    tracep->declBit(c+747,"ecall_en", false,-1);
    tracep->declBit(c+406,"mret_en", false,-1);
    tracep->declBit(c+748,"gpr_wen", false,-1);
    tracep->declBit(c+749,"mepc_wen", false,-1);
    tracep->declBit(c+750,"mstatus_wen", false,-1);
    tracep->declBit(c+751,"mcause_wen", false,-1);
    tracep->declBit(c+752,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+706,"inst", false,-1, 31,0);
    tracep->declBit(c+707,"IFU_VALID", false,-1);
    tracep->declBit(c+708,"IDU_READY", false,-1);
    tracep->declBit(c+712,"IDU_VALID", false,-1);
    tracep->declBit(c+713,"EXU_READY", false,-1);
    tracep->declBus(c+714,"op_reg", false,-1, 6,0);
    tracep->declBus(c+268,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+715,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+269,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+270,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+271,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+272,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+273,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+753,"op", false,-1, 6,0);
    tracep->declBus(c+754,"rd", false,-1, 4,0);
    tracep->declBus(c+755,"funct3", false,-1, 2,0);
    tracep->declBus(c+756,"rs1", false,-1, 4,0);
    tracep->declBus(c+757,"rs2", false,-1, 4,0);
    tracep->declBus(c+758,"immI", false,-1, 31,0);
    tracep->declBus(c+759,"immU", false,-1, 31,0);
    tracep->declBus(c+760,"immS", false,-1, 31,0);
    tracep->declBus(c+761,"immB", false,-1, 31,0);
    tracep->declBus(c+762,"immJ", false,-1, 31,0);
    tracep->declBus(c+763,"imm", false,-1, 31,0);
    tracep->declBus(c+764,"funct7", false,-1, 6,0);
    tracep->declBus(c+765,"shamt", false,-1, 4,0);
    tracep->declBit(c+708,"idu_ready", false,-1);
    tracep->declBit(c+712,"idu_valid", false,-1);
    tracep->declBus(c+1219,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1220,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+766,"state", false,-1);
    tracep->declBit(c+2,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+702,"pc", false,-1, 31,0);
    tracep->declBus(c+706,"inst", false,-1, 31,0);
    tracep->declBit(c+704,"PCU_VALID", false,-1);
    tracep->declBit(c+705,"IFU_READY", false,-1);
    tracep->declBit(c+707,"IFU_VALID", false,-1);
    tracep->declBit(c+708,"IDU_READY", false,-1);
    tracep->declBit(c+736,"wbu_done", false,-1);
    tracep->declBit(c+777,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+1183,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1195,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1210,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1197,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1198,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1199,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1160,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+1183,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1210,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1195,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1211,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+1183,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+785,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+783,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+407,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+778,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+710,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+265,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+709,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+264,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+266,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+267,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+711,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1108,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+784,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1159,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+408,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+409,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+705,"ifu_ready", false,-1);
    tracep->declBit(c+707,"ifu_valid", false,-1);
    tracep->declBus(c+1199,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1212,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1215,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1216,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+767,"current_state", false,-1, 1,0);
    tracep->declBus(c+3,"next_state", false,-1, 1,0);
    tracep->declBit(c+710,"axi_arvalid", false,-1);
    tracep->declBit(c+711,"axi_rready", false,-1);
    tracep->declBus(c+265,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+709,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+264,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+266,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+267,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1219,"SRAM_IDLE", false,-1, 0,0);
    tracep->declBus(c+1220,"SRAM_FETCH", false,-1, 0,0);
    tracep->declBit(c+768,"state", false,-1);
    tracep->declBit(c+769,"sram_start", false,-1);
    tracep->declBus(c+770,"inst_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+716,"sram_lsu_read", false,-1);
    tracep->declBit(c+717,"sram_lsu_write", false,-1);
    tracep->declBit(c+1161,"LSU_DONE", false,-1);
    tracep->declBus(c+671,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+718,"valid", false,-1);
    tracep->declBit(c+719,"wen", false,-1);
    tracep->declBus(c+720,"waddr", false,-1, 31,0);
    tracep->declBus(c+398,"wdata", false,-1, 31,0);
    tracep->declBus(c+721,"raddr", false,-1, 31,0);
    tracep->declBus(c+722,"wmask", false,-1, 3,0);
    tracep->declBus(c+1198,"awsize", false,-1, 2,0);
    tracep->declBus(c+1198,"arsize", false,-1, 2,0);
    tracep->declBus(c+723,"awlen", false,-1, 7,0);
    tracep->declBus(c+724,"arlen", false,-1, 7,0);
    tracep->declBus(c+1212,"awburst", false,-1, 1,0);
    tracep->declBus(c+1212,"arburst", false,-1, 1,0);
    tracep->declBit(c+780,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+680,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1213,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+672,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+674,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+676,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+678,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+908,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+681,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1162,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+779,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+685,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+682,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1109,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+786,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+410,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+781,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+683,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+1214,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+673,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+675,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+677,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+679,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+684,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1110,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+787,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1163,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+411,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+412,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+1199,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1212,"READ", false,-1, 1,0);
    tracep->declBus(c+1215,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1216,"DONE", false,-1, 1,0);
    tracep->declBus(c+686,"state", false,-1, 1,0);
    tracep->declBit(c+680,"axi_awvalid", false,-1);
    tracep->declBit(c+681,"axi_wvalid", false,-1);
    tracep->declBus(c+1213,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+672,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+687,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+674,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+676,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+678,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+688,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+682,"axi_bready", false,-1);
    tracep->declBit(c+685,"axi_wlast", false,-1);
    tracep->declBit(c+683,"axi_arvalid", false,-1);
    tracep->declBit(c+684,"axi_rready", false,-1);
    tracep->declBus(c+1214,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+673,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+675,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+677,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+679,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+702,"pc", false,-1, 31,0);
    tracep->declBus(c+703,"dnpc", false,-1, 31,0);
    tracep->declBit(c+704,"PCU_VALID", false,-1);
    tracep->declBit(c+705,"IFU_READY", false,-1);
    tracep->declBit(c+704,"pcu_valid", false,-1);
    tracep->declBus(c+1219,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1220,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+771,"state", false,-1);
    tracep->declBit(c+4,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1221,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1222,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBus(c+290,"wdata", false,-1, 31,0);
    tracep->declBus(c+291,"waddr", false,-1, 4,0);
    tracep->declBit(c+292,"wen", false,-1);
    tracep->declBus(c+269,"raddr1", false,-1, 4,0);
    tracep->declBus(c+301,"r1", false,-1, 31,0);
    tracep->declBus(c+270,"raddr2", false,-1, 4,0);
    tracep->declBus(c+302,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+306+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+274,"EXU_VALID", false,-1);
    tracep->declBit(c+275,"WBU_READY", false,-1);
    tracep->declBit(c+736,"wbu_done", false,-1);
    tracep->declBit(c+263,"difftest", false,-1);
    tracep->declBus(c+290,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+276,"res", false,-1, 31,0);
    tracep->declBus(c+291,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+268,"rd", false,-1, 4,0);
    tracep->declBit(c+292,"wen_reg", false,-1);
    tracep->declBit(c+285,"gpr_wen", false,-1);
    tracep->declBus(c+278,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+280,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+282,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+284,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+293,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+294,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+295,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+296,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+286,"mepc_wen", false,-1);
    tracep->declBit(c+287,"mstatus_wen", false,-1);
    tracep->declBit(c+288,"mcause_wen", false,-1);
    tracep->declBit(c+289,"mtvec_wen", false,-1);
    tracep->declBit(c+297,"mepc_wen_reg", false,-1);
    tracep->declBit(c+298,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+299,"mcause_wen_reg", false,-1);
    tracep->declBit(c+300,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+276,"xrd", false,-1, 31,0);
    tracep->declBus(c+268,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+285,"o_rf_wen", false,-1);
    tracep->declBus(c+278,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+280,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+282,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+284,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+275,"wbu_ready", false,-1);
    tracep->declBus(c+1199,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1212,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1215,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1216,"NULL", false,-1, 1,0);
    tracep->declBus(c+772,"state", false,-1, 1,0);
    tracep->declBus(c+5,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+777,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1183,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1195,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1210,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1197,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1198,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1199,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1160,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1183,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1210,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1195,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1211,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1183,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+785,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+783,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+407,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+778,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+710,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+265,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+709,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+264,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+266,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+267,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+711,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1108,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+784,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1159,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+408,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+409,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+780,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+680,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1213,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+672,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+674,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+676,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+678,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+908,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+681,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1162,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+779,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+685,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+682,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1109,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+786,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+410,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+781,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+683,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1214,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+673,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+675,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+677,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+679,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+684,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1110,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+787,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1163,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+411,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+412,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+700,"io_master_awready", false,-1);
    tracep->declBit(c+842,"io_master_awvalid", false,-1);
    tracep->declBus(c+843,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+844,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+845,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+846,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+847,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"io_master_wready", false,-1);
    tracep->declBit(c+848,"io_master_wvalid", false,-1);
    tracep->declBus(c+849,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+850,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+851,"io_master_wlast", false,-1);
    tracep->declBit(c+852,"io_master_bready", false,-1);
    tracep->declBit(c+1024,"io_master_bvalid", false,-1);
    tracep->declBus(c+1025,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+423,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"io_master_arready", false,-1);
    tracep->declBit(c+853,"io_master_arvalid", false,-1);
    tracep->declBus(c+854,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+855,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+856,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+857,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+858,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+859,"io_master_rready", false,-1);
    tracep->declBit(c+1026,"io_master_rvalid", false,-1);
    tracep->declBus(c+1027,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+424,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1157,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"io_master_rlast", false,-1);
    tracep->declBit(c+730,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+921,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+915,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+909,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+913,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+917,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+919,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+731,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+922,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+910,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+912,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+926,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+923,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+732,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+726,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+728,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+733,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+924,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+916,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+911,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+914,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+918,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+920,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+925,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+734,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+727,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+725,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+729,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+735,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+928,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+929,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+930,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1111,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+931,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+932,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+933,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+773,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+788,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+774,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+789,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+934,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+935,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+936,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+937,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+413,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+414,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+938,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+782,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+939,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1165,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+790,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+940,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+941,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+942,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1112,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+943,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+944,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+415,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1199,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1212,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1215,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1216,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+775,"state", false,-1, 1,0);
    tracep->declBus(c+6,"next_state", false,-1, 1,0);
    tracep->declBus(c+1223,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1224,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+945,"sel_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1222,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1225,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1196,"din", false,-1, 31,0);
    tracep->declBus(c+304,"dout", false,-1, 31,0);
    tracep->declBit(c+1183,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1222,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1196,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+295,"din", false,-1, 31,0);
    tracep->declBus(c+281,"dout", false,-1, 31,0);
    tracep->declBit(c+299,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1222,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1196,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+293,"din", false,-1, 31,0);
    tracep->declBus(c+277,"dout", false,-1, 31,0);
    tracep->declBit(c+297,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1222,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1226,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+294,"din", false,-1, 31,0);
    tracep->declBus(c+279,"dout", false,-1, 31,0);
    tracep->declBit(c+298,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1222,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1196,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+296,"din", false,-1, 31,0);
    tracep->declBus(c+283,"dout", false,-1, 31,0);
    tracep->declBit(c+300,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1222,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1227,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1196,"din", false,-1, 31,0);
    tracep->declBus(c+303,"dout", false,-1, 31,0);
    tracep->declBit(c+1183,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+730,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+921,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+915,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+909,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+913,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+917,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+919,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+731,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+922,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+910,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+912,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+926,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+923,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+732,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+726,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+728,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+733,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+924,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+916,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+911,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+914,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+918,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+920,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+925,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+734,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+727,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+725,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+729,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+735,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+730,"axi_awready", false,-1);
    tracep->declBit(c+731,"axi_wready", false,-1);
    tracep->declBit(c+732,"axi_bvalid", false,-1);
    tracep->declBit(c+733,"axi_arready", false,-1);
    tracep->declBit(c+734,"axi_rvalid", false,-1);
    tracep->declBit(c+735,"axi_rlast", false,-1);
    tracep->declBus(c+728,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+729,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+726,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+727,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+725,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+776,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1223,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1224,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+338,"mtime", false,-1, 63,0);
    tracep->declBus(c+1166,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"io_d", false,-1);
    tracep->declBit(c+340,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"io_d", false,-1);
    tracep->declBit(c+340,"io_q", false,-1);
    tracep->declBit(c+340,"sync_0", false,-1);
    tracep->declBit(c+341,"sync_1", false,-1);
    tracep->declBit(c+342,"sync_2", false,-1);
    tracep->declBit(c+343,"sync_3", false,-1);
    tracep->declBit(c+344,"sync_4", false,-1);
    tracep->declBit(c+345,"sync_5", false,-1);
    tracep->declBit(c+346,"sync_6", false,-1);
    tracep->declBit(c+347,"sync_7", false,-1);
    tracep->declBit(c+348,"sync_8", false,-1);
    tracep->declBit(c+349,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+813,"auto_in_psel", false,-1);
    tracep->declBit(c+419,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+812,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1182,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1190,"auto_in_pready", false,-1);
    tracep->declBit(c+1191,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1192,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1131,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1132,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1133,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1134,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1135,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1136,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1137,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1138,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1139,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1140,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+946,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+813,"in_psel", false,-1);
    tracep->declBit(c+419,"in_penable", false,-1);
    tracep->declBus(c+1182,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1190,"in_pready", false,-1);
    tracep->declBus(c+1192,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1191,"in_pslverr", false,-1);
    tracep->declBus(c+1131,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1132,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1133,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1134,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1135,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1136,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1137,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1138,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1139,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1140,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+811,"auto_in_psel", false,-1);
    tracep->declBit(c+418,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+812,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1182,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"auto_in_pready", false,-1);
    tracep->declBit(c+1188,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1189,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1141,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1142,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+946,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+811,"in_psel", false,-1);
    tracep->declBit(c+418,"in_penable", false,-1);
    tracep->declBus(c+1182,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"in_pready", false,-1);
    tracep->declBus(c+1189,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1188,"in_pslverr", false,-1);
    tracep->declBit(c+1141,"ps2_clk", false,-1);
    tracep->declBit(c+1142,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+890,"auto_in_awvalid", false,-1);
    tracep->declBit(c+891,"auto_in_wvalid", false,-1);
    tracep->declBit(c+79,"auto_in_arready", false,-1);
    tracep->declBit(c+892,"auto_in_arvalid", false,-1);
    tracep->declBus(c+838,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+893,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1158,"auto_in_rready", false,-1);
    tracep->declBit(c+80,"auto_in_rvalid", false,-1);
    tracep->declBus(c+81,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+80,"state", false,-1);
    tracep->declBus(c+82,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+81,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+947,"raddr", false,-1, 31,0);
    tracep->declBit(c+948,"ren", false,-1);
    tracep->declBus(c+949,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+814,"auto_in_psel", false,-1);
    tracep->declBit(c+420,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+802,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1155,"auto_in_pready", false,-1);
    tracep->declBit(c+1183,"auto_in_pslverr", false,-1);
    tracep->declBus(c+18,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1125,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1126,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1153,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+802,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+814,"in_psel", false,-1);
    tracep->declBit(c+420,"in_penable", false,-1);
    tracep->declBus(c+1182,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1155,"in_pready", false,-1);
    tracep->declBus(c+18,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1183,"in_pslverr", false,-1);
    tracep->declBit(c+1125,"qspi_sck", false,-1);
    tracep->declBit(c+1126,"qspi_ce_n", false,-1);
    tracep->declBus(c+1153,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1153,"din", false,-1, 3,0);
    tracep->declBus(c+1127,"dout", false,-1, 3,0);
    tracep->declBus(c+1128,"douten", false,-1, 3,0);
    tracep->declBit(c+1167,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1129,"clk_i", false,-1);
    tracep->declBit(c+1130,"rst_i", false,-1);
    tracep->declBus(c+802,"adr_i", false,-1, 31,0);
    tracep->declBus(c+805,"dat_i", false,-1, 31,0);
    tracep->declBus(c+18,"dat_o", false,-1, 31,0);
    tracep->declBus(c+806,"sel_i", false,-1, 3,0);
    tracep->declBit(c+814,"cyc_i", false,-1);
    tracep->declBit(c+814,"stb_i", false,-1);
    tracep->declBit(c+1167,"ack_o", false,-1);
    tracep->declBit(c+804,"we_i", false,-1);
    tracep->declBit(c+1125,"sck", false,-1);
    tracep->declBit(c+1126,"ce_n", false,-1);
    tracep->declBus(c+1153,"din", false,-1, 3,0);
    tracep->declBus(c+1127,"dout", false,-1, 3,0);
    tracep->declBus(c+1128,"douten", false,-1, 3,0);
    tracep->declBus(c+1219,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1220,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+440,"mr_sck", false,-1);
    tracep->declBit(c+441,"mr_ce_n", false,-1);
    tracep->declBus(c+1153,"mr_din", false,-1, 3,0);
    tracep->declBus(c+442,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+443,"mr_doe", false,-1);
    tracep->declBit(c+444,"mw_sck", false,-1);
    tracep->declBit(c+445,"mw_ce_n", false,-1);
    tracep->declBus(c+1153,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1113,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+446,"mw_doe", false,-1);
    tracep->declBit(c+1114,"mr_rd", false,-1);
    tracep->declBit(c+447,"mr_done", false,-1);
    tracep->declBit(c+1115,"mw_wr", false,-1);
    tracep->declBit(c+1116,"mw_done", false,-1);
    tracep->declBit(c+814,"wb_valid", false,-1);
    tracep->declBit(c+950,"wb_we", false,-1);
    tracep->declBit(c+951,"wb_re", false,-1);
    tracep->declBit(c+448,"state", false,-1);
    tracep->declBit(c+1117,"nstate", false,-1);
    tracep->declBus(c+952,"size", false,-1, 2,0);
    tracep->declBus(c+953,"byte0", false,-1, 7,0);
    tracep->declBus(c+954,"byte1", false,-1, 7,0);
    tracep->declBus(c+955,"byte2", false,-1, 7,0);
    tracep->declBus(c+956,"byte3", false,-1, 7,0);
    tracep->declBus(c+957,"wdata", false,-1, 31,0);
    tracep->declBit(c+665,"qpi_flag", false,-1);
    tracep->declBit(c+666,"qpi_sck", false,-1);
    tracep->declBit(c+667,"qpi_ce_n", false,-1);
    tracep->declBus(c+668,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+669,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+670,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1168,"rst_n", false,-1);
    tracep->declBus(c+958,"addr", false,-1, 23,0);
    tracep->declBit(c+1114,"rd", false,-1);
    tracep->declBus(c+1228,"size", false,-1, 2,0);
    tracep->declBit(c+447,"done", false,-1);
    tracep->declBus(c+18,"line", false,-1, 31,0);
    tracep->declBit(c+440,"sck", false,-1);
    tracep->declBit(c+441,"ce_n", false,-1);
    tracep->declBus(c+1153,"din", false,-1, 3,0);
    tracep->declBus(c+442,"dout", false,-1, 3,0);
    tracep->declBit(c+443,"douten", false,-1);
    tracep->declBus(c+1219,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1220,"READ", false,-1, 0,0);
    tracep->declBus(c+1229,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+449,"state", false,-1);
    tracep->declBit(c+1118,"nstate", false,-1);
    tracep->declBus(c+450,"counter", false,-1, 7,0);
    tracep->declBus(c+451,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+350+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1230,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+452,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1168,"rst_n", false,-1);
    tracep->declBus(c+959,"addr", false,-1, 23,0);
    tracep->declBus(c+957,"line", false,-1, 31,0);
    tracep->declBus(c+952,"size", false,-1, 2,0);
    tracep->declBit(c+1115,"wr", false,-1);
    tracep->declBit(c+1116,"done", false,-1);
    tracep->declBit(c+444,"sck", false,-1);
    tracep->declBit(c+445,"ce_n", false,-1);
    tracep->declBus(c+1153,"din", false,-1, 3,0);
    tracep->declBus(c+1113,"dout", false,-1, 3,0);
    tracep->declBit(c+446,"douten", false,-1);
    tracep->declBus(c+1219,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1220,"WRITE", false,-1, 0,0);
    tracep->declBus(c+960,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+453,"state", false,-1);
    tracep->declBit(c+1119,"nstate", false,-1);
    tracep->declBus(c+454,"counter", false,-1, 7,0);
    tracep->declBus(c+455,"saddr", false,-1, 23,0);
    tracep->declBus(c+1231,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+808,"auto_in_psel", false,-1);
    tracep->declBit(c+416,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+802,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+438,"auto_in_pready", false,-1);
    tracep->declBit(c+1183,"auto_in_pslverr", false,-1);
    tracep->declBus(c+439,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1154,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+429,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+430,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+431,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+432,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+433,"sdram_bundle_we", false,-1);
    tracep->declBus(c+434,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+435,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+436,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+437,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+802,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+808,"in_psel", false,-1);
    tracep->declBit(c+416,"in_penable", false,-1);
    tracep->declBus(c+1182,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+438,"in_pready", false,-1);
    tracep->declBus(c+439,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1183,"in_pslverr", false,-1);
    tracep->declBit(c+1154,"sdram_clk", false,-1);
    tracep->declBit(c+429,"sdram_cke", false,-1);
    tracep->declBit(c+430,"sdram_cs", false,-1);
    tracep->declBit(c+431,"sdram_ras", false,-1);
    tracep->declBit(c+432,"sdram_cas", false,-1);
    tracep->declBit(c+433,"sdram_we", false,-1);
    tracep->declBus(c+434,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+435,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+436,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+437,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+456,"sdram_dout_en", false,-1);
    tracep->declBus(c+457,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+354,"state", false,-1, 1,0);
    tracep->declBit(c+458,"req_accept", false,-1);
    tracep->declBit(c+961,"is_read", false,-1);
    tracep->declBit(c+962,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1129,"clk_i", false,-1);
    tracep->declBit(c+1130,"rst_i", false,-1);
    tracep->declBus(c+963,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+961,"inport_rd_i", false,-1);
    tracep->declBus(c+1197,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+802,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+805,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+437,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+458,"inport_accept_o", false,-1);
    tracep->declBit(c+438,"inport_ack_o", false,-1);
    tracep->declBit(c+1183,"inport_error_o", false,-1);
    tracep->declBus(c+439,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1154,"sdram_clk_o", false,-1);
    tracep->declBit(c+429,"sdram_cke_o", false,-1);
    tracep->declBit(c+430,"sdram_cs_o", false,-1);
    tracep->declBit(c+431,"sdram_ras_o", false,-1);
    tracep->declBit(c+432,"sdram_cas_o", false,-1);
    tracep->declBit(c+433,"sdram_we_o", false,-1);
    tracep->declBus(c+436,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+434,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+435,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+457,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+456,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1232,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1233,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1234,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1236,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1237,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1238,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1239,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1240,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1236,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1241,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1242,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1243,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1244,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1245,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1246,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1247,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1195,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1248,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1236,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1195,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1247,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1246,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1242,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1244,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1243,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1245,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1241,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1249,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1250,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1251,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1251,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1252,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1251,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1253,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+802,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+963,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+961,"ram_rd_w", false,-1);
    tracep->declBit(c+458,"ram_accept_w", false,-1);
    tracep->declBus(c+805,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+439,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+438,"ram_ack_w", false,-1);
    tracep->declBit(c+964,"ram_req_w", false,-1);
    tracep->declBus(c+459,"command_q", false,-1, 3,0);
    tracep->declBus(c+434,"addr_q", false,-1, 12,0);
    tracep->declBus(c+457,"data_q", false,-1, 15,0);
    tracep->declBit(c+460,"data_rd_en_q", false,-1);
    tracep->declBus(c+436,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+429,"cke_q", false,-1);
    tracep->declBus(c+435,"bank_q", false,-1, 1,0);
    tracep->declBus(c+461,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+462,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+437,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+463,"refresh_q", false,-1);
    tracep->declBus(c+464,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+465+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+469,"state_q", false,-1, 3,0);
    tracep->declBus(c+1120,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1121,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+470,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+471,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+965,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+966,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+967,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1236,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+472,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1122,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1254,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+473,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+474,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+475,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+476,"idx", false,-1, 31,0);
    tracep->declBus(c+477,"rd_q", false,-1, 3,0);
    tracep->declBit(c+438,"ack_q", false,-1);
    tracep->declArray(c+478,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+818,"auto_in_psel", false,-1);
    tracep->declBit(c+819,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+810,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1182,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_in_pready", false,-1);
    tracep->declBit(c+1183,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1019,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+427,"spi_bundle_sck", false,-1);
    tracep->declBus(c+428,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1151,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1152,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1255,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1256,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1257,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+968,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+818,"in_psel", false,-1);
    tracep->declBit(c+819,"in_penable", false,-1);
    tracep->declBus(c+1182,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"in_pready", false,-1);
    tracep->declBus(c+1019,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1183,"in_pslverr", false,-1);
    tracep->declBit(c+427,"spi_sck", false,-1);
    tracep->declBus(c+428,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1151,"spi_mosi", false,-1);
    tracep->declBit(c+1152,"spi_miso", false,-1);
    tracep->declBit(c+481,"spi_irq_out", false,-1);
    tracep->declBus(c+969,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+970,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+971,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+972,"wb_we_i", false,-1);
    tracep->declBit(c+973,"wb_stb_i", false,-1);
    tracep->declBit(c+974,"wb_cyc_i", false,-1);
    tracep->declBit(c+482,"wb_ack_o", false,-1);
    tracep->declBus(c+483,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1198,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1182,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1258,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1259,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1228,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1260,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1261,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1262,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+355,"state", false,-1, 2,0);
    tracep->declBus(c+356,"next_state", false,-1, 2,0);
    tracep->declBus(c+357,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+358,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+359,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+360,"flash_pwrite", false,-1);
    tracep->declBit(c+361,"flash_psel", false,-1);
    tracep->declBit(c+362,"flash_penable", false,-1);
    tracep->declBit(c+363,"flash_pready", false,-1);
    tracep->declBus(c+364,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1263,"Tp", false,-1, 31,0);
    tracep->declBit(c+1129,"wb_clk_i", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBus(c+969,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+970,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+483,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+971,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+972,"wb_we_i", false,-1);
    tracep->declBit(c+973,"wb_stb_i", false,-1);
    tracep->declBit(c+974,"wb_cyc_i", false,-1);
    tracep->declBit(c+482,"wb_ack_o", false,-1);
    tracep->declBit(c+1183,"wb_err_o", false,-1);
    tracep->declBit(c+481,"wb_int_o", false,-1);
    tracep->declBus(c+428,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+427,"sclk_pad_o", false,-1);
    tracep->declBit(c+1151,"mosi_pad_o", false,-1);
    tracep->declBit(c+1152,"miso_pad_i", false,-1);
    tracep->declBus(c+484,"divider", false,-1, 15,0);
    tracep->declBus(c+485,"ctrl", false,-1, 13,0);
    tracep->declBus(c+486,"ss", false,-1, 7,0);
    tracep->declBus(c+1123,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+487,"rx", false,-1, 127,0);
    tracep->declBit(c+491,"rx_negedge", false,-1);
    tracep->declBit(c+492,"tx_negedge", false,-1);
    tracep->declBus(c+493,"char_len", false,-1, 6,0);
    tracep->declBit(c+494,"go", false,-1);
    tracep->declBit(c+495,"lsb", false,-1);
    tracep->declBit(c+496,"ie", false,-1);
    tracep->declBit(c+497,"ass", false,-1);
    tracep->declBit(c+975,"spi_divider_sel", false,-1);
    tracep->declBit(c+976,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+977,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+978,"spi_ss_sel", false,-1);
    tracep->declBit(c+498,"tip", false,-1);
    tracep->declBit(c+499,"pos_edge", false,-1);
    tracep->declBit(c+500,"neg_edge", false,-1);
    tracep->declBit(c+501,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1263,"Tp", false,-1, 31,0);
    tracep->declBit(c+1129,"clk_in", false,-1);
    tracep->declBit(c+1130,"rst", false,-1);
    tracep->declBit(c+498,"enable", false,-1);
    tracep->declBit(c+494,"go", false,-1);
    tracep->declBit(c+501,"last_clk", false,-1);
    tracep->declBus(c+484,"divider", false,-1, 15,0);
    tracep->declBit(c+427,"clk_out", false,-1);
    tracep->declBit(c+499,"pos_edge", false,-1);
    tracep->declBit(c+500,"neg_edge", false,-1);
    tracep->declBus(c+502,"cnt", false,-1, 15,0);
    tracep->declBit(c+503,"cnt_zero", false,-1);
    tracep->declBit(c+504,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1263,"Tp", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"rst", false,-1);
    tracep->declBus(c+979,"latch", false,-1, 3,0);
    tracep->declBus(c+971,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+493,"len", false,-1, 6,0);
    tracep->declBit(c+495,"lsb", false,-1);
    tracep->declBit(c+494,"go", false,-1);
    tracep->declBit(c+499,"pos_edge", false,-1);
    tracep->declBit(c+500,"neg_edge", false,-1);
    tracep->declBit(c+491,"rx_negedge", false,-1);
    tracep->declBit(c+492,"tx_negedge", false,-1);
    tracep->declBit(c+498,"tip", false,-1);
    tracep->declBit(c+501,"last", false,-1);
    tracep->declBus(c+970,"p_in", false,-1, 31,0);
    tracep->declArray(c+487,"p_out", false,-1, 127,0);
    tracep->declBit(c+427,"s_clk", false,-1);
    tracep->declBit(c+1152,"s_in", false,-1);
    tracep->declBit(c+1151,"s_out", false,-1);
    tracep->declBus(c+505,"cnt", false,-1, 7,0);
    tracep->declArray(c+487,"data", false,-1, 127,0);
    tracep->declBus(c+506,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+507,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+508,"rx_clk", false,-1);
    tracep->declBit(c+509,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+815,"auto_in_psel", false,-1);
    tracep->declBit(c+816,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+812,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1182,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+817,"auto_in_pready", false,-1);
    tracep->declBit(c+1183,"auto_in_pslverr", false,-1);
    tracep->declBus(c+983,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1149,"uart_rx", false,-1);
    tracep->declBit(c+1150,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+815,"in_psel", false,-1);
    tracep->declBit(c+816,"in_penable", false,-1);
    tracep->declBus(c+1182,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+817,"in_pready", false,-1);
    tracep->declBit(c+1183,"in_pslverr", false,-1);
    tracep->declBus(c+946,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+983,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"uart_rx", false,-1);
    tracep->declBit(c+1150,"uart_tx", false,-1);
    tracep->declBit(c+510,"rtsn", false,-1);
    tracep->declBit(c+1183,"ctsn", false,-1);
    tracep->declBit(c+511,"dtr_pad_o", false,-1);
    tracep->declBit(c+1183,"dsr_pad_i", false,-1);
    tracep->declBit(c+1183,"ri_pad_i", false,-1);
    tracep->declBit(c+1183,"dcd_pad_i", false,-1);
    tracep->declBit(c+512,"interrupt", false,-1);
    tracep->declBit(c+1169,"reg_we", false,-1);
    tracep->declBit(c+1170,"reg_re", false,-1);
    tracep->declBus(c+980,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+981,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+365,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1124,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+513,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBus(c+980,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+982,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1124,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1169,"wb_we_i", false,-1);
    tracep->declBit(c+1170,"wb_re_i", false,-1);
    tracep->declBit(c+1150,"stx_pad_o", false,-1);
    tracep->declBit(c+1149,"srx_pad_i", false,-1);
    tracep->declBus(c+1249,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+513,"rts_pad_o", false,-1);
    tracep->declBit(c+511,"dtr_pad_o", false,-1);
    tracep->declBit(c+512,"int_o", false,-1);
    tracep->declBit(c+514,"enable", false,-1);
    tracep->declBit(c+515,"srx_pad", false,-1);
    tracep->declBus(c+516,"ier", false,-1, 3,0);
    tracep->declBus(c+517,"iir", false,-1, 3,0);
    tracep->declBus(c+518,"fcr", false,-1, 1,0);
    tracep->declBus(c+519,"mcr", false,-1, 4,0);
    tracep->declBus(c+520,"lcr", false,-1, 7,0);
    tracep->declBus(c+521,"msr", false,-1, 7,0);
    tracep->declBus(c+522,"dl", false,-1, 15,0);
    tracep->declBus(c+523,"scratch", false,-1, 7,0);
    tracep->declBit(c+524,"start_dlc", false,-1);
    tracep->declBit(c+525,"lsr_mask_d", false,-1);
    tracep->declBit(c+526,"msi_reset", false,-1);
    tracep->declBus(c+527,"dlc", false,-1, 15,0);
    tracep->declBus(c+528,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+529,"rx_reset", false,-1);
    tracep->declBit(c+530,"tx_reset", false,-1);
    tracep->declBit(c+531,"dlab", false,-1);
    tracep->declBit(c+1193,"cts_pad_i", false,-1);
    tracep->declBit(c+1183,"dsr_pad_i", false,-1);
    tracep->declBit(c+1183,"ri_pad_i", false,-1);
    tracep->declBit(c+1183,"dcd_pad_i", false,-1);
    tracep->declBit(c+532,"loopback", false,-1);
    tracep->declBit(c+1183,"cts", false,-1);
    tracep->declBit(c+1193,"dsr", false,-1);
    tracep->declBit(c+1193,"ri", false,-1);
    tracep->declBit(c+1193,"dcd", false,-1);
    tracep->declBit(c+533,"cts_c", false,-1);
    tracep->declBit(c+534,"dsr_c", false,-1);
    tracep->declBit(c+535,"ri_c", false,-1);
    tracep->declBit(c+536,"dcd_c", false,-1);
    tracep->declBus(c+537,"lsr", false,-1, 7,0);
    tracep->declBit(c+538,"lsr0", false,-1);
    tracep->declBit(c+539,"lsr1", false,-1);
    tracep->declBit(c+540,"lsr2", false,-1);
    tracep->declBit(c+541,"lsr3", false,-1);
    tracep->declBit(c+542,"lsr4", false,-1);
    tracep->declBit(c+543,"lsr5", false,-1);
    tracep->declBit(c+544,"lsr6", false,-1);
    tracep->declBit(c+545,"lsr7", false,-1);
    tracep->declBit(c+546,"lsr0r", false,-1);
    tracep->declBit(c+547,"lsr1r", false,-1);
    tracep->declBit(c+548,"lsr2r", false,-1);
    tracep->declBit(c+549,"lsr3r", false,-1);
    tracep->declBit(c+550,"lsr4r", false,-1);
    tracep->declBit(c+551,"lsr5r", false,-1);
    tracep->declBit(c+552,"lsr6r", false,-1);
    tracep->declBit(c+553,"lsr7r", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+554,"rls_int", false,-1);
    tracep->declBit(c+555,"rda_int", false,-1);
    tracep->declBit(c+556,"ti_int", false,-1);
    tracep->declBit(c+557,"thre_int", false,-1);
    tracep->declBit(c+558,"ms_int", false,-1);
    tracep->declBit(c+559,"tf_push", false,-1);
    tracep->declBit(c+560,"rf_pop", false,-1);
    tracep->declBus(c+1171,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+561,"rf_error_bit", false,-1);
    tracep->declBit(c+539,"rf_overrun", false,-1);
    tracep->declBit(c+562,"rf_push_pulse", false,-1);
    tracep->declBus(c+563,"rf_count", false,-1, 4,0);
    tracep->declBus(c+564,"tf_count", false,-1, 4,0);
    tracep->declBus(c+565,"tstate", false,-1, 2,0);
    tracep->declBus(c+566,"rstate", false,-1, 3,0);
    tracep->declBus(c+567,"counter_t", false,-1, 9,0);
    tracep->declBit(c+568,"thre_set_en", false,-1);
    tracep->declBus(c+569,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+570,"block_value", false,-1, 7,0);
    tracep->declBit(c+571,"serial_out", false,-1);
    tracep->declBit(c+572,"serial_in", false,-1);
    tracep->declBit(c+8,"lsr_mask_condition", false,-1);
    tracep->declBit(c+9,"iir_read", false,-1);
    tracep->declBit(c+10,"msr_read", false,-1);
    tracep->declBit(c+11,"fifo_read", false,-1);
    tracep->declBit(c+12,"fifo_write", false,-1);
    tracep->declBus(c+573,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+574,"lsr0_d", false,-1);
    tracep->declBit(c+575,"lsr1_d", false,-1);
    tracep->declBit(c+576,"lsr2_d", false,-1);
    tracep->declBit(c+577,"lsr3_d", false,-1);
    tracep->declBit(c+578,"lsr4_d", false,-1);
    tracep->declBit(c+579,"lsr5_d", false,-1);
    tracep->declBit(c+580,"lsr6_d", false,-1);
    tracep->declBit(c+581,"lsr7_d", false,-1);
    tracep->declBit(c+582,"rls_int_d", false,-1);
    tracep->declBit(c+583,"thre_int_d", false,-1);
    tracep->declBit(c+584,"ms_int_d", false,-1);
    tracep->declBit(c+585,"ti_int_d", false,-1);
    tracep->declBit(c+586,"rda_int_d", false,-1);
    tracep->declBit(c+587,"rls_int_rise", false,-1);
    tracep->declBit(c+588,"thre_int_rise", false,-1);
    tracep->declBit(c+589,"ms_int_rise", false,-1);
    tracep->declBit(c+590,"ti_int_rise", false,-1);
    tracep->declBit(c+591,"rda_int_rise", false,-1);
    tracep->declBit(c+592,"rls_int_pnd", false,-1);
    tracep->declBit(c+593,"rda_int_pnd", false,-1);
    tracep->declBit(c+594,"thre_int_pnd", false,-1);
    tracep->declBit(c+595,"ms_int_pnd", false,-1);
    tracep->declBit(c+596,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1263,"Tp", false,-1, 31,0);
    tracep->declBus(c+1263,"width", false,-1, 31,0);
    tracep->declBus(c+1220,"init_value", false,-1, 0,0);
    tracep->declBit(c+1130,"rst_i", false,-1);
    tracep->declBit(c+1129,"clk_i", false,-1);
    tracep->declBit(c+1183,"stage1_rst_i", false,-1);
    tracep->declBit(c+1193,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1149,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+515,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+597,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBus(c+520,"lcr", false,-1, 7,0);
    tracep->declBit(c+560,"rf_pop", false,-1);
    tracep->declBit(c+572,"srx_pad_i", false,-1);
    tracep->declBit(c+514,"enable", false,-1);
    tracep->declBit(c+529,"rx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBus(c+567,"counter_t", false,-1, 9,0);
    tracep->declBus(c+563,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1171,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+539,"rf_overrun", false,-1);
    tracep->declBit(c+561,"rf_error_bit", false,-1);
    tracep->declBus(c+566,"rstate", false,-1, 3,0);
    tracep->declBit(c+562,"rf_push_pulse", false,-1);
    tracep->declBus(c+598,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+599,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+600,"rshift", false,-1, 7,0);
    tracep->declBit(c+601,"rparity", false,-1);
    tracep->declBit(c+602,"rparity_error", false,-1);
    tracep->declBit(c+603,"rframing_error", false,-1);
    tracep->declBit(c+604,"rbit_in", false,-1);
    tracep->declBit(c+605,"rparity_xor", false,-1);
    tracep->declBus(c+606,"counter_b", false,-1, 7,0);
    tracep->declBit(c+607,"rf_push_q", false,-1);
    tracep->declBus(c+608,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+609,"rf_push", false,-1);
    tracep->declBit(c+610,"break_error", false,-1);
    tracep->declBit(c+611,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+612,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+613,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+614,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1195,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1247,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1246,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1242,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1244,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1243,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1245,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1241,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1249,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1250,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1264,"sr_push", false,-1, 3,0);
    tracep->declBus(c+615,"toc_value", false,-1, 9,0);
    tracep->declBus(c+616,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1265,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1252,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1236,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1221,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBit(c+562,"push", false,-1);
    tracep->declBit(c+560,"pop", false,-1);
    tracep->declBus(c+608,"data_in", false,-1, 10,0);
    tracep->declBit(c+529,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1171,"data_out", false,-1, 10,0);
    tracep->declBit(c+539,"overrun", false,-1);
    tracep->declBus(c+563,"count", false,-1, 4,0);
    tracep->declBit(c+561,"error_bit", false,-1);
    tracep->declBus(c+1172,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+617+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+633,"top", false,-1, 3,0);
    tracep->declBus(c+634,"bottom", false,-1, 3,0);
    tracep->declBus(c+635,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+636,"word0", false,-1, 2,0);
    tracep->declBus(c+637,"word1", false,-1, 2,0);
    tracep->declBus(c+638,"word2", false,-1, 2,0);
    tracep->declBus(c+639,"word3", false,-1, 2,0);
    tracep->declBus(c+640,"word4", false,-1, 2,0);
    tracep->declBus(c+641,"word5", false,-1, 2,0);
    tracep->declBus(c+642,"word6", false,-1, 2,0);
    tracep->declBus(c+643,"word7", false,-1, 2,0);
    tracep->declBus(c+644,"word8", false,-1, 2,0);
    tracep->declBus(c+645,"word9", false,-1, 2,0);
    tracep->declBus(c+646,"word10", false,-1, 2,0);
    tracep->declBus(c+647,"word11", false,-1, 2,0);
    tracep->declBus(c+648,"word12", false,-1, 2,0);
    tracep->declBus(c+649,"word13", false,-1, 2,0);
    tracep->declBus(c+650,"word14", false,-1, 2,0);
    tracep->declBus(c+651,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1236,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1257,"data_width", false,-1, 31,0);
    tracep->declBus(c+1252,"depth", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+562,"we", false,-1);
    tracep->declBus(c+633,"a", false,-1, 3,0);
    tracep->declBus(c+634,"dpra", false,-1, 3,0);
    tracep->declBus(c+652,"di", false,-1, 7,0);
    tracep->declBus(c+1172,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+366+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBus(c+520,"lcr", false,-1, 7,0);
    tracep->declBit(c+559,"tf_push", false,-1);
    tracep->declBus(c+982,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+514,"enable", false,-1);
    tracep->declBit(c+530,"tx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+571,"stx_pad_o", false,-1);
    tracep->declBus(c+565,"tstate", false,-1, 2,0);
    tracep->declBus(c+564,"tf_count", false,-1, 4,0);
    tracep->declBus(c+653,"counter", false,-1, 4,0);
    tracep->declBus(c+654,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+655,"shift_out", false,-1, 6,0);
    tracep->declBit(c+656,"stx_o_tmp", false,-1);
    tracep->declBit(c+657,"parity_xor", false,-1);
    tracep->declBit(c+658,"tf_pop", false,-1);
    tracep->declBit(c+659,"bit_out", false,-1);
    tracep->declBus(c+982,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1173,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+660,"tf_overrun", false,-1);
    tracep->declBus(c+1198,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1182,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1258,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1259,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1228,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1260,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1257,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1252,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1236,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1221,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBit(c+559,"push", false,-1);
    tracep->declBit(c+658,"pop", false,-1);
    tracep->declBus(c+982,"data_in", false,-1, 7,0);
    tracep->declBit(c+530,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1173,"data_out", false,-1, 7,0);
    tracep->declBit(c+660,"overrun", false,-1);
    tracep->declBus(c+564,"count", false,-1, 4,0);
    tracep->declBus(c+661,"top", false,-1, 3,0);
    tracep->declBus(c+662,"bottom", false,-1, 3,0);
    tracep->declBus(c+663,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1236,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1257,"data_width", false,-1, 31,0);
    tracep->declBus(c+1252,"depth", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+559,"we", false,-1);
    tracep->declBus(c+661,"a", false,-1, 3,0);
    tracep->declBus(c+662,"dpra", false,-1, 3,0);
    tracep->declBus(c+982,"di", false,-1, 7,0);
    tracep->declBus(c+1173,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+382+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+809,"auto_in_psel", false,-1);
    tracep->declBit(c+417,"auto_in_penable", false,-1);
    tracep->declBit(c+804,"auto_in_pwrite", false,-1);
    tracep->declBus(c+810,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1182,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+805,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1184,"auto_in_pready", false,-1);
    tracep->declBit(c+1185,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1186,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1143,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1144,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1145,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1146,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1147,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1148,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+968,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+809,"in_psel", false,-1);
    tracep->declBit(c+417,"in_penable", false,-1);
    tracep->declBus(c+1182,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+804,"in_pwrite", false,-1);
    tracep->declBus(c+805,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+806,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1184,"in_pready", false,-1);
    tracep->declBus(c+1186,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1185,"in_pslverr", false,-1);
    tracep->declBus(c+1143,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1144,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1145,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1146,"vga_hsync", false,-1);
    tracep->declBit(c+1147,"vga_vsync", false,-1);
    tracep->declBit(c+1148,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+427,"sck", false,-1);
    tracep->declBit(c+1174,"ss", false,-1);
    tracep->declBit(c+1151,"mosi", false,-1);
    tracep->declBit(c+695,"miso", false,-1);
    tracep->declBus(c+696,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+697,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+698,"counter", false,-1, 2,0);
    tracep->declBit(c+699,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+427,"sck", false,-1);
    tracep->declBit(c+664,"ss", false,-1);
    tracep->declBit(c+1151,"mosi", false,-1);
    tracep->declBit(c+1175,"miso", false,-1);
    tracep->declBit(c+664,"reset", false,-1);
    tracep->declBus(c+689,"state", false,-1, 2,0);
    tracep->declBus(c+690,"counter", false,-1, 7,0);
    tracep->declBus(c+691,"cmd", false,-1, 7,0);
    tracep->declBus(c+692,"addr", false,-1, 23,0);
    tracep->declBus(c+693,"data", false,-1, 31,0);
    tracep->declBit(c+694,"ren", false,-1);
    tracep->declBus(c+1176,"rdata", false,-1, 31,0);
    tracep->declBus(c+1177,"raddr", false,-1, 31,0);
    tracep->declBus(c+1178,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+427,"clock", false,-1);
    tracep->declBit(c+694,"valid", false,-1);
    tracep->declBus(c+691,"cmd", false,-1, 7,0);
    tracep->declBus(c+1177,"addr", false,-1, 31,0);
    tracep->declBus(c+1176,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1125,"sck", false,-1);
    tracep->declBit(c+1126,"ce_n", false,-1);
    tracep->declBus(c+1153,"dio", false,-1, 3,0);
    tracep->declBit(c+1126,"reset", false,-1);
    tracep->declBus(c+13,"state", false,-1, 3,0);
    tracep->declBus(c+14,"counter", false,-1, 7,0);
    tracep->declBus(c+791,"cmd", false,-1, 7,0);
    tracep->declBus(c+792,"addr", false,-1, 23,0);
    tracep->declBus(c+15,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+793+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1179,"qpi_flag", false,-1);
    tracep->declBus(c+16,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1180,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+797,"ren", false,-1);
    tracep->declBit(c+798,"wen", false,-1);
    tracep->declBus(c+799,"len", false,-1, 7,0);
    tracep->declBus(c+1181,"rdata", false,-1, 31,0);
    tracep->declBus(c+800,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1125,"clock", false,-1);
    tracep->declBit(c+797,"ren", false,-1);
    tracep->declBit(c+798,"wen", false,-1);
    tracep->declBus(c+791,"cmd", false,-1, 7,0);
    tracep->declBus(c+800,"saddr", false,-1, 31,0);
    tracep->declBus(c+1181,"rdata", false,-1, 31,0);
    tracep->declBus(c+801,"wdata", false,-1, 31,0);
    tracep->declBus(c+799,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+430,"cs", false,-1);
    tracep->declBit(c+431,"ras", false,-1);
    tracep->declBit(c+432,"cas", false,-1);
    tracep->declBit(c+433,"we", false,-1);
    tracep->declBus(c+434,"a", false,-1, 12,0);
    tracep->declBus(c+435,"ba", false,-1, 1,0);
    tracep->declBus(c+436,"dqm", false,-1, 1,0);
    tracep->declBus(c+437,"dq", false,-1, 15,0);
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
    bufp->fullCData(oldp+16,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+17,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+18,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+30,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+31,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullQData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+66,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+69,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+70,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+79,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+125,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+135,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+139,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+147,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+151,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+155,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+159,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+171,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+175,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+199,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+207,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+215,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+219,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+239,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+247,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct7),7);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__shamt),5);
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__res),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mepc),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mstatus),32);
    bufp->fullIData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mcause),32);
    bufp->fullIData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mtvec),32);
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen));
    bufp->fullIData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd),32);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_addr),5);
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_wen));
    bufp->fullIData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mepc),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mstatus),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mcause),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mtvec),32);
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_en));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_en));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_en));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_en));
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata_reg),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullQData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullIData(oldp+398,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0)
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
    bufp->fullIData(oldp+399,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+400,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+401,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+402,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+403,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+404,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+405,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+406,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3))))));
    bufp->fullCData(oldp+407,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullCData(oldp+408,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullBit(oldp+409,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
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
    bufp->fullCData(oldp+410,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullCData(oldp+411,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullBit(oldp+412,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
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
    bufp->fullCData(oldp+413,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->fullCData(oldp+414,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                     : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U)))),2);
    bufp->fullBit(oldp+415,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->fullBit(oldp+416,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+417,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+418,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+419,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+420,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+421,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                           << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))))));
    bufp->fullIData(oldp+422,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+423,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+424,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+425,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+426,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+430,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+431,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+432,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+433,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+437,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+439,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+442,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0xbU : 
                                          (0xfU & (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    ((4U 
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
                                                         : 0U)))))))))),4);
    bufp->fullBit(oldp+443,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+446,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+447,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+452,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+456,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+458,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+491,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+492,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+493,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+494,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+495,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+496,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+497,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+501,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+503,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+504,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+506,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+510,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+511,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+513,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+531,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+532,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+533,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+534,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+535,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+536,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+537,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+540,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+541,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+542,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+561,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+568,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+587,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+588,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+589,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+590,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+591,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+610,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+611,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+612,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+613,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+614,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+616,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+635,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+652,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+663,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+694,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+700,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullIData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op),7);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3),3);
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_read));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_write));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+719,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+722,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
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
    bufp->fullCData(oldp+723,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 1U : (((0x23U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                  ? 3U
                                                  : 0U)))),8);
    bufp->fullCData(oldp+724,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf0b4f3eb__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf2be8e81__0))
                                         ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hb47fe9fa__0)
                                                  ? 3U
                                                  : 0U)))),8);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_done));
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+743,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullIData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+745,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+746,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+748,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
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
    bufp->fullBit(oldp+749,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+751,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullCData(oldp+753,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+754,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+755,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+756,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+757,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+758,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+759,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+760,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+761,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+762,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+764,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+765,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_start));
    bufp->fullIData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullIData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullBit(oldp+777,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+778,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullCData(oldp+779,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
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
    bufp->fullBit(oldp+780,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+781,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+782,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullCData(oldp+783,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))
                                : 0U)),4);
    bufp->fullCData(oldp+784,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))
                                : 0U)),4);
    bufp->fullBit(oldp+785,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+786,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))
                                : 0U)),4);
    bufp->fullCData(oldp+787,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))
                                : 0U)),4);
    bufp->fullCData(oldp+788,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))),4);
    bufp->fullCData(oldp+789,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))),4);
    bufp->fullBit(oldp+790,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+792,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+800,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+801,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
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
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+841,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+842,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf7188004__0))));
    bufp->fullCData(oldp+843,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h827cdd7a__0))),4);
    bufp->fullIData(oldp+844,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0)),32);
    bufp->fullCData(oldp+845,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_ha6afd63c__0))),8);
    bufp->fullCData(oldp+846,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf391cef2__0))),3);
    bufp->fullCData(oldp+847,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h959727d0__0))),2);
    bufp->fullBit(oldp+848,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0))));
    bufp->fullIData(oldp+849,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0)),32);
    bufp->fullCData(oldp+850,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0))),4);
    bufp->fullBit(oldp+851,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                       << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)))));
    bufp->fullBit(oldp+852,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0))));
    bufp->fullBit(oldp+853,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0))));
    bufp->fullCData(oldp+854,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he10d6d01__0))),4);
    bufp->fullIData(oldp+855,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0)),32);
    bufp->fullCData(oldp+856,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf8ac29e2__0))),8);
    bufp->fullCData(oldp+857,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h9cbb9c75__0))),3);
    bufp->fullCData(oldp+858,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc2b2e256__0))),2);
    bufp->fullBit(oldp+859,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0))));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+861,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+863,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+865,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+881,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+882,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+883,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+884,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+885,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+886,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+887,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+890,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+891,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+892,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+893,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+898,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+900,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+901,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WREADY));
    bufp->fullIData(oldp+909,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+910,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+911,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+912,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+913,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_ha6afd63c__0) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+914,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf8ac29e2__0) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+915,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h827cdd7a__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+916,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he10d6d01__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+917,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf391cef2__0) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+918,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h9cbb9c75__0) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+919,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h959727d0__0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+920,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc2b2e256__0) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+921,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf7188004__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+922,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+923,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+924,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+925,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+926,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                        << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)) 
                                   >> 1U))));
    bufp->fullIData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata),32);
    bufp->fullIData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullIData(oldp+946,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+947,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+955,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+956,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+957,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+958,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+959,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+960,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+965,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+966,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+967,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+968,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+975,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+980,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+983,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+984,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+985,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+986,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+987,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+988,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+989,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+990,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+991,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+992,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+993,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+994,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+995,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+996,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+997,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+998,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+999,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+1000,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1001,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1002,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1003,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1004,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1005,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1006,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1007,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1008,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1009,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1010,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1011,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1012,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1013,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1014,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1015,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1016,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1024,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1053,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1054,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1076,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1077,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1078,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1079,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1080,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1081,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1082,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1083,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1084,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1085,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1086,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1087,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1088,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1089,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1090,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1091,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1092,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1093,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1094,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1095,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1096,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1097,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1098,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1099,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1100,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1101,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1102,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1103,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1104,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1105,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1106,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1107,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1129,(vlSelf->clock));
    bufp->fullBit(oldp+1130,(vlSelf->reset));
    bufp->fullSData(oldp+1131,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1132,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1133,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1134,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1135,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1136,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1137,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1138,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1139,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1140,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1141,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1142,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1143,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1144,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1145,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1146,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1147,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1148,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1149,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1150,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1152,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1154,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1155,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1156,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1157,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1158,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullIData(oldp+1159,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullBit(oldp+1160,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_DONE));
    bufp->fullIData(oldp+1162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
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
    bufp->fullIData(oldp+1163,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullBit(oldp+1165,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                     : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullIData(oldp+1166,((((- (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready)))) 
                                 & ((- (IData)((0xa0000048U 
                                                == (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0 
                                                            >> 0x20U))))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                                | ((- (IData)((0xa000004cU 
                                               == (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0 
                                                           >> 0x20U))))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullBit(oldp+1167,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1168,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1171,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1175,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1177,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1180,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1182,(1U),3);
    bufp->fullBit(oldp+1183,(0U));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1193,(1U));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1195,(0U),4);
    bufp->fullIData(oldp+1196,(0U),32);
    bufp->fullCData(oldp+1197,(0U),8);
    bufp->fullCData(oldp+1198,(0U),3);
    bufp->fullCData(oldp+1199,(0U),2);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1210,(0U),32);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST));
    bufp->fullCData(oldp+1212,(1U),2);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+1215,(2U),2);
    bufp->fullCData(oldp+1216,(3U),2);
    bufp->fullCData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_wsize),3);
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rsize),3);
    bufp->fullBit(oldp+1219,(0U));
    bufp->fullBit(oldp+1220,(1U));
    bufp->fullIData(oldp+1221,(5U),32);
    bufp->fullIData(oldp+1222,(0x20U),32);
    bufp->fullIData(oldp+1223,(0xa0000048U),32);
    bufp->fullIData(oldp+1224,(0xa000004cU),32);
    bufp->fullIData(oldp+1225,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1226,(0x1800U),32);
    bufp->fullIData(oldp+1227,(0x79737978U),32);
    bufp->fullCData(oldp+1228,(4U),3);
    bufp->fullCData(oldp+1229,(0x15U),8);
    bufp->fullCData(oldp+1230,(0xebU),8);
    bufp->fullCData(oldp+1231,(0x38U),8);
    bufp->fullIData(oldp+1232,(0x64U),32);
    bufp->fullIData(oldp+1233,(0x18U),32);
    bufp->fullIData(oldp+1234,(9U),32);
    bufp->fullIData(oldp+1235,(2U),32);
    bufp->fullIData(oldp+1236,(4U),32);
    bufp->fullIData(oldp+1237,(0xdU),32);
    bufp->fullIData(oldp+1238,(0x2000U),32);
    bufp->fullIData(oldp+1239,(0x2710U),32);
    bufp->fullIData(oldp+1240,(0x30cU),32);
    bufp->fullCData(oldp+1241,(7U),4);
    bufp->fullCData(oldp+1242,(3U),4);
    bufp->fullCData(oldp+1243,(5U),4);
    bufp->fullCData(oldp+1244,(4U),4);
    bufp->fullCData(oldp+1245,(6U),4);
    bufp->fullCData(oldp+1246,(2U),4);
    bufp->fullCData(oldp+1247,(1U),4);
    bufp->fullSData(oldp+1248,(0x21U),13);
    bufp->fullCData(oldp+1249,(8U),4);
    bufp->fullCData(oldp+1250,(9U),4);
    bufp->fullIData(oldp+1251,(0xaU),32);
    bufp->fullIData(oldp+1252,(0x10U),32);
    bufp->fullIData(oldp+1253,(6U),32);
    bufp->fullIData(oldp+1254,(0x11U),32);
    bufp->fullIData(oldp+1255,(0x30000000U),32);
    bufp->fullIData(oldp+1256,(0x3fffffffU),32);
    bufp->fullIData(oldp+1257,(8U),32);
    bufp->fullCData(oldp+1258,(2U),3);
    bufp->fullCData(oldp+1259,(3U),3);
    bufp->fullCData(oldp+1260,(5U),3);
    bufp->fullCData(oldp+1261,(6U),3);
    bufp->fullCData(oldp+1262,(7U),3);
    bufp->fullIData(oldp+1263,(1U),32);
    bufp->fullCData(oldp+1264,(0xaU),4);
    bufp->fullIData(oldp+1265,(0xbU),32);
}
