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
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBus(c+1578,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1579,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1580,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1581,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1582,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1583,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1584,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1585,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1586,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1587,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1588,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1589,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1590,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1591,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1592,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1593,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1594,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1595,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1596,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1597,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBus(c+1578,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1579,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1580,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1581,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1582,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1583,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1584,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1585,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1586,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1587,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1588,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1589,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1590,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1591,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1592,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1593,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1594,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1595,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1596,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1597,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+513,"spi_sck", false,-1);
    tracep->declBus(c+514,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+942,"spi_mosi", false,-1);
    tracep->declBit(c+1598,"spi_miso", false,-1);
    tracep->declBit(c+1596,"uart_rx", false,-1);
    tracep->declBit(c+1597,"uart_tx", false,-1);
    tracep->declBit(c+1572,"psram_sck", false,-1);
    tracep->declBit(c+1573,"psram_ce_n", false,-1);
    tracep->declBus(c+1599,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1600,"sdram_clk", false,-1);
    tracep->declBit(c+515,"sdram_cke", false,-1);
    tracep->declBit(c+943,"sdram_cs", false,-1);
    tracep->declBit(c+944,"sdram_ras", false,-1);
    tracep->declBit(c+945,"sdram_cas", false,-1);
    tracep->declBit(c+946,"sdram_we", false,-1);
    tracep->declBus(c+947,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+948,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+516,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+972,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1578,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1579,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1580,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1581,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1586,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1587,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1588,"ps2_clk", false,-1);
    tracep->declBit(c+1589,"ps2_data", false,-1);
    tracep->declBus(c+1590,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1591,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1592,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1593,"vga_hsync", false,-1);
    tracep->declBit(c+1594,"vga_vsync", false,-1);
    tracep->declBit(c+1595,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBus(c+1357,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1358,"in_psel", false,-1);
    tracep->declBit(c+918,"in_penable", false,-1);
    tracep->declBus(c+1659,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1359,"in_pwrite", false,-1);
    tracep->declBus(c+1360,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1361,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+517,"in_pready", false,-1);
    tracep->declBus(c+518,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+519,"in_pslverr", false,-1);
    tracep->declBus(c+1369,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1375,"out_psel", false,-1);
    tracep->declBit(c+1376,"out_penable", false,-1);
    tracep->declBus(c+1377,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1378,"out_pwrite", false,-1);
    tracep->declBus(c+1379,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1381,"out_pready", false,-1);
    tracep->declBus(c+1601,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1382,"out_pslverr", false,-1);
    tracep->declBus(c+1660,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1661,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1662,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1663,"DELAY", false,-1, 1,0);
    tracep->declBus(c+520,"state", false,-1, 1,0);
    tracep->declBus(c+521,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+522,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+523,"pslverr_reg", false,-1);
    tracep->declBus(c+1664,"r", false,-1, 10,0);
    tracep->declBus(c+1662,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1375,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1376,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1378,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1369,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1381,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1382,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1601,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1383,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1384,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1378,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1385,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1377,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+524,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1665,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1666,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1386,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1387,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1378,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1377,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+525,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1667,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+526,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1388,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1389,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1378,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1377,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+527,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1668,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+528,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1390,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1391,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1378,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1369,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1602,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1669,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+919,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1392,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1393,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1378,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1377,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1394,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1669,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1395,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1396,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1397,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1378,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1385,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1377,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1669,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1398,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1399,"sel_0", false,-1);
    tracep->declBit(c+1400,"sel_1", false,-1);
    tracep->declBit(c+1401,"sel_2", false,-1);
    tracep->declBit(c+1402,"sel_3", false,-1);
    tracep->declBit(c+1403,"sel_4", false,-1);
    tracep->declBit(c+1404,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1362,"auto_in_awready", false,-1);
    tracep->declBit(c+1217,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1362,"auto_in_wready", false,-1);
    tracep->declBit(c+1363,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1221,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1222,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1405,"auto_in_bready", false,-1);
    tracep->declBit(c+1406,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1604,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1223,"auto_in_arready", false,-1);
    tracep->declBit(c+1224,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1225,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1226,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1407,"auto_in_rready", false,-1);
    tracep->declBit(c+1408,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1605,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1604,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1358,"auto_out_psel", false,-1);
    tracep->declBit(c+918,"auto_out_penable", false,-1);
    tracep->declBit(c+1359,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1357,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1360,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1361,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+517,"auto_out_pready", false,-1);
    tracep->declBit(c+519,"auto_out_pslverr", false,-1);
    tracep->declBus(c+518,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+918,"nodeOut_penable", false,-1);
    tracep->declBus(c+920,"state", false,-1, 1,0);
    tracep->declBit(c+1223,"accept_read", false,-1);
    tracep->declBit(c+1362,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1359,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+529,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1604,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1408,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1406,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1324,"in_arready", false,-1);
    tracep->declBit(c+1228,"in_arvalid", false,-1);
    tracep->declBus(c+986,"in_arid", false,-1, 3,0);
    tracep->declBus(c+987,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+989,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+990,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1409,"in_rready", false,-1);
    tracep->declBit(c+530,"in_rvalid", false,-1);
    tracep->declBus(c+531,"in_rid", false,-1, 3,0);
    tracep->declBus(c+532,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+533,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+534,"in_rlast", false,-1);
    tracep->declBit(c+1325,"in_awready", false,-1);
    tracep->declBit(c+1229,"in_awvalid", false,-1);
    tracep->declBus(c+991,"in_awid", false,-1, 3,0);
    tracep->declBus(c+992,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+993,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+994,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+995,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1326,"in_wready", false,-1);
    tracep->declBit(c+1606,"in_wvalid", false,-1);
    tracep->declBus(c+996,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+997,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+998,"in_wlast", false,-1);
    tracep->declBit(c+1410,"in_bready", false,-1);
    tracep->declBit(c+535,"in_bvalid", false,-1);
    tracep->declBus(c+536,"in_bid", false,-1, 3,0);
    tracep->declBus(c+537,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1327,"out_arready", false,-1);
    tracep->declBit(c+1328,"out_arvalid", false,-1);
    tracep->declBus(c+1329,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1330,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1331,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1206,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1332,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1411,"out_rready", false,-1);
    tracep->declBit(c+538,"out_rvalid", false,-1);
    tracep->declBus(c+539,"out_rid", false,-1, 3,0);
    tracep->declBus(c+540,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+541,"out_rlast", false,-1);
    tracep->declBit(c+1333,"out_awready", false,-1);
    tracep->declBit(c+1334,"out_awvalid", false,-1);
    tracep->declBus(c+1335,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1336,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1337,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1207,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1338,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1339,"out_wready", false,-1);
    tracep->declBit(c+1412,"out_wvalid", false,-1);
    tracep->declBus(c+1208,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1209,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1210,"out_wlast", false,-1);
    tracep->declBit(c+1607,"out_bready", false,-1);
    tracep->declBit(c+542,"out_bvalid", false,-1);
    tracep->declBus(c+539,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1660,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1670,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1659,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1671,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1672,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1673,"DELAY", false,-1, 2,0);
    tracep->declBus(c+543,"rstate", false,-1, 2,0);
    tracep->declBus(c+544,"wstate", false,-1, 2,0);
    tracep->declBus(c+545,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+546,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+547,"rvalid_reg", false,-1);
    tracep->declBus(c+548,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+549,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+553,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+554,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+555,"bvalid_reg", false,-1);
    tracep->declBus(c+556,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+557,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1664,"r", false,-1, 10,0);
    tracep->declBus(c+1662,"s", false,-1, 1,0);
    tracep->declBus(c+558,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+1230,"auto_in_awvalid", false,-1);
    tracep->declBus(c+991,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+992,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+993,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+994,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+995,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+1364,"auto_in_wvalid", false,-1);
    tracep->declBus(c+996,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+997,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+998,"auto_in_wlast", false,-1);
    tracep->declBit(c+442,"auto_in_bready", false,-1);
    tracep->declBit(c+1413,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1414,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1608,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+1231,"auto_in_arvalid", false,-1);
    tracep->declBus(c+986,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+989,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+990,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1415,"auto_in_rready", false,-1);
    tracep->declBit(c+1416,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1417,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1609,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1610,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1611,"auto_in_rlast", false,-1);
    tracep->declBit(c+1418,"auto_out_awready", false,-1);
    tracep->declBit(c+1232,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1218,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1233,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1419,"auto_out_wready", false,-1);
    tracep->declBit(c+1365,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1221,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1222,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1234,"auto_out_wlast", false,-1);
    tracep->declBit(c+1420,"auto_out_bready", false,-1);
    tracep->declBit(c+1421,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1414,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1422,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1423,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1424,"auto_out_arready", false,-1);
    tracep->declBit(c+1235,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1225,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1226,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1236,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1415,"auto_out_rready", false,-1);
    tracep->declBit(c+1416,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1417,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1609,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1610,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1612,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1425,"auto_out_rlast", false,-1);
    tracep->declBit(c+1365,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1426,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1237,"len", false,-1, 7,0);
    tracep->declBus(c+1238,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1239,"len_1", false,-1, 7,0);
    tracep->declBus(c+1240,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1232,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1241,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1242,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1234,"w_last", false,-1);
    tracep->declBit(c+1420,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+1231,"io_enq_valid", false,-1);
    tracep->declBus(c+986,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+987,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+988,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+989,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+990,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1427,"io_deq_ready", false,-1);
    tracep->declBit(c+1235,"io_deq_valid", false,-1);
    tracep->declBus(c+1225,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1243,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1244,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1227,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1245,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1235,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1428,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1230,"io_enq_valid", false,-1);
    tracep->declBus(c+991,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+992,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+993,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+994,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+995,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1429,"io_deq_ready", false,-1);
    tracep->declBit(c+1246,"io_deq_valid", false,-1);
    tracep->declBus(c+1218,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1247,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1248,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1220,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1249,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1246,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1430,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1364,"io_enq_valid", false,-1);
    tracep->declBus(c+996,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+997,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+998,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1431,"io_deq_ready", false,-1);
    tracep->declBit(c+1366,"io_deq_valid", false,-1);
    tracep->declBus(c+1221,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1222,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1613,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1366,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1432,"do_enq", false,-1);
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
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1433,"auto_in_awready", false,-1);
    tracep->declBit(c+1250,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1251,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1288,"auto_in_wready", false,-1);
    tracep->declBit(c+1614,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1221,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1222,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1434,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1435,"auto_in_arready", false,-1);
    tracep->declBit(c+1252,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1225,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1253,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1436,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1435,"nodeIn_arready", false,-1);
    tracep->declBit(c+1433,"nodeIn_awready", false,-1);
    tracep->declBit(c+1254,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1437,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1255,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1437,"R0_en", false,-1);
    tracep->declBit(c+1576,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1256,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1438,"W0_en", false,-1);
    tracep->declBit(c+1576,"W0_clk", false,-1);
    tracep->declBus(c+1221,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1222,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1340,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+999,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+991,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+992,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+993,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+994,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+995,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1615,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1321,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+996,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+997,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+998,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1000,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1439,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1440,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1616,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1341,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1001,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+986,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+989,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+990,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1002,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1441,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1442,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1617,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1443,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1325,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1229,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+991,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+992,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+993,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+994,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+995,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1326,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1606,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+996,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+997,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+998,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1410,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+535,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+536,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+537,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1324,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+986,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+989,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+990,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1409,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+530,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+531,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+532,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+533,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+534,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1230,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+991,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+992,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+993,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+994,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+995,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1364,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+996,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+997,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+998,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+442,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1413,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1414,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1608,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1231,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+986,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+989,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+990,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1415,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1416,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1417,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1609,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1610,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1611,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1439,"in_0_bvalid", false,-1);
    tracep->declBit(c+1441,"in_0_rvalid", false,-1);
    tracep->declBit(c+1342,"in_0_wready", false,-1);
    tracep->declBit(c+1343,"in_0_awready", false,-1);
    tracep->declBit(c+1619,"in_0_arready", false,-1);
    tracep->declBit(c+1340,"anonIn_awready", false,-1);
    tracep->declBit(c+1341,"anonIn_arready", false,-1);
    tracep->declBit(c+1003,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1004,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1005,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1006,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1007,"arSel", false,-1, 15,0);
    tracep->declBus(c+1008,"awSel", false,-1, 15,0);
    tracep->declBus(c+1444,"rSel", false,-1, 15,0);
    tracep->declBus(c+1445,"bSel", false,-1, 15,0);
    tracep->declBus(c+74,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+75,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+76,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+77,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+78,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+79,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+80,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+81,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+82,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+83,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+84,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+85,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+86,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+87,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+88,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+89,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+90,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+91,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+92,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+93,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+94,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+95,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+96,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+97,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+98,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+99,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+100,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+101,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+102,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+103,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+104,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+105,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+106,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+107,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+108,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+109,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+110,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+111,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+112,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+113,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+114,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+115,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+116,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+117,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+118,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+119,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+120,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+121,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+122,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+123,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+124,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+125,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+126,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+127,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+128,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+129,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+130,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+131,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+132,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+133,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+134,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+135,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+136,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+137,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1257,"in_0_arvalid", false,-1);
    tracep->declBit(c+138,"latched", false,-1);
    tracep->declBit(c+1258,"in_0_awvalid", false,-1);
    tracep->declBit(c+1259,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1367,"in_0_wvalid", false,-1);
    tracep->declBit(c+139,"idle_2", false,-1);
    tracep->declBit(c+1446,"anyValid", false,-1);
    tracep->declBus(c+1447,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1448,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1449,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1450,"prefixOR_1", false,-1);
    tracep->declBit(c+1451,"winner_2_1", false,-1);
    tracep->declBit(c+141,"state_2_0", false,-1);
    tracep->declBit(c+142,"state_2_1", false,-1);
    tracep->declBit(c+1452,"muxState_2_0", false,-1);
    tracep->declBit(c+1453,"muxState_2_1", false,-1);
    tracep->declBit(c+143,"idle_3", false,-1);
    tracep->declBit(c+1454,"anyValid_1", false,-1);
    tracep->declBus(c+1455,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+144,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1456,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1457,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1458,"winner_3_0", false,-1);
    tracep->declBit(c+1459,"winner_3_1", false,-1);
    tracep->declBit(c+145,"state_3_0", false,-1);
    tracep->declBit(c+146,"state_3_1", false,-1);
    tracep->declBit(c+1460,"muxState_3_0", false,-1);
    tracep->declBit(c+1461,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1259,"io_enq_valid", false,-1);
    tracep->declBus(c+1009,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1344,"io_deq_ready", false,-1);
    tracep->declBit(c+1260,"io_deq_valid", false,-1);
    tracep->declBus(c+1261,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+148,"wrap", false,-1);
    tracep->declBit(c+149,"wrap_1", false,-1);
    tracep->declBit(c+150,"maybe_full", false,-1);
    tracep->declBit(c+151,"ptr_match", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+1260,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1345,"do_deq", false,-1);
    tracep->declBit(c+1346,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+149,"R0_addr", false,-1);
    tracep->declBit(c+1674,"R0_en", false,-1);
    tracep->declBit(c+1576,"R0_clk", false,-1);
    tracep->declBus(c+154,"R0_data", false,-1, 1,0);
    tracep->declBit(c+148,"W0_addr", false,-1);
    tracep->declBit(c+1346,"W0_en", false,-1);
    tracep->declBit(c+1576,"W0_clk", false,-1);
    tracep->declBus(c+1009,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+155+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1462,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1262,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1419,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1365,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1221,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1222,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1234,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1420,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1421,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1414,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1422,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1463,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1263,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1225,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1226,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1415,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1416,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1417,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1609,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1610,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1425,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1433,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1250,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1251,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1288,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1614,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1221,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1222,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1434,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1435,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1252,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1225,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1253,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1436,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1264,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1620,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+157,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1265,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1225,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1266,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1621,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+158,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+159,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1362,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1217,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1362,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1363,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1221,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1222,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1405,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1406,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1604,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1223,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1224,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1225,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1226,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1407,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1408,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1605,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1604,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1421,"in_0_bvalid", false,-1);
    tracep->declBit(c+1416,"in_0_rvalid", false,-1);
    tracep->declBit(c+1464,"in_0_wready", false,-1);
    tracep->declBit(c+1465,"in_0_awready", false,-1);
    tracep->declBit(c+1463,"in_0_arready", false,-1);
    tracep->declBit(c+1462,"anonIn_awready", false,-1);
    tracep->declBit(c+1267,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1268,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1269,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1270,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1271,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1272,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1273,"arSel", false,-1, 15,0);
    tracep->declBus(c+1274,"awSel", false,-1, 15,0);
    tracep->declBus(c+1466,"rSel", false,-1, 15,0);
    tracep->declBus(c+1467,"bSel", false,-1, 15,0);
    tracep->declBit(c+161,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+162,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+163,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+164,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+165,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+166,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+167,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+168,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+169,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+170,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+171,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+172,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+173,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+174,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+175,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+176,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+177,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+178,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+179,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+180,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+181,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+182,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+183,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+184,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+185,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+186,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+187,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+188,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+189,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+190,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+191,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+192,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+193,"latched", false,-1);
    tracep->declBit(c+1275,"in_0_awvalid", false,-1);
    tracep->declBit(c+1276,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1368,"in_0_wvalid", false,-1);
    tracep->declBit(c+194,"idle_3", false,-1);
    tracep->declBit(c+1468,"anyValid", false,-1);
    tracep->declBus(c+1469,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+195,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1470,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1471,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1472,"prefixOR_1", false,-1);
    tracep->declBit(c+1473,"winner_3_1", false,-1);
    tracep->declBit(c+1474,"winner_3_2", false,-1);
    tracep->declBit(c+196,"state_3_0", false,-1);
    tracep->declBit(c+197,"state_3_1", false,-1);
    tracep->declBit(c+198,"state_3_2", false,-1);
    tracep->declBit(c+1475,"muxState_3_0", false,-1);
    tracep->declBit(c+1476,"muxState_3_1", false,-1);
    tracep->declBit(c+1477,"muxState_3_2", false,-1);
    tracep->declBit(c+199,"idle_4", false,-1);
    tracep->declBit(c+1478,"anyValid_1", false,-1);
    tracep->declBus(c+1479,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1480,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1481,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1482,"winner_4_0", false,-1);
    tracep->declBit(c+1483,"winner_4_2", false,-1);
    tracep->declBit(c+201,"state_4_0", false,-1);
    tracep->declBit(c+202,"state_4_2", false,-1);
    tracep->declBit(c+1484,"muxState_4_0", false,-1);
    tracep->declBit(c+1485,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1276,"io_enq_valid", false,-1);
    tracep->declBus(c+1277,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1486,"io_deq_ready", false,-1);
    tracep->declBit(c+1278,"io_deq_valid", false,-1);
    tracep->declBus(c+1279,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1278,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1487,"do_deq", false,-1);
    tracep->declBit(c+1488,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1674,"R0_en", false,-1);
    tracep->declBit(c+1576,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1488,"W0_en", false,-1);
    tracep->declBit(c+1576,"W0_clk", false,-1);
    tracep->declBus(c+1277,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+211+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1418,"auto_in_awready", false,-1);
    tracep->declBit(c+1232,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1233,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1419,"auto_in_wready", false,-1);
    tracep->declBit(c+1365,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1221,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1222,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1234,"auto_in_wlast", false,-1);
    tracep->declBit(c+1420,"auto_in_bready", false,-1);
    tracep->declBit(c+1421,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1414,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1422,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1423,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1424,"auto_in_arready", false,-1);
    tracep->declBit(c+1235,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1225,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1226,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1236,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1415,"auto_in_rready", false,-1);
    tracep->declBit(c+1416,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1417,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1609,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1610,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1612,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1425,"auto_in_rlast", false,-1);
    tracep->declBit(c+1462,"auto_out_awready", false,-1);
    tracep->declBit(c+1262,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1218,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1419,"auto_out_wready", false,-1);
    tracep->declBit(c+1365,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1221,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1222,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1234,"auto_out_wlast", false,-1);
    tracep->declBit(c+1420,"auto_out_bready", false,-1);
    tracep->declBit(c+1421,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1414,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1422,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1463,"auto_out_arready", false,-1);
    tracep->declBit(c+1263,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1225,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1226,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1415,"auto_out_rready", false,-1);
    tracep->declBit(c+1416,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1417,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1609,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1610,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1425,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1289,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1489,"io_deq_ready", false,-1);
    tracep->declBit(c+214,"io_deq_valid", false,-1);
    tracep->declBit(c+215,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+214,"full", false,-1);
    tracep->declBit(c+215,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+216,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1290,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1490,"io_deq_ready", false,-1);
    tracep->declBit(c+218,"io_deq_valid", false,-1);
    tracep->declBit(c+219,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+218,"full", false,-1);
    tracep->declBit(c+219,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+220,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1291,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1491,"io_deq_ready", false,-1);
    tracep->declBit(c+222,"io_deq_valid", false,-1);
    tracep->declBit(c+223,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+222,"full", false,-1);
    tracep->declBit(c+223,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+224,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1292,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1492,"io_deq_ready", false,-1);
    tracep->declBit(c+226,"io_deq_valid", false,-1);
    tracep->declBit(c+227,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+226,"full", false,-1);
    tracep->declBit(c+227,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+228,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1293,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1493,"io_deq_ready", false,-1);
    tracep->declBit(c+230,"io_deq_valid", false,-1);
    tracep->declBit(c+231,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+230,"full", false,-1);
    tracep->declBit(c+231,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+232,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1294,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1494,"io_deq_ready", false,-1);
    tracep->declBit(c+234,"io_deq_valid", false,-1);
    tracep->declBit(c+235,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+234,"full", false,-1);
    tracep->declBit(c+235,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+236,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1295,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1495,"io_deq_ready", false,-1);
    tracep->declBit(c+238,"io_deq_valid", false,-1);
    tracep->declBit(c+239,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+238,"full", false,-1);
    tracep->declBit(c+239,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+240,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1296,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1496,"io_deq_ready", false,-1);
    tracep->declBit(c+242,"io_deq_valid", false,-1);
    tracep->declBit(c+243,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+242,"full", false,-1);
    tracep->declBit(c+243,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+244,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1297,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1497,"io_deq_ready", false,-1);
    tracep->declBit(c+246,"io_deq_valid", false,-1);
    tracep->declBit(c+247,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+246,"full", false,-1);
    tracep->declBit(c+247,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+248,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1298,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1498,"io_deq_ready", false,-1);
    tracep->declBit(c+250,"io_deq_valid", false,-1);
    tracep->declBit(c+251,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+250,"full", false,-1);
    tracep->declBit(c+251,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+252,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1299,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1499,"io_deq_ready", false,-1);
    tracep->declBit(c+254,"io_deq_valid", false,-1);
    tracep->declBit(c+255,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+254,"full", false,-1);
    tracep->declBit(c+255,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+256,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1300,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1500,"io_deq_ready", false,-1);
    tracep->declBit(c+258,"io_deq_valid", false,-1);
    tracep->declBit(c+259,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+258,"full", false,-1);
    tracep->declBit(c+259,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+260,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+1301,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1501,"io_deq_ready", false,-1);
    tracep->declBit(c+262,"io_deq_valid", false,-1);
    tracep->declBit(c+263,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+262,"full", false,-1);
    tracep->declBit(c+263,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+264,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1302,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1502,"io_deq_ready", false,-1);
    tracep->declBit(c+266,"io_deq_valid", false,-1);
    tracep->declBit(c+267,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+266,"full", false,-1);
    tracep->declBit(c+267,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+268,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1303,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1503,"io_deq_ready", false,-1);
    tracep->declBit(c+270,"io_deq_valid", false,-1);
    tracep->declBit(c+271,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+270,"full", false,-1);
    tracep->declBit(c+271,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+272,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1304,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1504,"io_deq_ready", false,-1);
    tracep->declBit(c+274,"io_deq_valid", false,-1);
    tracep->declBit(c+275,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+274,"full", false,-1);
    tracep->declBit(c+275,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+276,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1305,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1505,"io_deq_ready", false,-1);
    tracep->declBit(c+278,"io_deq_valid", false,-1);
    tracep->declBit(c+279,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+278,"full", false,-1);
    tracep->declBit(c+279,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+280,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1306,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1506,"io_deq_ready", false,-1);
    tracep->declBit(c+282,"io_deq_valid", false,-1);
    tracep->declBit(c+283,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+282,"full", false,-1);
    tracep->declBit(c+283,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+284,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1307,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1507,"io_deq_ready", false,-1);
    tracep->declBit(c+286,"io_deq_valid", false,-1);
    tracep->declBit(c+287,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+286,"full", false,-1);
    tracep->declBit(c+287,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+288,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1308,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1508,"io_deq_ready", false,-1);
    tracep->declBit(c+290,"io_deq_valid", false,-1);
    tracep->declBit(c+291,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+291,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+292,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1309,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1509,"io_deq_ready", false,-1);
    tracep->declBit(c+294,"io_deq_valid", false,-1);
    tracep->declBit(c+295,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+294,"full", false,-1);
    tracep->declBit(c+295,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+296,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1310,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1510,"io_deq_ready", false,-1);
    tracep->declBit(c+298,"io_deq_valid", false,-1);
    tracep->declBit(c+299,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+298,"full", false,-1);
    tracep->declBit(c+299,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+300,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1311,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1511,"io_deq_ready", false,-1);
    tracep->declBit(c+302,"io_deq_valid", false,-1);
    tracep->declBit(c+303,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+302,"full", false,-1);
    tracep->declBit(c+303,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+304,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1312,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1512,"io_deq_ready", false,-1);
    tracep->declBit(c+306,"io_deq_valid", false,-1);
    tracep->declBit(c+307,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+306,"full", false,-1);
    tracep->declBit(c+307,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+308,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1313,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1513,"io_deq_ready", false,-1);
    tracep->declBit(c+310,"io_deq_valid", false,-1);
    tracep->declBit(c+311,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+310,"full", false,-1);
    tracep->declBit(c+311,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+312,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1314,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1514,"io_deq_ready", false,-1);
    tracep->declBit(c+314,"io_deq_valid", false,-1);
    tracep->declBit(c+315,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+314,"full", false,-1);
    tracep->declBit(c+315,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+316,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1315,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1515,"io_deq_ready", false,-1);
    tracep->declBit(c+318,"io_deq_valid", false,-1);
    tracep->declBit(c+319,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+318,"full", false,-1);
    tracep->declBit(c+319,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+320,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1316,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1516,"io_deq_ready", false,-1);
    tracep->declBit(c+322,"io_deq_valid", false,-1);
    tracep->declBit(c+323,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+322,"full", false,-1);
    tracep->declBit(c+323,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+324,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1317,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1517,"io_deq_ready", false,-1);
    tracep->declBit(c+326,"io_deq_valid", false,-1);
    tracep->declBit(c+327,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+326,"full", false,-1);
    tracep->declBit(c+327,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+328,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1318,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1518,"io_deq_ready", false,-1);
    tracep->declBit(c+330,"io_deq_valid", false,-1);
    tracep->declBit(c+331,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+330,"full", false,-1);
    tracep->declBit(c+331,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+332,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1319,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1519,"io_deq_ready", false,-1);
    tracep->declBit(c+334,"io_deq_valid", false,-1);
    tracep->declBit(c+335,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+334,"full", false,-1);
    tracep->declBit(c+335,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+336,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1320,"io_enq_valid", false,-1);
    tracep->declBit(c+1236,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1520,"io_deq_ready", false,-1);
    tracep->declBit(c+338,"io_deq_valid", false,-1);
    tracep->declBit(c+339,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+338,"full", false,-1);
    tracep->declBit(c+339,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+340,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1622,"reset", false,-1);
    tracep->declBit(c+1340,"auto_master_out_awready", false,-1);
    tracep->declBit(c+999,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+991,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+992,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+993,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+994,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+995,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1615,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1321,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+996,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+997,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+998,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1000,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1439,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1440,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1616,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1341,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1001,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+986,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+987,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+989,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+990,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1002,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1441,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1442,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1617,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1443,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1622,"reset", false,-1);
    tracep->declBit(c+1669,"io_interrupt", false,-1);
    tracep->declBit(c+1340,"io_master_awready", false,-1);
    tracep->declBit(c+999,"io_master_awvalid", false,-1);
    tracep->declBus(c+991,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+992,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+993,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+994,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+995,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1615,"io_master_wready", false,-1);
    tracep->declBit(c+1321,"io_master_wvalid", false,-1);
    tracep->declBus(c+996,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+997,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+998,"io_master_wlast", false,-1);
    tracep->declBit(c+1000,"io_master_bready", false,-1);
    tracep->declBit(c+1439,"io_master_bvalid", false,-1);
    tracep->declBus(c+1440,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1616,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1341,"io_master_arready", false,-1);
    tracep->declBit(c+1001,"io_master_arvalid", false,-1);
    tracep->declBus(c+986,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+987,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+989,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+990,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1002,"io_master_rready", false,-1);
    tracep->declBit(c+1441,"io_master_rvalid", false,-1);
    tracep->declBus(c+1442,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1617,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1618,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1443,"io_master_rlast", false,-1);
    tracep->declBit(c+1675,"io_slave_awready", false,-1);
    tracep->declBit(c+1669,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1676,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1677,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1678,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1670,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1660,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1679,"io_slave_wready", false,-1);
    tracep->declBit(c+1669,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1677,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1676,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1669,"io_slave_wlast", false,-1);
    tracep->declBit(c+1669,"io_slave_bready", false,-1);
    tracep->declBit(c+1680,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1681,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1682,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1683,"io_slave_arready", false,-1);
    tracep->declBit(c+1669,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1676,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1677,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1678,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1670,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1660,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1669,"io_slave_rready", false,-1);
    tracep->declBit(c+1684,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1685,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1686,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1687,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1688,"io_slave_rlast", false,-1);
    tracep->declBus(c+1010,"pc", false,-1, 31,0);
    tracep->declBit(c+1674,"pc_valid", false,-1);
    tracep->declBus(c+1011,"inst_if", false,-1, 31,0);
    tracep->declBus(c+1012,"pc_if", false,-1, 31,0);
    tracep->declBit(c+1013,"if_valid", false,-1);
    tracep->declBit(c+1014,"if_ready", false,-1);
    tracep->declBus(c+1689,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1689,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1015,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1016,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1676,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1678,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+453,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1676,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1690,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+454,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1691,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1670,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+455,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1660,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+456,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1692,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+457,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1669,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1693,"if_axi_awready", false,-1);
    tracep->declBit(c+1669,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1694,"if_axi_wready", false,-1);
    tracep->declBit(c+1695,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1669,"if_axi_bready", false,-1);
    tracep->declBit(c+1017,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1018,"if_axi_arready", false,-1);
    tracep->declBit(c+1019,"if_axi_rvalid", false,-1);
    tracep->declBit(c+1020,"if_axi_rready", false,-1);
    tracep->declBit(c+1696,"if_axi_wlast", false,-1);
    tracep->declBit(c+1697,"if_axi_rlast", false,-1);
    tracep->declBus(c+1698,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1699,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1021,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1521,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1700,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1701,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1022,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1702,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+443,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1703,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+444,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1704,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1023,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1705,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1024,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1623,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1624,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1706,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+1625,"icache_axi_awready", false,-1);
    tracep->declBit(c+1707,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1626,"icache_axi_wready", false,-1);
    tracep->declBit(c+445,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1708,"icache_axi_bready", false,-1);
    tracep->declBit(c+1025,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1211,"icache_axi_arready", false,-1);
    tracep->declBit(c+1627,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+1026,"icache_axi_rready", false,-1);
    tracep->declBit(c+1709,"icache_axi_wlast", false,-1);
    tracep->declBit(c+1522,"icache_axi_rlast", false,-1);
    tracep->declBus(c+458,"inst_id", false,-1, 31,0);
    tracep->declBit(c+1280,"id_valid", false,-1);
    tracep->declBit(c+1281,"id_ready", false,-1);
    tracep->declBus(c+1027,"rs1", false,-1, 4,0);
    tracep->declBus(c+1028,"rs2", false,-1, 4,0);
    tracep->declBus(c+1029,"pc_id", false,-1, 31,0);
    tracep->declBus(c+459,"imm_id", false,-1, 31,0);
    tracep->declBus(c+1030,"op_id", false,-1, 6,0);
    tracep->declBus(c+1031,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+460,"rd_id", false,-1, 4,0);
    tracep->declBit(c+461,"gpr_wen_id", false,-1);
    tracep->declBus(c+462,"alu_sel_id", false,-1, 3,0);
    tracep->declBus(c+463,"a_id", false,-1, 31,0);
    tracep->declBus(c+464,"b_id", false,-1, 31,0);
    tracep->declBus(c+465,"r1_id", false,-1, 31,0);
    tracep->declBus(c+1032,"r2_id", false,-1, 31,0);
    tracep->declBus(c+466,"csr_id", false,-1, 31,0);
    tracep->declBus(c+467,"mepc_id", false,-1, 31,0);
    tracep->declBus(c+468,"mtvec_id", false,-1, 31,0);
    tracep->declBit(c+1033,"mepc_wen_id", false,-1);
    tracep->declBit(c+1034,"mstatus_wen_id", false,-1);
    tracep->declBit(c+1035,"mcause_wen_id", false,-1);
    tracep->declBit(c+1036,"mtvec_wen_id", false,-1);
    tracep->declBit(c+1037,"fencei_id", false,-1);
    tracep->declBus(c+469,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+470,"inst_ex", false,-1, 31,0);
    tracep->declBit(c+1038,"ex_ready", false,-1);
    tracep->declBit(c+1039,"ex_valid", false,-1);
    tracep->declBus(c+471,"op_ex", false,-1, 6,0);
    tracep->declBus(c+472,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+473,"rd_ex", false,-1, 4,0);
    tracep->declBit(c+474,"gpr_wen_ex", false,-1);
    tracep->declBus(c+1040,"mepc_ex", false,-1, 31,0);
    tracep->declBus(c+1041,"mstatus_ex", false,-1, 31,0);
    tracep->declBus(c+1042,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+1043,"mtvec_ex", false,-1, 31,0);
    tracep->declBit(c+1044,"mepc_wen_ex", false,-1);
    tracep->declBit(c+1045,"mstatus_wen_ex", false,-1);
    tracep->declBit(c+1046,"mcause_wen_ex", false,-1);
    tracep->declBit(c+1047,"mtvec_wen_ex", false,-1);
    tracep->declBus(c+475,"ex_ex", false,-1, 31,0);
    tracep->declBit(c+1048,"ls_valid_ex", false,-1);
    tracep->declBit(c+476,"ls_wen_ex", false,-1);
    tracep->declBit(c+1049,"ls_read_ex", false,-1);
    tracep->declBit(c+1050,"ls_write_ex", false,-1);
    tracep->declBus(c+1051,"ls_waddr_ex", false,-1, 31,0);
    tracep->declBus(c+477,"ls_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+1052,"ls_raddr_ex", false,-1, 31,0);
    tracep->declBus(c+1053,"ls_wmask_ex", false,-1, 3,0);
    tracep->declBus(c+1054,"ls_awsize_ex", false,-1, 2,0);
    tracep->declBus(c+1055,"ls_arsize_ex", false,-1, 2,0);
    tracep->declBus(c+1056,"ls_awlen_ex", false,-1, 7,0);
    tracep->declBus(c+1057,"ls_arlen_ex", false,-1, 7,0);
    tracep->declBus(c+1058,"ls_awburst_ex", false,-1, 1,0);
    tracep->declBus(c+1059,"ls_arburst_ex", false,-1, 1,0);
    tracep->declBus(c+478,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+479,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+480,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+481,"dnpc_ls", false,-1, 31,0);
    tracep->declBit(c+1060,"ls_ready", false,-1);
    tracep->declBit(c+1061,"ls_valid", false,-1);
    tracep->declBit(c+1062,"difftest", false,-1);
    tracep->declBus(c+482,"xrd_ls", false,-1, 31,0);
    tracep->declBus(c+483,"rd_ls", false,-1, 4,0);
    tracep->declBit(c+484,"gpr_wen_ls", false,-1);
    tracep->declBus(c+1063,"mepc_ls", false,-1, 31,0);
    tracep->declBus(c+1064,"mstatus_ls", false,-1, 31,0);
    tracep->declBus(c+1065,"mcause_ls", false,-1, 31,0);
    tracep->declBus(c+1066,"mtvec_ls", false,-1, 31,0);
    tracep->declBit(c+1067,"mepc_wen_ls", false,-1);
    tracep->declBit(c+1068,"mstatus_wen_ls", false,-1);
    tracep->declBit(c+1069,"mcause_wen_ls", false,-1);
    tracep->declBit(c+1070,"mtvec_wen_ls", false,-1);
    tracep->declBus(c+1071,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+503,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1072,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1628,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1073,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1074,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1075,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1710,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+446,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1711,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+447,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1076,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1077,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1078,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1079,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1629,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1630,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1080,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1347,"ls_axi_awready", false,-1);
    tracep->declBit(c+1081,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1631,"ls_axi_wready", false,-1);
    tracep->declBit(c+1523,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+1082,"ls_axi_bready", false,-1);
    tracep->declBit(c+1083,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1348,"ls_axi_arready", false,-1);
    tracep->declBit(c+1524,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+1084,"ls_axi_rready", false,-1);
    tracep->declBit(c+1085,"ls_axi_wlast", false,-1);
    tracep->declBit(c+448,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1086,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1087,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1088,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+341,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1089,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1090,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1091,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1092,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+342,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1093,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+343,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1094,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1095,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1096,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1097,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+344,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+345,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1098,"c_axi_awvalid", false,-1);
    tracep->declBit(c+346,"c_axi_awready", false,-1);
    tracep->declBit(c+1322,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1632,"c_axi_wready", false,-1);
    tracep->declBit(c+347,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1099,"c_axi_bready", false,-1);
    tracep->declBit(c+1100,"c_axi_arvalid", false,-1);
    tracep->declBit(c+921,"c_axi_arready", false,-1);
    tracep->declBit(c+922,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1101,"c_axi_rready", false,-1);
    tracep->declBit(c+1102,"c_axi_wlast", false,-1);
    tracep->declBit(c+348,"c_axi_rlast", false,-1);
    tracep->declBus(c+1282,"r1", false,-1, 31,0);
    tracep->declBus(c+1283,"r2", false,-1, 31,0);
    tracep->declBus(c+923,"mepc", false,-1, 31,0);
    tracep->declBus(c+924,"mstatus", false,-1, 31,0);
    tracep->declBus(c+925,"mcause", false,-1, 31,0);
    tracep->declBus(c+926,"mtvec", false,-1, 31,0);
    tracep->declBus(c+349,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+350,"marchid", false,-1, 31,0);
    tracep->declBit(c+1284,"isRAW", false,-1);
    tracep->declBit(c+1103,"isCHazard", false,-1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+346,"c_axi_awready", false,-1);
    tracep->declBit(c+1098,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1092,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1086,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1090,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1094,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1096,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1632,"c_axi_wready", false,-1);
    tracep->declBit(c+1322,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1087,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1089,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"c_axi_wlast", false,-1);
    tracep->declBit(c+1099,"c_axi_bready", false,-1);
    tracep->declBit(c+347,"c_axi_bvalid", false,-1);
    tracep->declBus(c+342,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+344,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+921,"c_axi_arready", false,-1);
    tracep->declBit(c+1100,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1093,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1088,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1091,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1095,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1097,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1101,"c_axi_rready", false,-1);
    tracep->declBit(c+922,"c_axi_rvalid", false,-1);
    tracep->declBus(c+343,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+341,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+345,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+348,"c_axi_rlast", false,-1);
    tracep->declBit(c+346,"axi_awready", false,-1);
    tracep->declBit(c+1632,"axi_wready", false,-1);
    tracep->declBit(c+347,"axi_bvalid", false,-1);
    tracep->declBit(c+921,"axi_arready", false,-1);
    tracep->declBit(c+922,"axi_rvalid", false,-1);
    tracep->declBit(c+348,"axi_rlast", false,-1);
    tracep->declBus(c+344,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+345,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+342,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+343,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+341,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+351,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1712,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1713,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+352,"mtime", false,-1, 63,0);
    tracep->declBus(c+1633,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1103,"isCHazard", false,-1);
    tracep->declBus(c+458,"inst_i", false,-1, 31,0);
    tracep->declBus(c+469,"pc_o", false,-1, 31,0);
    tracep->declBus(c+470,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1280,"id_valid_i", false,-1);
    tracep->declBit(c+1038,"ex_ready_o", false,-1);
    tracep->declBit(c+1039,"ex_valid_o", false,-1);
    tracep->declBit(c+1060,"ls_ready_i", false,-1);
    tracep->declBus(c+1029,"pc_i", false,-1, 31,0);
    tracep->declBus(c+459,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1030,"op_i", false,-1, 6,0);
    tracep->declBus(c+1031,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+460,"rd_i", false,-1, 4,0);
    tracep->declBit(c+461,"gpr_wen_i", false,-1);
    tracep->declBus(c+462,"alu_sel_i", false,-1, 3,0);
    tracep->declBus(c+463,"a_i", false,-1, 31,0);
    tracep->declBus(c+464,"b_i", false,-1, 31,0);
    tracep->declBus(c+465,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1032,"r2_i", false,-1, 31,0);
    tracep->declBus(c+466,"csr_i", false,-1, 31,0);
    tracep->declBus(c+467,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+468,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1033,"mepc_wen_i", false,-1);
    tracep->declBit(c+1034,"mstatus_wen_i", false,-1);
    tracep->declBit(c+1035,"mcause_wen_i", false,-1);
    tracep->declBit(c+1036,"mtvec_wen_i", false,-1);
    tracep->declBus(c+471,"op_o", false,-1, 6,0);
    tracep->declBus(c+472,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+473,"rd_o", false,-1, 4,0);
    tracep->declBit(c+474,"gpr_wen_o", false,-1);
    tracep->declBus(c+1040,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+1041,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+1042,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1043,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+1044,"mepc_wen_o", false,-1);
    tracep->declBit(c+1045,"mstatus_wen_o", false,-1);
    tracep->declBit(c+1046,"mcause_wen_o", false,-1);
    tracep->declBit(c+1047,"mtvec_wen_o", false,-1);
    tracep->declBus(c+475,"ex_o", false,-1, 31,0);
    tracep->declBit(c+1048,"ls_valid_o", false,-1);
    tracep->declBit(c+476,"ls_wen_o", false,-1);
    tracep->declBit(c+1049,"ls_read_o", false,-1);
    tracep->declBit(c+1050,"ls_write_o", false,-1);
    tracep->declBus(c+1051,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+477,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1052,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+1053,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+1054,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1055,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1056,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1057,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1058,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1059,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+478,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+485,"ex_valid_reg", false,-1);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1104,"state", false,-1);
    tracep->declBus(c+486,"al_res", false,-1, 31,0);
    tracep->declBit(c+487,"al_done", false,-1);
    tracep->declBus(c+504,"ex", false,-1, 31,0);
    tracep->declBus(c+1105,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+1106,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+1107,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1106,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+1106,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+1108,"ls_valid", false,-1);
    tracep->declBit(c+1109,"ls_wen", false,-1);
    tracep->declBus(c+1110,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+1111,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+1112,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1113,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+1114,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1115,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1678,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1678,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1661,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1661,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+459,"offset", false,-1, 31,0);
    tracep->declBit(c+1116,"jalen", false,-1);
    tracep->declBit(c+1117,"jalren", false,-1);
    tracep->declBit(c+505,"beqen", false,-1);
    tracep->declBit(c+506,"bneen", false,-1);
    tracep->declBit(c+507,"blten", false,-1);
    tracep->declBit(c+508,"bgeen", false,-1);
    tracep->declBit(c+509,"bltuen", false,-1);
    tracep->declBit(c+510,"bgeuen", false,-1);
    tracep->declBit(c+1118,"ecall_en", false,-1);
    tracep->declBit(c+511,"mret_en", false,-1);
    tracep->declBus(c+1119,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+463,"a", false,-1, 31,0);
    tracep->declBus(c+464,"b", false,-1, 31,0);
    tracep->declBus(c+462,"opcode", false,-1, 3,0);
    tracep->declBus(c+486,"res", false,-1, 31,0);
    tracep->declBit(c+487,"done", false,-1);
    tracep->declBus(c+1676,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1716,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1717,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1718,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1719,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1720,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1721,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1722,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1723,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1724,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1725,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1726,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1727,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"EXECUTE", false,-1, 0,0);
    tracep->declBit(c+488,"state", false,-1);
    tracep->declQuad(c+489,"mul_result", false,-1, 63,0);
    tracep->declBus(c+491,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+492,"dividend", false,-1, 31,0);
    tracep->declBus(c+493,"divisor", false,-1, 31,0);
    tracep->declBus(c+494,"quotient", false,-1, 31,0);
    tracep->declBus(c+495,"remainder", false,-1, 31,0);
    tracep->declBus(c+496,"div_counter", false,-1, 5,0);
    tracep->declBit(c+497,"done_reg", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1728,"n", false,-1, 31,0);
    tracep->declBus(c+1728,"m", false,-1, 31,0);
    tracep->declBus(c+1729,"w", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1037,"fencei_i", false,-1);
    tracep->declBit(c+1693,"m_axi_awready", false,-1);
    tracep->declBit(c+1669,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1676,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1689,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1678,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1670,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1660,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1694,"m_axi_wready", false,-1);
    tracep->declBit(c+1669,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1689,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1676,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1696,"m_axi_wlast", false,-1);
    tracep->declBit(c+1669,"m_axi_bready", false,-1);
    tracep->declBit(c+1695,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1690,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1692,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1018,"m_axi_arready", false,-1);
    tracep->declBit(c+1017,"m_axi_arvalid", false,-1);
    tracep->declBus(c+454,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1015,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+453,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+455,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+456,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1020,"m_axi_rready", false,-1);
    tracep->declBit(c+1019,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1691,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1016,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+457,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1697,"m_axi_rlast", false,-1);
    tracep->declBit(c+1625,"s_axi_awready", false,-1);
    tracep->declBit(c+1706,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1702,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1698,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1701,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1704,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1705,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1626,"s_axi_wready", false,-1);
    tracep->declBit(c+1707,"s_axi_wvalid", false,-1);
    tracep->declBus(c+1699,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1700,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1709,"s_axi_wlast", false,-1);
    tracep->declBit(c+1708,"s_axi_bready", false,-1);
    tracep->declBit(c+445,"s_axi_bvalid", false,-1);
    tracep->declBus(c+443,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1623,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1211,"s_axi_arready", false,-1);
    tracep->declBit(c+1025,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1703,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1021,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1022,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1023,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1024,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1026,"s_axi_rready", false,-1);
    tracep->declBit(c+1627,"s_axi_rvalid", false,-1);
    tracep->declBus(c+444,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1521,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1624,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1522,"s_axi_rlast", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1120+i*1,"valid_reg", true,(i+0), 15,0);
    }
    tracep->declBus(c+1124,"tag", false,-1, 26,0);
    tracep->declBus(c+1125,"index", false,-1, 0,0);
    tracep->declBus(c+1126,"offset", false,-1, 1,0);
    tracep->declBus(c+1127,"s_tag", false,-1, 26,0);
    tracep->declBus(c+1128,"s_index", false,-1, 0,0);
    tracep->declBus(c+1129,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1130,"access", false,-1, 7,0);
    tracep->declBus(c+1131,"access_raw", false,-1, 7,0);
    tracep->declBus(c+1660,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1661,"TRANS", false,-1, 1,0);
    tracep->declBus(c+1662,"RETURN", false,-1, 1,0);
    tracep->declBus(c+1132,"state", false,-1, 1,0);
    tracep->declBus(c+1133,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+1134,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+498,"j", false,-1, 31,0);
    tracep->declBus(c+499,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+500,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1135,"a", false,-1, 31,0);
    tracep->declBus(c+1136,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1284,"isRAW", false,-1);
    tracep->declBit(c+1103,"isCHazard", false,-1);
    tracep->declBus(c+458,"inst_o", false,-1, 31,0);
    tracep->declBus(c+1027,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+1028,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+1282,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1283,"r2_i", false,-1, 31,0);
    tracep->declBus(c+923,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+924,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+925,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+926,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1013,"if_valid_i", false,-1);
    tracep->declBit(c+1281,"id_ready_o", false,-1);
    tracep->declBit(c+1280,"id_valid_o", false,-1);
    tracep->declBit(c+1038,"ex_ready_i", false,-1);
    tracep->declBus(c+1012,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1011,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1029,"pc_o", false,-1, 31,0);
    tracep->declBus(c+459,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1030,"op_o", false,-1, 6,0);
    tracep->declBus(c+1031,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+460,"rd_o", false,-1, 4,0);
    tracep->declBit(c+461,"gpr_wen_o", false,-1);
    tracep->declBus(c+462,"alu_sel_o", false,-1, 3,0);
    tracep->declBus(c+463,"a_o", false,-1, 31,0);
    tracep->declBus(c+464,"b_o", false,-1, 31,0);
    tracep->declBus(c+465,"r1_o", false,-1, 31,0);
    tracep->declBus(c+1032,"r2_o", false,-1, 31,0);
    tracep->declBus(c+466,"csr_o", false,-1, 31,0);
    tracep->declBus(c+467,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+468,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+1033,"mepc_wen_o", false,-1);
    tracep->declBit(c+1034,"mstatus_wen_o", false,-1);
    tracep->declBit(c+1035,"mcause_wen_o", false,-1);
    tracep->declBit(c+1036,"mtvec_wen_o", false,-1);
    tracep->declBit(c+1037,"fencei_o", false,-1);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1137,"state", false,-1);
    tracep->declBus(c+1138,"op", false,-1, 6,0);
    tracep->declBus(c+1139,"rd", false,-1, 4,0);
    tracep->declBus(c+1140,"funct3", false,-1, 2,0);
    tracep->declBus(c+1141,"immI", false,-1, 31,0);
    tracep->declBus(c+1142,"immU", false,-1, 31,0);
    tracep->declBus(c+1143,"immS", false,-1, 31,0);
    tracep->declBus(c+1144,"immB", false,-1, 31,0);
    tracep->declBus(c+1145,"immJ", false,-1, 31,0);
    tracep->declBus(c+1146,"imm", false,-1, 31,0);
    tracep->declBus(c+1147,"funct7", false,-1, 6,0);
    tracep->declBus(c+1148,"shamt", false,-1, 4,0);
    tracep->declBit(c+1149,"gpr_wen", false,-1);
    tracep->declBus(c+1150,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+1634,"a", false,-1, 31,0);
    tracep->declBus(c+1635,"b", false,-1, 31,0);
    tracep->declBus(c+1676,"ADD", false,-1, 3,0);
    tracep->declBus(c+1716,"SUB", false,-1, 3,0);
    tracep->declBus(c+1717,"SLL", false,-1, 3,0);
    tracep->declBus(c+1718,"SRL", false,-1, 3,0);
    tracep->declBus(c+1719,"SRA", false,-1, 3,0);
    tracep->declBus(c+1720,"SLT", false,-1, 3,0);
    tracep->declBus(c+1721,"AND", false,-1, 3,0);
    tracep->declBus(c+1722,"OR", false,-1, 3,0);
    tracep->declBus(c+1723,"XOR", false,-1, 3,0);
    tracep->declBus(c+1724,"MUL", false,-1, 3,0);
    tracep->declBus(c+1725,"MULH", false,-1, 3,0);
    tracep->declBus(c+1726,"DIV", false,-1, 3,0);
    tracep->declBus(c+1727,"REM", false,-1, 3,0);
    tracep->declBus(c+1636,"csr", false,-1, 31,0);
    tracep->declBit(c+1151,"mepc_wen", false,-1);
    tracep->declBit(c+1152,"mstatus_wen", false,-1);
    tracep->declBit(c+1153,"mcause_wen", false,-1);
    tracep->declBit(c+1154,"mtvec_wen", false,-1);
    tracep->declBit(c+1155,"fencei", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1103,"isCHazard", false,-1);
    tracep->declBit(c+1674,"pc_valid_i", false,-1);
    tracep->declBit(c+1014,"if_ready_o", false,-1);
    tracep->declBit(c+1013,"if_valid_o", false,-1);
    tracep->declBit(c+1281,"id_ready_i", false,-1);
    tracep->declBus(c+1010,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1012,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1011,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1693,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1669,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1676,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1689,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1678,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1670,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1660,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1694,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1669,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1689,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1676,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1696,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1669,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1695,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1690,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1692,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1018,"if_axi_arready_i", false,-1);
    tracep->declBit(c+1017,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+454,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+1015,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+453,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+455,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+456,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1020,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1019,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1691,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1016,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+457,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1697,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1156,"state", false,-1);
    tracep->declBit(c+501,"isCHazard_reg", false,-1);
    tracep->declBus(c+1714,"AXI_IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"AXI_FETCH", false,-1, 0,0);
    tracep->declBit(c+1157,"axi_state", false,-1);
    tracep->declBus(c+1158,"axi_rdata_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+469,"pc_i", false,-1, 31,0);
    tracep->declBus(c+470,"inst_i", false,-1, 31,0);
    tracep->declBus(c+478,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+479,"pc_o", false,-1, 31,0);
    tracep->declBus(c+480,"inst_o", false,-1, 31,0);
    tracep->declBus(c+481,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+1159,"ex_valid_i", false,-1);
    tracep->declBit(c+1060,"ls_ready_o", false,-1);
    tracep->declBit(c+1061,"ls_valid_o", false,-1);
    tracep->declBit(c+1062,"difftest_o", false,-1);
    tracep->declBus(c+471,"op_i", false,-1, 6,0);
    tracep->declBus(c+472,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+473,"rd_i", false,-1, 4,0);
    tracep->declBit(c+474,"gpr_wen_i", false,-1);
    tracep->declBus(c+1040,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+1041,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+1042,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+1043,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1044,"mepc_wen_i", false,-1);
    tracep->declBit(c+1045,"mstatus_wen_i", false,-1);
    tracep->declBit(c+1046,"mcause_wen_i", false,-1);
    tracep->declBit(c+1047,"mtvec_wen_i", false,-1);
    tracep->declBus(c+475,"ex_i", false,-1, 31,0);
    tracep->declBit(c+1048,"ls_valid_i", false,-1);
    tracep->declBit(c+476,"ls_wen_i", false,-1);
    tracep->declBit(c+1049,"ls_read_i", false,-1);
    tracep->declBit(c+1050,"ls_write_i", false,-1);
    tracep->declBus(c+1051,"ls_waddr_i", false,-1, 31,0);
    tracep->declBus(c+477,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1052,"ls_raddr_i", false,-1, 31,0);
    tracep->declBus(c+1053,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1054,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1055,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1056,"ls_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1057,"ls_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1058,"ls_awburst_i", false,-1, 1,0);
    tracep->declBus(c+1059,"ls_arburst_i", false,-1, 1,0);
    tracep->declBus(c+482,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+483,"rd_o", false,-1, 4,0);
    tracep->declBit(c+484,"gpr_wen_o", false,-1);
    tracep->declBus(c+1063,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+1064,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+1065,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1066,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+1067,"mepc_wen_o", false,-1);
    tracep->declBit(c+1068,"mstatus_wen_o", false,-1);
    tracep->declBit(c+1069,"mcause_wen_o", false,-1);
    tracep->declBit(c+1070,"mtvec_wen_o", false,-1);
    tracep->declBit(c+1347,"ls_axi_awready", false,-1);
    tracep->declBit(c+1080,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1710,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1071,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1074,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1076,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1078,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1631,"ls_axi_wready", false,-1);
    tracep->declBit(c+1081,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+503,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1073,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1085,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1082,"ls_axi_bready", false,-1);
    tracep->declBit(c+1523,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+446,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1629,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1348,"ls_axi_arready", false,-1);
    tracep->declBit(c+1083,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1711,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1072,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1075,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1077,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1079,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1084,"ls_axi_rready", false,-1);
    tracep->declBit(c+1524,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+447,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1628,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1630,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+448,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1660,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1661,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1662,"DONE", false,-1, 1,0);
    tracep->declBus(c+1663,"DIFFTEST", false,-1, 1,0);
    tracep->declBus(c+1160,"state", false,-1, 1,0);
    tracep->declBus(c+512,"xrd", false,-1, 31,0);
    tracep->declBit(c+1161,"ls_done_reg", false,-1);
    tracep->declBit(c+1161,"ls_done_o", false,-1);
    tracep->declBus(c+1162,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1163,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+1670,"AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1659,"AXI_READ", false,-1, 2,0);
    tracep->declBus(c+1671,"AXI_WRITE1", false,-1, 2,0);
    tracep->declBus(c+1672,"AXI_WRITE2", false,-1, 2,0);
    tracep->declBus(c+1673,"AXI_DONE", false,-1, 2,0);
    tracep->declBus(c+1164,"axi_state", false,-1, 2,0);
    tracep->declBit(c+1080,"axi_awvalid", false,-1);
    tracep->declBit(c+1081,"axi_wvalid", false,-1);
    tracep->declBus(c+1710,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1071,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1165,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1074,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1076,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1078,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1073,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1082,"axi_bready", false,-1);
    tracep->declBit(c+1085,"axi_wlast", false,-1);
    tracep->declBit(c+1083,"axi_arvalid", false,-1);
    tracep->declBit(c+1084,"axi_rready", false,-1);
    tracep->declBus(c+1711,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1072,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1075,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1077,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1079,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1103,"isCHazard", false,-1);
    tracep->declBus(c+1010,"pc_o", false,-1, 31,0);
    tracep->declBus(c+478,"dnpc_i", false,-1, 31,0);
    tracep->declBit(c+1674,"pc_valid_o", false,-1);
    tracep->declBit(c+1014,"if_ready_i", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1730,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1731,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBus(c+482,"wdata", false,-1, 31,0);
    tracep->declBus(c+483,"waddr", false,-1, 4,0);
    tracep->declBit(c+484,"wen", false,-1);
    tracep->declBus(c+1027,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1282,"r1", false,-1, 31,0);
    tracep->declBus(c+1028,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1283,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+354+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1625,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1706,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1702,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1698,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1701,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1704,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1705,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1626,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1707,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1699,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1700,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1709,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1708,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+445,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+443,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1623,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1211,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1025,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1703,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1021,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1022,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1023,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1024,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1026,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1627,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+444,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1521,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1624,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1522,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1347,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1080,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1710,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1071,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1074,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1076,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1078,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1631,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1081,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+503,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1073,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1085,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+1082,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1523,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+446,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1629,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1348,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1083,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1711,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1072,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1075,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1077,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1079,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1084,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1524,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+447,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1628,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1630,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+448,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1340,"io_master_awready", false,-1);
    tracep->declBit(c+999,"io_master_awvalid", false,-1);
    tracep->declBus(c+991,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+992,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+993,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+994,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+995,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1615,"io_master_wready", false,-1);
    tracep->declBit(c+1321,"io_master_wvalid", false,-1);
    tracep->declBus(c+996,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+997,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+998,"io_master_wlast", false,-1);
    tracep->declBit(c+1000,"io_master_bready", false,-1);
    tracep->declBit(c+1439,"io_master_bvalid", false,-1);
    tracep->declBus(c+1440,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1616,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1341,"io_master_arready", false,-1);
    tracep->declBit(c+1001,"io_master_arvalid", false,-1);
    tracep->declBus(c+986,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+987,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+988,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+989,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+990,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1002,"io_master_rready", false,-1);
    tracep->declBit(c+1441,"io_master_rvalid", false,-1);
    tracep->declBus(c+1442,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1617,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1618,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1443,"io_master_rlast", false,-1);
    tracep->declBit(c+346,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1098,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1092,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1086,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1090,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1094,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1096,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1632,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1322,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1087,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1089,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1102,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1099,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+347,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+342,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+344,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+921,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1100,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1093,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1088,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1091,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1095,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1097,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1101,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+922,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+343,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+341,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+345,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+348,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+349,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+350,"marchid", false,-1, 31,0);
    tracep->declBus(c+1166,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1167,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1168,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1525,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1169,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1170,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1171,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1172,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+449,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1173,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+450,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1174,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1175,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1176,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1177,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1637,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1638,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1178,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1639,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1179,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1640,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+451,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1180,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1181,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1349,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1526,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1182,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1183,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+452,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+502,"state", false,-1, 1,0);
    tracep->declBus(c+1184,"sel_m", false,-1, 1,0);
    tracep->declBus(c+1660,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1661,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1662,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1712,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1713,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1185,"sel_clint", false,-1);
    tracep->declBus(c+1732,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1733,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1186,"sel_mvendorid", false,-1);
    tracep->declBit(c+1187,"sel_marchid", false,-1);
    tracep->declBit(c+1188,"sel_id", false,-1);
    tracep->declBus(c+1189,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1190,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1191,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1641,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1192,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1193,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1194,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1195,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1734,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1196,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1735,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1197,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1198,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1199,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1200,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1736,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1737,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1738,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1201,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1323,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1739,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1740,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1202,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1203,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1674,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1674,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1204,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1205,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1741,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1742,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+1677,"din", false,-1, 31,0);
    tracep->declBus(c+350,"dout", false,-1, 31,0);
    tracep->declBit(c+1669,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1677,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+1065,"din", false,-1, 31,0);
    tracep->declBus(c+925,"dout", false,-1, 31,0);
    tracep->declBit(c+1069,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1677,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+1063,"din", false,-1, 31,0);
    tracep->declBus(c+923,"dout", false,-1, 31,0);
    tracep->declBit(c+1067,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1743,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+1064,"din", false,-1, 31,0);
    tracep->declBus(c+924,"dout", false,-1, 31,0);
    tracep->declBit(c+1068,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1677,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+1066,"din", false,-1, 31,0);
    tracep->declBus(c+926,"dout", false,-1, 31,0);
    tracep->declBit(c+1070,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1744,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+1677,"din", false,-1, 31,0);
    tracep->declBus(c+349,"dout", false,-1, 31,0);
    tracep->declBit(c+1669,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"io_d", false,-1);
    tracep->declBit(c+386,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"io_d", false,-1);
    tracep->declBit(c+386,"io_q", false,-1);
    tracep->declBit(c+386,"sync_0", false,-1);
    tracep->declBit(c+387,"sync_1", false,-1);
    tracep->declBit(c+388,"sync_2", false,-1);
    tracep->declBit(c+389,"sync_3", false,-1);
    tracep->declBit(c+390,"sync_4", false,-1);
    tracep->declBit(c+391,"sync_5", false,-1);
    tracep->declBit(c+392,"sync_6", false,-1);
    tracep->declBit(c+393,"sync_7", false,-1);
    tracep->declBit(c+394,"sync_8", false,-1);
    tracep->declBit(c+395,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1388,"auto_in_psel", false,-1);
    tracep->declBit(c+1389,"auto_in_penable", false,-1);
    tracep->declBit(c+1378,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1377,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+527,"auto_in_pready", false,-1);
    tracep->declBit(c+1668,"auto_in_pslverr", false,-1);
    tracep->declBus(c+528,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1578,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1579,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1580,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1581,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1586,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1587,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBus(c+1371,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1388,"in_psel", false,-1);
    tracep->declBit(c+1389,"in_penable", false,-1);
    tracep->declBus(c+1377,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1378,"in_pwrite", false,-1);
    tracep->declBus(c+1379,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+527,"in_pready", false,-1);
    tracep->declBus(c+528,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1668,"in_pslverr", false,-1);
    tracep->declBus(c+1578,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1579,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1580,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1581,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1586,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1587,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1678,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1745,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1746,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1747,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1748,"ONE", false,-1, 7,0);
    tracep->declBus(c+1749,"TWO", false,-1, 7,0);
    tracep->declBus(c+1750,"THREE", false,-1, 7,0);
    tracep->declBus(c+1751,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1752,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1753,"SIX", false,-1, 7,0);
    tracep->declBus(c+1754,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1755,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1756,"NINE", false,-1, 7,0);
    tracep->declBus(c+1757,"A", false,-1, 7,0);
    tracep->declBus(c+1758,"B", false,-1, 7,0);
    tracep->declBus(c+1759,"C", false,-1, 7,0);
    tracep->declBus(c+1760,"D", false,-1, 7,0);
    tracep->declBus(c+1761,"E", false,-1, 7,0);
    tracep->declBus(c+1762,"F", false,-1, 7,0);
    tracep->declBus(c+559,"led_reg", false,-1, 15,0);
    tracep->declBus(c+560,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+561+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1527,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1528,"write_en", false,-1);
    tracep->declBit(c+1529,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1386,"auto_in_psel", false,-1);
    tracep->declBit(c+1387,"auto_in_penable", false,-1);
    tracep->declBit(c+1378,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1377,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+525,"auto_in_pready", false,-1);
    tracep->declBit(c+1667,"auto_in_pslverr", false,-1);
    tracep->declBus(c+526,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1588,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1589,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBus(c+1371,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1386,"in_psel", false,-1);
    tracep->declBit(c+1387,"in_penable", false,-1);
    tracep->declBus(c+1377,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1378,"in_pwrite", false,-1);
    tracep->declBus(c+1379,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+525,"in_pready", false,-1);
    tracep->declBus(c+526,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1667,"in_pslverr", false,-1);
    tracep->declBit(c+1588,"ps2_clk", false,-1);
    tracep->declBit(c+1589,"ps2_data", false,-1);
    tracep->declBus(c+1763,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1764,"EXP", false,-1, 7,0);
    tracep->declBus(c+1212,"state", false,-1, 1,0);
    tracep->declBus(c+1213,"counter", false,-1, 3,0);
    tracep->declBus(c+1214,"buffer", false,-1, 7,0);
    tracep->declBus(c+1215,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1216,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1642,"ready", false,-1);
    tracep->declBus(c+1643,"rdata", false,-1, 31,0);
    tracep->declBit(c+1530,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1264,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1620,"auto_in_wvalid", false,-1);
    tracep->declBit(c+157,"auto_in_arready", false,-1);
    tracep->declBit(c+1265,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1225,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1266,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1621,"auto_in_rready", false,-1);
    tracep->declBit(c+158,"auto_in_rvalid", false,-1);
    tracep->declBus(c+159,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"state", false,-1);
    tracep->declBus(c+160,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+159,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1285,"raddr", false,-1, 31,0);
    tracep->declBit(c+1286,"ren", false,-1);
    tracep->declBus(c+1287,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1390,"auto_in_psel", false,-1);
    tracep->declBit(c+1391,"auto_in_penable", false,-1);
    tracep->declBit(c+1378,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1369,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1377,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1602,"auto_in_pready", false,-1);
    tracep->declBit(c+1669,"auto_in_pslverr", false,-1);
    tracep->declBus(c+919,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1572,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1573,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1599,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBus(c+1369,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1390,"in_psel", false,-1);
    tracep->declBit(c+1391,"in_penable", false,-1);
    tracep->declBus(c+1377,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1378,"in_pwrite", false,-1);
    tracep->declBus(c+1379,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1602,"in_pready", false,-1);
    tracep->declBus(c+919,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1669,"in_pslverr", false,-1);
    tracep->declBit(c+1572,"qspi_sck", false,-1);
    tracep->declBit(c+1573,"qspi_ce_n", false,-1);
    tracep->declBus(c+1599,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1599,"din", false,-1, 3,0);
    tracep->declBus(c+1574,"dout", false,-1, 3,0);
    tracep->declBus(c+1575,"douten", false,-1, 3,0);
    tracep->declBit(c+1644,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1576,"clk_i", false,-1);
    tracep->declBit(c+1577,"rst_i", false,-1);
    tracep->declBus(c+1369,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1379,"dat_i", false,-1, 31,0);
    tracep->declBus(c+919,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1380,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1390,"cyc_i", false,-1);
    tracep->declBit(c+1390,"stb_i", false,-1);
    tracep->declBit(c+1644,"ack_o", false,-1);
    tracep->declBit(c+1378,"we_i", false,-1);
    tracep->declBit(c+1572,"sck", false,-1);
    tracep->declBit(c+1573,"ce_n", false,-1);
    tracep->declBus(c+1599,"din", false,-1, 3,0);
    tracep->declBus(c+1574,"dout", false,-1, 3,0);
    tracep->declBus(c+1575,"douten", false,-1, 3,0);
    tracep->declBus(c+1714,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+569,"mr_sck", false,-1);
    tracep->declBit(c+570,"mr_ce_n", false,-1);
    tracep->declBus(c+1599,"mr_din", false,-1, 3,0);
    tracep->declBus(c+571,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+572,"mr_doe", false,-1);
    tracep->declBit(c+573,"mw_sck", false,-1);
    tracep->declBit(c+574,"mw_ce_n", false,-1);
    tracep->declBus(c+1599,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1531,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+575,"mw_doe", false,-1);
    tracep->declBit(c+1532,"mr_rd", false,-1);
    tracep->declBit(c+576,"mr_done", false,-1);
    tracep->declBit(c+1533,"mw_wr", false,-1);
    tracep->declBit(c+1534,"mw_done", false,-1);
    tracep->declBit(c+1390,"wb_valid", false,-1);
    tracep->declBit(c+1535,"wb_we", false,-1);
    tracep->declBit(c+1536,"wb_re", false,-1);
    tracep->declBit(c+577,"state", false,-1);
    tracep->declBit(c+1537,"nstate", false,-1);
    tracep->declBus(c+1538,"size", false,-1, 2,0);
    tracep->declBus(c+1539,"byte0", false,-1, 7,0);
    tracep->declBus(c+1540,"byte1", false,-1, 7,0);
    tracep->declBus(c+1541,"byte2", false,-1, 7,0);
    tracep->declBus(c+1542,"byte3", false,-1, 7,0);
    tracep->declBus(c+1372,"wdata", false,-1, 31,0);
    tracep->declBit(c+828,"qpi_flag", false,-1);
    tracep->declBit(c+829,"qpi_sck", false,-1);
    tracep->declBit(c+830,"qpi_ce_n", false,-1);
    tracep->declBus(c+831,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+832,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+833,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1645,"rst_n", false,-1);
    tracep->declBus(c+1373,"addr", false,-1, 23,0);
    tracep->declBit(c+1532,"rd", false,-1);
    tracep->declBus(c+1673,"size", false,-1, 2,0);
    tracep->declBit(c+576,"done", false,-1);
    tracep->declBus(c+919,"line", false,-1, 31,0);
    tracep->declBit(c+569,"sck", false,-1);
    tracep->declBit(c+570,"ce_n", false,-1);
    tracep->declBus(c+1599,"din", false,-1, 3,0);
    tracep->declBus(c+571,"dout", false,-1, 3,0);
    tracep->declBit(c+572,"douten", false,-1);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"READ", false,-1, 0,0);
    tracep->declBus(c+1765,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+578,"state", false,-1);
    tracep->declBit(c+1543,"nstate", false,-1);
    tracep->declBus(c+579,"counter", false,-1, 7,0);
    tracep->declBus(c+580,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+927+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1766,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+581,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1645,"rst_n", false,-1);
    tracep->declBus(c+1374,"addr", false,-1, 23,0);
    tracep->declBus(c+1372,"line", false,-1, 31,0);
    tracep->declBus(c+1538,"size", false,-1, 2,0);
    tracep->declBit(c+1533,"wr", false,-1);
    tracep->declBit(c+1534,"done", false,-1);
    tracep->declBit(c+573,"sck", false,-1);
    tracep->declBit(c+574,"ce_n", false,-1);
    tracep->declBus(c+1599,"din", false,-1, 3,0);
    tracep->declBus(c+1531,"dout", false,-1, 3,0);
    tracep->declBit(c+575,"douten", false,-1);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1544,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+582,"state", false,-1);
    tracep->declBit(c+1545,"nstate", false,-1);
    tracep->declBus(c+583,"counter", false,-1, 7,0);
    tracep->declBus(c+584,"saddr", false,-1, 23,0);
    tracep->declBus(c+1767,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1333,"auto_in_awready", false,-1);
    tracep->declBit(c+1334,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1335,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1336,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1337,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1207,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1339,"auto_in_wready", false,-1);
    tracep->declBit(c+1412,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1208,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1209,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1210,"auto_in_wlast", false,-1);
    tracep->declBit(c+1607,"auto_in_bready", false,-1);
    tracep->declBit(c+542,"auto_in_bvalid", false,-1);
    tracep->declBus(c+539,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1660,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1327,"auto_in_arready", false,-1);
    tracep->declBit(c+1328,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1329,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1330,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1206,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1332,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1411,"auto_in_rready", false,-1);
    tracep->declBit(c+538,"auto_in_rvalid", false,-1);
    tracep->declBus(c+539,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+540,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+541,"auto_in_rlast", false,-1);
    tracep->declBit(c+1600,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+515,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+943,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+944,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+945,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+946,"sdram_bundle_we", false,-1);
    tracep->declBus(c+947,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+948,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+516,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+972,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1333,"in_awready", false,-1);
    tracep->declBit(c+1334,"in_awvalid", false,-1);
    tracep->declBus(c+1336,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1335,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1337,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1207,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1338,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1339,"in_wready", false,-1);
    tracep->declBit(c+1412,"in_wvalid", false,-1);
    tracep->declBus(c+1208,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1209,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1210,"in_wlast", false,-1);
    tracep->declBit(c+1607,"in_bready", false,-1);
    tracep->declBit(c+542,"in_bvalid", false,-1);
    tracep->declBus(c+1660,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+539,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1327,"in_arready", false,-1);
    tracep->declBit(c+1328,"in_arvalid", false,-1);
    tracep->declBus(c+1330,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1329,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1331,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1206,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1332,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1411,"in_rready", false,-1);
    tracep->declBit(c+538,"in_rvalid", false,-1);
    tracep->declBus(c+1660,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+540,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+541,"in_rlast", false,-1);
    tracep->declBus(c+539,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1600,"sdram_clk", false,-1);
    tracep->declBit(c+515,"sdram_cke", false,-1);
    tracep->declBit(c+943,"sdram_cs", false,-1);
    tracep->declBit(c+944,"sdram_ras", false,-1);
    tracep->declBit(c+945,"sdram_cas", false,-1);
    tracep->declBit(c+946,"sdram_we", false,-1);
    tracep->declBus(c+947,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+948,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+516,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+972,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+585,"sdram_dout_en", false,-1);
    tracep->declBus(c+586,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1576,"clk_i", false,-1);
    tracep->declBit(c+1577,"rst_i", false,-1);
    tracep->declBit(c+1334,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1336,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1335,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1337,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1338,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1412,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1208,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1209,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1210,"inport_wlast_i", false,-1);
    tracep->declBit(c+1607,"inport_bready_i", false,-1);
    tracep->declBit(c+1328,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1330,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1329,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1331,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1332,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1411,"inport_rready_i", false,-1);
    tracep->declBus(c+972,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1333,"inport_awready_o", false,-1);
    tracep->declBit(c+1339,"inport_wready_o", false,-1);
    tracep->declBit(c+542,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1660,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+539,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1327,"inport_arready_o", false,-1);
    tracep->declBit(c+538,"inport_rvalid_o", false,-1);
    tracep->declBus(c+540,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1660,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+539,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+541,"inport_rlast_o", false,-1);
    tracep->declBit(c+1600,"sdram_clk_o", false,-1);
    tracep->declBit(c+515,"sdram_cke_o", false,-1);
    tracep->declBit(c+943,"sdram_cs_o", false,-1);
    tracep->declBit(c+944,"sdram_ras_o", false,-1);
    tracep->declBit(c+945,"sdram_cas_o", false,-1);
    tracep->declBit(c+946,"sdram_we_o", false,-1);
    tracep->declBus(c+516,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+947,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+948,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+586,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+585,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1768,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1769,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1770,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1771,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1350,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1546,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1351,"ram_rd_w", false,-1);
    tracep->declBit(c+949,"ram_accept_w", false,-1);
    tracep->declBus(c+1208,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+587,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1352,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+588,"ram_ack_w", false,-1);
    tracep->declBit(c+1669,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1576,"clk_i", false,-1);
    tracep->declBit(c+1577,"rst_i", false,-1);
    tracep->declBit(c+1334,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1336,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1335,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1337,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1338,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1412,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1208,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1209,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1210,"axi_wlast_i", false,-1);
    tracep->declBit(c+1607,"axi_bready_i", false,-1);
    tracep->declBit(c+1328,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1330,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1329,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1331,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1332,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1411,"axi_rready_i", false,-1);
    tracep->declBit(c+949,"ram_accept_i", false,-1);
    tracep->declBit(c+588,"ram_ack_i", false,-1);
    tracep->declBit(c+1669,"ram_error_i", false,-1);
    tracep->declBus(c+587,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1333,"axi_awready_o", false,-1);
    tracep->declBit(c+1339,"axi_wready_o", false,-1);
    tracep->declBit(c+542,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1660,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+539,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1327,"axi_arready_o", false,-1);
    tracep->declBit(c+538,"axi_rvalid_o", false,-1);
    tracep->declBus(c+540,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1660,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+539,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+541,"axi_rlast_o", false,-1);
    tracep->declBus(c+1546,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1351,"ram_rd_o", false,-1);
    tracep->declBus(c+1352,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1350,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1208,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+589,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+590,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+591,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+592,"req_rd_q", false,-1);
    tracep->declBit(c+593,"req_wr_q", false,-1);
    tracep->declBus(c+594,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+595,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+596,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+597,"req_prio_q", false,-1);
    tracep->declBit(c+598,"req_hold_rd_q", false,-1);
    tracep->declBit(c+599,"req_hold_wr_q", false,-1);
    tracep->declBit(c+600,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1547,"req_push_w", false,-1);
    tracep->declBus(c+1646,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+601,"req_out_valid_w", false,-1);
    tracep->declBus(c+602,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1548,"resp_accept_w", false,-1);
    tracep->declBit(c+603,"resp_is_write_w", false,-1);
    tracep->declBit(c+604,"resp_is_read_w", false,-1);
    tracep->declBit(c+541,"resp_is_last_w", false,-1);
    tracep->declBus(c+539,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+605,"resp_valid_w", false,-1);
    tracep->declBit(c+606,"write_prio_w", false,-1);
    tracep->declBit(c+607,"read_prio_w", false,-1);
    tracep->declBit(c+1353,"write_active_w", false,-1);
    tracep->declBit(c+1351,"read_active_w", false,-1);
    tracep->declBus(c+1350,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1647,"wr_w", false,-1);
    tracep->declBit(c+1351,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1772,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1728,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1771,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1576,"clk_i", false,-1);
    tracep->declBit(c+1577,"rst_i", false,-1);
    tracep->declBus(c+1646,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1547,"push_i", false,-1);
    tracep->declBit(c+1548,"pop_i", false,-1);
    tracep->declBus(c+602,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+600,"accept_o", false,-1);
    tracep->declBit(c+601,"valid_o", false,-1);
    tracep->declBus(c+1729,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+608+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+612,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+613,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+614,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1728,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1771,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1576,"clk_i", false,-1);
    tracep->declBit(c+1577,"rst_i", false,-1);
    tracep->declBus(c+587,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+588,"push_i", false,-1);
    tracep->declBit(c+1548,"pop_i", false,-1);
    tracep->declBus(c+540,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+615,"accept_o", false,-1);
    tracep->declBit(c+605,"valid_o", false,-1);
    tracep->declBus(c+1729,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+616+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+620,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+621,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+622,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1576,"clk_i", false,-1);
    tracep->declBit(c+1577,"rst_i", false,-1);
    tracep->declBus(c+1546,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1351,"inport_rd_i", false,-1);
    tracep->declBus(c+1352,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1350,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1208,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+972,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+949,"inport_accept_o", false,-1);
    tracep->declBit(c+588,"inport_ack_o", false,-1);
    tracep->declBit(c+1669,"inport_error_o", false,-1);
    tracep->declBus(c+587,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1600,"sdram_clk_o", false,-1);
    tracep->declBit(c+515,"sdram_cke_o", false,-1);
    tracep->declBit(c+943,"sdram_cs_o", false,-1);
    tracep->declBit(c+944,"sdram_ras_o", false,-1);
    tracep->declBit(c+945,"sdram_cas_o", false,-1);
    tracep->declBit(c+946,"sdram_we_o", false,-1);
    tracep->declBus(c+516,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+947,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+948,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+586,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+585,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1768,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1769,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1770,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1771,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1729,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1728,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1773,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1774,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1775,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1776,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1777,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1728,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1722,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1718,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1720,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1719,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1721,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1717,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1716,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1676,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1778,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1728,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1676,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1716,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1717,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1718,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1719,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1720,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1721,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1722,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1723,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1724,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1779,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1779,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1731,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1779,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1771,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1771,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1772,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1350,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1546,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1351,"ram_rd_w", false,-1);
    tracep->declBit(c+949,"ram_accept_w", false,-1);
    tracep->declBus(c+1208,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+587,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+588,"ram_ack_w", false,-1);
    tracep->declBit(c+1549,"ram_req_w", false,-1);
    tracep->declBus(c+950,"command_q", false,-1, 3,0);
    tracep->declBus(c+947,"addr_q", false,-1, 12,0);
    tracep->declBus(c+586,"data_q", false,-1, 31,0);
    tracep->declBit(c+623,"data_rd_en_q", false,-1);
    tracep->declBus(c+516,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+515,"cke_q", false,-1);
    tracep->declBus(c+948,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1780,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+624,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+972,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+625,"refresh_q", false,-1);
    tracep->declBus(c+951,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+626+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+952,"state_q", false,-1, 3,0);
    tracep->declBus(c+1550,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1551,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+634,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+635,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1354,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1355,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1356,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1728,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+636,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1552,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1781,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+953,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+637,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+587,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+638,"idx", false,-1, 31,0);
    tracep->declBus(c+639,"rd_q", false,-1, 3,0);
    tracep->declBit(c+588,"ack_q", false,-1);
    tracep->declArray(c+954,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1396,"auto_in_psel", false,-1);
    tracep->declBit(c+1397,"auto_in_penable", false,-1);
    tracep->declBit(c+1378,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1385,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1377,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"auto_in_pready", false,-1);
    tracep->declBit(c+1669,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1398,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+513,"spi_bundle_sck", false,-1);
    tracep->declBus(c+514,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+942,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1598,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1782,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1783,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1773,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBus(c+1553,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1396,"in_psel", false,-1);
    tracep->declBit(c+1397,"in_penable", false,-1);
    tracep->declBus(c+1377,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1378,"in_pwrite", false,-1);
    tracep->declBus(c+1379,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1603,"in_pready", false,-1);
    tracep->declBus(c+1398,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1669,"in_pslverr", false,-1);
    tracep->declBit(c+513,"spi_sck", false,-1);
    tracep->declBus(c+514,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+942,"spi_mosi", false,-1);
    tracep->declBit(c+1598,"spi_miso", false,-1);
    tracep->declBit(c+640,"spi_irq_out", false,-1);
    tracep->declBus(c+1554,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1555,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1556,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1557,"wb_we_i", false,-1);
    tracep->declBit(c+1558,"wb_stb_i", false,-1);
    tracep->declBit(c+1559,"wb_cyc_i", false,-1);
    tracep->declBit(c+641,"wb_ack_o", false,-1);
    tracep->declBus(c+642,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1670,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1659,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1671,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1672,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1673,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1784,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1785,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1786,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+396,"state", false,-1, 2,0);
    tracep->declBus(c+397,"next_state", false,-1, 2,0);
    tracep->declBus(c+398,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+399,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+400,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+401,"flash_pwrite", false,-1);
    tracep->declBit(c+402,"flash_psel", false,-1);
    tracep->declBit(c+403,"flash_penable", false,-1);
    tracep->declBit(c+404,"flash_pready", false,-1);
    tracep->declBus(c+405,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBit(c+1576,"wb_clk_i", false,-1);
    tracep->declBit(c+1577,"wb_rst_i", false,-1);
    tracep->declBus(c+1554,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1555,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+642,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1556,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1557,"wb_we_i", false,-1);
    tracep->declBit(c+1558,"wb_stb_i", false,-1);
    tracep->declBit(c+1559,"wb_cyc_i", false,-1);
    tracep->declBit(c+641,"wb_ack_o", false,-1);
    tracep->declBit(c+1669,"wb_err_o", false,-1);
    tracep->declBit(c+640,"wb_int_o", false,-1);
    tracep->declBus(c+514,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+513,"sclk_pad_o", false,-1);
    tracep->declBit(c+942,"mosi_pad_o", false,-1);
    tracep->declBit(c+1598,"miso_pad_i", false,-1);
    tracep->declBus(c+643,"divider", false,-1, 15,0);
    tracep->declBus(c+644,"ctrl", false,-1, 13,0);
    tracep->declBus(c+645,"ss", false,-1, 7,0);
    tracep->declBus(c+1560,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+646,"rx", false,-1, 127,0);
    tracep->declBit(c+650,"rx_negedge", false,-1);
    tracep->declBit(c+651,"tx_negedge", false,-1);
    tracep->declBus(c+652,"char_len", false,-1, 6,0);
    tracep->declBit(c+653,"go", false,-1);
    tracep->declBit(c+654,"lsb", false,-1);
    tracep->declBit(c+655,"ie", false,-1);
    tracep->declBit(c+656,"ass", false,-1);
    tracep->declBit(c+1561,"spi_divider_sel", false,-1);
    tracep->declBit(c+1562,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1563,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1564,"spi_ss_sel", false,-1);
    tracep->declBit(c+657,"tip", false,-1);
    tracep->declBit(c+658,"pos_edge", false,-1);
    tracep->declBit(c+659,"neg_edge", false,-1);
    tracep->declBit(c+660,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBit(c+1576,"clk_in", false,-1);
    tracep->declBit(c+1577,"rst", false,-1);
    tracep->declBit(c+657,"enable", false,-1);
    tracep->declBit(c+653,"go", false,-1);
    tracep->declBit(c+660,"last_clk", false,-1);
    tracep->declBus(c+643,"divider", false,-1, 15,0);
    tracep->declBit(c+513,"clk_out", false,-1);
    tracep->declBit(c+658,"pos_edge", false,-1);
    tracep->declBit(c+659,"neg_edge", false,-1);
    tracep->declBus(c+661,"cnt", false,-1, 15,0);
    tracep->declBit(c+662,"cnt_zero", false,-1);
    tracep->declBit(c+663,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1577,"rst", false,-1);
    tracep->declBus(c+1565,"latch", false,-1, 3,0);
    tracep->declBus(c+1556,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+652,"len", false,-1, 6,0);
    tracep->declBit(c+654,"lsb", false,-1);
    tracep->declBit(c+653,"go", false,-1);
    tracep->declBit(c+658,"pos_edge", false,-1);
    tracep->declBit(c+659,"neg_edge", false,-1);
    tracep->declBit(c+650,"rx_negedge", false,-1);
    tracep->declBit(c+651,"tx_negedge", false,-1);
    tracep->declBit(c+657,"tip", false,-1);
    tracep->declBit(c+660,"last", false,-1);
    tracep->declBus(c+1555,"p_in", false,-1, 31,0);
    tracep->declArray(c+646,"p_out", false,-1, 127,0);
    tracep->declBit(c+513,"s_clk", false,-1);
    tracep->declBit(c+1598,"s_in", false,-1);
    tracep->declBit(c+942,"s_out", false,-1);
    tracep->declBus(c+664,"cnt", false,-1, 7,0);
    tracep->declArray(c+646,"data", false,-1, 127,0);
    tracep->declBus(c+665,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+666,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+667,"rx_clk", false,-1);
    tracep->declBit(c+668,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1392,"auto_in_psel", false,-1);
    tracep->declBit(c+1393,"auto_in_penable", false,-1);
    tracep->declBit(c+1378,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1377,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1394,"auto_in_pready", false,-1);
    tracep->declBit(c+1669,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1395,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1596,"uart_rx", false,-1);
    tracep->declBit(c+1597,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1392,"in_psel", false,-1);
    tracep->declBit(c+1393,"in_penable", false,-1);
    tracep->declBus(c+1377,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1394,"in_pready", false,-1);
    tracep->declBit(c+1669,"in_pslverr", false,-1);
    tracep->declBus(c+1371,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1378,"in_pwrite", false,-1);
    tracep->declBus(c+1395,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1379,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1596,"uart_rx", false,-1);
    tracep->declBit(c+1597,"uart_tx", false,-1);
    tracep->declBit(c+669,"rtsn", false,-1);
    tracep->declBit(c+1669,"ctsn", false,-1);
    tracep->declBit(c+670,"dtr_pad_o", false,-1);
    tracep->declBit(c+1669,"dsr_pad_i", false,-1);
    tracep->declBit(c+1669,"ri_pad_i", false,-1);
    tracep->declBit(c+1669,"dcd_pad_i", false,-1);
    tracep->declBit(c+671,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1566,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1567,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+406,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1568,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+672,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1577,"wb_rst_i", false,-1);
    tracep->declBus(c+1566,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1569,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1568,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1597,"stx_pad_o", false,-1);
    tracep->declBit(c+1596,"srx_pad_i", false,-1);
    tracep->declBus(c+1723,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+672,"rts_pad_o", false,-1);
    tracep->declBit(c+670,"dtr_pad_o", false,-1);
    tracep->declBit(c+671,"int_o", false,-1);
    tracep->declBit(c+673,"enable", false,-1);
    tracep->declBit(c+674,"srx_pad", false,-1);
    tracep->declBus(c+675,"ier", false,-1, 3,0);
    tracep->declBus(c+676,"iir", false,-1, 3,0);
    tracep->declBus(c+677,"fcr", false,-1, 1,0);
    tracep->declBus(c+678,"mcr", false,-1, 4,0);
    tracep->declBus(c+679,"lcr", false,-1, 7,0);
    tracep->declBus(c+680,"msr", false,-1, 7,0);
    tracep->declBus(c+681,"dl", false,-1, 15,0);
    tracep->declBus(c+682,"scratch", false,-1, 7,0);
    tracep->declBit(c+683,"start_dlc", false,-1);
    tracep->declBit(c+684,"lsr_mask_d", false,-1);
    tracep->declBit(c+685,"msi_reset", false,-1);
    tracep->declBus(c+686,"dlc", false,-1, 15,0);
    tracep->declBus(c+687,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+688,"rx_reset", false,-1);
    tracep->declBit(c+689,"tx_reset", false,-1);
    tracep->declBit(c+690,"dlab", false,-1);
    tracep->declBit(c+1674,"cts_pad_i", false,-1);
    tracep->declBit(c+1669,"dsr_pad_i", false,-1);
    tracep->declBit(c+1669,"ri_pad_i", false,-1);
    tracep->declBit(c+1669,"dcd_pad_i", false,-1);
    tracep->declBit(c+691,"loopback", false,-1);
    tracep->declBit(c+1669,"cts", false,-1);
    tracep->declBit(c+1674,"dsr", false,-1);
    tracep->declBit(c+1674,"ri", false,-1);
    tracep->declBit(c+1674,"dcd", false,-1);
    tracep->declBit(c+692,"cts_c", false,-1);
    tracep->declBit(c+693,"dsr_c", false,-1);
    tracep->declBit(c+694,"ri_c", false,-1);
    tracep->declBit(c+695,"dcd_c", false,-1);
    tracep->declBus(c+696,"lsr", false,-1, 7,0);
    tracep->declBit(c+697,"lsr0", false,-1);
    tracep->declBit(c+698,"lsr1", false,-1);
    tracep->declBit(c+699,"lsr2", false,-1);
    tracep->declBit(c+700,"lsr3", false,-1);
    tracep->declBit(c+701,"lsr4", false,-1);
    tracep->declBit(c+702,"lsr5", false,-1);
    tracep->declBit(c+703,"lsr6", false,-1);
    tracep->declBit(c+704,"lsr7", false,-1);
    tracep->declBit(c+705,"lsr0r", false,-1);
    tracep->declBit(c+706,"lsr1r", false,-1);
    tracep->declBit(c+707,"lsr2r", false,-1);
    tracep->declBit(c+708,"lsr3r", false,-1);
    tracep->declBit(c+709,"lsr4r", false,-1);
    tracep->declBit(c+710,"lsr5r", false,-1);
    tracep->declBit(c+711,"lsr6r", false,-1);
    tracep->declBit(c+712,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+713,"rls_int", false,-1);
    tracep->declBit(c+714,"rda_int", false,-1);
    tracep->declBit(c+715,"ti_int", false,-1);
    tracep->declBit(c+716,"thre_int", false,-1);
    tracep->declBit(c+717,"ms_int", false,-1);
    tracep->declBit(c+718,"tf_push", false,-1);
    tracep->declBit(c+719,"rf_pop", false,-1);
    tracep->declBus(c+1648,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+720,"rf_error_bit", false,-1);
    tracep->declBit(c+698,"rf_overrun", false,-1);
    tracep->declBit(c+721,"rf_push_pulse", false,-1);
    tracep->declBus(c+722,"rf_count", false,-1, 4,0);
    tracep->declBus(c+723,"tf_count", false,-1, 4,0);
    tracep->declBus(c+724,"tstate", false,-1, 2,0);
    tracep->declBus(c+725,"rstate", false,-1, 3,0);
    tracep->declBus(c+726,"counter_t", false,-1, 9,0);
    tracep->declBit(c+727,"thre_set_en", false,-1);
    tracep->declBus(c+728,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+729,"block_value", false,-1, 7,0);
    tracep->declBit(c+730,"serial_out", false,-1);
    tracep->declBit(c+731,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+732,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+733,"lsr0_d", false,-1);
    tracep->declBit(c+734,"lsr1_d", false,-1);
    tracep->declBit(c+735,"lsr2_d", false,-1);
    tracep->declBit(c+736,"lsr3_d", false,-1);
    tracep->declBit(c+737,"lsr4_d", false,-1);
    tracep->declBit(c+738,"lsr5_d", false,-1);
    tracep->declBit(c+739,"lsr6_d", false,-1);
    tracep->declBit(c+740,"lsr7_d", false,-1);
    tracep->declBit(c+741,"rls_int_d", false,-1);
    tracep->declBit(c+742,"thre_int_d", false,-1);
    tracep->declBit(c+743,"ms_int_d", false,-1);
    tracep->declBit(c+744,"ti_int_d", false,-1);
    tracep->declBit(c+745,"rda_int_d", false,-1);
    tracep->declBit(c+746,"rls_int_rise", false,-1);
    tracep->declBit(c+747,"thre_int_rise", false,-1);
    tracep->declBit(c+748,"ms_int_rise", false,-1);
    tracep->declBit(c+749,"ti_int_rise", false,-1);
    tracep->declBit(c+750,"rda_int_rise", false,-1);
    tracep->declBit(c+751,"rls_int_pnd", false,-1);
    tracep->declBit(c+752,"rda_int_pnd", false,-1);
    tracep->declBit(c+753,"thre_int_pnd", false,-1);
    tracep->declBit(c+754,"ms_int_pnd", false,-1);
    tracep->declBit(c+755,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBus(c+1787,"width", false,-1, 31,0);
    tracep->declBus(c+1715,"init_value", false,-1, 0,0);
    tracep->declBit(c+1577,"rst_i", false,-1);
    tracep->declBit(c+1576,"clk_i", false,-1);
    tracep->declBit(c+1669,"stage1_rst_i", false,-1);
    tracep->declBit(c+1674,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1596,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+674,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+756,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1577,"wb_rst_i", false,-1);
    tracep->declBus(c+679,"lcr", false,-1, 7,0);
    tracep->declBit(c+719,"rf_pop", false,-1);
    tracep->declBit(c+731,"srx_pad_i", false,-1);
    tracep->declBit(c+673,"enable", false,-1);
    tracep->declBit(c+688,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+726,"counter_t", false,-1, 9,0);
    tracep->declBus(c+722,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1648,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+698,"rf_overrun", false,-1);
    tracep->declBit(c+720,"rf_error_bit", false,-1);
    tracep->declBus(c+725,"rstate", false,-1, 3,0);
    tracep->declBit(c+721,"rf_push_pulse", false,-1);
    tracep->declBus(c+757,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+758,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+759,"rshift", false,-1, 7,0);
    tracep->declBit(c+760,"rparity", false,-1);
    tracep->declBit(c+761,"rparity_error", false,-1);
    tracep->declBit(c+762,"rframing_error", false,-1);
    tracep->declBit(c+763,"rbit_in", false,-1);
    tracep->declBit(c+764,"rparity_xor", false,-1);
    tracep->declBus(c+765,"counter_b", false,-1, 7,0);
    tracep->declBit(c+766,"rf_push_q", false,-1);
    tracep->declBus(c+767,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+768,"rf_push", false,-1);
    tracep->declBit(c+769,"break_error", false,-1);
    tracep->declBit(c+770,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+771,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+772,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+773,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1676,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1716,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1717,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1718,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1719,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1720,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1721,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1722,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1723,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1724,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1725,"sr_push", false,-1, 3,0);
    tracep->declBus(c+774,"toc_value", false,-1, 9,0);
    tracep->declBus(c+775,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1788,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1789,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1728,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1730,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1577,"wb_rst_i", false,-1);
    tracep->declBit(c+721,"push", false,-1);
    tracep->declBit(c+719,"pop", false,-1);
    tracep->declBus(c+767,"data_in", false,-1, 10,0);
    tracep->declBit(c+688,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1648,"data_out", false,-1, 10,0);
    tracep->declBit(c+698,"overrun", false,-1);
    tracep->declBus(c+722,"count", false,-1, 4,0);
    tracep->declBit(c+720,"error_bit", false,-1);
    tracep->declBus(c+1649,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+776+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+792,"top", false,-1, 3,0);
    tracep->declBus(c+793,"bottom", false,-1, 3,0);
    tracep->declBus(c+794,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+795,"word0", false,-1, 2,0);
    tracep->declBus(c+796,"word1", false,-1, 2,0);
    tracep->declBus(c+797,"word2", false,-1, 2,0);
    tracep->declBus(c+798,"word3", false,-1, 2,0);
    tracep->declBus(c+799,"word4", false,-1, 2,0);
    tracep->declBus(c+800,"word5", false,-1, 2,0);
    tracep->declBus(c+801,"word6", false,-1, 2,0);
    tracep->declBus(c+802,"word7", false,-1, 2,0);
    tracep->declBus(c+803,"word8", false,-1, 2,0);
    tracep->declBus(c+804,"word9", false,-1, 2,0);
    tracep->declBus(c+805,"word10", false,-1, 2,0);
    tracep->declBus(c+806,"word11", false,-1, 2,0);
    tracep->declBus(c+807,"word12", false,-1, 2,0);
    tracep->declBus(c+808,"word13", false,-1, 2,0);
    tracep->declBus(c+809,"word14", false,-1, 2,0);
    tracep->declBus(c+810,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1728,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1773,"data_width", false,-1, 31,0);
    tracep->declBus(c+1789,"depth", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+721,"we", false,-1);
    tracep->declBus(c+792,"a", false,-1, 3,0);
    tracep->declBus(c+793,"dpra", false,-1, 3,0);
    tracep->declBus(c+811,"di", false,-1, 7,0);
    tracep->declBus(c+1649,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+407+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1577,"wb_rst_i", false,-1);
    tracep->declBus(c+679,"lcr", false,-1, 7,0);
    tracep->declBit(c+718,"tf_push", false,-1);
    tracep->declBus(c+1569,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+673,"enable", false,-1);
    tracep->declBit(c+689,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+730,"stx_pad_o", false,-1);
    tracep->declBus(c+724,"tstate", false,-1, 2,0);
    tracep->declBus(c+723,"tf_count", false,-1, 4,0);
    tracep->declBus(c+812,"counter", false,-1, 4,0);
    tracep->declBus(c+813,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+814,"shift_out", false,-1, 6,0);
    tracep->declBit(c+815,"stx_o_tmp", false,-1);
    tracep->declBit(c+816,"parity_xor", false,-1);
    tracep->declBit(c+817,"tf_pop", false,-1);
    tracep->declBit(c+818,"bit_out", false,-1);
    tracep->declBus(c+1569,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1650,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+819,"tf_overrun", false,-1);
    tracep->declBus(c+1670,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1659,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1671,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1672,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1673,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1784,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1773,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1789,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1728,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1730,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+1577,"wb_rst_i", false,-1);
    tracep->declBit(c+718,"push", false,-1);
    tracep->declBit(c+817,"pop", false,-1);
    tracep->declBus(c+1569,"data_in", false,-1, 7,0);
    tracep->declBit(c+689,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1650,"data_out", false,-1, 7,0);
    tracep->declBit(c+819,"overrun", false,-1);
    tracep->declBus(c+723,"count", false,-1, 4,0);
    tracep->declBus(c+820,"top", false,-1, 3,0);
    tracep->declBus(c+821,"bottom", false,-1, 3,0);
    tracep->declBus(c+822,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1728,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1773,"data_width", false,-1, 31,0);
    tracep->declBus(c+1789,"depth", false,-1, 31,0);
    tracep->declBit(c+1576,"clk", false,-1);
    tracep->declBit(c+718,"we", false,-1);
    tracep->declBus(c+820,"a", false,-1, 3,0);
    tracep->declBus(c+821,"dpra", false,-1, 3,0);
    tracep->declBus(c+1569,"di", false,-1, 7,0);
    tracep->declBus(c+1650,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+423+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBit(c+1383,"auto_in_psel", false,-1);
    tracep->declBit(c+1384,"auto_in_penable", false,-1);
    tracep->declBit(c+1378,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1385,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1377,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+524,"auto_in_pready", false,-1);
    tracep->declBit(c+1665,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1666,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1590,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1591,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1592,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1593,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1594,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1595,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1576,"clock", false,-1);
    tracep->declBit(c+1577,"reset", false,-1);
    tracep->declBus(c+1553,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1383,"in_psel", false,-1);
    tracep->declBit(c+1384,"in_penable", false,-1);
    tracep->declBus(c+1377,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1378,"in_pwrite", false,-1);
    tracep->declBus(c+1379,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1380,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+524,"in_pready", false,-1);
    tracep->declBus(c+1666,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1665,"in_pslverr", false,-1);
    tracep->declBus(c+1590,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1591,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1592,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1593,"vga_hsync", false,-1);
    tracep->declBit(c+1594,"vga_vsync", false,-1);
    tracep->declBit(c+1595,"vga_valid", false,-1);
    tracep->declBit(c+1570,"is_write", false,-1);
    tracep->declBus(c+1571,"addr", false,-1, 31,0);
    tracep->declBit(c+524,"ready", false,-1);
    tracep->declBus(c+823,"i", false,-1, 31,0);
    tracep->declBus(c+1790,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1791,"h_active", false,-1, 31,0);
    tracep->declBus(c+1792,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1793,"h_total", false,-1, 31,0);
    tracep->declBus(c+1771,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1794,"v_active", false,-1, 31,0);
    tracep->declBus(c+1795,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1796,"v_total", false,-1, 31,0);
    tracep->declBus(c+824,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+439,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+825,"h_valid", false,-1);
    tracep->declBit(c+440,"v_valid", false,-1);
    tracep->declBus(c+826,"h_addr", false,-1, 9,0);
    tracep->declBus(c+441,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1651,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+513,"sck", false,-1);
    tracep->declBit(c+957,"ss", false,-1);
    tracep->declBit(c+942,"mosi", false,-1);
    tracep->declBit(c+937,"miso", false,-1);
    tracep->declBus(c+938,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+939,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+940,"counter", false,-1, 2,0);
    tracep->declBit(c+941,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+513,"sck", false,-1);
    tracep->declBit(c+827,"ss", false,-1);
    tracep->declBit(c+942,"mosi", false,-1);
    tracep->declBit(c+1652,"miso", false,-1);
    tracep->declBit(c+827,"reset", false,-1);
    tracep->declBus(c+931,"state", false,-1, 2,0);
    tracep->declBus(c+932,"counter", false,-1, 7,0);
    tracep->declBus(c+933,"cmd", false,-1, 7,0);
    tracep->declBus(c+934,"addr", false,-1, 23,0);
    tracep->declBus(c+935,"data", false,-1, 31,0);
    tracep->declBit(c+936,"ren", false,-1);
    tracep->declBus(c+1653,"rdata", false,-1, 31,0);
    tracep->declBus(c+1654,"raddr", false,-1, 31,0);
    tracep->declBus(c+1655,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+936,"valid", false,-1);
    tracep->declBus(c+933,"cmd", false,-1, 7,0);
    tracep->declBus(c+1654,"addr", false,-1, 31,0);
    tracep->declBus(c+1653,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1572,"sck", false,-1);
    tracep->declBit(c+1573,"ce_n", false,-1);
    tracep->declBus(c+1599,"dio", false,-1, 3,0);
    tracep->declBit(c+1573,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+975,"cmd", false,-1, 7,0);
    tracep->declBus(c+976,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+977+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1656,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1657,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+981,"ren", false,-1);
    tracep->declBit(c+982,"wen", false,-1);
    tracep->declBus(c+983,"len", false,-1, 7,0);
    tracep->declBus(c+1658,"rdata", false,-1, 31,0);
    tracep->declBus(c+984,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1572,"clock", false,-1);
    tracep->declBit(c+981,"ren", false,-1);
    tracep->declBit(c+982,"wen", false,-1);
    tracep->declBus(c+975,"cmd", false,-1, 7,0);
    tracep->declBus(c+984,"saddr", false,-1, 31,0);
    tracep->declBus(c+1658,"rdata", false,-1, 31,0);
    tracep->declBus(c+985,"wdata", false,-1, 31,0);
    tracep->declBus(c+983,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1600,"clk", false,-1);
    tracep->declBit(c+515,"cke", false,-1);
    tracep->declBit(c+943,"cs", false,-1);
    tracep->declBit(c+944,"ras", false,-1);
    tracep->declBit(c+945,"cas", false,-1);
    tracep->declBit(c+946,"we", false,-1);
    tracep->declBus(c+947,"a", false,-1, 12,0);
    tracep->declBus(c+958,"ba", false,-1, 1,0);
    tracep->declBus(c+959,"dqm", false,-1, 1,0);
    tracep->declBus(c+973,"dq", false,-1, 15,0);
    tracep->declBit(c+960,"reset", false,-1);
    tracep->declBus(c+834,"state", false,-1, 2,0);
    tracep->declBus(c+835,"counter", false,-1, 7,0);
    tracep->declBus(c+836,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1797,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+837,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+838,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+961,"nop", false,-1);
    tracep->declBit(c+962,"active", false,-1);
    tracep->declBit(c+963,"precharge", false,-1);
    tracep->declBit(c+964,"read", false,-1);
    tracep->declBit(c+965,"write", false,-1);
    tracep->declBit(c+966,"burstterm", false,-1);
    tracep->declBit(c+967,"autorefresh", false,-1);
    tracep->declBit(c+968,"mode", false,-1);
    tracep->declBus(c+839,"test", false,-1, 15,0);
    tracep->declBus(c+840,"test1", false,-1, 15,0);
    tracep->declBus(c+841,"sense", false,-1, 31,0);
    tracep->declBit(c+842,"write_burst_mode", false,-1);
    tracep->declBus(c+843,"op_mode", false,-1, 1,0);
    tracep->declBus(c+844,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+845,"burst_type", false,-1);
    tracep->declBus(c+846,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+847,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+848,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+849,"bank", false,-1, 1,0);
    tracep->declBus(c+850,"row", false,-1, 12,0);
    tracep->declBus(c+851,"column", false,-1, 8,0);
    tracep->declBus(c+852,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+853,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+854,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1600,"clk", false,-1);
    tracep->declBit(c+515,"cke", false,-1);
    tracep->declBit(c+943,"cs", false,-1);
    tracep->declBit(c+944,"ras", false,-1);
    tracep->declBit(c+945,"cas", false,-1);
    tracep->declBit(c+946,"we", false,-1);
    tracep->declBus(c+947,"a", false,-1, 12,0);
    tracep->declBus(c+958,"ba", false,-1, 1,0);
    tracep->declBus(c+969,"dqm", false,-1, 1,0);
    tracep->declBus(c+974,"dq", false,-1, 15,0);
    tracep->declBit(c+960,"reset", false,-1);
    tracep->declBus(c+855,"state", false,-1, 2,0);
    tracep->declBus(c+856,"counter", false,-1, 7,0);
    tracep->declBus(c+857,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1798,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+858,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+859,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+961,"nop", false,-1);
    tracep->declBit(c+962,"active", false,-1);
    tracep->declBit(c+963,"precharge", false,-1);
    tracep->declBit(c+964,"read", false,-1);
    tracep->declBit(c+965,"write", false,-1);
    tracep->declBit(c+966,"burstterm", false,-1);
    tracep->declBit(c+967,"autorefresh", false,-1);
    tracep->declBit(c+968,"mode", false,-1);
    tracep->declBus(c+860,"test", false,-1, 15,0);
    tracep->declBus(c+861,"test1", false,-1, 15,0);
    tracep->declBus(c+862,"sense", false,-1, 31,0);
    tracep->declBit(c+863,"write_burst_mode", false,-1);
    tracep->declBus(c+864,"op_mode", false,-1, 1,0);
    tracep->declBus(c+865,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+866,"burst_type", false,-1);
    tracep->declBus(c+867,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+868,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+869,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+870,"bank", false,-1, 1,0);
    tracep->declBus(c+871,"row", false,-1, 12,0);
    tracep->declBus(c+872,"column", false,-1, 8,0);
    tracep->declBus(c+873,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+874,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+875,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1600,"clk", false,-1);
    tracep->declBit(c+515,"cke", false,-1);
    tracep->declBit(c+943,"cs", false,-1);
    tracep->declBit(c+944,"ras", false,-1);
    tracep->declBit(c+945,"cas", false,-1);
    tracep->declBit(c+946,"we", false,-1);
    tracep->declBus(c+947,"a", false,-1, 12,0);
    tracep->declBus(c+958,"ba", false,-1, 1,0);
    tracep->declBus(c+970,"dqm", false,-1, 1,0);
    tracep->declBus(c+973,"dq", false,-1, 15,0);
    tracep->declBit(c+960,"reset", false,-1);
    tracep->declBus(c+876,"state", false,-1, 2,0);
    tracep->declBus(c+877,"counter", false,-1, 7,0);
    tracep->declBus(c+878,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1799,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+879,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+880,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+961,"nop", false,-1);
    tracep->declBit(c+962,"active", false,-1);
    tracep->declBit(c+963,"precharge", false,-1);
    tracep->declBit(c+964,"read", false,-1);
    tracep->declBit(c+965,"write", false,-1);
    tracep->declBit(c+966,"burstterm", false,-1);
    tracep->declBit(c+967,"autorefresh", false,-1);
    tracep->declBit(c+968,"mode", false,-1);
    tracep->declBus(c+881,"test", false,-1, 15,0);
    tracep->declBus(c+882,"test1", false,-1, 15,0);
    tracep->declBus(c+883,"sense", false,-1, 31,0);
    tracep->declBit(c+884,"write_burst_mode", false,-1);
    tracep->declBus(c+885,"op_mode", false,-1, 1,0);
    tracep->declBus(c+886,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+887,"burst_type", false,-1);
    tracep->declBus(c+888,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+889,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+890,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+891,"bank", false,-1, 1,0);
    tracep->declBus(c+892,"row", false,-1, 12,0);
    tracep->declBus(c+893,"column", false,-1, 8,0);
    tracep->declBus(c+894,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+895,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+896,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1600,"clk", false,-1);
    tracep->declBit(c+515,"cke", false,-1);
    tracep->declBit(c+943,"cs", false,-1);
    tracep->declBit(c+944,"ras", false,-1);
    tracep->declBit(c+945,"cas", false,-1);
    tracep->declBit(c+946,"we", false,-1);
    tracep->declBus(c+947,"a", false,-1, 12,0);
    tracep->declBus(c+958,"ba", false,-1, 1,0);
    tracep->declBus(c+971,"dqm", false,-1, 1,0);
    tracep->declBus(c+974,"dq", false,-1, 15,0);
    tracep->declBit(c+960,"reset", false,-1);
    tracep->declBus(c+897,"state", false,-1, 2,0);
    tracep->declBus(c+898,"counter", false,-1, 7,0);
    tracep->declBus(c+899,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1800,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+900,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+901,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+961,"nop", false,-1);
    tracep->declBit(c+962,"active", false,-1);
    tracep->declBit(c+963,"precharge", false,-1);
    tracep->declBit(c+964,"read", false,-1);
    tracep->declBit(c+965,"write", false,-1);
    tracep->declBit(c+966,"burstterm", false,-1);
    tracep->declBit(c+967,"autorefresh", false,-1);
    tracep->declBit(c+968,"mode", false,-1);
    tracep->declBus(c+902,"test", false,-1, 15,0);
    tracep->declBus(c+903,"test1", false,-1, 15,0);
    tracep->declBus(c+904,"sense", false,-1, 31,0);
    tracep->declBit(c+905,"write_burst_mode", false,-1);
    tracep->declBus(c+906,"op_mode", false,-1, 1,0);
    tracep->declBus(c+907,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+908,"burst_type", false,-1);
    tracep->declBus(c+909,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+910,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+911,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+912,"bank", false,-1, 1,0);
    tracep->declBus(c+913,"row", false,-1, 12,0);
    tracep->declBus(c+914,"column", false,-1, 8,0);
    tracep->declBus(c+915,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+916,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+917,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullIData(oldp+11,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullCData(oldp+12,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                    >> 1U))),2);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
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
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+61,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+64,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                     ? (vlSelf->__VdfgTmp_hf132a334__0 
                                        >> 0x18U) : 0U)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                               << 0x18U) | ((0xff0000U 
                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x10U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (vlSelf->__VdfgTmp_hf132a334__0 
                                                      >> 8U)
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? vlSelf->__VdfgTmp_hf132a334__0
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+65,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+147,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+157,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+217,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+221,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+229,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+241,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+249,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+253,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+257,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+261,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+265,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+273,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+281,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+289,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+293,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+297,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+301,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+313,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+317,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+321,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+325,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+329,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+333,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+337,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+441,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullBit(oldp+442,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))))));
    bufp->fullCData(oldp+443,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+444,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+445,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+446,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+447,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+448,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))));
    bufp->fullCData(oldp+449,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),4);
    bufp->fullCData(oldp+450,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+451,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+452,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arlen),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arid),4);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arsize),3);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arburst),2);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),5);
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_id));
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_sel_id),4);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_id),32);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_id),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_id),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_id),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_id),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex),7);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex),3);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),5);
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex),32);
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wen_ex));
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ls),32);
    bufp->fullIData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ls),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ls),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ls),32);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls),5);
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ls));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid_reg));
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state));
    bufp->fullQData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__done_reg));
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__k),32);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__isCHazard_reg));
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullIData(oldp+503,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex
                                : 0U)),32);
    bufp->fullIData(oldp+504,(((((- (IData)((0x13U 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)))) 
                                 | (- (IData)((0x33U 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res) 
                               | (((- (IData)((0x6fU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)))) 
                                   & ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id)) 
                                  | (((- (IData)((0x67U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)))) 
                                      & ((IData)(4U) 
                                         + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id)) 
                                     | (((- (IData)(
                                                    (0x37U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                        | (((- (IData)(
                                                       (0x17U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)))) 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h34b2fd6d__0) 
                                           | ((- (IData)(
                                                         ((0x73U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                          & ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                                             | ((2U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                                                | (0U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))))) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_id))))))),32);
    bufp->fullBit(oldp+505,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+506,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+507,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+508,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+509,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+510,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+511,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullIData(oldp+512,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex)),32);
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+539,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+541,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+571,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+572,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+575,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+576,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+581,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+585,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+600,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+601,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+603,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+604,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+605,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+606,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+607,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+615,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+650,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+651,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+652,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+653,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+654,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+655,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+656,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+660,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+662,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+663,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+665,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+669,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+670,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+672,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+690,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+691,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+692,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+693,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+694,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+695,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+696,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+699,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+700,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+701,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+720,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+727,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+746,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+747,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+748,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+749,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+750,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+769,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+770,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+771,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+772,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+773,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+775,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+794,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+811,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+822,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+826,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+836,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+837,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+838,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+839,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+840,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+841,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+842,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+843,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+844,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+845,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+846,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+847,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+848,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+850,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+851,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+857,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+858,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+859,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+860,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+862,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+863,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+864,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+865,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+866,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+867,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+868,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+869,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+871,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+872,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+878,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+879,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+880,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+881,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+882,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+883,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+884,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+885,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+886,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+887,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+888,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+889,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+890,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+892,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+893,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+899,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+900,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+901,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+902,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+903,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+904,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+905,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+906,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+907,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+908,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+909,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+910,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+911,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+913,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+914,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullBit(oldp+918,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+919,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+934,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+936,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+943,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+944,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+945,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+946,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+958,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+963,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+972,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+973,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+974,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+976,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+984,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+985,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullCData(oldp+986,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))),4);
    bufp->fullIData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[0U]),32);
    bufp->fullCData(oldp+988,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0)),8);
    bufp->fullCData(oldp+989,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))),3);
    bufp->fullCData(oldp+990,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0))),2);
    bufp->fullCData(oldp+991,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))),4);
    bufp->fullIData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[0U]),32);
    bufp->fullCData(oldp+993,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0)),8);
    bufp->fullCData(oldp+994,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))),3);
    bufp->fullCData(oldp+995,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0))),2);
    bufp->fullIData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]),32);
    bufp->fullCData(oldp+997,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))),4);
    bufp->fullBit(oldp+998,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+999,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0))));
    bufp->fullBit(oldp+1000,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0))));
    bufp->fullBit(oldp+1001,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0))));
    bufp->fullBit(oldp+1002,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0))));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1007,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))))),16);
    bufp->fullSData(oldp+1008,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))))),16);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+1014,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),7);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullIData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id),32);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_id));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_id));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_id));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_id));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_id));
    bufp->fullBit(oldp+1038,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ex),32);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ex),32);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ex),32);
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_ex));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_ex));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_ex));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_ex));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_read_ex));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_write_ex));
    bufp->fullIData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex),32);
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex),32);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wmask_ex),4);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awsize_ex),3);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arsize_ex),3);
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awlen_ex),8);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arlen_ex),8);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awburst_ex),2);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arburst_ex),2);
    bufp->fullBit(oldp+1060,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1061,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1062,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ls),32);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ls),32);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ls),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ls),32);
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_ls));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_ls));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_ls));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_ls));
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[2U]),32);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[2U]),32);
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]),32);
    bufp->fullCData(oldp+1089,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1090,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1091,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1092,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1093,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1094,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1095,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1096,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1097,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1098,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1099,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1100,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1101,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1102,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+1105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullIData(oldp+1107,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+1109,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_waddr),32);
    bufp->fullIData(oldp+1111,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hcabe8ba7__0)
                                     ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id 
                                        << 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hae19a919__0)
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id 
                                                   << 0x10U)
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha9a1b454__0)
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id 
                                                    << 0x18U)
                                                    : 0U))))),32);
    bufp->fullCData(oldp+1112,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                 ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                          ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                   ? 0xfU
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hcabe8ba7__0) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                    ? 2U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hcabe8ba7__0) 
                                                     & (1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                     ? 6U
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hcabe8ba7__0) 
                                                      & (2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                      ? 0xeU
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hae19a919__0) 
                                                       & (0U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                       ? 4U
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hae19a919__0) 
                                                        & (1U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                        ? 0xcU
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hae19a919__0) 
                                                         & (2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                         ? 0xcU
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha9a1b454__0) 
                                                          & (0U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                          ? 8U
                                                          : 
                                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha9a1b454__0) 
                                                           & (1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                           ? 8U
                                                           : 
                                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha9a1b454__0) 
                                                            & (2U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                            ? 8U
                                                            : 0U))))))))))))),4);
    bufp->fullIData(oldp+1113,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h46116b93__0
                                 : 0U)),32);
    bufp->fullCData(oldp+1114,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                 ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                          ? 1U : 2U))),3);
    bufp->fullCData(oldp+1115,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                 ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                             | (5U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1116,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1117,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullSData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),16);
    bufp->fullSData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),16);
    bufp->fullSData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),16);
    bufp->fullSData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),16);
    bufp->fullIData(oldp+1124,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1125,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1126,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1127,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1128,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1129,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),8);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access_raw),8);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state),2);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+1138,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),7);
    bufp->fullCData(oldp+1139,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
                                 | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                    | ((0x13U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                       | ((0xfU == 
                                           (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                          | ((0x73U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                             | (0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)))))))
                                 ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 7U))
                                 : 0U)),5);
    bufp->fullCData(oldp+1140,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                      >> 0xcU))),3);
    bufp->fullIData(oldp+1141,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1142,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+1143,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1144,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xdU) | ((0x1000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                         >> 7U))))))),32);
    bufp->fullIData(oldp+1145,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0x15U) | ((0x100000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                  >> 0xbU)) 
                                              | ((0xff000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                          >> 0x14U))))))),32);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7),7);
    bufp->fullCData(oldp+1148,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                         >> 0x14U))),5);
    bufp->fullBit(oldp+1149,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
                              | ((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                 | ((0xfU == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                    | ((0x73U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                       | ((0x33U == 
                                           (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                          | (3U == 
                                             (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)))))))));
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__alu_sel),4);
    bufp->fullBit(oldp+1151,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c5312ed__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h4616dcf9__0))));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mstatus_wen));
    bufp->fullBit(oldp+1153,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c6f122f__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h4616dcf9__0))));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mtvec_wen));
    bufp->fullBit(oldp+1155,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata_reg),32);
    bufp->fullBit(oldp+1159,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid))));
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),3);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m),2);
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1186,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1187,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[1U]),32);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[1U]),32);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[1U]),32);
    bufp->fullCData(oldp+1192,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1193,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1194,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1195,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1196,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1197,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1198,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1199,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1200,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1201,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1202,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1203,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1204,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1205,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 1U))));
    bufp->fullCData(oldp+1206,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1207,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))
                                 : 0U)),3);
    bufp->fullIData(oldp+1208,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]
                                 : 0U)),32);
    bufp->fullCData(oldp+1209,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))
                                 : 0U)),4);
    bufp->fullBit(oldp+1210,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+1211,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1233,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1234,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1236,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1251,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1252,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1253,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1254,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1255,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1256,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1264,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1265,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1266,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1271,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1273,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1274,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullIData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isRAW));
    bufp->fullIData(oldp+1285,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1288,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1289,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1290,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1291,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1292,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1293,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1294,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1295,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1298,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1299,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1300,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1301,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1302,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1303,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1304,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1305,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1306,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1307,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1308,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1309,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1310,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1311,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1312,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1313,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1314,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1315,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1316,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1317,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1318,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1319,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1320,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1321,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0))));
    bufp->fullBit(oldp+1322,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1323,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1324,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1325,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1326,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1352,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullSData(oldp+1354,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1355,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1356,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1361,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h8362b754__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullIData(oldp+1369,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1370,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullIData(oldp+1371,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1372,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1373,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1374,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1377,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1382,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1383,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1384,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1386,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1388,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1389,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1391,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1394,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1395,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1396,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1401,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1404,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1444,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1445,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1466,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1467,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1489,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1490,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1491,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1492,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1493,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1494,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1495,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1496,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1498,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1499,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1500,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1501,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1502,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1503,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1504,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1505,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1506,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1507,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1508,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1509,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1510,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1511,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1512,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1513,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1515,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1516,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1517,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1518,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1519,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1520,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata),32);
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullIData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1544,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullCData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1571,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1576,(vlSelf->clock));
    bufp->fullBit(oldp+1577,(vlSelf->reset));
    bufp->fullSData(oldp+1578,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1579,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1580,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1581,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1582,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1583,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1584,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1585,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1586,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1587,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1588,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1589,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1590,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1591,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1592,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1593,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1594,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1595,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1596,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1597,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1598,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1599,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1600,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1601,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                  : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x18U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                        << 8U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                 : 0U)
                                             : 0U) 
                                           | (((0U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))
                                                ? (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [3U] 
                                                    << 0x18U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [2U] 
                                                       << 0x10U) 
                                                      | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                          [1U] 
                                                          << 8U) 
                                                         | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                         [0U])))
                                                : 0U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                   : 0U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                      : 0U) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                        : 0U))))))),32);
    bufp->fullBit(oldp+1602,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1603,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1605,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1607,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullCData(oldp+1608,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1609,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (vlSelf->__VdfgTmp_hf132a334__0 
                                                      >> 0x18U)
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                   << 0x18U) 
                                                  | ((0xff0000U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 0x10U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                               ? 
                                                              (vlSelf->__VdfgTmp_hf132a334__0 
                                                               >> 8U)
                                                               : 0U)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                ? vlSelf->__VdfgTmp_hf132a334__0
                                                                : 0U)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                               : 0U)))),32);
    bufp->fullCData(oldp+1610,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1611,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1612,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1613,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0)))));
    bufp->fullBit(oldp+1614,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1615,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1616,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                     << 1U))))
                                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                  : 0U)))),2);
    bufp->fullIData(oldp+1617,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                  ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                           : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                       : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                  : 0U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? 
                                                       (vlSelf->__VdfgTmp_hf132a334__0 
                                                        >> 0x18U)
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                     << 0x18U) 
                                                    | ((0xff0000U 
                                                        & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? 
                                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                              ? 
                                                             (vlSelf->__VdfgTmp_hf132a334__0 
                                                              >> 0x10U)
                                                              : 0U)
                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                           << 0x10U)) 
                                                       | ((0xff00U 
                                                           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                ? 
                                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                 ? 
                                                                (vlSelf->__VdfgTmp_hf132a334__0 
                                                                 >> 8U)
                                                                 : 0U)
                                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                 ? 
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                  ? vlSelf->__VdfgTmp_hf132a334__0
                                                                  : 0U)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                                    : 0U)))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata
                                            : 0U))),32);
    bufp->fullCData(oldp+1618,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                  ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                                            : 0U))),2);
    bufp->fullBit(oldp+1619,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1620,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1621,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1623,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                           << 1U))))
                                                    : 0U) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                      : 0U)))))
                                 : 0U)),2);
    bufp->fullCData(oldp+1624,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                   : 0U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                      ? 0U
                                                      : 3U)
                                                     : 0U))
                                              : 0U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                                                : 0U))))
                                 : 0U)),2);
    bufp->fullBit(oldp+1625,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                         >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+1626,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullBit(oldp+1627,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullIData(oldp+1628,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1629,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                           << 1U))))
                                                    : 0U) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                      : 0U)))))
                                 : 0U)),2);
    bufp->fullCData(oldp+1630,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                   : 0U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                      ? 0U
                                                      : 3U)
                                                     : 0U))
                                              : 0U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                                                : 0U))))
                                 : 0U)),2);
    bufp->fullBit(oldp+1631,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullIData(oldp+1633,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                                >> 2U)))) 
                                 & ((- (IData)((0x2000000U 
                                                == 
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime))) 
                                | ((- (IData)((0x2000004U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullIData(oldp+1634,(((((0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h7b512b0c__0) 
                                     | ((5U == (7U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 0xcU))) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hfe6787cb__0)))) 
                                 | ((0x33U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hedff33ee__0) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h03bca545__0) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h936ddf19__0) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha471d13f__0) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha0c2c30e__0) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha14d5569__0) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h5743f3e8__0)))))))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h053e6e4e__0) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h23283275__0))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1
                                     : 0U))),32);
    bufp->fullIData(oldp+1635,((((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h7b512b0c__0) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hfe6787cb__0)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h053e6e4e__0)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm
                                     : (((0x13U == 
                                          (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                         & ((1U == 
                                             (7U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                               >> 0xcU))) 
                                            | (5U == 
                                               (7U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 0xcU)))))
                                         ? (0x1fU & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))
                                         : (((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hedff33ee__0) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h936ddf19__0) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha471d13f__0) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h5743f3e8__0)))))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                             : (((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h03bca545__0) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha0c2c30e__0) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha14d5569__0))))
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))
                                                  ? 0U
                                                  : 
                                                 (0x1fU 
                                                  & vlSelf->__VdfgTmp_h8e10a338__0))
                                                 : 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h23283275__0)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                                  : 0U))))))),32);
    bufp->fullIData(oldp+1636,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c5312ed__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mstatus_wen)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c6f122f__0)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mtvec_wen)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec
                                             : 0U))))),32);
    bufp->fullCData(oldp+1637,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                       : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                           : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                          << 1U))))
                                                : 0U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                  : 0U)))))),2);
    bufp->fullCData(oldp+1638,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                          ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                               : 0U) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U))
                                          : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                                                    : 0U))))),2);
    bufp->fullBit(oldp+1639,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                            >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+1640,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                   : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))))));
    bufp->fullIData(oldp+1641,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1644,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1645,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1646,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                     ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)) 
                                         << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid))
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                         << 5U) | (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1647,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullSData(oldp+1648,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1651,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1652,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1654,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1656,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1657,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1659,(1U),3);
    bufp->fullCData(oldp+1660,(0U),2);
    bufp->fullCData(oldp+1661,(1U),2);
    bufp->fullCData(oldp+1662,(2U),2);
    bufp->fullCData(oldp+1663,(3U),2);
    bufp->fullSData(oldp+1664,(0xaU),11);
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1669,(0U));
    bufp->fullCData(oldp+1670,(0U),3);
    bufp->fullCData(oldp+1671,(2U),3);
    bufp->fullCData(oldp+1672,(3U),3);
    bufp->fullCData(oldp+1673,(4U),3);
    bufp->fullBit(oldp+1674,(1U));
    bufp->fullBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1676,(0U),4);
    bufp->fullIData(oldp+1677,(0U),32);
    bufp->fullCData(oldp+1678,(0U),8);
    bufp->fullBit(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1689,(0U),32);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bid),4);
    bufp->fullCData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bresp),2);
    bufp->fullBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_awready));
    bufp->fullBit(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wready));
    bufp->fullBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bvalid));
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullIData(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awaddr),32);
    bufp->fullIData(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wdata),32);
    bufp->fullCData(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wstrb),4);
    bufp->fullCData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awlen),8);
    bufp->fullCData(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awid),4);
    bufp->fullCData(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awsize),3);
    bufp->fullCData(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awburst),2);
    bufp->fullBit(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awvalid));
    bufp->fullBit(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wvalid));
    bufp->fullBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_bready));
    bufp->fullBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wlast));
    bufp->fullCData(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1712,(0x2000000U),32);
    bufp->fullIData(oldp+1713,(0x2000004U),32);
    bufp->fullBit(oldp+1714,(0U));
    bufp->fullBit(oldp+1715,(1U));
    bufp->fullCData(oldp+1716,(1U),4);
    bufp->fullCData(oldp+1717,(2U),4);
    bufp->fullCData(oldp+1718,(3U),4);
    bufp->fullCData(oldp+1719,(4U),4);
    bufp->fullCData(oldp+1720,(5U),4);
    bufp->fullCData(oldp+1721,(6U),4);
    bufp->fullCData(oldp+1722,(7U),4);
    bufp->fullCData(oldp+1723,(8U),4);
    bufp->fullCData(oldp+1724,(9U),4);
    bufp->fullCData(oldp+1725,(0xaU),4);
    bufp->fullCData(oldp+1726,(0xbU),4);
    bufp->fullCData(oldp+1727,(0xcU),4);
    bufp->fullIData(oldp+1728,(4U),32);
    bufp->fullIData(oldp+1729,(3U),32);
    bufp->fullIData(oldp+1730,(5U),32);
    bufp->fullIData(oldp+1731,(0x20U),32);
    bufp->fullIData(oldp+1732,(0x1000000U),32);
    bufp->fullIData(oldp+1733,(0x1000004U),32);
    bufp->fullCData(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY));
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID));
    bufp->fullBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1742,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1743,(0x1800U),32);
    bufp->fullIData(oldp+1744,(0x79737978U),32);
    bufp->fullCData(oldp+1745,(4U),8);
    bufp->fullCData(oldp+1746,(8U),8);
    bufp->fullCData(oldp+1747,(3U),8);
    bufp->fullCData(oldp+1748,(0x9fU),8);
    bufp->fullCData(oldp+1749,(0x25U),8);
    bufp->fullCData(oldp+1750,(0xdU),8);
    bufp->fullCData(oldp+1751,(0x99U),8);
    bufp->fullCData(oldp+1752,(0x49U),8);
    bufp->fullCData(oldp+1753,(0x41U),8);
    bufp->fullCData(oldp+1754,(0x1fU),8);
    bufp->fullCData(oldp+1755,(1U),8);
    bufp->fullCData(oldp+1756,(9U),8);
    bufp->fullCData(oldp+1757,(0x11U),8);
    bufp->fullCData(oldp+1758,(0xc1U),8);
    bufp->fullCData(oldp+1759,(0x63U),8);
    bufp->fullCData(oldp+1760,(0x85U),8);
    bufp->fullCData(oldp+1761,(0x61U),8);
    bufp->fullCData(oldp+1762,(0x71U),8);
    bufp->fullCData(oldp+1763,(0xf0U),8);
    bufp->fullCData(oldp+1764,(0xe0U),8);
    bufp->fullCData(oldp+1765,(0x15U),8);
    bufp->fullCData(oldp+1766,(0xebU),8);
    bufp->fullCData(oldp+1767,(0x38U),8);
    bufp->fullIData(oldp+1768,(0x64U),32);
    bufp->fullIData(oldp+1769,(0x18U),32);
    bufp->fullIData(oldp+1770,(9U),32);
    bufp->fullIData(oldp+1771,(2U),32);
    bufp->fullIData(oldp+1772,(6U),32);
    bufp->fullIData(oldp+1773,(8U),32);
    bufp->fullIData(oldp+1774,(0xdU),32);
    bufp->fullIData(oldp+1775,(0x2000U),32);
    bufp->fullIData(oldp+1776,(0x2710U),32);
    bufp->fullIData(oldp+1777,(0x30cU),32);
    bufp->fullSData(oldp+1778,(0x20U),13);
    bufp->fullIData(oldp+1779,(0xaU),32);
    bufp->fullIData(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1781,(0x11U),32);
    bufp->fullIData(oldp+1782,(0x30000000U),32);
    bufp->fullIData(oldp+1783,(0x3fffffffU),32);
    bufp->fullCData(oldp+1784,(5U),3);
    bufp->fullCData(oldp+1785,(6U),3);
    bufp->fullCData(oldp+1786,(7U),3);
    bufp->fullIData(oldp+1787,(1U),32);
    bufp->fullIData(oldp+1788,(0xbU),32);
    bufp->fullIData(oldp+1789,(0x10U),32);
    bufp->fullIData(oldp+1790,(0x60U),32);
    bufp->fullIData(oldp+1791,(0x90U),32);
    bufp->fullIData(oldp+1792,(0x310U),32);
    bufp->fullIData(oldp+1793,(0x320U),32);
    bufp->fullIData(oldp+1794,(0x23U),32);
    bufp->fullIData(oldp+1795,(0x203U),32);
    bufp->fullIData(oldp+1796,(0x20dU),32);
    bufp->fullSData(oldp+1797,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1798,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1799,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1800,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
