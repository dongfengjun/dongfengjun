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
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBus(c+1260,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1261,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1262,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1263,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1264,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1265,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1266,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1267,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1268,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1269,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1270,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1271,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1272,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1273,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1274,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1275,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1276,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1277,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1278,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1279,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBus(c+1260,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1261,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1262,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1263,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1264,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1265,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1266,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1267,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1268,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1269,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1270,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1271,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1272,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1273,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1274,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1275,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1276,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1277,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1278,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1279,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+413,"spi_sck", false,-1);
    tracep->declBus(c+414,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+864,"spi_mosi", false,-1);
    tracep->declBit(c+1280,"spi_miso", false,-1);
    tracep->declBit(c+1278,"uart_rx", false,-1);
    tracep->declBit(c+1279,"uart_tx", false,-1);
    tracep->declBit(c+1159,"psram_sck", false,-1);
    tracep->declBit(c+1160,"psram_ce_n", false,-1);
    tracep->declBus(c+1281,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1282,"sdram_clk", false,-1);
    tracep->declBit(c+415,"sdram_cke", false,-1);
    tracep->declBit(c+865,"sdram_cs", false,-1);
    tracep->declBit(c+866,"sdram_ras", false,-1);
    tracep->declBit(c+867,"sdram_cas", false,-1);
    tracep->declBit(c+868,"sdram_we", false,-1);
    tracep->declBus(c+869,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+870,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+416,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+895,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1260,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1261,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1262,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1263,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1264,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1265,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1266,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1267,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1268,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1269,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1270,"ps2_clk", false,-1);
    tracep->declBit(c+1271,"ps2_data", false,-1);
    tracep->declBus(c+1272,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1273,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1274,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1275,"vga_hsync", false,-1);
    tracep->declBit(c+1276,"vga_vsync", false,-1);
    tracep->declBit(c+1277,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBus(c+909,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+910,"in_psel", false,-1);
    tracep->declBit(c+765,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+911,"in_pwrite", false,-1);
    tracep->declBus(c+912,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1163,"in_pready", false,-1);
    tracep->declBus(c+1164,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+914,"in_pslverr", false,-1);
    tracep->declBus(c+909,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+910,"out_psel", false,-1);
    tracep->declBit(c+765,"out_penable", false,-1);
    tracep->declBus(c+1318,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+911,"out_pwrite", false,-1);
    tracep->declBus(c+912,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1163,"out_pready", false,-1);
    tracep->declBus(c+1164,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+914,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+910,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+765,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+911,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+909,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1318,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1163,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+914,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1164,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+915,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+844,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+911,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+909,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1318,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+417,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1319,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+418,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+916,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+845,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+911,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+917,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1318,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1320,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1321,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1322,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+918,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+846,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+911,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+919,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+650,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1323,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+651,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+920,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+847,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+911,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+919,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+419,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+420,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+921,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+848,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+911,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+909,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1318,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1283,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1319,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+16,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+922,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+923,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+911,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+919,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+924,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1319,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1284,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+925,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+926,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+911,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+917,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1318,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1285,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1319,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1146,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+927,"sel_0", false,-1);
    tracep->declBit(c+928,"sel_1", false,-1);
    tracep->declBit(c+929,"sel_2", false,-1);
    tracep->declBit(c+930,"sel_3", false,-1);
    tracep->declBit(c+931,"sel_4", false,-1);
    tracep->declBit(c+932,"sel_5", false,-1);
    tracep->declBit(c+933,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+934,"auto_in_awready", false,-1);
    tracep->declBit(c+935,"auto_in_awvalid", false,-1);
    tracep->declBus(c+936,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+937,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+938,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+934,"auto_in_wready", false,-1);
    tracep->declBit(c+939,"auto_in_wvalid", false,-1);
    tracep->declBus(c+940,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_in_bready", false,-1);
    tracep->declBit(c+1166,"auto_in_bvalid", false,-1);
    tracep->declBus(c+17,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+942,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+943,"auto_in_arready", false,-1);
    tracep->declBit(c+944,"auto_in_arvalid", false,-1);
    tracep->declBus(c+945,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+946,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+947,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1167,"auto_in_rready", false,-1);
    tracep->declBit(c+1168,"auto_in_rvalid", false,-1);
    tracep->declBus(c+18,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1286,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+942,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+910,"auto_out_psel", false,-1);
    tracep->declBit(c+765,"auto_out_penable", false,-1);
    tracep->declBit(c+911,"auto_out_pwrite", false,-1);
    tracep->declBus(c+909,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+912,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1163,"auto_out_pready", false,-1);
    tracep->declBit(c+914,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1164,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+765,"nodeOut_penable", false,-1);
    tracep->declBus(c+766,"state", false,-1, 1,0);
    tracep->declBit(c+943,"accept_read", false,-1);
    tracep->declBit(c+934,"accept_write", false,-1);
    tracep->declBit(c+19,"is_write_r", false,-1);
    tracep->declBit(c+911,"is_write", false,-1);
    tracep->declBus(c+18,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+17,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+20,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+21,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+22,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+23,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+948,"resp", false,-1, 1,0);
    tracep->declBus(c+24,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+942,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1168,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+25,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1166,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+767,"auto_in_awready", false,-1);
    tracep->declBit(c+949,"auto_in_awvalid", false,-1);
    tracep->declBus(c+950,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+953,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+954,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+26,"auto_in_wready", false,-1);
    tracep->declBit(c+955,"auto_in_wvalid", false,-1);
    tracep->declBus(c+956,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+957,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+958,"auto_in_wlast", false,-1);
    tracep->declBit(c+959,"auto_in_bready", false,-1);
    tracep->declBit(c+1169,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1287,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+27,"auto_in_arready", false,-1);
    tracep->declBit(c+960,"auto_in_arvalid", false,-1);
    tracep->declBus(c+961,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+962,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+963,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+964,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+965,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+966,"auto_in_rready", false,-1);
    tracep->declBit(c+1171,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1290,"auto_in_rlast", false,-1);
    tracep->declBit(c+1173,"auto_out_awready", false,-1);
    tracep->declBit(c+967,"auto_out_awvalid", false,-1);
    tracep->declBus(c+936,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+937,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+938,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+968,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1174,"auto_out_wready", false,-1);
    tracep->declBit(c+969,"auto_out_wvalid", false,-1);
    tracep->declBus(c+940,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+970,"auto_out_wlast", false,-1);
    tracep->declBit(c+1175,"auto_out_bready", false,-1);
    tracep->declBit(c+1176,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1177,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1178,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1179,"auto_out_arready", false,-1);
    tracep->declBit(c+971,"auto_out_arvalid", false,-1);
    tracep->declBus(c+945,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+946,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+947,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+972,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+966,"auto_out_rready", false,-1);
    tracep->declBit(c+1171,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1291,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1180,"auto_out_rlast", false,-1);
    tracep->declBit(c+969,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+28,"w_idle", false,-1);
    tracep->declBit(c+1181,"in_awready", false,-1);
    tracep->declBit(c+29,"busy", false,-1);
    tracep->declBus(c+30,"r_addr", false,-1, 31,0);
    tracep->declBus(c+31,"r_len", false,-1, 7,0);
    tracep->declBus(c+973,"len", false,-1, 7,0);
    tracep->declBus(c+974,"addr", false,-1, 31,0);
    tracep->declBit(c+32,"busy_1", false,-1);
    tracep->declBus(c+33,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+34,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+975,"len_1", false,-1, 7,0);
    tracep->declBus(c+976,"addr_1", false,-1, 31,0);
    tracep->declBit(c+35,"wbeats_latched", false,-1);
    tracep->declBit(c+967,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+977,"wbeats_valid", false,-1);
    tracep->declBus(c+36,"w_counter", false,-1, 8,0);
    tracep->declBus(c+978,"w_todo", false,-1, 8,0);
    tracep->declBit(c+970,"w_last", false,-1);
    tracep->declBit(c+1175,"nodeOut_bready", false,-1);
    tracep->declBus(c+37,"error_0", false,-1, 1,0);
    tracep->declBus(c+38,"error_1", false,-1, 1,0);
    tracep->declBus(c+39,"error_2", false,-1, 1,0);
    tracep->declBus(c+40,"error_3", false,-1, 1,0);
    tracep->declBus(c+41,"error_4", false,-1, 1,0);
    tracep->declBus(c+42,"error_5", false,-1, 1,0);
    tracep->declBus(c+43,"error_6", false,-1, 1,0);
    tracep->declBus(c+44,"error_7", false,-1, 1,0);
    tracep->declBus(c+45,"error_8", false,-1, 1,0);
    tracep->declBus(c+46,"error_9", false,-1, 1,0);
    tracep->declBus(c+47,"error_10", false,-1, 1,0);
    tracep->declBus(c+48,"error_11", false,-1, 1,0);
    tracep->declBus(c+49,"error_12", false,-1, 1,0);
    tracep->declBus(c+50,"error_13", false,-1, 1,0);
    tracep->declBus(c+51,"error_14", false,-1, 1,0);
    tracep->declBus(c+52,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+27,"io_enq_ready", false,-1);
    tracep->declBit(c+960,"io_enq_valid", false,-1);
    tracep->declBus(c+961,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+962,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+963,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+964,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+965,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1182,"io_deq_ready", false,-1);
    tracep->declBit(c+971,"io_deq_valid", false,-1);
    tracep->declBus(c+945,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+979,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+980,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+947,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+981,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+971,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1183,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+767,"io_enq_ready", false,-1);
    tracep->declBit(c+949,"io_enq_valid", false,-1);
    tracep->declBus(c+950,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+951,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+952,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+953,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+954,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1184,"io_deq_ready", false,-1);
    tracep->declBit(c+982,"io_deq_valid", false,-1);
    tracep->declBus(c+936,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+983,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+984,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+938,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+985,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+56,"ram", false,-1, 48,0);
    tracep->declBit(c+768,"full", false,-1);
    tracep->declBit(c+982,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1185,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+26,"io_enq_ready", false,-1);
    tracep->declBit(c+955,"io_enq_valid", false,-1);
    tracep->declBus(c+956,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+957,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+958,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1186,"io_deq_ready", false,-1);
    tracep->declBit(c+986,"io_deq_valid", false,-1);
    tracep->declBus(c+940,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+941,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1292,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+58,"ram", false,-1, 36,0);
    tracep->declBit(c+60,"full", false,-1);
    tracep->declBit(c+986,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1187,"do_enq", false,-1);
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
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+1188,"auto_in_awready", false,-1);
    tracep->declBit(c+987,"auto_in_awvalid", false,-1);
    tracep->declBus(c+936,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+988,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1113,"auto_in_wready", false,-1);
    tracep->declBit(c+989,"auto_in_wvalid", false,-1);
    tracep->declBus(c+940,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1189,"auto_in_bready", false,-1);
    tracep->declBit(c+61,"auto_in_bvalid", false,-1);
    tracep->declBus(c+62,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1190,"auto_in_arready", false,-1);
    tracep->declBit(c+990,"auto_in_arvalid", false,-1);
    tracep->declBus(c+945,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+991,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1191,"auto_in_rready", false,-1);
    tracep->declBit(c+64,"auto_in_rvalid", false,-1);
    tracep->declBus(c+65,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+67,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1190,"nodeIn_arready", false,-1);
    tracep->declBit(c+1188,"nodeIn_awready", false,-1);
    tracep->declBit(c+992,"w_sel0", false,-1);
    tracep->declBit(c+61,"w_full", false,-1);
    tracep->declBus(c+62,"w_id", false,-1, 3,0);
    tracep->declBit(c+68,"r_sel1", false,-1);
    tracep->declBit(c+69,"w_sel1", false,-1);
    tracep->declBit(c+64,"r_full", false,-1);
    tracep->declBus(c+65,"r_id", false,-1, 3,0);
    tracep->declBit(c+1192,"ren", false,-1);
    tracep->declBit(c+70,"rdata_REG", false,-1);
    tracep->declBus(c+71,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+73,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+74,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+993,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1192,"R0_en", false,-1);
    tracep->declBit(c+1258,"R0_clk", false,-1);
    tracep->declBus(c+75,"R0_data", false,-1, 31,0);
    tracep->declBus(c+994,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1193,"W0_en", false,-1);
    tracep->declBit(c+1258,"W0_clk", false,-1);
    tracep->declBus(c+940,"W0_data", false,-1, 31,0);
    tracep->declBus(c+941,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+767,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+949,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+950,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+953,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+954,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+26,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+955,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+956,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+957,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+958,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+959,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1169,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1287,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+27,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+960,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+961,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+962,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+963,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+964,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+965,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+966,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1171,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1290,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+767,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+949,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+950,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+953,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+954,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+26,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+955,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+956,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+957,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+958,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+959,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1169,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+1287,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+27,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+960,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+961,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+962,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+963,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+964,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+965,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+966,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1171,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1290,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+1194,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+995,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+936,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+937,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+938,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1174,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+969,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+940,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+970,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1175,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1176,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1177,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1195,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+996,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+946,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+947,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+966,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1171,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1180,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1188,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+987,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+936,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+988,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1113,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+989,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+940,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1189,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+61,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+62,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+63,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1190,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+990,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+991,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1191,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+64,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+65,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+67,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+997,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+998,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+76,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+999,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1000,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1293,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+77,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+78,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+79,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+934,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+935,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+936,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+937,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+938,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+934,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+939,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+940,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1166,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+17,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+942,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+943,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+944,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+946,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+947,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1167,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1168,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+18,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1286,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+942,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1176,"in_0_bvalid", false,-1);
    tracep->declBit(c+1171,"in_0_rvalid", false,-1);
    tracep->declBit(c+1196,"in_0_wready", false,-1);
    tracep->declBit(c+1197,"in_0_awready", false,-1);
    tracep->declBit(c+1195,"in_0_arready", false,-1);
    tracep->declBit(c+1194,"anonIn_awready", false,-1);
    tracep->declBit(c+1001,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1002,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1003,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1004,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1005,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1006,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1007,"arSel", false,-1, 15,0);
    tracep->declBus(c+1008,"awSel", false,-1, 15,0);
    tracep->declBus(c+1198,"rSel", false,-1, 15,0);
    tracep->declBus(c+1199,"bSel", false,-1, 15,0);
    tracep->declBit(c+80,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+81,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+82,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+83,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+84,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+85,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+86,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+87,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+88,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+89,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+90,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+91,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+92,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+93,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+94,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+95,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+96,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+97,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+98,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+99,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+100,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+101,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+102,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+103,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+104,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+105,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+106,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+107,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+108,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+109,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+110,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+111,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+112,"latched", false,-1);
    tracep->declBit(c+1009,"in_0_awvalid", false,-1);
    tracep->declBit(c+1010,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1011,"in_0_wvalid", false,-1);
    tracep->declBit(c+113,"idle_3", false,-1);
    tracep->declBit(c+1200,"anyValid", false,-1);
    tracep->declBus(c+1201,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+114,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1202,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1203,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1204,"prefixOR_1", false,-1);
    tracep->declBit(c+1205,"winner_3_1", false,-1);
    tracep->declBit(c+1206,"winner_3_2", false,-1);
    tracep->declBit(c+115,"state_3_0", false,-1);
    tracep->declBit(c+116,"state_3_1", false,-1);
    tracep->declBit(c+117,"state_3_2", false,-1);
    tracep->declBit(c+1207,"muxState_3_0", false,-1);
    tracep->declBit(c+1208,"muxState_3_1", false,-1);
    tracep->declBit(c+1209,"muxState_3_2", false,-1);
    tracep->declBit(c+118,"idle_4", false,-1);
    tracep->declBit(c+1210,"anyValid_1", false,-1);
    tracep->declBus(c+1211,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+119,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1212,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1213,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1214,"winner_4_0", false,-1);
    tracep->declBit(c+1215,"winner_4_2", false,-1);
    tracep->declBit(c+120,"state_4_0", false,-1);
    tracep->declBit(c+121,"state_4_2", false,-1);
    tracep->declBit(c+1216,"muxState_4_0", false,-1);
    tracep->declBit(c+1217,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+122,"io_enq_ready", false,-1);
    tracep->declBit(c+1010,"io_enq_valid", false,-1);
    tracep->declBus(c+1012,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1218,"io_deq_ready", false,-1);
    tracep->declBit(c+1013,"io_deq_valid", false,-1);
    tracep->declBus(c+1014,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+123,"wrap", false,-1);
    tracep->declBit(c+124,"wrap_1", false,-1);
    tracep->declBit(c+125,"maybe_full", false,-1);
    tracep->declBit(c+126,"ptr_match", false,-1);
    tracep->declBit(c+127,"empty", false,-1);
    tracep->declBit(c+128,"full", false,-1);
    tracep->declBit(c+1013,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1219,"do_deq", false,-1);
    tracep->declBit(c+1220,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+124,"R0_addr", false,-1);
    tracep->declBit(c+1325,"R0_en", false,-1);
    tracep->declBit(c+1258,"R0_clk", false,-1);
    tracep->declBus(c+129,"R0_data", false,-1, 2,0);
    tracep->declBit(c+123,"W0_addr", false,-1);
    tracep->declBit(c+1220,"W0_en", false,-1);
    tracep->declBit(c+1258,"W0_clk", false,-1);
    tracep->declBus(c+1012,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+130+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+1173,"auto_in_awready", false,-1);
    tracep->declBit(c+967,"auto_in_awvalid", false,-1);
    tracep->declBus(c+936,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+937,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+938,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+968,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1174,"auto_in_wready", false,-1);
    tracep->declBit(c+969,"auto_in_wvalid", false,-1);
    tracep->declBus(c+940,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+970,"auto_in_wlast", false,-1);
    tracep->declBit(c+1175,"auto_in_bready", false,-1);
    tracep->declBit(c+1176,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1177,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1178,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1179,"auto_in_arready", false,-1);
    tracep->declBit(c+971,"auto_in_arvalid", false,-1);
    tracep->declBus(c+945,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+946,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+947,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+972,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+966,"auto_in_rready", false,-1);
    tracep->declBit(c+1171,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1291,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1180,"auto_in_rlast", false,-1);
    tracep->declBit(c+1194,"auto_out_awready", false,-1);
    tracep->declBit(c+995,"auto_out_awvalid", false,-1);
    tracep->declBus(c+936,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+937,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+938,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1174,"auto_out_wready", false,-1);
    tracep->declBit(c+969,"auto_out_wvalid", false,-1);
    tracep->declBus(c+940,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+970,"auto_out_wlast", false,-1);
    tracep->declBit(c+1175,"auto_out_bready", false,-1);
    tracep->declBit(c+1176,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1177,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1195,"auto_out_arready", false,-1);
    tracep->declBit(c+996,"auto_out_arvalid", false,-1);
    tracep->declBus(c+945,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+946,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+947,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+966,"auto_out_rready", false,-1);
    tracep->declBit(c+1171,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1180,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+132,"io_enq_ready", false,-1);
    tracep->declBit(c+1114,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1221,"io_deq_ready", false,-1);
    tracep->declBit(c+133,"io_deq_valid", false,-1);
    tracep->declBit(c+134,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+133,"full", false,-1);
    tracep->declBit(c+134,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+135,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+136,"io_enq_ready", false,-1);
    tracep->declBit(c+1115,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1222,"io_deq_ready", false,-1);
    tracep->declBit(c+137,"io_deq_valid", false,-1);
    tracep->declBit(c+138,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+137,"full", false,-1);
    tracep->declBit(c+138,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+139,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+140,"io_enq_ready", false,-1);
    tracep->declBit(c+1116,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1223,"io_deq_ready", false,-1);
    tracep->declBit(c+141,"io_deq_valid", false,-1);
    tracep->declBit(c+142,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+141,"full", false,-1);
    tracep->declBit(c+142,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+143,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+144,"io_enq_ready", false,-1);
    tracep->declBit(c+1117,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1224,"io_deq_ready", false,-1);
    tracep->declBit(c+145,"io_deq_valid", false,-1);
    tracep->declBit(c+146,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+145,"full", false,-1);
    tracep->declBit(c+146,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+147,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+148,"io_enq_ready", false,-1);
    tracep->declBit(c+1118,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1225,"io_deq_ready", false,-1);
    tracep->declBit(c+149,"io_deq_valid", false,-1);
    tracep->declBit(c+150,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+149,"full", false,-1);
    tracep->declBit(c+150,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+151,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+1119,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1226,"io_deq_ready", false,-1);
    tracep->declBit(c+153,"io_deq_valid", false,-1);
    tracep->declBit(c+154,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+154,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+155,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+156,"io_enq_ready", false,-1);
    tracep->declBit(c+1120,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1227,"io_deq_ready", false,-1);
    tracep->declBit(c+157,"io_deq_valid", false,-1);
    tracep->declBit(c+158,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+157,"full", false,-1);
    tracep->declBit(c+158,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+159,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+160,"io_enq_ready", false,-1);
    tracep->declBit(c+1121,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1228,"io_deq_ready", false,-1);
    tracep->declBit(c+161,"io_deq_valid", false,-1);
    tracep->declBit(c+162,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+161,"full", false,-1);
    tracep->declBit(c+162,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+163,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+164,"io_enq_ready", false,-1);
    tracep->declBit(c+1122,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1229,"io_deq_ready", false,-1);
    tracep->declBit(c+165,"io_deq_valid", false,-1);
    tracep->declBit(c+166,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+165,"full", false,-1);
    tracep->declBit(c+166,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+167,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+168,"io_enq_ready", false,-1);
    tracep->declBit(c+1123,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1230,"io_deq_ready", false,-1);
    tracep->declBit(c+169,"io_deq_valid", false,-1);
    tracep->declBit(c+170,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+169,"full", false,-1);
    tracep->declBit(c+170,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+171,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+172,"io_enq_ready", false,-1);
    tracep->declBit(c+1124,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1231,"io_deq_ready", false,-1);
    tracep->declBit(c+173,"io_deq_valid", false,-1);
    tracep->declBit(c+174,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+173,"full", false,-1);
    tracep->declBit(c+174,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+175,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+176,"io_enq_ready", false,-1);
    tracep->declBit(c+1125,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1232,"io_deq_ready", false,-1);
    tracep->declBit(c+177,"io_deq_valid", false,-1);
    tracep->declBit(c+178,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+177,"full", false,-1);
    tracep->declBit(c+178,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+179,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+180,"io_enq_ready", false,-1);
    tracep->declBit(c+1126,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1233,"io_deq_ready", false,-1);
    tracep->declBit(c+181,"io_deq_valid", false,-1);
    tracep->declBit(c+182,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+181,"full", false,-1);
    tracep->declBit(c+182,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+183,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+1127,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1234,"io_deq_ready", false,-1);
    tracep->declBit(c+185,"io_deq_valid", false,-1);
    tracep->declBit(c+186,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+185,"full", false,-1);
    tracep->declBit(c+186,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+187,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+1128,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1235,"io_deq_ready", false,-1);
    tracep->declBit(c+189,"io_deq_valid", false,-1);
    tracep->declBit(c+190,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+189,"full", false,-1);
    tracep->declBit(c+190,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+191,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+192,"io_enq_ready", false,-1);
    tracep->declBit(c+1129,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1236,"io_deq_ready", false,-1);
    tracep->declBit(c+193,"io_deq_valid", false,-1);
    tracep->declBit(c+194,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+193,"full", false,-1);
    tracep->declBit(c+194,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+195,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+196,"io_enq_ready", false,-1);
    tracep->declBit(c+1130,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1237,"io_deq_ready", false,-1);
    tracep->declBit(c+197,"io_deq_valid", false,-1);
    tracep->declBit(c+198,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+197,"full", false,-1);
    tracep->declBit(c+198,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+199,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+200,"io_enq_ready", false,-1);
    tracep->declBit(c+1131,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1238,"io_deq_ready", false,-1);
    tracep->declBit(c+201,"io_deq_valid", false,-1);
    tracep->declBit(c+202,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+201,"full", false,-1);
    tracep->declBit(c+202,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+203,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+204,"io_enq_ready", false,-1);
    tracep->declBit(c+1132,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1239,"io_deq_ready", false,-1);
    tracep->declBit(c+205,"io_deq_valid", false,-1);
    tracep->declBit(c+206,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+205,"full", false,-1);
    tracep->declBit(c+206,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+207,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+1133,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1240,"io_deq_ready", false,-1);
    tracep->declBit(c+209,"io_deq_valid", false,-1);
    tracep->declBit(c+210,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+210,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+211,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+1134,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1241,"io_deq_ready", false,-1);
    tracep->declBit(c+213,"io_deq_valid", false,-1);
    tracep->declBit(c+214,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+213,"full", false,-1);
    tracep->declBit(c+214,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+215,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+1135,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1242,"io_deq_ready", false,-1);
    tracep->declBit(c+217,"io_deq_valid", false,-1);
    tracep->declBit(c+218,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+217,"full", false,-1);
    tracep->declBit(c+218,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+219,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+220,"io_enq_ready", false,-1);
    tracep->declBit(c+1136,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1243,"io_deq_ready", false,-1);
    tracep->declBit(c+221,"io_deq_valid", false,-1);
    tracep->declBit(c+222,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+221,"full", false,-1);
    tracep->declBit(c+222,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+223,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+1137,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1244,"io_deq_ready", false,-1);
    tracep->declBit(c+225,"io_deq_valid", false,-1);
    tracep->declBit(c+226,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->declBit(c+226,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+227,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+1138,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1245,"io_deq_ready", false,-1);
    tracep->declBit(c+229,"io_deq_valid", false,-1);
    tracep->declBit(c+230,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+229,"full", false,-1);
    tracep->declBit(c+230,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+231,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+232,"io_enq_ready", false,-1);
    tracep->declBit(c+1139,"io_enq_valid", false,-1);
    tracep->declBit(c+968,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1246,"io_deq_ready", false,-1);
    tracep->declBit(c+233,"io_deq_valid", false,-1);
    tracep->declBit(c+234,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+233,"full", false,-1);
    tracep->declBit(c+234,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+235,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+1140,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1247,"io_deq_ready", false,-1);
    tracep->declBit(c+237,"io_deq_valid", false,-1);
    tracep->declBit(c+238,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->declBit(c+238,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+239,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+1141,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1248,"io_deq_ready", false,-1);
    tracep->declBit(c+241,"io_deq_valid", false,-1);
    tracep->declBit(c+242,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+241,"full", false,-1);
    tracep->declBit(c+242,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+243,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+1142,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1249,"io_deq_ready", false,-1);
    tracep->declBit(c+245,"io_deq_valid", false,-1);
    tracep->declBit(c+246,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+245,"full", false,-1);
    tracep->declBit(c+246,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+247,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+1143,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1250,"io_deq_ready", false,-1);
    tracep->declBit(c+249,"io_deq_valid", false,-1);
    tracep->declBit(c+250,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+249,"full", false,-1);
    tracep->declBit(c+250,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+251,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+1144,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1251,"io_deq_ready", false,-1);
    tracep->declBit(c+253,"io_deq_valid", false,-1);
    tracep->declBit(c+254,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+253,"full", false,-1);
    tracep->declBit(c+254,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+255,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+1145,"io_enq_valid", false,-1);
    tracep->declBit(c+972,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1252,"io_deq_ready", false,-1);
    tracep->declBit(c+257,"io_deq_valid", false,-1);
    tracep->declBit(c+258,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+257,"full", false,-1);
    tracep->declBit(c+258,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+259,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+767,"auto_master_out_awready", false,-1);
    tracep->declBit(c+949,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+950,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+953,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+954,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+26,"auto_master_out_wready", false,-1);
    tracep->declBit(c+955,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+956,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+957,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+958,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+959,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1169,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1287,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+27,"auto_master_out_arready", false,-1);
    tracep->declBit(c+960,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+961,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+962,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+963,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+964,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+965,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+966,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1171,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1290,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+1319,"io_interrupt", false,-1);
    tracep->declBit(c+767,"io_master_awready", false,-1);
    tracep->declBit(c+949,"io_master_awvalid", false,-1);
    tracep->declBus(c+950,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+951,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+953,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+954,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+26,"io_master_wready", false,-1);
    tracep->declBit(c+955,"io_master_wvalid", false,-1);
    tracep->declBus(c+956,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+957,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+958,"io_master_wlast", false,-1);
    tracep->declBit(c+959,"io_master_bready", false,-1);
    tracep->declBit(c+1169,"io_master_bvalid", false,-1);
    tracep->declBus(c+1170,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1287,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+27,"io_master_arready", false,-1);
    tracep->declBit(c+960,"io_master_arvalid", false,-1);
    tracep->declBus(c+961,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+962,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+963,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+964,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+965,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+966,"io_master_rready", false,-1);
    tracep->declBit(c+1171,"io_master_rvalid", false,-1);
    tracep->declBus(c+1172,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1288,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1289,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1290,"io_master_rlast", false,-1);
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
    tracep->declBit(c+260,"DIFFTEST", false,-1);
    tracep->declBus(c+769,"pc", false,-1, 31,0);
    tracep->declBus(c+770,"dnpc", false,-1, 31,0);
    tracep->declBit(c+771,"PCU_VALID", false,-1);
    tracep->declBit(c+772,"IFU_READY", false,-1);
    tracep->declBus(c+773,"inst", false,-1, 31,0);
    tracep->declBit(c+774,"IFU_VALID", false,-1);
    tracep->declBit(c+775,"IDU_READY", false,-1);
    tracep->declBus(c+1342,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1342,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+776,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1294,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1327,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1329,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+261,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1327,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+856,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+262,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+857,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1330,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+263,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1331,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+264,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+404,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+405,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1319,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+849,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+1295,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+858,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+777,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+850,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1253,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+778,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1343,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+406,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+779,"IDU_VALID", false,-1);
    tracep->declBit(c+780,"EXU_READY", false,-1);
    tracep->declBus(c+781,"op", false,-1, 6,0);
    tracep->declBus(c+265,"rd", false,-1, 4,0);
    tracep->declBus(c+782,"funct3", false,-1, 2,0);
    tracep->declBus(c+266,"rs1", false,-1, 4,0);
    tracep->declBus(c+267,"rs2", false,-1, 4,0);
    tracep->declBus(c+268,"imm", false,-1, 31,0);
    tracep->declBus(c+269,"funct7", false,-1, 6,0);
    tracep->declBus(c+270,"shamt", false,-1, 4,0);
    tracep->declBit(c+783,"sram_lsu_read", false,-1);
    tracep->declBit(c+784,"sram_lsu_write", false,-1);
    tracep->declBit(c+1296,"LSU_DONE", false,-1);
    tracep->declBit(c+271,"EXU_VALID", false,-1);
    tracep->declBit(c+272,"WBU_READY", false,-1);
    tracep->declBus(c+273,"res", false,-1, 31,0);
    tracep->declBit(c+785,"ls_valid", false,-1);
    tracep->declBit(c+786,"ls_wen", false,-1);
    tracep->declBus(c+787,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+395,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+788,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+789,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+790,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+791,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1329,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1329,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1344,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1344,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+274,"mepc", false,-1, 31,0);
    tracep->declBus(c+275,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+276,"mstatus", false,-1, 31,0);
    tracep->declBus(c+277,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+278,"mcause", false,-1, 31,0);
    tracep->declBus(c+279,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+280,"mtvec", false,-1, 31,0);
    tracep->declBus(c+281,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+282,"gpr_wen", false,-1);
    tracep->declBit(c+283,"mepc_wen", false,-1);
    tracep->declBit(c+284,"mstatus_wen", false,-1);
    tracep->declBit(c+285,"mcause_wen", false,-1);
    tracep->declBit(c+286,"mtvec_wen", false,-1);
    tracep->declBus(c+736,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+737,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1297,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+738,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1298,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+851,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+739,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+740,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1345,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+859,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1346,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+860,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+741,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+742,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+743,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+744,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+407,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+408,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+745,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+852,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+746,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+1015,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1254,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+747,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+748,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+853,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1255,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+749,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+750,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+409,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+1016,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1017,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1018,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+792,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1019,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1020,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1021,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1022,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+793,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1023,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+794,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1024,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1025,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1026,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1027,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+795,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+796,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1028,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+797,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1029,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+798,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+799,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+1030,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+1031,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+800,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+801,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+1032,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+1033,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+802,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+803,"wbu_done", false,-1);
    tracep->declBit(c+260,"difftest", false,-1);
    tracep->declBus(c+287,"xrd", false,-1, 31,0);
    tracep->declBus(c+288,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+289,"rf_wen", false,-1);
    tracep->declBus(c+290,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+291,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+292,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+293,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+294,"mepc_en", false,-1);
    tracep->declBit(c+295,"mstatus_en", false,-1);
    tracep->declBit(c+296,"mcause_en", false,-1);
    tracep->declBit(c+297,"mtvec_en", false,-1);
    tracep->declBus(c+298,"r1", false,-1, 31,0);
    tracep->declBus(c+299,"r2", false,-1, 31,0);
    tracep->declBus(c+300,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+301,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+783,"sram_lsu_read", false,-1);
    tracep->declBit(c+784,"sram_lsu_write", false,-1);
    tracep->declBit(c+1296,"LSU_DONE", false,-1);
    tracep->declBit(c+779,"IDU_VALID", false,-1);
    tracep->declBit(c+780,"EXU_READY", false,-1);
    tracep->declBit(c+271,"EXU_VALID", false,-1);
    tracep->declBit(c+272,"WBU_READY", false,-1);
    tracep->declBus(c+781,"op", false,-1, 6,0);
    tracep->declBus(c+782,"funct3", false,-1, 2,0);
    tracep->declBus(c+268,"imm", false,-1, 31,0);
    tracep->declBus(c+269,"funct7", false,-1, 6,0);
    tracep->declBus(c+270,"shamt", false,-1, 4,0);
    tracep->declBus(c+298,"r1", false,-1, 31,0);
    tracep->declBus(c+299,"r2", false,-1, 31,0);
    tracep->declBus(c+273,"res_reg", false,-1, 31,0);
    tracep->declBit(c+785,"ls_valid", false,-1);
    tracep->declBit(c+786,"ls_wen", false,-1);
    tracep->declBus(c+787,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+395,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+788,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+789,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+790,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+791,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1329,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1329,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1344,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1344,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+736,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+769,"pc", false,-1, 31,0);
    tracep->declBus(c+770,"dnpc_reg", false,-1, 31,0);
    tracep->declBus(c+274,"mepc", false,-1, 31,0);
    tracep->declBus(c+276,"mstatus", false,-1, 31,0);
    tracep->declBus(c+278,"mcause", false,-1, 31,0);
    tracep->declBus(c+280,"mtvec", false,-1, 31,0);
    tracep->declBus(c+275,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+277,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+279,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+281,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+282,"gpr_wen_reg", false,-1);
    tracep->declBit(c+283,"mepc_wen_reg", false,-1);
    tracep->declBit(c+284,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+285,"mcause_wen_reg", false,-1);
    tracep->declBit(c+286,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+780,"exu_ready", false,-1);
    tracep->declBit(c+271,"exu_valid", false,-1);
    tracep->declBus(c+1331,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1344,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1347,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+1348,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+804,"state", false,-1, 1,0);
    tracep->declBus(c+1299,"next_state", false,-1, 1,0);
    tracep->declBus(c+302,"s_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+805,"a", false,-1, 31,0);
    tracep->declBus(c+806,"b", false,-1, 31,0);
    tracep->declBus(c+807,"res", false,-1, 31,0);
    tracep->declBus(c+808,"csr", false,-1, 31,0);
    tracep->declBus(c+809,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+810,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+809,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+396,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+809,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+1034,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+1349,"ls_wsize", false,-1, 2,0);
    tracep->declBus(c+1350,"ls_rsize", false,-1, 2,0);
    tracep->declBus(c+811,"dnpc", false,-1, 31,0);
    tracep->declBus(c+268,"offset", false,-1, 31,0);
    tracep->declBit(c+812,"jalen", false,-1);
    tracep->declBit(c+813,"jalren", false,-1);
    tracep->declBit(c+397,"beqen", false,-1);
    tracep->declBit(c+398,"bneen", false,-1);
    tracep->declBit(c+399,"blten", false,-1);
    tracep->declBit(c+400,"bgeen", false,-1);
    tracep->declBit(c+401,"bltuen", false,-1);
    tracep->declBit(c+402,"bgeuen", false,-1);
    tracep->declBit(c+814,"ecall_en", false,-1);
    tracep->declBit(c+403,"mret_en", false,-1);
    tracep->declBit(c+815,"gpr_wen", false,-1);
    tracep->declBit(c+816,"mepc_wen", false,-1);
    tracep->declBit(c+817,"mstatus_wen", false,-1);
    tracep->declBit(c+818,"mcause_wen", false,-1);
    tracep->declBit(c+819,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+773,"inst", false,-1, 31,0);
    tracep->declBit(c+774,"IFU_VALID", false,-1);
    tracep->declBit(c+775,"IDU_READY", false,-1);
    tracep->declBit(c+779,"IDU_VALID", false,-1);
    tracep->declBit(c+780,"EXU_READY", false,-1);
    tracep->declBus(c+781,"op_reg", false,-1, 6,0);
    tracep->declBus(c+265,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+782,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+266,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+267,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+268,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+269,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+270,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+820,"op", false,-1, 6,0);
    tracep->declBus(c+821,"rd", false,-1, 4,0);
    tracep->declBus(c+822,"funct3", false,-1, 2,0);
    tracep->declBus(c+823,"rs1", false,-1, 4,0);
    tracep->declBus(c+824,"rs2", false,-1, 4,0);
    tracep->declBus(c+825,"immI", false,-1, 31,0);
    tracep->declBus(c+826,"immU", false,-1, 31,0);
    tracep->declBus(c+827,"immS", false,-1, 31,0);
    tracep->declBus(c+828,"immB", false,-1, 31,0);
    tracep->declBus(c+829,"immJ", false,-1, 31,0);
    tracep->declBus(c+830,"imm", false,-1, 31,0);
    tracep->declBus(c+831,"funct7", false,-1, 6,0);
    tracep->declBus(c+832,"shamt", false,-1, 4,0);
    tracep->declBit(c+775,"idu_ready", false,-1);
    tracep->declBit(c+779,"idu_valid", false,-1);
    tracep->declBus(c+1351,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+833,"state", false,-1);
    tracep->declBit(c+2,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+769,"pc", false,-1, 31,0);
    tracep->declBus(c+773,"inst", false,-1, 31,0);
    tracep->declBit(c+771,"PCU_VALID", false,-1);
    tracep->declBit(c+772,"IFU_READY", false,-1);
    tracep->declBit(c+774,"IFU_VALID", false,-1);
    tracep->declBit(c+775,"IDU_READY", false,-1);
    tracep->declBit(c+803,"wbu_done", false,-1);
    tracep->declBit(c+849,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+1319,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1327,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1342,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1329,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1330,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1331,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1295,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+1319,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1342,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1327,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1343,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+1319,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+858,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+856,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+404,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+850,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+777,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+262,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+776,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+261,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+263,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+264,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+778,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1253,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+857,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1294,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+405,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+406,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+772,"ifu_ready", false,-1);
    tracep->declBit(c+774,"ifu_valid", false,-1);
    tracep->declBus(c+1331,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1344,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1347,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1348,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+834,"current_state", false,-1, 1,0);
    tracep->declBus(c+3,"next_state", false,-1, 1,0);
    tracep->declBit(c+777,"axi_arvalid", false,-1);
    tracep->declBit(c+778,"axi_rready", false,-1);
    tracep->declBus(c+262,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+776,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+261,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+263,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+264,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1351,"SRAM_IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"SRAM_FETCH", false,-1, 0,0);
    tracep->declBit(c+835,"state", false,-1);
    tracep->declBit(c+836,"sram_start", false,-1);
    tracep->declBus(c+837,"inst_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+783,"sram_lsu_read", false,-1);
    tracep->declBit(c+784,"sram_lsu_write", false,-1);
    tracep->declBit(c+1296,"LSU_DONE", false,-1);
    tracep->declBus(c+736,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+785,"valid", false,-1);
    tracep->declBit(c+786,"wen", false,-1);
    tracep->declBus(c+787,"waddr", false,-1, 31,0);
    tracep->declBus(c+395,"wdata", false,-1, 31,0);
    tracep->declBus(c+788,"raddr", false,-1, 31,0);
    tracep->declBus(c+789,"wmask", false,-1, 3,0);
    tracep->declBus(c+790,"awsize", false,-1, 2,0);
    tracep->declBus(c+791,"arsize", false,-1, 2,0);
    tracep->declBus(c+1329,"awlen", false,-1, 7,0);
    tracep->declBus(c+1329,"arlen", false,-1, 7,0);
    tracep->declBus(c+1344,"awburst", false,-1, 1,0);
    tracep->declBus(c+1344,"arburst", false,-1, 1,0);
    tracep->declBit(c+852,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+745,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1345,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+737,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+739,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+741,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+743,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1015,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+746,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1297,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+851,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+750,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+747,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1254,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+859,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+407,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+853,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+748,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+1346,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+738,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+740,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+742,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+744,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+749,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1255,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+860,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1298,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+408,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+409,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+1331,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1344,"READ", false,-1, 1,0);
    tracep->declBus(c+1347,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1348,"DONE", false,-1, 1,0);
    tracep->declBus(c+751,"state", false,-1, 1,0);
    tracep->declBit(c+745,"axi_awvalid", false,-1);
    tracep->declBit(c+746,"axi_wvalid", false,-1);
    tracep->declBus(c+1345,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+737,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+752,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+739,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+741,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+743,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+753,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+747,"axi_bready", false,-1);
    tracep->declBit(c+750,"axi_wlast", false,-1);
    tracep->declBit(c+748,"axi_arvalid", false,-1);
    tracep->declBit(c+749,"axi_rready", false,-1);
    tracep->declBus(c+1346,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+738,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+740,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+742,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+744,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+769,"pc", false,-1, 31,0);
    tracep->declBus(c+770,"dnpc", false,-1, 31,0);
    tracep->declBit(c+771,"PCU_VALID", false,-1);
    tracep->declBit(c+772,"IFU_READY", false,-1);
    tracep->declBit(c+771,"pcu_valid", false,-1);
    tracep->declBus(c+1351,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+838,"state", false,-1);
    tracep->declBit(c+4,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1353,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1354,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBus(c+287,"wdata", false,-1, 31,0);
    tracep->declBus(c+288,"waddr", false,-1, 4,0);
    tracep->declBit(c+289,"wen", false,-1);
    tracep->declBus(c+266,"raddr1", false,-1, 4,0);
    tracep->declBus(c+298,"r1", false,-1, 31,0);
    tracep->declBus(c+267,"raddr2", false,-1, 4,0);
    tracep->declBus(c+299,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+303+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+271,"EXU_VALID", false,-1);
    tracep->declBit(c+272,"WBU_READY", false,-1);
    tracep->declBit(c+803,"wbu_done", false,-1);
    tracep->declBit(c+260,"difftest", false,-1);
    tracep->declBus(c+287,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+273,"res", false,-1, 31,0);
    tracep->declBus(c+288,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+265,"rd", false,-1, 4,0);
    tracep->declBit(c+289,"wen_reg", false,-1);
    tracep->declBit(c+282,"gpr_wen", false,-1);
    tracep->declBus(c+275,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+277,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+279,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+281,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+290,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+291,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+292,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+293,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+283,"mepc_wen", false,-1);
    tracep->declBit(c+284,"mstatus_wen", false,-1);
    tracep->declBit(c+285,"mcause_wen", false,-1);
    tracep->declBit(c+286,"mtvec_wen", false,-1);
    tracep->declBit(c+294,"mepc_wen_reg", false,-1);
    tracep->declBit(c+295,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+296,"mcause_wen_reg", false,-1);
    tracep->declBit(c+297,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+273,"xrd", false,-1, 31,0);
    tracep->declBus(c+265,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+282,"o_rf_wen", false,-1);
    tracep->declBus(c+275,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+277,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+279,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+281,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+272,"wbu_ready", false,-1);
    tracep->declBus(c+1331,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1344,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1347,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1348,"NULL", false,-1, 1,0);
    tracep->declBus(c+839,"state", false,-1, 1,0);
    tracep->declBus(c+5,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+849,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1327,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1342,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1329,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1330,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1331,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1295,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1342,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1327,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1343,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+858,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+856,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+404,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+850,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+777,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+262,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+776,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+261,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+263,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+264,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+778,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1253,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+857,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1294,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+405,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+406,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+852,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+745,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1345,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+737,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+739,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+741,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+743,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1015,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+746,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1297,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+851,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+750,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+747,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1254,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+859,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+407,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+853,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+748,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1346,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+738,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+740,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+742,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+744,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+749,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1255,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+860,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1298,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+408,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+409,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+767,"io_master_awready", false,-1);
    tracep->declBit(c+949,"io_master_awvalid", false,-1);
    tracep->declBus(c+950,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+951,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+953,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+954,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+26,"io_master_wready", false,-1);
    tracep->declBit(c+955,"io_master_wvalid", false,-1);
    tracep->declBus(c+956,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+957,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+958,"io_master_wlast", false,-1);
    tracep->declBit(c+959,"io_master_bready", false,-1);
    tracep->declBit(c+1169,"io_master_bvalid", false,-1);
    tracep->declBus(c+1170,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1287,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+27,"io_master_arready", false,-1);
    tracep->declBit(c+960,"io_master_arvalid", false,-1);
    tracep->declBus(c+961,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+962,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+963,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+964,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+965,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+966,"io_master_rready", false,-1);
    tracep->declBit(c+1171,"io_master_rvalid", false,-1);
    tracep->declBus(c+1172,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1288,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1289,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1290,"io_master_rlast", false,-1);
    tracep->declBit(c+797,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1028,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1022,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1016,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1020,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1024,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1026,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+798,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1029,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1017,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1019,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1033,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1030,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+799,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+793,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+795,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+800,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1031,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1023,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1018,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1021,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1025,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1027,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1032,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+801,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+794,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+792,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+796,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+802,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+300,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+301,"marchid", false,-1, 31,0);
    tracep->declBus(c+1035,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1036,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1037,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1256,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1038,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1039,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1040,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+840,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+861,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+841,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+862,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1041,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1042,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1043,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1044,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+410,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+411,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1045,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+854,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1046,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1300,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+863,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1047,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1048,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1049,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1257,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1050,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1051,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+412,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1331,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1344,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1347,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1348,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+842,"state", false,-1, 1,0);
    tracep->declBus(c+1301,"next_state", false,-1, 1,0);
    tracep->declBus(c+1355,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1356,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1052,"sel_clint", false,-1);
    tracep->declBus(c+1357,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1358,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1053,"sel_mvendorid", false,-1);
    tracep->declBit(c+1054,"sel_marchid", false,-1);
    tracep->declBit(c+1055,"sel_id", false,-1);
    tracep->declBus(c+1056,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1057,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1058,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1302,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1059,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1060,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1061,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1062,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1359,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1063,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1360,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1064,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1065,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1066,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1067,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1361,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1362,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1363,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1325,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1068,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1325,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1325,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1069,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1070,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1325,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1325,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1071,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1072,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1364,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1365,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1328,"din", false,-1, 31,0);
    tracep->declBus(c+301,"dout", false,-1, 31,0);
    tracep->declBit(c+1319,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1328,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+292,"din", false,-1, 31,0);
    tracep->declBus(c+278,"dout", false,-1, 31,0);
    tracep->declBit(c+296,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1328,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+290,"din", false,-1, 31,0);
    tracep->declBus(c+274,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1366,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+291,"din", false,-1, 31,0);
    tracep->declBus(c+276,"dout", false,-1, 31,0);
    tracep->declBit(c+295,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1328,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+293,"din", false,-1, 31,0);
    tracep->declBus(c+280,"dout", false,-1, 31,0);
    tracep->declBit(c+297,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1354,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1367,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1328,"din", false,-1, 31,0);
    tracep->declBus(c+300,"dout", false,-1, 31,0);
    tracep->declBit(c+1319,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+797,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1028,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1022,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1016,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1020,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1024,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1026,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+798,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1029,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1017,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1019,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1033,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1030,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+799,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+793,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+795,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+800,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1031,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1023,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1018,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1021,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1025,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1027,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1032,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+801,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+794,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+792,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+796,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+802,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+797,"axi_awready", false,-1);
    tracep->declBit(c+798,"axi_wready", false,-1);
    tracep->declBit(c+799,"axi_bvalid", false,-1);
    tracep->declBit(c+800,"axi_arready", false,-1);
    tracep->declBit(c+801,"axi_rvalid", false,-1);
    tracep->declBit(c+802,"axi_rlast", false,-1);
    tracep->declBus(c+795,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+796,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+793,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+794,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+792,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+843,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1355,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1356,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+335,"mtime", false,-1, 63,0);
    tracep->declBus(c+1303,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"io_d", false,-1);
    tracep->declBit(c+337,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"io_d", false,-1);
    tracep->declBit(c+337,"io_q", false,-1);
    tracep->declBit(c+337,"sync_0", false,-1);
    tracep->declBit(c+338,"sync_1", false,-1);
    tracep->declBit(c+339,"sync_2", false,-1);
    tracep->declBit(c+340,"sync_3", false,-1);
    tracep->declBit(c+341,"sync_4", false,-1);
    tracep->declBit(c+342,"sync_5", false,-1);
    tracep->declBit(c+343,"sync_6", false,-1);
    tracep->declBit(c+344,"sync_7", false,-1);
    tracep->declBit(c+345,"sync_8", false,-1);
    tracep->declBit(c+346,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+920,"auto_in_psel", false,-1);
    tracep->declBit(c+847,"auto_in_penable", false,-1);
    tracep->declBit(c+911,"auto_in_pwrite", false,-1);
    tracep->declBus(c+919,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+419,"auto_in_pready", false,-1);
    tracep->declBit(c+1324,"auto_in_pslverr", false,-1);
    tracep->declBus(c+420,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1260,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1261,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1262,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1263,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1264,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1265,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1266,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1267,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1268,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1269,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBus(c+1073,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+920,"in_psel", false,-1);
    tracep->declBit(c+847,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+911,"in_pwrite", false,-1);
    tracep->declBus(c+912,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+419,"in_pready", false,-1);
    tracep->declBus(c+420,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1324,"in_pslverr", false,-1);
    tracep->declBus(c+1260,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1261,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1262,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1263,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1264,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1265,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1266,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1267,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1268,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1269,"gpio_seg_7", false,-1, 7,0);
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
    tracep->declBus(c+421,"led_reg", false,-1, 15,0);
    tracep->declBus(c+422,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+423+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1074,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1075,"write_en", false,-1);
    tracep->declBit(c+1076,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+918,"auto_in_psel", false,-1);
    tracep->declBit(c+846,"auto_in_penable", false,-1);
    tracep->declBit(c+911,"auto_in_pwrite", false,-1);
    tracep->declBus(c+919,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+650,"auto_in_pready", false,-1);
    tracep->declBit(c+1323,"auto_in_pslverr", false,-1);
    tracep->declBus(c+651,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1270,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1271,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBus(c+1073,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+918,"in_psel", false,-1);
    tracep->declBit(c+846,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+911,"in_pwrite", false,-1);
    tracep->declBus(c+912,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+650,"in_pready", false,-1);
    tracep->declBus(c+651,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1323,"in_pslverr", false,-1);
    tracep->declBit(c+1270,"ps2_clk", false,-1);
    tracep->declBit(c+1271,"ps2_data", false,-1);
    tracep->declBit(c+855,"is_read", false,-1);
    tracep->declBit(c+652,"exp_en", false,-1);
    tracep->declBit(c+653,"break_en", false,-1);
    tracep->declBus(c+871,"state", false,-1, 2,0);
    tracep->declBus(c+654,"counter", false,-1, 3,0);
    tracep->declBus(c+655,"buffer", false,-1, 7,0);
    tracep->declBus(c+656,"buffer1", false,-1, 7,0);
    tracep->declBus(c+657,"buffer2", false,-1, 7,0);
    tracep->declBus(c+651,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+997,"auto_in_awvalid", false,-1);
    tracep->declBit(c+998,"auto_in_wvalid", false,-1);
    tracep->declBit(c+76,"auto_in_arready", false,-1);
    tracep->declBit(c+999,"auto_in_arvalid", false,-1);
    tracep->declBus(c+945,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1000,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1293,"auto_in_rready", false,-1);
    tracep->declBit(c+77,"auto_in_rvalid", false,-1);
    tracep->declBus(c+78,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+79,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+77,"state", false,-1);
    tracep->declBus(c+79,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+78,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1077,"raddr", false,-1, 31,0);
    tracep->declBit(c+1078,"ren", false,-1);
    tracep->declBus(c+1079,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+921,"auto_in_psel", false,-1);
    tracep->declBit(c+848,"auto_in_penable", false,-1);
    tracep->declBit(c+911,"auto_in_pwrite", false,-1);
    tracep->declBus(c+909,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1283,"auto_in_pready", false,-1);
    tracep->declBit(c+1319,"auto_in_pslverr", false,-1);
    tracep->declBus(c+16,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1159,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1160,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1281,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBus(c+909,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+921,"in_psel", false,-1);
    tracep->declBit(c+848,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+911,"in_pwrite", false,-1);
    tracep->declBus(c+912,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1283,"in_pready", false,-1);
    tracep->declBus(c+16,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"in_pslverr", false,-1);
    tracep->declBit(c+1159,"qspi_sck", false,-1);
    tracep->declBit(c+1160,"qspi_ce_n", false,-1);
    tracep->declBus(c+1281,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1281,"din", false,-1, 3,0);
    tracep->declBus(c+1161,"dout", false,-1, 3,0);
    tracep->declBus(c+1162,"douten", false,-1, 3,0);
    tracep->declBit(c+1304,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1258,"clk_i", false,-1);
    tracep->declBit(c+1259,"rst_i", false,-1);
    tracep->declBus(c+909,"adr_i", false,-1, 31,0);
    tracep->declBus(c+912,"dat_i", false,-1, 31,0);
    tracep->declBus(c+16,"dat_o", false,-1, 31,0);
    tracep->declBus(c+913,"sel_i", false,-1, 3,0);
    tracep->declBit(c+921,"cyc_i", false,-1);
    tracep->declBit(c+921,"stb_i", false,-1);
    tracep->declBit(c+1304,"ack_o", false,-1);
    tracep->declBit(c+911,"we_i", false,-1);
    tracep->declBit(c+1159,"sck", false,-1);
    tracep->declBit(c+1160,"ce_n", false,-1);
    tracep->declBus(c+1281,"din", false,-1, 3,0);
    tracep->declBus(c+1161,"dout", false,-1, 3,0);
    tracep->declBus(c+1162,"douten", false,-1, 3,0);
    tracep->declBus(c+1351,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+431,"mr_sck", false,-1);
    tracep->declBit(c+432,"mr_ce_n", false,-1);
    tracep->declBus(c+1281,"mr_din", false,-1, 3,0);
    tracep->declBus(c+433,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+434,"mr_doe", false,-1);
    tracep->declBit(c+435,"mw_sck", false,-1);
    tracep->declBit(c+436,"mw_ce_n", false,-1);
    tracep->declBus(c+1281,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1147,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+437,"mw_doe", false,-1);
    tracep->declBit(c+1148,"mr_rd", false,-1);
    tracep->declBit(c+438,"mr_done", false,-1);
    tracep->declBit(c+1149,"mw_wr", false,-1);
    tracep->declBit(c+1150,"mw_done", false,-1);
    tracep->declBit(c+921,"wb_valid", false,-1);
    tracep->declBit(c+1080,"wb_we", false,-1);
    tracep->declBit(c+1081,"wb_re", false,-1);
    tracep->declBit(c+439,"state", false,-1);
    tracep->declBit(c+1151,"nstate", false,-1);
    tracep->declBus(c+1082,"size", false,-1, 2,0);
    tracep->declBus(c+1083,"byte0", false,-1, 7,0);
    tracep->declBus(c+1084,"byte1", false,-1, 7,0);
    tracep->declBus(c+1085,"byte2", false,-1, 7,0);
    tracep->declBus(c+1086,"byte3", false,-1, 7,0);
    tracep->declBus(c+1087,"wdata", false,-1, 31,0);
    tracep->declBit(c+658,"qpi_flag", false,-1);
    tracep->declBit(c+659,"qpi_sck", false,-1);
    tracep->declBit(c+660,"qpi_ce_n", false,-1);
    tracep->declBus(c+661,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+662,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+663,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1305,"rst_n", false,-1);
    tracep->declBus(c+1088,"addr", false,-1, 23,0);
    tracep->declBit(c+1148,"rd", false,-1);
    tracep->declBus(c+1386,"size", false,-1, 2,0);
    tracep->declBit(c+438,"done", false,-1);
    tracep->declBus(c+16,"line", false,-1, 31,0);
    tracep->declBit(c+431,"sck", false,-1);
    tracep->declBit(c+432,"ce_n", false,-1);
    tracep->declBus(c+1281,"din", false,-1, 3,0);
    tracep->declBus(c+433,"dout", false,-1, 3,0);
    tracep->declBit(c+434,"douten", false,-1);
    tracep->declBus(c+1351,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"READ", false,-1, 0,0);
    tracep->declBus(c+1387,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+440,"state", false,-1);
    tracep->declBit(c+1152,"nstate", false,-1);
    tracep->declBus(c+441,"counter", false,-1, 7,0);
    tracep->declBus(c+442,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+347+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1388,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+443,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1305,"rst_n", false,-1);
    tracep->declBus(c+1089,"addr", false,-1, 23,0);
    tracep->declBus(c+1087,"line", false,-1, 31,0);
    tracep->declBus(c+1082,"size", false,-1, 2,0);
    tracep->declBit(c+1149,"wr", false,-1);
    tracep->declBit(c+1150,"done", false,-1);
    tracep->declBit(c+435,"sck", false,-1);
    tracep->declBit(c+436,"ce_n", false,-1);
    tracep->declBus(c+1281,"din", false,-1, 3,0);
    tracep->declBus(c+1147,"dout", false,-1, 3,0);
    tracep->declBit(c+437,"douten", false,-1);
    tracep->declBus(c+1351,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1352,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1090,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+444,"state", false,-1);
    tracep->declBit(c+1153,"nstate", false,-1);
    tracep->declBus(c+445,"counter", false,-1, 7,0);
    tracep->declBus(c+446,"saddr", false,-1, 23,0);
    tracep->declBus(c+1389,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+915,"auto_in_psel", false,-1);
    tracep->declBit(c+844,"auto_in_penable", false,-1);
    tracep->declBit(c+911,"auto_in_pwrite", false,-1);
    tracep->declBus(c+909,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+417,"auto_in_pready", false,-1);
    tracep->declBit(c+1319,"auto_in_pslverr", false,-1);
    tracep->declBus(c+418,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1282,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+415,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+865,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+866,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+867,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+868,"sdram_bundle_we", false,-1);
    tracep->declBus(c+869,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+870,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+416,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+895,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBus(c+909,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+915,"in_psel", false,-1);
    tracep->declBit(c+844,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+911,"in_pwrite", false,-1);
    tracep->declBus(c+912,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+417,"in_pready", false,-1);
    tracep->declBus(c+418,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"in_pslverr", false,-1);
    tracep->declBit(c+1282,"sdram_clk", false,-1);
    tracep->declBit(c+415,"sdram_cke", false,-1);
    tracep->declBit(c+865,"sdram_cs", false,-1);
    tracep->declBit(c+866,"sdram_ras", false,-1);
    tracep->declBit(c+867,"sdram_cas", false,-1);
    tracep->declBit(c+868,"sdram_we", false,-1);
    tracep->declBus(c+869,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+870,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+416,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+895,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+447,"sdram_dout_en", false,-1);
    tracep->declBus(c+448,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+351,"state", false,-1, 1,0);
    tracep->declBit(c+872,"req_accept", false,-1);
    tracep->declBit(c+1091,"is_read", false,-1);
    tracep->declBit(c+1092,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1258,"clk_i", false,-1);
    tracep->declBit(c+1259,"rst_i", false,-1);
    tracep->declBus(c+1093,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1091,"inport_rd_i", false,-1);
    tracep->declBus(c+1329,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+909,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+912,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+895,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+872,"inport_accept_o", false,-1);
    tracep->declBit(c+417,"inport_ack_o", false,-1);
    tracep->declBit(c+1319,"inport_error_o", false,-1);
    tracep->declBus(c+418,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1282,"sdram_clk_o", false,-1);
    tracep->declBit(c+415,"sdram_cke_o", false,-1);
    tracep->declBit(c+865,"sdram_cs_o", false,-1);
    tracep->declBit(c+866,"sdram_ras_o", false,-1);
    tracep->declBit(c+867,"sdram_cas_o", false,-1);
    tracep->declBit(c+868,"sdram_we_o", false,-1);
    tracep->declBus(c+416,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+869,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+870,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+448,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+447,"sdram_data_out_en_o", false,-1);
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
    tracep->declBus(c+909,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1093,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1091,"ram_rd_w", false,-1);
    tracep->declBit(c+872,"ram_accept_w", false,-1);
    tracep->declBus(c+912,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+418,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+417,"ram_ack_w", false,-1);
    tracep->declBit(c+1094,"ram_req_w", false,-1);
    tracep->declBus(c+873,"command_q", false,-1, 3,0);
    tracep->declBus(c+869,"addr_q", false,-1, 12,0);
    tracep->declBus(c+448,"data_q", false,-1, 31,0);
    tracep->declBit(c+449,"data_rd_en_q", false,-1);
    tracep->declBus(c+416,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+415,"cke_q", false,-1);
    tracep->declBus(c+870,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1413,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+450,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+895,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+451,"refresh_q", false,-1);
    tracep->declBus(c+874,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+452+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+875,"state_q", false,-1, 3,0);
    tracep->declBus(c+1154,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1155,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+460,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+461,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1095,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1096,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1097,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1395,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+462,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1156,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1414,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+876,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+463,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+418,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+464,"idx", false,-1, 31,0);
    tracep->declBus(c+465,"rd_q", false,-1, 3,0);
    tracep->declBit(c+417,"ack_q", false,-1);
    tracep->declArray(c+877,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+925,"auto_in_psel", false,-1);
    tracep->declBit(c+926,"auto_in_penable", false,-1);
    tracep->declBit(c+911,"auto_in_pwrite", false,-1);
    tracep->declBus(c+917,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1285,"auto_in_pready", false,-1);
    tracep->declBit(c+1319,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1146,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+413,"spi_bundle_sck", false,-1);
    tracep->declBus(c+414,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+864,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1280,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1415,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1416,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1396,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBus(c+1098,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+925,"in_psel", false,-1);
    tracep->declBit(c+926,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+911,"in_pwrite", false,-1);
    tracep->declBus(c+912,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1285,"in_pready", false,-1);
    tracep->declBus(c+1146,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"in_pslverr", false,-1);
    tracep->declBit(c+413,"spi_sck", false,-1);
    tracep->declBus(c+414,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+864,"spi_mosi", false,-1);
    tracep->declBit(c+1280,"spi_miso", false,-1);
    tracep->declBit(c+466,"spi_irq_out", false,-1);
    tracep->declBus(c+1099,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1100,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1101,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1102,"wb_we_i", false,-1);
    tracep->declBit(c+1103,"wb_stb_i", false,-1);
    tracep->declBit(c+1104,"wb_cyc_i", false,-1);
    tracep->declBit(c+467,"wb_ack_o", false,-1);
    tracep->declBus(c+468,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1330,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1318,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1417,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1418,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1386,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1419,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1420,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1421,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+352,"state", false,-1, 2,0);
    tracep->declBus(c+353,"next_state", false,-1, 2,0);
    tracep->declBus(c+354,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+355,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+356,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+357,"flash_pwrite", false,-1);
    tracep->declBit(c+358,"flash_psel", false,-1);
    tracep->declBit(c+359,"flash_penable", false,-1);
    tracep->declBit(c+360,"flash_pready", false,-1);
    tracep->declBus(c+361,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1422,"Tp", false,-1, 31,0);
    tracep->declBit(c+1258,"wb_clk_i", false,-1);
    tracep->declBit(c+1259,"wb_rst_i", false,-1);
    tracep->declBus(c+1099,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1100,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+468,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1101,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1102,"wb_we_i", false,-1);
    tracep->declBit(c+1103,"wb_stb_i", false,-1);
    tracep->declBit(c+1104,"wb_cyc_i", false,-1);
    tracep->declBit(c+467,"wb_ack_o", false,-1);
    tracep->declBit(c+1319,"wb_err_o", false,-1);
    tracep->declBit(c+466,"wb_int_o", false,-1);
    tracep->declBus(c+414,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+413,"sclk_pad_o", false,-1);
    tracep->declBit(c+864,"mosi_pad_o", false,-1);
    tracep->declBit(c+1280,"miso_pad_i", false,-1);
    tracep->declBus(c+469,"divider", false,-1, 15,0);
    tracep->declBus(c+470,"ctrl", false,-1, 13,0);
    tracep->declBus(c+471,"ss", false,-1, 7,0);
    tracep->declBus(c+1157,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+472,"rx", false,-1, 127,0);
    tracep->declBit(c+476,"rx_negedge", false,-1);
    tracep->declBit(c+477,"tx_negedge", false,-1);
    tracep->declBus(c+478,"char_len", false,-1, 6,0);
    tracep->declBit(c+479,"go", false,-1);
    tracep->declBit(c+480,"lsb", false,-1);
    tracep->declBit(c+481,"ie", false,-1);
    tracep->declBit(c+482,"ass", false,-1);
    tracep->declBit(c+1105,"spi_divider_sel", false,-1);
    tracep->declBit(c+1106,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1107,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1108,"spi_ss_sel", false,-1);
    tracep->declBit(c+483,"tip", false,-1);
    tracep->declBit(c+484,"pos_edge", false,-1);
    tracep->declBit(c+485,"neg_edge", false,-1);
    tracep->declBit(c+486,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1422,"Tp", false,-1, 31,0);
    tracep->declBit(c+1258,"clk_in", false,-1);
    tracep->declBit(c+1259,"rst", false,-1);
    tracep->declBit(c+483,"enable", false,-1);
    tracep->declBit(c+479,"go", false,-1);
    tracep->declBit(c+486,"last_clk", false,-1);
    tracep->declBus(c+469,"divider", false,-1, 15,0);
    tracep->declBit(c+413,"clk_out", false,-1);
    tracep->declBit(c+484,"pos_edge", false,-1);
    tracep->declBit(c+485,"neg_edge", false,-1);
    tracep->declBus(c+487,"cnt", false,-1, 15,0);
    tracep->declBit(c+488,"cnt_zero", false,-1);
    tracep->declBit(c+489,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1422,"Tp", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1259,"rst", false,-1);
    tracep->declBus(c+1109,"latch", false,-1, 3,0);
    tracep->declBus(c+1101,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+478,"len", false,-1, 6,0);
    tracep->declBit(c+480,"lsb", false,-1);
    tracep->declBit(c+479,"go", false,-1);
    tracep->declBit(c+484,"pos_edge", false,-1);
    tracep->declBit(c+485,"neg_edge", false,-1);
    tracep->declBit(c+476,"rx_negedge", false,-1);
    tracep->declBit(c+477,"tx_negedge", false,-1);
    tracep->declBit(c+483,"tip", false,-1);
    tracep->declBit(c+486,"last", false,-1);
    tracep->declBus(c+1100,"p_in", false,-1, 31,0);
    tracep->declArray(c+472,"p_out", false,-1, 127,0);
    tracep->declBit(c+413,"s_clk", false,-1);
    tracep->declBit(c+1280,"s_in", false,-1);
    tracep->declBit(c+864,"s_out", false,-1);
    tracep->declBus(c+490,"cnt", false,-1, 7,0);
    tracep->declArray(c+472,"data", false,-1, 127,0);
    tracep->declBus(c+491,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+492,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+493,"rx_clk", false,-1);
    tracep->declBit(c+494,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+922,"auto_in_psel", false,-1);
    tracep->declBit(c+923,"auto_in_penable", false,-1);
    tracep->declBit(c+911,"auto_in_pwrite", false,-1);
    tracep->declBus(c+919,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+924,"auto_in_pready", false,-1);
    tracep->declBit(c+1319,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1284,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1278,"uart_rx", false,-1);
    tracep->declBit(c+1279,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+922,"in_psel", false,-1);
    tracep->declBit(c+923,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+924,"in_pready", false,-1);
    tracep->declBit(c+1319,"in_pslverr", false,-1);
    tracep->declBus(c+1073,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+911,"in_pwrite", false,-1);
    tracep->declBus(c+1284,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+912,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1278,"uart_rx", false,-1);
    tracep->declBit(c+1279,"uart_tx", false,-1);
    tracep->declBit(c+495,"rtsn", false,-1);
    tracep->declBit(c+1319,"ctsn", false,-1);
    tracep->declBit(c+496,"dtr_pad_o", false,-1);
    tracep->declBit(c+1319,"dsr_pad_i", false,-1);
    tracep->declBit(c+1319,"ri_pad_i", false,-1);
    tracep->declBit(c+1319,"dcd_pad_i", false,-1);
    tracep->declBit(c+497,"interrupt", false,-1);
    tracep->declBit(c+1306,"reg_we", false,-1);
    tracep->declBit(c+1307,"reg_re", false,-1);
    tracep->declBus(c+1110,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1111,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+362,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1158,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+498,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1259,"wb_rst_i", false,-1);
    tracep->declBus(c+1110,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1112,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1158,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1306,"wb_we_i", false,-1);
    tracep->declBit(c+1307,"wb_re_i", false,-1);
    tracep->declBit(c+1279,"stx_pad_o", false,-1);
    tracep->declBit(c+1278,"srx_pad_i", false,-1);
    tracep->declBus(c+1409,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+498,"rts_pad_o", false,-1);
    tracep->declBit(c+496,"dtr_pad_o", false,-1);
    tracep->declBit(c+497,"int_o", false,-1);
    tracep->declBit(c+499,"enable", false,-1);
    tracep->declBit(c+500,"srx_pad", false,-1);
    tracep->declBus(c+501,"ier", false,-1, 3,0);
    tracep->declBus(c+502,"iir", false,-1, 3,0);
    tracep->declBus(c+503,"fcr", false,-1, 1,0);
    tracep->declBus(c+504,"mcr", false,-1, 4,0);
    tracep->declBus(c+505,"lcr", false,-1, 7,0);
    tracep->declBus(c+506,"msr", false,-1, 7,0);
    tracep->declBus(c+507,"dl", false,-1, 15,0);
    tracep->declBus(c+508,"scratch", false,-1, 7,0);
    tracep->declBit(c+509,"start_dlc", false,-1);
    tracep->declBit(c+510,"lsr_mask_d", false,-1);
    tracep->declBit(c+511,"msi_reset", false,-1);
    tracep->declBus(c+512,"dlc", false,-1, 15,0);
    tracep->declBus(c+513,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+514,"rx_reset", false,-1);
    tracep->declBit(c+515,"tx_reset", false,-1);
    tracep->declBit(c+516,"dlab", false,-1);
    tracep->declBit(c+1325,"cts_pad_i", false,-1);
    tracep->declBit(c+1319,"dsr_pad_i", false,-1);
    tracep->declBit(c+1319,"ri_pad_i", false,-1);
    tracep->declBit(c+1319,"dcd_pad_i", false,-1);
    tracep->declBit(c+517,"loopback", false,-1);
    tracep->declBit(c+1319,"cts", false,-1);
    tracep->declBit(c+1325,"dsr", false,-1);
    tracep->declBit(c+1325,"ri", false,-1);
    tracep->declBit(c+1325,"dcd", false,-1);
    tracep->declBit(c+518,"cts_c", false,-1);
    tracep->declBit(c+519,"dsr_c", false,-1);
    tracep->declBit(c+520,"ri_c", false,-1);
    tracep->declBit(c+521,"dcd_c", false,-1);
    tracep->declBus(c+522,"lsr", false,-1, 7,0);
    tracep->declBit(c+523,"lsr0", false,-1);
    tracep->declBit(c+524,"lsr1", false,-1);
    tracep->declBit(c+525,"lsr2", false,-1);
    tracep->declBit(c+526,"lsr3", false,-1);
    tracep->declBit(c+527,"lsr4", false,-1);
    tracep->declBit(c+528,"lsr5", false,-1);
    tracep->declBit(c+529,"lsr6", false,-1);
    tracep->declBit(c+530,"lsr7", false,-1);
    tracep->declBit(c+531,"lsr0r", false,-1);
    tracep->declBit(c+532,"lsr1r", false,-1);
    tracep->declBit(c+533,"lsr2r", false,-1);
    tracep->declBit(c+534,"lsr3r", false,-1);
    tracep->declBit(c+535,"lsr4r", false,-1);
    tracep->declBit(c+536,"lsr5r", false,-1);
    tracep->declBit(c+537,"lsr6r", false,-1);
    tracep->declBit(c+538,"lsr7r", false,-1);
    tracep->declBit(c+6,"lsr_mask", false,-1);
    tracep->declBit(c+539,"rls_int", false,-1);
    tracep->declBit(c+540,"rda_int", false,-1);
    tracep->declBit(c+541,"ti_int", false,-1);
    tracep->declBit(c+542,"thre_int", false,-1);
    tracep->declBit(c+543,"ms_int", false,-1);
    tracep->declBit(c+544,"tf_push", false,-1);
    tracep->declBit(c+545,"rf_pop", false,-1);
    tracep->declBus(c+1308,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+546,"rf_error_bit", false,-1);
    tracep->declBit(c+524,"rf_overrun", false,-1);
    tracep->declBit(c+547,"rf_push_pulse", false,-1);
    tracep->declBus(c+548,"rf_count", false,-1, 4,0);
    tracep->declBus(c+549,"tf_count", false,-1, 4,0);
    tracep->declBus(c+550,"tstate", false,-1, 2,0);
    tracep->declBus(c+551,"rstate", false,-1, 3,0);
    tracep->declBus(c+552,"counter_t", false,-1, 9,0);
    tracep->declBit(c+553,"thre_set_en", false,-1);
    tracep->declBus(c+554,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+555,"block_value", false,-1, 7,0);
    tracep->declBit(c+556,"serial_out", false,-1);
    tracep->declBit(c+557,"serial_in", false,-1);
    tracep->declBit(c+7,"lsr_mask_condition", false,-1);
    tracep->declBit(c+8,"iir_read", false,-1);
    tracep->declBit(c+9,"msr_read", false,-1);
    tracep->declBit(c+10,"fifo_read", false,-1);
    tracep->declBit(c+11,"fifo_write", false,-1);
    tracep->declBus(c+558,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+559,"lsr0_d", false,-1);
    tracep->declBit(c+560,"lsr1_d", false,-1);
    tracep->declBit(c+561,"lsr2_d", false,-1);
    tracep->declBit(c+562,"lsr3_d", false,-1);
    tracep->declBit(c+563,"lsr4_d", false,-1);
    tracep->declBit(c+564,"lsr5_d", false,-1);
    tracep->declBit(c+565,"lsr6_d", false,-1);
    tracep->declBit(c+566,"lsr7_d", false,-1);
    tracep->declBit(c+567,"rls_int_d", false,-1);
    tracep->declBit(c+568,"thre_int_d", false,-1);
    tracep->declBit(c+569,"ms_int_d", false,-1);
    tracep->declBit(c+570,"ti_int_d", false,-1);
    tracep->declBit(c+571,"rda_int_d", false,-1);
    tracep->declBit(c+572,"rls_int_rise", false,-1);
    tracep->declBit(c+573,"thre_int_rise", false,-1);
    tracep->declBit(c+574,"ms_int_rise", false,-1);
    tracep->declBit(c+575,"ti_int_rise", false,-1);
    tracep->declBit(c+576,"rda_int_rise", false,-1);
    tracep->declBit(c+577,"rls_int_pnd", false,-1);
    tracep->declBit(c+578,"rda_int_pnd", false,-1);
    tracep->declBit(c+579,"thre_int_pnd", false,-1);
    tracep->declBit(c+580,"ms_int_pnd", false,-1);
    tracep->declBit(c+581,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1422,"Tp", false,-1, 31,0);
    tracep->declBus(c+1422,"width", false,-1, 31,0);
    tracep->declBus(c+1352,"init_value", false,-1, 0,0);
    tracep->declBit(c+1259,"rst_i", false,-1);
    tracep->declBit(c+1258,"clk_i", false,-1);
    tracep->declBit(c+1319,"stage1_rst_i", false,-1);
    tracep->declBit(c+1325,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1278,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+500,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+582,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1259,"wb_rst_i", false,-1);
    tracep->declBus(c+505,"lcr", false,-1, 7,0);
    tracep->declBit(c+545,"rf_pop", false,-1);
    tracep->declBit(c+557,"srx_pad_i", false,-1);
    tracep->declBit(c+499,"enable", false,-1);
    tracep->declBit(c+514,"rx_reset", false,-1);
    tracep->declBit(c+6,"lsr_mask", false,-1);
    tracep->declBus(c+552,"counter_t", false,-1, 9,0);
    tracep->declBus(c+548,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1308,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+524,"rf_overrun", false,-1);
    tracep->declBit(c+546,"rf_error_bit", false,-1);
    tracep->declBus(c+551,"rstate", false,-1, 3,0);
    tracep->declBit(c+547,"rf_push_pulse", false,-1);
    tracep->declBus(c+583,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+584,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+585,"rshift", false,-1, 7,0);
    tracep->declBit(c+586,"rparity", false,-1);
    tracep->declBit(c+587,"rparity_error", false,-1);
    tracep->declBit(c+588,"rframing_error", false,-1);
    tracep->declBit(c+589,"rbit_in", false,-1);
    tracep->declBit(c+590,"rparity_xor", false,-1);
    tracep->declBus(c+591,"counter_b", false,-1, 7,0);
    tracep->declBit(c+592,"rf_push_q", false,-1);
    tracep->declBus(c+593,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+594,"rf_push", false,-1);
    tracep->declBit(c+595,"break_error", false,-1);
    tracep->declBit(c+596,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+597,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+598,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+599,"rcounter16_minus_1", false,-1, 3,0);
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
    tracep->declBus(c+600,"toc_value", false,-1, 9,0);
    tracep->declBus(c+601,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1424,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1425,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1395,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1353,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1259,"wb_rst_i", false,-1);
    tracep->declBit(c+547,"push", false,-1);
    tracep->declBit(c+545,"pop", false,-1);
    tracep->declBus(c+593,"data_in", false,-1, 10,0);
    tracep->declBit(c+514,"fifo_reset", false,-1);
    tracep->declBit(c+6,"reset_status", false,-1);
    tracep->declBus(c+1308,"data_out", false,-1, 10,0);
    tracep->declBit(c+524,"overrun", false,-1);
    tracep->declBus(c+548,"count", false,-1, 4,0);
    tracep->declBit(c+546,"error_bit", false,-1);
    tracep->declBus(c+1309,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+602+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+618,"top", false,-1, 3,0);
    tracep->declBus(c+619,"bottom", false,-1, 3,0);
    tracep->declBus(c+620,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+621,"word0", false,-1, 2,0);
    tracep->declBus(c+622,"word1", false,-1, 2,0);
    tracep->declBus(c+623,"word2", false,-1, 2,0);
    tracep->declBus(c+624,"word3", false,-1, 2,0);
    tracep->declBus(c+625,"word4", false,-1, 2,0);
    tracep->declBus(c+626,"word5", false,-1, 2,0);
    tracep->declBus(c+627,"word6", false,-1, 2,0);
    tracep->declBus(c+628,"word7", false,-1, 2,0);
    tracep->declBus(c+629,"word8", false,-1, 2,0);
    tracep->declBus(c+630,"word9", false,-1, 2,0);
    tracep->declBus(c+631,"word10", false,-1, 2,0);
    tracep->declBus(c+632,"word11", false,-1, 2,0);
    tracep->declBus(c+633,"word12", false,-1, 2,0);
    tracep->declBus(c+634,"word13", false,-1, 2,0);
    tracep->declBus(c+635,"word14", false,-1, 2,0);
    tracep->declBus(c+636,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1395,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1396,"data_width", false,-1, 31,0);
    tracep->declBus(c+1425,"depth", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+547,"we", false,-1);
    tracep->declBus(c+618,"a", false,-1, 3,0);
    tracep->declBus(c+619,"dpra", false,-1, 3,0);
    tracep->declBus(c+637,"di", false,-1, 7,0);
    tracep->declBus(c+1309,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+363+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1259,"wb_rst_i", false,-1);
    tracep->declBus(c+505,"lcr", false,-1, 7,0);
    tracep->declBit(c+544,"tf_push", false,-1);
    tracep->declBus(c+1112,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+499,"enable", false,-1);
    tracep->declBit(c+515,"tx_reset", false,-1);
    tracep->declBit(c+6,"lsr_mask", false,-1);
    tracep->declBit(c+556,"stx_pad_o", false,-1);
    tracep->declBus(c+550,"tstate", false,-1, 2,0);
    tracep->declBus(c+549,"tf_count", false,-1, 4,0);
    tracep->declBus(c+638,"counter", false,-1, 4,0);
    tracep->declBus(c+639,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+640,"shift_out", false,-1, 6,0);
    tracep->declBit(c+641,"stx_o_tmp", false,-1);
    tracep->declBit(c+642,"parity_xor", false,-1);
    tracep->declBit(c+643,"tf_pop", false,-1);
    tracep->declBit(c+644,"bit_out", false,-1);
    tracep->declBus(c+1112,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1310,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+645,"tf_overrun", false,-1);
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
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+1259,"wb_rst_i", false,-1);
    tracep->declBit(c+544,"push", false,-1);
    tracep->declBit(c+643,"pop", false,-1);
    tracep->declBus(c+1112,"data_in", false,-1, 7,0);
    tracep->declBit(c+515,"fifo_reset", false,-1);
    tracep->declBit(c+6,"reset_status", false,-1);
    tracep->declBus(c+1310,"data_out", false,-1, 7,0);
    tracep->declBit(c+645,"overrun", false,-1);
    tracep->declBus(c+549,"count", false,-1, 4,0);
    tracep->declBus(c+646,"top", false,-1, 3,0);
    tracep->declBus(c+647,"bottom", false,-1, 3,0);
    tracep->declBus(c+648,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1395,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1396,"data_width", false,-1, 31,0);
    tracep->declBus(c+1425,"depth", false,-1, 31,0);
    tracep->declBit(c+1258,"clk", false,-1);
    tracep->declBit(c+544,"we", false,-1);
    tracep->declBus(c+646,"a", false,-1, 3,0);
    tracep->declBus(c+647,"dpra", false,-1, 3,0);
    tracep->declBus(c+1112,"di", false,-1, 7,0);
    tracep->declBus(c+1310,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+379+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBit(c+916,"auto_in_psel", false,-1);
    tracep->declBit(c+845,"auto_in_penable", false,-1);
    tracep->declBit(c+911,"auto_in_pwrite", false,-1);
    tracep->declBus(c+917,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1318,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+912,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1320,"auto_in_pready", false,-1);
    tracep->declBit(c+1321,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1322,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1272,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1273,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1274,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1275,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1276,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1277,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1258,"clock", false,-1);
    tracep->declBit(c+1259,"reset", false,-1);
    tracep->declBus(c+1098,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+916,"in_psel", false,-1);
    tracep->declBit(c+845,"in_penable", false,-1);
    tracep->declBus(c+1318,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+911,"in_pwrite", false,-1);
    tracep->declBus(c+912,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+913,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1320,"in_pready", false,-1);
    tracep->declBus(c+1322,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1321,"in_pslverr", false,-1);
    tracep->declBus(c+1272,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1273,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1274,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1275,"vga_hsync", false,-1);
    tracep->declBit(c+1276,"vga_vsync", false,-1);
    tracep->declBit(c+1277,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+413,"sck", false,-1);
    tracep->declBit(c+880,"ss", false,-1);
    tracep->declBit(c+864,"mosi", false,-1);
    tracep->declBit(c+760,"miso", false,-1);
    tracep->declBus(c+761,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+762,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+763,"counter", false,-1, 2,0);
    tracep->declBit(c+764,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+413,"sck", false,-1);
    tracep->declBit(c+649,"ss", false,-1);
    tracep->declBit(c+864,"mosi", false,-1);
    tracep->declBit(c+1311,"miso", false,-1);
    tracep->declBit(c+649,"reset", false,-1);
    tracep->declBus(c+754,"state", false,-1, 2,0);
    tracep->declBus(c+755,"counter", false,-1, 7,0);
    tracep->declBus(c+756,"cmd", false,-1, 7,0);
    tracep->declBus(c+757,"addr", false,-1, 23,0);
    tracep->declBus(c+758,"data", false,-1, 31,0);
    tracep->declBit(c+759,"ren", false,-1);
    tracep->declBus(c+1312,"rdata", false,-1, 31,0);
    tracep->declBus(c+1313,"raddr", false,-1, 31,0);
    tracep->declBus(c+1314,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+413,"clock", false,-1);
    tracep->declBit(c+759,"valid", false,-1);
    tracep->declBus(c+756,"cmd", false,-1, 7,0);
    tracep->declBus(c+1313,"addr", false,-1, 31,0);
    tracep->declBus(c+1312,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1159,"sck", false,-1);
    tracep->declBit(c+1160,"ce_n", false,-1);
    tracep->declBus(c+1281,"dio", false,-1, 3,0);
    tracep->declBit(c+1160,"reset", false,-1);
    tracep->declBus(c+12,"state", false,-1, 3,0);
    tracep->declBus(c+13,"counter", false,-1, 7,0);
    tracep->declBus(c+898,"cmd", false,-1, 7,0);
    tracep->declBus(c+899,"addr", false,-1, 23,0);
    tracep->declBus(c+14,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+900+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1315,"qpi_flag", false,-1);
    tracep->declBus(c+15,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1316,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+904,"ren", false,-1);
    tracep->declBit(c+905,"wen", false,-1);
    tracep->declBus(c+906,"len", false,-1, 7,0);
    tracep->declBus(c+1317,"rdata", false,-1, 31,0);
    tracep->declBus(c+907,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1159,"clock", false,-1);
    tracep->declBit(c+904,"ren", false,-1);
    tracep->declBit(c+905,"wen", false,-1);
    tracep->declBus(c+898,"cmd", false,-1, 7,0);
    tracep->declBus(c+907,"saddr", false,-1, 31,0);
    tracep->declBus(c+1317,"rdata", false,-1, 31,0);
    tracep->declBus(c+908,"wdata", false,-1, 31,0);
    tracep->declBus(c+906,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1282,"clk", false,-1);
    tracep->declBit(c+415,"cke", false,-1);
    tracep->declBit(c+865,"cs", false,-1);
    tracep->declBit(c+866,"ras", false,-1);
    tracep->declBit(c+867,"cas", false,-1);
    tracep->declBit(c+868,"we", false,-1);
    tracep->declBus(c+869,"a", false,-1, 12,0);
    tracep->declBus(c+881,"ba", false,-1, 1,0);
    tracep->declBus(c+882,"dqm", false,-1, 1,0);
    tracep->declBus(c+896,"dq", false,-1, 15,0);
    tracep->declBit(c+883,"reset", false,-1);
    tracep->declBus(c+664,"state", false,-1, 2,0);
    tracep->declBus(c+665,"counter", false,-1, 7,0);
    tracep->declBus(c+666,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1426,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+667,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+668,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+884,"nop", false,-1);
    tracep->declBit(c+885,"active", false,-1);
    tracep->declBit(c+886,"precharge", false,-1);
    tracep->declBit(c+887,"read", false,-1);
    tracep->declBit(c+888,"write", false,-1);
    tracep->declBit(c+889,"burstterm", false,-1);
    tracep->declBit(c+890,"autorefresh", false,-1);
    tracep->declBit(c+891,"mode", false,-1);
    tracep->declBus(c+669,"test", false,-1, 15,0);
    tracep->declBit(c+670,"write_burst_mode", false,-1);
    tracep->declBus(c+671,"op_mode", false,-1, 1,0);
    tracep->declBus(c+672,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+673,"burst_type", false,-1);
    tracep->declBus(c+674,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+675,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+676,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+677,"bank", false,-1, 1,0);
    tracep->declBus(c+678,"row", false,-1, 12,0);
    tracep->declBus(c+679,"column", false,-1, 8,0);
    tracep->declBus(c+680,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+681,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1282,"clk", false,-1);
    tracep->declBit(c+415,"cke", false,-1);
    tracep->declBit(c+865,"cs", false,-1);
    tracep->declBit(c+866,"ras", false,-1);
    tracep->declBit(c+867,"cas", false,-1);
    tracep->declBit(c+868,"we", false,-1);
    tracep->declBus(c+869,"a", false,-1, 12,0);
    tracep->declBus(c+881,"ba", false,-1, 1,0);
    tracep->declBus(c+892,"dqm", false,-1, 1,0);
    tracep->declBus(c+897,"dq", false,-1, 15,0);
    tracep->declBit(c+883,"reset", false,-1);
    tracep->declBus(c+682,"state", false,-1, 2,0);
    tracep->declBus(c+683,"counter", false,-1, 7,0);
    tracep->declBus(c+684,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1427,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+685,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+686,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+884,"nop", false,-1);
    tracep->declBit(c+885,"active", false,-1);
    tracep->declBit(c+886,"precharge", false,-1);
    tracep->declBit(c+887,"read", false,-1);
    tracep->declBit(c+888,"write", false,-1);
    tracep->declBit(c+889,"burstterm", false,-1);
    tracep->declBit(c+890,"autorefresh", false,-1);
    tracep->declBit(c+891,"mode", false,-1);
    tracep->declBus(c+687,"test", false,-1, 15,0);
    tracep->declBit(c+688,"write_burst_mode", false,-1);
    tracep->declBus(c+689,"op_mode", false,-1, 1,0);
    tracep->declBus(c+690,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+691,"burst_type", false,-1);
    tracep->declBus(c+692,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+693,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+694,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+695,"bank", false,-1, 1,0);
    tracep->declBus(c+696,"row", false,-1, 12,0);
    tracep->declBus(c+697,"column", false,-1, 8,0);
    tracep->declBus(c+698,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+699,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1282,"clk", false,-1);
    tracep->declBit(c+415,"cke", false,-1);
    tracep->declBit(c+865,"cs", false,-1);
    tracep->declBit(c+866,"ras", false,-1);
    tracep->declBit(c+867,"cas", false,-1);
    tracep->declBit(c+868,"we", false,-1);
    tracep->declBus(c+869,"a", false,-1, 12,0);
    tracep->declBus(c+881,"ba", false,-1, 1,0);
    tracep->declBus(c+893,"dqm", false,-1, 1,0);
    tracep->declBus(c+896,"dq", false,-1, 15,0);
    tracep->declBit(c+883,"reset", false,-1);
    tracep->declBus(c+700,"state", false,-1, 2,0);
    tracep->declBus(c+701,"counter", false,-1, 7,0);
    tracep->declBus(c+702,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1428,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+703,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+704,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+884,"nop", false,-1);
    tracep->declBit(c+885,"active", false,-1);
    tracep->declBit(c+886,"precharge", false,-1);
    tracep->declBit(c+887,"read", false,-1);
    tracep->declBit(c+888,"write", false,-1);
    tracep->declBit(c+889,"burstterm", false,-1);
    tracep->declBit(c+890,"autorefresh", false,-1);
    tracep->declBit(c+891,"mode", false,-1);
    tracep->declBus(c+705,"test", false,-1, 15,0);
    tracep->declBit(c+706,"write_burst_mode", false,-1);
    tracep->declBus(c+707,"op_mode", false,-1, 1,0);
    tracep->declBus(c+708,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+709,"burst_type", false,-1);
    tracep->declBus(c+710,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+711,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+712,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+713,"bank", false,-1, 1,0);
    tracep->declBus(c+714,"row", false,-1, 12,0);
    tracep->declBus(c+715,"column", false,-1, 8,0);
    tracep->declBus(c+716,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+717,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1282,"clk", false,-1);
    tracep->declBit(c+415,"cke", false,-1);
    tracep->declBit(c+865,"cs", false,-1);
    tracep->declBit(c+866,"ras", false,-1);
    tracep->declBit(c+867,"cas", false,-1);
    tracep->declBit(c+868,"we", false,-1);
    tracep->declBus(c+869,"a", false,-1, 12,0);
    tracep->declBus(c+881,"ba", false,-1, 1,0);
    tracep->declBus(c+894,"dqm", false,-1, 1,0);
    tracep->declBus(c+897,"dq", false,-1, 15,0);
    tracep->declBit(c+883,"reset", false,-1);
    tracep->declBus(c+718,"state", false,-1, 2,0);
    tracep->declBus(c+719,"counter", false,-1, 7,0);
    tracep->declBus(c+720,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1429,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+721,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+722,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+884,"nop", false,-1);
    tracep->declBit(c+885,"active", false,-1);
    tracep->declBit(c+886,"precharge", false,-1);
    tracep->declBit(c+887,"read", false,-1);
    tracep->declBit(c+888,"write", false,-1);
    tracep->declBit(c+889,"burstterm", false,-1);
    tracep->declBit(c+890,"autorefresh", false,-1);
    tracep->declBit(c+891,"mode", false,-1);
    tracep->declBus(c+723,"test", false,-1, 15,0);
    tracep->declBit(c+724,"write_burst_mode", false,-1);
    tracep->declBus(c+725,"op_mode", false,-1, 1,0);
    tracep->declBus(c+726,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+727,"burst_type", false,-1);
    tracep->declBus(c+728,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+729,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+730,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+731,"bank", false,-1, 1,0);
    tracep->declBus(c+732,"row", false,-1, 12,0);
    tracep->declBus(c+733,"column", false,-1, 8,0);
    tracep->declBus(c+734,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+735,"rdqm_reg", false,-1, 1,0);
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
    bufp->fullIData(oldp+16,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+26,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+27,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+28,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullQData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+63,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+66,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+67,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+76,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+122,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+132,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+136,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+144,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+148,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+152,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+156,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+164,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+172,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+176,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+180,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+184,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+192,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+196,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+200,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+204,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+216,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+220,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+228,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+232,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+236,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+240,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+244,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+252,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+256,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct7),7);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__shamt),5);
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__res),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mepc),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mstatus),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mcause),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mtvec),32);
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen));
    bufp->fullIData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd),32);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_addr),5);
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_wen));
    bufp->fullIData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mepc),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mstatus),32);
    bufp->fullIData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mcause),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mtvec),32);
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_en));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_en));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_en));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_en));
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata_reg),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullQData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullIData(oldp+395,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0)
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
    bufp->fullIData(oldp+396,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+397,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+398,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+399,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+400,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+401,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+402,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+403,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3))))));
    bufp->fullCData(oldp+404,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullCData(oldp+405,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullBit(oldp+406,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
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
    bufp->fullCData(oldp+407,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullCData(oldp+408,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullBit(oldp+409,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
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
    bufp->fullCData(oldp+410,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->fullCData(oldp+411,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->fullBit(oldp+412,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullSData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+433,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+434,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+437,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+438,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+443,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+447,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullSData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+476,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+477,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+478,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+479,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+480,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+481,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+482,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+486,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+488,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+489,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+491,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+495,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+496,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+498,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+516,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+517,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+518,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+519,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+520,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+521,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+522,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+525,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+526,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+527,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+546,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+553,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+572,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+573,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+574,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+575,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+576,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+595,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+596,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+597,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+598,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+599,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+601,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+620,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+637,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+648,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+652,((0xe0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer))));
    bufp->fullBit(oldp+653,((0xf0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer))));
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+666,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+667,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+668,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+669,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+670,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+671,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+672,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+673,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+674,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+676,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+678,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+679,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+684,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+685,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+686,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+687,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+688,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+689,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+690,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+691,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+692,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+694,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+696,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+697,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+702,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+703,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+704,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+705,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+706,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+707,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+708,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+709,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+710,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__read_cnt),8);
    bufp->fullCData(oldp+712,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+714,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+715,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+720,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+721,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+722,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+723,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+724,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+725,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+726,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+727,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+728,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__read_cnt),8);
    bufp->fullCData(oldp+730,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+732,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg),2);
    bufp->fullIData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullIData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+758,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+759,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+765,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+767,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullIData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op),7);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3),3);
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_read));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_write));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+786,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullIData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+789,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
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
    bufp->fullCData(oldp+790,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+791,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf0b4f3eb__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf2be8e81__0))
                                         ? 1U : 2U))),3);
    bufp->fullIData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_done));
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+810,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullIData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+812,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+813,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+815,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
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
    bufp->fullBit(oldp+816,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+818,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullCData(oldp+820,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+821,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+822,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+823,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+824,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+825,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+826,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+827,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+828,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+829,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+831,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+832,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_start));
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullBit(oldp+844,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+845,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+846,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+847,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+848,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+849,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                    | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+850,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullCData(oldp+851,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
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
    bufp->fullBit(oldp+852,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                    | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+853,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+854,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                       | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+855,(((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write))) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)))));
    bufp->fullCData(oldp+856,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+857,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullBit(oldp+858,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))))));
    bufp->fullCData(oldp+859,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+860,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+861,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),4);
    bufp->fullCData(oldp+862,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),4);
    bufp->fullBit(oldp+863,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+865,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+866,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+867,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+868,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),3);
    bufp->fullBit(oldp+872,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+881,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+886,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+895,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+896,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+897,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+907,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+908,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+915,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+916,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+917,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+918,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+919,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+920,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+924,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+925,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+948,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+949,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h68975acc__0))));
    bufp->fullCData(oldp+950,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h5a8d045f__0))),4);
    bufp->fullIData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb734b8d7__0[0U]),32);
    bufp->fullCData(oldp+952,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3a4e4339__0)),8);
    bufp->fullCData(oldp+953,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h30176aa5__0))),3);
    bufp->fullCData(oldp+954,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hbbf346b8__0))),2);
    bufp->fullBit(oldp+955,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h94ebbd5e__0))));
    bufp->fullIData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf41bdd9a__0[0U]),32);
    bufp->fullCData(oldp+957,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h109b6ac9__0))),4);
    bufp->fullBit(oldp+958,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                       << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                                  << 1U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))))));
    bufp->fullBit(oldp+959,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf81145fc__0))));
    bufp->fullBit(oldp+960,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0))));
    bufp->fullCData(oldp+961,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdecce5eb__0))),4);
    bufp->fullIData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[0U]),32);
    bufp->fullCData(oldp+963,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h25d17c3d__0)),8);
    bufp->fullCData(oldp+964,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h167d420f__0))),3);
    bufp->fullCData(oldp+965,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h56bb0e93__0))),2);
    bufp->fullBit(oldp+966,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0))));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+968,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+970,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+972,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+988,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+990,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+991,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+992,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+993,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+994,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+997,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+998,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+999,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1000,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1005,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1007,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1008,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WREADY));
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb734b8d7__0[2U]),32);
    bufp->fullIData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf41bdd9a__0[2U]),32);
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[2U]),32);
    bufp->fullCData(oldp+1019,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1020,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1021,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1022,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1023,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1024,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1025,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h167d420f__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1026,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1027,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1028,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h68975acc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1029,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1030,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1031,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1032,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1033,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))) 
                                    >> 2U))));
    bufp->fullIData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata),32);
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullBit(oldp+1053,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1054,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id));
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb734b8d7__0[1U]),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf41bdd9a__0[1U]),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he372b177__0[1U]),32);
    bufp->fullCData(oldp+1059,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1060,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1061,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1062,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1063,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1064,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1065,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h167d420f__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1066,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1067,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1068,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1069,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1070,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1071,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1072,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))) 
                                    >> 1U))));
    bufp->fullIData(oldp+1073,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1074,((0xfcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),8);
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullIData(oldp+1077,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1085,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1086,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1087,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1088,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1089,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1090,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1095,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1096,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1097,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),3);
    bufp->fullIData(oldp+1098,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+1105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1106,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1108,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1110,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1113,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1115,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1116,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1117,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1118,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1119,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1120,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1123,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1124,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1125,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1126,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1127,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1128,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1129,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1130,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1131,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1132,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1133,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1134,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1135,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1136,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1137,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1138,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1140,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1141,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1142,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1143,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1144,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1145,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1169,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1198,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1199,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1221,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1222,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1223,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1224,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1225,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1226,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1227,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1228,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1229,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1230,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1231,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1232,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1233,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1234,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1235,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1236,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1237,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1238,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1239,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1240,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1241,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1242,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1243,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1244,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1245,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1246,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1247,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1248,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1249,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1250,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1251,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1252,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullBit(oldp+1258,(vlSelf->clock));
    bufp->fullBit(oldp+1259,(vlSelf->reset));
    bufp->fullSData(oldp+1260,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1261,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1262,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1263,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1264,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1265,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1266,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1267,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1268,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1269,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1270,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1271,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1272,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1273,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1274,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1275,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1276,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1277,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1278,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1279,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1280,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1282,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1283,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1284,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1285,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullIData(oldp+1286,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1287,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                << 1U)))))),2);
    bufp->fullIData(oldp+1288,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                  : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+1289,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1290,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1291,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1292,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                            << 2U) : 
                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id)
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                             << 1U)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)))))));
    bufp->fullBit(oldp+1293,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7f1d654a__0) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullIData(oldp+1294,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullBit(oldp+1295,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_DONE));
    bufp->fullIData(oldp+1297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
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
    bufp->fullIData(oldp+1298,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullBit(oldp+1300,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_id) 
                                        | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullCData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->fullIData(oldp+1302,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
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
