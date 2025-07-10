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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBus(c+1227,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1228,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1229,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1230,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1231,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1232,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1233,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1234,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1235,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1236,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1237,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1238,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1239,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1240,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1241,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1242,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1243,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1244,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1245,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1246,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBus(c+1227,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1228,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1229,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1230,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1231,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1232,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1233,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1234,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1235,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1236,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1237,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1238,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1239,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1240,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1241,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1242,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1243,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1244,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1245,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1246,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+427,"spi_sck", false,-1);
    tracep->declBus(c+428,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+763,"spi_mosi", false,-1);
    tracep->declBit(c+1247,"spi_miso", false,-1);
    tracep->declBit(c+1245,"uart_rx", false,-1);
    tracep->declBit(c+1246,"uart_tx", false,-1);
    tracep->declBit(c+1221,"psram_sck", false,-1);
    tracep->declBit(c+1222,"psram_ce_n", false,-1);
    tracep->declBus(c+1248,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1249,"sdram_clk", false,-1);
    tracep->declBit(c+429,"sdram_cke", false,-1);
    tracep->declBit(c+764,"sdram_cs", false,-1);
    tracep->declBit(c+765,"sdram_ras", false,-1);
    tracep->declBit(c+766,"sdram_cas", false,-1);
    tracep->declBit(c+767,"sdram_we", false,-1);
    tracep->declBus(c+768,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+769,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+430,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+793,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1227,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1228,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1229,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1230,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1231,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1232,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1233,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1234,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1235,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1236,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1237,"ps2_clk", false,-1);
    tracep->declBit(c+1238,"ps2_data", false,-1);
    tracep->declBus(c+1239,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1240,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1241,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1242,"vga_hsync", false,-1);
    tracep->declBit(c+1243,"vga_vsync", false,-1);
    tracep->declBit(c+1244,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBus(c+898,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+899,"in_psel", false,-1);
    tracep->declBit(c+17,"in_penable", false,-1);
    tracep->declBus(c+1276,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+900,"in_pwrite", false,-1);
    tracep->declBus(c+901,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1113,"in_pready", false,-1);
    tracep->declBus(c+1114,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+903,"in_pslverr", false,-1);
    tracep->declBus(c+898,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+899,"out_psel", false,-1);
    tracep->declBit(c+17,"out_penable", false,-1);
    tracep->declBus(c+1276,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+900,"out_pwrite", false,-1);
    tracep->declBus(c+901,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1113,"out_pready", false,-1);
    tracep->declBus(c+1114,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+903,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+899,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+17,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+900,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+898,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1276,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1113,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+903,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1114,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+904,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+416,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+900,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+898,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1276,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+431,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1277,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+432,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+905,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+417,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+900,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+906,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1276,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1278,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1279,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1280,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+907,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+418,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+900,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+908,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1276,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1281,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1282,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1283,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+909,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+419,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+900,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+908,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1276,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1284,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1285,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1286,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+910,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+420,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+900,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+898,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1276,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1250,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1277,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+18,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+911,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+912,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+900,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+908,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1276,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+913,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1277,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1079,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+914,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+915,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+900,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+906,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1276,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1251,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1277,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1115,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+916,"sel_0", false,-1);
    tracep->declBit(c+917,"sel_1", false,-1);
    tracep->declBit(c+918,"sel_2", false,-1);
    tracep->declBit(c+919,"sel_3", false,-1);
    tracep->declBit(c+920,"sel_4", false,-1);
    tracep->declBit(c+921,"sel_5", false,-1);
    tracep->declBit(c+922,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+923,"auto_in_awready", false,-1);
    tracep->declBit(c+924,"auto_in_awvalid", false,-1);
    tracep->declBus(c+925,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+926,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+927,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+923,"auto_in_wready", false,-1);
    tracep->declBit(c+928,"auto_in_wvalid", false,-1);
    tracep->declBus(c+929,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+930,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1116,"auto_in_bready", false,-1);
    tracep->declBit(c+1117,"auto_in_bvalid", false,-1);
    tracep->declBus(c+19,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+931,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+932,"auto_in_arready", false,-1);
    tracep->declBit(c+933,"auto_in_arvalid", false,-1);
    tracep->declBus(c+934,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+935,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+936,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1118,"auto_in_rready", false,-1);
    tracep->declBit(c+1119,"auto_in_rvalid", false,-1);
    tracep->declBus(c+20,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+422,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+931,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+899,"auto_out_psel", false,-1);
    tracep->declBit(c+17,"auto_out_penable", false,-1);
    tracep->declBit(c+900,"auto_out_pwrite", false,-1);
    tracep->declBus(c+898,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+901,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1113,"auto_out_pready", false,-1);
    tracep->declBit(c+903,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1114,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+17,"nodeOut_penable", false,-1);
    tracep->declBus(c+21,"state", false,-1, 1,0);
    tracep->declBit(c+932,"accept_read", false,-1);
    tracep->declBit(c+923,"accept_write", false,-1);
    tracep->declBit(c+22,"is_write_r", false,-1);
    tracep->declBit(c+900,"is_write", false,-1);
    tracep->declBus(c+20,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+19,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+23,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+24,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+25,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+26,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+937,"resp", false,-1, 1,0);
    tracep->declBus(c+27,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+931,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1119,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+28,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1117,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+796,"auto_in_awready", false,-1);
    tracep->declBit(c+938,"auto_in_awvalid", false,-1);
    tracep->declBus(c+939,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+940,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+942,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+943,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_in_wready", false,-1);
    tracep->declBit(c+944,"auto_in_wvalid", false,-1);
    tracep->declBus(c+945,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"auto_in_wlast", false,-1);
    tracep->declBit(c+948,"auto_in_bready", false,-1);
    tracep->declBit(c+1120,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1121,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_in_arready", false,-1);
    tracep->declBit(c+949,"auto_in_arvalid", false,-1);
    tracep->declBus(c+950,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+953,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+954,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+955,"auto_in_rready", false,-1);
    tracep->declBit(c+1122,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1123,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_in_rlast", false,-1);
    tracep->declBit(c+1124,"auto_out_awready", false,-1);
    tracep->declBit(c+956,"auto_out_awvalid", false,-1);
    tracep->declBus(c+925,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+926,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+927,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+957,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1125,"auto_out_wready", false,-1);
    tracep->declBit(c+958,"auto_out_wvalid", false,-1);
    tracep->declBus(c+929,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+930,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+959,"auto_out_wlast", false,-1);
    tracep->declBit(c+1126,"auto_out_bready", false,-1);
    tracep->declBit(c+1127,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1121,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1128,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1129,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1130,"auto_out_arready", false,-1);
    tracep->declBit(c+960,"auto_out_arvalid", false,-1);
    tracep->declBus(c+934,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+935,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+936,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+961,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+955,"auto_out_rready", false,-1);
    tracep->declBit(c+1122,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1123,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+426,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1131,"auto_out_rlast", false,-1);
    tracep->declBit(c+958,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+31,"w_idle", false,-1);
    tracep->declBit(c+1132,"in_awready", false,-1);
    tracep->declBit(c+32,"busy", false,-1);
    tracep->declBus(c+33,"r_addr", false,-1, 31,0);
    tracep->declBus(c+34,"r_len", false,-1, 7,0);
    tracep->declBus(c+962,"len", false,-1, 7,0);
    tracep->declBus(c+963,"addr", false,-1, 31,0);
    tracep->declBit(c+35,"busy_1", false,-1);
    tracep->declBus(c+36,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+37,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+964,"len_1", false,-1, 7,0);
    tracep->declBus(c+965,"addr_1", false,-1, 31,0);
    tracep->declBit(c+38,"wbeats_latched", false,-1);
    tracep->declBit(c+956,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+966,"wbeats_valid", false,-1);
    tracep->declBus(c+39,"w_counter", false,-1, 8,0);
    tracep->declBus(c+967,"w_todo", false,-1, 8,0);
    tracep->declBit(c+959,"w_last", false,-1);
    tracep->declBit(c+1126,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+30,"io_enq_ready", false,-1);
    tracep->declBit(c+949,"io_enq_valid", false,-1);
    tracep->declBus(c+950,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+951,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+952,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+953,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+954,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1133,"io_deq_ready", false,-1);
    tracep->declBit(c+960,"io_deq_valid", false,-1);
    tracep->declBus(c+934,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+968,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+969,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+936,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+970,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+56,"ram", false,-1, 48,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+960,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1134,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+796,"io_enq_ready", false,-1);
    tracep->declBit(c+938,"io_enq_valid", false,-1);
    tracep->declBus(c+939,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+940,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+941,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+942,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+943,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1135,"io_deq_ready", false,-1);
    tracep->declBit(c+971,"io_deq_valid", false,-1);
    tracep->declBus(c+925,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+972,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+973,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+927,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+974,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+59,"ram", false,-1, 48,0);
    tracep->declBit(c+797,"full", false,-1);
    tracep->declBit(c+971,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1136,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+29,"io_enq_ready", false,-1);
    tracep->declBit(c+944,"io_enq_valid", false,-1);
    tracep->declBus(c+945,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+946,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+947,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1137,"io_deq_ready", false,-1);
    tracep->declBit(c+975,"io_deq_valid", false,-1);
    tracep->declBus(c+929,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+930,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+421,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+61,"ram", false,-1, 36,0);
    tracep->declBit(c+63,"full", false,-1);
    tracep->declBit(c+975,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1138,"do_enq", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+1139,"auto_in_awready", false,-1);
    tracep->declBit(c+976,"auto_in_awvalid", false,-1);
    tracep->declBus(c+925,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+977,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1080,"auto_in_wready", false,-1);
    tracep->declBit(c+978,"auto_in_wvalid", false,-1);
    tracep->declBus(c+929,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+930,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1140,"auto_in_bready", false,-1);
    tracep->declBit(c+64,"auto_in_bvalid", false,-1);
    tracep->declBus(c+65,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1141,"auto_in_arready", false,-1);
    tracep->declBit(c+979,"auto_in_arvalid", false,-1);
    tracep->declBus(c+934,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1142,"auto_in_rready", false,-1);
    tracep->declBit(c+67,"auto_in_rvalid", false,-1);
    tracep->declBus(c+68,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+69,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+70,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1141,"nodeIn_arready", false,-1);
    tracep->declBit(c+1139,"nodeIn_awready", false,-1);
    tracep->declBit(c+981,"w_sel0", false,-1);
    tracep->declBit(c+64,"w_full", false,-1);
    tracep->declBus(c+65,"w_id", false,-1, 3,0);
    tracep->declBit(c+71,"r_sel1", false,-1);
    tracep->declBit(c+72,"w_sel1", false,-1);
    tracep->declBit(c+67,"r_full", false,-1);
    tracep->declBus(c+68,"r_id", false,-1, 3,0);
    tracep->declBit(c+1143,"ren", false,-1);
    tracep->declBit(c+73,"rdata_REG", false,-1);
    tracep->declBus(c+74,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+75,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+76,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+77,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+982,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1143,"R0_en", false,-1);
    tracep->declBit(c+1225,"R0_clk", false,-1);
    tracep->declBus(c+78,"R0_data", false,-1, 31,0);
    tracep->declBus(c+983,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1144,"W0_en", false,-1);
    tracep->declBit(c+1225,"W0_clk", false,-1);
    tracep->declBus(c+929,"W0_data", false,-1, 31,0);
    tracep->declBus(c+930,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+796,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+938,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+939,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+940,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+942,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+943,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+944,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+948,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1120,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1121,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+949,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+950,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+953,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+954,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+955,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1122,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1123,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+796,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+938,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+939,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+940,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+942,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+943,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+944,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+948,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1120,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1121,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+949,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+950,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+953,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+954,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+955,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1122,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1123,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+1145,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+984,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+925,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+926,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+927,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1125,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+958,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+929,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+930,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+959,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1126,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1127,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1121,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1128,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1146,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+985,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+934,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+935,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+936,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+955,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1122,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1123,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1131,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1139,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+976,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+925,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+977,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1080,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+978,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+929,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+930,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1140,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+64,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+65,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1141,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+979,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+934,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1142,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+67,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+68,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+69,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+70,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+986,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+987,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+79,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+988,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+934,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+989,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1253,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+80,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+81,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+923,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+924,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+925,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+926,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+927,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+923,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+928,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+929,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+930,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1116,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1117,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+19,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+931,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+932,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+933,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+934,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+935,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+936,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1118,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1119,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+20,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+422,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+931,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1127,"in_0_bvalid", false,-1);
    tracep->declBit(c+1122,"in_0_rvalid", false,-1);
    tracep->declBit(c+1147,"in_0_wready", false,-1);
    tracep->declBit(c+1148,"in_0_awready", false,-1);
    tracep->declBit(c+1146,"in_0_arready", false,-1);
    tracep->declBit(c+1145,"anonIn_awready", false,-1);
    tracep->declBit(c+990,"requestARIO_0_0", false,-1);
    tracep->declBit(c+991,"requestARIO_0_1", false,-1);
    tracep->declBit(c+992,"requestARIO_0_2", false,-1);
    tracep->declBit(c+993,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+994,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+995,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+996,"arSel", false,-1, 15,0);
    tracep->declBus(c+997,"awSel", false,-1, 15,0);
    tracep->declBus(c+1149,"rSel", false,-1, 15,0);
    tracep->declBus(c+1150,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+998,"in_0_awvalid", false,-1);
    tracep->declBit(c+999,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1000,"in_0_wvalid", false,-1);
    tracep->declBit(c+116,"idle_3", false,-1);
    tracep->declBit(c+1151,"anyValid", false,-1);
    tracep->declBus(c+1152,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+117,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1153,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1154,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1155,"prefixOR_1", false,-1);
    tracep->declBit(c+1156,"winner_3_1", false,-1);
    tracep->declBit(c+1157,"winner_3_2", false,-1);
    tracep->declBit(c+118,"state_3_0", false,-1);
    tracep->declBit(c+119,"state_3_1", false,-1);
    tracep->declBit(c+120,"state_3_2", false,-1);
    tracep->declBit(c+1158,"muxState_3_0", false,-1);
    tracep->declBit(c+1159,"muxState_3_1", false,-1);
    tracep->declBit(c+1160,"muxState_3_2", false,-1);
    tracep->declBit(c+121,"idle_4", false,-1);
    tracep->declBit(c+1161,"anyValid_1", false,-1);
    tracep->declBus(c+1162,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+122,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1163,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1164,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1165,"winner_4_0", false,-1);
    tracep->declBit(c+1166,"winner_4_2", false,-1);
    tracep->declBit(c+123,"state_4_0", false,-1);
    tracep->declBit(c+124,"state_4_2", false,-1);
    tracep->declBit(c+1167,"muxState_4_0", false,-1);
    tracep->declBit(c+1168,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+125,"io_enq_ready", false,-1);
    tracep->declBit(c+999,"io_enq_valid", false,-1);
    tracep->declBus(c+1001,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1169,"io_deq_ready", false,-1);
    tracep->declBit(c+1002,"io_deq_valid", false,-1);
    tracep->declBus(c+1003,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+126,"wrap", false,-1);
    tracep->declBit(c+127,"wrap_1", false,-1);
    tracep->declBit(c+128,"maybe_full", false,-1);
    tracep->declBit(c+129,"ptr_match", false,-1);
    tracep->declBit(c+130,"empty", false,-1);
    tracep->declBit(c+131,"full", false,-1);
    tracep->declBit(c+1002,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1170,"do_deq", false,-1);
    tracep->declBit(c+1171,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+127,"R0_addr", false,-1);
    tracep->declBit(c+1287,"R0_en", false,-1);
    tracep->declBit(c+1225,"R0_clk", false,-1);
    tracep->declBus(c+132,"R0_data", false,-1, 2,0);
    tracep->declBit(c+126,"W0_addr", false,-1);
    tracep->declBit(c+1171,"W0_en", false,-1);
    tracep->declBit(c+1225,"W0_clk", false,-1);
    tracep->declBus(c+1001,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+1124,"auto_in_awready", false,-1);
    tracep->declBit(c+956,"auto_in_awvalid", false,-1);
    tracep->declBus(c+925,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+926,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+927,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+957,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1125,"auto_in_wready", false,-1);
    tracep->declBit(c+958,"auto_in_wvalid", false,-1);
    tracep->declBus(c+929,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+930,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+959,"auto_in_wlast", false,-1);
    tracep->declBit(c+1126,"auto_in_bready", false,-1);
    tracep->declBit(c+1127,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1121,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1128,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1129,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1130,"auto_in_arready", false,-1);
    tracep->declBit(c+960,"auto_in_arvalid", false,-1);
    tracep->declBus(c+934,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+935,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+936,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+961,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+955,"auto_in_rready", false,-1);
    tracep->declBit(c+1122,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1123,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+426,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1131,"auto_in_rlast", false,-1);
    tracep->declBit(c+1145,"auto_out_awready", false,-1);
    tracep->declBit(c+984,"auto_out_awvalid", false,-1);
    tracep->declBus(c+925,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+926,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+927,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1125,"auto_out_wready", false,-1);
    tracep->declBit(c+958,"auto_out_wvalid", false,-1);
    tracep->declBus(c+929,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+930,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+959,"auto_out_wlast", false,-1);
    tracep->declBit(c+1126,"auto_out_bready", false,-1);
    tracep->declBit(c+1127,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1121,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1128,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1146,"auto_out_arready", false,-1);
    tracep->declBit(c+985,"auto_out_arvalid", false,-1);
    tracep->declBus(c+934,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+935,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+936,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+955,"auto_out_rready", false,-1);
    tracep->declBit(c+1122,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1123,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1131,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+135,"io_enq_ready", false,-1);
    tracep->declBit(c+1081,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1172,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+139,"io_enq_ready", false,-1);
    tracep->declBit(c+1082,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1173,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+143,"io_enq_ready", false,-1);
    tracep->declBit(c+1083,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1174,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1084,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1175,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+151,"io_enq_ready", false,-1);
    tracep->declBit(c+1085,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1176,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+155,"io_enq_ready", false,-1);
    tracep->declBit(c+1086,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1177,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+159,"io_enq_ready", false,-1);
    tracep->declBit(c+1087,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1178,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+163,"io_enq_ready", false,-1);
    tracep->declBit(c+1088,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1179,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+167,"io_enq_ready", false,-1);
    tracep->declBit(c+1089,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1180,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+171,"io_enq_ready", false,-1);
    tracep->declBit(c+1090,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1181,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+175,"io_enq_ready", false,-1);
    tracep->declBit(c+1091,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1182,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+179,"io_enq_ready", false,-1);
    tracep->declBit(c+1092,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1183,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+183,"io_enq_ready", false,-1);
    tracep->declBit(c+1093,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1184,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+187,"io_enq_ready", false,-1);
    tracep->declBit(c+1094,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1185,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+191,"io_enq_ready", false,-1);
    tracep->declBit(c+1095,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1186,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+195,"io_enq_ready", false,-1);
    tracep->declBit(c+1096,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1187,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+199,"io_enq_ready", false,-1);
    tracep->declBit(c+1097,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1188,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1098,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1189,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+207,"io_enq_ready", false,-1);
    tracep->declBit(c+1099,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1190,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+1100,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1191,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+215,"io_enq_ready", false,-1);
    tracep->declBit(c+1101,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1192,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+1102,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1193,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+1103,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1194,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+1104,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1195,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+1105,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1196,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+1106,"io_enq_valid", false,-1);
    tracep->declBit(c+957,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1197,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+239,"io_enq_ready", false,-1);
    tracep->declBit(c+1107,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1198,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+1108,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1199,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+1109,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1200,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+251,"io_enq_ready", false,-1);
    tracep->declBit(c+1110,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1201,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+1111,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1202,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+1112,"io_enq_valid", false,-1);
    tracep->declBit(c+961,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1203,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+796,"auto_master_out_awready", false,-1);
    tracep->declBit(c+938,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+939,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+940,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+941,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+942,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+943,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_master_out_wready", false,-1);
    tracep->declBit(c+944,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+945,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+948,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1120,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1121,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_master_out_arready", false,-1);
    tracep->declBit(c+949,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+950,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+953,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+954,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+955,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1122,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1123,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+1277,"io_interrupt", false,-1);
    tracep->declBit(c+796,"io_master_awready", false,-1);
    tracep->declBit(c+938,"io_master_awvalid", false,-1);
    tracep->declBus(c+939,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+940,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+941,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+942,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+943,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"io_master_wready", false,-1);
    tracep->declBit(c+944,"io_master_wvalid", false,-1);
    tracep->declBus(c+945,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"io_master_wlast", false,-1);
    tracep->declBit(c+948,"io_master_bready", false,-1);
    tracep->declBit(c+1120,"io_master_bvalid", false,-1);
    tracep->declBus(c+1121,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+423,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"io_master_arready", false,-1);
    tracep->declBit(c+949,"io_master_arvalid", false,-1);
    tracep->declBus(c+950,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+951,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+952,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+953,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+954,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+955,"io_master_rready", false,-1);
    tracep->declBit(c+1122,"io_master_rvalid", false,-1);
    tracep->declBus(c+1123,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+424,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1252,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"io_master_rlast", false,-1);
    tracep->declBit(c+1288,"io_slave_awready", false,-1);
    tracep->declBit(c+1277,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1289,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1290,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1291,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1292,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1293,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1294,"io_slave_wready", false,-1);
    tracep->declBit(c+1277,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1290,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1289,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1277,"io_slave_wlast", false,-1);
    tracep->declBit(c+1277,"io_slave_bready", false,-1);
    tracep->declBit(c+1295,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1296,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1297,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1298,"io_slave_arready", false,-1);
    tracep->declBit(c+1277,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1289,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1290,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1291,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1292,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1293,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1277,"io_slave_rready", false,-1);
    tracep->declBit(c+1299,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1300,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1301,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1302,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1303,"io_slave_rlast", false,-1);
    tracep->declBit(c+263,"DIFFTEST", false,-1);
    tracep->declBus(c+798,"pc", false,-1, 31,0);
    tracep->declBus(c+799,"dnpc", false,-1, 31,0);
    tracep->declBit(c+800,"PCU_VALID", false,-1);
    tracep->declBit(c+801,"IFU_READY", false,-1);
    tracep->declBus(c+802,"inst", false,-1, 31,0);
    tracep->declBit(c+803,"IFU_VALID", false,-1);
    tracep->declBit(c+804,"IDU_READY", false,-1);
    tracep->declBus(c+1304,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1304,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+805,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1254,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1289,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1291,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+264,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1289,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+879,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+265,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+880,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1292,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+266,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1293,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+267,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+407,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+408,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1277,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+873,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1277,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+1255,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+881,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+1277,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+806,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+874,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1204,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+807,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1305,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+409,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+808,"IDU_VALID", false,-1);
    tracep->declBit(c+809,"EXU_READY", false,-1);
    tracep->declBus(c+810,"op", false,-1, 6,0);
    tracep->declBus(c+268,"rd", false,-1, 4,0);
    tracep->declBus(c+811,"funct3", false,-1, 2,0);
    tracep->declBus(c+269,"rs1", false,-1, 4,0);
    tracep->declBus(c+270,"rs2", false,-1, 4,0);
    tracep->declBus(c+271,"imm", false,-1, 31,0);
    tracep->declBus(c+272,"funct7", false,-1, 6,0);
    tracep->declBus(c+273,"shamt", false,-1, 4,0);
    tracep->declBit(c+812,"sram_lsu_read", false,-1);
    tracep->declBit(c+813,"sram_lsu_write", false,-1);
    tracep->declBit(c+1256,"LSU_DONE", false,-1);
    tracep->declBit(c+274,"EXU_VALID", false,-1);
    tracep->declBit(c+275,"WBU_READY", false,-1);
    tracep->declBus(c+276,"res", false,-1, 31,0);
    tracep->declBit(c+814,"ls_valid", false,-1);
    tracep->declBit(c+815,"ls_wen", false,-1);
    tracep->declBus(c+816,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+398,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+817,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+818,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+819,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+820,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1291,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1306,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1306,"ls_arburst", false,-1, 1,0);
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
    tracep->declBus(c+734,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+735,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1257,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+736,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1258,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+875,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+737,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+738,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1307,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+882,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1308,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+883,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+739,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+740,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+741,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+742,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+410,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+411,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+743,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+876,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+744,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+1004,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1205,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+745,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+746,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+877,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1206,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+747,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+748,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+412,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+1005,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1006,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1007,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+821,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1008,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1009,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1010,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1011,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+822,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1012,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+823,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1013,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1014,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1015,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1016,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+824,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+825,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1017,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+826,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1018,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+827,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+828,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+1019,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+1020,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+829,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+830,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+1021,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+1022,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+831,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+832,"wbu_done", false,-1);
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
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+812,"sram_lsu_read", false,-1);
    tracep->declBit(c+813,"sram_lsu_write", false,-1);
    tracep->declBit(c+1256,"LSU_DONE", false,-1);
    tracep->declBit(c+808,"IDU_VALID", false,-1);
    tracep->declBit(c+809,"EXU_READY", false,-1);
    tracep->declBit(c+274,"EXU_VALID", false,-1);
    tracep->declBit(c+275,"WBU_READY", false,-1);
    tracep->declBus(c+810,"op", false,-1, 6,0);
    tracep->declBus(c+811,"funct3", false,-1, 2,0);
    tracep->declBus(c+271,"imm", false,-1, 31,0);
    tracep->declBus(c+272,"funct7", false,-1, 6,0);
    tracep->declBus(c+273,"shamt", false,-1, 4,0);
    tracep->declBus(c+301,"r1", false,-1, 31,0);
    tracep->declBus(c+302,"r2", false,-1, 31,0);
    tracep->declBus(c+276,"res_reg", false,-1, 31,0);
    tracep->declBit(c+814,"ls_valid", false,-1);
    tracep->declBit(c+815,"ls_wen", false,-1);
    tracep->declBus(c+816,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+398,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+817,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+818,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+819,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+820,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1291,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1306,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1306,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+734,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+798,"pc", false,-1, 31,0);
    tracep->declBus(c+799,"dnpc_reg", false,-1, 31,0);
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
    tracep->declBit(c+809,"exu_ready", false,-1);
    tracep->declBit(c+274,"exu_valid", false,-1);
    tracep->declBus(c+1293,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1306,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1309,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+1310,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+833,"state", false,-1, 1,0);
    tracep->declBus(c+1259,"next_state", false,-1, 1,0);
    tracep->declBus(c+305,"s_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+834,"a", false,-1, 31,0);
    tracep->declBus(c+835,"b", false,-1, 31,0);
    tracep->declBus(c+836,"res", false,-1, 31,0);
    tracep->declBus(c+837,"csr", false,-1, 31,0);
    tracep->declBus(c+838,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+839,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+838,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+399,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+838,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+1023,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+1311,"ls_wsize", false,-1, 2,0);
    tracep->declBus(c+1312,"ls_rsize", false,-1, 2,0);
    tracep->declBus(c+840,"dnpc", false,-1, 31,0);
    tracep->declBus(c+271,"offset", false,-1, 31,0);
    tracep->declBit(c+841,"jalen", false,-1);
    tracep->declBit(c+842,"jalren", false,-1);
    tracep->declBit(c+400,"beqen", false,-1);
    tracep->declBit(c+401,"bneen", false,-1);
    tracep->declBit(c+402,"blten", false,-1);
    tracep->declBit(c+403,"bgeen", false,-1);
    tracep->declBit(c+404,"bltuen", false,-1);
    tracep->declBit(c+405,"bgeuen", false,-1);
    tracep->declBit(c+843,"ecall_en", false,-1);
    tracep->declBit(c+406,"mret_en", false,-1);
    tracep->declBit(c+844,"gpr_wen", false,-1);
    tracep->declBit(c+845,"mepc_wen", false,-1);
    tracep->declBit(c+846,"mstatus_wen", false,-1);
    tracep->declBit(c+847,"mcause_wen", false,-1);
    tracep->declBit(c+848,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+802,"inst", false,-1, 31,0);
    tracep->declBit(c+803,"IFU_VALID", false,-1);
    tracep->declBit(c+804,"IDU_READY", false,-1);
    tracep->declBit(c+808,"IDU_VALID", false,-1);
    tracep->declBit(c+809,"EXU_READY", false,-1);
    tracep->declBus(c+810,"op_reg", false,-1, 6,0);
    tracep->declBus(c+268,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+811,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+269,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+270,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+271,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+272,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+273,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+849,"op", false,-1, 6,0);
    tracep->declBus(c+850,"rd", false,-1, 4,0);
    tracep->declBus(c+851,"funct3", false,-1, 2,0);
    tracep->declBus(c+852,"rs1", false,-1, 4,0);
    tracep->declBus(c+853,"rs2", false,-1, 4,0);
    tracep->declBus(c+854,"immI", false,-1, 31,0);
    tracep->declBus(c+855,"immU", false,-1, 31,0);
    tracep->declBus(c+856,"immS", false,-1, 31,0);
    tracep->declBus(c+857,"immB", false,-1, 31,0);
    tracep->declBus(c+858,"immJ", false,-1, 31,0);
    tracep->declBus(c+859,"imm", false,-1, 31,0);
    tracep->declBus(c+860,"funct7", false,-1, 6,0);
    tracep->declBus(c+861,"shamt", false,-1, 4,0);
    tracep->declBit(c+804,"idu_ready", false,-1);
    tracep->declBit(c+808,"idu_valid", false,-1);
    tracep->declBus(c+1313,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1314,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+862,"state", false,-1);
    tracep->declBit(c+2,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+798,"pc", false,-1, 31,0);
    tracep->declBus(c+802,"inst", false,-1, 31,0);
    tracep->declBit(c+800,"PCU_VALID", false,-1);
    tracep->declBit(c+801,"IFU_READY", false,-1);
    tracep->declBit(c+803,"IFU_VALID", false,-1);
    tracep->declBit(c+804,"IDU_READY", false,-1);
    tracep->declBit(c+832,"wbu_done", false,-1);
    tracep->declBit(c+873,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+1277,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1289,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1304,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1291,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1292,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1293,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1255,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+1277,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1304,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1289,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1305,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+1277,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+881,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+879,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+407,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+874,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+806,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+265,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+805,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+264,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+266,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+267,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+807,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1204,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+880,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1254,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+408,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+409,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+801,"ifu_ready", false,-1);
    tracep->declBit(c+803,"ifu_valid", false,-1);
    tracep->declBus(c+1293,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1306,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1309,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1310,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+863,"current_state", false,-1, 1,0);
    tracep->declBus(c+3,"next_state", false,-1, 1,0);
    tracep->declBit(c+806,"axi_arvalid", false,-1);
    tracep->declBit(c+807,"axi_rready", false,-1);
    tracep->declBus(c+265,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+805,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+264,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+266,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+267,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1313,"SRAM_IDLE", false,-1, 0,0);
    tracep->declBus(c+1314,"SRAM_FETCH", false,-1, 0,0);
    tracep->declBit(c+864,"state", false,-1);
    tracep->declBit(c+865,"sram_start", false,-1);
    tracep->declBus(c+866,"inst_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+812,"sram_lsu_read", false,-1);
    tracep->declBit(c+813,"sram_lsu_write", false,-1);
    tracep->declBit(c+1256,"LSU_DONE", false,-1);
    tracep->declBus(c+734,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+814,"valid", false,-1);
    tracep->declBit(c+815,"wen", false,-1);
    tracep->declBus(c+816,"waddr", false,-1, 31,0);
    tracep->declBus(c+398,"wdata", false,-1, 31,0);
    tracep->declBus(c+817,"raddr", false,-1, 31,0);
    tracep->declBus(c+818,"wmask", false,-1, 3,0);
    tracep->declBus(c+819,"awsize", false,-1, 2,0);
    tracep->declBus(c+820,"arsize", false,-1, 2,0);
    tracep->declBus(c+1291,"awlen", false,-1, 7,0);
    tracep->declBus(c+1291,"arlen", false,-1, 7,0);
    tracep->declBus(c+1306,"awburst", false,-1, 1,0);
    tracep->declBus(c+1306,"arburst", false,-1, 1,0);
    tracep->declBit(c+876,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+743,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1307,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+735,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+737,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+739,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+741,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1004,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+744,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1257,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+875,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+748,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+745,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1205,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+882,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+410,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+877,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+746,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+1308,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+736,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+738,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+740,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+742,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+747,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1206,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+883,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1258,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+411,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+412,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+1293,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1306,"READ", false,-1, 1,0);
    tracep->declBus(c+1309,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1310,"DONE", false,-1, 1,0);
    tracep->declBus(c+749,"state", false,-1, 1,0);
    tracep->declBit(c+743,"axi_awvalid", false,-1);
    tracep->declBit(c+744,"axi_wvalid", false,-1);
    tracep->declBus(c+1307,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+735,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+750,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+737,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+741,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+751,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+745,"axi_bready", false,-1);
    tracep->declBit(c+748,"axi_wlast", false,-1);
    tracep->declBit(c+746,"axi_arvalid", false,-1);
    tracep->declBit(c+747,"axi_rready", false,-1);
    tracep->declBus(c+1308,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+736,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+738,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+740,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+742,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+798,"pc", false,-1, 31,0);
    tracep->declBus(c+799,"dnpc", false,-1, 31,0);
    tracep->declBit(c+800,"PCU_VALID", false,-1);
    tracep->declBit(c+801,"IFU_READY", false,-1);
    tracep->declBit(c+800,"pcu_valid", false,-1);
    tracep->declBus(c+1313,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1314,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+867,"state", false,-1);
    tracep->declBit(c+4,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1315,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1316,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
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
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+274,"EXU_VALID", false,-1);
    tracep->declBit(c+275,"WBU_READY", false,-1);
    tracep->declBit(c+832,"wbu_done", false,-1);
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
    tracep->declBus(c+1293,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1306,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1309,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1310,"NULL", false,-1, 1,0);
    tracep->declBus(c+868,"state", false,-1, 1,0);
    tracep->declBus(c+5,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+873,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1277,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1289,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1304,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1291,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1292,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1293,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1255,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1277,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1304,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1289,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1305,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1277,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+881,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+879,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+407,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+874,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+806,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+265,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+805,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+264,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+266,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+267,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+807,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1204,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+880,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1254,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+408,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+409,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+876,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+743,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1307,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+735,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+737,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+739,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+741,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1004,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+744,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1257,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+875,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+748,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+745,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1205,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+882,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+410,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+877,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+746,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1308,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+736,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+738,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+740,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+742,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+747,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1206,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+883,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1258,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+411,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+412,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+796,"io_master_awready", false,-1);
    tracep->declBit(c+938,"io_master_awvalid", false,-1);
    tracep->declBus(c+939,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+940,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+941,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+942,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+943,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"io_master_wready", false,-1);
    tracep->declBit(c+944,"io_master_wvalid", false,-1);
    tracep->declBus(c+945,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+946,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+947,"io_master_wlast", false,-1);
    tracep->declBit(c+948,"io_master_bready", false,-1);
    tracep->declBit(c+1120,"io_master_bvalid", false,-1);
    tracep->declBus(c+1121,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+423,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"io_master_arready", false,-1);
    tracep->declBit(c+949,"io_master_arvalid", false,-1);
    tracep->declBus(c+950,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+951,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+952,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+953,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+954,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+955,"io_master_rready", false,-1);
    tracep->declBit(c+1122,"io_master_rvalid", false,-1);
    tracep->declBus(c+1123,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+424,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1252,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"io_master_rlast", false,-1);
    tracep->declBit(c+826,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1017,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1011,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1005,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1009,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1013,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1015,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+827,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1018,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1006,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1008,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1022,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1019,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+828,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+822,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+824,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+829,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1020,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1012,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1007,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1010,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1014,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1016,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1021,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+830,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+823,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+821,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+825,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+831,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+1024,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1025,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1026,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1207,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1027,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1028,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1029,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+869,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+884,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+870,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+885,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1030,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1031,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1032,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1033,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+413,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+414,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1034,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+878,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1035,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1260,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+886,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1036,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1037,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1038,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1208,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1039,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1040,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+415,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1293,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1306,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1309,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1310,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+871,"state", false,-1, 1,0);
    tracep->declBus(c+6,"next_state", false,-1, 1,0);
    tracep->declBus(c+1317,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1318,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1041,"sel_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1319,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1290,"din", false,-1, 31,0);
    tracep->declBus(c+304,"dout", false,-1, 31,0);
    tracep->declBit(c+1277,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1290,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+295,"din", false,-1, 31,0);
    tracep->declBus(c+281,"dout", false,-1, 31,0);
    tracep->declBit(c+299,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1290,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+293,"din", false,-1, 31,0);
    tracep->declBus(c+277,"dout", false,-1, 31,0);
    tracep->declBit(c+297,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1320,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+294,"din", false,-1, 31,0);
    tracep->declBus(c+279,"dout", false,-1, 31,0);
    tracep->declBit(c+298,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1290,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+296,"din", false,-1, 31,0);
    tracep->declBus(c+283,"dout", false,-1, 31,0);
    tracep->declBit(c+300,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1321,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1290,"din", false,-1, 31,0);
    tracep->declBus(c+303,"dout", false,-1, 31,0);
    tracep->declBit(c+1277,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+826,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1017,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1011,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1005,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1009,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1013,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1015,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+827,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1018,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1006,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1008,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1022,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1019,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+828,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+822,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+824,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+829,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1020,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1012,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1007,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1010,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1014,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1016,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1021,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+830,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+823,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+821,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+825,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+831,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+826,"axi_awready", false,-1);
    tracep->declBit(c+827,"axi_wready", false,-1);
    tracep->declBit(c+828,"axi_bvalid", false,-1);
    tracep->declBit(c+829,"axi_arready", false,-1);
    tracep->declBit(c+830,"axi_rvalid", false,-1);
    tracep->declBit(c+831,"axi_rlast", false,-1);
    tracep->declBus(c+824,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+825,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+822,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+823,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+821,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+872,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1317,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1318,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+338,"mtime", false,-1, 63,0);
    tracep->declBus(c+1261,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"io_d", false,-1);
    tracep->declBit(c+340,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"io_d", false,-1);
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
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+909,"auto_in_psel", false,-1);
    tracep->declBit(c+419,"auto_in_penable", false,-1);
    tracep->declBit(c+900,"auto_in_pwrite", false,-1);
    tracep->declBus(c+908,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1276,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1284,"auto_in_pready", false,-1);
    tracep->declBit(c+1285,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1286,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1227,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1228,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1229,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1230,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1231,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1232,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1233,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1234,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1235,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1236,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBus(c+1042,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+909,"in_psel", false,-1);
    tracep->declBit(c+419,"in_penable", false,-1);
    tracep->declBus(c+1276,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+900,"in_pwrite", false,-1);
    tracep->declBus(c+901,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1284,"in_pready", false,-1);
    tracep->declBus(c+1286,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1285,"in_pslverr", false,-1);
    tracep->declBus(c+1227,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1228,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1229,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1230,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1231,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1232,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1233,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1234,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1235,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1236,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+907,"auto_in_psel", false,-1);
    tracep->declBit(c+418,"auto_in_penable", false,-1);
    tracep->declBit(c+900,"auto_in_pwrite", false,-1);
    tracep->declBus(c+908,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1276,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1281,"auto_in_pready", false,-1);
    tracep->declBit(c+1282,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1283,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1237,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1238,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBus(c+1042,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+907,"in_psel", false,-1);
    tracep->declBit(c+418,"in_penable", false,-1);
    tracep->declBus(c+1276,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+900,"in_pwrite", false,-1);
    tracep->declBus(c+901,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1281,"in_pready", false,-1);
    tracep->declBus(c+1283,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1282,"in_pslverr", false,-1);
    tracep->declBit(c+1237,"ps2_clk", false,-1);
    tracep->declBit(c+1238,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+986,"auto_in_awvalid", false,-1);
    tracep->declBit(c+987,"auto_in_wvalid", false,-1);
    tracep->declBit(c+79,"auto_in_arready", false,-1);
    tracep->declBit(c+988,"auto_in_arvalid", false,-1);
    tracep->declBus(c+934,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+989,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1253,"auto_in_rready", false,-1);
    tracep->declBit(c+80,"auto_in_rvalid", false,-1);
    tracep->declBus(c+81,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+80,"state", false,-1);
    tracep->declBus(c+82,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+81,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1043,"raddr", false,-1, 31,0);
    tracep->declBit(c+1044,"ren", false,-1);
    tracep->declBus(c+1045,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+910,"auto_in_psel", false,-1);
    tracep->declBit(c+420,"auto_in_penable", false,-1);
    tracep->declBit(c+900,"auto_in_pwrite", false,-1);
    tracep->declBus(c+898,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1276,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1250,"auto_in_pready", false,-1);
    tracep->declBit(c+1277,"auto_in_pslverr", false,-1);
    tracep->declBus(c+18,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1221,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1222,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1248,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBus(c+898,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+910,"in_psel", false,-1);
    tracep->declBit(c+420,"in_penable", false,-1);
    tracep->declBus(c+1276,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+900,"in_pwrite", false,-1);
    tracep->declBus(c+901,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1250,"in_pready", false,-1);
    tracep->declBus(c+18,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1277,"in_pslverr", false,-1);
    tracep->declBit(c+1221,"qspi_sck", false,-1);
    tracep->declBit(c+1222,"qspi_ce_n", false,-1);
    tracep->declBus(c+1248,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1248,"din", false,-1, 3,0);
    tracep->declBus(c+1223,"dout", false,-1, 3,0);
    tracep->declBus(c+1224,"douten", false,-1, 3,0);
    tracep->declBit(c+1262,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1225,"clk_i", false,-1);
    tracep->declBit(c+1226,"rst_i", false,-1);
    tracep->declBus(c+898,"adr_i", false,-1, 31,0);
    tracep->declBus(c+901,"dat_i", false,-1, 31,0);
    tracep->declBus(c+18,"dat_o", false,-1, 31,0);
    tracep->declBus(c+902,"sel_i", false,-1, 3,0);
    tracep->declBit(c+910,"cyc_i", false,-1);
    tracep->declBit(c+910,"stb_i", false,-1);
    tracep->declBit(c+1262,"ack_o", false,-1);
    tracep->declBit(c+900,"we_i", false,-1);
    tracep->declBit(c+1221,"sck", false,-1);
    tracep->declBit(c+1222,"ce_n", false,-1);
    tracep->declBus(c+1248,"din", false,-1, 3,0);
    tracep->declBus(c+1223,"dout", false,-1, 3,0);
    tracep->declBus(c+1224,"douten", false,-1, 3,0);
    tracep->declBus(c+1313,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1314,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+433,"mr_sck", false,-1);
    tracep->declBit(c+434,"mr_ce_n", false,-1);
    tracep->declBus(c+1248,"mr_din", false,-1, 3,0);
    tracep->declBus(c+435,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+436,"mr_doe", false,-1);
    tracep->declBit(c+437,"mw_sck", false,-1);
    tracep->declBit(c+438,"mw_ce_n", false,-1);
    tracep->declBus(c+1248,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1209,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+439,"mw_doe", false,-1);
    tracep->declBit(c+1210,"mr_rd", false,-1);
    tracep->declBit(c+440,"mr_done", false,-1);
    tracep->declBit(c+1211,"mw_wr", false,-1);
    tracep->declBit(c+1212,"mw_done", false,-1);
    tracep->declBit(c+910,"wb_valid", false,-1);
    tracep->declBit(c+1046,"wb_we", false,-1);
    tracep->declBit(c+1047,"wb_re", false,-1);
    tracep->declBit(c+441,"state", false,-1);
    tracep->declBit(c+1213,"nstate", false,-1);
    tracep->declBus(c+1048,"size", false,-1, 2,0);
    tracep->declBus(c+1049,"byte0", false,-1, 7,0);
    tracep->declBus(c+1050,"byte1", false,-1, 7,0);
    tracep->declBus(c+1051,"byte2", false,-1, 7,0);
    tracep->declBus(c+1052,"byte3", false,-1, 7,0);
    tracep->declBus(c+1053,"wdata", false,-1, 31,0);
    tracep->declBit(c+652,"qpi_flag", false,-1);
    tracep->declBit(c+653,"qpi_sck", false,-1);
    tracep->declBit(c+654,"qpi_ce_n", false,-1);
    tracep->declBus(c+655,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+656,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+657,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1263,"rst_n", false,-1);
    tracep->declBus(c+1054,"addr", false,-1, 23,0);
    tracep->declBit(c+1210,"rd", false,-1);
    tracep->declBus(c+1322,"size", false,-1, 2,0);
    tracep->declBit(c+440,"done", false,-1);
    tracep->declBus(c+18,"line", false,-1, 31,0);
    tracep->declBit(c+433,"sck", false,-1);
    tracep->declBit(c+434,"ce_n", false,-1);
    tracep->declBus(c+1248,"din", false,-1, 3,0);
    tracep->declBus(c+435,"dout", false,-1, 3,0);
    tracep->declBit(c+436,"douten", false,-1);
    tracep->declBus(c+1313,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1314,"READ", false,-1, 0,0);
    tracep->declBus(c+1323,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+442,"state", false,-1);
    tracep->declBit(c+1214,"nstate", false,-1);
    tracep->declBus(c+443,"counter", false,-1, 7,0);
    tracep->declBus(c+444,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+350+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1324,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+445,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1263,"rst_n", false,-1);
    tracep->declBus(c+1055,"addr", false,-1, 23,0);
    tracep->declBus(c+1053,"line", false,-1, 31,0);
    tracep->declBus(c+1048,"size", false,-1, 2,0);
    tracep->declBit(c+1211,"wr", false,-1);
    tracep->declBit(c+1212,"done", false,-1);
    tracep->declBit(c+437,"sck", false,-1);
    tracep->declBit(c+438,"ce_n", false,-1);
    tracep->declBus(c+1248,"din", false,-1, 3,0);
    tracep->declBus(c+1209,"dout", false,-1, 3,0);
    tracep->declBit(c+439,"douten", false,-1);
    tracep->declBus(c+1313,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1314,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1056,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+446,"state", false,-1);
    tracep->declBit(c+1215,"nstate", false,-1);
    tracep->declBus(c+447,"counter", false,-1, 7,0);
    tracep->declBus(c+448,"saddr", false,-1, 23,0);
    tracep->declBus(c+1325,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+904,"auto_in_psel", false,-1);
    tracep->declBit(c+416,"auto_in_penable", false,-1);
    tracep->declBit(c+900,"auto_in_pwrite", false,-1);
    tracep->declBus(c+898,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1276,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+431,"auto_in_pready", false,-1);
    tracep->declBit(c+1277,"auto_in_pslverr", false,-1);
    tracep->declBus(c+432,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1249,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+429,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+764,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+765,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+766,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+767,"sdram_bundle_we", false,-1);
    tracep->declBus(c+768,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+769,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+430,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+793,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBus(c+898,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+904,"in_psel", false,-1);
    tracep->declBit(c+416,"in_penable", false,-1);
    tracep->declBus(c+1276,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+900,"in_pwrite", false,-1);
    tracep->declBus(c+901,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+431,"in_pready", false,-1);
    tracep->declBus(c+432,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1277,"in_pslverr", false,-1);
    tracep->declBit(c+1249,"sdram_clk", false,-1);
    tracep->declBit(c+429,"sdram_cke", false,-1);
    tracep->declBit(c+764,"sdram_cs", false,-1);
    tracep->declBit(c+765,"sdram_ras", false,-1);
    tracep->declBit(c+766,"sdram_cas", false,-1);
    tracep->declBit(c+767,"sdram_we", false,-1);
    tracep->declBus(c+768,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+769,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+430,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+793,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+449,"sdram_dout_en", false,-1);
    tracep->declBus(c+450,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+354,"state", false,-1, 1,0);
    tracep->declBit(c+770,"req_accept", false,-1);
    tracep->declBit(c+1057,"is_read", false,-1);
    tracep->declBit(c+1058,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1225,"clk_i", false,-1);
    tracep->declBit(c+1226,"rst_i", false,-1);
    tracep->declBus(c+1059,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1057,"inport_rd_i", false,-1);
    tracep->declBus(c+1291,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+898,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+901,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+793,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+770,"inport_accept_o", false,-1);
    tracep->declBit(c+431,"inport_ack_o", false,-1);
    tracep->declBit(c+1277,"inport_error_o", false,-1);
    tracep->declBus(c+432,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1249,"sdram_clk_o", false,-1);
    tracep->declBit(c+429,"sdram_cke_o", false,-1);
    tracep->declBit(c+764,"sdram_cs_o", false,-1);
    tracep->declBit(c+765,"sdram_ras_o", false,-1);
    tracep->declBit(c+766,"sdram_cas_o", false,-1);
    tracep->declBit(c+767,"sdram_we_o", false,-1);
    tracep->declBus(c+430,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+768,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+769,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+450,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+449,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1326,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1327,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1328,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1329,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1330,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1331,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1332,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1333,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1334,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1335,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1336,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1331,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1337,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1338,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1339,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1340,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1341,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1342,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1343,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1289,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1344,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1331,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1289,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1343,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1342,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1338,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1340,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1339,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1341,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1337,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1345,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1346,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1347,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1347,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1316,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1347,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1329,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1329,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1348,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+898,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1059,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1057,"ram_rd_w", false,-1);
    tracep->declBit(c+770,"ram_accept_w", false,-1);
    tracep->declBus(c+901,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+432,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+431,"ram_ack_w", false,-1);
    tracep->declBit(c+1060,"ram_req_w", false,-1);
    tracep->declBus(c+771,"command_q", false,-1, 3,0);
    tracep->declBus(c+768,"addr_q", false,-1, 12,0);
    tracep->declBus(c+450,"data_q", false,-1, 31,0);
    tracep->declBit(c+451,"data_rd_en_q", false,-1);
    tracep->declBus(c+430,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+429,"cke_q", false,-1);
    tracep->declBus(c+769,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1349,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+452,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+793,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+453,"refresh_q", false,-1);
    tracep->declBus(c+772,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+454+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+773,"state_q", false,-1, 3,0);
    tracep->declBus(c+1216,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1217,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+462,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+463,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1061,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1062,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1063,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1331,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+464,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1218,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1350,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+774,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+465,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+432,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+466,"idx", false,-1, 31,0);
    tracep->declBus(c+467,"rd_q", false,-1, 3,0);
    tracep->declBit(c+431,"ack_q", false,-1);
    tracep->declArray(c+775,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+914,"auto_in_psel", false,-1);
    tracep->declBit(c+915,"auto_in_penable", false,-1);
    tracep->declBit(c+900,"auto_in_pwrite", false,-1);
    tracep->declBus(c+906,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1276,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1251,"auto_in_pready", false,-1);
    tracep->declBit(c+1277,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1115,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+427,"spi_bundle_sck", false,-1);
    tracep->declBus(c+428,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+763,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1247,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1351,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1352,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1332,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBus(c+1064,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+914,"in_psel", false,-1);
    tracep->declBit(c+915,"in_penable", false,-1);
    tracep->declBus(c+1276,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+900,"in_pwrite", false,-1);
    tracep->declBus(c+901,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1251,"in_pready", false,-1);
    tracep->declBus(c+1115,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1277,"in_pslverr", false,-1);
    tracep->declBit(c+427,"spi_sck", false,-1);
    tracep->declBus(c+428,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+763,"spi_mosi", false,-1);
    tracep->declBit(c+1247,"spi_miso", false,-1);
    tracep->declBit(c+468,"spi_irq_out", false,-1);
    tracep->declBus(c+1065,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1066,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1067,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1068,"wb_we_i", false,-1);
    tracep->declBit(c+1069,"wb_stb_i", false,-1);
    tracep->declBit(c+1070,"wb_cyc_i", false,-1);
    tracep->declBit(c+469,"wb_ack_o", false,-1);
    tracep->declBus(c+470,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1292,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1276,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1353,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1354,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1322,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1355,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1356,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1357,"FLASH_READ", false,-1, 2,0);
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
    tracep->declBus(c+1358,"Tp", false,-1, 31,0);
    tracep->declBit(c+1225,"wb_clk_i", false,-1);
    tracep->declBit(c+1226,"wb_rst_i", false,-1);
    tracep->declBus(c+1065,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1066,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+470,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1067,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1068,"wb_we_i", false,-1);
    tracep->declBit(c+1069,"wb_stb_i", false,-1);
    tracep->declBit(c+1070,"wb_cyc_i", false,-1);
    tracep->declBit(c+469,"wb_ack_o", false,-1);
    tracep->declBit(c+1277,"wb_err_o", false,-1);
    tracep->declBit(c+468,"wb_int_o", false,-1);
    tracep->declBus(c+428,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+427,"sclk_pad_o", false,-1);
    tracep->declBit(c+763,"mosi_pad_o", false,-1);
    tracep->declBit(c+1247,"miso_pad_i", false,-1);
    tracep->declBus(c+471,"divider", false,-1, 15,0);
    tracep->declBus(c+472,"ctrl", false,-1, 13,0);
    tracep->declBus(c+473,"ss", false,-1, 7,0);
    tracep->declBus(c+1219,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+474,"rx", false,-1, 127,0);
    tracep->declBit(c+478,"rx_negedge", false,-1);
    tracep->declBit(c+479,"tx_negedge", false,-1);
    tracep->declBus(c+480,"char_len", false,-1, 6,0);
    tracep->declBit(c+481,"go", false,-1);
    tracep->declBit(c+482,"lsb", false,-1);
    tracep->declBit(c+483,"ie", false,-1);
    tracep->declBit(c+484,"ass", false,-1);
    tracep->declBit(c+1071,"spi_divider_sel", false,-1);
    tracep->declBit(c+1072,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1073,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1074,"spi_ss_sel", false,-1);
    tracep->declBit(c+485,"tip", false,-1);
    tracep->declBit(c+486,"pos_edge", false,-1);
    tracep->declBit(c+487,"neg_edge", false,-1);
    tracep->declBit(c+488,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1358,"Tp", false,-1, 31,0);
    tracep->declBit(c+1225,"clk_in", false,-1);
    tracep->declBit(c+1226,"rst", false,-1);
    tracep->declBit(c+485,"enable", false,-1);
    tracep->declBit(c+481,"go", false,-1);
    tracep->declBit(c+488,"last_clk", false,-1);
    tracep->declBus(c+471,"divider", false,-1, 15,0);
    tracep->declBit(c+427,"clk_out", false,-1);
    tracep->declBit(c+486,"pos_edge", false,-1);
    tracep->declBit(c+487,"neg_edge", false,-1);
    tracep->declBus(c+489,"cnt", false,-1, 15,0);
    tracep->declBit(c+490,"cnt_zero", false,-1);
    tracep->declBit(c+491,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1358,"Tp", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1226,"rst", false,-1);
    tracep->declBus(c+1075,"latch", false,-1, 3,0);
    tracep->declBus(c+1067,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+480,"len", false,-1, 6,0);
    tracep->declBit(c+482,"lsb", false,-1);
    tracep->declBit(c+481,"go", false,-1);
    tracep->declBit(c+486,"pos_edge", false,-1);
    tracep->declBit(c+487,"neg_edge", false,-1);
    tracep->declBit(c+478,"rx_negedge", false,-1);
    tracep->declBit(c+479,"tx_negedge", false,-1);
    tracep->declBit(c+485,"tip", false,-1);
    tracep->declBit(c+488,"last", false,-1);
    tracep->declBus(c+1066,"p_in", false,-1, 31,0);
    tracep->declArray(c+474,"p_out", false,-1, 127,0);
    tracep->declBit(c+427,"s_clk", false,-1);
    tracep->declBit(c+1247,"s_in", false,-1);
    tracep->declBit(c+763,"s_out", false,-1);
    tracep->declBus(c+492,"cnt", false,-1, 7,0);
    tracep->declArray(c+474,"data", false,-1, 127,0);
    tracep->declBus(c+493,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+494,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+495,"rx_clk", false,-1);
    tracep->declBit(c+496,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+911,"auto_in_psel", false,-1);
    tracep->declBit(c+912,"auto_in_penable", false,-1);
    tracep->declBit(c+900,"auto_in_pwrite", false,-1);
    tracep->declBus(c+908,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1276,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+913,"auto_in_pready", false,-1);
    tracep->declBit(c+1277,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1079,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1245,"uart_rx", false,-1);
    tracep->declBit(c+1246,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+911,"in_psel", false,-1);
    tracep->declBit(c+912,"in_penable", false,-1);
    tracep->declBus(c+1276,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+913,"in_pready", false,-1);
    tracep->declBit(c+1277,"in_pslverr", false,-1);
    tracep->declBus(c+1042,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+900,"in_pwrite", false,-1);
    tracep->declBus(c+1079,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+901,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1245,"uart_rx", false,-1);
    tracep->declBit(c+1246,"uart_tx", false,-1);
    tracep->declBit(c+497,"rtsn", false,-1);
    tracep->declBit(c+1277,"ctsn", false,-1);
    tracep->declBit(c+498,"dtr_pad_o", false,-1);
    tracep->declBit(c+1277,"dsr_pad_i", false,-1);
    tracep->declBit(c+1277,"ri_pad_i", false,-1);
    tracep->declBit(c+1277,"dcd_pad_i", false,-1);
    tracep->declBit(c+499,"interrupt", false,-1);
    tracep->declBit(c+1264,"reg_we", false,-1);
    tracep->declBit(c+1265,"reg_re", false,-1);
    tracep->declBus(c+1076,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1077,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+365,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1220,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+500,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1226,"wb_rst_i", false,-1);
    tracep->declBus(c+1076,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1078,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1220,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1264,"wb_we_i", false,-1);
    tracep->declBit(c+1265,"wb_re_i", false,-1);
    tracep->declBit(c+1246,"stx_pad_o", false,-1);
    tracep->declBit(c+1245,"srx_pad_i", false,-1);
    tracep->declBus(c+1345,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+500,"rts_pad_o", false,-1);
    tracep->declBit(c+498,"dtr_pad_o", false,-1);
    tracep->declBit(c+499,"int_o", false,-1);
    tracep->declBit(c+501,"enable", false,-1);
    tracep->declBit(c+502,"srx_pad", false,-1);
    tracep->declBus(c+503,"ier", false,-1, 3,0);
    tracep->declBus(c+504,"iir", false,-1, 3,0);
    tracep->declBus(c+505,"fcr", false,-1, 1,0);
    tracep->declBus(c+506,"mcr", false,-1, 4,0);
    tracep->declBus(c+507,"lcr", false,-1, 7,0);
    tracep->declBus(c+508,"msr", false,-1, 7,0);
    tracep->declBus(c+509,"dl", false,-1, 15,0);
    tracep->declBus(c+510,"scratch", false,-1, 7,0);
    tracep->declBit(c+511,"start_dlc", false,-1);
    tracep->declBit(c+512,"lsr_mask_d", false,-1);
    tracep->declBit(c+513,"msi_reset", false,-1);
    tracep->declBus(c+514,"dlc", false,-1, 15,0);
    tracep->declBus(c+515,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+516,"rx_reset", false,-1);
    tracep->declBit(c+517,"tx_reset", false,-1);
    tracep->declBit(c+518,"dlab", false,-1);
    tracep->declBit(c+1287,"cts_pad_i", false,-1);
    tracep->declBit(c+1277,"dsr_pad_i", false,-1);
    tracep->declBit(c+1277,"ri_pad_i", false,-1);
    tracep->declBit(c+1277,"dcd_pad_i", false,-1);
    tracep->declBit(c+519,"loopback", false,-1);
    tracep->declBit(c+1277,"cts", false,-1);
    tracep->declBit(c+1287,"dsr", false,-1);
    tracep->declBit(c+1287,"ri", false,-1);
    tracep->declBit(c+1287,"dcd", false,-1);
    tracep->declBit(c+520,"cts_c", false,-1);
    tracep->declBit(c+521,"dsr_c", false,-1);
    tracep->declBit(c+522,"ri_c", false,-1);
    tracep->declBit(c+523,"dcd_c", false,-1);
    tracep->declBus(c+524,"lsr", false,-1, 7,0);
    tracep->declBit(c+525,"lsr0", false,-1);
    tracep->declBit(c+526,"lsr1", false,-1);
    tracep->declBit(c+527,"lsr2", false,-1);
    tracep->declBit(c+528,"lsr3", false,-1);
    tracep->declBit(c+529,"lsr4", false,-1);
    tracep->declBit(c+530,"lsr5", false,-1);
    tracep->declBit(c+531,"lsr6", false,-1);
    tracep->declBit(c+532,"lsr7", false,-1);
    tracep->declBit(c+533,"lsr0r", false,-1);
    tracep->declBit(c+534,"lsr1r", false,-1);
    tracep->declBit(c+535,"lsr2r", false,-1);
    tracep->declBit(c+536,"lsr3r", false,-1);
    tracep->declBit(c+537,"lsr4r", false,-1);
    tracep->declBit(c+538,"lsr5r", false,-1);
    tracep->declBit(c+539,"lsr6r", false,-1);
    tracep->declBit(c+540,"lsr7r", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+541,"rls_int", false,-1);
    tracep->declBit(c+542,"rda_int", false,-1);
    tracep->declBit(c+543,"ti_int", false,-1);
    tracep->declBit(c+544,"thre_int", false,-1);
    tracep->declBit(c+545,"ms_int", false,-1);
    tracep->declBit(c+546,"tf_push", false,-1);
    tracep->declBit(c+547,"rf_pop", false,-1);
    tracep->declBus(c+1266,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+548,"rf_error_bit", false,-1);
    tracep->declBit(c+526,"rf_overrun", false,-1);
    tracep->declBit(c+549,"rf_push_pulse", false,-1);
    tracep->declBus(c+550,"rf_count", false,-1, 4,0);
    tracep->declBus(c+551,"tf_count", false,-1, 4,0);
    tracep->declBus(c+552,"tstate", false,-1, 2,0);
    tracep->declBus(c+553,"rstate", false,-1, 3,0);
    tracep->declBus(c+554,"counter_t", false,-1, 9,0);
    tracep->declBit(c+555,"thre_set_en", false,-1);
    tracep->declBus(c+556,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+557,"block_value", false,-1, 7,0);
    tracep->declBit(c+558,"serial_out", false,-1);
    tracep->declBit(c+559,"serial_in", false,-1);
    tracep->declBit(c+8,"lsr_mask_condition", false,-1);
    tracep->declBit(c+9,"iir_read", false,-1);
    tracep->declBit(c+10,"msr_read", false,-1);
    tracep->declBit(c+11,"fifo_read", false,-1);
    tracep->declBit(c+12,"fifo_write", false,-1);
    tracep->declBus(c+560,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+561,"lsr0_d", false,-1);
    tracep->declBit(c+562,"lsr1_d", false,-1);
    tracep->declBit(c+563,"lsr2_d", false,-1);
    tracep->declBit(c+564,"lsr3_d", false,-1);
    tracep->declBit(c+565,"lsr4_d", false,-1);
    tracep->declBit(c+566,"lsr5_d", false,-1);
    tracep->declBit(c+567,"lsr6_d", false,-1);
    tracep->declBit(c+568,"lsr7_d", false,-1);
    tracep->declBit(c+569,"rls_int_d", false,-1);
    tracep->declBit(c+570,"thre_int_d", false,-1);
    tracep->declBit(c+571,"ms_int_d", false,-1);
    tracep->declBit(c+572,"ti_int_d", false,-1);
    tracep->declBit(c+573,"rda_int_d", false,-1);
    tracep->declBit(c+574,"rls_int_rise", false,-1);
    tracep->declBit(c+575,"thre_int_rise", false,-1);
    tracep->declBit(c+576,"ms_int_rise", false,-1);
    tracep->declBit(c+577,"ti_int_rise", false,-1);
    tracep->declBit(c+578,"rda_int_rise", false,-1);
    tracep->declBit(c+579,"rls_int_pnd", false,-1);
    tracep->declBit(c+580,"rda_int_pnd", false,-1);
    tracep->declBit(c+581,"thre_int_pnd", false,-1);
    tracep->declBit(c+582,"ms_int_pnd", false,-1);
    tracep->declBit(c+583,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1358,"Tp", false,-1, 31,0);
    tracep->declBus(c+1358,"width", false,-1, 31,0);
    tracep->declBus(c+1314,"init_value", false,-1, 0,0);
    tracep->declBit(c+1226,"rst_i", false,-1);
    tracep->declBit(c+1225,"clk_i", false,-1);
    tracep->declBit(c+1277,"stage1_rst_i", false,-1);
    tracep->declBit(c+1287,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1245,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+502,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+584,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1226,"wb_rst_i", false,-1);
    tracep->declBus(c+507,"lcr", false,-1, 7,0);
    tracep->declBit(c+547,"rf_pop", false,-1);
    tracep->declBit(c+559,"srx_pad_i", false,-1);
    tracep->declBit(c+501,"enable", false,-1);
    tracep->declBit(c+516,"rx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBus(c+554,"counter_t", false,-1, 9,0);
    tracep->declBus(c+550,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1266,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+526,"rf_overrun", false,-1);
    tracep->declBit(c+548,"rf_error_bit", false,-1);
    tracep->declBus(c+553,"rstate", false,-1, 3,0);
    tracep->declBit(c+549,"rf_push_pulse", false,-1);
    tracep->declBus(c+585,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+586,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+587,"rshift", false,-1, 7,0);
    tracep->declBit(c+588,"rparity", false,-1);
    tracep->declBit(c+589,"rparity_error", false,-1);
    tracep->declBit(c+590,"rframing_error", false,-1);
    tracep->declBit(c+591,"rbit_in", false,-1);
    tracep->declBit(c+592,"rparity_xor", false,-1);
    tracep->declBus(c+593,"counter_b", false,-1, 7,0);
    tracep->declBit(c+594,"rf_push_q", false,-1);
    tracep->declBus(c+595,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+596,"rf_push", false,-1);
    tracep->declBit(c+597,"break_error", false,-1);
    tracep->declBit(c+598,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+599,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+600,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+601,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1289,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1343,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1342,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1338,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1340,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1339,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1341,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1337,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1345,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1346,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1359,"sr_push", false,-1, 3,0);
    tracep->declBus(c+602,"toc_value", false,-1, 9,0);
    tracep->declBus(c+603,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1360,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1361,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1331,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1315,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1226,"wb_rst_i", false,-1);
    tracep->declBit(c+549,"push", false,-1);
    tracep->declBit(c+547,"pop", false,-1);
    tracep->declBus(c+595,"data_in", false,-1, 10,0);
    tracep->declBit(c+516,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1266,"data_out", false,-1, 10,0);
    tracep->declBit(c+526,"overrun", false,-1);
    tracep->declBus(c+550,"count", false,-1, 4,0);
    tracep->declBit(c+548,"error_bit", false,-1);
    tracep->declBus(c+1267,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+604+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+620,"top", false,-1, 3,0);
    tracep->declBus(c+621,"bottom", false,-1, 3,0);
    tracep->declBus(c+622,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+623,"word0", false,-1, 2,0);
    tracep->declBus(c+624,"word1", false,-1, 2,0);
    tracep->declBus(c+625,"word2", false,-1, 2,0);
    tracep->declBus(c+626,"word3", false,-1, 2,0);
    tracep->declBus(c+627,"word4", false,-1, 2,0);
    tracep->declBus(c+628,"word5", false,-1, 2,0);
    tracep->declBus(c+629,"word6", false,-1, 2,0);
    tracep->declBus(c+630,"word7", false,-1, 2,0);
    tracep->declBus(c+631,"word8", false,-1, 2,0);
    tracep->declBus(c+632,"word9", false,-1, 2,0);
    tracep->declBus(c+633,"word10", false,-1, 2,0);
    tracep->declBus(c+634,"word11", false,-1, 2,0);
    tracep->declBus(c+635,"word12", false,-1, 2,0);
    tracep->declBus(c+636,"word13", false,-1, 2,0);
    tracep->declBus(c+637,"word14", false,-1, 2,0);
    tracep->declBus(c+638,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1331,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1332,"data_width", false,-1, 31,0);
    tracep->declBus(c+1361,"depth", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+549,"we", false,-1);
    tracep->declBus(c+620,"a", false,-1, 3,0);
    tracep->declBus(c+621,"dpra", false,-1, 3,0);
    tracep->declBus(c+639,"di", false,-1, 7,0);
    tracep->declBus(c+1267,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+366+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1226,"wb_rst_i", false,-1);
    tracep->declBus(c+507,"lcr", false,-1, 7,0);
    tracep->declBit(c+546,"tf_push", false,-1);
    tracep->declBus(c+1078,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+501,"enable", false,-1);
    tracep->declBit(c+517,"tx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+558,"stx_pad_o", false,-1);
    tracep->declBus(c+552,"tstate", false,-1, 2,0);
    tracep->declBus(c+551,"tf_count", false,-1, 4,0);
    tracep->declBus(c+640,"counter", false,-1, 4,0);
    tracep->declBus(c+641,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+642,"shift_out", false,-1, 6,0);
    tracep->declBit(c+643,"stx_o_tmp", false,-1);
    tracep->declBit(c+644,"parity_xor", false,-1);
    tracep->declBit(c+645,"tf_pop", false,-1);
    tracep->declBit(c+646,"bit_out", false,-1);
    tracep->declBus(c+1078,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1268,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+647,"tf_overrun", false,-1);
    tracep->declBus(c+1292,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1276,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1353,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1354,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1322,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1355,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1332,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1361,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1331,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1315,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+1226,"wb_rst_i", false,-1);
    tracep->declBit(c+546,"push", false,-1);
    tracep->declBit(c+645,"pop", false,-1);
    tracep->declBus(c+1078,"data_in", false,-1, 7,0);
    tracep->declBit(c+517,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1268,"data_out", false,-1, 7,0);
    tracep->declBit(c+647,"overrun", false,-1);
    tracep->declBus(c+551,"count", false,-1, 4,0);
    tracep->declBus(c+648,"top", false,-1, 3,0);
    tracep->declBus(c+649,"bottom", false,-1, 3,0);
    tracep->declBus(c+650,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1331,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1332,"data_width", false,-1, 31,0);
    tracep->declBus(c+1361,"depth", false,-1, 31,0);
    tracep->declBit(c+1225,"clk", false,-1);
    tracep->declBit(c+546,"we", false,-1);
    tracep->declBus(c+648,"a", false,-1, 3,0);
    tracep->declBus(c+649,"dpra", false,-1, 3,0);
    tracep->declBus(c+1078,"di", false,-1, 7,0);
    tracep->declBus(c+1268,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+382+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBit(c+905,"auto_in_psel", false,-1);
    tracep->declBit(c+417,"auto_in_penable", false,-1);
    tracep->declBit(c+900,"auto_in_pwrite", false,-1);
    tracep->declBus(c+906,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1276,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+901,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1278,"auto_in_pready", false,-1);
    tracep->declBit(c+1279,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1280,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1239,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1240,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1241,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1242,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1243,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1244,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1225,"clock", false,-1);
    tracep->declBit(c+1226,"reset", false,-1);
    tracep->declBus(c+1064,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+905,"in_psel", false,-1);
    tracep->declBit(c+417,"in_penable", false,-1);
    tracep->declBus(c+1276,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+900,"in_pwrite", false,-1);
    tracep->declBus(c+901,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+902,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1278,"in_pready", false,-1);
    tracep->declBus(c+1280,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1279,"in_pslverr", false,-1);
    tracep->declBus(c+1239,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1240,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1241,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1242,"vga_hsync", false,-1);
    tracep->declBit(c+1243,"vga_vsync", false,-1);
    tracep->declBit(c+1244,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+427,"sck", false,-1);
    tracep->declBit(c+778,"ss", false,-1);
    tracep->declBit(c+763,"mosi", false,-1);
    tracep->declBit(c+758,"miso", false,-1);
    tracep->declBus(c+759,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+760,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+761,"counter", false,-1, 2,0);
    tracep->declBit(c+762,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+427,"sck", false,-1);
    tracep->declBit(c+651,"ss", false,-1);
    tracep->declBit(c+763,"mosi", false,-1);
    tracep->declBit(c+1269,"miso", false,-1);
    tracep->declBit(c+651,"reset", false,-1);
    tracep->declBus(c+752,"state", false,-1, 2,0);
    tracep->declBus(c+753,"counter", false,-1, 7,0);
    tracep->declBus(c+754,"cmd", false,-1, 7,0);
    tracep->declBus(c+755,"addr", false,-1, 23,0);
    tracep->declBus(c+756,"data", false,-1, 31,0);
    tracep->declBit(c+757,"ren", false,-1);
    tracep->declBus(c+1270,"rdata", false,-1, 31,0);
    tracep->declBus(c+1271,"raddr", false,-1, 31,0);
    tracep->declBus(c+1272,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+427,"clock", false,-1);
    tracep->declBit(c+757,"valid", false,-1);
    tracep->declBus(c+754,"cmd", false,-1, 7,0);
    tracep->declBus(c+1271,"addr", false,-1, 31,0);
    tracep->declBus(c+1270,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1221,"sck", false,-1);
    tracep->declBit(c+1222,"ce_n", false,-1);
    tracep->declBus(c+1248,"dio", false,-1, 3,0);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBus(c+13,"state", false,-1, 3,0);
    tracep->declBus(c+14,"counter", false,-1, 7,0);
    tracep->declBus(c+887,"cmd", false,-1, 7,0);
    tracep->declBus(c+888,"addr", false,-1, 23,0);
    tracep->declBus(c+15,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+889+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1273,"qpi_flag", false,-1);
    tracep->declBus(c+16,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1274,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+893,"ren", false,-1);
    tracep->declBit(c+894,"wen", false,-1);
    tracep->declBus(c+895,"len", false,-1, 7,0);
    tracep->declBus(c+1275,"rdata", false,-1, 31,0);
    tracep->declBus(c+896,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1221,"clock", false,-1);
    tracep->declBit(c+893,"ren", false,-1);
    tracep->declBit(c+894,"wen", false,-1);
    tracep->declBus(c+887,"cmd", false,-1, 7,0);
    tracep->declBus(c+896,"saddr", false,-1, 31,0);
    tracep->declBus(c+1275,"rdata", false,-1, 31,0);
    tracep->declBus(c+897,"wdata", false,-1, 31,0);
    tracep->declBus(c+895,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1249,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+764,"cs", false,-1);
    tracep->declBit(c+765,"ras", false,-1);
    tracep->declBit(c+766,"cas", false,-1);
    tracep->declBit(c+767,"we", false,-1);
    tracep->declBus(c+768,"a", false,-1, 12,0);
    tracep->declBus(c+779,"ba", false,-1, 1,0);
    tracep->declBus(c+780,"dqm", false,-1, 1,0);
    tracep->declBus(c+794,"dq", false,-1, 15,0);
    tracep->declBit(c+781,"reset", false,-1);
    tracep->declBus(c+658,"state", false,-1, 2,0);
    tracep->declBus(c+659,"counter", false,-1, 7,0);
    tracep->declBus(c+660,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1362,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+661,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+662,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+782,"nop", false,-1);
    tracep->declBit(c+783,"active", false,-1);
    tracep->declBit(c+784,"precharge", false,-1);
    tracep->declBit(c+785,"read", false,-1);
    tracep->declBit(c+786,"write", false,-1);
    tracep->declBit(c+787,"burstterm", false,-1);
    tracep->declBit(c+788,"autorefresh", false,-1);
    tracep->declBit(c+789,"mode", false,-1);
    tracep->declBus(c+663,"test", false,-1, 15,0);
    tracep->declBus(c+664,"mem", false,-1, 15,0);
    tracep->declBit(c+665,"write_burst_mode", false,-1);
    tracep->declBus(c+666,"op_mode", false,-1, 1,0);
    tracep->declBus(c+667,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+668,"burst_type", false,-1);
    tracep->declBus(c+669,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+670,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+671,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+672,"bank", false,-1, 1,0);
    tracep->declBus(c+673,"row", false,-1, 12,0);
    tracep->declBus(c+674,"column", false,-1, 8,0);
    tracep->declBus(c+675,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+676,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1249,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+764,"cs", false,-1);
    tracep->declBit(c+765,"ras", false,-1);
    tracep->declBit(c+766,"cas", false,-1);
    tracep->declBit(c+767,"we", false,-1);
    tracep->declBus(c+768,"a", false,-1, 12,0);
    tracep->declBus(c+779,"ba", false,-1, 1,0);
    tracep->declBus(c+790,"dqm", false,-1, 1,0);
    tracep->declBus(c+795,"dq", false,-1, 15,0);
    tracep->declBit(c+781,"reset", false,-1);
    tracep->declBus(c+677,"state", false,-1, 2,0);
    tracep->declBus(c+678,"counter", false,-1, 7,0);
    tracep->declBus(c+679,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1363,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+680,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+681,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+782,"nop", false,-1);
    tracep->declBit(c+783,"active", false,-1);
    tracep->declBit(c+784,"precharge", false,-1);
    tracep->declBit(c+785,"read", false,-1);
    tracep->declBit(c+786,"write", false,-1);
    tracep->declBit(c+787,"burstterm", false,-1);
    tracep->declBit(c+788,"autorefresh", false,-1);
    tracep->declBit(c+789,"mode", false,-1);
    tracep->declBus(c+682,"test", false,-1, 15,0);
    tracep->declBus(c+683,"mem", false,-1, 15,0);
    tracep->declBit(c+684,"write_burst_mode", false,-1);
    tracep->declBus(c+685,"op_mode", false,-1, 1,0);
    tracep->declBus(c+686,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+687,"burst_type", false,-1);
    tracep->declBus(c+688,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+689,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+690,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+691,"bank", false,-1, 1,0);
    tracep->declBus(c+692,"row", false,-1, 12,0);
    tracep->declBus(c+693,"column", false,-1, 8,0);
    tracep->declBus(c+694,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+695,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1249,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+764,"cs", false,-1);
    tracep->declBit(c+765,"ras", false,-1);
    tracep->declBit(c+766,"cas", false,-1);
    tracep->declBit(c+767,"we", false,-1);
    tracep->declBus(c+768,"a", false,-1, 12,0);
    tracep->declBus(c+779,"ba", false,-1, 1,0);
    tracep->declBus(c+791,"dqm", false,-1, 1,0);
    tracep->declBus(c+794,"dq", false,-1, 15,0);
    tracep->declBit(c+781,"reset", false,-1);
    tracep->declBus(c+696,"state", false,-1, 2,0);
    tracep->declBus(c+697,"counter", false,-1, 7,0);
    tracep->declBus(c+698,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1364,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+699,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+700,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+782,"nop", false,-1);
    tracep->declBit(c+783,"active", false,-1);
    tracep->declBit(c+784,"precharge", false,-1);
    tracep->declBit(c+785,"read", false,-1);
    tracep->declBit(c+786,"write", false,-1);
    tracep->declBit(c+787,"burstterm", false,-1);
    tracep->declBit(c+788,"autorefresh", false,-1);
    tracep->declBit(c+789,"mode", false,-1);
    tracep->declBus(c+701,"test", false,-1, 15,0);
    tracep->declBus(c+702,"mem", false,-1, 15,0);
    tracep->declBit(c+703,"write_burst_mode", false,-1);
    tracep->declBus(c+704,"op_mode", false,-1, 1,0);
    tracep->declBus(c+705,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+706,"burst_type", false,-1);
    tracep->declBus(c+707,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+708,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+709,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+710,"bank", false,-1, 1,0);
    tracep->declBus(c+711,"row", false,-1, 12,0);
    tracep->declBus(c+712,"column", false,-1, 8,0);
    tracep->declBus(c+713,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+714,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1249,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+764,"cs", false,-1);
    tracep->declBit(c+765,"ras", false,-1);
    tracep->declBit(c+766,"cas", false,-1);
    tracep->declBit(c+767,"we", false,-1);
    tracep->declBus(c+768,"a", false,-1, 12,0);
    tracep->declBus(c+779,"ba", false,-1, 1,0);
    tracep->declBus(c+792,"dqm", false,-1, 1,0);
    tracep->declBus(c+795,"dq", false,-1, 15,0);
    tracep->declBit(c+781,"reset", false,-1);
    tracep->declBus(c+715,"state", false,-1, 2,0);
    tracep->declBus(c+716,"counter", false,-1, 7,0);
    tracep->declBus(c+717,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1365,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+718,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+719,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+782,"nop", false,-1);
    tracep->declBit(c+783,"active", false,-1);
    tracep->declBit(c+784,"precharge", false,-1);
    tracep->declBit(c+785,"read", false,-1);
    tracep->declBit(c+786,"write", false,-1);
    tracep->declBit(c+787,"burstterm", false,-1);
    tracep->declBit(c+788,"autorefresh", false,-1);
    tracep->declBit(c+789,"mode", false,-1);
    tracep->declBus(c+720,"test", false,-1, 15,0);
    tracep->declBus(c+721,"mem", false,-1, 15,0);
    tracep->declBit(c+722,"write_burst_mode", false,-1);
    tracep->declBus(c+723,"op_mode", false,-1, 1,0);
    tracep->declBus(c+724,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+725,"burst_type", false,-1);
    tracep->declBus(c+726,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+727,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+728,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+729,"bank", false,-1, 1,0);
    tracep->declBus(c+730,"row", false,-1, 12,0);
    tracep->declBus(c+731,"column", false,-1, 8,0);
    tracep->declBus(c+732,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+733,"rdqm_reg", false,-1, 1,0);
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
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+435,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+436,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+439,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+440,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+445,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+449,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullSData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+478,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+479,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+480,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+481,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+482,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+483,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+484,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+488,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+490,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+491,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+493,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+497,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+498,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+500,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+518,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+519,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+520,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+521,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+522,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+523,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+524,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+527,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+528,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+529,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+548,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+555,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+574,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+575,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+576,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+577,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+578,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+597,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+598,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+599,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+600,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+601,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+603,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+622,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+639,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+650,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+660,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+661,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+662,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+663,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                              [0x1c4U]),16);
    bufp->fullSData(oldp+664,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0xa3U][0x1c4U]),16);
    bufp->fullBit(oldp+665,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+666,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+667,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+668,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+669,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+671,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+673,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+674,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+679,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+680,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+681,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+682,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                              [0x1c4U]),16);
    bufp->fullSData(oldp+683,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0xa3U][0x1c4U]),16);
    bufp->fullBit(oldp+684,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+685,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+686,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+687,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+688,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+690,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+692,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+693,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+698,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+699,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+700,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+701,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                              [0x1c4U]),16);
    bufp->fullSData(oldp+702,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0xa3U][0x1c4U]),16);
    bufp->fullBit(oldp+703,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+704,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+705,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+706,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+707,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__read_cnt),8);
    bufp->fullCData(oldp+709,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+711,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+712,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+717,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+718,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+719,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+720,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                              [0x1c4U]),16);
    bufp->fullSData(oldp+721,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0xa3U][0x1c4U]),16);
    bufp->fullBit(oldp+722,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+723,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+724,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+725,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+726,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__read_cnt),8);
    bufp->fullCData(oldp+728,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+730,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+731,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg),2);
    bufp->fullIData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullIData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+755,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+757,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+764,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+765,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+766,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+767,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
    bufp->fullBit(oldp+770,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+779,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+784,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+793,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+794,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+795,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullBit(oldp+796,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullIData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op),7);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3),3);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_read));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_write));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+815,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+818,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
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
    bufp->fullCData(oldp+819,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+820,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf0b4f3eb__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf2be8e81__0))
                                         ? 1U : 2U))),3);
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_done));
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+839,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+841,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+842,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+844,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
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
    bufp->fullBit(oldp+845,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+847,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullCData(oldp+849,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+850,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+851,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+852,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+853,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+854,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+855,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+856,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+857,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+858,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+860,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+861,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_start));
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullIData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullBit(oldp+873,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+874,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullCData(oldp+875,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
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
    bufp->fullBit(oldp+876,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+877,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+878,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullCData(oldp+879,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))
                                : 0U)),4);
    bufp->fullCData(oldp+880,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))
                                : 0U)),4);
    bufp->fullBit(oldp+881,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+882,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))
                                : 0U)),4);
    bufp->fullCData(oldp+883,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))
                                : 0U)),4);
    bufp->fullCData(oldp+884,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))),4);
    bufp->fullCData(oldp+885,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))),4);
    bufp->fullBit(oldp+886,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+888,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+896,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+897,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+904,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+905,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+906,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+907,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+908,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+909,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+913,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+914,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+938,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1c04844a__0))));
    bufp->fullCData(oldp+939,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2bd8639b__0))),4);
    bufp->fullIData(oldp+940,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7ada923a__0)),32);
    bufp->fullCData(oldp+941,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1eafd397__0))),8);
    bufp->fullCData(oldp+942,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hec826d8a__0))),3);
    bufp->fullCData(oldp+943,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h320182db__0))),2);
    bufp->fullBit(oldp+944,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_head94601__0))));
    bufp->fullIData(oldp+945,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h59611efd__0)),32);
    bufp->fullCData(oldp+946,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h786a3074__0))),4);
    bufp->fullBit(oldp+947,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                       << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)))));
    bufp->fullBit(oldp+948,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hec051416__0))));
    bufp->fullBit(oldp+949,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb4da2811__0))));
    bufp->fullCData(oldp+950,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h4f065cc1__0))),4);
    bufp->fullIData(oldp+951,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h554e37af__0)),32);
    bufp->fullCData(oldp+952,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hd21f5624__0))),8);
    bufp->fullCData(oldp+953,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3da053fd__0))),3);
    bufp->fullCData(oldp+954,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he9f6ab13__0))),2);
    bufp->fullBit(oldp+955,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdd5ee87f__0))));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+957,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+959,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+961,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+977,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+979,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+980,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+981,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+982,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+983,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+986,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+987,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+988,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+989,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+994,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+996,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+997,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WREADY));
    bufp->fullIData(oldp+1005,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7ada923a__0 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+1006,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h59611efd__0 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+1007,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h554e37af__0 
                                        >> 0x20U))),32);
    bufp->fullCData(oldp+1008,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h786a3074__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1009,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1eafd397__0) 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1010,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hd21f5624__0) 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1011,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2bd8639b__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1012,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h4f065cc1__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1013,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hec826d8a__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1014,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3da053fd__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1015,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h320182db__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1016,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he9f6ab13__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1017,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1c04844a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1018,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_head94601__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1019,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hec051416__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1020,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb4da2811__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1021,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdd5ee87f__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1022,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                         << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)) 
                                    >> 1U))));
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata),32);
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullIData(oldp+1042,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+1043,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1051,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1052,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1053,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1054,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1055,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1056,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1061,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1062,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1063,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),3);
    bufp->fullIData(oldp+1064,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+1071,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1072,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1074,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1076,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+1079,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1080,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1081,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1082,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1083,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1084,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1085,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1086,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1087,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1088,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1089,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1090,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1091,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1092,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1093,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1094,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1095,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1096,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1097,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1098,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1099,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1100,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1101,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1102,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1103,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1104,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1105,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1106,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1107,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1108,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1109,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1110,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1111,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1112,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1149,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1150,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1172,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1173,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1174,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1175,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1176,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1177,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1178,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1179,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1180,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1181,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1182,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1183,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1184,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1185,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1186,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1187,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1188,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1189,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1190,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1191,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1192,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1193,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1194,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1195,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1196,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1197,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1198,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1199,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1200,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1201,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1202,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1203,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1225,(vlSelf->clock));
    bufp->fullBit(oldp+1226,(vlSelf->reset));
    bufp->fullSData(oldp+1227,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1228,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1229,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1230,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1231,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1232,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1233,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1234,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1235,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1236,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1237,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1238,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1239,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1240,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1241,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1242,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1243,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1244,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1245,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1246,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1247,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1249,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1250,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1251,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1252,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1253,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdd5ee87f__0) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullIData(oldp+1254,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullBit(oldp+1255,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_DONE));
    bufp->fullIData(oldp+1257,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
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
    bufp->fullIData(oldp+1258,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullBit(oldp+1260,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                     : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullIData(oldp+1261,((((- (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb4da2811__0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready)))) 
                                 & ((- (IData)((0x2000000U 
                                                == (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h554e37af__0 
                                                            >> 0x20U))))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                                | ((- (IData)((0x2000004U 
                                               == (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h554e37af__0 
                                                           >> 0x20U))))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullBit(oldp+1262,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1263,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1266,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1269,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1271,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1274,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1276,(1U),3);
    bufp->fullBit(oldp+1277,(0U));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1287,(1U));
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1289,(0U),4);
    bufp->fullIData(oldp+1290,(0U),32);
    bufp->fullCData(oldp+1291,(0U),8);
    bufp->fullCData(oldp+1292,(0U),3);
    bufp->fullCData(oldp+1293,(0U),2);
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1304,(0U),32);
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST));
    bufp->fullCData(oldp+1306,(1U),2);
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+1309,(2U),2);
    bufp->fullCData(oldp+1310,(3U),2);
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_wsize),3);
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rsize),3);
    bufp->fullBit(oldp+1313,(0U));
    bufp->fullBit(oldp+1314,(1U));
    bufp->fullIData(oldp+1315,(5U),32);
    bufp->fullIData(oldp+1316,(0x20U),32);
    bufp->fullIData(oldp+1317,(0x2000000U),32);
    bufp->fullIData(oldp+1318,(0x2000004U),32);
    bufp->fullIData(oldp+1319,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1320,(0x1800U),32);
    bufp->fullIData(oldp+1321,(0x79737978U),32);
    bufp->fullCData(oldp+1322,(4U),3);
    bufp->fullCData(oldp+1323,(0x15U),8);
    bufp->fullCData(oldp+1324,(0xebU),8);
    bufp->fullCData(oldp+1325,(0x38U),8);
    bufp->fullIData(oldp+1326,(0x64U),32);
    bufp->fullIData(oldp+1327,(0x18U),32);
    bufp->fullIData(oldp+1328,(9U),32);
    bufp->fullIData(oldp+1329,(2U),32);
    bufp->fullIData(oldp+1330,(3U),32);
    bufp->fullIData(oldp+1331,(4U),32);
    bufp->fullIData(oldp+1332,(8U),32);
    bufp->fullIData(oldp+1333,(0xdU),32);
    bufp->fullIData(oldp+1334,(0x2000U),32);
    bufp->fullIData(oldp+1335,(0x2710U),32);
    bufp->fullIData(oldp+1336,(0x30cU),32);
    bufp->fullCData(oldp+1337,(7U),4);
    bufp->fullCData(oldp+1338,(3U),4);
    bufp->fullCData(oldp+1339,(5U),4);
    bufp->fullCData(oldp+1340,(4U),4);
    bufp->fullCData(oldp+1341,(6U),4);
    bufp->fullCData(oldp+1342,(2U),4);
    bufp->fullCData(oldp+1343,(1U),4);
    bufp->fullSData(oldp+1344,(0x20U),13);
    bufp->fullCData(oldp+1345,(8U),4);
    bufp->fullCData(oldp+1346,(9U),4);
    bufp->fullIData(oldp+1347,(0xaU),32);
    bufp->fullIData(oldp+1348,(6U),32);
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1350,(0x11U),32);
    bufp->fullIData(oldp+1351,(0x30000000U),32);
    bufp->fullIData(oldp+1352,(0x3fffffffU),32);
    bufp->fullCData(oldp+1353,(2U),3);
    bufp->fullCData(oldp+1354,(3U),3);
    bufp->fullCData(oldp+1355,(5U),3);
    bufp->fullCData(oldp+1356,(6U),3);
    bufp->fullCData(oldp+1357,(7U),3);
    bufp->fullIData(oldp+1358,(1U),32);
    bufp->fullCData(oldp+1359,(0xaU),4);
    bufp->fullIData(oldp+1360,(0xbU),32);
    bufp->fullIData(oldp+1361,(0x10U),32);
    bufp->fullSData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
