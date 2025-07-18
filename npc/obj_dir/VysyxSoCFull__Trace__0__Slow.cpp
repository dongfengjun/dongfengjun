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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBus(c+1267,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1268,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1269,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1270,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1271,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1272,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1273,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1274,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1275,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1276,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1277,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1278,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1279,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1280,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1281,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1282,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1283,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1284,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1285,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1286,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBus(c+1267,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1268,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1269,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1270,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1271,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1272,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1273,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1274,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1275,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1276,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1277,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1278,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1279,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1280,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1281,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1282,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1283,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1284,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1285,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1286,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+427,"spi_sck", false,-1);
    tracep->declBus(c+428,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+779,"spi_mosi", false,-1);
    tracep->declBit(c+1287,"spi_miso", false,-1);
    tracep->declBit(c+1285,"uart_rx", false,-1);
    tracep->declBit(c+1286,"uart_tx", false,-1);
    tracep->declBit(c+1166,"psram_sck", false,-1);
    tracep->declBit(c+1167,"psram_ce_n", false,-1);
    tracep->declBus(c+1288,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1289,"sdram_clk", false,-1);
    tracep->declBit(c+429,"sdram_cke", false,-1);
    tracep->declBit(c+780,"sdram_cs", false,-1);
    tracep->declBit(c+781,"sdram_ras", false,-1);
    tracep->declBit(c+782,"sdram_cas", false,-1);
    tracep->declBit(c+783,"sdram_we", false,-1);
    tracep->declBus(c+784,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+785,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+430,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+810,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1267,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1268,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1269,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1270,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1271,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1272,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1273,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1274,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1275,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1276,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1277,"ps2_clk", false,-1);
    tracep->declBit(c+1278,"ps2_data", false,-1);
    tracep->declBus(c+1279,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1280,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1281,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1282,"vga_hsync", false,-1);
    tracep->declBit(c+1283,"vga_vsync", false,-1);
    tracep->declBit(c+1284,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBus(c+915,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+916,"in_psel", false,-1);
    tracep->declBit(c+16,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+917,"in_pwrite", false,-1);
    tracep->declBus(c+918,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1170,"in_pready", false,-1);
    tracep->declBus(c+1171,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+920,"in_pslverr", false,-1);
    tracep->declBus(c+915,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+916,"out_psel", false,-1);
    tracep->declBit(c+16,"out_penable", false,-1);
    tracep->declBus(c+1318,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+917,"out_pwrite", false,-1);
    tracep->declBus(c+918,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1170,"out_pready", false,-1);
    tracep->declBus(c+1171,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+920,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+916,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+16,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+917,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+915,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1318,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1170,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+920,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1171,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+921,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+415,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+917,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+915,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1318,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+431,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1319,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+432,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+922,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+416,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+917,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+923,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1318,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1320,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1321,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1322,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+924,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+417,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+917,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+925,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+664,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1323,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+665,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+926,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+418,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+917,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+925,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+433,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+434,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+927,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+419,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+917,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+915,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1318,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1290,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1319,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+17,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+928,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+929,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+917,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+925,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+930,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1319,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1291,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+931,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+932,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+917,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+923,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1318,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1319,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1153,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+933,"sel_0", false,-1);
    tracep->declBit(c+934,"sel_1", false,-1);
    tracep->declBit(c+935,"sel_2", false,-1);
    tracep->declBit(c+936,"sel_3", false,-1);
    tracep->declBit(c+937,"sel_4", false,-1);
    tracep->declBit(c+938,"sel_5", false,-1);
    tracep->declBit(c+939,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+940,"auto_in_awready", false,-1);
    tracep->declBit(c+941,"auto_in_awvalid", false,-1);
    tracep->declBus(c+942,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+943,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+940,"auto_in_wready", false,-1);
    tracep->declBit(c+945,"auto_in_wvalid", false,-1);
    tracep->declBus(c+946,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+947,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"auto_in_bready", false,-1);
    tracep->declBit(c+1173,"auto_in_bvalid", false,-1);
    tracep->declBus(c+18,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+948,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+949,"auto_in_arready", false,-1);
    tracep->declBit(c+950,"auto_in_arvalid", false,-1);
    tracep->declBus(c+951,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+952,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+953,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1174,"auto_in_rready", false,-1);
    tracep->declBit(c+1175,"auto_in_rvalid", false,-1);
    tracep->declBus(c+19,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+422,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+948,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+916,"auto_out_psel", false,-1);
    tracep->declBit(c+16,"auto_out_penable", false,-1);
    tracep->declBit(c+917,"auto_out_pwrite", false,-1);
    tracep->declBus(c+915,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+918,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1170,"auto_out_pready", false,-1);
    tracep->declBit(c+920,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1171,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+16,"nodeOut_penable", false,-1);
    tracep->declBus(c+20,"state", false,-1, 1,0);
    tracep->declBit(c+949,"accept_read", false,-1);
    tracep->declBit(c+940,"accept_write", false,-1);
    tracep->declBit(c+21,"is_write_r", false,-1);
    tracep->declBit(c+917,"is_write", false,-1);
    tracep->declBus(c+19,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+18,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+22,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+23,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+24,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+25,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+954,"resp", false,-1, 1,0);
    tracep->declBus(c+26,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+948,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1175,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+27,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1173,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+813,"auto_in_awready", false,-1);
    tracep->declBit(c+955,"auto_in_awvalid", false,-1);
    tracep->declBus(c+956,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"auto_in_wready", false,-1);
    tracep->declBit(c+961,"auto_in_wvalid", false,-1);
    tracep->declBus(c+962,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_in_wlast", false,-1);
    tracep->declBit(c+965,"auto_in_bready", false,-1);
    tracep->declBit(c+1176,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1177,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"auto_in_arready", false,-1);
    tracep->declBit(c+966,"auto_in_arvalid", false,-1);
    tracep->declBus(c+967,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+968,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"auto_in_rready", false,-1);
    tracep->declBit(c+1178,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1179,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_in_rlast", false,-1);
    tracep->declBit(c+1180,"auto_out_awready", false,-1);
    tracep->declBit(c+973,"auto_out_awvalid", false,-1);
    tracep->declBus(c+942,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+943,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+974,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1181,"auto_out_wready", false,-1);
    tracep->declBit(c+975,"auto_out_wvalid", false,-1);
    tracep->declBus(c+946,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+947,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+976,"auto_out_wlast", false,-1);
    tracep->declBit(c+1182,"auto_out_bready", false,-1);
    tracep->declBit(c+1183,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1177,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1184,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1185,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1186,"auto_out_arready", false,-1);
    tracep->declBit(c+977,"auto_out_arvalid", false,-1);
    tracep->declBus(c+951,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+952,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+953,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+978,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+972,"auto_out_rready", false,-1);
    tracep->declBit(c+1178,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1179,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+426,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1187,"auto_out_rlast", false,-1);
    tracep->declBit(c+975,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+30,"w_idle", false,-1);
    tracep->declBit(c+1188,"in_awready", false,-1);
    tracep->declBit(c+31,"busy", false,-1);
    tracep->declBus(c+32,"r_addr", false,-1, 31,0);
    tracep->declBus(c+33,"r_len", false,-1, 7,0);
    tracep->declBus(c+979,"len", false,-1, 7,0);
    tracep->declBus(c+980,"addr", false,-1, 31,0);
    tracep->declBit(c+34,"busy_1", false,-1);
    tracep->declBus(c+35,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+36,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+981,"len_1", false,-1, 7,0);
    tracep->declBus(c+982,"addr_1", false,-1, 31,0);
    tracep->declBit(c+37,"wbeats_latched", false,-1);
    tracep->declBit(c+973,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+983,"wbeats_valid", false,-1);
    tracep->declBus(c+38,"w_counter", false,-1, 8,0);
    tracep->declBus(c+984,"w_todo", false,-1, 8,0);
    tracep->declBit(c+976,"w_last", false,-1);
    tracep->declBit(c+1182,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+29,"io_enq_ready", false,-1);
    tracep->declBit(c+966,"io_enq_valid", false,-1);
    tracep->declBus(c+967,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+968,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+969,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+970,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+971,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1189,"io_deq_ready", false,-1);
    tracep->declBit(c+977,"io_deq_valid", false,-1);
    tracep->declBus(c+951,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+985,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+986,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+953,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+987,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+55,"ram", false,-1, 48,0);
    tracep->declBit(c+57,"full", false,-1);
    tracep->declBit(c+977,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1190,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+813,"io_enq_ready", false,-1);
    tracep->declBit(c+955,"io_enq_valid", false,-1);
    tracep->declBus(c+956,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+957,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+958,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+959,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+960,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1191,"io_deq_ready", false,-1);
    tracep->declBit(c+988,"io_deq_valid", false,-1);
    tracep->declBus(c+942,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+989,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+990,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+944,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+991,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+58,"ram", false,-1, 48,0);
    tracep->declBit(c+814,"full", false,-1);
    tracep->declBit(c+988,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1192,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+28,"io_enq_ready", false,-1);
    tracep->declBit(c+961,"io_enq_valid", false,-1);
    tracep->declBus(c+962,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+963,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+964,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1193,"io_deq_ready", false,-1);
    tracep->declBit(c+992,"io_deq_valid", false,-1);
    tracep->declBus(c+946,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+947,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+420,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+60,"ram", false,-1, 36,0);
    tracep->declBit(c+62,"full", false,-1);
    tracep->declBit(c+992,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1194,"do_enq", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+1195,"auto_in_awready", false,-1);
    tracep->declBit(c+993,"auto_in_awvalid", false,-1);
    tracep->declBus(c+942,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+994,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1120,"auto_in_wready", false,-1);
    tracep->declBit(c+995,"auto_in_wvalid", false,-1);
    tracep->declBus(c+946,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+947,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"auto_in_bready", false,-1);
    tracep->declBit(c+63,"auto_in_bvalid", false,-1);
    tracep->declBus(c+64,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1197,"auto_in_arready", false,-1);
    tracep->declBit(c+996,"auto_in_arvalid", false,-1);
    tracep->declBus(c+951,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+997,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1198,"auto_in_rready", false,-1);
    tracep->declBit(c+66,"auto_in_rvalid", false,-1);
    tracep->declBus(c+67,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+69,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1197,"nodeIn_arready", false,-1);
    tracep->declBit(c+1195,"nodeIn_awready", false,-1);
    tracep->declBit(c+998,"w_sel0", false,-1);
    tracep->declBit(c+63,"w_full", false,-1);
    tracep->declBus(c+64,"w_id", false,-1, 3,0);
    tracep->declBit(c+70,"r_sel1", false,-1);
    tracep->declBit(c+71,"w_sel1", false,-1);
    tracep->declBit(c+66,"r_full", false,-1);
    tracep->declBus(c+67,"r_id", false,-1, 3,0);
    tracep->declBit(c+1199,"ren", false,-1);
    tracep->declBit(c+72,"rdata_REG", false,-1);
    tracep->declBus(c+73,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+74,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+75,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+76,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+999,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1199,"R0_en", false,-1);
    tracep->declBit(c+1265,"R0_clk", false,-1);
    tracep->declBus(c+77,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1000,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1200,"W0_en", false,-1);
    tracep->declBit(c+1265,"W0_clk", false,-1);
    tracep->declBus(c+946,"W0_data", false,-1, 31,0);
    tracep->declBus(c+947,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+813,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+955,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+956,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+961,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+962,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+965,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1176,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1177,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+966,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+967,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+968,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1178,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1179,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+813,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+955,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+956,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+961,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+962,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+965,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1176,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1177,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+966,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+967,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+968,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1178,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1179,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+1201,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1001,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+942,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+943,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1181,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+975,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+946,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+947,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+976,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1182,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1183,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1177,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1184,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1202,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1002,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+951,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+952,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+953,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+972,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1178,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1179,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1187,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1195,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+993,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+942,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+994,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1120,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+995,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+946,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+947,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+63,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+64,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1197,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+996,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+951,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+997,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1198,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+66,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+67,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+69,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1003,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1004,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+78,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1005,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+951,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1006,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1294,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+79,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+80,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+940,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+941,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+942,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+943,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+940,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+945,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+946,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+947,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1173,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+18,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+948,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+949,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+950,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+951,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+952,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+953,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1174,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1175,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+19,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+422,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+948,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1183,"in_0_bvalid", false,-1);
    tracep->declBit(c+1178,"in_0_rvalid", false,-1);
    tracep->declBit(c+1203,"in_0_wready", false,-1);
    tracep->declBit(c+1204,"in_0_awready", false,-1);
    tracep->declBit(c+1202,"in_0_arready", false,-1);
    tracep->declBit(c+1201,"anonIn_awready", false,-1);
    tracep->declBit(c+1007,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1008,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1009,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1010,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1011,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1012,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1013,"arSel", false,-1, 15,0);
    tracep->declBus(c+1014,"awSel", false,-1, 15,0);
    tracep->declBus(c+1205,"rSel", false,-1, 15,0);
    tracep->declBus(c+1206,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1015,"in_0_awvalid", false,-1);
    tracep->declBit(c+1016,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1017,"in_0_wvalid", false,-1);
    tracep->declBit(c+115,"idle_3", false,-1);
    tracep->declBit(c+1207,"anyValid", false,-1);
    tracep->declBus(c+1208,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+116,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1209,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1210,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1211,"prefixOR_1", false,-1);
    tracep->declBit(c+1212,"winner_3_1", false,-1);
    tracep->declBit(c+1213,"winner_3_2", false,-1);
    tracep->declBit(c+117,"state_3_0", false,-1);
    tracep->declBit(c+118,"state_3_1", false,-1);
    tracep->declBit(c+119,"state_3_2", false,-1);
    tracep->declBit(c+1214,"muxState_3_0", false,-1);
    tracep->declBit(c+1215,"muxState_3_1", false,-1);
    tracep->declBit(c+1216,"muxState_3_2", false,-1);
    tracep->declBit(c+120,"idle_4", false,-1);
    tracep->declBit(c+1217,"anyValid_1", false,-1);
    tracep->declBus(c+1218,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+121,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1219,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1220,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1221,"winner_4_0", false,-1);
    tracep->declBit(c+1222,"winner_4_2", false,-1);
    tracep->declBit(c+122,"state_4_0", false,-1);
    tracep->declBit(c+123,"state_4_2", false,-1);
    tracep->declBit(c+1223,"muxState_4_0", false,-1);
    tracep->declBit(c+1224,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+124,"io_enq_ready", false,-1);
    tracep->declBit(c+1016,"io_enq_valid", false,-1);
    tracep->declBus(c+1018,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1225,"io_deq_ready", false,-1);
    tracep->declBit(c+1019,"io_deq_valid", false,-1);
    tracep->declBus(c+1020,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+125,"wrap", false,-1);
    tracep->declBit(c+126,"wrap_1", false,-1);
    tracep->declBit(c+127,"maybe_full", false,-1);
    tracep->declBit(c+128,"ptr_match", false,-1);
    tracep->declBit(c+129,"empty", false,-1);
    tracep->declBit(c+130,"full", false,-1);
    tracep->declBit(c+1019,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1226,"do_deq", false,-1);
    tracep->declBit(c+1227,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+126,"R0_addr", false,-1);
    tracep->declBit(c+1325,"R0_en", false,-1);
    tracep->declBit(c+1265,"R0_clk", false,-1);
    tracep->declBus(c+131,"R0_data", false,-1, 2,0);
    tracep->declBit(c+125,"W0_addr", false,-1);
    tracep->declBit(c+1227,"W0_en", false,-1);
    tracep->declBit(c+1265,"W0_clk", false,-1);
    tracep->declBus(c+1018,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+1180,"auto_in_awready", false,-1);
    tracep->declBit(c+973,"auto_in_awvalid", false,-1);
    tracep->declBus(c+942,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+943,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+974,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1181,"auto_in_wready", false,-1);
    tracep->declBit(c+975,"auto_in_wvalid", false,-1);
    tracep->declBus(c+946,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+947,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+976,"auto_in_wlast", false,-1);
    tracep->declBit(c+1182,"auto_in_bready", false,-1);
    tracep->declBit(c+1183,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1177,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1184,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1185,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1186,"auto_in_arready", false,-1);
    tracep->declBit(c+977,"auto_in_arvalid", false,-1);
    tracep->declBus(c+951,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+952,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+953,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+978,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+972,"auto_in_rready", false,-1);
    tracep->declBit(c+1178,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1179,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+426,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1187,"auto_in_rlast", false,-1);
    tracep->declBit(c+1201,"auto_out_awready", false,-1);
    tracep->declBit(c+1001,"auto_out_awvalid", false,-1);
    tracep->declBus(c+942,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+943,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+944,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1181,"auto_out_wready", false,-1);
    tracep->declBit(c+975,"auto_out_wvalid", false,-1);
    tracep->declBus(c+946,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+947,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+976,"auto_out_wlast", false,-1);
    tracep->declBit(c+1182,"auto_out_bready", false,-1);
    tracep->declBit(c+1183,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1177,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1184,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1202,"auto_out_arready", false,-1);
    tracep->declBit(c+1002,"auto_out_arvalid", false,-1);
    tracep->declBus(c+951,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+952,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+953,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+972,"auto_out_rready", false,-1);
    tracep->declBit(c+1178,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1179,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1187,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+134,"io_enq_ready", false,-1);
    tracep->declBit(c+1121,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1228,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+138,"io_enq_ready", false,-1);
    tracep->declBit(c+1122,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1229,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+142,"io_enq_ready", false,-1);
    tracep->declBit(c+1123,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1230,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+146,"io_enq_ready", false,-1);
    tracep->declBit(c+1124,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1231,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+150,"io_enq_ready", false,-1);
    tracep->declBit(c+1125,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1232,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+154,"io_enq_ready", false,-1);
    tracep->declBit(c+1126,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1233,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+158,"io_enq_ready", false,-1);
    tracep->declBit(c+1127,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1234,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+162,"io_enq_ready", false,-1);
    tracep->declBit(c+1128,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1235,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+166,"io_enq_ready", false,-1);
    tracep->declBit(c+1129,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1236,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+170,"io_enq_ready", false,-1);
    tracep->declBit(c+1130,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1237,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+174,"io_enq_ready", false,-1);
    tracep->declBit(c+1131,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1238,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+178,"io_enq_ready", false,-1);
    tracep->declBit(c+1132,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1239,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+182,"io_enq_ready", false,-1);
    tracep->declBit(c+1133,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1240,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+186,"io_enq_ready", false,-1);
    tracep->declBit(c+1134,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1241,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+190,"io_enq_ready", false,-1);
    tracep->declBit(c+1135,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1242,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+194,"io_enq_ready", false,-1);
    tracep->declBit(c+1136,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1243,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+198,"io_enq_ready", false,-1);
    tracep->declBit(c+1137,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1244,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+202,"io_enq_ready", false,-1);
    tracep->declBit(c+1138,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1245,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+206,"io_enq_ready", false,-1);
    tracep->declBit(c+1139,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1246,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+210,"io_enq_ready", false,-1);
    tracep->declBit(c+1140,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1247,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+214,"io_enq_ready", false,-1);
    tracep->declBit(c+1141,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1248,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+218,"io_enq_ready", false,-1);
    tracep->declBit(c+1142,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1249,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+222,"io_enq_ready", false,-1);
    tracep->declBit(c+1143,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1250,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+226,"io_enq_ready", false,-1);
    tracep->declBit(c+1144,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1251,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+230,"io_enq_ready", false,-1);
    tracep->declBit(c+1145,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1252,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+234,"io_enq_ready", false,-1);
    tracep->declBit(c+1146,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1253,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+238,"io_enq_ready", false,-1);
    tracep->declBit(c+1147,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1254,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+242,"io_enq_ready", false,-1);
    tracep->declBit(c+1148,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1255,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+246,"io_enq_ready", false,-1);
    tracep->declBit(c+1149,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1256,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+250,"io_enq_ready", false,-1);
    tracep->declBit(c+1150,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1257,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+254,"io_enq_ready", false,-1);
    tracep->declBit(c+1151,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1258,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+258,"io_enq_ready", false,-1);
    tracep->declBit(c+1152,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1259,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+813,"auto_master_out_awready", false,-1);
    tracep->declBit(c+955,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+956,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"auto_master_out_wready", false,-1);
    tracep->declBit(c+961,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+962,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+965,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1176,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1177,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"auto_master_out_arready", false,-1);
    tracep->declBit(c+966,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+967,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+968,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1178,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1179,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1293,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+1319,"io_interrupt", false,-1);
    tracep->declBit(c+813,"io_master_awready", false,-1);
    tracep->declBit(c+955,"io_master_awvalid", false,-1);
    tracep->declBus(c+956,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+957,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"io_master_wready", false,-1);
    tracep->declBit(c+961,"io_master_wvalid", false,-1);
    tracep->declBus(c+962,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"io_master_wlast", false,-1);
    tracep->declBit(c+965,"io_master_bready", false,-1);
    tracep->declBit(c+1176,"io_master_bvalid", false,-1);
    tracep->declBus(c+1177,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+423,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"io_master_arready", false,-1);
    tracep->declBit(c+966,"io_master_arvalid", false,-1);
    tracep->declBus(c+967,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+968,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"io_master_rready", false,-1);
    tracep->declBit(c+1178,"io_master_rvalid", false,-1);
    tracep->declBus(c+1179,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+424,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1293,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"io_master_rlast", false,-1);
    tracep->declBit(c+1326,"io_slave_awready", false,-1);
    tracep->declBit(c+1319,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1327,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1328,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1329,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1330,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1331,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1332,"io_slave_wready", false,-1);
    tracep->declBit(c+1319,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1328,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1327,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1319,"io_slave_wlast", false,-1);
    tracep->declBit(c+1319,"io_slave_bready", false,-1);
    tracep->declBit(c+1333,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1334,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1335,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1336,"io_slave_arready", false,-1);
    tracep->declBit(c+1319,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1327,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1328,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1329,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1330,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1331,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1319,"io_slave_rready", false,-1);
    tracep->declBit(c+1337,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1338,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1339,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1340,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1341,"io_slave_rlast", false,-1);
    tracep->declBit(c+262,"DIFFTEST", false,-1);
    tracep->declBus(c+815,"pc", false,-1, 31,0);
    tracep->declBus(c+816,"dnpc", false,-1, 31,0);
    tracep->declBit(c+817,"PCU_VALID", false,-1);
    tracep->declBit(c+818,"IFU_READY", false,-1);
    tracep->declBus(c+819,"inst", false,-1, 31,0);
    tracep->declBit(c+820,"IFU_VALID", false,-1);
    tracep->declBit(c+821,"IDU_READY", false,-1);
    tracep->declBus(c+1342,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1342,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+822,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1295,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1327,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1329,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+263,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1327,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+896,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+264,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+897,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1330,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+265,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1331,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+266,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+406,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+407,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1319,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+890,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+1296,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+898,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+823,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+891,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1260,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+824,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1343,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+408,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+825,"IDU_VALID", false,-1);
    tracep->declBit(c+826,"EXU_READY", false,-1);
    tracep->declBus(c+827,"op", false,-1, 6,0);
    tracep->declBus(c+267,"rd", false,-1, 4,0);
    tracep->declBus(c+828,"funct3", false,-1, 2,0);
    tracep->declBus(c+268,"rs1", false,-1, 4,0);
    tracep->declBus(c+269,"rs2", false,-1, 4,0);
    tracep->declBus(c+270,"imm", false,-1, 31,0);
    tracep->declBus(c+271,"funct7", false,-1, 6,0);
    tracep->declBus(c+272,"shamt", false,-1, 4,0);
    tracep->declBit(c+829,"sram_lsu_read", false,-1);
    tracep->declBit(c+830,"sram_lsu_write", false,-1);
    tracep->declBit(c+1297,"LSU_DONE", false,-1);
    tracep->declBit(c+273,"EXU_VALID", false,-1);
    tracep->declBit(c+274,"WBU_READY", false,-1);
    tracep->declBus(c+275,"res", false,-1, 31,0);
    tracep->declBit(c+831,"ls_valid", false,-1);
    tracep->declBit(c+832,"ls_wen", false,-1);
    tracep->declBus(c+833,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+397,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+834,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+835,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+836,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+837,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1329,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1329,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1344,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1344,"ls_arburst", false,-1, 1,0);
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
    tracep->declBus(c+750,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+751,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1298,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+752,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1299,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+892,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+753,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+754,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1345,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+899,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1346,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+900,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+755,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+756,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+757,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+758,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+409,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+410,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+759,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+893,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+760,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+1021,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1261,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+761,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+762,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+894,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1262,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+763,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+764,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+411,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+1022,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1023,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1024,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+838,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1025,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1026,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1027,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1028,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+839,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1029,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+840,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1030,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1031,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1032,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1033,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+841,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+842,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1034,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+843,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1035,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+844,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+845,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+1036,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+1037,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+846,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+847,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+1038,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+1039,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+848,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+849,"wbu_done", false,-1);
    tracep->declBit(c+262,"difftest", false,-1);
    tracep->declBus(c+289,"xrd", false,-1, 31,0);
    tracep->declBus(c+290,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+291,"rf_wen", false,-1);
    tracep->declBus(c+292,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+293,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+294,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+295,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+296,"mepc_en", false,-1);
    tracep->declBit(c+297,"mstatus_en", false,-1);
    tracep->declBit(c+298,"mcause_en", false,-1);
    tracep->declBit(c+299,"mtvec_en", false,-1);
    tracep->declBus(c+300,"r1", false,-1, 31,0);
    tracep->declBus(c+301,"r2", false,-1, 31,0);
    tracep->declBus(c+302,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+303,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+829,"sram_lsu_read", false,-1);
    tracep->declBit(c+830,"sram_lsu_write", false,-1);
    tracep->declBit(c+1297,"LSU_DONE", false,-1);
    tracep->declBit(c+825,"IDU_VALID", false,-1);
    tracep->declBit(c+826,"EXU_READY", false,-1);
    tracep->declBit(c+273,"EXU_VALID", false,-1);
    tracep->declBit(c+274,"WBU_READY", false,-1);
    tracep->declBus(c+827,"op", false,-1, 6,0);
    tracep->declBus(c+828,"funct3", false,-1, 2,0);
    tracep->declBus(c+270,"imm", false,-1, 31,0);
    tracep->declBus(c+271,"funct7", false,-1, 6,0);
    tracep->declBus(c+272,"shamt", false,-1, 4,0);
    tracep->declBus(c+300,"r1", false,-1, 31,0);
    tracep->declBus(c+301,"r2", false,-1, 31,0);
    tracep->declBus(c+275,"res_reg", false,-1, 31,0);
    tracep->declBit(c+831,"ls_valid", false,-1);
    tracep->declBit(c+832,"ls_wen", false,-1);
    tracep->declBus(c+833,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+397,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+834,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+835,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+836,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+837,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1329,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1329,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1344,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1344,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+750,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+815,"pc", false,-1, 31,0);
    tracep->declBus(c+816,"dnpc_reg", false,-1, 31,0);
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
    tracep->declBit(c+826,"exu_ready", false,-1);
    tracep->declBit(c+273,"exu_valid", false,-1);
    tracep->declBus(c+1331,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1344,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1347,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+1348,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+850,"state", false,-1, 1,0);
    tracep->declBus(c+1300,"next_state", false,-1, 1,0);
    tracep->declBus(c+304,"s_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+851,"a", false,-1, 31,0);
    tracep->declBus(c+852,"b", false,-1, 31,0);
    tracep->declBus(c+853,"res", false,-1, 31,0);
    tracep->declBus(c+854,"csr", false,-1, 31,0);
    tracep->declBus(c+855,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+856,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+855,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+398,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+855,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+1040,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+1349,"ls_wsize", false,-1, 2,0);
    tracep->declBus(c+1350,"ls_rsize", false,-1, 2,0);
    tracep->declBus(c+857,"dnpc", false,-1, 31,0);
    tracep->declBus(c+270,"offset", false,-1, 31,0);
    tracep->declBit(c+858,"jalen", false,-1);
    tracep->declBit(c+859,"jalren", false,-1);
    tracep->declBit(c+399,"beqen", false,-1);
    tracep->declBit(c+400,"bneen", false,-1);
    tracep->declBit(c+401,"blten", false,-1);
    tracep->declBit(c+402,"bgeen", false,-1);
    tracep->declBit(c+403,"bltuen", false,-1);
    tracep->declBit(c+404,"bgeuen", false,-1);
    tracep->declBit(c+860,"ecall_en", false,-1);
    tracep->declBit(c+405,"mret_en", false,-1);
    tracep->declBit(c+861,"gpr_wen", false,-1);
    tracep->declBit(c+862,"mepc_wen", false,-1);
    tracep->declBit(c+863,"mstatus_wen", false,-1);
    tracep->declBit(c+864,"mcause_wen", false,-1);
    tracep->declBit(c+865,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+819,"inst", false,-1, 31,0);
    tracep->declBit(c+820,"IFU_VALID", false,-1);
    tracep->declBit(c+821,"IDU_READY", false,-1);
    tracep->declBit(c+825,"IDU_VALID", false,-1);
    tracep->declBit(c+826,"EXU_READY", false,-1);
    tracep->declBus(c+827,"op_reg", false,-1, 6,0);
    tracep->declBus(c+267,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+828,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+268,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+269,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+270,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+271,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+272,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+866,"op", false,-1, 6,0);
    tracep->declBus(c+867,"rd", false,-1, 4,0);
    tracep->declBus(c+868,"funct3", false,-1, 2,0);
    tracep->declBus(c+869,"rs1", false,-1, 4,0);
    tracep->declBus(c+870,"rs2", false,-1, 4,0);
    tracep->declBus(c+871,"immI", false,-1, 31,0);
    tracep->declBus(c+872,"immU", false,-1, 31,0);
    tracep->declBus(c+873,"immS", false,-1, 31,0);
    tracep->declBus(c+874,"immB", false,-1, 31,0);
    tracep->declBus(c+875,"immJ", false,-1, 31,0);
    tracep->declBus(c+876,"imm", false,-1, 31,0);
    tracep->declBus(c+877,"funct7", false,-1, 6,0);
    tracep->declBus(c+878,"shamt", false,-1, 4,0);
    tracep->declBit(c+821,"idu_ready", false,-1);
    tracep->declBit(c+825,"idu_valid", false,-1);
    tracep->declBus(c+1351,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+879,"state", false,-1);
    tracep->declBit(c+2,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+815,"pc", false,-1, 31,0);
    tracep->declBus(c+819,"inst", false,-1, 31,0);
    tracep->declBit(c+817,"PCU_VALID", false,-1);
    tracep->declBit(c+818,"IFU_READY", false,-1);
    tracep->declBit(c+820,"IFU_VALID", false,-1);
    tracep->declBit(c+821,"IDU_READY", false,-1);
    tracep->declBit(c+849,"wbu_done", false,-1);
    tracep->declBit(c+890,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+1319,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1327,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1342,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1329,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1330,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1331,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1296,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+1319,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1342,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1327,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1343,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+1319,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+898,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+896,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+406,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+891,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+823,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+264,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+822,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+263,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+265,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+266,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+824,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1260,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+897,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1295,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+407,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+408,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+818,"ifu_ready", false,-1);
    tracep->declBit(c+820,"ifu_valid", false,-1);
    tracep->declBus(c+1331,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1344,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1347,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1348,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+880,"current_state", false,-1, 1,0);
    tracep->declBus(c+3,"next_state", false,-1, 1,0);
    tracep->declBit(c+823,"axi_arvalid", false,-1);
    tracep->declBit(c+824,"axi_rready", false,-1);
    tracep->declBus(c+264,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+822,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+263,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+265,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+266,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1351,"SRAM_IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"SRAM_FETCH", false,-1, 0,0);
    tracep->declBit(c+881,"state", false,-1);
    tracep->declBit(c+882,"sram_start", false,-1);
    tracep->declBus(c+883,"inst_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+829,"sram_lsu_read", false,-1);
    tracep->declBit(c+830,"sram_lsu_write", false,-1);
    tracep->declBit(c+1297,"LSU_DONE", false,-1);
    tracep->declBus(c+750,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+831,"valid", false,-1);
    tracep->declBit(c+832,"wen", false,-1);
    tracep->declBus(c+833,"waddr", false,-1, 31,0);
    tracep->declBus(c+397,"wdata", false,-1, 31,0);
    tracep->declBus(c+834,"raddr", false,-1, 31,0);
    tracep->declBus(c+835,"wmask", false,-1, 3,0);
    tracep->declBus(c+836,"awsize", false,-1, 2,0);
    tracep->declBus(c+837,"arsize", false,-1, 2,0);
    tracep->declBus(c+1329,"awlen", false,-1, 7,0);
    tracep->declBus(c+1329,"arlen", false,-1, 7,0);
    tracep->declBus(c+1344,"awburst", false,-1, 1,0);
    tracep->declBus(c+1344,"arburst", false,-1, 1,0);
    tracep->declBit(c+893,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+759,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1345,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+751,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+753,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+755,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+757,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1021,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+760,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1298,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+892,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+764,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+761,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1261,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+899,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+409,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+894,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+762,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+1346,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+752,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+754,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+756,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+758,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+763,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1262,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+900,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1299,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+410,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+411,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+1331,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1344,"READ", false,-1, 1,0);
    tracep->declBus(c+1347,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1348,"DONE", false,-1, 1,0);
    tracep->declBus(c+765,"state", false,-1, 1,0);
    tracep->declBit(c+759,"axi_awvalid", false,-1);
    tracep->declBit(c+760,"axi_wvalid", false,-1);
    tracep->declBus(c+1345,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+751,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+766,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+753,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+755,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+757,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+767,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+761,"axi_bready", false,-1);
    tracep->declBit(c+764,"axi_wlast", false,-1);
    tracep->declBit(c+762,"axi_arvalid", false,-1);
    tracep->declBit(c+763,"axi_rready", false,-1);
    tracep->declBus(c+1346,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+752,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+754,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+756,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+758,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+815,"pc", false,-1, 31,0);
    tracep->declBus(c+816,"dnpc", false,-1, 31,0);
    tracep->declBit(c+817,"PCU_VALID", false,-1);
    tracep->declBit(c+818,"IFU_READY", false,-1);
    tracep->declBit(c+817,"pcu_valid", false,-1);
    tracep->declBus(c+1351,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+884,"state", false,-1);
    tracep->declBit(c+4,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1353,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1354,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBus(c+289,"wdata", false,-1, 31,0);
    tracep->declBus(c+290,"waddr", false,-1, 4,0);
    tracep->declBit(c+291,"wen", false,-1);
    tracep->declBus(c+268,"raddr1", false,-1, 4,0);
    tracep->declBus(c+300,"r1", false,-1, 31,0);
    tracep->declBus(c+269,"raddr2", false,-1, 4,0);
    tracep->declBus(c+301,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+305+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+273,"EXU_VALID", false,-1);
    tracep->declBit(c+274,"WBU_READY", false,-1);
    tracep->declBit(c+849,"wbu_done", false,-1);
    tracep->declBit(c+262,"difftest", false,-1);
    tracep->declBus(c+289,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+275,"res", false,-1, 31,0);
    tracep->declBus(c+290,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+267,"rd", false,-1, 4,0);
    tracep->declBit(c+291,"wen_reg", false,-1);
    tracep->declBit(c+284,"gpr_wen", false,-1);
    tracep->declBus(c+277,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+279,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+281,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+283,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+292,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+293,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+294,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+295,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+285,"mepc_wen", false,-1);
    tracep->declBit(c+286,"mstatus_wen", false,-1);
    tracep->declBit(c+287,"mcause_wen", false,-1);
    tracep->declBit(c+288,"mtvec_wen", false,-1);
    tracep->declBit(c+296,"mepc_wen_reg", false,-1);
    tracep->declBit(c+297,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+298,"mcause_wen_reg", false,-1);
    tracep->declBit(c+299,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+275,"xrd", false,-1, 31,0);
    tracep->declBus(c+267,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+284,"o_rf_wen", false,-1);
    tracep->declBus(c+277,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+279,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+281,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+283,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+274,"wbu_ready", false,-1);
    tracep->declBus(c+1331,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1344,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1347,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1348,"NULL", false,-1, 1,0);
    tracep->declBus(c+885,"state", false,-1, 1,0);
    tracep->declBus(c+5,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+890,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1327,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1342,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1329,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1330,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1331,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1296,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1342,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1327,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1343,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+898,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+896,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+406,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+891,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+823,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+264,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+822,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+263,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+265,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+266,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+824,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1260,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+897,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1295,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+407,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+408,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+893,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+759,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1345,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+751,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+753,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+755,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+757,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1021,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+760,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1298,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+892,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+764,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+761,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1261,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+899,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+409,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+894,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+762,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1346,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+752,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+754,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+756,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+758,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+763,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1262,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+900,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1299,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+410,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+411,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+813,"io_master_awready", false,-1);
    tracep->declBit(c+955,"io_master_awvalid", false,-1);
    tracep->declBus(c+956,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+957,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+28,"io_master_wready", false,-1);
    tracep->declBit(c+961,"io_master_wvalid", false,-1);
    tracep->declBus(c+962,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"io_master_wlast", false,-1);
    tracep->declBit(c+965,"io_master_bready", false,-1);
    tracep->declBit(c+1176,"io_master_bvalid", false,-1);
    tracep->declBus(c+1177,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+423,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+29,"io_master_arready", false,-1);
    tracep->declBit(c+966,"io_master_arvalid", false,-1);
    tracep->declBus(c+967,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+968,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"io_master_rready", false,-1);
    tracep->declBit(c+1178,"io_master_rvalid", false,-1);
    tracep->declBus(c+1179,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+424,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1293,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"io_master_rlast", false,-1);
    tracep->declBit(c+843,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1034,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1028,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1022,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1026,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1030,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1032,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+844,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1035,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1023,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1025,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1039,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1036,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+845,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+839,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+841,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+846,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1037,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1029,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1024,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1027,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1031,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1033,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1038,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+847,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+840,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+838,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+842,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+848,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+302,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+303,"marchid", false,-1, 31,0);
    tracep->declBus(c+1041,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1042,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1043,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1263,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1044,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1045,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1046,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+886,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+901,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+887,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+902,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1047,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1048,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1049,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1050,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+412,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+413,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1051,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+895,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1052,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1301,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+903,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1053,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1054,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1055,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1264,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1056,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1057,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+414,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1331,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1344,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1347,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1348,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+888,"state", false,-1, 1,0);
    tracep->declBus(c+1302,"next_state", false,-1, 1,0);
    tracep->declBus(c+1355,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1356,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1058,"sel_clint", false,-1);
    tracep->declBus(c+1357,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1358,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1059,"sel_mvendorid", false,-1);
    tracep->declBit(c+1060,"sel_marchid", false,-1);
    tracep->declBit(c+1061,"sel_id", false,-1);
    tracep->declBus(c+1062,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1063,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1064,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+421,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1065,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1066,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1067,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1068,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1359,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1069,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1360,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1070,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1071,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1072,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1073,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1361,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1362,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1363,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1325,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1074,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1325,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1325,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1075,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1076,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1325,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1325,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1077,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1078,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1364,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1365,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1328,"din", false,-1, 31,0);
    tracep->declBus(c+303,"dout", false,-1, 31,0);
    tracep->declBit(c+1319,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1328,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+294,"din", false,-1, 31,0);
    tracep->declBus(c+280,"dout", false,-1, 31,0);
    tracep->declBit(c+298,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1328,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+292,"din", false,-1, 31,0);
    tracep->declBus(c+276,"dout", false,-1, 31,0);
    tracep->declBit(c+296,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1366,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+293,"din", false,-1, 31,0);
    tracep->declBus(c+278,"dout", false,-1, 31,0);
    tracep->declBit(c+297,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1328,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+295,"din", false,-1, 31,0);
    tracep->declBus(c+282,"dout", false,-1, 31,0);
    tracep->declBit(c+299,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1367,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1328,"din", false,-1, 31,0);
    tracep->declBus(c+302,"dout", false,-1, 31,0);
    tracep->declBit(c+1319,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+843,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1034,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1028,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1022,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1026,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1030,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1032,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+844,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1035,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1023,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1025,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1039,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1036,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+845,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+839,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+841,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+846,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1037,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1029,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1024,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1027,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1031,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1033,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1038,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+847,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+840,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+838,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+842,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+848,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+843,"axi_awready", false,-1);
    tracep->declBit(c+844,"axi_wready", false,-1);
    tracep->declBit(c+845,"axi_bvalid", false,-1);
    tracep->declBit(c+846,"axi_arready", false,-1);
    tracep->declBit(c+847,"axi_rvalid", false,-1);
    tracep->declBit(c+848,"axi_rlast", false,-1);
    tracep->declBus(c+841,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+842,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+839,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+840,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+838,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+889,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1355,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1356,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+337,"mtime", false,-1, 63,0);
    tracep->declBus(c+1303,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"io_d", false,-1);
    tracep->declBit(c+339,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"io_d", false,-1);
    tracep->declBit(c+339,"io_q", false,-1);
    tracep->declBit(c+339,"sync_0", false,-1);
    tracep->declBit(c+340,"sync_1", false,-1);
    tracep->declBit(c+341,"sync_2", false,-1);
    tracep->declBit(c+342,"sync_3", false,-1);
    tracep->declBit(c+343,"sync_4", false,-1);
    tracep->declBit(c+344,"sync_5", false,-1);
    tracep->declBit(c+345,"sync_6", false,-1);
    tracep->declBit(c+346,"sync_7", false,-1);
    tracep->declBit(c+347,"sync_8", false,-1);
    tracep->declBit(c+348,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+926,"auto_in_psel", false,-1);
    tracep->declBit(c+418,"auto_in_penable", false,-1);
    tracep->declBit(c+917,"auto_in_pwrite", false,-1);
    tracep->declBus(c+925,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+433,"auto_in_pready", false,-1);
    tracep->declBit(c+1324,"auto_in_pslverr", false,-1);
    tracep->declBus(c+434,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1267,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1268,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1269,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1270,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1271,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1272,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1273,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1274,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1275,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1276,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBus(c+1079,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+926,"in_psel", false,-1);
    tracep->declBit(c+418,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+917,"in_pwrite", false,-1);
    tracep->declBus(c+918,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+433,"in_pready", false,-1);
    tracep->declBus(c+434,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1324,"in_pslverr", false,-1);
    tracep->declBus(c+1267,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1268,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1269,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1270,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1271,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1272,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1273,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1274,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1275,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1276,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1329,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1368,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1369,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1370,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1371,"ONE", false,-1, 7,0);
    tracep->declBus(c+1372,"TWO", false,-1, 7,0);
    tracep->declBus(c+1373,"THREE", false,-1, 7,0);
    tracep->declBus(c+1374,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1375,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1376,"SIX", false,-1, 7,0);
    tracep->declBus(c+1377,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1378,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1379,"NINE", false,-1, 7,0);
    tracep->declBus(c+1380,"A", false,-1, 7,0);
    tracep->declBus(c+1381,"B", false,-1, 7,0);
    tracep->declBus(c+1382,"C", false,-1, 7,0);
    tracep->declBus(c+1383,"D", false,-1, 7,0);
    tracep->declBus(c+1384,"E", false,-1, 7,0);
    tracep->declBus(c+1385,"F", false,-1, 7,0);
    tracep->declBus(c+435,"led_reg", false,-1, 15,0);
    tracep->declBus(c+436,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+437+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1080,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1081,"write_en", false,-1);
    tracep->declBit(c+1082,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+924,"auto_in_psel", false,-1);
    tracep->declBit(c+417,"auto_in_penable", false,-1);
    tracep->declBit(c+917,"auto_in_pwrite", false,-1);
    tracep->declBus(c+925,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+664,"auto_in_pready", false,-1);
    tracep->declBit(c+1323,"auto_in_pslverr", false,-1);
    tracep->declBus(c+665,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1277,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1278,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBus(c+1079,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+924,"in_psel", false,-1);
    tracep->declBit(c+417,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+917,"in_pwrite", false,-1);
    tracep->declBus(c+918,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+664,"in_pready", false,-1);
    tracep->declBus(c+665,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1323,"in_pslverr", false,-1);
    tracep->declBit(c+1277,"ps2_clk", false,-1);
    tracep->declBit(c+1278,"ps2_data", false,-1);
    tracep->declBit(c+1083,"is_read", false,-1);
    tracep->declBit(c+666,"exp_en", false,-1);
    tracep->declBit(c+667,"break_en", false,-1);
    tracep->declBus(c+786,"state", false,-1, 1,0);
    tracep->declBus(c+668,"counter", false,-1, 3,0);
    tracep->declBus(c+669,"buffer", false,-1, 7,0);
    tracep->declBus(c+670,"buffer1", false,-1, 7,0);
    tracep->declBus(c+671,"buffer2", false,-1, 7,0);
    tracep->declBus(c+665,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+1003,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1004,"auto_in_wvalid", false,-1);
    tracep->declBit(c+78,"auto_in_arready", false,-1);
    tracep->declBit(c+1005,"auto_in_arvalid", false,-1);
    tracep->declBus(c+951,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1006,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1294,"auto_in_rready", false,-1);
    tracep->declBit(c+79,"auto_in_rvalid", false,-1);
    tracep->declBus(c+80,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+79,"state", false,-1);
    tracep->declBus(c+81,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+80,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1084,"raddr", false,-1, 31,0);
    tracep->declBit(c+1085,"ren", false,-1);
    tracep->declBus(c+1086,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+927,"auto_in_psel", false,-1);
    tracep->declBit(c+419,"auto_in_penable", false,-1);
    tracep->declBit(c+917,"auto_in_pwrite", false,-1);
    tracep->declBus(c+915,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1290,"auto_in_pready", false,-1);
    tracep->declBit(c+1319,"auto_in_pslverr", false,-1);
    tracep->declBus(c+17,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1166,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1167,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1288,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBus(c+915,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+927,"in_psel", false,-1);
    tracep->declBit(c+419,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+917,"in_pwrite", false,-1);
    tracep->declBus(c+918,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1290,"in_pready", false,-1);
    tracep->declBus(c+17,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"in_pslverr", false,-1);
    tracep->declBit(c+1166,"qspi_sck", false,-1);
    tracep->declBit(c+1167,"qspi_ce_n", false,-1);
    tracep->declBus(c+1288,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1288,"din", false,-1, 3,0);
    tracep->declBus(c+1168,"dout", false,-1, 3,0);
    tracep->declBus(c+1169,"douten", false,-1, 3,0);
    tracep->declBit(c+1304,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1265,"clk_i", false,-1);
    tracep->declBit(c+1266,"rst_i", false,-1);
    tracep->declBus(c+915,"adr_i", false,-1, 31,0);
    tracep->declBus(c+918,"dat_i", false,-1, 31,0);
    tracep->declBus(c+17,"dat_o", false,-1, 31,0);
    tracep->declBus(c+919,"sel_i", false,-1, 3,0);
    tracep->declBit(c+927,"cyc_i", false,-1);
    tracep->declBit(c+927,"stb_i", false,-1);
    tracep->declBit(c+1304,"ack_o", false,-1);
    tracep->declBit(c+917,"we_i", false,-1);
    tracep->declBit(c+1166,"sck", false,-1);
    tracep->declBit(c+1167,"ce_n", false,-1);
    tracep->declBus(c+1288,"din", false,-1, 3,0);
    tracep->declBus(c+1168,"dout", false,-1, 3,0);
    tracep->declBus(c+1169,"douten", false,-1, 3,0);
    tracep->declBus(c+1351,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+445,"mr_sck", false,-1);
    tracep->declBit(c+446,"mr_ce_n", false,-1);
    tracep->declBus(c+1288,"mr_din", false,-1, 3,0);
    tracep->declBus(c+447,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+448,"mr_doe", false,-1);
    tracep->declBit(c+449,"mw_sck", false,-1);
    tracep->declBit(c+450,"mw_ce_n", false,-1);
    tracep->declBus(c+1288,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1154,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+451,"mw_doe", false,-1);
    tracep->declBit(c+1155,"mr_rd", false,-1);
    tracep->declBit(c+452,"mr_done", false,-1);
    tracep->declBit(c+1156,"mw_wr", false,-1);
    tracep->declBit(c+1157,"mw_done", false,-1);
    tracep->declBit(c+927,"wb_valid", false,-1);
    tracep->declBit(c+1087,"wb_we", false,-1);
    tracep->declBit(c+1088,"wb_re", false,-1);
    tracep->declBit(c+453,"state", false,-1);
    tracep->declBit(c+1158,"nstate", false,-1);
    tracep->declBus(c+1089,"size", false,-1, 2,0);
    tracep->declBus(c+1090,"byte0", false,-1, 7,0);
    tracep->declBus(c+1091,"byte1", false,-1, 7,0);
    tracep->declBus(c+1092,"byte2", false,-1, 7,0);
    tracep->declBus(c+1093,"byte3", false,-1, 7,0);
    tracep->declBus(c+1094,"wdata", false,-1, 31,0);
    tracep->declBit(c+672,"qpi_flag", false,-1);
    tracep->declBit(c+673,"qpi_sck", false,-1);
    tracep->declBit(c+674,"qpi_ce_n", false,-1);
    tracep->declBus(c+675,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+676,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+677,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1305,"rst_n", false,-1);
    tracep->declBus(c+1095,"addr", false,-1, 23,0);
    tracep->declBit(c+1155,"rd", false,-1);
    tracep->declBus(c+1386,"size", false,-1, 2,0);
    tracep->declBit(c+452,"done", false,-1);
    tracep->declBus(c+17,"line", false,-1, 31,0);
    tracep->declBit(c+445,"sck", false,-1);
    tracep->declBit(c+446,"ce_n", false,-1);
    tracep->declBus(c+1288,"din", false,-1, 3,0);
    tracep->declBus(c+447,"dout", false,-1, 3,0);
    tracep->declBit(c+448,"douten", false,-1);
    tracep->declBus(c+1351,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"READ", false,-1, 0,0);
    tracep->declBus(c+1387,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+454,"state", false,-1);
    tracep->declBit(c+1159,"nstate", false,-1);
    tracep->declBus(c+455,"counter", false,-1, 7,0);
    tracep->declBus(c+456,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+349+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1388,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+457,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1305,"rst_n", false,-1);
    tracep->declBus(c+1096,"addr", false,-1, 23,0);
    tracep->declBus(c+1094,"line", false,-1, 31,0);
    tracep->declBus(c+1089,"size", false,-1, 2,0);
    tracep->declBit(c+1156,"wr", false,-1);
    tracep->declBit(c+1157,"done", false,-1);
    tracep->declBit(c+449,"sck", false,-1);
    tracep->declBit(c+450,"ce_n", false,-1);
    tracep->declBus(c+1288,"din", false,-1, 3,0);
    tracep->declBus(c+1154,"dout", false,-1, 3,0);
    tracep->declBit(c+451,"douten", false,-1);
    tracep->declBus(c+1351,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1097,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+458,"state", false,-1);
    tracep->declBit(c+1160,"nstate", false,-1);
    tracep->declBus(c+459,"counter", false,-1, 7,0);
    tracep->declBus(c+460,"saddr", false,-1, 23,0);
    tracep->declBus(c+1389,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+921,"auto_in_psel", false,-1);
    tracep->declBit(c+415,"auto_in_penable", false,-1);
    tracep->declBit(c+917,"auto_in_pwrite", false,-1);
    tracep->declBus(c+915,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+431,"auto_in_pready", false,-1);
    tracep->declBit(c+1319,"auto_in_pslverr", false,-1);
    tracep->declBus(c+432,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1289,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+429,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+780,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+781,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+782,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+783,"sdram_bundle_we", false,-1);
    tracep->declBus(c+784,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+785,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+430,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+810,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBus(c+915,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+921,"in_psel", false,-1);
    tracep->declBit(c+415,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+917,"in_pwrite", false,-1);
    tracep->declBus(c+918,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+431,"in_pready", false,-1);
    tracep->declBus(c+432,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"in_pslverr", false,-1);
    tracep->declBit(c+1289,"sdram_clk", false,-1);
    tracep->declBit(c+429,"sdram_cke", false,-1);
    tracep->declBit(c+780,"sdram_cs", false,-1);
    tracep->declBit(c+781,"sdram_ras", false,-1);
    tracep->declBit(c+782,"sdram_cas", false,-1);
    tracep->declBit(c+783,"sdram_we", false,-1);
    tracep->declBus(c+784,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+785,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+430,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+810,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+461,"sdram_dout_en", false,-1);
    tracep->declBus(c+462,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+353,"state", false,-1, 1,0);
    tracep->declBit(c+787,"req_accept", false,-1);
    tracep->declBit(c+1098,"is_read", false,-1);
    tracep->declBit(c+1099,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1265,"clk_i", false,-1);
    tracep->declBit(c+1266,"rst_i", false,-1);
    tracep->declBus(c+1100,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1098,"inport_rd_i", false,-1);
    tracep->declBus(c+1329,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+915,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+918,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+810,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+787,"inport_accept_o", false,-1);
    tracep->declBit(c+431,"inport_ack_o", false,-1);
    tracep->declBit(c+1319,"inport_error_o", false,-1);
    tracep->declBus(c+432,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1289,"sdram_clk_o", false,-1);
    tracep->declBit(c+429,"sdram_cke_o", false,-1);
    tracep->declBit(c+780,"sdram_cs_o", false,-1);
    tracep->declBit(c+781,"sdram_ras_o", false,-1);
    tracep->declBit(c+782,"sdram_cas_o", false,-1);
    tracep->declBit(c+783,"sdram_we_o", false,-1);
    tracep->declBus(c+430,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+784,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+785,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+462,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+461,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1390,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1391,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1392,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1393,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1394,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1395,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1396,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1397,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1398,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1399,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1400,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1395,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1401,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1402,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1403,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1404,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1405,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1406,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1407,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1327,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1408,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1395,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1327,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1407,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1406,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1402,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1404,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1403,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1405,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1401,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1409,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1410,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1411,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1411,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1354,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1411,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1393,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1393,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1412,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+915,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1100,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1098,"ram_rd_w", false,-1);
    tracep->declBit(c+787,"ram_accept_w", false,-1);
    tracep->declBus(c+918,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+432,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+431,"ram_ack_w", false,-1);
    tracep->declBit(c+1101,"ram_req_w", false,-1);
    tracep->declBus(c+788,"command_q", false,-1, 3,0);
    tracep->declBus(c+784,"addr_q", false,-1, 12,0);
    tracep->declBus(c+462,"data_q", false,-1, 31,0);
    tracep->declBit(c+463,"data_rd_en_q", false,-1);
    tracep->declBus(c+430,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+429,"cke_q", false,-1);
    tracep->declBus(c+785,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1413,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+464,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+810,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+465,"refresh_q", false,-1);
    tracep->declBus(c+789,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+466+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+790,"state_q", false,-1, 3,0);
    tracep->declBus(c+1161,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1162,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+474,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+475,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1102,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1103,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1104,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1395,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+476,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1163,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1414,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+791,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+477,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+432,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+478,"idx", false,-1, 31,0);
    tracep->declBus(c+479,"rd_q", false,-1, 3,0);
    tracep->declBit(c+431,"ack_q", false,-1);
    tracep->declArray(c+792,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+931,"auto_in_psel", false,-1);
    tracep->declBit(c+932,"auto_in_penable", false,-1);
    tracep->declBit(c+917,"auto_in_pwrite", false,-1);
    tracep->declBus(c+923,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"auto_in_pready", false,-1);
    tracep->declBit(c+1319,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1153,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+427,"spi_bundle_sck", false,-1);
    tracep->declBus(c+428,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+779,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1287,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1415,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1416,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1396,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBus(c+1105,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+931,"in_psel", false,-1);
    tracep->declBit(c+932,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+917,"in_pwrite", false,-1);
    tracep->declBus(c+918,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1292,"in_pready", false,-1);
    tracep->declBus(c+1153,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"in_pslverr", false,-1);
    tracep->declBit(c+427,"spi_sck", false,-1);
    tracep->declBus(c+428,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+779,"spi_mosi", false,-1);
    tracep->declBit(c+1287,"spi_miso", false,-1);
    tracep->declBit(c+480,"spi_irq_out", false,-1);
    tracep->declBus(c+1106,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1107,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1108,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1109,"wb_we_i", false,-1);
    tracep->declBit(c+1110,"wb_stb_i", false,-1);
    tracep->declBit(c+1111,"wb_cyc_i", false,-1);
    tracep->declBit(c+481,"wb_ack_o", false,-1);
    tracep->declBus(c+482,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1330,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1318,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1417,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1418,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1386,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1419,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1420,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1421,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+354,"state", false,-1, 2,0);
    tracep->declBus(c+355,"next_state", false,-1, 2,0);
    tracep->declBus(c+356,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+357,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+358,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+359,"flash_pwrite", false,-1);
    tracep->declBit(c+360,"flash_psel", false,-1);
    tracep->declBit(c+361,"flash_penable", false,-1);
    tracep->declBit(c+362,"flash_pready", false,-1);
    tracep->declBus(c+363,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1422,"Tp", false,-1, 31,0);
    tracep->declBit(c+1265,"wb_clk_i", false,-1);
    tracep->declBit(c+1266,"wb_rst_i", false,-1);
    tracep->declBus(c+1106,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1107,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+482,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1108,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1109,"wb_we_i", false,-1);
    tracep->declBit(c+1110,"wb_stb_i", false,-1);
    tracep->declBit(c+1111,"wb_cyc_i", false,-1);
    tracep->declBit(c+481,"wb_ack_o", false,-1);
    tracep->declBit(c+1319,"wb_err_o", false,-1);
    tracep->declBit(c+480,"wb_int_o", false,-1);
    tracep->declBus(c+428,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+427,"sclk_pad_o", false,-1);
    tracep->declBit(c+779,"mosi_pad_o", false,-1);
    tracep->declBit(c+1287,"miso_pad_i", false,-1);
    tracep->declBus(c+483,"divider", false,-1, 15,0);
    tracep->declBus(c+484,"ctrl", false,-1, 13,0);
    tracep->declBus(c+485,"ss", false,-1, 7,0);
    tracep->declBus(c+1164,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+486,"rx", false,-1, 127,0);
    tracep->declBit(c+490,"rx_negedge", false,-1);
    tracep->declBit(c+491,"tx_negedge", false,-1);
    tracep->declBus(c+492,"char_len", false,-1, 6,0);
    tracep->declBit(c+493,"go", false,-1);
    tracep->declBit(c+494,"lsb", false,-1);
    tracep->declBit(c+495,"ie", false,-1);
    tracep->declBit(c+496,"ass", false,-1);
    tracep->declBit(c+1112,"spi_divider_sel", false,-1);
    tracep->declBit(c+1113,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1114,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1115,"spi_ss_sel", false,-1);
    tracep->declBit(c+497,"tip", false,-1);
    tracep->declBit(c+498,"pos_edge", false,-1);
    tracep->declBit(c+499,"neg_edge", false,-1);
    tracep->declBit(c+500,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1422,"Tp", false,-1, 31,0);
    tracep->declBit(c+1265,"clk_in", false,-1);
    tracep->declBit(c+1266,"rst", false,-1);
    tracep->declBit(c+497,"enable", false,-1);
    tracep->declBit(c+493,"go", false,-1);
    tracep->declBit(c+500,"last_clk", false,-1);
    tracep->declBus(c+483,"divider", false,-1, 15,0);
    tracep->declBit(c+427,"clk_out", false,-1);
    tracep->declBit(c+498,"pos_edge", false,-1);
    tracep->declBit(c+499,"neg_edge", false,-1);
    tracep->declBus(c+501,"cnt", false,-1, 15,0);
    tracep->declBit(c+502,"cnt_zero", false,-1);
    tracep->declBit(c+503,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1422,"Tp", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1266,"rst", false,-1);
    tracep->declBus(c+1116,"latch", false,-1, 3,0);
    tracep->declBus(c+1108,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+492,"len", false,-1, 6,0);
    tracep->declBit(c+494,"lsb", false,-1);
    tracep->declBit(c+493,"go", false,-1);
    tracep->declBit(c+498,"pos_edge", false,-1);
    tracep->declBit(c+499,"neg_edge", false,-1);
    tracep->declBit(c+490,"rx_negedge", false,-1);
    tracep->declBit(c+491,"tx_negedge", false,-1);
    tracep->declBit(c+497,"tip", false,-1);
    tracep->declBit(c+500,"last", false,-1);
    tracep->declBus(c+1107,"p_in", false,-1, 31,0);
    tracep->declArray(c+486,"p_out", false,-1, 127,0);
    tracep->declBit(c+427,"s_clk", false,-1);
    tracep->declBit(c+1287,"s_in", false,-1);
    tracep->declBit(c+779,"s_out", false,-1);
    tracep->declBus(c+504,"cnt", false,-1, 7,0);
    tracep->declArray(c+486,"data", false,-1, 127,0);
    tracep->declBus(c+505,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+506,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+507,"rx_clk", false,-1);
    tracep->declBit(c+508,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+928,"auto_in_psel", false,-1);
    tracep->declBit(c+929,"auto_in_penable", false,-1);
    tracep->declBit(c+917,"auto_in_pwrite", false,-1);
    tracep->declBus(c+925,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+930,"auto_in_pready", false,-1);
    tracep->declBit(c+1319,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1291,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1285,"uart_rx", false,-1);
    tracep->declBit(c+1286,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+928,"in_psel", false,-1);
    tracep->declBit(c+929,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+930,"in_pready", false,-1);
    tracep->declBit(c+1319,"in_pslverr", false,-1);
    tracep->declBus(c+1079,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+917,"in_pwrite", false,-1);
    tracep->declBus(c+1291,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+918,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1285,"uart_rx", false,-1);
    tracep->declBit(c+1286,"uart_tx", false,-1);
    tracep->declBit(c+509,"rtsn", false,-1);
    tracep->declBit(c+1319,"ctsn", false,-1);
    tracep->declBit(c+510,"dtr_pad_o", false,-1);
    tracep->declBit(c+1319,"dsr_pad_i", false,-1);
    tracep->declBit(c+1319,"ri_pad_i", false,-1);
    tracep->declBit(c+1319,"dcd_pad_i", false,-1);
    tracep->declBit(c+511,"interrupt", false,-1);
    tracep->declBit(c+1306,"reg_we", false,-1);
    tracep->declBit(c+1307,"reg_re", false,-1);
    tracep->declBus(c+1117,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1118,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+364,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1165,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+512,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1266,"wb_rst_i", false,-1);
    tracep->declBus(c+1117,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1119,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1165,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1306,"wb_we_i", false,-1);
    tracep->declBit(c+1307,"wb_re_i", false,-1);
    tracep->declBit(c+1286,"stx_pad_o", false,-1);
    tracep->declBit(c+1285,"srx_pad_i", false,-1);
    tracep->declBus(c+1409,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+512,"rts_pad_o", false,-1);
    tracep->declBit(c+510,"dtr_pad_o", false,-1);
    tracep->declBit(c+511,"int_o", false,-1);
    tracep->declBit(c+513,"enable", false,-1);
    tracep->declBit(c+514,"srx_pad", false,-1);
    tracep->declBus(c+515,"ier", false,-1, 3,0);
    tracep->declBus(c+516,"iir", false,-1, 3,0);
    tracep->declBus(c+517,"fcr", false,-1, 1,0);
    tracep->declBus(c+518,"mcr", false,-1, 4,0);
    tracep->declBus(c+519,"lcr", false,-1, 7,0);
    tracep->declBus(c+520,"msr", false,-1, 7,0);
    tracep->declBus(c+521,"dl", false,-1, 15,0);
    tracep->declBus(c+522,"scratch", false,-1, 7,0);
    tracep->declBit(c+523,"start_dlc", false,-1);
    tracep->declBit(c+524,"lsr_mask_d", false,-1);
    tracep->declBit(c+525,"msi_reset", false,-1);
    tracep->declBus(c+526,"dlc", false,-1, 15,0);
    tracep->declBus(c+527,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+528,"rx_reset", false,-1);
    tracep->declBit(c+529,"tx_reset", false,-1);
    tracep->declBit(c+530,"dlab", false,-1);
    tracep->declBit(c+1325,"cts_pad_i", false,-1);
    tracep->declBit(c+1319,"dsr_pad_i", false,-1);
    tracep->declBit(c+1319,"ri_pad_i", false,-1);
    tracep->declBit(c+1319,"dcd_pad_i", false,-1);
    tracep->declBit(c+531,"loopback", false,-1);
    tracep->declBit(c+1319,"cts", false,-1);
    tracep->declBit(c+1325,"dsr", false,-1);
    tracep->declBit(c+1325,"ri", false,-1);
    tracep->declBit(c+1325,"dcd", false,-1);
    tracep->declBit(c+532,"cts_c", false,-1);
    tracep->declBit(c+533,"dsr_c", false,-1);
    tracep->declBit(c+534,"ri_c", false,-1);
    tracep->declBit(c+535,"dcd_c", false,-1);
    tracep->declBus(c+536,"lsr", false,-1, 7,0);
    tracep->declBit(c+537,"lsr0", false,-1);
    tracep->declBit(c+538,"lsr1", false,-1);
    tracep->declBit(c+539,"lsr2", false,-1);
    tracep->declBit(c+540,"lsr3", false,-1);
    tracep->declBit(c+541,"lsr4", false,-1);
    tracep->declBit(c+542,"lsr5", false,-1);
    tracep->declBit(c+543,"lsr6", false,-1);
    tracep->declBit(c+544,"lsr7", false,-1);
    tracep->declBit(c+545,"lsr0r", false,-1);
    tracep->declBit(c+546,"lsr1r", false,-1);
    tracep->declBit(c+547,"lsr2r", false,-1);
    tracep->declBit(c+548,"lsr3r", false,-1);
    tracep->declBit(c+549,"lsr4r", false,-1);
    tracep->declBit(c+550,"lsr5r", false,-1);
    tracep->declBit(c+551,"lsr6r", false,-1);
    tracep->declBit(c+552,"lsr7r", false,-1);
    tracep->declBit(c+6,"lsr_mask", false,-1);
    tracep->declBit(c+553,"rls_int", false,-1);
    tracep->declBit(c+554,"rda_int", false,-1);
    tracep->declBit(c+555,"ti_int", false,-1);
    tracep->declBit(c+556,"thre_int", false,-1);
    tracep->declBit(c+557,"ms_int", false,-1);
    tracep->declBit(c+558,"tf_push", false,-1);
    tracep->declBit(c+559,"rf_pop", false,-1);
    tracep->declBus(c+1308,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+560,"rf_error_bit", false,-1);
    tracep->declBit(c+538,"rf_overrun", false,-1);
    tracep->declBit(c+561,"rf_push_pulse", false,-1);
    tracep->declBus(c+562,"rf_count", false,-1, 4,0);
    tracep->declBus(c+563,"tf_count", false,-1, 4,0);
    tracep->declBus(c+564,"tstate", false,-1, 2,0);
    tracep->declBus(c+565,"rstate", false,-1, 3,0);
    tracep->declBus(c+566,"counter_t", false,-1, 9,0);
    tracep->declBit(c+567,"thre_set_en", false,-1);
    tracep->declBus(c+568,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+569,"block_value", false,-1, 7,0);
    tracep->declBit(c+570,"serial_out", false,-1);
    tracep->declBit(c+571,"serial_in", false,-1);
    tracep->declBit(c+7,"lsr_mask_condition", false,-1);
    tracep->declBit(c+8,"iir_read", false,-1);
    tracep->declBit(c+9,"msr_read", false,-1);
    tracep->declBit(c+10,"fifo_read", false,-1);
    tracep->declBit(c+11,"fifo_write", false,-1);
    tracep->declBus(c+572,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+573,"lsr0_d", false,-1);
    tracep->declBit(c+574,"lsr1_d", false,-1);
    tracep->declBit(c+575,"lsr2_d", false,-1);
    tracep->declBit(c+576,"lsr3_d", false,-1);
    tracep->declBit(c+577,"lsr4_d", false,-1);
    tracep->declBit(c+578,"lsr5_d", false,-1);
    tracep->declBit(c+579,"lsr6_d", false,-1);
    tracep->declBit(c+580,"lsr7_d", false,-1);
    tracep->declBit(c+581,"rls_int_d", false,-1);
    tracep->declBit(c+582,"thre_int_d", false,-1);
    tracep->declBit(c+583,"ms_int_d", false,-1);
    tracep->declBit(c+584,"ti_int_d", false,-1);
    tracep->declBit(c+585,"rda_int_d", false,-1);
    tracep->declBit(c+586,"rls_int_rise", false,-1);
    tracep->declBit(c+587,"thre_int_rise", false,-1);
    tracep->declBit(c+588,"ms_int_rise", false,-1);
    tracep->declBit(c+589,"ti_int_rise", false,-1);
    tracep->declBit(c+590,"rda_int_rise", false,-1);
    tracep->declBit(c+591,"rls_int_pnd", false,-1);
    tracep->declBit(c+592,"rda_int_pnd", false,-1);
    tracep->declBit(c+593,"thre_int_pnd", false,-1);
    tracep->declBit(c+594,"ms_int_pnd", false,-1);
    tracep->declBit(c+595,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1422,"Tp", false,-1, 31,0);
    tracep->declBus(c+1422,"width", false,-1, 31,0);
    tracep->declBus(c+1352,"init_value", false,-1, 0,0);
    tracep->declBit(c+1266,"rst_i", false,-1);
    tracep->declBit(c+1265,"clk_i", false,-1);
    tracep->declBit(c+1319,"stage1_rst_i", false,-1);
    tracep->declBit(c+1325,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1285,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+514,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+596,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1266,"wb_rst_i", false,-1);
    tracep->declBus(c+519,"lcr", false,-1, 7,0);
    tracep->declBit(c+559,"rf_pop", false,-1);
    tracep->declBit(c+571,"srx_pad_i", false,-1);
    tracep->declBit(c+513,"enable", false,-1);
    tracep->declBit(c+528,"rx_reset", false,-1);
    tracep->declBit(c+6,"lsr_mask", false,-1);
    tracep->declBus(c+566,"counter_t", false,-1, 9,0);
    tracep->declBus(c+562,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1308,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+538,"rf_overrun", false,-1);
    tracep->declBit(c+560,"rf_error_bit", false,-1);
    tracep->declBus(c+565,"rstate", false,-1, 3,0);
    tracep->declBit(c+561,"rf_push_pulse", false,-1);
    tracep->declBus(c+597,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+598,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+599,"rshift", false,-1, 7,0);
    tracep->declBit(c+600,"rparity", false,-1);
    tracep->declBit(c+601,"rparity_error", false,-1);
    tracep->declBit(c+602,"rframing_error", false,-1);
    tracep->declBit(c+603,"rbit_in", false,-1);
    tracep->declBit(c+604,"rparity_xor", false,-1);
    tracep->declBus(c+605,"counter_b", false,-1, 7,0);
    tracep->declBit(c+606,"rf_push_q", false,-1);
    tracep->declBus(c+607,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+608,"rf_push", false,-1);
    tracep->declBit(c+609,"break_error", false,-1);
    tracep->declBit(c+610,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+611,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+612,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+613,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1327,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1407,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1406,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1402,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1404,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1403,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1405,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1401,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1409,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1410,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1423,"sr_push", false,-1, 3,0);
    tracep->declBus(c+614,"toc_value", false,-1, 9,0);
    tracep->declBus(c+615,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1424,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1425,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1395,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1353,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1266,"wb_rst_i", false,-1);
    tracep->declBit(c+561,"push", false,-1);
    tracep->declBit(c+559,"pop", false,-1);
    tracep->declBus(c+607,"data_in", false,-1, 10,0);
    tracep->declBit(c+528,"fifo_reset", false,-1);
    tracep->declBit(c+6,"reset_status", false,-1);
    tracep->declBus(c+1308,"data_out", false,-1, 10,0);
    tracep->declBit(c+538,"overrun", false,-1);
    tracep->declBus(c+562,"count", false,-1, 4,0);
    tracep->declBit(c+560,"error_bit", false,-1);
    tracep->declBus(c+1309,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+616+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+632,"top", false,-1, 3,0);
    tracep->declBus(c+633,"bottom", false,-1, 3,0);
    tracep->declBus(c+634,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+635,"word0", false,-1, 2,0);
    tracep->declBus(c+636,"word1", false,-1, 2,0);
    tracep->declBus(c+637,"word2", false,-1, 2,0);
    tracep->declBus(c+638,"word3", false,-1, 2,0);
    tracep->declBus(c+639,"word4", false,-1, 2,0);
    tracep->declBus(c+640,"word5", false,-1, 2,0);
    tracep->declBus(c+641,"word6", false,-1, 2,0);
    tracep->declBus(c+642,"word7", false,-1, 2,0);
    tracep->declBus(c+643,"word8", false,-1, 2,0);
    tracep->declBus(c+644,"word9", false,-1, 2,0);
    tracep->declBus(c+645,"word10", false,-1, 2,0);
    tracep->declBus(c+646,"word11", false,-1, 2,0);
    tracep->declBus(c+647,"word12", false,-1, 2,0);
    tracep->declBus(c+648,"word13", false,-1, 2,0);
    tracep->declBus(c+649,"word14", false,-1, 2,0);
    tracep->declBus(c+650,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1395,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1396,"data_width", false,-1, 31,0);
    tracep->declBus(c+1425,"depth", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+561,"we", false,-1);
    tracep->declBus(c+632,"a", false,-1, 3,0);
    tracep->declBus(c+633,"dpra", false,-1, 3,0);
    tracep->declBus(c+651,"di", false,-1, 7,0);
    tracep->declBus(c+1309,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+365+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1266,"wb_rst_i", false,-1);
    tracep->declBus(c+519,"lcr", false,-1, 7,0);
    tracep->declBit(c+558,"tf_push", false,-1);
    tracep->declBus(c+1119,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+513,"enable", false,-1);
    tracep->declBit(c+529,"tx_reset", false,-1);
    tracep->declBit(c+6,"lsr_mask", false,-1);
    tracep->declBit(c+570,"stx_pad_o", false,-1);
    tracep->declBus(c+564,"tstate", false,-1, 2,0);
    tracep->declBus(c+563,"tf_count", false,-1, 4,0);
    tracep->declBus(c+652,"counter", false,-1, 4,0);
    tracep->declBus(c+653,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+654,"shift_out", false,-1, 6,0);
    tracep->declBit(c+655,"stx_o_tmp", false,-1);
    tracep->declBit(c+656,"parity_xor", false,-1);
    tracep->declBit(c+657,"tf_pop", false,-1);
    tracep->declBit(c+658,"bit_out", false,-1);
    tracep->declBus(c+1119,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1310,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+659,"tf_overrun", false,-1);
    tracep->declBus(c+1330,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1318,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1417,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1418,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1386,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1419,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1396,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1425,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1395,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1353,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+1266,"wb_rst_i", false,-1);
    tracep->declBit(c+558,"push", false,-1);
    tracep->declBit(c+657,"pop", false,-1);
    tracep->declBus(c+1119,"data_in", false,-1, 7,0);
    tracep->declBit(c+529,"fifo_reset", false,-1);
    tracep->declBit(c+6,"reset_status", false,-1);
    tracep->declBus(c+1310,"data_out", false,-1, 7,0);
    tracep->declBit(c+659,"overrun", false,-1);
    tracep->declBus(c+563,"count", false,-1, 4,0);
    tracep->declBus(c+660,"top", false,-1, 3,0);
    tracep->declBus(c+661,"bottom", false,-1, 3,0);
    tracep->declBus(c+662,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1395,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1396,"data_width", false,-1, 31,0);
    tracep->declBus(c+1425,"depth", false,-1, 31,0);
    tracep->declBit(c+1265,"clk", false,-1);
    tracep->declBit(c+558,"we", false,-1);
    tracep->declBus(c+660,"a", false,-1, 3,0);
    tracep->declBus(c+661,"dpra", false,-1, 3,0);
    tracep->declBus(c+1119,"di", false,-1, 7,0);
    tracep->declBus(c+1310,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+381+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBit(c+922,"auto_in_psel", false,-1);
    tracep->declBit(c+416,"auto_in_penable", false,-1);
    tracep->declBit(c+917,"auto_in_pwrite", false,-1);
    tracep->declBus(c+923,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+918,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1320,"auto_in_pready", false,-1);
    tracep->declBit(c+1321,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1322,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1279,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1280,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1281,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1282,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1283,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1284,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1265,"clock", false,-1);
    tracep->declBit(c+1266,"reset", false,-1);
    tracep->declBus(c+1105,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+922,"in_psel", false,-1);
    tracep->declBit(c+416,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+917,"in_pwrite", false,-1);
    tracep->declBus(c+918,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+919,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1320,"in_pready", false,-1);
    tracep->declBus(c+1322,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1321,"in_pslverr", false,-1);
    tracep->declBus(c+1279,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1280,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1281,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1282,"vga_hsync", false,-1);
    tracep->declBit(c+1283,"vga_vsync", false,-1);
    tracep->declBit(c+1284,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+427,"sck", false,-1);
    tracep->declBit(c+795,"ss", false,-1);
    tracep->declBit(c+779,"mosi", false,-1);
    tracep->declBit(c+774,"miso", false,-1);
    tracep->declBus(c+775,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+776,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+777,"counter", false,-1, 2,0);
    tracep->declBit(c+778,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+427,"sck", false,-1);
    tracep->declBit(c+663,"ss", false,-1);
    tracep->declBit(c+779,"mosi", false,-1);
    tracep->declBit(c+1311,"miso", false,-1);
    tracep->declBit(c+663,"reset", false,-1);
    tracep->declBus(c+768,"state", false,-1, 2,0);
    tracep->declBus(c+769,"counter", false,-1, 7,0);
    tracep->declBus(c+770,"cmd", false,-1, 7,0);
    tracep->declBus(c+771,"addr", false,-1, 23,0);
    tracep->declBus(c+772,"data", false,-1, 31,0);
    tracep->declBit(c+773,"ren", false,-1);
    tracep->declBus(c+1312,"rdata", false,-1, 31,0);
    tracep->declBus(c+1313,"raddr", false,-1, 31,0);
    tracep->declBus(c+1314,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+427,"clock", false,-1);
    tracep->declBit(c+773,"valid", false,-1);
    tracep->declBus(c+770,"cmd", false,-1, 7,0);
    tracep->declBus(c+1313,"addr", false,-1, 31,0);
    tracep->declBus(c+1312,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1166,"sck", false,-1);
    tracep->declBit(c+1167,"ce_n", false,-1);
    tracep->declBus(c+1288,"dio", false,-1, 3,0);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBus(c+12,"state", false,-1, 3,0);
    tracep->declBus(c+13,"counter", false,-1, 7,0);
    tracep->declBus(c+904,"cmd", false,-1, 7,0);
    tracep->declBus(c+905,"addr", false,-1, 23,0);
    tracep->declBus(c+14,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+906+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1315,"qpi_flag", false,-1);
    tracep->declBus(c+15,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1316,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+910,"ren", false,-1);
    tracep->declBit(c+911,"wen", false,-1);
    tracep->declBus(c+912,"len", false,-1, 7,0);
    tracep->declBus(c+1317,"rdata", false,-1, 31,0);
    tracep->declBus(c+913,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+910,"ren", false,-1);
    tracep->declBit(c+911,"wen", false,-1);
    tracep->declBus(c+904,"cmd", false,-1, 7,0);
    tracep->declBus(c+913,"saddr", false,-1, 31,0);
    tracep->declBus(c+1317,"rdata", false,-1, 31,0);
    tracep->declBus(c+914,"wdata", false,-1, 31,0);
    tracep->declBus(c+912,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1289,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+780,"cs", false,-1);
    tracep->declBit(c+781,"ras", false,-1);
    tracep->declBit(c+782,"cas", false,-1);
    tracep->declBit(c+783,"we", false,-1);
    tracep->declBus(c+784,"a", false,-1, 12,0);
    tracep->declBus(c+796,"ba", false,-1, 1,0);
    tracep->declBus(c+797,"dqm", false,-1, 1,0);
    tracep->declBus(c+811,"dq", false,-1, 15,0);
    tracep->declBit(c+798,"reset", false,-1);
    tracep->declBus(c+678,"state", false,-1, 2,0);
    tracep->declBus(c+679,"counter", false,-1, 7,0);
    tracep->declBus(c+680,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1426,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+681,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+682,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+799,"nop", false,-1);
    tracep->declBit(c+800,"active", false,-1);
    tracep->declBit(c+801,"precharge", false,-1);
    tracep->declBit(c+802,"read", false,-1);
    tracep->declBit(c+803,"write", false,-1);
    tracep->declBit(c+804,"burstterm", false,-1);
    tracep->declBit(c+805,"autorefresh", false,-1);
    tracep->declBit(c+806,"mode", false,-1);
    tracep->declBus(c+683,"test", false,-1, 15,0);
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
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1289,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+780,"cs", false,-1);
    tracep->declBit(c+781,"ras", false,-1);
    tracep->declBit(c+782,"cas", false,-1);
    tracep->declBit(c+783,"we", false,-1);
    tracep->declBus(c+784,"a", false,-1, 12,0);
    tracep->declBus(c+796,"ba", false,-1, 1,0);
    tracep->declBus(c+807,"dqm", false,-1, 1,0);
    tracep->declBus(c+812,"dq", false,-1, 15,0);
    tracep->declBit(c+798,"reset", false,-1);
    tracep->declBus(c+696,"state", false,-1, 2,0);
    tracep->declBus(c+697,"counter", false,-1, 7,0);
    tracep->declBus(c+698,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1427,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+699,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+700,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+799,"nop", false,-1);
    tracep->declBit(c+800,"active", false,-1);
    tracep->declBit(c+801,"precharge", false,-1);
    tracep->declBit(c+802,"read", false,-1);
    tracep->declBit(c+803,"write", false,-1);
    tracep->declBit(c+804,"burstterm", false,-1);
    tracep->declBit(c+805,"autorefresh", false,-1);
    tracep->declBit(c+806,"mode", false,-1);
    tracep->declBus(c+701,"test", false,-1, 15,0);
    tracep->declBit(c+702,"write_burst_mode", false,-1);
    tracep->declBus(c+703,"op_mode", false,-1, 1,0);
    tracep->declBus(c+704,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+705,"burst_type", false,-1);
    tracep->declBus(c+706,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+707,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+708,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+709,"bank", false,-1, 1,0);
    tracep->declBus(c+710,"row", false,-1, 12,0);
    tracep->declBus(c+711,"column", false,-1, 8,0);
    tracep->declBus(c+712,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+713,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1289,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+780,"cs", false,-1);
    tracep->declBit(c+781,"ras", false,-1);
    tracep->declBit(c+782,"cas", false,-1);
    tracep->declBit(c+783,"we", false,-1);
    tracep->declBus(c+784,"a", false,-1, 12,0);
    tracep->declBus(c+796,"ba", false,-1, 1,0);
    tracep->declBus(c+808,"dqm", false,-1, 1,0);
    tracep->declBus(c+811,"dq", false,-1, 15,0);
    tracep->declBit(c+798,"reset", false,-1);
    tracep->declBus(c+714,"state", false,-1, 2,0);
    tracep->declBus(c+715,"counter", false,-1, 7,0);
    tracep->declBus(c+716,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1428,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+717,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+718,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+799,"nop", false,-1);
    tracep->declBit(c+800,"active", false,-1);
    tracep->declBit(c+801,"precharge", false,-1);
    tracep->declBit(c+802,"read", false,-1);
    tracep->declBit(c+803,"write", false,-1);
    tracep->declBit(c+804,"burstterm", false,-1);
    tracep->declBit(c+805,"autorefresh", false,-1);
    tracep->declBit(c+806,"mode", false,-1);
    tracep->declBus(c+719,"test", false,-1, 15,0);
    tracep->declBit(c+720,"write_burst_mode", false,-1);
    tracep->declBus(c+721,"op_mode", false,-1, 1,0);
    tracep->declBus(c+722,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+723,"burst_type", false,-1);
    tracep->declBus(c+724,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+725,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+726,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+727,"bank", false,-1, 1,0);
    tracep->declBus(c+728,"row", false,-1, 12,0);
    tracep->declBus(c+729,"column", false,-1, 8,0);
    tracep->declBus(c+730,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+731,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1289,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+780,"cs", false,-1);
    tracep->declBit(c+781,"ras", false,-1);
    tracep->declBit(c+782,"cas", false,-1);
    tracep->declBit(c+783,"we", false,-1);
    tracep->declBus(c+784,"a", false,-1, 12,0);
    tracep->declBus(c+796,"ba", false,-1, 1,0);
    tracep->declBus(c+809,"dqm", false,-1, 1,0);
    tracep->declBus(c+812,"dq", false,-1, 15,0);
    tracep->declBit(c+798,"reset", false,-1);
    tracep->declBus(c+732,"state", false,-1, 2,0);
    tracep->declBus(c+733,"counter", false,-1, 7,0);
    tracep->declBus(c+734,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1429,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+735,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+736,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+799,"nop", false,-1);
    tracep->declBit(c+800,"active", false,-1);
    tracep->declBit(c+801,"precharge", false,-1);
    tracep->declBit(c+802,"read", false,-1);
    tracep->declBit(c+803,"write", false,-1);
    tracep->declBit(c+804,"burstterm", false,-1);
    tracep->declBit(c+805,"autorefresh", false,-1);
    tracep->declBit(c+806,"mode", false,-1);
    tracep->declBus(c+737,"test", false,-1, 15,0);
    tracep->declBit(c+738,"write_burst_mode", false,-1);
    tracep->declBus(c+739,"op_mode", false,-1, 1,0);
    tracep->declBus(c+740,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+741,"burst_type", false,-1);
    tracep->declBus(c+742,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+743,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+744,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+745,"bank", false,-1, 1,0);
    tracep->declBus(c+746,"row", false,-1, 12,0);
    tracep->declBus(c+747,"column", false,-1, 8,0);
    tracep->declBus(c+748,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+749,"rdqm_reg", false,-1, 1,0);
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
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullIData(oldp+14,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullCData(oldp+15,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                    >> 1U))),2);
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
    bufp->fullIData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd),32);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_addr),5);
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_wen));
    bufp->fullIData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mepc),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mstatus),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mcause),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mtvec),32);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_en));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_en));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_en));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_en));
    bufp->fullIData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata_reg),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullQData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullIData(oldp+397,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0)
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
    bufp->fullIData(oldp+398,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+399,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+400,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+401,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+402,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+403,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+404,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+405,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3))))));
    bufp->fullCData(oldp+406,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullCData(oldp+407,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullBit(oldp+408,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
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
    bufp->fullCData(oldp+409,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullCData(oldp+410,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullBit(oldp+411,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
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
    bufp->fullCData(oldp+412,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->fullCData(oldp+413,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->fullBit(oldp+414,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->fullBit(oldp+415,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+416,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+417,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+418,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+419,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+420,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                           << 2U) : 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                            << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)))))));
    bufp->fullIData(oldp+421,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                    : 0U))),32);
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
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullSData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+447,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+448,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+451,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+452,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+457,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+461,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullSData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+490,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+491,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+492,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+493,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+494,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+495,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+496,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+500,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+502,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+503,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+505,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+509,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+510,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+512,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+530,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+531,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+532,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+533,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+534,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+535,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+536,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+539,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+540,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+541,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+560,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+567,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+586,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+587,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+588,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+589,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+590,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+609,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+610,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+611,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+612,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+613,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+615,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+634,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+651,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+662,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+666,((0xe0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer))));
    bufp->fullBit(oldp+667,((0xf0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer))));
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+680,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+681,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+682,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+683,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+684,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+685,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+686,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+687,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+688,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+690,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+692,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+693,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+698,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+699,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+700,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+701,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+702,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+703,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+704,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+705,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+706,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+708,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+710,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+711,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+716,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+717,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+718,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+719,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+720,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+721,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+722,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+723,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+724,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__read_cnt),8);
    bufp->fullCData(oldp+726,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+728,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+729,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+734,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+735,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+736,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+737,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+738,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+739,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+740,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+741,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+742,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__read_cnt),8);
    bufp->fullCData(oldp+744,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+746,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+747,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg),2);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+773,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+780,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+781,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+782,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+783,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullBit(oldp+787,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+796,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+801,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+810,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+811,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+812,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullBit(oldp+813,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullIData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op),7);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3),3);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_read));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_write));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+832,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullIData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+835,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
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
    bufp->fullCData(oldp+836,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+837,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf0b4f3eb__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf2be8e81__0))
                                         ? 1U : 2U))),3);
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_done));
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+856,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullIData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+858,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+859,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+861,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
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
    bufp->fullBit(oldp+862,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+864,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullCData(oldp+866,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+867,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+868,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+869,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+870,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+871,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+872,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+873,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+874,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+875,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+877,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+878,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_start));
    bufp->fullIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullBit(oldp+890,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                    | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+891,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullCData(oldp+892,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
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
    bufp->fullBit(oldp+893,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                    | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+894,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+895,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                       | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullCData(oldp+896,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+897,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullBit(oldp+898,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))))));
    bufp->fullCData(oldp+899,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+900,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+901,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),4);
    bufp->fullCData(oldp+902,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),4);
    bufp->fullBit(oldp+903,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+914,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+921,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+922,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+923,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+924,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+925,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+926,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+930,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+931,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+954,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+955,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h68975acc__0))));
    bufp->fullCData(oldp+956,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h5a8d045f__0))),4);
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb734b8d7__0[0U]),32);
    bufp->fullCData(oldp+958,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3a4e4339__0)),8);
    bufp->fullCData(oldp+959,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h30176aa5__0))),3);
    bufp->fullCData(oldp+960,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hbbf346b8__0))),2);
    bufp->fullBit(oldp+961,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h94ebbd5e__0))));
    bufp->fullIData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf41bdd9a__0[0U]),32);
    bufp->fullCData(oldp+963,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h109b6ac9__0))),4);
    bufp->fullBit(oldp+964,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                       << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                                  << 1U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))))));
    bufp->fullBit(oldp+965,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf81145fc__0))));
    bufp->fullBit(oldp+966,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0))));
    bufp->fullCData(oldp+967,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdecce5eb__0))),4);
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[0U]),32);
    bufp->fullCData(oldp+969,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h25d17c3d__0)),8);
    bufp->fullCData(oldp+970,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h167d420f__0))),3);
    bufp->fullCData(oldp+971,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h56bb0e93__0))),2);
    bufp->fullBit(oldp+972,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0))));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+974,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+976,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+978,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+994,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+995,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+996,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+997,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+998,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+999,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+1000,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1003,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1004,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1005,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1006,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1011,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1013,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1014,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WREADY));
    bufp->fullIData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb734b8d7__0[2U]),32);
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf41bdd9a__0[2U]),32);
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[2U]),32);
    bufp->fullCData(oldp+1025,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1026,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1027,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1028,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1029,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1030,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1031,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h167d420f__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1032,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1033,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1034,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h68975acc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1035,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1036,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1037,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1038,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1039,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))) 
                                    >> 2U))));
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata),32);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullBit(oldp+1059,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1060,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id));
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb734b8d7__0[1U]),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf41bdd9a__0[1U]),32);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[1U]),32);
    bufp->fullCData(oldp+1065,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1066,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1067,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1068,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1069,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1070,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1071,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h167d420f__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1072,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1073,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1074,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1075,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1076,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1077,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1078,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))) 
                                    >> 1U))));
    bufp->fullIData(oldp+1079,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1080,((0xfcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),8);
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullIData(oldp+1084,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1092,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1093,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1094,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1095,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1096,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1097,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1102,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1103,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1104,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),3);
    bufp->fullIData(oldp+1105,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+1112,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1113,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1115,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1117,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1122,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1123,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1124,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1125,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1126,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1127,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1128,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1129,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1130,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1131,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1132,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1133,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1134,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1135,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1136,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1137,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1138,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1139,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1140,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1141,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1142,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1143,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1144,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1145,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1146,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1147,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1148,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1149,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1150,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1151,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1152,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1176,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1205,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1206,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1228,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1229,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1230,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1231,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1232,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1233,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1234,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1235,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1237,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1238,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1239,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1240,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1241,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1242,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1243,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1244,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1245,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1246,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1247,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1248,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1249,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1250,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1251,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1252,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1253,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1254,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1255,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1256,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1257,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1258,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1259,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullBit(oldp+1265,(vlSelf->clock));
    bufp->fullBit(oldp+1266,(vlSelf->reset));
    bufp->fullSData(oldp+1267,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1268,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1269,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1270,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1271,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1272,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1273,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1274,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1275,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1276,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1277,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1278,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1279,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1280,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1281,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1282,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1283,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1284,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1285,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1286,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1287,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1289,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1290,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1291,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1293,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1294,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullIData(oldp+1295,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullBit(oldp+1296,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_DONE));
    bufp->fullIData(oldp+1298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
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
    bufp->fullIData(oldp+1299,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullBit(oldp+1301,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                        | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->fullIData(oldp+1303,((((- (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0) 
                                              >> 2U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready)))) 
                                 & ((- (IData)((0x2000000U 
                                                == 
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[2U]))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                                | ((- (IData)((0x2000004U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[2U]))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullBit(oldp+1304,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1305,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1308,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1311,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1313,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1316,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1318,(1U),3);
    bufp->fullBit(oldp+1319,(0U));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1325,(1U));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1327,(0U),4);
    bufp->fullIData(oldp+1328,(0U),32);
    bufp->fullCData(oldp+1329,(0U),8);
    bufp->fullCData(oldp+1330,(0U),3);
    bufp->fullCData(oldp+1331,(0U),2);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1342,(0U),32);
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST));
    bufp->fullCData(oldp+1344,(1U),2);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+1347,(2U),2);
    bufp->fullCData(oldp+1348,(3U),2);
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_wsize),3);
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rsize),3);
    bufp->fullBit(oldp+1351,(0U));
    bufp->fullBit(oldp+1352,(1U));
    bufp->fullIData(oldp+1353,(5U),32);
    bufp->fullIData(oldp+1354,(0x20U),32);
    bufp->fullIData(oldp+1355,(0x2000000U),32);
    bufp->fullIData(oldp+1356,(0x2000004U),32);
    bufp->fullIData(oldp+1357,(0x1000000U),32);
    bufp->fullIData(oldp+1358,(0x1000004U),32);
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1365,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1366,(0x1800U),32);
    bufp->fullIData(oldp+1367,(0x79737978U),32);
    bufp->fullCData(oldp+1368,(4U),8);
    bufp->fullCData(oldp+1369,(8U),8);
    bufp->fullCData(oldp+1370,(3U),8);
    bufp->fullCData(oldp+1371,(0x9fU),8);
    bufp->fullCData(oldp+1372,(0x25U),8);
    bufp->fullCData(oldp+1373,(0xdU),8);
    bufp->fullCData(oldp+1374,(0x99U),8);
    bufp->fullCData(oldp+1375,(0x49U),8);
    bufp->fullCData(oldp+1376,(0x41U),8);
    bufp->fullCData(oldp+1377,(0x1fU),8);
    bufp->fullCData(oldp+1378,(1U),8);
    bufp->fullCData(oldp+1379,(9U),8);
    bufp->fullCData(oldp+1380,(0x11U),8);
    bufp->fullCData(oldp+1381,(0xc1U),8);
    bufp->fullCData(oldp+1382,(0x63U),8);
    bufp->fullCData(oldp+1383,(0x85U),8);
    bufp->fullCData(oldp+1384,(0x61U),8);
    bufp->fullCData(oldp+1385,(0x71U),8);
    bufp->fullCData(oldp+1386,(4U),3);
    bufp->fullCData(oldp+1387,(0x15U),8);
    bufp->fullCData(oldp+1388,(0xebU),8);
    bufp->fullCData(oldp+1389,(0x38U),8);
    bufp->fullIData(oldp+1390,(0x64U),32);
    bufp->fullIData(oldp+1391,(0x18U),32);
    bufp->fullIData(oldp+1392,(9U),32);
    bufp->fullIData(oldp+1393,(2U),32);
    bufp->fullIData(oldp+1394,(3U),32);
    bufp->fullIData(oldp+1395,(4U),32);
    bufp->fullIData(oldp+1396,(8U),32);
    bufp->fullIData(oldp+1397,(0xdU),32);
    bufp->fullIData(oldp+1398,(0x2000U),32);
    bufp->fullIData(oldp+1399,(0x2710U),32);
    bufp->fullIData(oldp+1400,(0x30cU),32);
    bufp->fullCData(oldp+1401,(7U),4);
    bufp->fullCData(oldp+1402,(3U),4);
    bufp->fullCData(oldp+1403,(5U),4);
    bufp->fullCData(oldp+1404,(4U),4);
    bufp->fullCData(oldp+1405,(6U),4);
    bufp->fullCData(oldp+1406,(2U),4);
    bufp->fullCData(oldp+1407,(1U),4);
    bufp->fullSData(oldp+1408,(0x20U),13);
    bufp->fullCData(oldp+1409,(8U),4);
    bufp->fullCData(oldp+1410,(9U),4);
    bufp->fullIData(oldp+1411,(0xaU),32);
    bufp->fullIData(oldp+1412,(6U),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1414,(0x11U),32);
    bufp->fullIData(oldp+1415,(0x30000000U),32);
    bufp->fullIData(oldp+1416,(0x3fffffffU),32);
    bufp->fullCData(oldp+1417,(2U),3);
    bufp->fullCData(oldp+1418,(3U),3);
    bufp->fullCData(oldp+1419,(5U),3);
    bufp->fullCData(oldp+1420,(6U),3);
    bufp->fullCData(oldp+1421,(7U),3);
    bufp->fullIData(oldp+1422,(1U),32);
    bufp->fullCData(oldp+1423,(0xaU),4);
    bufp->fullIData(oldp+1424,(0xbU),32);
    bufp->fullIData(oldp+1425,(0x10U),32);
    bufp->fullSData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
