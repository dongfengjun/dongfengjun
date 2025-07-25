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
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBus(c+1262,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1263,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1264,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1265,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1266,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1267,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1268,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1269,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1270,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1271,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1272,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1273,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1274,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1275,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1276,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1277,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1278,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1279,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1280,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1281,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBus(c+1262,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1263,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1264,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1265,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1266,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1267,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1268,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1269,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1270,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1271,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1272,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1273,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1274,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1275,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1276,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1277,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1278,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1279,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1280,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1281,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+447,"spi_sck", false,-1);
    tracep->declBus(c+448,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+798,"spi_mosi", false,-1);
    tracep->declBit(c+1282,"spi_miso", false,-1);
    tracep->declBit(c+1280,"uart_rx", false,-1);
    tracep->declBit(c+1281,"uart_tx", false,-1);
    tracep->declBit(c+1256,"psram_sck", false,-1);
    tracep->declBit(c+1257,"psram_ce_n", false,-1);
    tracep->declBus(c+1283,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1284,"sdram_clk", false,-1);
    tracep->declBit(c+449,"sdram_cke", false,-1);
    tracep->declBit(c+799,"sdram_cs", false,-1);
    tracep->declBit(c+800,"sdram_ras", false,-1);
    tracep->declBit(c+801,"sdram_cas", false,-1);
    tracep->declBit(c+802,"sdram_we", false,-1);
    tracep->declBus(c+803,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+804,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+450,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+828,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1262,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1263,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1264,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1265,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1266,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1267,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1268,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1269,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1270,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1271,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1272,"ps2_clk", false,-1);
    tracep->declBit(c+1273,"ps2_data", false,-1);
    tracep->declBus(c+1274,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1275,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1276,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1277,"vga_hsync", false,-1);
    tracep->declBit(c+1278,"vga_vsync", false,-1);
    tracep->declBit(c+1279,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBus(c+900,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+901,"in_psel", false,-1);
    tracep->declBit(c+11,"in_penable", false,-1);
    tracep->declBus(c+1329,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+902,"in_pwrite", false,-1);
    tracep->declBus(c+903,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1148,"in_pready", false,-1);
    tracep->declBus(c+1149,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+905,"in_pslverr", false,-1);
    tracep->declBus(c+900,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+901,"out_psel", false,-1);
    tracep->declBit(c+11,"out_penable", false,-1);
    tracep->declBus(c+1329,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+902,"out_pwrite", false,-1);
    tracep->declBus(c+903,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1148,"out_pready", false,-1);
    tracep->declBus(c+1149,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+905,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+901,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+11,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+902,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+900,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1148,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+905,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1149,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+906,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+426,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+902,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+900,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+451,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1330,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+452,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+907,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+427,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+902,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+908,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1329,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+453,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1331,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1332,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+909,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+910,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+902,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+911,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1329,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+454,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1333,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+455,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+912,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+428,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+902,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+911,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1329,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+456,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1334,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+457,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+913,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+429,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+902,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+900,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1285,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1330,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+12,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+914,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+915,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+902,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+911,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1329,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+916,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1330,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1107,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+917,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+918,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+902,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+908,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1329,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1286,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1330,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1150,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+919,"sel_0", false,-1);
    tracep->declBit(c+920,"sel_1", false,-1);
    tracep->declBit(c+921,"sel_2", false,-1);
    tracep->declBit(c+922,"sel_3", false,-1);
    tracep->declBit(c+923,"sel_4", false,-1);
    tracep->declBit(c+924,"sel_5", false,-1);
    tracep->declBit(c+925,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+926,"auto_in_awready", false,-1);
    tracep->declBit(c+927,"auto_in_awvalid", false,-1);
    tracep->declBus(c+928,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+929,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+930,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+926,"auto_in_wready", false,-1);
    tracep->declBit(c+931,"auto_in_wvalid", false,-1);
    tracep->declBus(c+932,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+933,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1151,"auto_in_bready", false,-1);
    tracep->declBit(c+1152,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+934,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+935,"auto_in_arready", false,-1);
    tracep->declBit(c+936,"auto_in_arvalid", false,-1);
    tracep->declBus(c+937,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+938,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+939,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1153,"auto_in_rready", false,-1);
    tracep->declBit(c+1154,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+442,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+934,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+901,"auto_out_psel", false,-1);
    tracep->declBit(c+11,"auto_out_penable", false,-1);
    tracep->declBit(c+902,"auto_out_pwrite", false,-1);
    tracep->declBus(c+900,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1148,"auto_out_pready", false,-1);
    tracep->declBit(c+905,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1149,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+11,"nodeOut_penable", false,-1);
    tracep->declBus(c+15,"state", false,-1, 1,0);
    tracep->declBit(c+935,"accept_read", false,-1);
    tracep->declBit(c+926,"accept_write", false,-1);
    tracep->declBit(c+16,"is_write_r", false,-1);
    tracep->declBit(c+902,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+17,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+20,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+940,"resp", false,-1, 1,0);
    tracep->declBus(c+21,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+934,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1154,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+22,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1152,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+831,"auto_in_awready", false,-1);
    tracep->declBit(c+941,"auto_in_awvalid", false,-1);
    tracep->declBus(c+942,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+943,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+945,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+946,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+947,"auto_in_wvalid", false,-1);
    tracep->declBus(c+948,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+950,"auto_in_wlast", false,-1);
    tracep->declBit(c+951,"auto_in_bready", false,-1);
    tracep->declBit(c+1155,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1156,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+443,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+952,"auto_in_arvalid", false,-1);
    tracep->declBus(c+953,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+954,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+955,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+956,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+957,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+958,"auto_in_rready", false,-1);
    tracep->declBit(c+1157,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1158,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+444,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+445,"auto_in_rlast", false,-1);
    tracep->declBit(c+1159,"auto_out_awready", false,-1);
    tracep->declBit(c+959,"auto_out_awvalid", false,-1);
    tracep->declBus(c+928,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+929,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+930,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+960,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1160,"auto_out_wready", false,-1);
    tracep->declBit(c+961,"auto_out_wvalid", false,-1);
    tracep->declBus(c+932,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+933,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+962,"auto_out_wlast", false,-1);
    tracep->declBit(c+1161,"auto_out_bready", false,-1);
    tracep->declBit(c+1162,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1156,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1163,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1164,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1165,"auto_out_arready", false,-1);
    tracep->declBit(c+963,"auto_out_arvalid", false,-1);
    tracep->declBus(c+937,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+938,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+939,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+964,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+958,"auto_out_rready", false,-1);
    tracep->declBit(c+1157,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1158,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+444,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+446,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1166,"auto_out_rlast", false,-1);
    tracep->declBit(c+961,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1167,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+965,"len", false,-1, 7,0);
    tracep->declBus(c+966,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+967,"len_1", false,-1, 7,0);
    tracep->declBus(c+968,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+959,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+969,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+970,"w_todo", false,-1, 8,0);
    tracep->declBit(c+962,"w_last", false,-1);
    tracep->declBit(c+1161,"nodeOut_bready", false,-1);
    tracep->declBus(c+34,"error_0", false,-1, 1,0);
    tracep->declBus(c+35,"error_1", false,-1, 1,0);
    tracep->declBus(c+36,"error_2", false,-1, 1,0);
    tracep->declBus(c+37,"error_3", false,-1, 1,0);
    tracep->declBus(c+38,"error_4", false,-1, 1,0);
    tracep->declBus(c+39,"error_5", false,-1, 1,0);
    tracep->declBus(c+40,"error_6", false,-1, 1,0);
    tracep->declBus(c+41,"error_7", false,-1, 1,0);
    tracep->declBus(c+42,"error_8", false,-1, 1,0);
    tracep->declBus(c+43,"error_9", false,-1, 1,0);
    tracep->declBus(c+44,"error_10", false,-1, 1,0);
    tracep->declBus(c+45,"error_11", false,-1, 1,0);
    tracep->declBus(c+46,"error_12", false,-1, 1,0);
    tracep->declBus(c+47,"error_13", false,-1, 1,0);
    tracep->declBus(c+48,"error_14", false,-1, 1,0);
    tracep->declBus(c+49,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+952,"io_enq_valid", false,-1);
    tracep->declBus(c+953,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+954,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+955,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+956,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+957,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1168,"io_deq_ready", false,-1);
    tracep->declBit(c+963,"io_deq_valid", false,-1);
    tracep->declBus(c+937,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+971,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+972,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+939,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+973,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+963,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1169,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+831,"io_enq_ready", false,-1);
    tracep->declBit(c+941,"io_enq_valid", false,-1);
    tracep->declBus(c+942,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+943,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+944,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+945,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+946,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1170,"io_deq_ready", false,-1);
    tracep->declBit(c+974,"io_deq_valid", false,-1);
    tracep->declBus(c+928,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+975,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+976,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+930,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+977,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+832,"full", false,-1);
    tracep->declBit(c+974,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1171,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+947,"io_enq_valid", false,-1);
    tracep->declBus(c+948,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+949,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+950,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1172,"io_deq_ready", false,-1);
    tracep->declBit(c+978,"io_deq_valid", false,-1);
    tracep->declBus(c+932,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+933,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+430,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+55,"ram", false,-1, 36,0);
    tracep->declBit(c+57,"full", false,-1);
    tracep->declBit(c+978,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1173,"do_enq", false,-1);
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
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+1174,"auto_in_awready", false,-1);
    tracep->declBit(c+979,"auto_in_awvalid", false,-1);
    tracep->declBus(c+928,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1108,"auto_in_wready", false,-1);
    tracep->declBit(c+981,"auto_in_wvalid", false,-1);
    tracep->declBus(c+932,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+933,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1175,"auto_in_bready", false,-1);
    tracep->declBit(c+58,"auto_in_bvalid", false,-1);
    tracep->declBus(c+59,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1176,"auto_in_arready", false,-1);
    tracep->declBit(c+982,"auto_in_arvalid", false,-1);
    tracep->declBus(c+937,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+983,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1177,"auto_in_rready", false,-1);
    tracep->declBit(c+61,"auto_in_rvalid", false,-1);
    tracep->declBus(c+62,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+64,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1176,"nodeIn_arready", false,-1);
    tracep->declBit(c+1174,"nodeIn_awready", false,-1);
    tracep->declBit(c+984,"w_sel0", false,-1);
    tracep->declBit(c+58,"w_full", false,-1);
    tracep->declBus(c+59,"w_id", false,-1, 3,0);
    tracep->declBit(c+65,"r_sel1", false,-1);
    tracep->declBit(c+66,"w_sel1", false,-1);
    tracep->declBit(c+61,"r_full", false,-1);
    tracep->declBus(c+62,"r_id", false,-1, 3,0);
    tracep->declBit(c+1178,"ren", false,-1);
    tracep->declBit(c+67,"rdata_REG", false,-1);
    tracep->declBus(c+68,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+69,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+985,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1178,"R0_en", false,-1);
    tracep->declBit(c+1260,"R0_clk", false,-1);
    tracep->declBus(c+72,"R0_data", false,-1, 31,0);
    tracep->declBus(c+986,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1179,"W0_en", false,-1);
    tracep->declBit(c+1260,"W0_clk", false,-1);
    tracep->declBus(c+932,"W0_data", false,-1, 31,0);
    tracep->declBus(c+933,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+831,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+941,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+942,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+943,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+945,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+946,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+947,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+948,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+950,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+951,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1155,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1156,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+443,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+952,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+953,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+954,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+955,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+956,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+957,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+958,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1157,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1158,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+444,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+445,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+831,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+941,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+942,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+943,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+945,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+946,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+947,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+948,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+950,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+951,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1155,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1156,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+443,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+952,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+953,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+954,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+955,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+956,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+957,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+958,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1158,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+444,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+445,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+1180,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+987,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+928,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+929,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+930,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1160,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+961,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+932,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+933,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+962,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1161,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1162,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1156,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1163,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1181,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+988,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+937,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+938,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+939,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+958,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1157,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1158,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+444,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1166,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1174,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+979,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+928,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1108,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+981,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+932,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+933,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1175,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+58,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+59,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1176,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+982,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+937,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+983,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1177,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+61,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+62,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+64,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+989,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+990,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+73,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+991,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+937,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+992,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+435,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+74,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+75,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+76,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+926,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+927,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+928,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+929,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+930,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+926,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+931,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+932,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+933,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1151,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1152,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+934,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+935,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+936,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+937,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+938,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+939,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1153,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1154,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+442,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+934,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1162,"in_0_bvalid", false,-1);
    tracep->declBit(c+1157,"in_0_rvalid", false,-1);
    tracep->declBit(c+1182,"in_0_wready", false,-1);
    tracep->declBit(c+1183,"in_0_awready", false,-1);
    tracep->declBit(c+1181,"in_0_arready", false,-1);
    tracep->declBit(c+1180,"anonIn_awready", false,-1);
    tracep->declBit(c+993,"requestARIO_0_0", false,-1);
    tracep->declBit(c+994,"requestARIO_0_1", false,-1);
    tracep->declBit(c+995,"requestARIO_0_2", false,-1);
    tracep->declBit(c+996,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+997,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+998,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+999,"arSel", false,-1, 15,0);
    tracep->declBus(c+1000,"awSel", false,-1, 15,0);
    tracep->declBus(c+1184,"rSel", false,-1, 15,0);
    tracep->declBus(c+1185,"bSel", false,-1, 15,0);
    tracep->declBit(c+77,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+78,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+79,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+80,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+81,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+82,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+83,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+84,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+85,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+86,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+87,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+88,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+89,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+90,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+91,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+92,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+93,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+94,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+95,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+96,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+97,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+98,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+99,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+100,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+101,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+102,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+103,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+104,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+105,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+106,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+107,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+108,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+109,"latched", false,-1);
    tracep->declBit(c+1001,"in_0_awvalid", false,-1);
    tracep->declBit(c+1002,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1003,"in_0_wvalid", false,-1);
    tracep->declBit(c+110,"idle_3", false,-1);
    tracep->declBit(c+1186,"anyValid", false,-1);
    tracep->declBus(c+1187,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+111,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1188,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1189,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1190,"prefixOR_1", false,-1);
    tracep->declBit(c+1191,"winner_3_1", false,-1);
    tracep->declBit(c+1192,"winner_3_2", false,-1);
    tracep->declBit(c+112,"state_3_0", false,-1);
    tracep->declBit(c+113,"state_3_1", false,-1);
    tracep->declBit(c+114,"state_3_2", false,-1);
    tracep->declBit(c+1193,"muxState_3_0", false,-1);
    tracep->declBit(c+1194,"muxState_3_1", false,-1);
    tracep->declBit(c+1195,"muxState_3_2", false,-1);
    tracep->declBit(c+115,"idle_4", false,-1);
    tracep->declBit(c+1196,"anyValid_1", false,-1);
    tracep->declBus(c+1197,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+116,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1198,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1199,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1200,"winner_4_0", false,-1);
    tracep->declBit(c+1201,"winner_4_2", false,-1);
    tracep->declBit(c+117,"state_4_0", false,-1);
    tracep->declBit(c+118,"state_4_2", false,-1);
    tracep->declBit(c+1202,"muxState_4_0", false,-1);
    tracep->declBit(c+1203,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+119,"io_enq_ready", false,-1);
    tracep->declBit(c+1002,"io_enq_valid", false,-1);
    tracep->declBus(c+1004,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1204,"io_deq_ready", false,-1);
    tracep->declBit(c+1005,"io_deq_valid", false,-1);
    tracep->declBus(c+1006,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+120,"wrap", false,-1);
    tracep->declBit(c+121,"wrap_1", false,-1);
    tracep->declBit(c+122,"maybe_full", false,-1);
    tracep->declBit(c+123,"ptr_match", false,-1);
    tracep->declBit(c+124,"empty", false,-1);
    tracep->declBit(c+125,"full", false,-1);
    tracep->declBit(c+1005,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1205,"do_deq", false,-1);
    tracep->declBit(c+1206,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+121,"R0_addr", false,-1);
    tracep->declBit(c+1335,"R0_en", false,-1);
    tracep->declBit(c+1260,"R0_clk", false,-1);
    tracep->declBus(c+126,"R0_data", false,-1, 2,0);
    tracep->declBit(c+120,"W0_addr", false,-1);
    tracep->declBit(c+1206,"W0_en", false,-1);
    tracep->declBit(c+1260,"W0_clk", false,-1);
    tracep->declBus(c+1004,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+127+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+1159,"auto_in_awready", false,-1);
    tracep->declBit(c+959,"auto_in_awvalid", false,-1);
    tracep->declBus(c+928,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+929,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+930,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+960,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1160,"auto_in_wready", false,-1);
    tracep->declBit(c+961,"auto_in_wvalid", false,-1);
    tracep->declBus(c+932,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+933,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+962,"auto_in_wlast", false,-1);
    tracep->declBit(c+1161,"auto_in_bready", false,-1);
    tracep->declBit(c+1162,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1156,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1163,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1164,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1165,"auto_in_arready", false,-1);
    tracep->declBit(c+963,"auto_in_arvalid", false,-1);
    tracep->declBus(c+937,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+938,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+939,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+964,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+958,"auto_in_rready", false,-1);
    tracep->declBit(c+1157,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1158,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+444,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+446,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1166,"auto_in_rlast", false,-1);
    tracep->declBit(c+1180,"auto_out_awready", false,-1);
    tracep->declBit(c+987,"auto_out_awvalid", false,-1);
    tracep->declBus(c+928,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+929,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+930,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1160,"auto_out_wready", false,-1);
    tracep->declBit(c+961,"auto_out_wvalid", false,-1);
    tracep->declBus(c+932,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+933,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+962,"auto_out_wlast", false,-1);
    tracep->declBit(c+1161,"auto_out_bready", false,-1);
    tracep->declBit(c+1162,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1156,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1163,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1181,"auto_out_arready", false,-1);
    tracep->declBit(c+988,"auto_out_arvalid", false,-1);
    tracep->declBus(c+937,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+938,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+939,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+958,"auto_out_rready", false,-1);
    tracep->declBit(c+1157,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1158,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+444,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1166,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+129,"io_enq_ready", false,-1);
    tracep->declBit(c+1109,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1207,"io_deq_ready", false,-1);
    tracep->declBit(c+130,"io_deq_valid", false,-1);
    tracep->declBit(c+131,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+130,"full", false,-1);
    tracep->declBit(c+131,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+132,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+133,"io_enq_ready", false,-1);
    tracep->declBit(c+1110,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1208,"io_deq_ready", false,-1);
    tracep->declBit(c+134,"io_deq_valid", false,-1);
    tracep->declBit(c+135,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+134,"full", false,-1);
    tracep->declBit(c+135,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+136,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+137,"io_enq_ready", false,-1);
    tracep->declBit(c+1111,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1209,"io_deq_ready", false,-1);
    tracep->declBit(c+138,"io_deq_valid", false,-1);
    tracep->declBit(c+139,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+138,"full", false,-1);
    tracep->declBit(c+139,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+140,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+141,"io_enq_ready", false,-1);
    tracep->declBit(c+1112,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1210,"io_deq_ready", false,-1);
    tracep->declBit(c+142,"io_deq_valid", false,-1);
    tracep->declBit(c+143,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+142,"full", false,-1);
    tracep->declBit(c+143,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+144,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+145,"io_enq_ready", false,-1);
    tracep->declBit(c+1113,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1211,"io_deq_ready", false,-1);
    tracep->declBit(c+146,"io_deq_valid", false,-1);
    tracep->declBit(c+147,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+146,"full", false,-1);
    tracep->declBit(c+147,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+148,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+149,"io_enq_ready", false,-1);
    tracep->declBit(c+1114,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1212,"io_deq_ready", false,-1);
    tracep->declBit(c+150,"io_deq_valid", false,-1);
    tracep->declBit(c+151,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+150,"full", false,-1);
    tracep->declBit(c+151,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+152,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+153,"io_enq_ready", false,-1);
    tracep->declBit(c+1115,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1213,"io_deq_ready", false,-1);
    tracep->declBit(c+154,"io_deq_valid", false,-1);
    tracep->declBit(c+155,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+154,"full", false,-1);
    tracep->declBit(c+155,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+156,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+157,"io_enq_ready", false,-1);
    tracep->declBit(c+1116,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1214,"io_deq_ready", false,-1);
    tracep->declBit(c+158,"io_deq_valid", false,-1);
    tracep->declBit(c+159,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+158,"full", false,-1);
    tracep->declBit(c+159,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+160,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+161,"io_enq_ready", false,-1);
    tracep->declBit(c+1117,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1215,"io_deq_ready", false,-1);
    tracep->declBit(c+162,"io_deq_valid", false,-1);
    tracep->declBit(c+163,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+162,"full", false,-1);
    tracep->declBit(c+163,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+164,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+165,"io_enq_ready", false,-1);
    tracep->declBit(c+1118,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1216,"io_deq_ready", false,-1);
    tracep->declBit(c+166,"io_deq_valid", false,-1);
    tracep->declBit(c+167,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+166,"full", false,-1);
    tracep->declBit(c+167,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+168,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+169,"io_enq_ready", false,-1);
    tracep->declBit(c+1119,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1217,"io_deq_ready", false,-1);
    tracep->declBit(c+170,"io_deq_valid", false,-1);
    tracep->declBit(c+171,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+170,"full", false,-1);
    tracep->declBit(c+171,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+172,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+173,"io_enq_ready", false,-1);
    tracep->declBit(c+1120,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1218,"io_deq_ready", false,-1);
    tracep->declBit(c+174,"io_deq_valid", false,-1);
    tracep->declBit(c+175,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+174,"full", false,-1);
    tracep->declBit(c+175,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+176,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+177,"io_enq_ready", false,-1);
    tracep->declBit(c+1121,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1219,"io_deq_ready", false,-1);
    tracep->declBit(c+178,"io_deq_valid", false,-1);
    tracep->declBit(c+179,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+178,"full", false,-1);
    tracep->declBit(c+179,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+180,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+181,"io_enq_ready", false,-1);
    tracep->declBit(c+1122,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1220,"io_deq_ready", false,-1);
    tracep->declBit(c+182,"io_deq_valid", false,-1);
    tracep->declBit(c+183,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+182,"full", false,-1);
    tracep->declBit(c+183,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+184,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+185,"io_enq_ready", false,-1);
    tracep->declBit(c+1123,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1221,"io_deq_ready", false,-1);
    tracep->declBit(c+186,"io_deq_valid", false,-1);
    tracep->declBit(c+187,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+186,"full", false,-1);
    tracep->declBit(c+187,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+188,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+189,"io_enq_ready", false,-1);
    tracep->declBit(c+1124,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1222,"io_deq_ready", false,-1);
    tracep->declBit(c+190,"io_deq_valid", false,-1);
    tracep->declBit(c+191,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+190,"full", false,-1);
    tracep->declBit(c+191,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+192,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+193,"io_enq_ready", false,-1);
    tracep->declBit(c+1125,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1223,"io_deq_ready", false,-1);
    tracep->declBit(c+194,"io_deq_valid", false,-1);
    tracep->declBit(c+195,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+194,"full", false,-1);
    tracep->declBit(c+195,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+196,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+197,"io_enq_ready", false,-1);
    tracep->declBit(c+1126,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1224,"io_deq_ready", false,-1);
    tracep->declBit(c+198,"io_deq_valid", false,-1);
    tracep->declBit(c+199,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+198,"full", false,-1);
    tracep->declBit(c+199,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+200,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+201,"io_enq_ready", false,-1);
    tracep->declBit(c+1127,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1225,"io_deq_ready", false,-1);
    tracep->declBit(c+202,"io_deq_valid", false,-1);
    tracep->declBit(c+203,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+202,"full", false,-1);
    tracep->declBit(c+203,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+204,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+205,"io_enq_ready", false,-1);
    tracep->declBit(c+1128,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1226,"io_deq_ready", false,-1);
    tracep->declBit(c+206,"io_deq_valid", false,-1);
    tracep->declBit(c+207,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+206,"full", false,-1);
    tracep->declBit(c+207,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+208,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+209,"io_enq_ready", false,-1);
    tracep->declBit(c+1129,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1227,"io_deq_ready", false,-1);
    tracep->declBit(c+210,"io_deq_valid", false,-1);
    tracep->declBit(c+211,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+210,"full", false,-1);
    tracep->declBit(c+211,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+212,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1130,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1228,"io_deq_ready", false,-1);
    tracep->declBit(c+214,"io_deq_valid", false,-1);
    tracep->declBit(c+215,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+214,"full", false,-1);
    tracep->declBit(c+215,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+216,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1131,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1229,"io_deq_ready", false,-1);
    tracep->declBit(c+218,"io_deq_valid", false,-1);
    tracep->declBit(c+219,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+218,"full", false,-1);
    tracep->declBit(c+219,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+220,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1132,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1230,"io_deq_ready", false,-1);
    tracep->declBit(c+222,"io_deq_valid", false,-1);
    tracep->declBit(c+223,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+222,"full", false,-1);
    tracep->declBit(c+223,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+224,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1133,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1231,"io_deq_ready", false,-1);
    tracep->declBit(c+226,"io_deq_valid", false,-1);
    tracep->declBit(c+227,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+226,"full", false,-1);
    tracep->declBit(c+227,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+228,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1134,"io_enq_valid", false,-1);
    tracep->declBit(c+960,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1232,"io_deq_ready", false,-1);
    tracep->declBit(c+230,"io_deq_valid", false,-1);
    tracep->declBit(c+231,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+230,"full", false,-1);
    tracep->declBit(c+231,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+232,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1135,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1233,"io_deq_ready", false,-1);
    tracep->declBit(c+234,"io_deq_valid", false,-1);
    tracep->declBit(c+235,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+234,"full", false,-1);
    tracep->declBit(c+235,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+236,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1136,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1234,"io_deq_ready", false,-1);
    tracep->declBit(c+238,"io_deq_valid", false,-1);
    tracep->declBit(c+239,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+238,"full", false,-1);
    tracep->declBit(c+239,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+240,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1137,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1235,"io_deq_ready", false,-1);
    tracep->declBit(c+242,"io_deq_valid", false,-1);
    tracep->declBit(c+243,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+242,"full", false,-1);
    tracep->declBit(c+243,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+244,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1138,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1236,"io_deq_ready", false,-1);
    tracep->declBit(c+246,"io_deq_valid", false,-1);
    tracep->declBit(c+247,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+246,"full", false,-1);
    tracep->declBit(c+247,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+248,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1139,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1237,"io_deq_ready", false,-1);
    tracep->declBit(c+250,"io_deq_valid", false,-1);
    tracep->declBit(c+251,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+250,"full", false,-1);
    tracep->declBit(c+251,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+252,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1140,"io_enq_valid", false,-1);
    tracep->declBit(c+964,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1238,"io_deq_ready", false,-1);
    tracep->declBit(c+254,"io_deq_valid", false,-1);
    tracep->declBit(c+255,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+254,"full", false,-1);
    tracep->declBit(c+255,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+256,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBit(c+831,"auto_master_out_awready", false,-1);
    tracep->declBit(c+941,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+942,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+943,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+945,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+946,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_master_out_wready", false,-1);
    tracep->declBit(c+947,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+948,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+950,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+951,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1155,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1156,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+443,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_master_out_arready", false,-1);
    tracep->declBit(c+952,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+953,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+954,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+955,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+956,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+957,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+958,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1157,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1158,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+444,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+445,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBit(c+1330,"io_interrupt", false,-1);
    tracep->declBit(c+831,"io_master_awready", false,-1);
    tracep->declBit(c+941,"io_master_awvalid", false,-1);
    tracep->declBus(c+942,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+943,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+945,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+946,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"io_master_wready", false,-1);
    tracep->declBit(c+947,"io_master_wvalid", false,-1);
    tracep->declBus(c+948,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+950,"io_master_wlast", false,-1);
    tracep->declBit(c+951,"io_master_bready", false,-1);
    tracep->declBit(c+1155,"io_master_bvalid", false,-1);
    tracep->declBus(c+1156,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+443,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"io_master_arready", false,-1);
    tracep->declBit(c+952,"io_master_arvalid", false,-1);
    tracep->declBus(c+953,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+954,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+955,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+956,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+957,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+958,"io_master_rready", false,-1);
    tracep->declBit(c+1157,"io_master_rvalid", false,-1);
    tracep->declBus(c+1158,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+444,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+445,"io_master_rlast", false,-1);
    tracep->declBit(c+1336,"io_slave_awready", false,-1);
    tracep->declBit(c+1330,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1337,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1338,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1339,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1340,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1341,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1342,"io_slave_wready", false,-1);
    tracep->declBit(c+1330,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1338,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1337,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1330,"io_slave_wlast", false,-1);
    tracep->declBit(c+1330,"io_slave_bready", false,-1);
    tracep->declBit(c+1343,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1344,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1345,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1346,"io_slave_arready", false,-1);
    tracep->declBit(c+1330,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1337,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1338,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1339,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1340,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1341,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1330,"io_slave_rready", false,-1);
    tracep->declBit(c+1347,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1348,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1349,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1350,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1351,"io_slave_rlast", false,-1);
    tracep->declBit(c+257,"DIFFTEST", false,-1);
    tracep->declBus(c+1141,"pc", false,-1, 31,0);
    tracep->declBus(c+1142,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1143,"pc_valid", false,-1);
    tracep->declBit(c+1288,"if_ready", false,-1);
    tracep->declBus(c+875,"inst", false,-1, 31,0);
    tracep->declBit(c+1289,"if_valid", false,-1);
    tracep->declBit(c+890,"id_ready", false,-1);
    tracep->declBus(c+1352,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1352,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+891,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1290,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1337,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1339,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+258,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1337,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+415,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+259,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+416,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1340,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+260,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1341,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+261,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+417,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+418,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1330,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+1291,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1330,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+1292,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+419,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+1330,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+892,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+1293,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1239,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+893,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1353,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+420,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+833,"id_valid", false,-1);
    tracep->declBit(c+834,"ex_ready", false,-1);
    tracep->declBus(c+835,"op", false,-1, 6,0);
    tracep->declBus(c+262,"rd", false,-1, 4,0);
    tracep->declBus(c+836,"funct3", false,-1, 2,0);
    tracep->declBus(c+263,"rs1", false,-1, 4,0);
    tracep->declBus(c+264,"rs2", false,-1, 4,0);
    tracep->declBus(c+265,"imm", false,-1, 31,0);
    tracep->declBus(c+266,"funct7", false,-1, 6,0);
    tracep->declBus(c+267,"shamt", false,-1, 4,0);
    tracep->declBit(c+837,"sram_lsu_read", false,-1);
    tracep->declBit(c+838,"sram_lsu_write", false,-1);
    tracep->declBit(c+876,"ls_done", false,-1);
    tracep->declBit(c+268,"ex_valid", false,-1);
    tracep->declBit(c+269,"wb_ready", false,-1);
    tracep->declBus(c+270,"res", false,-1, 31,0);
    tracep->declBit(c+839,"ls_valid", false,-1);
    tracep->declBit(c+840,"ls_wen", false,-1);
    tracep->declBus(c+841,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+406,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+842,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+843,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+844,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+845,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1339,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1339,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1354,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1354,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+271,"mepc", false,-1, 31,0);
    tracep->declBus(c+272,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+273,"mstatus", false,-1, 31,0);
    tracep->declBus(c+274,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+275,"mcause", false,-1, 31,0);
    tracep->declBus(c+276,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+277,"mtvec", false,-1, 31,0);
    tracep->declBus(c+278,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+279,"gpr_wen", false,-1);
    tracep->declBit(c+280,"mepc_wen", false,-1);
    tracep->declBit(c+281,"mstatus_wen", false,-1);
    tracep->declBit(c+282,"mcause_wen", false,-1);
    tracep->declBit(c+283,"mtvec_wen", false,-1);
    tracep->declBus(c+769,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+770,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1294,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+771,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1295,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1296,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+772,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+773,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1355,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+421,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1356,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+422,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+774,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+775,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+776,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+777,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+423,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+424,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+778,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+1297,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+779,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+1007,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1240,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+780,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+781,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+1298,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1241,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+782,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+783,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+425,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+1008,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1009,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1010,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+284,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1011,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1012,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1013,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1014,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+285,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1015,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+286,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1016,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1017,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1018,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1019,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+287,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+288,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1020,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+846,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1021,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+289,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+290,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+1022,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+1023,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+291,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+292,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+1024,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+1025,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+293,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+1299,"wb_done", false,-1);
    tracep->declBit(c+257,"difftest", false,-1);
    tracep->declBus(c+294,"xrd", false,-1, 31,0);
    tracep->declBus(c+295,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+296,"rf_wen", false,-1);
    tracep->declBus(c+297,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+298,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+299,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+300,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+301,"mepc_en", false,-1);
    tracep->declBit(c+302,"mstatus_en", false,-1);
    tracep->declBit(c+303,"mcause_en", false,-1);
    tracep->declBit(c+304,"mtvec_en", false,-1);
    tracep->declBus(c+305,"r1", false,-1, 31,0);
    tracep->declBus(c+306,"r2", false,-1, 31,0);
    tracep->declBus(c+307,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+308,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBus(c+270,"ex_o", false,-1, 31,0);
    tracep->declBit(c+833,"id_valid_i", false,-1);
    tracep->declBit(c+834,"ex_ready_o", false,-1);
    tracep->declBit(c+268,"ex_valid_o", false,-1);
    tracep->declBit(c+269,"wb_ready_i", false,-1);
    tracep->declBus(c+835,"op_i", false,-1, 6,0);
    tracep->declBus(c+836,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+265,"imm_i", false,-1, 31,0);
    tracep->declBus(c+266,"funct7_i", false,-1, 6,0);
    tracep->declBus(c+267,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+305,"r1_i", false,-1, 31,0);
    tracep->declBus(c+306,"r2_i", false,-1, 31,0);
    tracep->declBit(c+837,"ls_read_o", false,-1);
    tracep->declBit(c+838,"ls_write_o", false,-1);
    tracep->declBit(c+876,"ls_done_i", false,-1);
    tracep->declBit(c+839,"ls_valid_o", false,-1);
    tracep->declBit(c+840,"ls_wen_o", false,-1);
    tracep->declBus(c+841,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+406,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+842,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+843,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+844,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+845,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1339,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1339,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1354,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1354,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+769,"ls_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1141,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1142,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+271,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+273,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+275,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+277,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+272,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+274,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+276,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+278,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+279,"gpr_wen_o", false,-1);
    tracep->declBit(c+280,"mepc_wen_o", false,-1);
    tracep->declBit(c+281,"mstatus_wen_o", false,-1);
    tracep->declBit(c+282,"mcause_wen_o", false,-1);
    tracep->declBit(c+283,"mtvec_wen_o", false,-1);
    tracep->declBit(c+834,"ex_ready", false,-1);
    tracep->declBit(c+268,"ex_valid", false,-1);
    tracep->declBit(c+837,"ls_read_reg", false,-1);
    tracep->declBit(c+838,"ls_write_reg", false,-1);
    tracep->declBus(c+270,"ex_reg", false,-1, 31,0);
    tracep->declBus(c+1142,"dnpc_reg", false,-1, 31,0);
    tracep->declBit(c+279,"gpr_wen_reg", false,-1);
    tracep->declBus(c+272,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+274,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+276,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+278,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+280,"mepc_wen_reg", false,-1);
    tracep->declBit(c+281,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+282,"mcause_wen_reg", false,-1);
    tracep->declBit(c+283,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+309,"ram_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1341,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1354,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1357,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+1358,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+847,"state", false,-1, 1,0);
    tracep->declBus(c+1300,"next_state", false,-1, 1,0);
    tracep->declBus(c+1144,"a", false,-1, 31,0);
    tracep->declBus(c+848,"b", false,-1, 31,0);
    tracep->declBus(c+1145,"ex", false,-1, 31,0);
    tracep->declBus(c+849,"csr", false,-1, 31,0);
    tracep->declBus(c+1301,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+850,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+407,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+850,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+850,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+851,"mepc_wen", false,-1);
    tracep->declBit(c+852,"mstatus_wen", false,-1);
    tracep->declBit(c+853,"mcause_wen", false,-1);
    tracep->declBit(c+854,"mtvec_wen", false,-1);
    tracep->declBus(c+1302,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+265,"offset", false,-1, 31,0);
    tracep->declBit(c+855,"jalen", false,-1);
    tracep->declBit(c+856,"jalren", false,-1);
    tracep->declBit(c+408,"beqen", false,-1);
    tracep->declBit(c+409,"bneen", false,-1);
    tracep->declBit(c+410,"blten", false,-1);
    tracep->declBit(c+411,"bgeen", false,-1);
    tracep->declBit(c+412,"bltuen", false,-1);
    tracep->declBit(c+413,"bgeuen", false,-1);
    tracep->declBit(c+857,"ecall_en", false,-1);
    tracep->declBit(c+414,"mret_en", false,-1);
    tracep->declBit(c+1146,"dnpc", false,-1);
    tracep->declBit(c+858,"gpr_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBus(c+875,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1289,"if_valid_i", false,-1);
    tracep->declBit(c+890,"id_ready_o", false,-1);
    tracep->declBit(c+833,"id_valid_o", false,-1);
    tracep->declBit(c+834,"ex_ready_i", false,-1);
    tracep->declBus(c+835,"op_o", false,-1, 6,0);
    tracep->declBus(c+262,"rd_o", false,-1, 4,0);
    tracep->declBus(c+836,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+263,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+264,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+265,"imm_o", false,-1, 31,0);
    tracep->declBus(c+266,"funct7_o", false,-1, 6,0);
    tracep->declBus(c+267,"shamt_o", false,-1, 4,0);
    tracep->declBus(c+877,"op", false,-1, 6,0);
    tracep->declBus(c+878,"rd", false,-1, 4,0);
    tracep->declBus(c+879,"funct3", false,-1, 2,0);
    tracep->declBus(c+880,"rs1", false,-1, 4,0);
    tracep->declBus(c+881,"rs2", false,-1, 4,0);
    tracep->declBus(c+882,"immI", false,-1, 31,0);
    tracep->declBus(c+883,"immU", false,-1, 31,0);
    tracep->declBus(c+884,"immS", false,-1, 31,0);
    tracep->declBus(c+885,"immB", false,-1, 31,0);
    tracep->declBus(c+886,"immJ", false,-1, 31,0);
    tracep->declBus(c+887,"imm", false,-1, 31,0);
    tracep->declBus(c+888,"funct7", false,-1, 6,0);
    tracep->declBus(c+889,"shamt", false,-1, 4,0);
    tracep->declBit(c+890,"id_ready_reg", false,-1);
    tracep->declBit(c+833,"id_valid_reg", false,-1);
    tracep->declBus(c+835,"op_reg", false,-1, 6,0);
    tracep->declBus(c+262,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+836,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+263,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+264,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+265,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+266,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+267,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+1359,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1360,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+894,"state", false,-1);
    tracep->declBit(c+1303,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBus(c+1141,"pc_i", false,-1, 31,0);
    tracep->declBus(c+875,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1143,"pc_valid_i", false,-1);
    tracep->declBit(c+1288,"if_ready_o", false,-1);
    tracep->declBit(c+1289,"if_valid_o", false,-1);
    tracep->declBit(c+890,"id_ready_i", false,-1);
    tracep->declBit(c+1299,"wb_done_i", false,-1);
    tracep->declBit(c+1291,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1330,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1337,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1352,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1339,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1340,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1341,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1292,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1330,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1352,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1337,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1353,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1330,"if_axi_bready_o", false,-1);
    tracep->declBit(c+419,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+415,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+417,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1293,"if_axi_arready_i", false,-1);
    tracep->declBit(c+892,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+259,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+891,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+258,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+260,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+261,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+893,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1239,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+416,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1290,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+418,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+420,"if_axi_rlast_i", false,-1);
    tracep->declBit(c+1288,"if_ready_reg", false,-1);
    tracep->declBit(c+1289,"if_valid_reg", false,-1);
    tracep->declBus(c+875,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+1341,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1354,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1357,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1358,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+1304,"state", false,-1, 1,0);
    tracep->declBus(c+1305,"next_state", false,-1, 1,0);
    tracep->declBit(c+892,"axi_arvalid", false,-1);
    tracep->declBit(c+893,"axi_rready", false,-1);
    tracep->declBus(c+259,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+891,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+258,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+260,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+261,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1359,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1360,"FETCH", false,-1, 0,0);
    tracep->declBit(c+895,"axi_state", false,-1);
    tracep->declBit(c+1306,"fetch_start", false,-1);
    tracep->declBus(c+896,"axi_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBit(c+837,"sram_lsu_read", false,-1);
    tracep->declBit(c+838,"sram_lsu_write", false,-1);
    tracep->declBit(c+876,"LSU_DONE", false,-1);
    tracep->declBus(c+769,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+839,"valid", false,-1);
    tracep->declBit(c+840,"wen", false,-1);
    tracep->declBus(c+841,"waddr", false,-1, 31,0);
    tracep->declBus(c+406,"wdata", false,-1, 31,0);
    tracep->declBus(c+842,"raddr", false,-1, 31,0);
    tracep->declBus(c+843,"wmask", false,-1, 3,0);
    tracep->declBus(c+844,"awsize", false,-1, 2,0);
    tracep->declBus(c+845,"arsize", false,-1, 2,0);
    tracep->declBus(c+1339,"awlen", false,-1, 7,0);
    tracep->declBus(c+1339,"arlen", false,-1, 7,0);
    tracep->declBus(c+1354,"awburst", false,-1, 1,0);
    tracep->declBus(c+1354,"arburst", false,-1, 1,0);
    tracep->declBit(c+1297,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+778,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1355,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+770,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+772,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+774,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+776,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1007,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+779,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1294,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1296,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+783,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+780,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1240,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+421,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+423,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1298,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+781,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+1356,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+771,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+773,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+775,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+777,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+782,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1241,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+422,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1295,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+424,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+425,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+1341,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1354,"READ", false,-1, 1,0);
    tracep->declBus(c+1357,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1358,"DONE", false,-1, 1,0);
    tracep->declBus(c+784,"state", false,-1, 1,0);
    tracep->declBit(c+778,"axi_awvalid", false,-1);
    tracep->declBit(c+779,"axi_wvalid", false,-1);
    tracep->declBus(c+1355,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+770,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+785,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+772,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+774,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+776,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+786,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+780,"axi_bready", false,-1);
    tracep->declBit(c+783,"axi_wlast", false,-1);
    tracep->declBit(c+781,"axi_arvalid", false,-1);
    tracep->declBit(c+782,"axi_rready", false,-1);
    tracep->declBus(c+1356,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+771,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+773,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+775,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+777,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBus(c+1141,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1142,"dnpc_i", false,-1, 31,0);
    tracep->declBit(c+1143,"pc_valid_o", false,-1);
    tracep->declBit(c+1288,"if_ready_i", false,-1);
    tracep->declBit(c+1143,"pc_valid_reg", false,-1);
    tracep->declBus(c+1141,"pc_reg", false,-1, 31,0);
    tracep->declBus(c+1359,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1360,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+1147,"state", false,-1);
    tracep->declBit(c+1307,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1361,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1362,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBus(c+294,"wdata", false,-1, 31,0);
    tracep->declBus(c+295,"waddr", false,-1, 4,0);
    tracep->declBit(c+296,"wen", false,-1);
    tracep->declBus(c+263,"raddr1", false,-1, 4,0);
    tracep->declBus(c+305,"r1", false,-1, 31,0);
    tracep->declBus(c+264,"raddr2", false,-1, 4,0);
    tracep->declBus(c+306,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+310+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBit(c+268,"EXU_VALID", false,-1);
    tracep->declBit(c+269,"WBU_READY", false,-1);
    tracep->declBit(c+1299,"wbu_done", false,-1);
    tracep->declBit(c+257,"difftest", false,-1);
    tracep->declBus(c+294,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+270,"res", false,-1, 31,0);
    tracep->declBus(c+295,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+262,"rd", false,-1, 4,0);
    tracep->declBit(c+296,"wen_reg", false,-1);
    tracep->declBit(c+279,"gpr_wen", false,-1);
    tracep->declBus(c+272,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+274,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+276,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+278,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+297,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+298,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+299,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+300,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+280,"mepc_wen", false,-1);
    tracep->declBit(c+281,"mstatus_wen", false,-1);
    tracep->declBit(c+282,"mcause_wen", false,-1);
    tracep->declBit(c+283,"mtvec_wen", false,-1);
    tracep->declBit(c+301,"mepc_wen_reg", false,-1);
    tracep->declBit(c+302,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+303,"mcause_wen_reg", false,-1);
    tracep->declBit(c+304,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+270,"xrd", false,-1, 31,0);
    tracep->declBus(c+262,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+279,"o_rf_wen", false,-1);
    tracep->declBus(c+272,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+274,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+276,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+278,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+269,"wbu_ready", false,-1);
    tracep->declBus(c+1341,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1354,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1357,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1358,"NULL", false,-1, 1,0);
    tracep->declBus(c+1308,"state", false,-1, 1,0);
    tracep->declBus(c+1309,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBit(c+1291,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1330,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1337,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1352,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1339,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1340,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1341,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1292,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1330,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1352,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1337,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1353,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1330,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+419,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+415,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+417,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1293,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+892,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+259,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+891,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+258,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+260,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+261,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+893,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1239,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+416,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1290,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+418,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+420,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1297,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+778,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1355,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+770,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+772,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+774,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+776,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1007,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+779,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1294,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1296,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+783,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+780,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1240,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+421,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+423,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1298,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+781,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1356,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+771,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+773,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+775,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+777,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+782,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1241,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+422,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1295,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+424,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+425,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+831,"io_master_awready", false,-1);
    tracep->declBit(c+941,"io_master_awvalid", false,-1);
    tracep->declBus(c+942,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+943,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+945,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+946,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"io_master_wready", false,-1);
    tracep->declBit(c+947,"io_master_wvalid", false,-1);
    tracep->declBus(c+948,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+950,"io_master_wlast", false,-1);
    tracep->declBit(c+951,"io_master_bready", false,-1);
    tracep->declBit(c+1155,"io_master_bvalid", false,-1);
    tracep->declBus(c+1156,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+443,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"io_master_arready", false,-1);
    tracep->declBit(c+952,"io_master_arvalid", false,-1);
    tracep->declBus(c+953,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+954,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+955,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+956,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+957,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+958,"io_master_rready", false,-1);
    tracep->declBit(c+1157,"io_master_rvalid", false,-1);
    tracep->declBus(c+1158,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+444,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+434,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+445,"io_master_rlast", false,-1);
    tracep->declBit(c+846,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1020,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1014,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1008,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1012,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1016,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1018,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+289,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1021,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1009,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1011,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1025,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1022,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+290,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+285,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+287,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+291,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1023,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1015,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1010,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1013,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1017,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1019,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1024,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+292,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+286,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+284,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+288,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+293,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+307,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+308,"marchid", false,-1, 31,0);
    tracep->declBus(c+1026,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1027,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1028,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1242,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1029,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1030,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1031,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+897,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+436,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+898,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+437,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1032,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1033,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1034,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1035,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+438,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+439,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1036,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1310,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1037,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+431,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+440,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1038,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1039,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1040,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1243,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1041,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1042,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+441,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1341,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1354,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1357,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1358,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+899,"state", false,-1, 1,0);
    tracep->declBus(c+1311,"next_state", false,-1, 1,0);
    tracep->declBus(c+1363,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1364,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1043,"sel_clint", false,-1);
    tracep->declBus(c+1365,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1366,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1044,"sel_mvendorid", false,-1);
    tracep->declBit(c+1045,"sel_marchid", false,-1);
    tracep->declBit(c+1046,"sel_id", false,-1);
    tracep->declBus(c+1047,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1048,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1049,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+432,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1050,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1051,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1052,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1053,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1367,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1054,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1368,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1055,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1056,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1057,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1058,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1369,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1370,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1371,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1335,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1059,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1335,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1335,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1060,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1061,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1335,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1335,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1062,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1063,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1372,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1362,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1373,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBus(c+1338,"din", false,-1, 31,0);
    tracep->declBus(c+308,"dout", false,-1, 31,0);
    tracep->declBit(c+1330,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1362,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1338,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBus(c+299,"din", false,-1, 31,0);
    tracep->declBus(c+275,"dout", false,-1, 31,0);
    tracep->declBit(c+303,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1362,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1338,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBus(c+297,"din", false,-1, 31,0);
    tracep->declBus(c+271,"dout", false,-1, 31,0);
    tracep->declBit(c+301,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1362,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1374,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBus(c+298,"din", false,-1, 31,0);
    tracep->declBus(c+273,"dout", false,-1, 31,0);
    tracep->declBit(c+302,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1362,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1338,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBus(c+300,"din", false,-1, 31,0);
    tracep->declBus(c+277,"dout", false,-1, 31,0);
    tracep->declBit(c+304,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1362,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1375,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBus(c+1338,"din", false,-1, 31,0);
    tracep->declBus(c+307,"dout", false,-1, 31,0);
    tracep->declBit(c+1330,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1287,"rst", false,-1);
    tracep->declBit(c+846,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1020,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1014,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1008,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1012,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1016,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1018,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+289,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1021,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1009,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1011,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1025,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1022,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+290,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+285,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+287,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+291,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1023,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1015,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1010,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1013,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1017,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1019,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1024,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+292,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+286,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+284,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+288,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+293,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+846,"axi_awready", false,-1);
    tracep->declBit(c+289,"axi_wready", false,-1);
    tracep->declBit(c+290,"axi_bvalid", false,-1);
    tracep->declBit(c+291,"axi_arready", false,-1);
    tracep->declBit(c+292,"axi_rvalid", false,-1);
    tracep->declBit(c+293,"axi_rlast", false,-1);
    tracep->declBus(c+287,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+288,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+285,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+286,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+284,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+342,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1363,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1364,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+343,"mtime", false,-1, 63,0);
    tracep->declBus(c+433,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"io_d", false,-1);
    tracep->declBit(c+345,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"io_d", false,-1);
    tracep->declBit(c+345,"io_q", false,-1);
    tracep->declBit(c+345,"sync_0", false,-1);
    tracep->declBit(c+346,"sync_1", false,-1);
    tracep->declBit(c+347,"sync_2", false,-1);
    tracep->declBit(c+348,"sync_3", false,-1);
    tracep->declBit(c+349,"sync_4", false,-1);
    tracep->declBit(c+350,"sync_5", false,-1);
    tracep->declBit(c+351,"sync_6", false,-1);
    tracep->declBit(c+352,"sync_7", false,-1);
    tracep->declBit(c+353,"sync_8", false,-1);
    tracep->declBit(c+354,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+912,"auto_in_psel", false,-1);
    tracep->declBit(c+428,"auto_in_penable", false,-1);
    tracep->declBit(c+902,"auto_in_pwrite", false,-1);
    tracep->declBus(c+911,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1329,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+456,"auto_in_pready", false,-1);
    tracep->declBit(c+1334,"auto_in_pslverr", false,-1);
    tracep->declBus(c+457,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1262,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1263,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1264,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1265,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1266,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1267,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1268,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1269,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1270,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1271,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBus(c+1064,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+912,"in_psel", false,-1);
    tracep->declBit(c+428,"in_penable", false,-1);
    tracep->declBus(c+1329,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+902,"in_pwrite", false,-1);
    tracep->declBus(c+903,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+456,"in_pready", false,-1);
    tracep->declBus(c+457,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1334,"in_pslverr", false,-1);
    tracep->declBus(c+1262,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1263,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1264,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1265,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1266,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1267,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1268,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1269,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1270,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1271,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1339,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1376,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1377,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1378,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1379,"ONE", false,-1, 7,0);
    tracep->declBus(c+1380,"TWO", false,-1, 7,0);
    tracep->declBus(c+1381,"THREE", false,-1, 7,0);
    tracep->declBus(c+1382,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1383,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1384,"SIX", false,-1, 7,0);
    tracep->declBus(c+1385,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1386,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1387,"NINE", false,-1, 7,0);
    tracep->declBus(c+1388,"A", false,-1, 7,0);
    tracep->declBus(c+1389,"B", false,-1, 7,0);
    tracep->declBus(c+1390,"C", false,-1, 7,0);
    tracep->declBus(c+1391,"D", false,-1, 7,0);
    tracep->declBus(c+1392,"E", false,-1, 7,0);
    tracep->declBus(c+1393,"F", false,-1, 7,0);
    tracep->declBus(c+458,"led_reg", false,-1, 15,0);
    tracep->declBus(c+459,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+460+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1065,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1066,"write_en", false,-1);
    tracep->declBit(c+1067,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+909,"auto_in_psel", false,-1);
    tracep->declBit(c+910,"auto_in_penable", false,-1);
    tracep->declBit(c+902,"auto_in_pwrite", false,-1);
    tracep->declBus(c+911,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1329,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+454,"auto_in_pready", false,-1);
    tracep->declBit(c+1333,"auto_in_pslverr", false,-1);
    tracep->declBus(c+455,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1272,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1273,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBus(c+1064,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+909,"in_psel", false,-1);
    tracep->declBit(c+910,"in_penable", false,-1);
    tracep->declBus(c+1329,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+902,"in_pwrite", false,-1);
    tracep->declBus(c+903,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+454,"in_pready", false,-1);
    tracep->declBus(c+455,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1333,"in_pslverr", false,-1);
    tracep->declBit(c+1272,"ps2_clk", false,-1);
    tracep->declBit(c+1273,"ps2_data", false,-1);
    tracep->declBus(c+1394,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1395,"EXP", false,-1, 7,0);
    tracep->declBus(c+870,"state", false,-1, 1,0);
    tracep->declBus(c+871,"counter", false,-1, 3,0);
    tracep->declBus(c+872,"buffer", false,-1, 7,0);
    tracep->declBus(c+873,"buffer1", false,-1, 7,0);
    tracep->declBus(c+874,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1312,"ready", false,-1);
    tracep->declBus(c+1313,"rdata", false,-1, 31,0);
    tracep->declBit(c+1068,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+989,"auto_in_awvalid", false,-1);
    tracep->declBit(c+990,"auto_in_wvalid", false,-1);
    tracep->declBit(c+73,"auto_in_arready", false,-1);
    tracep->declBit(c+991,"auto_in_arvalid", false,-1);
    tracep->declBus(c+937,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+992,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+435,"auto_in_rready", false,-1);
    tracep->declBit(c+74,"auto_in_rvalid", false,-1);
    tracep->declBus(c+75,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+76,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+74,"state", false,-1);
    tracep->declBus(c+76,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+75,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1069,"raddr", false,-1, 31,0);
    tracep->declBit(c+1070,"ren", false,-1);
    tracep->declBus(c+1071,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+913,"auto_in_psel", false,-1);
    tracep->declBit(c+429,"auto_in_penable", false,-1);
    tracep->declBit(c+902,"auto_in_pwrite", false,-1);
    tracep->declBus(c+900,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1285,"auto_in_pready", false,-1);
    tracep->declBit(c+1330,"auto_in_pslverr", false,-1);
    tracep->declBus(c+12,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1256,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1257,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1283,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBus(c+900,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+913,"in_psel", false,-1);
    tracep->declBit(c+429,"in_penable", false,-1);
    tracep->declBus(c+1329,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+902,"in_pwrite", false,-1);
    tracep->declBus(c+903,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1285,"in_pready", false,-1);
    tracep->declBus(c+12,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1330,"in_pslverr", false,-1);
    tracep->declBit(c+1256,"qspi_sck", false,-1);
    tracep->declBit(c+1257,"qspi_ce_n", false,-1);
    tracep->declBus(c+1283,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1283,"din", false,-1, 3,0);
    tracep->declBus(c+1258,"dout", false,-1, 3,0);
    tracep->declBus(c+1259,"douten", false,-1, 3,0);
    tracep->declBit(c+1314,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1260,"clk_i", false,-1);
    tracep->declBit(c+1261,"rst_i", false,-1);
    tracep->declBus(c+900,"adr_i", false,-1, 31,0);
    tracep->declBus(c+903,"dat_i", false,-1, 31,0);
    tracep->declBus(c+12,"dat_o", false,-1, 31,0);
    tracep->declBus(c+904,"sel_i", false,-1, 3,0);
    tracep->declBit(c+913,"cyc_i", false,-1);
    tracep->declBit(c+913,"stb_i", false,-1);
    tracep->declBit(c+1314,"ack_o", false,-1);
    tracep->declBit(c+902,"we_i", false,-1);
    tracep->declBit(c+1256,"sck", false,-1);
    tracep->declBit(c+1257,"ce_n", false,-1);
    tracep->declBus(c+1283,"din", false,-1, 3,0);
    tracep->declBus(c+1258,"dout", false,-1, 3,0);
    tracep->declBus(c+1259,"douten", false,-1, 3,0);
    tracep->declBus(c+1359,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1360,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+468,"mr_sck", false,-1);
    tracep->declBit(c+469,"mr_ce_n", false,-1);
    tracep->declBus(c+1283,"mr_din", false,-1, 3,0);
    tracep->declBus(c+470,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+471,"mr_doe", false,-1);
    tracep->declBit(c+472,"mw_sck", false,-1);
    tracep->declBit(c+473,"mw_ce_n", false,-1);
    tracep->declBus(c+1283,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1244,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+474,"mw_doe", false,-1);
    tracep->declBit(c+1245,"mr_rd", false,-1);
    tracep->declBit(c+475,"mr_done", false,-1);
    tracep->declBit(c+1246,"mw_wr", false,-1);
    tracep->declBit(c+1247,"mw_done", false,-1);
    tracep->declBit(c+913,"wb_valid", false,-1);
    tracep->declBit(c+1072,"wb_we", false,-1);
    tracep->declBit(c+1073,"wb_re", false,-1);
    tracep->declBit(c+476,"state", false,-1);
    tracep->declBit(c+1248,"nstate", false,-1);
    tracep->declBus(c+1074,"size", false,-1, 2,0);
    tracep->declBus(c+1075,"byte0", false,-1, 7,0);
    tracep->declBus(c+1076,"byte1", false,-1, 7,0);
    tracep->declBus(c+1077,"byte2", false,-1, 7,0);
    tracep->declBus(c+1078,"byte3", false,-1, 7,0);
    tracep->declBus(c+1079,"wdata", false,-1, 31,0);
    tracep->declBit(c+691,"qpi_flag", false,-1);
    tracep->declBit(c+692,"qpi_sck", false,-1);
    tracep->declBit(c+693,"qpi_ce_n", false,-1);
    tracep->declBus(c+694,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+695,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+696,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1315,"rst_n", false,-1);
    tracep->declBus(c+1080,"addr", false,-1, 23,0);
    tracep->declBit(c+1245,"rd", false,-1);
    tracep->declBus(c+1396,"size", false,-1, 2,0);
    tracep->declBit(c+475,"done", false,-1);
    tracep->declBus(c+12,"line", false,-1, 31,0);
    tracep->declBit(c+468,"sck", false,-1);
    tracep->declBit(c+469,"ce_n", false,-1);
    tracep->declBus(c+1283,"din", false,-1, 3,0);
    tracep->declBus(c+470,"dout", false,-1, 3,0);
    tracep->declBit(c+471,"douten", false,-1);
    tracep->declBus(c+1359,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1360,"READ", false,-1, 0,0);
    tracep->declBus(c+1397,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+477,"state", false,-1);
    tracep->declBit(c+1249,"nstate", false,-1);
    tracep->declBus(c+478,"counter", false,-1, 7,0);
    tracep->declBus(c+479,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+355+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1398,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+480,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1315,"rst_n", false,-1);
    tracep->declBus(c+1081,"addr", false,-1, 23,0);
    tracep->declBus(c+1079,"line", false,-1, 31,0);
    tracep->declBus(c+1074,"size", false,-1, 2,0);
    tracep->declBit(c+1246,"wr", false,-1);
    tracep->declBit(c+1247,"done", false,-1);
    tracep->declBit(c+472,"sck", false,-1);
    tracep->declBit(c+473,"ce_n", false,-1);
    tracep->declBus(c+1283,"din", false,-1, 3,0);
    tracep->declBus(c+1244,"dout", false,-1, 3,0);
    tracep->declBit(c+474,"douten", false,-1);
    tracep->declBus(c+1359,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1360,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1082,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+481,"state", false,-1);
    tracep->declBit(c+1250,"nstate", false,-1);
    tracep->declBus(c+482,"counter", false,-1, 7,0);
    tracep->declBus(c+483,"saddr", false,-1, 23,0);
    tracep->declBus(c+1399,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+906,"auto_in_psel", false,-1);
    tracep->declBit(c+426,"auto_in_penable", false,-1);
    tracep->declBit(c+902,"auto_in_pwrite", false,-1);
    tracep->declBus(c+900,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+451,"auto_in_pready", false,-1);
    tracep->declBit(c+1330,"auto_in_pslverr", false,-1);
    tracep->declBus(c+452,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1284,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+449,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+799,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+800,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+801,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+802,"sdram_bundle_we", false,-1);
    tracep->declBus(c+803,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+804,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+450,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+828,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBus(c+900,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+906,"in_psel", false,-1);
    tracep->declBit(c+426,"in_penable", false,-1);
    tracep->declBus(c+1329,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+902,"in_pwrite", false,-1);
    tracep->declBus(c+903,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+451,"in_pready", false,-1);
    tracep->declBus(c+452,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1330,"in_pslverr", false,-1);
    tracep->declBit(c+1284,"sdram_clk", false,-1);
    tracep->declBit(c+449,"sdram_cke", false,-1);
    tracep->declBit(c+799,"sdram_cs", false,-1);
    tracep->declBit(c+800,"sdram_ras", false,-1);
    tracep->declBit(c+801,"sdram_cas", false,-1);
    tracep->declBit(c+802,"sdram_we", false,-1);
    tracep->declBus(c+803,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+804,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+450,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+828,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+484,"sdram_dout_en", false,-1);
    tracep->declBus(c+485,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+359,"state", false,-1, 1,0);
    tracep->declBit(c+805,"req_accept", false,-1);
    tracep->declBit(c+1083,"is_read", false,-1);
    tracep->declBit(c+1084,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1260,"clk_i", false,-1);
    tracep->declBit(c+1261,"rst_i", false,-1);
    tracep->declBus(c+1085,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1083,"inport_rd_i", false,-1);
    tracep->declBus(c+1339,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+900,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+903,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+828,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+805,"inport_accept_o", false,-1);
    tracep->declBit(c+451,"inport_ack_o", false,-1);
    tracep->declBit(c+1330,"inport_error_o", false,-1);
    tracep->declBus(c+452,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1284,"sdram_clk_o", false,-1);
    tracep->declBit(c+449,"sdram_cke_o", false,-1);
    tracep->declBit(c+799,"sdram_cs_o", false,-1);
    tracep->declBit(c+800,"sdram_ras_o", false,-1);
    tracep->declBit(c+801,"sdram_cas_o", false,-1);
    tracep->declBit(c+802,"sdram_we_o", false,-1);
    tracep->declBus(c+450,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+803,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+804,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+485,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+484,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1400,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1401,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1402,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1403,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1404,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1405,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1406,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1407,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1408,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1409,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1410,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1405,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1411,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1412,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1413,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1414,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1415,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1416,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1417,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1337,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1418,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1405,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1337,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1417,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1416,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1412,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1414,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1413,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1415,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1411,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1419,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1420,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1421,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1421,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1362,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1421,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1403,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1403,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1422,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+900,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1085,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1083,"ram_rd_w", false,-1);
    tracep->declBit(c+805,"ram_accept_w", false,-1);
    tracep->declBus(c+903,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+452,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+451,"ram_ack_w", false,-1);
    tracep->declBit(c+1086,"ram_req_w", false,-1);
    tracep->declBus(c+806,"command_q", false,-1, 3,0);
    tracep->declBus(c+803,"addr_q", false,-1, 12,0);
    tracep->declBus(c+485,"data_q", false,-1, 31,0);
    tracep->declBit(c+486,"data_rd_en_q", false,-1);
    tracep->declBus(c+450,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+449,"cke_q", false,-1);
    tracep->declBus(c+804,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1423,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+487,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+828,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+488,"refresh_q", false,-1);
    tracep->declBus(c+807,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+489+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+808,"state_q", false,-1, 3,0);
    tracep->declBus(c+1251,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1252,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+497,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+498,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1087,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1088,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1089,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1405,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+499,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1253,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1424,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+809,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+500,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+452,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+501,"idx", false,-1, 31,0);
    tracep->declBus(c+502,"rd_q", false,-1, 3,0);
    tracep->declBit(c+451,"ack_q", false,-1);
    tracep->declArray(c+810,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+917,"auto_in_psel", false,-1);
    tracep->declBit(c+918,"auto_in_penable", false,-1);
    tracep->declBit(c+902,"auto_in_pwrite", false,-1);
    tracep->declBus(c+908,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1329,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1286,"auto_in_pready", false,-1);
    tracep->declBit(c+1330,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1150,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+447,"spi_bundle_sck", false,-1);
    tracep->declBus(c+448,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+798,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1282,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1425,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1426,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1406,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBus(c+1090,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+917,"in_psel", false,-1);
    tracep->declBit(c+918,"in_penable", false,-1);
    tracep->declBus(c+1329,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+902,"in_pwrite", false,-1);
    tracep->declBus(c+903,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1286,"in_pready", false,-1);
    tracep->declBus(c+1150,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1330,"in_pslverr", false,-1);
    tracep->declBit(c+447,"spi_sck", false,-1);
    tracep->declBus(c+448,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+798,"spi_mosi", false,-1);
    tracep->declBit(c+1282,"spi_miso", false,-1);
    tracep->declBit(c+503,"spi_irq_out", false,-1);
    tracep->declBus(c+1091,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1092,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1093,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1094,"wb_we_i", false,-1);
    tracep->declBit(c+1095,"wb_stb_i", false,-1);
    tracep->declBit(c+1096,"wb_cyc_i", false,-1);
    tracep->declBit(c+504,"wb_ack_o", false,-1);
    tracep->declBus(c+505,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1340,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1329,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1427,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1428,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1396,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1429,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1430,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1431,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+360,"state", false,-1, 2,0);
    tracep->declBus(c+361,"next_state", false,-1, 2,0);
    tracep->declBus(c+362,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+363,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+364,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+365,"flash_pwrite", false,-1);
    tracep->declBit(c+366,"flash_psel", false,-1);
    tracep->declBit(c+367,"flash_penable", false,-1);
    tracep->declBit(c+368,"flash_pready", false,-1);
    tracep->declBus(c+369,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1432,"Tp", false,-1, 31,0);
    tracep->declBit(c+1260,"wb_clk_i", false,-1);
    tracep->declBit(c+1261,"wb_rst_i", false,-1);
    tracep->declBus(c+1091,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1092,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+505,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1093,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1094,"wb_we_i", false,-1);
    tracep->declBit(c+1095,"wb_stb_i", false,-1);
    tracep->declBit(c+1096,"wb_cyc_i", false,-1);
    tracep->declBit(c+504,"wb_ack_o", false,-1);
    tracep->declBit(c+1330,"wb_err_o", false,-1);
    tracep->declBit(c+503,"wb_int_o", false,-1);
    tracep->declBus(c+448,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+447,"sclk_pad_o", false,-1);
    tracep->declBit(c+798,"mosi_pad_o", false,-1);
    tracep->declBit(c+1282,"miso_pad_i", false,-1);
    tracep->declBus(c+506,"divider", false,-1, 15,0);
    tracep->declBus(c+507,"ctrl", false,-1, 13,0);
    tracep->declBus(c+508,"ss", false,-1, 7,0);
    tracep->declBus(c+1254,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+509,"rx", false,-1, 127,0);
    tracep->declBit(c+513,"rx_negedge", false,-1);
    tracep->declBit(c+514,"tx_negedge", false,-1);
    tracep->declBus(c+515,"char_len", false,-1, 6,0);
    tracep->declBit(c+516,"go", false,-1);
    tracep->declBit(c+517,"lsb", false,-1);
    tracep->declBit(c+518,"ie", false,-1);
    tracep->declBit(c+519,"ass", false,-1);
    tracep->declBit(c+1097,"spi_divider_sel", false,-1);
    tracep->declBit(c+1098,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1099,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1100,"spi_ss_sel", false,-1);
    tracep->declBit(c+520,"tip", false,-1);
    tracep->declBit(c+521,"pos_edge", false,-1);
    tracep->declBit(c+522,"neg_edge", false,-1);
    tracep->declBit(c+523,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1432,"Tp", false,-1, 31,0);
    tracep->declBit(c+1260,"clk_in", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBit(c+520,"enable", false,-1);
    tracep->declBit(c+516,"go", false,-1);
    tracep->declBit(c+523,"last_clk", false,-1);
    tracep->declBus(c+506,"divider", false,-1, 15,0);
    tracep->declBit(c+447,"clk_out", false,-1);
    tracep->declBit(c+521,"pos_edge", false,-1);
    tracep->declBit(c+522,"neg_edge", false,-1);
    tracep->declBus(c+524,"cnt", false,-1, 15,0);
    tracep->declBit(c+525,"cnt_zero", false,-1);
    tracep->declBit(c+526,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1432,"Tp", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBus(c+1101,"latch", false,-1, 3,0);
    tracep->declBus(c+1093,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+515,"len", false,-1, 6,0);
    tracep->declBit(c+517,"lsb", false,-1);
    tracep->declBit(c+516,"go", false,-1);
    tracep->declBit(c+521,"pos_edge", false,-1);
    tracep->declBit(c+522,"neg_edge", false,-1);
    tracep->declBit(c+513,"rx_negedge", false,-1);
    tracep->declBit(c+514,"tx_negedge", false,-1);
    tracep->declBit(c+520,"tip", false,-1);
    tracep->declBit(c+523,"last", false,-1);
    tracep->declBus(c+1092,"p_in", false,-1, 31,0);
    tracep->declArray(c+509,"p_out", false,-1, 127,0);
    tracep->declBit(c+447,"s_clk", false,-1);
    tracep->declBit(c+1282,"s_in", false,-1);
    tracep->declBit(c+798,"s_out", false,-1);
    tracep->declBus(c+527,"cnt", false,-1, 7,0);
    tracep->declArray(c+509,"data", false,-1, 127,0);
    tracep->declBus(c+528,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+529,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+530,"rx_clk", false,-1);
    tracep->declBit(c+531,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+914,"auto_in_psel", false,-1);
    tracep->declBit(c+915,"auto_in_penable", false,-1);
    tracep->declBit(c+902,"auto_in_pwrite", false,-1);
    tracep->declBus(c+911,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1329,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+916,"auto_in_pready", false,-1);
    tracep->declBit(c+1330,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1107,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1280,"uart_rx", false,-1);
    tracep->declBit(c+1281,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+914,"in_psel", false,-1);
    tracep->declBit(c+915,"in_penable", false,-1);
    tracep->declBus(c+1329,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+916,"in_pready", false,-1);
    tracep->declBit(c+1330,"in_pslverr", false,-1);
    tracep->declBus(c+1064,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+902,"in_pwrite", false,-1);
    tracep->declBus(c+1107,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+903,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1280,"uart_rx", false,-1);
    tracep->declBit(c+1281,"uart_tx", false,-1);
    tracep->declBit(c+532,"rtsn", false,-1);
    tracep->declBit(c+1330,"ctsn", false,-1);
    tracep->declBit(c+533,"dtr_pad_o", false,-1);
    tracep->declBit(c+1330,"dsr_pad_i", false,-1);
    tracep->declBit(c+1330,"ri_pad_i", false,-1);
    tracep->declBit(c+1330,"dcd_pad_i", false,-1);
    tracep->declBit(c+534,"interrupt", false,-1);
    tracep->declBit(c+1316,"reg_we", false,-1);
    tracep->declBit(c+1317,"reg_re", false,-1);
    tracep->declBus(c+1102,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1103,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+370,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1255,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+535,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1261,"wb_rst_i", false,-1);
    tracep->declBus(c+1102,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1104,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1255,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1316,"wb_we_i", false,-1);
    tracep->declBit(c+1317,"wb_re_i", false,-1);
    tracep->declBit(c+1281,"stx_pad_o", false,-1);
    tracep->declBit(c+1280,"srx_pad_i", false,-1);
    tracep->declBus(c+1419,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+535,"rts_pad_o", false,-1);
    tracep->declBit(c+533,"dtr_pad_o", false,-1);
    tracep->declBit(c+534,"int_o", false,-1);
    tracep->declBit(c+536,"enable", false,-1);
    tracep->declBit(c+537,"srx_pad", false,-1);
    tracep->declBus(c+538,"ier", false,-1, 3,0);
    tracep->declBus(c+539,"iir", false,-1, 3,0);
    tracep->declBus(c+540,"fcr", false,-1, 1,0);
    tracep->declBus(c+541,"mcr", false,-1, 4,0);
    tracep->declBus(c+542,"lcr", false,-1, 7,0);
    tracep->declBus(c+543,"msr", false,-1, 7,0);
    tracep->declBus(c+544,"dl", false,-1, 15,0);
    tracep->declBus(c+545,"scratch", false,-1, 7,0);
    tracep->declBit(c+546,"start_dlc", false,-1);
    tracep->declBit(c+547,"lsr_mask_d", false,-1);
    tracep->declBit(c+548,"msi_reset", false,-1);
    tracep->declBus(c+549,"dlc", false,-1, 15,0);
    tracep->declBus(c+550,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+551,"rx_reset", false,-1);
    tracep->declBit(c+552,"tx_reset", false,-1);
    tracep->declBit(c+553,"dlab", false,-1);
    tracep->declBit(c+1335,"cts_pad_i", false,-1);
    tracep->declBit(c+1330,"dsr_pad_i", false,-1);
    tracep->declBit(c+1330,"ri_pad_i", false,-1);
    tracep->declBit(c+1330,"dcd_pad_i", false,-1);
    tracep->declBit(c+554,"loopback", false,-1);
    tracep->declBit(c+1330,"cts", false,-1);
    tracep->declBit(c+1335,"dsr", false,-1);
    tracep->declBit(c+1335,"ri", false,-1);
    tracep->declBit(c+1335,"dcd", false,-1);
    tracep->declBit(c+555,"cts_c", false,-1);
    tracep->declBit(c+556,"dsr_c", false,-1);
    tracep->declBit(c+557,"ri_c", false,-1);
    tracep->declBit(c+558,"dcd_c", false,-1);
    tracep->declBus(c+559,"lsr", false,-1, 7,0);
    tracep->declBit(c+560,"lsr0", false,-1);
    tracep->declBit(c+561,"lsr1", false,-1);
    tracep->declBit(c+562,"lsr2", false,-1);
    tracep->declBit(c+563,"lsr3", false,-1);
    tracep->declBit(c+564,"lsr4", false,-1);
    tracep->declBit(c+565,"lsr5", false,-1);
    tracep->declBit(c+566,"lsr6", false,-1);
    tracep->declBit(c+567,"lsr7", false,-1);
    tracep->declBit(c+568,"lsr0r", false,-1);
    tracep->declBit(c+569,"lsr1r", false,-1);
    tracep->declBit(c+570,"lsr2r", false,-1);
    tracep->declBit(c+571,"lsr3r", false,-1);
    tracep->declBit(c+572,"lsr4r", false,-1);
    tracep->declBit(c+573,"lsr5r", false,-1);
    tracep->declBit(c+574,"lsr6r", false,-1);
    tracep->declBit(c+575,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+576,"rls_int", false,-1);
    tracep->declBit(c+577,"rda_int", false,-1);
    tracep->declBit(c+578,"ti_int", false,-1);
    tracep->declBit(c+579,"thre_int", false,-1);
    tracep->declBit(c+580,"ms_int", false,-1);
    tracep->declBit(c+581,"tf_push", false,-1);
    tracep->declBit(c+582,"rf_pop", false,-1);
    tracep->declBus(c+1318,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+583,"rf_error_bit", false,-1);
    tracep->declBit(c+561,"rf_overrun", false,-1);
    tracep->declBit(c+584,"rf_push_pulse", false,-1);
    tracep->declBus(c+585,"rf_count", false,-1, 4,0);
    tracep->declBus(c+586,"tf_count", false,-1, 4,0);
    tracep->declBus(c+587,"tstate", false,-1, 2,0);
    tracep->declBus(c+588,"rstate", false,-1, 3,0);
    tracep->declBus(c+589,"counter_t", false,-1, 9,0);
    tracep->declBit(c+590,"thre_set_en", false,-1);
    tracep->declBus(c+591,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+592,"block_value", false,-1, 7,0);
    tracep->declBit(c+593,"serial_out", false,-1);
    tracep->declBit(c+594,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+595,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+596,"lsr0_d", false,-1);
    tracep->declBit(c+597,"lsr1_d", false,-1);
    tracep->declBit(c+598,"lsr2_d", false,-1);
    tracep->declBit(c+599,"lsr3_d", false,-1);
    tracep->declBit(c+600,"lsr4_d", false,-1);
    tracep->declBit(c+601,"lsr5_d", false,-1);
    tracep->declBit(c+602,"lsr6_d", false,-1);
    tracep->declBit(c+603,"lsr7_d", false,-1);
    tracep->declBit(c+604,"rls_int_d", false,-1);
    tracep->declBit(c+605,"thre_int_d", false,-1);
    tracep->declBit(c+606,"ms_int_d", false,-1);
    tracep->declBit(c+607,"ti_int_d", false,-1);
    tracep->declBit(c+608,"rda_int_d", false,-1);
    tracep->declBit(c+609,"rls_int_rise", false,-1);
    tracep->declBit(c+610,"thre_int_rise", false,-1);
    tracep->declBit(c+611,"ms_int_rise", false,-1);
    tracep->declBit(c+612,"ti_int_rise", false,-1);
    tracep->declBit(c+613,"rda_int_rise", false,-1);
    tracep->declBit(c+614,"rls_int_pnd", false,-1);
    tracep->declBit(c+615,"rda_int_pnd", false,-1);
    tracep->declBit(c+616,"thre_int_pnd", false,-1);
    tracep->declBit(c+617,"ms_int_pnd", false,-1);
    tracep->declBit(c+618,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1432,"Tp", false,-1, 31,0);
    tracep->declBus(c+1432,"width", false,-1, 31,0);
    tracep->declBus(c+1360,"init_value", false,-1, 0,0);
    tracep->declBit(c+1261,"rst_i", false,-1);
    tracep->declBit(c+1260,"clk_i", false,-1);
    tracep->declBit(c+1330,"stage1_rst_i", false,-1);
    tracep->declBit(c+1335,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1280,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+537,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+619,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1261,"wb_rst_i", false,-1);
    tracep->declBus(c+542,"lcr", false,-1, 7,0);
    tracep->declBit(c+582,"rf_pop", false,-1);
    tracep->declBit(c+594,"srx_pad_i", false,-1);
    tracep->declBit(c+536,"enable", false,-1);
    tracep->declBit(c+551,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+589,"counter_t", false,-1, 9,0);
    tracep->declBus(c+585,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1318,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+561,"rf_overrun", false,-1);
    tracep->declBit(c+583,"rf_error_bit", false,-1);
    tracep->declBus(c+588,"rstate", false,-1, 3,0);
    tracep->declBit(c+584,"rf_push_pulse", false,-1);
    tracep->declBus(c+620,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+621,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+622,"rshift", false,-1, 7,0);
    tracep->declBit(c+623,"rparity", false,-1);
    tracep->declBit(c+624,"rparity_error", false,-1);
    tracep->declBit(c+625,"rframing_error", false,-1);
    tracep->declBit(c+626,"rbit_in", false,-1);
    tracep->declBit(c+627,"rparity_xor", false,-1);
    tracep->declBus(c+628,"counter_b", false,-1, 7,0);
    tracep->declBit(c+629,"rf_push_q", false,-1);
    tracep->declBus(c+630,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+631,"rf_push", false,-1);
    tracep->declBit(c+632,"break_error", false,-1);
    tracep->declBit(c+633,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+634,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+635,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+636,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1337,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1417,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1416,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1412,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1414,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1413,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1415,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1411,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1419,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1420,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1433,"sr_push", false,-1, 3,0);
    tracep->declBus(c+637,"toc_value", false,-1, 9,0);
    tracep->declBus(c+638,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1434,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1435,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1405,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1361,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1261,"wb_rst_i", false,-1);
    tracep->declBit(c+584,"push", false,-1);
    tracep->declBit(c+582,"pop", false,-1);
    tracep->declBus(c+630,"data_in", false,-1, 10,0);
    tracep->declBit(c+551,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1318,"data_out", false,-1, 10,0);
    tracep->declBit(c+561,"overrun", false,-1);
    tracep->declBus(c+585,"count", false,-1, 4,0);
    tracep->declBit(c+583,"error_bit", false,-1);
    tracep->declBus(c+1319,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+639+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+655,"top", false,-1, 3,0);
    tracep->declBus(c+656,"bottom", false,-1, 3,0);
    tracep->declBus(c+657,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+658,"word0", false,-1, 2,0);
    tracep->declBus(c+659,"word1", false,-1, 2,0);
    tracep->declBus(c+660,"word2", false,-1, 2,0);
    tracep->declBus(c+661,"word3", false,-1, 2,0);
    tracep->declBus(c+662,"word4", false,-1, 2,0);
    tracep->declBus(c+663,"word5", false,-1, 2,0);
    tracep->declBus(c+664,"word6", false,-1, 2,0);
    tracep->declBus(c+665,"word7", false,-1, 2,0);
    tracep->declBus(c+666,"word8", false,-1, 2,0);
    tracep->declBus(c+667,"word9", false,-1, 2,0);
    tracep->declBus(c+668,"word10", false,-1, 2,0);
    tracep->declBus(c+669,"word11", false,-1, 2,0);
    tracep->declBus(c+670,"word12", false,-1, 2,0);
    tracep->declBus(c+671,"word13", false,-1, 2,0);
    tracep->declBus(c+672,"word14", false,-1, 2,0);
    tracep->declBus(c+673,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1405,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1406,"data_width", false,-1, 31,0);
    tracep->declBus(c+1435,"depth", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+584,"we", false,-1);
    tracep->declBus(c+655,"a", false,-1, 3,0);
    tracep->declBus(c+656,"dpra", false,-1, 3,0);
    tracep->declBus(c+674,"di", false,-1, 7,0);
    tracep->declBus(c+1319,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+371+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1261,"wb_rst_i", false,-1);
    tracep->declBus(c+542,"lcr", false,-1, 7,0);
    tracep->declBit(c+581,"tf_push", false,-1);
    tracep->declBus(c+1104,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+536,"enable", false,-1);
    tracep->declBit(c+552,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+593,"stx_pad_o", false,-1);
    tracep->declBus(c+587,"tstate", false,-1, 2,0);
    tracep->declBus(c+586,"tf_count", false,-1, 4,0);
    tracep->declBus(c+675,"counter", false,-1, 4,0);
    tracep->declBus(c+676,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+677,"shift_out", false,-1, 6,0);
    tracep->declBit(c+678,"stx_o_tmp", false,-1);
    tracep->declBit(c+679,"parity_xor", false,-1);
    tracep->declBit(c+680,"tf_pop", false,-1);
    tracep->declBit(c+681,"bit_out", false,-1);
    tracep->declBus(c+1104,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1320,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+682,"tf_overrun", false,-1);
    tracep->declBus(c+1340,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1329,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1427,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1428,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1396,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1429,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1406,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1435,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1405,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1361,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+1261,"wb_rst_i", false,-1);
    tracep->declBit(c+581,"push", false,-1);
    tracep->declBit(c+680,"pop", false,-1);
    tracep->declBus(c+1104,"data_in", false,-1, 7,0);
    tracep->declBit(c+552,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1320,"data_out", false,-1, 7,0);
    tracep->declBit(c+682,"overrun", false,-1);
    tracep->declBus(c+586,"count", false,-1, 4,0);
    tracep->declBus(c+683,"top", false,-1, 3,0);
    tracep->declBus(c+684,"bottom", false,-1, 3,0);
    tracep->declBus(c+685,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1405,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1406,"data_width", false,-1, 31,0);
    tracep->declBus(c+1435,"depth", false,-1, 31,0);
    tracep->declBit(c+1260,"clk", false,-1);
    tracep->declBit(c+581,"we", false,-1);
    tracep->declBus(c+683,"a", false,-1, 3,0);
    tracep->declBus(c+684,"dpra", false,-1, 3,0);
    tracep->declBus(c+1104,"di", false,-1, 7,0);
    tracep->declBus(c+1320,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+387+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+907,"auto_in_psel", false,-1);
    tracep->declBit(c+427,"auto_in_penable", false,-1);
    tracep->declBit(c+902,"auto_in_pwrite", false,-1);
    tracep->declBus(c+908,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1329,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+903,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+453,"auto_in_pready", false,-1);
    tracep->declBit(c+1331,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1332,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1274,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1275,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1276,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1277,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1278,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1279,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1260,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBus(c+1090,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+907,"in_psel", false,-1);
    tracep->declBit(c+427,"in_penable", false,-1);
    tracep->declBus(c+1329,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+902,"in_pwrite", false,-1);
    tracep->declBus(c+903,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+904,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+453,"in_pready", false,-1);
    tracep->declBus(c+1332,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1331,"in_pslverr", false,-1);
    tracep->declBus(c+1274,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1275,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1276,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1277,"vga_hsync", false,-1);
    tracep->declBit(c+1278,"vga_vsync", false,-1);
    tracep->declBit(c+1279,"vga_valid", false,-1);
    tracep->declBit(c+1105,"is_write", false,-1);
    tracep->declBus(c+1106,"addr", false,-1, 31,0);
    tracep->declBit(c+453,"ready", false,-1);
    tracep->declBus(c+686,"i", false,-1, 31,0);
    tracep->declBus(c+1436,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1437,"h_active", false,-1, 31,0);
    tracep->declBus(c+1438,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1439,"h_total", false,-1, 31,0);
    tracep->declBus(c+1403,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1440,"v_active", false,-1, 31,0);
    tracep->declBus(c+1441,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1442,"v_total", false,-1, 31,0);
    tracep->declBus(c+687,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+403,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+688,"h_valid", false,-1);
    tracep->declBit(c+404,"v_valid", false,-1);
    tracep->declBus(c+689,"h_addr", false,-1, 9,0);
    tracep->declBus(c+405,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1321,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+447,"sck", false,-1);
    tracep->declBit(c+813,"ss", false,-1);
    tracep->declBit(c+798,"mosi", false,-1);
    tracep->declBit(c+793,"miso", false,-1);
    tracep->declBus(c+794,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+795,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+796,"counter", false,-1, 2,0);
    tracep->declBit(c+797,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+447,"sck", false,-1);
    tracep->declBit(c+690,"ss", false,-1);
    tracep->declBit(c+798,"mosi", false,-1);
    tracep->declBit(c+1322,"miso", false,-1);
    tracep->declBit(c+690,"reset", false,-1);
    tracep->declBus(c+787,"state", false,-1, 2,0);
    tracep->declBus(c+788,"counter", false,-1, 7,0);
    tracep->declBus(c+789,"cmd", false,-1, 7,0);
    tracep->declBus(c+790,"addr", false,-1, 23,0);
    tracep->declBus(c+791,"data", false,-1, 31,0);
    tracep->declBit(c+792,"ren", false,-1);
    tracep->declBus(c+1323,"rdata", false,-1, 31,0);
    tracep->declBus(c+1324,"raddr", false,-1, 31,0);
    tracep->declBus(c+1325,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+447,"clock", false,-1);
    tracep->declBit(c+792,"valid", false,-1);
    tracep->declBus(c+789,"cmd", false,-1, 7,0);
    tracep->declBus(c+1324,"addr", false,-1, 31,0);
    tracep->declBus(c+1323,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1256,"sck", false,-1);
    tracep->declBit(c+1257,"ce_n", false,-1);
    tracep->declBus(c+1283,"dio", false,-1, 3,0);
    tracep->declBit(c+1257,"reset", false,-1);
    tracep->declBus(c+7,"state", false,-1, 3,0);
    tracep->declBus(c+8,"counter", false,-1, 7,0);
    tracep->declBus(c+859,"cmd", false,-1, 7,0);
    tracep->declBus(c+860,"addr", false,-1, 23,0);
    tracep->declBus(c+9,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+861+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1326,"qpi_flag", false,-1);
    tracep->declBus(c+10,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1327,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+865,"ren", false,-1);
    tracep->declBit(c+866,"wen", false,-1);
    tracep->declBus(c+867,"len", false,-1, 7,0);
    tracep->declBus(c+1328,"rdata", false,-1, 31,0);
    tracep->declBus(c+868,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1256,"clock", false,-1);
    tracep->declBit(c+865,"ren", false,-1);
    tracep->declBit(c+866,"wen", false,-1);
    tracep->declBus(c+859,"cmd", false,-1, 7,0);
    tracep->declBus(c+868,"saddr", false,-1, 31,0);
    tracep->declBus(c+1328,"rdata", false,-1, 31,0);
    tracep->declBus(c+869,"wdata", false,-1, 31,0);
    tracep->declBus(c+867,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+449,"cke", false,-1);
    tracep->declBit(c+799,"cs", false,-1);
    tracep->declBit(c+800,"ras", false,-1);
    tracep->declBit(c+801,"cas", false,-1);
    tracep->declBit(c+802,"we", false,-1);
    tracep->declBus(c+803,"a", false,-1, 12,0);
    tracep->declBus(c+814,"ba", false,-1, 1,0);
    tracep->declBus(c+815,"dqm", false,-1, 1,0);
    tracep->declBus(c+829,"dq", false,-1, 15,0);
    tracep->declBit(c+816,"reset", false,-1);
    tracep->declBus(c+697,"state", false,-1, 2,0);
    tracep->declBus(c+698,"counter", false,-1, 7,0);
    tracep->declBus(c+699,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1443,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+700,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+701,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+817,"nop", false,-1);
    tracep->declBit(c+818,"active", false,-1);
    tracep->declBit(c+819,"precharge", false,-1);
    tracep->declBit(c+820,"read", false,-1);
    tracep->declBit(c+821,"write", false,-1);
    tracep->declBit(c+822,"burstterm", false,-1);
    tracep->declBit(c+823,"autorefresh", false,-1);
    tracep->declBit(c+824,"mode", false,-1);
    tracep->declBus(c+702,"test", false,-1, 15,0);
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
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+449,"cke", false,-1);
    tracep->declBit(c+799,"cs", false,-1);
    tracep->declBit(c+800,"ras", false,-1);
    tracep->declBit(c+801,"cas", false,-1);
    tracep->declBit(c+802,"we", false,-1);
    tracep->declBus(c+803,"a", false,-1, 12,0);
    tracep->declBus(c+814,"ba", false,-1, 1,0);
    tracep->declBus(c+825,"dqm", false,-1, 1,0);
    tracep->declBus(c+830,"dq", false,-1, 15,0);
    tracep->declBit(c+816,"reset", false,-1);
    tracep->declBus(c+715,"state", false,-1, 2,0);
    tracep->declBus(c+716,"counter", false,-1, 7,0);
    tracep->declBus(c+717,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1444,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+718,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+719,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+817,"nop", false,-1);
    tracep->declBit(c+818,"active", false,-1);
    tracep->declBit(c+819,"precharge", false,-1);
    tracep->declBit(c+820,"read", false,-1);
    tracep->declBit(c+821,"write", false,-1);
    tracep->declBit(c+822,"burstterm", false,-1);
    tracep->declBit(c+823,"autorefresh", false,-1);
    tracep->declBit(c+824,"mode", false,-1);
    tracep->declBus(c+720,"test", false,-1, 15,0);
    tracep->declBit(c+721,"write_burst_mode", false,-1);
    tracep->declBus(c+722,"op_mode", false,-1, 1,0);
    tracep->declBus(c+723,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+724,"burst_type", false,-1);
    tracep->declBus(c+725,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+726,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+727,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+728,"bank", false,-1, 1,0);
    tracep->declBus(c+729,"row", false,-1, 12,0);
    tracep->declBus(c+730,"column", false,-1, 8,0);
    tracep->declBus(c+731,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+732,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+449,"cke", false,-1);
    tracep->declBit(c+799,"cs", false,-1);
    tracep->declBit(c+800,"ras", false,-1);
    tracep->declBit(c+801,"cas", false,-1);
    tracep->declBit(c+802,"we", false,-1);
    tracep->declBus(c+803,"a", false,-1, 12,0);
    tracep->declBus(c+814,"ba", false,-1, 1,0);
    tracep->declBus(c+826,"dqm", false,-1, 1,0);
    tracep->declBus(c+829,"dq", false,-1, 15,0);
    tracep->declBit(c+816,"reset", false,-1);
    tracep->declBus(c+733,"state", false,-1, 2,0);
    tracep->declBus(c+734,"counter", false,-1, 7,0);
    tracep->declBus(c+735,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1445,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+736,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+737,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+817,"nop", false,-1);
    tracep->declBit(c+818,"active", false,-1);
    tracep->declBit(c+819,"precharge", false,-1);
    tracep->declBit(c+820,"read", false,-1);
    tracep->declBit(c+821,"write", false,-1);
    tracep->declBit(c+822,"burstterm", false,-1);
    tracep->declBit(c+823,"autorefresh", false,-1);
    tracep->declBit(c+824,"mode", false,-1);
    tracep->declBus(c+738,"test", false,-1, 15,0);
    tracep->declBit(c+739,"write_burst_mode", false,-1);
    tracep->declBus(c+740,"op_mode", false,-1, 1,0);
    tracep->declBus(c+741,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+742,"burst_type", false,-1);
    tracep->declBus(c+743,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+744,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+745,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+746,"bank", false,-1, 1,0);
    tracep->declBus(c+747,"row", false,-1, 12,0);
    tracep->declBus(c+748,"column", false,-1, 8,0);
    tracep->declBus(c+749,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+750,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+449,"cke", false,-1);
    tracep->declBit(c+799,"cs", false,-1);
    tracep->declBit(c+800,"ras", false,-1);
    tracep->declBit(c+801,"cas", false,-1);
    tracep->declBit(c+802,"we", false,-1);
    tracep->declBus(c+803,"a", false,-1, 12,0);
    tracep->declBus(c+814,"ba", false,-1, 1,0);
    tracep->declBus(c+827,"dqm", false,-1, 1,0);
    tracep->declBus(c+830,"dq", false,-1, 15,0);
    tracep->declBit(c+816,"reset", false,-1);
    tracep->declBus(c+751,"state", false,-1, 2,0);
    tracep->declBus(c+752,"counter", false,-1, 7,0);
    tracep->declBus(c+753,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1446,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+754,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+755,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+817,"nop", false,-1);
    tracep->declBit(c+818,"active", false,-1);
    tracep->declBit(c+819,"precharge", false,-1);
    tracep->declBit(c+820,"read", false,-1);
    tracep->declBit(c+821,"write", false,-1);
    tracep->declBit(c+822,"burstterm", false,-1);
    tracep->declBit(c+823,"autorefresh", false,-1);
    tracep->declBit(c+824,"mode", false,-1);
    tracep->declBus(c+756,"test", false,-1, 15,0);
    tracep->declBit(c+757,"write_burst_mode", false,-1);
    tracep->declBus(c+758,"op_mode", false,-1, 1,0);
    tracep->declBus(c+759,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+760,"burst_type", false,-1);
    tracep->declBus(c+761,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+762,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+763,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+764,"bank", false,-1, 1,0);
    tracep->declBus(c+765,"row", false,-1, 12,0);
    tracep->declBus(c+766,"column", false,-1, 8,0);
    tracep->declBus(c+767,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+768,"rdqm_reg", false,-1, 1,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullIData(oldp+9,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullCData(oldp+10,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+11,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+12,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+24,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+25,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullQData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+60,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+63,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+64,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+73,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+119,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+129,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+133,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+137,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+141,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+145,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+149,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+153,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+157,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+161,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+165,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+169,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+173,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+177,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+181,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+185,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+189,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+193,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+197,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+201,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+205,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+209,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+217,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+221,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+229,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+241,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+249,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+253,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd_reg),5);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs1_reg),5);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs2_reg),5);
    bufp->fullIData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg),32);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7_reg),7);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__shamt_reg),5);
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_reg),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__gpr_wen_reg));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd),32);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_addr),5);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_wen));
    bufp->fullIData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mepc),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mstatus),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mcause),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mtvec),32);
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_en));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_en));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_en));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_en));
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ram_rdata_reg),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+405,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+406,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                       << 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0)
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                  << 0x10U)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0)
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                   << 0x18U)
                                                   : 0U))))),32);
    bufp->fullIData(oldp+407,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+408,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+409,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+410,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+411,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+412,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+413,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+414,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg))))));
    bufp->fullCData(oldp+415,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+416,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+417,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BRESP)
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
                                                        << 1U)))))))
                                : 0U)),2);
    bufp->fullCData(oldp+418,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RRESP)
                                        : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U))))
                                : 0U)),2);
    bufp->fullBit(oldp+419,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))))));
    bufp->fullBit(oldp+420,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RLAST)
                                     : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                           << 0xfU) 
                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
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
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))))));
    bufp->fullCData(oldp+421,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+422,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+423,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BRESP)
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
                                                        << 1U)))))))
                                : 0U)),2);
    bufp->fullCData(oldp+424,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RRESP)
                                        : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U))))
                                : 0U)),2);
    bufp->fullBit(oldp+425,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RLAST)
                                     : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                           << 0xfU) 
                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
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
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))))));
    bufp->fullBit(oldp+426,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+427,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+428,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+429,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+430,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                           << 2U) : 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                            << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)))))));
    bufp->fullBit(oldp+431,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                       | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullIData(oldp+432,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                    : 0U))),32);
    bufp->fullIData(oldp+433,((((- (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready)))) 
                                & ((- (IData)((0x2000000U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[2U]))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                               | ((- (IData)((0x2000004U 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[2U]))) 
                                  & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullCData(oldp+434,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                 : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->fullBit(oldp+435,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                          >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullCData(oldp+436,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),4);
    bufp->fullCData(oldp+437,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),4);
    bufp->fullCData(oldp+438,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BRESP)
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
                                                    << 1U)))))))),2);
    bufp->fullCData(oldp+439,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RRESP)
                                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                         : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                   : 0U))))),2);
    bufp->fullBit(oldp+440,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+441,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RLAST)
                                  : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
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
    bufp->fullIData(oldp+442,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+443,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+444,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+445,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+446,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullSData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+470,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+471,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+474,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+475,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+480,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullSData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+513,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+514,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+515,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+516,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+517,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+518,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+519,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+523,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+525,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+526,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+528,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+532,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+533,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+535,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+553,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+554,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+555,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+556,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+557,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+558,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+559,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+562,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+563,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+564,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+583,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+590,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+609,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+610,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+611,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+612,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+613,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+632,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+633,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+634,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+635,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+636,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+638,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+657,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+674,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+685,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+689,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+699,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+700,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+701,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+702,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+703,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+704,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+705,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+706,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+707,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+709,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+711,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+712,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+717,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+718,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+719,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+720,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+721,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+722,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+723,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+724,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+725,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+727,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+729,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+730,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+735,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+736,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+737,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+738,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+739,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+740,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+741,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+742,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+743,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__read_cnt),8);
    bufp->fullCData(oldp+745,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+747,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+748,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+753,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+754,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+755,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+756,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+757,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+758,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+759,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+760,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+761,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__read_cnt),8);
    bufp->fullCData(oldp+763,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+765,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+766,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg),2);
    bufp->fullIData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullIData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+790,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+791,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+792,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+799,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+800,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+801,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+802,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
    bufp->fullBit(oldp+805,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+814,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+819,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+828,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+829,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+830,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullBit(oldp+831,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_valid_reg));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_ready));
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg),7);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg),3);
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_read_reg));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_write_reg));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+840,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+843,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                         ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                  ? 0xfU
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                    & (1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                     ? 0xeU
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                      & (0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                      ? 4U
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                       & (1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                       ? 0xcU
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                        & (2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                        ? 0xcU
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                         & (0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                         ? 8U
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                          & (1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                          ? 8U
                                                          : 
                                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                           & (2U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                           ? 8U
                                                           : 0U))))))))))))),4);
    bufp->fullCData(oldp+844,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+845,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hfe131fa2__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he5392cc7__0))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullBit(oldp+851,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6f2fd84__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+853,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6e6f338__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullBit(oldp+855,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+856,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+858,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             | ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                | ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                   | ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                      | ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                            | ((0x73U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                               | ((0x33U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))))))))))));
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+868,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+869,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_done));
    bufp->fullCData(oldp+877,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),7);
    bufp->fullCData(oldp+878,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h93150a1e__0) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                      | ((3U == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                         | ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                            | ((0xfU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                               | ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                                  | (0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)))))))))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullCData(oldp+879,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+880,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hba9f6ca3__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+881,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0)
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x14U)
                                         : ((IData)(
                                                    ((0x73U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                                     & (0U 
                                                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)))
                                             ? 0xfU
                                             : 0U)))),5);
    bufp->fullIData(oldp+882,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+883,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),32);
    bufp->fullIData(oldp+884,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+885,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+886,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+888,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+889,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_ready_reg));
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata),32);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullIData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+906,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+907,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+908,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+909,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullIData(oldp+911,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+912,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+916,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+917,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+940,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+941,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h68975acc__0))));
    bufp->fullCData(oldp+942,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h5a8d045f__0))),4);
    bufp->fullIData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb734b8d7__0[0U]),32);
    bufp->fullCData(oldp+944,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3a4e4339__0)),8);
    bufp->fullCData(oldp+945,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h30176aa5__0))),3);
    bufp->fullCData(oldp+946,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hbbf346b8__0))),2);
    bufp->fullBit(oldp+947,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h94ebbd5e__0))));
    bufp->fullIData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf41bdd9a__0[0U]),32);
    bufp->fullCData(oldp+949,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h109b6ac9__0))),4);
    bufp->fullBit(oldp+950,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                       << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                                  << 1U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))))));
    bufp->fullBit(oldp+951,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf81145fc__0))));
    bufp->fullBit(oldp+952,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0))));
    bufp->fullCData(oldp+953,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdecce5eb__0))),4);
    bufp->fullIData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[0U]),32);
    bufp->fullCData(oldp+955,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h25d17c3d__0)),8);
    bufp->fullCData(oldp+956,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h167d420f__0))),3);
    bufp->fullCData(oldp+957,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h56bb0e93__0))),2);
    bufp->fullBit(oldp+958,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0))));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+960,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+962,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+964,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+980,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+982,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+983,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+984,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+985,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+986,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+990,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+991,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+992,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+997,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+999,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1000,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WREADY));
    bufp->fullIData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb734b8d7__0[2U]),32);
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf41bdd9a__0[2U]),32);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[2U]),32);
    bufp->fullCData(oldp+1011,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1012,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1013,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1014,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1015,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1016,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1017,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h167d420f__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1018,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1019,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1020,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h68975acc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1021,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1022,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1023,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1024,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1025,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))) 
                                    >> 2U))));
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullBit(oldp+1044,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1045,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id));
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb734b8d7__0[1U]),32);
    bufp->fullIData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf41bdd9a__0[1U]),32);
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[1U]),32);
    bufp->fullCData(oldp+1050,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1051,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1052,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1053,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1054,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1055,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1056,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h167d420f__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1057,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1058,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1059,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1060,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1061,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1062,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1063,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))) 
                                    >> 1U))));
    bufp->fullIData(oldp+1064,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1065,((0xfcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),8);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullIData(oldp+1069,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1077,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1078,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1079,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1080,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1081,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1082,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1087,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1088,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1089,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),3);
    bufp->fullIData(oldp+1090,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+1097,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1098,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1100,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1102,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1106,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullIData(oldp+1107,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1108,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1109,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1110,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1111,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1112,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1113,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1114,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1115,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1116,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1117,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1118,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1119,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1120,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1121,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1122,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1123,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1124,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1125,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1126,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1127,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1128,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1129,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1130,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1131,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1132,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1133,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1134,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1135,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1136,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1137,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1138,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1139,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1140,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc_reg),32);
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_valid_reg));
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex),32);
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1155,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1184,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1185,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1207,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1208,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1209,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1210,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1211,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1212,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1213,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1214,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1215,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1216,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1217,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1218,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1219,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1220,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1221,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1222,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1223,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1224,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1225,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1226,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1227,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1228,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1229,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1230,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1231,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1232,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1233,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1234,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1235,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1236,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1237,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1238,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1260,(vlSelf->clock));
    bufp->fullBit(oldp+1261,(vlSelf->reset));
    bufp->fullSData(oldp+1262,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1263,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1264,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1265,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1266,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1267,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1268,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1269,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1270,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1271,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1272,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1273,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1274,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1275,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1276,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1277,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1278,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1279,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1280,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1281,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1282,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1284,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1285,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1286,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_ready_reg));
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_valid_reg));
    bufp->fullIData(oldp+1290,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullBit(oldp+1291,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+1292,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullBit(oldp+1293,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullIData(oldp+1294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0)
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                            << 8U) : 
                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0)
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                             << 0x10U)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0)
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                 << 0x18U)
                                              : 0U))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1295,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                     & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                     ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                              ? 3U : 
                                             (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                               ? 0xfU
                                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                    & (1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                     ? 0xeU
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                      & (0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                      ? 4U
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                       & (1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                       ? 0xcU
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                        & (2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                        ? 0xcU
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                         & (0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                         ? 8U
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                          & (1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                          ? 8U
                                                          : 
                                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                           & (2U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                           ? 8U
                                                           : 0U))))))))))))
                                 : 0U)),4);
    bufp->fullBit(oldp+1297,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+1298,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_done));
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1301,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rdata),32);
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),2);
    bufp->fullCData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__fetch_start));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullBit(oldp+1310,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                        | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1314,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1315,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1318,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1321,((0x7ffffU & (((IData)(0x280U) 
                                             * ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                                    - (IData)(0x24U)))
                                                 : 0U)) 
                                            + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                                ? (0x3ffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                                      - (IData)(0x91U)))
                                                : 0U)))),19);
    bufp->fullBit(oldp+1322,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1324,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1327,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1329,(1U),3);
    bufp->fullBit(oldp+1330,(0U));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1335,(1U));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1337,(0U),4);
    bufp->fullIData(oldp+1338,(0U),32);
    bufp->fullCData(oldp+1339,(0U),8);
    bufp->fullCData(oldp+1340,(0U),3);
    bufp->fullCData(oldp+1341,(0U),2);
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1352,(0U),32);
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST));
    bufp->fullCData(oldp+1354,(1U),2);
    bufp->fullCData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+1357,(2U),2);
    bufp->fullCData(oldp+1358,(3U),2);
    bufp->fullBit(oldp+1359,(0U));
    bufp->fullBit(oldp+1360,(1U));
    bufp->fullIData(oldp+1361,(5U),32);
    bufp->fullIData(oldp+1362,(0x20U),32);
    bufp->fullIData(oldp+1363,(0x2000000U),32);
    bufp->fullIData(oldp+1364,(0x2000004U),32);
    bufp->fullIData(oldp+1365,(0x1000000U),32);
    bufp->fullIData(oldp+1366,(0x1000004U),32);
    bufp->fullCData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1373,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1374,(0x1800U),32);
    bufp->fullIData(oldp+1375,(0x79737978U),32);
    bufp->fullCData(oldp+1376,(4U),8);
    bufp->fullCData(oldp+1377,(8U),8);
    bufp->fullCData(oldp+1378,(3U),8);
    bufp->fullCData(oldp+1379,(0x9fU),8);
    bufp->fullCData(oldp+1380,(0x25U),8);
    bufp->fullCData(oldp+1381,(0xdU),8);
    bufp->fullCData(oldp+1382,(0x99U),8);
    bufp->fullCData(oldp+1383,(0x49U),8);
    bufp->fullCData(oldp+1384,(0x41U),8);
    bufp->fullCData(oldp+1385,(0x1fU),8);
    bufp->fullCData(oldp+1386,(1U),8);
    bufp->fullCData(oldp+1387,(9U),8);
    bufp->fullCData(oldp+1388,(0x11U),8);
    bufp->fullCData(oldp+1389,(0xc1U),8);
    bufp->fullCData(oldp+1390,(0x63U),8);
    bufp->fullCData(oldp+1391,(0x85U),8);
    bufp->fullCData(oldp+1392,(0x61U),8);
    bufp->fullCData(oldp+1393,(0x71U),8);
    bufp->fullCData(oldp+1394,(0xf0U),8);
    bufp->fullCData(oldp+1395,(0xe0U),8);
    bufp->fullCData(oldp+1396,(4U),3);
    bufp->fullCData(oldp+1397,(0x15U),8);
    bufp->fullCData(oldp+1398,(0xebU),8);
    bufp->fullCData(oldp+1399,(0x38U),8);
    bufp->fullIData(oldp+1400,(0x64U),32);
    bufp->fullIData(oldp+1401,(0x18U),32);
    bufp->fullIData(oldp+1402,(9U),32);
    bufp->fullIData(oldp+1403,(2U),32);
    bufp->fullIData(oldp+1404,(3U),32);
    bufp->fullIData(oldp+1405,(4U),32);
    bufp->fullIData(oldp+1406,(8U),32);
    bufp->fullIData(oldp+1407,(0xdU),32);
    bufp->fullIData(oldp+1408,(0x2000U),32);
    bufp->fullIData(oldp+1409,(0x2710U),32);
    bufp->fullIData(oldp+1410,(0x30cU),32);
    bufp->fullCData(oldp+1411,(7U),4);
    bufp->fullCData(oldp+1412,(3U),4);
    bufp->fullCData(oldp+1413,(5U),4);
    bufp->fullCData(oldp+1414,(4U),4);
    bufp->fullCData(oldp+1415,(6U),4);
    bufp->fullCData(oldp+1416,(2U),4);
    bufp->fullCData(oldp+1417,(1U),4);
    bufp->fullSData(oldp+1418,(0x20U),13);
    bufp->fullCData(oldp+1419,(8U),4);
    bufp->fullCData(oldp+1420,(9U),4);
    bufp->fullIData(oldp+1421,(0xaU),32);
    bufp->fullIData(oldp+1422,(6U),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1424,(0x11U),32);
    bufp->fullIData(oldp+1425,(0x30000000U),32);
    bufp->fullIData(oldp+1426,(0x3fffffffU),32);
    bufp->fullCData(oldp+1427,(2U),3);
    bufp->fullCData(oldp+1428,(3U),3);
    bufp->fullCData(oldp+1429,(5U),3);
    bufp->fullCData(oldp+1430,(6U),3);
    bufp->fullCData(oldp+1431,(7U),3);
    bufp->fullIData(oldp+1432,(1U),32);
    bufp->fullCData(oldp+1433,(0xaU),4);
    bufp->fullIData(oldp+1434,(0xbU),32);
    bufp->fullIData(oldp+1435,(0x10U),32);
    bufp->fullIData(oldp+1436,(0x60U),32);
    bufp->fullIData(oldp+1437,(0x90U),32);
    bufp->fullIData(oldp+1438,(0x310U),32);
    bufp->fullIData(oldp+1439,(0x320U),32);
    bufp->fullIData(oldp+1440,(0x23U),32);
    bufp->fullIData(oldp+1441,(0x203U),32);
    bufp->fullIData(oldp+1442,(0x20dU),32);
    bufp->fullSData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
