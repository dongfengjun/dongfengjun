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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBus(c+1620,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1621,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1622,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1623,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1624,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1625,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1626,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1627,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1628,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1629,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1630,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1631,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1632,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1633,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1634,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1635,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1636,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1637,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1638,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1639,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBus(c+1620,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1621,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1622,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1623,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1624,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1625,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1626,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1627,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1628,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1629,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1630,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1631,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1632,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1633,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1634,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1635,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1636,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1637,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1638,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1639,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+503,"spi_sck", false,-1);
    tracep->declBus(c+504,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+933,"spi_mosi", false,-1);
    tracep->declBit(c+1640,"spi_miso", false,-1);
    tracep->declBit(c+1638,"uart_rx", false,-1);
    tracep->declBit(c+1639,"uart_tx", false,-1);
    tracep->declBit(c+1614,"psram_sck", false,-1);
    tracep->declBit(c+1615,"psram_ce_n", false,-1);
    tracep->declBus(c+1641,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1642,"sdram_clk", false,-1);
    tracep->declBit(c+505,"sdram_cke", false,-1);
    tracep->declBit(c+934,"sdram_cs", false,-1);
    tracep->declBit(c+935,"sdram_ras", false,-1);
    tracep->declBit(c+936,"sdram_cas", false,-1);
    tracep->declBit(c+937,"sdram_we", false,-1);
    tracep->declBus(c+938,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+939,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+506,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+963,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1620,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1621,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1622,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1623,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1624,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1625,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1626,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1627,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1628,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1629,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1630,"ps2_clk", false,-1);
    tracep->declBit(c+1631,"ps2_data", false,-1);
    tracep->declBus(c+1632,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1633,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1634,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1635,"vga_hsync", false,-1);
    tracep->declBit(c+1636,"vga_vsync", false,-1);
    tracep->declBit(c+1637,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBus(c+1241,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1242,"in_psel", false,-1);
    tracep->declBit(c+908,"in_penable", false,-1);
    tracep->declBus(c+1695,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1243,"in_pwrite", false,-1);
    tracep->declBus(c+1244,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1245,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+507,"in_pready", false,-1);
    tracep->declBus(c+508,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+509,"in_pslverr", false,-1);
    tracep->declBus(c+1330,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1374,"out_psel", false,-1);
    tracep->declBit(c+1375,"out_penable", false,-1);
    tracep->declBus(c+1376,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1377,"out_pwrite", false,-1);
    tracep->declBus(c+1378,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1380,"out_pready", false,-1);
    tracep->declBus(c+1643,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1381,"out_pslverr", false,-1);
    tracep->declBus(c+1696,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1697,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1698,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1699,"DELAY", false,-1, 1,0);
    tracep->declBus(c+510,"state", false,-1, 1,0);
    tracep->declBus(c+511,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+512,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+513,"pslverr_reg", false,-1);
    tracep->declBus(c+1700,"r", false,-1, 10,0);
    tracep->declBus(c+1698,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1374,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1375,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1377,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1330,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1376,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1380,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1381,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1643,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1382,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1383,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1377,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1384,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1376,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+514,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1701,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1702,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1385,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1386,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1377,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1331,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1376,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+515,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1703,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+516,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1387,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1388,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1377,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1331,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1376,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+517,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1704,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+518,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1389,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1390,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1377,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1330,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1376,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1644,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1705,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+909,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1391,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1392,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1377,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1331,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1376,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1393,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1705,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1394,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1395,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1396,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1377,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1384,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1376,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1645,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1705,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1397,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1398,"sel_0", false,-1);
    tracep->declBit(c+1399,"sel_1", false,-1);
    tracep->declBit(c+1400,"sel_2", false,-1);
    tracep->declBit(c+1401,"sel_3", false,-1);
    tracep->declBit(c+1402,"sel_4", false,-1);
    tracep->declBit(c+1403,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1246,"auto_in_awready", false,-1);
    tracep->declBit(c+1247,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1248,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1249,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1250,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1246,"auto_in_wready", false,-1);
    tracep->declBit(c+1251,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1252,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1253,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1404,"auto_in_bready", false,-1);
    tracep->declBit(c+1405,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1646,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1254,"auto_in_arready", false,-1);
    tracep->declBit(c+1255,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1256,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1257,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1258,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1406,"auto_in_rready", false,-1);
    tracep->declBit(c+1407,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1647,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1646,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1242,"auto_out_psel", false,-1);
    tracep->declBit(c+908,"auto_out_penable", false,-1);
    tracep->declBit(c+1243,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1241,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1244,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1245,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+507,"auto_out_pready", false,-1);
    tracep->declBit(c+509,"auto_out_pslverr", false,-1);
    tracep->declBus(c+508,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+908,"nodeOut_penable", false,-1);
    tracep->declBus(c+910,"state", false,-1, 1,0);
    tracep->declBit(c+1254,"accept_read", false,-1);
    tracep->declBit(c+1246,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1243,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+519,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1646,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1407,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1405,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1408,"in_arready", false,-1);
    tracep->declBit(c+1259,"in_arvalid", false,-1);
    tracep->declBus(c+1038,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1409,"in_rready", false,-1);
    tracep->declBit(c+520,"in_rvalid", false,-1);
    tracep->declBus(c+521,"in_rid", false,-1, 3,0);
    tracep->declBus(c+522,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+523,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+524,"in_rlast", false,-1);
    tracep->declBit(c+1410,"in_awready", false,-1);
    tracep->declBit(c+1260,"in_awvalid", false,-1);
    tracep->declBus(c+1043,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1046,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1047,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1411,"in_wready", false,-1);
    tracep->declBit(c+1261,"in_wvalid", false,-1);
    tracep->declBus(c+1262,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1048,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1049,"in_wlast", false,-1);
    tracep->declBit(c+1412,"in_bready", false,-1);
    tracep->declBit(c+525,"in_bvalid", false,-1);
    tracep->declBus(c+526,"in_bid", false,-1, 3,0);
    tracep->declBus(c+527,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1413,"out_arready", false,-1);
    tracep->declBit(c+1414,"out_arvalid", false,-1);
    tracep->declBus(c+1415,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1416,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1417,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1232,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1418,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1419,"out_rready", false,-1);
    tracep->declBit(c+528,"out_rvalid", false,-1);
    tracep->declBus(c+529,"out_rid", false,-1, 3,0);
    tracep->declBus(c+530,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1696,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+531,"out_rlast", false,-1);
    tracep->declBit(c+1420,"out_awready", false,-1);
    tracep->declBit(c+1421,"out_awvalid", false,-1);
    tracep->declBus(c+1422,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1423,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1424,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1233,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1425,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1426,"out_wready", false,-1);
    tracep->declBit(c+1427,"out_wvalid", false,-1);
    tracep->declBus(c+1332,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1234,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1235,"out_wlast", false,-1);
    tracep->declBit(c+1648,"out_bready", false,-1);
    tracep->declBit(c+532,"out_bvalid", false,-1);
    tracep->declBus(c+529,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1696,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1706,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1695,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1707,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1708,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1709,"DELAY", false,-1, 2,0);
    tracep->declBus(c+533,"rstate", false,-1, 2,0);
    tracep->declBus(c+534,"wstate", false,-1, 2,0);
    tracep->declBus(c+535,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+536,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+537,"rvalid_reg", false,-1);
    tracep->declBus(c+538,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+539,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+543,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+544,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+545,"bvalid_reg", false,-1);
    tracep->declBus(c+546,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+547,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1700,"r", false,-1, 10,0);
    tracep->declBus(c+1698,"s", false,-1, 1,0);
    tracep->declBus(c+548,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+1263,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1043,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1046,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1047,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+1264,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1262,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1048,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1049,"auto_in_wlast", false,-1);
    tracep->declBit(c+450,"auto_in_bready", false,-1);
    tracep->declBit(c+1428,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1429,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1649,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+1265,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1038,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1430,"auto_in_rready", false,-1);
    tracep->declBit(c+1431,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1432,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1650,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1652,"auto_in_rlast", false,-1);
    tracep->declBit(c+1433,"auto_out_awready", false,-1);
    tracep->declBit(c+1266,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1248,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1249,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1250,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1267,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1434,"auto_out_wready", false,-1);
    tracep->declBit(c+1268,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1252,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1253,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1269,"auto_out_wlast", false,-1);
    tracep->declBit(c+1435,"auto_out_bready", false,-1);
    tracep->declBit(c+1436,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1429,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1437,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1438,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1439,"auto_out_arready", false,-1);
    tracep->declBit(c+1270,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1256,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1257,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1258,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1271,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1430,"auto_out_rready", false,-1);
    tracep->declBit(c+1431,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1432,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1650,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1653,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1440,"auto_out_rlast", false,-1);
    tracep->declBit(c+1268,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1441,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1272,"len", false,-1, 7,0);
    tracep->declBus(c+1273,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1274,"len_1", false,-1, 7,0);
    tracep->declBus(c+1275,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1266,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1276,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1277,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1269,"w_last", false,-1);
    tracep->declBit(c+1435,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+1265,"io_enq_valid", false,-1);
    tracep->declBus(c+1038,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1039,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1040,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1041,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1042,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1442,"io_deq_ready", false,-1);
    tracep->declBit(c+1270,"io_deq_valid", false,-1);
    tracep->declBus(c+1256,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1278,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1279,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1258,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1280,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1270,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1443,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1263,"io_enq_valid", false,-1);
    tracep->declBus(c+1043,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1044,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1045,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1046,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1047,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1444,"io_deq_ready", false,-1);
    tracep->declBit(c+1281,"io_deq_valid", false,-1);
    tracep->declBus(c+1248,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1282,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1283,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1250,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1284,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1281,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1445,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1264,"io_enq_valid", false,-1);
    tracep->declBus(c+1262,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1048,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1049,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1446,"io_deq_ready", false,-1);
    tracep->declBit(c+1285,"io_deq_valid", false,-1);
    tracep->declBus(c+1252,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1253,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1654,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1285,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1447,"do_enq", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1448,"auto_in_awready", false,-1);
    tracep->declBit(c+1286,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1248,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1287,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1333,"auto_in_wready", false,-1);
    tracep->declBit(c+1288,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1252,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1253,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1449,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1450,"auto_in_arready", false,-1);
    tracep->declBit(c+1289,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1256,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1290,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1451,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1450,"nodeIn_arready", false,-1);
    tracep->declBit(c+1448,"nodeIn_awready", false,-1);
    tracep->declBit(c+1291,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1452,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1292,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1452,"R0_en", false,-1);
    tracep->declBit(c+1618,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1293,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1453,"W0_en", false,-1);
    tracep->declBit(c+1618,"W0_clk", false,-1);
    tracep->declBus(c+1252,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1253,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1454,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1050,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1043,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1046,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1047,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1334,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1051,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1262,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1048,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1049,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1052,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1455,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1456,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1655,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1457,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1053,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1054,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1458,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1459,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1656,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1657,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1460,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1410,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1260,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1043,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1046,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1047,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1411,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1261,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1262,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1048,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1049,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1412,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+525,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+526,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+527,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1408,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1259,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1409,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+520,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+521,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+522,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+523,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+524,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1263,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1043,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1046,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1047,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1264,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1262,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1048,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1049,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+450,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1428,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1429,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1649,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1265,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1430,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1431,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1432,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1650,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1652,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1455,"in_0_bvalid", false,-1);
    tracep->declBit(c+1458,"in_0_rvalid", false,-1);
    tracep->declBit(c+1461,"in_0_wready", false,-1);
    tracep->declBit(c+1462,"in_0_awready", false,-1);
    tracep->declBit(c+451,"in_0_arready", false,-1);
    tracep->declBit(c+1454,"anonIn_awready", false,-1);
    tracep->declBit(c+1457,"anonIn_arready", false,-1);
    tracep->declBit(c+1055,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1056,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1057,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1058,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1059,"arSel", false,-1, 15,0);
    tracep->declBus(c+1060,"awSel", false,-1, 15,0);
    tracep->declBus(c+1463,"rSel", false,-1, 15,0);
    tracep->declBus(c+1464,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1294,"in_0_arvalid", false,-1);
    tracep->declBit(c+138,"latched", false,-1);
    tracep->declBit(c+1295,"in_0_awvalid", false,-1);
    tracep->declBit(c+1296,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1297,"in_0_wvalid", false,-1);
    tracep->declBit(c+139,"idle_2", false,-1);
    tracep->declBit(c+1465,"anyValid", false,-1);
    tracep->declBus(c+1466,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1467,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1468,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1469,"prefixOR_1", false,-1);
    tracep->declBit(c+1470,"winner_2_1", false,-1);
    tracep->declBit(c+141,"state_2_0", false,-1);
    tracep->declBit(c+142,"state_2_1", false,-1);
    tracep->declBit(c+1471,"muxState_2_0", false,-1);
    tracep->declBit(c+1472,"muxState_2_1", false,-1);
    tracep->declBit(c+143,"idle_3", false,-1);
    tracep->declBit(c+1473,"anyValid_1", false,-1);
    tracep->declBus(c+1474,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+144,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1475,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1476,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1477,"winner_3_0", false,-1);
    tracep->declBit(c+1478,"winner_3_1", false,-1);
    tracep->declBit(c+145,"state_3_0", false,-1);
    tracep->declBit(c+146,"state_3_1", false,-1);
    tracep->declBit(c+1479,"muxState_3_0", false,-1);
    tracep->declBit(c+1480,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1296,"io_enq_valid", false,-1);
    tracep->declBus(c+1061,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1481,"io_deq_ready", false,-1);
    tracep->declBit(c+1298,"io_deq_valid", false,-1);
    tracep->declBus(c+1299,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+148,"wrap", false,-1);
    tracep->declBit(c+149,"wrap_1", false,-1);
    tracep->declBit(c+150,"maybe_full", false,-1);
    tracep->declBit(c+151,"ptr_match", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+1298,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1482,"do_deq", false,-1);
    tracep->declBit(c+1483,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+149,"R0_addr", false,-1);
    tracep->declBit(c+1710,"R0_en", false,-1);
    tracep->declBit(c+1618,"R0_clk", false,-1);
    tracep->declBus(c+154,"R0_data", false,-1, 1,0);
    tracep->declBit(c+148,"W0_addr", false,-1);
    tracep->declBit(c+1483,"W0_en", false,-1);
    tracep->declBit(c+1618,"W0_clk", false,-1);
    tracep->declBus(c+1061,"W0_data", false,-1, 1,0);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1484,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1300,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1248,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1249,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1250,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1434,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1268,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1252,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1253,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1269,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1435,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1436,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1429,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1437,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1485,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1301,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1256,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1257,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1258,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1430,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1431,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1432,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1650,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1440,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1448,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1286,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1248,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1287,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1333,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1288,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1252,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1253,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1449,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1450,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1289,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1256,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1290,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1451,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1302,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1303,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+157,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1304,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1256,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1658,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+158,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+159,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1246,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1247,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1248,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1249,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1250,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1246,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1251,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1252,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1253,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1404,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1405,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1646,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1254,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1255,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1256,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1257,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1258,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1406,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1407,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1647,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1646,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1436,"in_0_bvalid", false,-1);
    tracep->declBit(c+1431,"in_0_rvalid", false,-1);
    tracep->declBit(c+1486,"in_0_wready", false,-1);
    tracep->declBit(c+1487,"in_0_awready", false,-1);
    tracep->declBit(c+1485,"in_0_arready", false,-1);
    tracep->declBit(c+1484,"anonIn_awready", false,-1);
    tracep->declBit(c+1306,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1307,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1308,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1309,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1310,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1311,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1312,"arSel", false,-1, 15,0);
    tracep->declBus(c+1313,"awSel", false,-1, 15,0);
    tracep->declBus(c+1488,"rSel", false,-1, 15,0);
    tracep->declBus(c+1489,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1314,"in_0_awvalid", false,-1);
    tracep->declBit(c+1315,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1316,"in_0_wvalid", false,-1);
    tracep->declBit(c+194,"idle_3", false,-1);
    tracep->declBit(c+1490,"anyValid", false,-1);
    tracep->declBus(c+1491,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+195,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1492,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1493,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1494,"prefixOR_1", false,-1);
    tracep->declBit(c+1495,"winner_3_1", false,-1);
    tracep->declBit(c+1496,"winner_3_2", false,-1);
    tracep->declBit(c+196,"state_3_0", false,-1);
    tracep->declBit(c+197,"state_3_1", false,-1);
    tracep->declBit(c+198,"state_3_2", false,-1);
    tracep->declBit(c+1497,"muxState_3_0", false,-1);
    tracep->declBit(c+1498,"muxState_3_1", false,-1);
    tracep->declBit(c+1499,"muxState_3_2", false,-1);
    tracep->declBit(c+199,"idle_4", false,-1);
    tracep->declBit(c+1500,"anyValid_1", false,-1);
    tracep->declBus(c+1501,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1502,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1503,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1504,"winner_4_0", false,-1);
    tracep->declBit(c+1505,"winner_4_2", false,-1);
    tracep->declBit(c+201,"state_4_0", false,-1);
    tracep->declBit(c+202,"state_4_2", false,-1);
    tracep->declBit(c+1506,"muxState_4_0", false,-1);
    tracep->declBit(c+1507,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1315,"io_enq_valid", false,-1);
    tracep->declBus(c+1317,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1508,"io_deq_ready", false,-1);
    tracep->declBit(c+1318,"io_deq_valid", false,-1);
    tracep->declBus(c+1319,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1318,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1509,"do_deq", false,-1);
    tracep->declBit(c+1510,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1710,"R0_en", false,-1);
    tracep->declBit(c+1618,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1510,"W0_en", false,-1);
    tracep->declBit(c+1618,"W0_clk", false,-1);
    tracep->declBus(c+1317,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1433,"auto_in_awready", false,-1);
    tracep->declBit(c+1266,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1248,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1249,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1250,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1267,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1434,"auto_in_wready", false,-1);
    tracep->declBit(c+1268,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1252,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1253,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1269,"auto_in_wlast", false,-1);
    tracep->declBit(c+1435,"auto_in_bready", false,-1);
    tracep->declBit(c+1436,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1429,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1437,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1438,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1439,"auto_in_arready", false,-1);
    tracep->declBit(c+1270,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1256,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1257,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1258,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1271,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1430,"auto_in_rready", false,-1);
    tracep->declBit(c+1431,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1432,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1650,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1653,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1440,"auto_in_rlast", false,-1);
    tracep->declBit(c+1484,"auto_out_awready", false,-1);
    tracep->declBit(c+1300,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1248,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1249,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1250,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1434,"auto_out_wready", false,-1);
    tracep->declBit(c+1268,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1252,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1253,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1269,"auto_out_wlast", false,-1);
    tracep->declBit(c+1435,"auto_out_bready", false,-1);
    tracep->declBit(c+1436,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1429,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1437,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1485,"auto_out_arready", false,-1);
    tracep->declBit(c+1301,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1256,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1257,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1258,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1430,"auto_out_rready", false,-1);
    tracep->declBit(c+1431,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1432,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1650,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1440,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1335,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1511,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1336,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1512,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1337,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1513,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1338,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1514,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1339,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1515,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1340,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1516,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1341,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1517,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1342,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1518,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1343,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1519,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1344,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1520,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1345,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1521,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1346,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1522,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+1347,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1523,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1348,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1524,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1349,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1525,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1350,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1526,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1351,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1527,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1352,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1528,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1353,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1529,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1354,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1530,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1355,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1531,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1356,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1532,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1357,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1533,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1358,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1534,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1359,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1535,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1360,"io_enq_valid", false,-1);
    tracep->declBit(c+1267,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1536,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1361,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1537,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1362,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1538,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1363,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1539,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1364,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1540,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1365,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1541,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1366,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1542,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1659,"reset", false,-1);
    tracep->declBit(c+1454,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1050,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1043,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1046,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1047,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1334,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1051,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1262,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1048,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1049,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1052,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1455,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1456,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1655,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1457,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1053,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1038,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1054,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1458,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1459,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1656,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1657,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1460,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1659,"reset", false,-1);
    tracep->declBit(c+1705,"io_interrupt", false,-1);
    tracep->declBit(c+1454,"io_master_awready", false,-1);
    tracep->declBit(c+1050,"io_master_awvalid", false,-1);
    tracep->declBus(c+1043,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1046,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1047,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1334,"io_master_wready", false,-1);
    tracep->declBit(c+1051,"io_master_wvalid", false,-1);
    tracep->declBus(c+1262,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1048,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1049,"io_master_wlast", false,-1);
    tracep->declBit(c+1052,"io_master_bready", false,-1);
    tracep->declBit(c+1455,"io_master_bvalid", false,-1);
    tracep->declBus(c+1456,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1655,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1457,"io_master_arready", false,-1);
    tracep->declBit(c+1053,"io_master_arvalid", false,-1);
    tracep->declBus(c+1038,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1054,"io_master_rready", false,-1);
    tracep->declBit(c+1458,"io_master_rvalid", false,-1);
    tracep->declBus(c+1459,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1656,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1657,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1460,"io_master_rlast", false,-1);
    tracep->declBit(c+1711,"io_slave_awready", false,-1);
    tracep->declBit(c+1705,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1712,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1713,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1714,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1706,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1696,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1715,"io_slave_wready", false,-1);
    tracep->declBit(c+1705,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1713,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1712,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1705,"io_slave_wlast", false,-1);
    tracep->declBit(c+1705,"io_slave_bready", false,-1);
    tracep->declBit(c+1716,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1717,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1718,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1719,"io_slave_arready", false,-1);
    tracep->declBit(c+1705,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1712,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1713,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1714,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1706,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1696,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1705,"io_slave_rready", false,-1);
    tracep->declBit(c+1720,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1721,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1722,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1723,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1724,"io_slave_rlast", false,-1);
    tracep->declBus(c+1062,"pc", false,-1, 31,0);
    tracep->declBit(c+1710,"pc_valid", false,-1);
    tracep->declBus(c+1725,"snpc", false,-1, 31,0);
    tracep->declBus(c+1063,"inst_if", false,-1, 31,0);
    tracep->declBus(c+1064,"pc_if", false,-1, 31,0);
    tracep->declBit(c+1065,"if_valid", false,-1);
    tracep->declBit(c+1066,"if_ready", false,-1);
    tracep->declBus(c+1726,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1726,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1067,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1068,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1712,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1714,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+464,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1712,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1727,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+465,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1728,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1706,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+466,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1696,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+467,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1729,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+468,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1705,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1730,"if_axi_awready", false,-1);
    tracep->declBit(c+1705,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1731,"if_axi_wready", false,-1);
    tracep->declBit(c+1732,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1705,"if_axi_bready", false,-1);
    tracep->declBit(c+1069,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1070,"if_axi_arready", false,-1);
    tracep->declBit(c+1071,"if_axi_rvalid", false,-1);
    tracep->declBit(c+1072,"if_axi_rready", false,-1);
    tracep->declBit(c+1733,"if_axi_wlast", false,-1);
    tracep->declBit(c+1734,"if_axi_rlast", false,-1);
    tracep->declBus(c+1735,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1736,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1073,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1543,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1737,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1738,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1074,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1739,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+452,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1740,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+453,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1741,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1075,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1742,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1076,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1660,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1661,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1743,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+454,"icache_axi_awready", false,-1);
    tracep->declBit(c+1744,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1662,"icache_axi_wready", false,-1);
    tracep->declBit(c+455,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1745,"icache_axi_bready", false,-1);
    tracep->declBit(c+1077,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1236,"icache_axi_arready", false,-1);
    tracep->declBit(c+1237,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+1078,"icache_axi_rready", false,-1);
    tracep->declBit(c+1746,"icache_axi_wlast", false,-1);
    tracep->declBit(c+1544,"icache_axi_rlast", false,-1);
    tracep->declBus(c+977,"inst_id", false,-1, 31,0);
    tracep->declBit(c+1608,"id_valid", false,-1);
    tracep->declBit(c+1609,"id_ready", false,-1);
    tracep->declBus(c+1079,"prepc", false,-1, 31,0);
    tracep->declBit(c+1080,"prepc_en", false,-1);
    tracep->declBus(c+1081,"rs1", false,-1, 4,0);
    tracep->declBus(c+1082,"rs2", false,-1, 4,0);
    tracep->declBus(c+1083,"pc_id", false,-1, 31,0);
    tracep->declBus(c+978,"imm_id", false,-1, 31,0);
    tracep->declBus(c+1084,"op_id", false,-1, 6,0);
    tracep->declBus(c+1085,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+979,"rd_id", false,-1, 4,0);
    tracep->declBit(c+980,"gpr_wen_id", false,-1);
    tracep->declBus(c+469,"alu_sel_id", false,-1, 3,0);
    tracep->declBus(c+470,"a_id", false,-1, 31,0);
    tracep->declBus(c+471,"b_id", false,-1, 31,0);
    tracep->declBus(c+472,"r1_id", false,-1, 31,0);
    tracep->declBus(c+1086,"r2_id", false,-1, 31,0);
    tracep->declBus(c+981,"csr_id", false,-1, 31,0);
    tracep->declBus(c+473,"mepc_id", false,-1, 31,0);
    tracep->declBus(c+474,"mtvec_id", false,-1, 31,0);
    tracep->declBus(c+1087,"csrs_wen_id", false,-1, 3,0);
    tracep->declBit(c+1088,"fencei_id", false,-1);
    tracep->declBus(c+911,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+912,"inst_ex", false,-1, 31,0);
    tracep->declBit(c+1371,"ex_ready", false,-1);
    tracep->declBit(c+1610,"ex_valid", false,-1);
    tracep->declBus(c+341,"op_ex", false,-1, 6,0);
    tracep->declBus(c+342,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+913,"rd_ex", false,-1, 4,0);
    tracep->declBit(c+914,"gpr_wen_ex", false,-1);
    tracep->declBus(c+1020,"mepc_ex", false,-1, 31,0);
    tracep->declBus(c+1021,"mstatus_ex", false,-1, 31,0);
    tracep->declBus(c+1022,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+1023,"mtvec_ex", false,-1, 31,0);
    tracep->declBus(c+1024,"csrs_wen_ex", false,-1, 3,0);
    tracep->declBus(c+915,"ex_ex", false,-1, 31,0);
    tracep->declBit(c+1025,"ls_valid_ex", false,-1);
    tracep->declBit(c+343,"ls_wen_ex", false,-1);
    tracep->declBit(c+1026,"ls_read_ex", false,-1);
    tracep->declBit(c+1027,"ls_write_ex", false,-1);
    tracep->declBus(c+1028,"ls_waddr_ex", false,-1, 31,0);
    tracep->declBus(c+344,"ls_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+1029,"ls_raddr_ex", false,-1, 31,0);
    tracep->declBus(c+1030,"ls_wmask_ex", false,-1, 3,0);
    tracep->declBus(c+1031,"ls_awsize_ex", false,-1, 2,0);
    tracep->declBus(c+1032,"ls_arsize_ex", false,-1, 2,0);
    tracep->declBus(c+1033,"ls_awlen_ex", false,-1, 7,0);
    tracep->declBus(c+1034,"ls_arlen_ex", false,-1, 7,0);
    tracep->declBus(c+1035,"ls_awburst_ex", false,-1, 1,0);
    tracep->declBus(c+1036,"ls_arburst_ex", false,-1, 1,0);
    tracep->declBus(c+1372,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+475,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+476,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+477,"dnpc_ls", false,-1, 31,0);
    tracep->declBit(c+1603,"ls_ready", false,-1);
    tracep->declBit(c+1604,"ls_valid", false,-1);
    tracep->declBit(c+1605,"difftest", false,-1);
    tracep->declBus(c+478,"xrd_ls", false,-1, 31,0);
    tracep->declBus(c+479,"rd_ls", false,-1, 4,0);
    tracep->declBit(c+480,"gpr_wen_ls", false,-1);
    tracep->declBus(c+992,"mepc_ls", false,-1, 31,0);
    tracep->declBus(c+993,"mstatus_ls", false,-1, 31,0);
    tracep->declBus(c+994,"mcause_ls", false,-1, 31,0);
    tracep->declBus(c+995,"mtvec_ls", false,-1, 31,0);
    tracep->declBus(c+996,"csrs_wen_ls", false,-1, 3,0);
    tracep->declBus(c+997,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1663,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+998,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1238,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+999,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1000,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1001,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1747,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+456,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1748,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+457,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1002,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1003,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1004,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1005,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1664,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1665,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1006,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1545,"ls_axi_awready", false,-1);
    tracep->declBit(c+1007,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1666,"ls_axi_wready", false,-1);
    tracep->declBit(c+1546,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+1008,"ls_axi_bready", false,-1);
    tracep->declBit(c+1009,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1239,"ls_axi_arready", false,-1);
    tracep->declBit(c+1240,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+1010,"ls_axi_rready", false,-1);
    tracep->declBit(c+1011,"ls_axi_wlast", false,-1);
    tracep->declBit(c+458,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1089,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1320,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1090,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+345,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1091,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1092,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1093,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1094,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+346,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1095,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+347,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1096,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1097,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1098,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1099,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+348,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+349,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1100,"c_axi_awvalid", false,-1);
    tracep->declBit(c+350,"c_axi_awready", false,-1);
    tracep->declBit(c+1101,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1037,"c_axi_wready", false,-1);
    tracep->declBit(c+351,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1102,"c_axi_bready", false,-1);
    tracep->declBit(c+1103,"c_axi_arvalid", false,-1);
    tracep->declBit(c+916,"c_axi_arready", false,-1);
    tracep->declBit(c+917,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1104,"c_axi_rready", false,-1);
    tracep->declBit(c+1105,"c_axi_wlast", false,-1);
    tracep->declBit(c+352,"c_axi_rlast", false,-1);
    tracep->declBus(c+1321,"r1", false,-1, 31,0);
    tracep->declBus(c+1322,"r2", false,-1, 31,0);
    tracep->declBus(c+988,"mepc", false,-1, 31,0);
    tracep->declBus(c+989,"mstatus", false,-1, 31,0);
    tracep->declBus(c+990,"mcause", false,-1, 31,0);
    tracep->declBus(c+991,"mtvec", false,-1, 31,0);
    tracep->declBus(c+353,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+354,"marchid", false,-1, 31,0);
    tracep->declBit(c+1611,"isRAW", false,-1);
    tracep->declBit(c+1612,"isCHazard", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1749,"n", false,-1, 31,0);
    tracep->declBus(c+1750,"w", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBus(c+1062,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1725,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+1079,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1064,"dnpc_tag_i", false,-1, 31,0);
    tracep->declBit(c+1080,"dnpc_en_i", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+355+i*1,"snpc_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+363+i*1,"tag_reg", true,(i+0), 28,0);
    }
    tracep->declBus(c+1106,"tag", false,-1, 28,0);
    tracep->declBus(c+1107,"index", false,-1, 0,0);
    tracep->declBus(c+1108,"dnpc_tag", false,-1, 28,0);
    tracep->declBus(c+1109,"dnpc_index", false,-1, 0,0);
    tracep->declBus(c+1667,"hit", false,-1, 3,0);
    tracep->declBus(c+1323,"already", false,-1, 3,0);
    tracep->declBit(c+371,"enable", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+372,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+373,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBit(c+350,"c_axi_awready", false,-1);
    tracep->declBit(c+1100,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1094,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1092,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1096,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1098,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1037,"c_axi_wready", false,-1);
    tracep->declBit(c+1101,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1320,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1091,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1105,"c_axi_wlast", false,-1);
    tracep->declBit(c+1102,"c_axi_bready", false,-1);
    tracep->declBit(c+351,"c_axi_bvalid", false,-1);
    tracep->declBus(c+346,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+348,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+916,"c_axi_arready", false,-1);
    tracep->declBit(c+1103,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1095,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1090,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1097,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1099,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1104,"c_axi_rready", false,-1);
    tracep->declBit(c+917,"c_axi_rvalid", false,-1);
    tracep->declBus(c+347,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+345,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+349,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+352,"c_axi_rlast", false,-1);
    tracep->declBit(c+350,"axi_awready", false,-1);
    tracep->declBit(c+1037,"axi_wready", false,-1);
    tracep->declBit(c+351,"axi_bvalid", false,-1);
    tracep->declBit(c+916,"axi_arready", false,-1);
    tracep->declBit(c+917,"axi_rvalid", false,-1);
    tracep->declBit(c+352,"axi_rlast", false,-1);
    tracep->declBus(c+348,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+349,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+346,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+347,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+345,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+374,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1751,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1752,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+375,"mtime", false,-1, 63,0);
    tracep->declBus(c+1668,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBit(c+1612,"isCHazard", false,-1);
    tracep->declBus(c+977,"inst_i", false,-1, 31,0);
    tracep->declBus(c+911,"pc_o", false,-1, 31,0);
    tracep->declBus(c+912,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1608,"id_valid_i", false,-1);
    tracep->declBit(c+1371,"ex_ready_o", false,-1);
    tracep->declBit(c+1610,"ex_valid_o", false,-1);
    tracep->declBit(c+1603,"ls_ready_i", false,-1);
    tracep->declBus(c+1083,"pc_i", false,-1, 31,0);
    tracep->declBus(c+978,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1084,"op_i", false,-1, 6,0);
    tracep->declBus(c+1085,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+979,"rd_i", false,-1, 4,0);
    tracep->declBit(c+980,"gpr_wen_i", false,-1);
    tracep->declBus(c+469,"alu_sel_i", false,-1, 3,0);
    tracep->declBus(c+470,"a_i", false,-1, 31,0);
    tracep->declBus(c+471,"b_i", false,-1, 31,0);
    tracep->declBus(c+472,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1086,"r2_i", false,-1, 31,0);
    tracep->declBus(c+981,"csr_i", false,-1, 31,0);
    tracep->declBus(c+473,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+474,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+1087,"csrs_wen_i", false,-1, 3,0);
    tracep->declBus(c+341,"op_o", false,-1, 6,0);
    tracep->declBus(c+342,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+913,"rd_o", false,-1, 4,0);
    tracep->declBit(c+914,"gpr_wen_o", false,-1);
    tracep->declBus(c+1020,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+1021,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+1022,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1023,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+1024,"csrs_wen_o", false,-1, 3,0);
    tracep->declBus(c+915,"ex_o", false,-1, 31,0);
    tracep->declBit(c+1025,"ls_valid_o", false,-1);
    tracep->declBit(c+343,"ls_wen_o", false,-1);
    tracep->declBit(c+1026,"ls_read_o", false,-1);
    tracep->declBit(c+1027,"ls_write_o", false,-1);
    tracep->declBus(c+1028,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+344,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1029,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+1030,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+1031,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1032,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1033,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1034,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1035,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1036,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+1372,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+377,"ex_valid_reg", false,-1);
    tracep->declBus(c+1753,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1754,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1373,"state", false,-1);
    tracep->declBus(c+982,"al_res", false,-1, 31,0);
    tracep->declBit(c+481,"al_done", false,-1);
    tracep->declBus(c+1669,"ex", false,-1, 31,0);
    tracep->declBus(c+1110,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+1111,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+1112,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1111,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+1111,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+1113,"ls_valid", false,-1);
    tracep->declBit(c+1114,"ls_wen", false,-1);
    tracep->declBus(c+1115,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+1116,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+1117,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1118,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+1119,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1120,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1714,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1714,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1697,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1697,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+978,"offset", false,-1, 31,0);
    tracep->declBit(c+1121,"jalen", false,-1);
    tracep->declBit(c+1122,"jalren", false,-1);
    tracep->declBit(c+497,"beqen", false,-1);
    tracep->declBit(c+498,"bneen", false,-1);
    tracep->declBit(c+499,"blten", false,-1);
    tracep->declBit(c+500,"bgeen", false,-1);
    tracep->declBit(c+501,"bltuen", false,-1);
    tracep->declBit(c+502,"bgeuen", false,-1);
    tracep->declBit(c+1123,"ecall_en", false,-1);
    tracep->declBit(c+1670,"mret_en", false,-1);
    tracep->declBus(c+1606,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBus(c+470,"a", false,-1, 31,0);
    tracep->declBus(c+471,"b", false,-1, 31,0);
    tracep->declBus(c+469,"opcode", false,-1, 3,0);
    tracep->declBus(c+982,"res", false,-1, 31,0);
    tracep->declBit(c+481,"done", false,-1);
    tracep->declBus(c+1712,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1755,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1756,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1757,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1758,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1759,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1760,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1761,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1762,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1763,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1764,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1765,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1766,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1753,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1754,"EXECUTE", false,-1, 0,0);
    tracep->declBit(c+482,"state", false,-1);
    tracep->declQuad(c+483,"mul_result", false,-1, 63,0);
    tracep->declBus(c+485,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+486,"dividend", false,-1, 31,0);
    tracep->declBus(c+487,"divisor", false,-1, 31,0);
    tracep->declBus(c+488,"quotient", false,-1, 31,0);
    tracep->declBus(c+489,"remainder", false,-1, 31,0);
    tracep->declBus(c+490,"div_counter", false,-1, 5,0);
    tracep->declBit(c+491,"done_reg", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1750,"n", false,-1, 31,0);
    tracep->declBus(c+1767,"m", false,-1, 31,0);
    tracep->declBus(c+1768,"w", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBit(c+1088,"fencei_i", false,-1);
    tracep->declBit(c+1730,"m_axi_awready", false,-1);
    tracep->declBit(c+1705,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1712,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1726,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1714,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1706,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1696,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1731,"m_axi_wready", false,-1);
    tracep->declBit(c+1705,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1726,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1712,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1733,"m_axi_wlast", false,-1);
    tracep->declBit(c+1705,"m_axi_bready", false,-1);
    tracep->declBit(c+1732,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1727,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1729,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1070,"m_axi_arready", false,-1);
    tracep->declBit(c+1069,"m_axi_arvalid", false,-1);
    tracep->declBus(c+465,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1067,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+464,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+466,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+467,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1072,"m_axi_rready", false,-1);
    tracep->declBit(c+1071,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1728,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1068,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+468,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1734,"m_axi_rlast", false,-1);
    tracep->declBit(c+454,"s_axi_awready", false,-1);
    tracep->declBit(c+1743,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1739,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1735,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1738,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1741,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1742,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1662,"s_axi_wready", false,-1);
    tracep->declBit(c+1744,"s_axi_wvalid", false,-1);
    tracep->declBus(c+1736,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1737,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1746,"s_axi_wlast", false,-1);
    tracep->declBit(c+1745,"s_axi_bready", false,-1);
    tracep->declBit(c+455,"s_axi_bvalid", false,-1);
    tracep->declBus(c+452,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1660,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1236,"s_axi_arready", false,-1);
    tracep->declBit(c+1077,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1740,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1073,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1074,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1075,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1076,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1078,"s_axi_rready", false,-1);
    tracep->declBit(c+1237,"s_axi_rvalid", false,-1);
    tracep->declBus(c+453,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1543,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1661,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1544,"s_axi_rlast", false,-1);
    tracep->declBus(c+1767,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1767,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1750,"CACHE_WAY", false,-1, 31,0);
    tracep->pushNamePrefix("cache_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+1124,"[0]", false,-1, 31,0);
    tracep->declBus(c+1125,"[1]", false,-1, 31,0);
    tracep->declBus(c+1126,"[2]", false,-1, 31,0);
    tracep->declBus(c+1127,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+1128,"[0]", false,-1, 31,0);
    tracep->declBus(c+1129,"[1]", false,-1, 31,0);
    tracep->declBus(c+1130,"[2]", false,-1, 31,0);
    tracep->declBus(c+1131,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+1132,"[0]", false,-1, 31,0);
    tracep->declBus(c+1133,"[1]", false,-1, 31,0);
    tracep->declBus(c+1134,"[2]", false,-1, 31,0);
    tracep->declBus(c+1135,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+1136,"[0]", false,-1, 31,0);
    tracep->declBus(c+1137,"[1]", false,-1, 31,0);
    tracep->declBus(c+1138,"[2]", false,-1, 31,0);
    tracep->declBus(c+1139,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+1140,"[0]", false,-1, 26,0);
    tracep->declBus(c+1141,"[1]", false,-1, 26,0);
    tracep->declBus(c+1142,"[2]", false,-1, 26,0);
    tracep->declBus(c+1143,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+1144,"[0]", false,-1, 26,0);
    tracep->declBus(c+1145,"[1]", false,-1, 26,0);
    tracep->declBus(c+1146,"[2]", false,-1, 26,0);
    tracep->declBus(c+1147,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+1148,"[0]", false,-1, 26,0);
    tracep->declBus(c+1149,"[1]", false,-1, 26,0);
    tracep->declBus(c+1150,"[2]", false,-1, 26,0);
    tracep->declBus(c+1151,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+1152,"[0]", false,-1, 26,0);
    tracep->declBus(c+1153,"[1]", false,-1, 26,0);
    tracep->declBus(c+1154,"[2]", false,-1, 26,0);
    tracep->declBus(c+1155,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1156+i*1,"valid_reg", true,(i+0), 3,0);
    }
    tracep->declBus(c+1160,"tag", false,-1, 26,0);
    tracep->declBus(c+1161,"index", false,-1, 0,0);
    tracep->declBus(c+1162,"offset", false,-1, 1,0);
    tracep->declBus(c+1163,"s_tag", false,-1, 26,0);
    tracep->declBus(c+1164,"s_index", false,-1, 0,0);
    tracep->declBus(c+1165,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1166,"access", false,-1, 1,0);
    tracep->declBus(c+1769,"hit", false,-1, 1,0);
    tracep->declBus(c+1696,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1697,"TRANS", false,-1, 1,0);
    tracep->declBus(c+1698,"RETURN", false,-1, 1,0);
    tracep->declBus(c+1167,"state", false,-1, 1,0);
    tracep->declBus(c+1168,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+1169,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+492,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+493,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1170,"a", false,-1, 31,0);
    tracep->declBus(c+1171,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBit(c+1611,"isRAW", false,-1);
    tracep->declBit(c+1612,"isCHazard", false,-1);
    tracep->declBus(c+977,"inst_o", false,-1, 31,0);
    tracep->declBus(c+1079,"prepc_o", false,-1, 31,0);
    tracep->declBit(c+1080,"prepc_en_o", false,-1);
    tracep->declBus(c+1081,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+1082,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+1321,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1322,"r2_i", false,-1, 31,0);
    tracep->declBus(c+988,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+989,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+990,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+991,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1065,"if_valid_i", false,-1);
    tracep->declBit(c+1609,"id_ready_o", false,-1);
    tracep->declBit(c+1608,"id_valid_o", false,-1);
    tracep->declBit(c+1371,"ex_ready_i", false,-1);
    tracep->declBus(c+1064,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1063,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1083,"pc_o", false,-1, 31,0);
    tracep->declBus(c+978,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1084,"op_o", false,-1, 6,0);
    tracep->declBus(c+1085,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+979,"rd_o", false,-1, 4,0);
    tracep->declBit(c+980,"gpr_wen_o", false,-1);
    tracep->declBus(c+469,"alu_sel_o", false,-1, 3,0);
    tracep->declBus(c+470,"a_o", false,-1, 31,0);
    tracep->declBus(c+471,"b_o", false,-1, 31,0);
    tracep->declBus(c+472,"r1_o", false,-1, 31,0);
    tracep->declBus(c+1086,"r2_o", false,-1, 31,0);
    tracep->declBus(c+981,"csr_o", false,-1, 31,0);
    tracep->declBus(c+473,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+474,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+1087,"csrs_wen_o", false,-1, 3,0);
    tracep->declBit(c+1088,"fencei_o", false,-1);
    tracep->declBus(c+1753,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1754,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1172,"state", false,-1);
    tracep->declBus(c+1173,"op", false,-1, 6,0);
    tracep->declBus(c+1174,"rd", false,-1, 4,0);
    tracep->declBus(c+1175,"funct3", false,-1, 2,0);
    tracep->declBus(c+1176,"immI", false,-1, 31,0);
    tracep->declBus(c+1177,"immU", false,-1, 31,0);
    tracep->declBus(c+1178,"immS", false,-1, 31,0);
    tracep->declBus(c+1179,"immB", false,-1, 31,0);
    tracep->declBus(c+1180,"immJ", false,-1, 31,0);
    tracep->declBus(c+1181,"imm", false,-1, 31,0);
    tracep->declBus(c+1182,"funct7", false,-1, 6,0);
    tracep->declBus(c+1183,"shamt", false,-1, 4,0);
    tracep->declBit(c+1184,"gpr_wen", false,-1);
    tracep->declBus(c+1185,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+1671,"a", false,-1, 31,0);
    tracep->declBus(c+1672,"b", false,-1, 31,0);
    tracep->declBus(c+1712,"ADD", false,-1, 3,0);
    tracep->declBus(c+1755,"SUB", false,-1, 3,0);
    tracep->declBus(c+1756,"SLL", false,-1, 3,0);
    tracep->declBus(c+1757,"SRL", false,-1, 3,0);
    tracep->declBus(c+1758,"SRA", false,-1, 3,0);
    tracep->declBus(c+1759,"SLT", false,-1, 3,0);
    tracep->declBus(c+1760,"AND", false,-1, 3,0);
    tracep->declBus(c+1761,"OR", false,-1, 3,0);
    tracep->declBus(c+1762,"XOR", false,-1, 3,0);
    tracep->declBus(c+1763,"MUL", false,-1, 3,0);
    tracep->declBus(c+1764,"MULH", false,-1, 3,0);
    tracep->declBus(c+1765,"DIV", false,-1, 3,0);
    tracep->declBus(c+1766,"REM", false,-1, 3,0);
    tracep->declBus(c+1673,"csr", false,-1, 31,0);
    tracep->declBus(c+1186,"csrs_wen", false,-1, 3,0);
    tracep->declBit(c+1187,"fencei", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBit(c+1612,"isCHazard", false,-1);
    tracep->declBit(c+1710,"pc_valid_i", false,-1);
    tracep->declBit(c+1066,"if_ready_o", false,-1);
    tracep->declBit(c+1065,"if_valid_o", false,-1);
    tracep->declBit(c+1609,"id_ready_i", false,-1);
    tracep->declBus(c+1062,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1064,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1063,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1730,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1705,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1712,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1726,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1714,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1706,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1696,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1731,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1705,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1726,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1712,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1733,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1705,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1732,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1727,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1729,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1070,"if_axi_arready_i", false,-1);
    tracep->declBit(c+1069,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+465,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+1067,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+464,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+466,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+467,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1072,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1071,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1728,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1068,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+468,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1734,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1753,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1754,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1188,"state", false,-1);
    tracep->declBit(c+494,"isCHazard_reg", false,-1);
    tracep->declBus(c+1753,"AXI_IDLE", false,-1, 0,0);
    tracep->declBus(c+1754,"AXI_FETCH", false,-1, 0,0);
    tracep->declBit(c+1189,"axi_state", false,-1);
    tracep->declBus(c+1190,"axi_rdata_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBus(c+911,"pc_i", false,-1, 31,0);
    tracep->declBus(c+912,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1372,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+475,"pc_o", false,-1, 31,0);
    tracep->declBus(c+476,"inst_o", false,-1, 31,0);
    tracep->declBus(c+477,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+1613,"ex_valid_i", false,-1);
    tracep->declBit(c+1603,"ls_ready_o", false,-1);
    tracep->declBit(c+1604,"ls_valid_o", false,-1);
    tracep->declBit(c+1605,"difftest_o", false,-1);
    tracep->declBus(c+341,"op_i", false,-1, 6,0);
    tracep->declBus(c+342,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+913,"rd_i", false,-1, 4,0);
    tracep->declBit(c+914,"gpr_wen_i", false,-1);
    tracep->declBus(c+1020,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+1021,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+1022,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+1023,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+1024,"csrs_wen_i", false,-1, 3,0);
    tracep->declBus(c+915,"ex_i", false,-1, 31,0);
    tracep->declBit(c+1025,"ls_valid_i", false,-1);
    tracep->declBit(c+343,"ls_wen_i", false,-1);
    tracep->declBit(c+1026,"ls_read_i", false,-1);
    tracep->declBit(c+1027,"ls_write_i", false,-1);
    tracep->declBus(c+1028,"ls_waddr_i", false,-1, 31,0);
    tracep->declBus(c+344,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1029,"ls_raddr_i", false,-1, 31,0);
    tracep->declBus(c+1030,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1031,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1032,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1033,"ls_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1034,"ls_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1035,"ls_awburst_i", false,-1, 1,0);
    tracep->declBus(c+1036,"ls_arburst_i", false,-1, 1,0);
    tracep->declBus(c+478,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+479,"rd_o", false,-1, 4,0);
    tracep->declBit(c+480,"gpr_wen_o", false,-1);
    tracep->declBus(c+992,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+993,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+994,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+995,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+996,"csrs_wen_o", false,-1, 3,0);
    tracep->declBit(c+1545,"ls_axi_awready", false,-1);
    tracep->declBit(c+1006,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1747,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+997,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1000,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1002,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1004,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1666,"ls_axi_wready", false,-1);
    tracep->declBit(c+1007,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1663,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+999,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1011,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1008,"ls_axi_bready", false,-1);
    tracep->declBit(c+1546,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+456,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1664,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1239,"ls_axi_arready", false,-1);
    tracep->declBit(c+1009,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1748,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+998,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1001,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1003,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1005,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1010,"ls_axi_rready", false,-1);
    tracep->declBit(c+1240,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+457,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1238,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1665,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+458,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1696,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1697,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1698,"DONE", false,-1, 1,0);
    tracep->declBus(c+1699,"DIFFTEST", false,-1, 1,0);
    tracep->declBus(c+1607,"state", false,-1, 1,0);
    tracep->declBus(c+1674,"xrd", false,-1, 31,0);
    tracep->declBit(c+1012,"ls_done_reg", false,-1);
    tracep->declBit(c+1012,"ls_done_o", false,-1);
    tracep->declBus(c+1013,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1324,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+1706,"AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1695,"AXI_READ", false,-1, 2,0);
    tracep->declBus(c+1707,"AXI_WRITE1", false,-1, 2,0);
    tracep->declBus(c+1708,"AXI_WRITE2", false,-1, 2,0);
    tracep->declBus(c+1709,"AXI_DONE", false,-1, 2,0);
    tracep->declBus(c+1014,"axi_state", false,-1, 2,0);
    tracep->declBit(c+1006,"axi_awvalid", false,-1);
    tracep->declBit(c+1007,"axi_wvalid", false,-1);
    tracep->declBus(c+1747,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+997,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1015,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1000,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1002,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1004,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+999,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1008,"axi_bready", false,-1);
    tracep->declBit(c+1011,"axi_wlast", false,-1);
    tracep->declBit(c+1009,"axi_arvalid", false,-1);
    tracep->declBit(c+1010,"axi_rready", false,-1);
    tracep->declBus(c+1748,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+998,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1001,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1003,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1005,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBit(c+1612,"isCHazard", false,-1);
    tracep->declBus(c+1062,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1372,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1725,"snpc_i", false,-1, 31,0);
    tracep->declBit(c+1710,"pc_valid_o", false,-1);
    tracep->declBit(c+1066,"if_ready_i", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1767,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1770,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBus(c+478,"wdata", false,-1, 31,0);
    tracep->declBus(c+495,"waddr", false,-1, 3,0);
    tracep->declBit(c+480,"wen", false,-1);
    tracep->declBus(c+1191,"raddr1", false,-1, 3,0);
    tracep->declBus(c+1321,"r1", false,-1, 31,0);
    tracep->declBus(c+1192,"raddr2", false,-1, 3,0);
    tracep->declBus(c+1322,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+378+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBit(c+454,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1743,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1739,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1735,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1738,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1741,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1742,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1662,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1744,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1736,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1737,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1746,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1745,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+455,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+452,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1660,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1236,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1077,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1740,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1073,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1074,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1075,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1076,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1078,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1237,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+453,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1543,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1661,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1544,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1545,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1006,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1747,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+997,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1000,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1002,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1004,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1666,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1007,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1663,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+999,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1011,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+1008,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1546,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+456,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1664,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1239,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1009,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1748,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+998,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1001,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1003,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1005,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1010,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1240,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+457,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1238,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1665,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+458,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1454,"io_master_awready", false,-1);
    tracep->declBit(c+1050,"io_master_awvalid", false,-1);
    tracep->declBus(c+1043,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1046,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1047,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1334,"io_master_wready", false,-1);
    tracep->declBit(c+1051,"io_master_wvalid", false,-1);
    tracep->declBus(c+1262,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1048,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1049,"io_master_wlast", false,-1);
    tracep->declBit(c+1052,"io_master_bready", false,-1);
    tracep->declBit(c+1455,"io_master_bvalid", false,-1);
    tracep->declBus(c+1456,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1655,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1457,"io_master_arready", false,-1);
    tracep->declBit(c+1053,"io_master_arvalid", false,-1);
    tracep->declBus(c+1038,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1054,"io_master_rready", false,-1);
    tracep->declBit(c+1458,"io_master_rvalid", false,-1);
    tracep->declBus(c+1459,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1656,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1657,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1460,"io_master_rlast", false,-1);
    tracep->declBit(c+350,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1100,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1094,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1089,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1092,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1096,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1098,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1037,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1101,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1320,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1091,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1105,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1102,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+351,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+346,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+348,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+916,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1103,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1095,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1090,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1093,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1097,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1099,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1104,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+917,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+347,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+345,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+349,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+352,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+353,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+354,"marchid", false,-1, 31,0);
    tracep->declBus(c+1193,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1325,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1194,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1547,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1195,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1196,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1197,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1198,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+459,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1199,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+460,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1200,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1201,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1202,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1203,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1675,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1676,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1204,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+461,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1205,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1677,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+462,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1206,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1207,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1548,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1549,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1208,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1209,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+463,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+496,"state", false,-1, 1,0);
    tracep->declBus(c+1210,"sel_m", false,-1, 1,0);
    tracep->declBus(c+1696,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1697,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1698,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1751,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1752,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1211,"sel_clint", false,-1);
    tracep->declBus(c+1771,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1772,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1212,"sel_mvendorid", false,-1);
    tracep->declBit(c+1213,"sel_marchid", false,-1);
    tracep->declBit(c+1214,"sel_id", false,-1);
    tracep->declBus(c+1215,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1326,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1216,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1678,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1217,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1218,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1219,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1220,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1773,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1221,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1774,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1222,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1223,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1224,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1225,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1775,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1776,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1777,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1226,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1227,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1778,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1779,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1228,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1229,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1710,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1710,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1230,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1231,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1780,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1781,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBus(c+1713,"din", false,-1, 31,0);
    tracep->declBus(c+354,"dout", false,-1, 31,0);
    tracep->declBit(c+1705,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1713,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBus(c+994,"din", false,-1, 31,0);
    tracep->declBus(c+990,"dout", false,-1, 31,0);
    tracep->declBit(c+1016,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1713,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBus(c+992,"din", false,-1, 31,0);
    tracep->declBus(c+988,"dout", false,-1, 31,0);
    tracep->declBit(c+1017,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1782,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBus(c+993,"din", false,-1, 31,0);
    tracep->declBus(c+989,"dout", false,-1, 31,0);
    tracep->declBit(c+1018,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1713,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBus(c+995,"din", false,-1, 31,0);
    tracep->declBus(c+991,"dout", false,-1, 31,0);
    tracep->declBit(c+1019,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1783,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1659,"rst", false,-1);
    tracep->declBus(c+1713,"din", false,-1, 31,0);
    tracep->declBus(c+353,"dout", false,-1, 31,0);
    tracep->declBit(c+1705,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"io_d", false,-1);
    tracep->declBit(c+394,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"io_d", false,-1);
    tracep->declBit(c+394,"io_q", false,-1);
    tracep->declBit(c+394,"sync_0", false,-1);
    tracep->declBit(c+395,"sync_1", false,-1);
    tracep->declBit(c+396,"sync_2", false,-1);
    tracep->declBit(c+397,"sync_3", false,-1);
    tracep->declBit(c+398,"sync_4", false,-1);
    tracep->declBit(c+399,"sync_5", false,-1);
    tracep->declBit(c+400,"sync_6", false,-1);
    tracep->declBit(c+401,"sync_7", false,-1);
    tracep->declBit(c+402,"sync_8", false,-1);
    tracep->declBit(c+403,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1387,"auto_in_psel", false,-1);
    tracep->declBit(c+1388,"auto_in_penable", false,-1);
    tracep->declBit(c+1377,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1331,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1376,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+517,"auto_in_pready", false,-1);
    tracep->declBit(c+1704,"auto_in_pslverr", false,-1);
    tracep->declBus(c+518,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1620,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1621,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1622,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1623,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1624,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1625,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1626,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1627,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1628,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1629,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBus(c+1367,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1387,"in_psel", false,-1);
    tracep->declBit(c+1388,"in_penable", false,-1);
    tracep->declBus(c+1376,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1377,"in_pwrite", false,-1);
    tracep->declBus(c+1378,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+517,"in_pready", false,-1);
    tracep->declBus(c+518,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1704,"in_pslverr", false,-1);
    tracep->declBus(c+1620,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1621,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1622,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1623,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1624,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1625,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1626,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1627,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1628,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1629,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1714,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1784,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1785,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1786,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1787,"ONE", false,-1, 7,0);
    tracep->declBus(c+1788,"TWO", false,-1, 7,0);
    tracep->declBus(c+1789,"THREE", false,-1, 7,0);
    tracep->declBus(c+1790,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1791,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1792,"SIX", false,-1, 7,0);
    tracep->declBus(c+1793,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1794,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1795,"NINE", false,-1, 7,0);
    tracep->declBus(c+1796,"A", false,-1, 7,0);
    tracep->declBus(c+1797,"B", false,-1, 7,0);
    tracep->declBus(c+1798,"C", false,-1, 7,0);
    tracep->declBus(c+1799,"D", false,-1, 7,0);
    tracep->declBus(c+1800,"E", false,-1, 7,0);
    tracep->declBus(c+1801,"F", false,-1, 7,0);
    tracep->declBus(c+549,"led_reg", false,-1, 15,0);
    tracep->declBus(c+550,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+551+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1550,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1551,"write_en", false,-1);
    tracep->declBit(c+1552,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1385,"auto_in_psel", false,-1);
    tracep->declBit(c+1386,"auto_in_penable", false,-1);
    tracep->declBit(c+1377,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1331,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1376,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+515,"auto_in_pready", false,-1);
    tracep->declBit(c+1703,"auto_in_pslverr", false,-1);
    tracep->declBus(c+516,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1630,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1631,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBus(c+1367,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1385,"in_psel", false,-1);
    tracep->declBit(c+1386,"in_penable", false,-1);
    tracep->declBus(c+1376,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1377,"in_pwrite", false,-1);
    tracep->declBus(c+1378,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+515,"in_pready", false,-1);
    tracep->declBus(c+516,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1703,"in_pslverr", false,-1);
    tracep->declBit(c+1630,"ps2_clk", false,-1);
    tracep->declBit(c+1631,"ps2_data", false,-1);
    tracep->declBus(c+1802,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1803,"EXP", false,-1, 7,0);
    tracep->declBus(c+983,"state", false,-1, 1,0);
    tracep->declBus(c+984,"counter", false,-1, 3,0);
    tracep->declBus(c+985,"buffer", false,-1, 7,0);
    tracep->declBus(c+986,"buffer1", false,-1, 7,0);
    tracep->declBus(c+987,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1679,"ready", false,-1);
    tracep->declBus(c+1680,"rdata", false,-1, 31,0);
    tracep->declBit(c+1553,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1302,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1303,"auto_in_wvalid", false,-1);
    tracep->declBit(c+157,"auto_in_arready", false,-1);
    tracep->declBit(c+1304,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1256,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1658,"auto_in_rready", false,-1);
    tracep->declBit(c+158,"auto_in_rvalid", false,-1);
    tracep->declBus(c+159,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"state", false,-1);
    tracep->declBus(c+160,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+159,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1327,"raddr", false,-1, 31,0);
    tracep->declBit(c+1328,"ren", false,-1);
    tracep->declBus(c+1329,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1389,"auto_in_psel", false,-1);
    tracep->declBit(c+1390,"auto_in_penable", false,-1);
    tracep->declBit(c+1377,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1330,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1376,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1644,"auto_in_pready", false,-1);
    tracep->declBit(c+1705,"auto_in_pslverr", false,-1);
    tracep->declBus(c+909,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1614,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1615,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1641,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBus(c+1330,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1389,"in_psel", false,-1);
    tracep->declBit(c+1390,"in_penable", false,-1);
    tracep->declBus(c+1376,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1377,"in_pwrite", false,-1);
    tracep->declBus(c+1378,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1644,"in_pready", false,-1);
    tracep->declBus(c+909,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1705,"in_pslverr", false,-1);
    tracep->declBit(c+1614,"qspi_sck", false,-1);
    tracep->declBit(c+1615,"qspi_ce_n", false,-1);
    tracep->declBus(c+1641,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1641,"din", false,-1, 3,0);
    tracep->declBus(c+1616,"dout", false,-1, 3,0);
    tracep->declBus(c+1617,"douten", false,-1, 3,0);
    tracep->declBit(c+1681,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1618,"clk_i", false,-1);
    tracep->declBit(c+1619,"rst_i", false,-1);
    tracep->declBus(c+1330,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1378,"dat_i", false,-1, 31,0);
    tracep->declBus(c+909,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1379,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1389,"cyc_i", false,-1);
    tracep->declBit(c+1389,"stb_i", false,-1);
    tracep->declBit(c+1681,"ack_o", false,-1);
    tracep->declBit(c+1377,"we_i", false,-1);
    tracep->declBit(c+1614,"sck", false,-1);
    tracep->declBit(c+1615,"ce_n", false,-1);
    tracep->declBus(c+1641,"din", false,-1, 3,0);
    tracep->declBus(c+1616,"dout", false,-1, 3,0);
    tracep->declBus(c+1617,"douten", false,-1, 3,0);
    tracep->declBus(c+1753,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1754,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+559,"mr_sck", false,-1);
    tracep->declBit(c+560,"mr_ce_n", false,-1);
    tracep->declBus(c+1641,"mr_din", false,-1, 3,0);
    tracep->declBus(c+561,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+562,"mr_doe", false,-1);
    tracep->declBit(c+563,"mw_sck", false,-1);
    tracep->declBit(c+564,"mw_ce_n", false,-1);
    tracep->declBus(c+1641,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1554,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+565,"mw_doe", false,-1);
    tracep->declBit(c+1555,"mr_rd", false,-1);
    tracep->declBit(c+566,"mr_done", false,-1);
    tracep->declBit(c+1556,"mw_wr", false,-1);
    tracep->declBit(c+1557,"mw_done", false,-1);
    tracep->declBit(c+1389,"wb_valid", false,-1);
    tracep->declBit(c+1558,"wb_we", false,-1);
    tracep->declBit(c+1559,"wb_re", false,-1);
    tracep->declBit(c+567,"state", false,-1);
    tracep->declBit(c+1560,"nstate", false,-1);
    tracep->declBus(c+1561,"size", false,-1, 2,0);
    tracep->declBus(c+1562,"byte0", false,-1, 7,0);
    tracep->declBus(c+1563,"byte1", false,-1, 7,0);
    tracep->declBus(c+1564,"byte2", false,-1, 7,0);
    tracep->declBus(c+1565,"byte3", false,-1, 7,0);
    tracep->declBus(c+1368,"wdata", false,-1, 31,0);
    tracep->declBit(c+818,"qpi_flag", false,-1);
    tracep->declBit(c+819,"qpi_sck", false,-1);
    tracep->declBit(c+820,"qpi_ce_n", false,-1);
    tracep->declBus(c+821,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+822,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+823,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1682,"rst_n", false,-1);
    tracep->declBus(c+1369,"addr", false,-1, 23,0);
    tracep->declBit(c+1555,"rd", false,-1);
    tracep->declBus(c+1709,"size", false,-1, 2,0);
    tracep->declBit(c+566,"done", false,-1);
    tracep->declBus(c+909,"line", false,-1, 31,0);
    tracep->declBit(c+559,"sck", false,-1);
    tracep->declBit(c+560,"ce_n", false,-1);
    tracep->declBus(c+1641,"din", false,-1, 3,0);
    tracep->declBus(c+561,"dout", false,-1, 3,0);
    tracep->declBit(c+562,"douten", false,-1);
    tracep->declBus(c+1753,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1754,"READ", false,-1, 0,0);
    tracep->declBus(c+1804,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+568,"state", false,-1);
    tracep->declBit(c+1566,"nstate", false,-1);
    tracep->declBus(c+569,"counter", false,-1, 7,0);
    tracep->declBus(c+570,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+918+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1805,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+571,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1682,"rst_n", false,-1);
    tracep->declBus(c+1370,"addr", false,-1, 23,0);
    tracep->declBus(c+1368,"line", false,-1, 31,0);
    tracep->declBus(c+1561,"size", false,-1, 2,0);
    tracep->declBit(c+1556,"wr", false,-1);
    tracep->declBit(c+1557,"done", false,-1);
    tracep->declBit(c+563,"sck", false,-1);
    tracep->declBit(c+564,"ce_n", false,-1);
    tracep->declBus(c+1641,"din", false,-1, 3,0);
    tracep->declBus(c+1554,"dout", false,-1, 3,0);
    tracep->declBit(c+565,"douten", false,-1);
    tracep->declBus(c+1753,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1754,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1567,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+572,"state", false,-1);
    tracep->declBit(c+1568,"nstate", false,-1);
    tracep->declBus(c+573,"counter", false,-1, 7,0);
    tracep->declBus(c+574,"saddr", false,-1, 23,0);
    tracep->declBus(c+1806,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1420,"auto_in_awready", false,-1);
    tracep->declBit(c+1421,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1422,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1423,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1424,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1233,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1425,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1426,"auto_in_wready", false,-1);
    tracep->declBit(c+1427,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1332,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1234,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1235,"auto_in_wlast", false,-1);
    tracep->declBit(c+1648,"auto_in_bready", false,-1);
    tracep->declBit(c+532,"auto_in_bvalid", false,-1);
    tracep->declBus(c+529,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1696,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1413,"auto_in_arready", false,-1);
    tracep->declBit(c+1414,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1415,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1416,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1417,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1232,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1418,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1419,"auto_in_rready", false,-1);
    tracep->declBit(c+528,"auto_in_rvalid", false,-1);
    tracep->declBus(c+529,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+530,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1696,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+531,"auto_in_rlast", false,-1);
    tracep->declBit(c+1642,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+505,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+934,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+935,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+936,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+937,"sdram_bundle_we", false,-1);
    tracep->declBus(c+938,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+939,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+506,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+963,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1420,"in_awready", false,-1);
    tracep->declBit(c+1421,"in_awvalid", false,-1);
    tracep->declBus(c+1423,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1422,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1424,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1233,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1425,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1426,"in_wready", false,-1);
    tracep->declBit(c+1427,"in_wvalid", false,-1);
    tracep->declBus(c+1332,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1234,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1235,"in_wlast", false,-1);
    tracep->declBit(c+1648,"in_bready", false,-1);
    tracep->declBit(c+532,"in_bvalid", false,-1);
    tracep->declBus(c+1696,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+529,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1413,"in_arready", false,-1);
    tracep->declBit(c+1414,"in_arvalid", false,-1);
    tracep->declBus(c+1416,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1415,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1417,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1232,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1418,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1419,"in_rready", false,-1);
    tracep->declBit(c+528,"in_rvalid", false,-1);
    tracep->declBus(c+1696,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+530,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+531,"in_rlast", false,-1);
    tracep->declBus(c+529,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1642,"sdram_clk", false,-1);
    tracep->declBit(c+505,"sdram_cke", false,-1);
    tracep->declBit(c+934,"sdram_cs", false,-1);
    tracep->declBit(c+935,"sdram_ras", false,-1);
    tracep->declBit(c+936,"sdram_cas", false,-1);
    tracep->declBit(c+937,"sdram_we", false,-1);
    tracep->declBus(c+938,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+939,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+506,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+963,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+575,"sdram_dout_en", false,-1);
    tracep->declBus(c+576,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1618,"clk_i", false,-1);
    tracep->declBit(c+1619,"rst_i", false,-1);
    tracep->declBit(c+1421,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1423,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1422,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1424,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1425,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1427,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1332,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1234,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1235,"inport_wlast_i", false,-1);
    tracep->declBit(c+1648,"inport_bready_i", false,-1);
    tracep->declBit(c+1414,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1416,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1415,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1417,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1418,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1419,"inport_rready_i", false,-1);
    tracep->declBus(c+963,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1420,"inport_awready_o", false,-1);
    tracep->declBit(c+1426,"inport_wready_o", false,-1);
    tracep->declBit(c+532,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1696,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+529,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1413,"inport_arready_o", false,-1);
    tracep->declBit(c+528,"inport_rvalid_o", false,-1);
    tracep->declBus(c+530,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1696,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+529,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+531,"inport_rlast_o", false,-1);
    tracep->declBit(c+1642,"sdram_clk_o", false,-1);
    tracep->declBit(c+505,"sdram_cke_o", false,-1);
    tracep->declBit(c+934,"sdram_cs_o", false,-1);
    tracep->declBit(c+935,"sdram_ras_o", false,-1);
    tracep->declBit(c+936,"sdram_cas_o", false,-1);
    tracep->declBit(c+937,"sdram_we_o", false,-1);
    tracep->declBus(c+506,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+938,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+939,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+576,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+575,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1807,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1808,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1809,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1750,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1569,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1570,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1571,"ram_rd_w", false,-1);
    tracep->declBit(c+940,"ram_accept_w", false,-1);
    tracep->declBus(c+1332,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+577,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1572,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+578,"ram_ack_w", false,-1);
    tracep->declBit(c+1705,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1618,"clk_i", false,-1);
    tracep->declBit(c+1619,"rst_i", false,-1);
    tracep->declBit(c+1421,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1423,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1422,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1424,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1425,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1427,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1332,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1234,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1235,"axi_wlast_i", false,-1);
    tracep->declBit(c+1648,"axi_bready_i", false,-1);
    tracep->declBit(c+1414,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1416,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1415,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1417,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1418,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1419,"axi_rready_i", false,-1);
    tracep->declBit(c+940,"ram_accept_i", false,-1);
    tracep->declBit(c+578,"ram_ack_i", false,-1);
    tracep->declBit(c+1705,"ram_error_i", false,-1);
    tracep->declBus(c+577,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1420,"axi_awready_o", false,-1);
    tracep->declBit(c+1426,"axi_wready_o", false,-1);
    tracep->declBit(c+532,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1696,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+529,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1413,"axi_arready_o", false,-1);
    tracep->declBit(c+528,"axi_rvalid_o", false,-1);
    tracep->declBus(c+530,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1696,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+529,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+531,"axi_rlast_o", false,-1);
    tracep->declBus(c+1570,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1571,"ram_rd_o", false,-1);
    tracep->declBus(c+1572,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1569,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1332,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+579,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+580,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+581,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+582,"req_rd_q", false,-1);
    tracep->declBit(c+583,"req_wr_q", false,-1);
    tracep->declBus(c+584,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+585,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+586,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+587,"req_prio_q", false,-1);
    tracep->declBit(c+588,"req_hold_rd_q", false,-1);
    tracep->declBit(c+589,"req_hold_wr_q", false,-1);
    tracep->declBit(c+590,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1573,"req_push_w", false,-1);
    tracep->declBus(c+1683,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+591,"req_out_valid_w", false,-1);
    tracep->declBus(c+592,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1574,"resp_accept_w", false,-1);
    tracep->declBit(c+593,"resp_is_write_w", false,-1);
    tracep->declBit(c+594,"resp_is_read_w", false,-1);
    tracep->declBit(c+531,"resp_is_last_w", false,-1);
    tracep->declBus(c+529,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+595,"resp_valid_w", false,-1);
    tracep->declBit(c+596,"write_prio_w", false,-1);
    tracep->declBit(c+597,"read_prio_w", false,-1);
    tracep->declBit(c+1575,"write_active_w", false,-1);
    tracep->declBit(c+1571,"read_active_w", false,-1);
    tracep->declBus(c+1569,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1576,"wr_w", false,-1);
    tracep->declBit(c+1571,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1810,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1767,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1750,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1618,"clk_i", false,-1);
    tracep->declBit(c+1619,"rst_i", false,-1);
    tracep->declBus(c+1683,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1573,"push_i", false,-1);
    tracep->declBit(c+1574,"pop_i", false,-1);
    tracep->declBus(c+592,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+590,"accept_o", false,-1);
    tracep->declBit(c+591,"valid_o", false,-1);
    tracep->declBus(c+1749,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+598+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+602,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+603,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+604,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1770,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1767,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1750,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1618,"clk_i", false,-1);
    tracep->declBit(c+1619,"rst_i", false,-1);
    tracep->declBus(c+577,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+578,"push_i", false,-1);
    tracep->declBit(c+1574,"pop_i", false,-1);
    tracep->declBus(c+530,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+605,"accept_o", false,-1);
    tracep->declBit(c+595,"valid_o", false,-1);
    tracep->declBus(c+1749,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+606+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+610,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+611,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+612,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1618,"clk_i", false,-1);
    tracep->declBit(c+1619,"rst_i", false,-1);
    tracep->declBus(c+1570,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1571,"inport_rd_i", false,-1);
    tracep->declBus(c+1572,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1569,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1332,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+963,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+940,"inport_accept_o", false,-1);
    tracep->declBit(c+578,"inport_ack_o", false,-1);
    tracep->declBit(c+1705,"inport_error_o", false,-1);
    tracep->declBus(c+577,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1642,"sdram_clk_o", false,-1);
    tracep->declBit(c+505,"sdram_cke_o", false,-1);
    tracep->declBit(c+934,"sdram_cs_o", false,-1);
    tracep->declBit(c+935,"sdram_ras_o", false,-1);
    tracep->declBit(c+936,"sdram_cas_o", false,-1);
    tracep->declBit(c+937,"sdram_we_o", false,-1);
    tracep->declBus(c+506,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+938,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+939,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+576,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+575,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1807,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1808,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1809,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1750,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1749,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1767,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1811,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1812,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1813,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1814,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1815,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1767,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1761,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1757,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1759,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1758,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1760,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1756,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1755,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1712,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1816,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1767,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1712,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1755,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1756,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1757,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1758,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1759,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1760,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1761,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1762,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1763,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1817,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1817,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1770,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1817,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1750,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1750,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1810,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1569,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1570,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1571,"ram_rd_w", false,-1);
    tracep->declBit(c+940,"ram_accept_w", false,-1);
    tracep->declBus(c+1332,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+577,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+578,"ram_ack_w", false,-1);
    tracep->declBit(c+1577,"ram_req_w", false,-1);
    tracep->declBus(c+941,"command_q", false,-1, 3,0);
    tracep->declBus(c+938,"addr_q", false,-1, 12,0);
    tracep->declBus(c+576,"data_q", false,-1, 31,0);
    tracep->declBit(c+613,"data_rd_en_q", false,-1);
    tracep->declBus(c+506,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+505,"cke_q", false,-1);
    tracep->declBus(c+939,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1818,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+614,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+963,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+615,"refresh_q", false,-1);
    tracep->declBus(c+942,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+616+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+943,"state_q", false,-1, 3,0);
    tracep->declBus(c+1578,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1579,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+624,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+625,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1580,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1581,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1582,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1767,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+626,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1583,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1819,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+944,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+627,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+577,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+628,"idx", false,-1, 31,0);
    tracep->declBus(c+629,"rd_q", false,-1, 3,0);
    tracep->declBit(c+578,"ack_q", false,-1);
    tracep->declArray(c+945,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1395,"auto_in_psel", false,-1);
    tracep->declBit(c+1396,"auto_in_penable", false,-1);
    tracep->declBit(c+1377,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1384,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1376,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1645,"auto_in_pready", false,-1);
    tracep->declBit(c+1705,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1397,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+503,"spi_bundle_sck", false,-1);
    tracep->declBus(c+504,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+933,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1640,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1820,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1821,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1811,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBus(c+1584,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1395,"in_psel", false,-1);
    tracep->declBit(c+1396,"in_penable", false,-1);
    tracep->declBus(c+1376,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1377,"in_pwrite", false,-1);
    tracep->declBus(c+1378,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1645,"in_pready", false,-1);
    tracep->declBus(c+1397,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1705,"in_pslverr", false,-1);
    tracep->declBit(c+503,"spi_sck", false,-1);
    tracep->declBus(c+504,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+933,"spi_mosi", false,-1);
    tracep->declBit(c+1640,"spi_miso", false,-1);
    tracep->declBit(c+630,"spi_irq_out", false,-1);
    tracep->declBus(c+1585,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1586,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1587,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1588,"wb_we_i", false,-1);
    tracep->declBit(c+1589,"wb_stb_i", false,-1);
    tracep->declBit(c+1590,"wb_cyc_i", false,-1);
    tracep->declBit(c+631,"wb_ack_o", false,-1);
    tracep->declBus(c+632,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1706,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1695,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1707,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1708,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1709,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1822,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1823,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1824,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+404,"state", false,-1, 2,0);
    tracep->declBus(c+405,"next_state", false,-1, 2,0);
    tracep->declBus(c+406,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+407,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+408,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+409,"flash_pwrite", false,-1);
    tracep->declBit(c+410,"flash_psel", false,-1);
    tracep->declBit(c+411,"flash_penable", false,-1);
    tracep->declBit(c+412,"flash_pready", false,-1);
    tracep->declBus(c+413,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1768,"Tp", false,-1, 31,0);
    tracep->declBit(c+1618,"wb_clk_i", false,-1);
    tracep->declBit(c+1619,"wb_rst_i", false,-1);
    tracep->declBus(c+1585,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1586,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+632,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1587,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1588,"wb_we_i", false,-1);
    tracep->declBit(c+1589,"wb_stb_i", false,-1);
    tracep->declBit(c+1590,"wb_cyc_i", false,-1);
    tracep->declBit(c+631,"wb_ack_o", false,-1);
    tracep->declBit(c+1705,"wb_err_o", false,-1);
    tracep->declBit(c+630,"wb_int_o", false,-1);
    tracep->declBus(c+504,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+503,"sclk_pad_o", false,-1);
    tracep->declBit(c+933,"mosi_pad_o", false,-1);
    tracep->declBit(c+1640,"miso_pad_i", false,-1);
    tracep->declBus(c+633,"divider", false,-1, 15,0);
    tracep->declBus(c+634,"ctrl", false,-1, 13,0);
    tracep->declBus(c+635,"ss", false,-1, 7,0);
    tracep->declBus(c+1591,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+636,"rx", false,-1, 127,0);
    tracep->declBit(c+640,"rx_negedge", false,-1);
    tracep->declBit(c+641,"tx_negedge", false,-1);
    tracep->declBus(c+642,"char_len", false,-1, 6,0);
    tracep->declBit(c+643,"go", false,-1);
    tracep->declBit(c+644,"lsb", false,-1);
    tracep->declBit(c+645,"ie", false,-1);
    tracep->declBit(c+646,"ass", false,-1);
    tracep->declBit(c+1592,"spi_divider_sel", false,-1);
    tracep->declBit(c+1593,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1594,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1595,"spi_ss_sel", false,-1);
    tracep->declBit(c+647,"tip", false,-1);
    tracep->declBit(c+648,"pos_edge", false,-1);
    tracep->declBit(c+649,"neg_edge", false,-1);
    tracep->declBit(c+650,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1768,"Tp", false,-1, 31,0);
    tracep->declBit(c+1618,"clk_in", false,-1);
    tracep->declBit(c+1619,"rst", false,-1);
    tracep->declBit(c+647,"enable", false,-1);
    tracep->declBit(c+643,"go", false,-1);
    tracep->declBit(c+650,"last_clk", false,-1);
    tracep->declBus(c+633,"divider", false,-1, 15,0);
    tracep->declBit(c+503,"clk_out", false,-1);
    tracep->declBit(c+648,"pos_edge", false,-1);
    tracep->declBit(c+649,"neg_edge", false,-1);
    tracep->declBus(c+651,"cnt", false,-1, 15,0);
    tracep->declBit(c+652,"cnt_zero", false,-1);
    tracep->declBit(c+653,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1768,"Tp", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1619,"rst", false,-1);
    tracep->declBus(c+1596,"latch", false,-1, 3,0);
    tracep->declBus(c+1587,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+642,"len", false,-1, 6,0);
    tracep->declBit(c+644,"lsb", false,-1);
    tracep->declBit(c+643,"go", false,-1);
    tracep->declBit(c+648,"pos_edge", false,-1);
    tracep->declBit(c+649,"neg_edge", false,-1);
    tracep->declBit(c+640,"rx_negedge", false,-1);
    tracep->declBit(c+641,"tx_negedge", false,-1);
    tracep->declBit(c+647,"tip", false,-1);
    tracep->declBit(c+650,"last", false,-1);
    tracep->declBus(c+1586,"p_in", false,-1, 31,0);
    tracep->declArray(c+636,"p_out", false,-1, 127,0);
    tracep->declBit(c+503,"s_clk", false,-1);
    tracep->declBit(c+1640,"s_in", false,-1);
    tracep->declBit(c+933,"s_out", false,-1);
    tracep->declBus(c+654,"cnt", false,-1, 7,0);
    tracep->declArray(c+636,"data", false,-1, 127,0);
    tracep->declBus(c+655,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+656,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+657,"rx_clk", false,-1);
    tracep->declBit(c+658,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1391,"auto_in_psel", false,-1);
    tracep->declBit(c+1392,"auto_in_penable", false,-1);
    tracep->declBit(c+1377,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1331,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1376,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1393,"auto_in_pready", false,-1);
    tracep->declBit(c+1705,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1394,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1638,"uart_rx", false,-1);
    tracep->declBit(c+1639,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1391,"in_psel", false,-1);
    tracep->declBit(c+1392,"in_penable", false,-1);
    tracep->declBus(c+1376,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1393,"in_pready", false,-1);
    tracep->declBit(c+1705,"in_pslverr", false,-1);
    tracep->declBus(c+1367,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1377,"in_pwrite", false,-1);
    tracep->declBus(c+1394,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1378,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1638,"uart_rx", false,-1);
    tracep->declBit(c+1639,"uart_tx", false,-1);
    tracep->declBit(c+659,"rtsn", false,-1);
    tracep->declBit(c+1705,"ctsn", false,-1);
    tracep->declBit(c+660,"dtr_pad_o", false,-1);
    tracep->declBit(c+1705,"dsr_pad_i", false,-1);
    tracep->declBit(c+1705,"ri_pad_i", false,-1);
    tracep->declBit(c+1705,"dcd_pad_i", false,-1);
    tracep->declBit(c+661,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1597,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1598,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+414,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1599,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+662,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1619,"wb_rst_i", false,-1);
    tracep->declBus(c+1597,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1600,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1599,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1639,"stx_pad_o", false,-1);
    tracep->declBit(c+1638,"srx_pad_i", false,-1);
    tracep->declBus(c+1762,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+662,"rts_pad_o", false,-1);
    tracep->declBit(c+660,"dtr_pad_o", false,-1);
    tracep->declBit(c+661,"int_o", false,-1);
    tracep->declBit(c+663,"enable", false,-1);
    tracep->declBit(c+664,"srx_pad", false,-1);
    tracep->declBus(c+665,"ier", false,-1, 3,0);
    tracep->declBus(c+666,"iir", false,-1, 3,0);
    tracep->declBus(c+667,"fcr", false,-1, 1,0);
    tracep->declBus(c+668,"mcr", false,-1, 4,0);
    tracep->declBus(c+669,"lcr", false,-1, 7,0);
    tracep->declBus(c+670,"msr", false,-1, 7,0);
    tracep->declBus(c+671,"dl", false,-1, 15,0);
    tracep->declBus(c+672,"scratch", false,-1, 7,0);
    tracep->declBit(c+673,"start_dlc", false,-1);
    tracep->declBit(c+674,"lsr_mask_d", false,-1);
    tracep->declBit(c+675,"msi_reset", false,-1);
    tracep->declBus(c+676,"dlc", false,-1, 15,0);
    tracep->declBus(c+677,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+678,"rx_reset", false,-1);
    tracep->declBit(c+679,"tx_reset", false,-1);
    tracep->declBit(c+680,"dlab", false,-1);
    tracep->declBit(c+1710,"cts_pad_i", false,-1);
    tracep->declBit(c+1705,"dsr_pad_i", false,-1);
    tracep->declBit(c+1705,"ri_pad_i", false,-1);
    tracep->declBit(c+1705,"dcd_pad_i", false,-1);
    tracep->declBit(c+681,"loopback", false,-1);
    tracep->declBit(c+1705,"cts", false,-1);
    tracep->declBit(c+1710,"dsr", false,-1);
    tracep->declBit(c+1710,"ri", false,-1);
    tracep->declBit(c+1710,"dcd", false,-1);
    tracep->declBit(c+682,"cts_c", false,-1);
    tracep->declBit(c+683,"dsr_c", false,-1);
    tracep->declBit(c+684,"ri_c", false,-1);
    tracep->declBit(c+685,"dcd_c", false,-1);
    tracep->declBus(c+686,"lsr", false,-1, 7,0);
    tracep->declBit(c+687,"lsr0", false,-1);
    tracep->declBit(c+688,"lsr1", false,-1);
    tracep->declBit(c+689,"lsr2", false,-1);
    tracep->declBit(c+690,"lsr3", false,-1);
    tracep->declBit(c+691,"lsr4", false,-1);
    tracep->declBit(c+692,"lsr5", false,-1);
    tracep->declBit(c+693,"lsr6", false,-1);
    tracep->declBit(c+694,"lsr7", false,-1);
    tracep->declBit(c+695,"lsr0r", false,-1);
    tracep->declBit(c+696,"lsr1r", false,-1);
    tracep->declBit(c+697,"lsr2r", false,-1);
    tracep->declBit(c+698,"lsr3r", false,-1);
    tracep->declBit(c+699,"lsr4r", false,-1);
    tracep->declBit(c+700,"lsr5r", false,-1);
    tracep->declBit(c+701,"lsr6r", false,-1);
    tracep->declBit(c+702,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+703,"rls_int", false,-1);
    tracep->declBit(c+704,"rda_int", false,-1);
    tracep->declBit(c+705,"ti_int", false,-1);
    tracep->declBit(c+706,"thre_int", false,-1);
    tracep->declBit(c+707,"ms_int", false,-1);
    tracep->declBit(c+708,"tf_push", false,-1);
    tracep->declBit(c+709,"rf_pop", false,-1);
    tracep->declBus(c+1684,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+710,"rf_error_bit", false,-1);
    tracep->declBit(c+688,"rf_overrun", false,-1);
    tracep->declBit(c+711,"rf_push_pulse", false,-1);
    tracep->declBus(c+712,"rf_count", false,-1, 4,0);
    tracep->declBus(c+713,"tf_count", false,-1, 4,0);
    tracep->declBus(c+714,"tstate", false,-1, 2,0);
    tracep->declBus(c+715,"rstate", false,-1, 3,0);
    tracep->declBus(c+716,"counter_t", false,-1, 9,0);
    tracep->declBit(c+717,"thre_set_en", false,-1);
    tracep->declBus(c+718,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+719,"block_value", false,-1, 7,0);
    tracep->declBit(c+720,"serial_out", false,-1);
    tracep->declBit(c+721,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+722,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+723,"lsr0_d", false,-1);
    tracep->declBit(c+724,"lsr1_d", false,-1);
    tracep->declBit(c+725,"lsr2_d", false,-1);
    tracep->declBit(c+726,"lsr3_d", false,-1);
    tracep->declBit(c+727,"lsr4_d", false,-1);
    tracep->declBit(c+728,"lsr5_d", false,-1);
    tracep->declBit(c+729,"lsr6_d", false,-1);
    tracep->declBit(c+730,"lsr7_d", false,-1);
    tracep->declBit(c+731,"rls_int_d", false,-1);
    tracep->declBit(c+732,"thre_int_d", false,-1);
    tracep->declBit(c+733,"ms_int_d", false,-1);
    tracep->declBit(c+734,"ti_int_d", false,-1);
    tracep->declBit(c+735,"rda_int_d", false,-1);
    tracep->declBit(c+736,"rls_int_rise", false,-1);
    tracep->declBit(c+737,"thre_int_rise", false,-1);
    tracep->declBit(c+738,"ms_int_rise", false,-1);
    tracep->declBit(c+739,"ti_int_rise", false,-1);
    tracep->declBit(c+740,"rda_int_rise", false,-1);
    tracep->declBit(c+741,"rls_int_pnd", false,-1);
    tracep->declBit(c+742,"rda_int_pnd", false,-1);
    tracep->declBit(c+743,"thre_int_pnd", false,-1);
    tracep->declBit(c+744,"ms_int_pnd", false,-1);
    tracep->declBit(c+745,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1768,"Tp", false,-1, 31,0);
    tracep->declBus(c+1768,"width", false,-1, 31,0);
    tracep->declBus(c+1754,"init_value", false,-1, 0,0);
    tracep->declBit(c+1619,"rst_i", false,-1);
    tracep->declBit(c+1618,"clk_i", false,-1);
    tracep->declBit(c+1705,"stage1_rst_i", false,-1);
    tracep->declBit(c+1710,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1638,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+664,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+746,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1619,"wb_rst_i", false,-1);
    tracep->declBus(c+669,"lcr", false,-1, 7,0);
    tracep->declBit(c+709,"rf_pop", false,-1);
    tracep->declBit(c+721,"srx_pad_i", false,-1);
    tracep->declBit(c+663,"enable", false,-1);
    tracep->declBit(c+678,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+716,"counter_t", false,-1, 9,0);
    tracep->declBus(c+712,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1684,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+688,"rf_overrun", false,-1);
    tracep->declBit(c+710,"rf_error_bit", false,-1);
    tracep->declBus(c+715,"rstate", false,-1, 3,0);
    tracep->declBit(c+711,"rf_push_pulse", false,-1);
    tracep->declBus(c+747,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+748,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+749,"rshift", false,-1, 7,0);
    tracep->declBit(c+750,"rparity", false,-1);
    tracep->declBit(c+751,"rparity_error", false,-1);
    tracep->declBit(c+752,"rframing_error", false,-1);
    tracep->declBit(c+753,"rbit_in", false,-1);
    tracep->declBit(c+754,"rparity_xor", false,-1);
    tracep->declBus(c+755,"counter_b", false,-1, 7,0);
    tracep->declBit(c+756,"rf_push_q", false,-1);
    tracep->declBus(c+757,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+758,"rf_push", false,-1);
    tracep->declBit(c+759,"break_error", false,-1);
    tracep->declBit(c+760,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+761,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+762,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+763,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1712,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1755,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1756,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1757,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1758,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1759,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1760,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1761,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1762,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1763,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1764,"sr_push", false,-1, 3,0);
    tracep->declBus(c+764,"toc_value", false,-1, 9,0);
    tracep->declBus(c+765,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1825,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1826,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1767,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1827,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1619,"wb_rst_i", false,-1);
    tracep->declBit(c+711,"push", false,-1);
    tracep->declBit(c+709,"pop", false,-1);
    tracep->declBus(c+757,"data_in", false,-1, 10,0);
    tracep->declBit(c+678,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1684,"data_out", false,-1, 10,0);
    tracep->declBit(c+688,"overrun", false,-1);
    tracep->declBus(c+712,"count", false,-1, 4,0);
    tracep->declBit(c+710,"error_bit", false,-1);
    tracep->declBus(c+1685,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+766+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+782,"top", false,-1, 3,0);
    tracep->declBus(c+783,"bottom", false,-1, 3,0);
    tracep->declBus(c+784,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+785,"word0", false,-1, 2,0);
    tracep->declBus(c+786,"word1", false,-1, 2,0);
    tracep->declBus(c+787,"word2", false,-1, 2,0);
    tracep->declBus(c+788,"word3", false,-1, 2,0);
    tracep->declBus(c+789,"word4", false,-1, 2,0);
    tracep->declBus(c+790,"word5", false,-1, 2,0);
    tracep->declBus(c+791,"word6", false,-1, 2,0);
    tracep->declBus(c+792,"word7", false,-1, 2,0);
    tracep->declBus(c+793,"word8", false,-1, 2,0);
    tracep->declBus(c+794,"word9", false,-1, 2,0);
    tracep->declBus(c+795,"word10", false,-1, 2,0);
    tracep->declBus(c+796,"word11", false,-1, 2,0);
    tracep->declBus(c+797,"word12", false,-1, 2,0);
    tracep->declBus(c+798,"word13", false,-1, 2,0);
    tracep->declBus(c+799,"word14", false,-1, 2,0);
    tracep->declBus(c+800,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1767,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1811,"data_width", false,-1, 31,0);
    tracep->declBus(c+1826,"depth", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+711,"we", false,-1);
    tracep->declBus(c+782,"a", false,-1, 3,0);
    tracep->declBus(c+783,"dpra", false,-1, 3,0);
    tracep->declBus(c+801,"di", false,-1, 7,0);
    tracep->declBus(c+1685,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+415+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1619,"wb_rst_i", false,-1);
    tracep->declBus(c+669,"lcr", false,-1, 7,0);
    tracep->declBit(c+708,"tf_push", false,-1);
    tracep->declBus(c+1600,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+663,"enable", false,-1);
    tracep->declBit(c+679,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+720,"stx_pad_o", false,-1);
    tracep->declBus(c+714,"tstate", false,-1, 2,0);
    tracep->declBus(c+713,"tf_count", false,-1, 4,0);
    tracep->declBus(c+802,"counter", false,-1, 4,0);
    tracep->declBus(c+803,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+804,"shift_out", false,-1, 6,0);
    tracep->declBit(c+805,"stx_o_tmp", false,-1);
    tracep->declBit(c+806,"parity_xor", false,-1);
    tracep->declBit(c+807,"tf_pop", false,-1);
    tracep->declBit(c+808,"bit_out", false,-1);
    tracep->declBus(c+1600,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1686,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+809,"tf_overrun", false,-1);
    tracep->declBus(c+1706,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1695,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1707,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1708,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1709,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1822,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1811,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1826,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1767,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1827,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+1619,"wb_rst_i", false,-1);
    tracep->declBit(c+708,"push", false,-1);
    tracep->declBit(c+807,"pop", false,-1);
    tracep->declBus(c+1600,"data_in", false,-1, 7,0);
    tracep->declBit(c+679,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1686,"data_out", false,-1, 7,0);
    tracep->declBit(c+809,"overrun", false,-1);
    tracep->declBus(c+713,"count", false,-1, 4,0);
    tracep->declBus(c+810,"top", false,-1, 3,0);
    tracep->declBus(c+811,"bottom", false,-1, 3,0);
    tracep->declBus(c+812,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1767,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1811,"data_width", false,-1, 31,0);
    tracep->declBus(c+1826,"depth", false,-1, 31,0);
    tracep->declBit(c+1618,"clk", false,-1);
    tracep->declBit(c+708,"we", false,-1);
    tracep->declBus(c+810,"a", false,-1, 3,0);
    tracep->declBus(c+811,"dpra", false,-1, 3,0);
    tracep->declBus(c+1600,"di", false,-1, 7,0);
    tracep->declBus(c+1686,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+431+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBit(c+1382,"auto_in_psel", false,-1);
    tracep->declBit(c+1383,"auto_in_penable", false,-1);
    tracep->declBit(c+1377,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1384,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1376,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1378,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+514,"auto_in_pready", false,-1);
    tracep->declBit(c+1701,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1702,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1632,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1633,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1634,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1635,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1636,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1637,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1618,"clock", false,-1);
    tracep->declBit(c+1619,"reset", false,-1);
    tracep->declBus(c+1584,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1382,"in_psel", false,-1);
    tracep->declBit(c+1383,"in_penable", false,-1);
    tracep->declBus(c+1376,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1377,"in_pwrite", false,-1);
    tracep->declBus(c+1378,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1379,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+514,"in_pready", false,-1);
    tracep->declBus(c+1702,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1701,"in_pslverr", false,-1);
    tracep->declBus(c+1632,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1633,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1634,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1635,"vga_hsync", false,-1);
    tracep->declBit(c+1636,"vga_vsync", false,-1);
    tracep->declBit(c+1637,"vga_valid", false,-1);
    tracep->declBit(c+1601,"is_write", false,-1);
    tracep->declBus(c+1602,"addr", false,-1, 31,0);
    tracep->declBit(c+514,"ready", false,-1);
    tracep->declBus(c+813,"i", false,-1, 31,0);
    tracep->declBus(c+1828,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1829,"h_active", false,-1, 31,0);
    tracep->declBus(c+1830,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1831,"h_total", false,-1, 31,0);
    tracep->declBus(c+1750,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1832,"v_active", false,-1, 31,0);
    tracep->declBus(c+1833,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1834,"v_total", false,-1, 31,0);
    tracep->declBus(c+814,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+447,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+815,"h_valid", false,-1);
    tracep->declBit(c+448,"v_valid", false,-1);
    tracep->declBus(c+816,"h_addr", false,-1, 9,0);
    tracep->declBus(c+449,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1687,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+503,"sck", false,-1);
    tracep->declBit(c+948,"ss", false,-1);
    tracep->declBit(c+933,"mosi", false,-1);
    tracep->declBit(c+928,"miso", false,-1);
    tracep->declBus(c+929,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+930,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+931,"counter", false,-1, 2,0);
    tracep->declBit(c+932,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+503,"sck", false,-1);
    tracep->declBit(c+817,"ss", false,-1);
    tracep->declBit(c+933,"mosi", false,-1);
    tracep->declBit(c+1688,"miso", false,-1);
    tracep->declBit(c+817,"reset", false,-1);
    tracep->declBus(c+922,"state", false,-1, 2,0);
    tracep->declBus(c+923,"counter", false,-1, 7,0);
    tracep->declBus(c+924,"cmd", false,-1, 7,0);
    tracep->declBus(c+925,"addr", false,-1, 23,0);
    tracep->declBus(c+926,"data", false,-1, 31,0);
    tracep->declBit(c+927,"ren", false,-1);
    tracep->declBus(c+1689,"rdata", false,-1, 31,0);
    tracep->declBus(c+1690,"raddr", false,-1, 31,0);
    tracep->declBus(c+1691,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+503,"clock", false,-1);
    tracep->declBit(c+927,"valid", false,-1);
    tracep->declBus(c+924,"cmd", false,-1, 7,0);
    tracep->declBus(c+1690,"addr", false,-1, 31,0);
    tracep->declBus(c+1689,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1614,"sck", false,-1);
    tracep->declBit(c+1615,"ce_n", false,-1);
    tracep->declBus(c+1641,"dio", false,-1, 3,0);
    tracep->declBit(c+1615,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+966,"cmd", false,-1, 7,0);
    tracep->declBus(c+967,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+968+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1692,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1693,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+972,"ren", false,-1);
    tracep->declBit(c+973,"wen", false,-1);
    tracep->declBus(c+974,"len", false,-1, 7,0);
    tracep->declBus(c+1694,"rdata", false,-1, 31,0);
    tracep->declBus(c+975,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1614,"clock", false,-1);
    tracep->declBit(c+972,"ren", false,-1);
    tracep->declBit(c+973,"wen", false,-1);
    tracep->declBus(c+966,"cmd", false,-1, 7,0);
    tracep->declBus(c+975,"saddr", false,-1, 31,0);
    tracep->declBus(c+1694,"rdata", false,-1, 31,0);
    tracep->declBus(c+976,"wdata", false,-1, 31,0);
    tracep->declBus(c+974,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1642,"clk", false,-1);
    tracep->declBit(c+505,"cke", false,-1);
    tracep->declBit(c+934,"cs", false,-1);
    tracep->declBit(c+935,"ras", false,-1);
    tracep->declBit(c+936,"cas", false,-1);
    tracep->declBit(c+937,"we", false,-1);
    tracep->declBus(c+938,"a", false,-1, 12,0);
    tracep->declBus(c+949,"ba", false,-1, 1,0);
    tracep->declBus(c+950,"dqm", false,-1, 1,0);
    tracep->declBus(c+964,"dq", false,-1, 15,0);
    tracep->declBit(c+951,"reset", false,-1);
    tracep->declBus(c+824,"state", false,-1, 2,0);
    tracep->declBus(c+825,"counter", false,-1, 7,0);
    tracep->declBus(c+826,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1835,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+827,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+828,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+952,"nop", false,-1);
    tracep->declBit(c+953,"active", false,-1);
    tracep->declBit(c+954,"precharge", false,-1);
    tracep->declBit(c+955,"read", false,-1);
    tracep->declBit(c+956,"write", false,-1);
    tracep->declBit(c+957,"burstterm", false,-1);
    tracep->declBit(c+958,"autorefresh", false,-1);
    tracep->declBit(c+959,"mode", false,-1);
    tracep->declBus(c+829,"test", false,-1, 15,0);
    tracep->declBus(c+830,"test1", false,-1, 15,0);
    tracep->declBus(c+831,"sense", false,-1, 31,0);
    tracep->declBit(c+832,"write_burst_mode", false,-1);
    tracep->declBus(c+833,"op_mode", false,-1, 1,0);
    tracep->declBus(c+834,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+835,"burst_type", false,-1);
    tracep->declBus(c+836,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+837,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+838,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+839,"bank", false,-1, 1,0);
    tracep->declBus(c+840,"row", false,-1, 12,0);
    tracep->declBus(c+841,"column", false,-1, 8,0);
    tracep->declBus(c+842,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+843,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+844,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1642,"clk", false,-1);
    tracep->declBit(c+505,"cke", false,-1);
    tracep->declBit(c+934,"cs", false,-1);
    tracep->declBit(c+935,"ras", false,-1);
    tracep->declBit(c+936,"cas", false,-1);
    tracep->declBit(c+937,"we", false,-1);
    tracep->declBus(c+938,"a", false,-1, 12,0);
    tracep->declBus(c+949,"ba", false,-1, 1,0);
    tracep->declBus(c+960,"dqm", false,-1, 1,0);
    tracep->declBus(c+965,"dq", false,-1, 15,0);
    tracep->declBit(c+951,"reset", false,-1);
    tracep->declBus(c+845,"state", false,-1, 2,0);
    tracep->declBus(c+846,"counter", false,-1, 7,0);
    tracep->declBus(c+847,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1836,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+848,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+849,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+952,"nop", false,-1);
    tracep->declBit(c+953,"active", false,-1);
    tracep->declBit(c+954,"precharge", false,-1);
    tracep->declBit(c+955,"read", false,-1);
    tracep->declBit(c+956,"write", false,-1);
    tracep->declBit(c+957,"burstterm", false,-1);
    tracep->declBit(c+958,"autorefresh", false,-1);
    tracep->declBit(c+959,"mode", false,-1);
    tracep->declBus(c+850,"test", false,-1, 15,0);
    tracep->declBus(c+851,"test1", false,-1, 15,0);
    tracep->declBus(c+852,"sense", false,-1, 31,0);
    tracep->declBit(c+853,"write_burst_mode", false,-1);
    tracep->declBus(c+854,"op_mode", false,-1, 1,0);
    tracep->declBus(c+855,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+856,"burst_type", false,-1);
    tracep->declBus(c+857,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+858,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+859,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+860,"bank", false,-1, 1,0);
    tracep->declBus(c+861,"row", false,-1, 12,0);
    tracep->declBus(c+862,"column", false,-1, 8,0);
    tracep->declBus(c+863,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+864,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+865,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1642,"clk", false,-1);
    tracep->declBit(c+505,"cke", false,-1);
    tracep->declBit(c+934,"cs", false,-1);
    tracep->declBit(c+935,"ras", false,-1);
    tracep->declBit(c+936,"cas", false,-1);
    tracep->declBit(c+937,"we", false,-1);
    tracep->declBus(c+938,"a", false,-1, 12,0);
    tracep->declBus(c+949,"ba", false,-1, 1,0);
    tracep->declBus(c+961,"dqm", false,-1, 1,0);
    tracep->declBus(c+964,"dq", false,-1, 15,0);
    tracep->declBit(c+951,"reset", false,-1);
    tracep->declBus(c+866,"state", false,-1, 2,0);
    tracep->declBus(c+867,"counter", false,-1, 7,0);
    tracep->declBus(c+868,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1837,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+869,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+870,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+952,"nop", false,-1);
    tracep->declBit(c+953,"active", false,-1);
    tracep->declBit(c+954,"precharge", false,-1);
    tracep->declBit(c+955,"read", false,-1);
    tracep->declBit(c+956,"write", false,-1);
    tracep->declBit(c+957,"burstterm", false,-1);
    tracep->declBit(c+958,"autorefresh", false,-1);
    tracep->declBit(c+959,"mode", false,-1);
    tracep->declBus(c+871,"test", false,-1, 15,0);
    tracep->declBus(c+872,"test1", false,-1, 15,0);
    tracep->declBus(c+873,"sense", false,-1, 31,0);
    tracep->declBit(c+874,"write_burst_mode", false,-1);
    tracep->declBus(c+875,"op_mode", false,-1, 1,0);
    tracep->declBus(c+876,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+877,"burst_type", false,-1);
    tracep->declBus(c+878,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+879,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+880,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+881,"bank", false,-1, 1,0);
    tracep->declBus(c+882,"row", false,-1, 12,0);
    tracep->declBus(c+883,"column", false,-1, 8,0);
    tracep->declBus(c+884,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+885,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+886,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1642,"clk", false,-1);
    tracep->declBit(c+505,"cke", false,-1);
    tracep->declBit(c+934,"cs", false,-1);
    tracep->declBit(c+935,"ras", false,-1);
    tracep->declBit(c+936,"cas", false,-1);
    tracep->declBit(c+937,"we", false,-1);
    tracep->declBus(c+938,"a", false,-1, 12,0);
    tracep->declBus(c+949,"ba", false,-1, 1,0);
    tracep->declBus(c+962,"dqm", false,-1, 1,0);
    tracep->declBus(c+965,"dq", false,-1, 15,0);
    tracep->declBit(c+951,"reset", false,-1);
    tracep->declBus(c+887,"state", false,-1, 2,0);
    tracep->declBus(c+888,"counter", false,-1, 7,0);
    tracep->declBus(c+889,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1838,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+890,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+891,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+952,"nop", false,-1);
    tracep->declBit(c+953,"active", false,-1);
    tracep->declBit(c+954,"precharge", false,-1);
    tracep->declBit(c+955,"read", false,-1);
    tracep->declBit(c+956,"write", false,-1);
    tracep->declBit(c+957,"burstterm", false,-1);
    tracep->declBit(c+958,"autorefresh", false,-1);
    tracep->declBit(c+959,"mode", false,-1);
    tracep->declBus(c+892,"test", false,-1, 15,0);
    tracep->declBus(c+893,"test1", false,-1, 15,0);
    tracep->declBus(c+894,"sense", false,-1, 31,0);
    tracep->declBit(c+895,"write_burst_mode", false,-1);
    tracep->declBus(c+896,"op_mode", false,-1, 1,0);
    tracep->declBus(c+897,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+898,"burst_type", false,-1);
    tracep->declBus(c+899,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+900,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+901,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+902,"bank", false,-1, 1,0);
    tracep->declBus(c+903,"row", false,-1, 12,0);
    tracep->declBus(c+904,"column", false,-1, 8,0);
    tracep->declBus(c+905,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+906,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+907,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex),7);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex),3);
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wen_ex));
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[0]),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[1]),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[2]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[3]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[4]),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[5]),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[6]),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[7]),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[0]),29);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[1]),29);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[2]),29);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[3]),29);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[4]),29);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[5]),29);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[6]),29);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[7]),29);
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__enable));
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk2__DOT__a),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid_reg));
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+449,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullBit(oldp+450,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))))));
    bufp->fullBit(oldp+451,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullCData(oldp+452,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+453,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+454,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                        >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+455,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+456,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+457,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+458,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))));
    bufp->fullCData(oldp+459,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),4);
    bufp->fullCData(oldp+460,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+461,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+462,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+463,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arlen),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arid),4);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arsize),3);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arburst),2);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_sel_id),4);
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_id),32);
    bufp->fullIData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_id),32);
    bufp->fullIData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_id),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_id),32);
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ls),32);
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ls),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ls),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ls),32);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls),5);
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ls));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state));
    bufp->fullQData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__done_reg));
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__isCHazard_reg));
    bufp->fullCData(oldp+495,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls))),4);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+497,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+498,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+499,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+500,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+501,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+502,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+529,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+531,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+561,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+562,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+565,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+566,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+571,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+575,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+590,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+591,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+593,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+594,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+595,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+596,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+597,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+605,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+640,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+641,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+642,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+643,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+644,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+645,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+646,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+650,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+652,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+653,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+655,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+659,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+660,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+662,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+680,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+681,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+682,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+683,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+684,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+685,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+686,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+689,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+690,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+691,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+710,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+717,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+736,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+737,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+738,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+739,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+740,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+759,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+760,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+761,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+762,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+763,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+765,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+784,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+801,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+812,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+816,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+826,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+827,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+828,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+829,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+830,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+831,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+832,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+833,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+834,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+835,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+836,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+837,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+838,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+840,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+841,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+847,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+849,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+850,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+851,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+852,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+853,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+854,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+855,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+856,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+857,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+858,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+859,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+862,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+868,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+869,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+870,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+871,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+872,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+873,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+874,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+875,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+876,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+877,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+878,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+879,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+880,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+882,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+883,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+889,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+890,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+891,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+892,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+893,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+894,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+895,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+896,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+897,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+898,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+899,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+900,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+901,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+903,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+904,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullBit(oldp+908,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+909,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),5);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex),32);
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+925,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+927,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+934,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+935,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+936,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+937,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+949,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+954,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+963,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+964,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+965,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+967,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+976,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullIData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),5);
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_id));
    bufp->fullIData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_id),32);
    bufp->fullIData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullIData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ls),32);
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ls),32);
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ls),32);
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ls),32);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls),4);
    bufp->fullIData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullIData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),3);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullBit(oldp+1016,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                    >> 2U))));
    bufp->fullBit(oldp+1017,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls))));
    bufp->fullBit(oldp+1018,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                    >> 1U))));
    bufp->fullBit(oldp+1019,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                    >> 3U))));
    bufp->fullIData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ex),32);
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ex),32);
    bufp->fullIData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ex),32);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex),4);
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_read_ex));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_write_ex));
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex),32);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex),32);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wmask_ex),4);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awsize_ex),3);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arsize_ex),3);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awlen_ex),8);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arlen_ex),8);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awburst_ex),2);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arburst_ex),2);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullCData(oldp+1038,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))),4);
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[0U]),32);
    bufp->fullCData(oldp+1040,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0)),8);
    bufp->fullCData(oldp+1041,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))),3);
    bufp->fullCData(oldp+1042,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0))),2);
    bufp->fullCData(oldp+1043,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))),4);
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[0U]),32);
    bufp->fullCData(oldp+1045,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0)),8);
    bufp->fullCData(oldp+1046,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))),3);
    bufp->fullCData(oldp+1047,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0))),2);
    bufp->fullCData(oldp+1048,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))),4);
    bufp->fullBit(oldp+1049,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+1050,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0))));
    bufp->fullBit(oldp+1051,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0))));
    bufp->fullBit(oldp+1052,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0))));
    bufp->fullBit(oldp+1053,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0))));
    bufp->fullBit(oldp+1054,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0))));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1059,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))))),16);
    bufp->fullSData(oldp+1060,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))))),16);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+1066,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullIData(oldp+1079,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en)
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en));
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),7);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id),32);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_id),4);
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_id));
    bufp->fullIData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[2U]),32);
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]),32);
    bufp->fullCData(oldp+1091,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1092,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1093,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1094,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1095,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1096,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1097,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1098,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1099,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1100,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1101,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1102,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1103,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1104,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1105,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 2U))));
    bufp->fullIData(oldp+1106,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                >> 3U)),29);
    bufp->fullBit(oldp+1107,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                    >> 2U))));
    bufp->fullIData(oldp+1108,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                >> 3U)),29);
    bufp->fullBit(oldp+1109,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    >> 2U))));
    bufp->fullIData(oldp+1110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullIData(oldp+1112,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+1114,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_waddr),32);
    bufp->fullIData(oldp+1116,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0)
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
    bufp->fullCData(oldp+1117,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0) 
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
    bufp->fullIData(oldp+1118,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h46116b93__0
                                 : 0U)),32);
    bufp->fullCData(oldp+1119,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                 ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                          ? 1U : 2U))),3);
    bufp->fullCData(oldp+1120,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                 ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                             | (5U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1121,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1122,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [0U][0U]),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [0U][1U]),32);
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [0U][2U]),32);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [0U][3U]),32);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [1U][0U]),32);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [1U][1U]),32);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [1U][2U]),32);
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [1U][3U]),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [2U][0U]),32);
    bufp->fullIData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [2U][1U]),32);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [2U][2U]),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [2U][3U]),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [3U][0U]),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [3U][1U]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [3U][2U]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [3U][3U]),32);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [0U][0U]),27);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [0U][1U]),27);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [0U][2U]),27);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [0U][3U]),27);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [1U][0U]),27);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [1U][1U]),27);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [1U][2U]),27);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [1U][3U]),27);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [2U][0U]),27);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [2U][1U]),27);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [2U][2U]),27);
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [2U][3U]),27);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [3U][0U]),27);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [3U][1U]),27);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [3U][2U]),27);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [3U][3U]),27);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),4);
    bufp->fullCData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),4);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),4);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),4);
    bufp->fullIData(oldp+1160,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1161,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1162,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1163,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1164,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1165,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),2);
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state),2);
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+1173,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),7);
    bufp->fullCData(oldp+1174,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
                                 | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                    | ((0x13U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                       | ((0x73U == 
                                           (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                          | (0x33U 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if))))))
                                 ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 7U))
                                 : 0U)),5);
    bufp->fullCData(oldp+1175,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                      >> 0xcU))),3);
    bufp->fullIData(oldp+1176,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1177,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+1178,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1179,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1180,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7),7);
    bufp->fullCData(oldp+1183,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                         >> 0x14U))),5);
    bufp->fullBit(oldp+1184,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
                              | ((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                 | ((0x73U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                    | ((0x33U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if))))))));
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__alu_sel),4);
    bufp->fullCData(oldp+1186,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h78d0ed1d__0) 
                                 << 3U) | ((((0x73U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                             & ((0x342U 
                                                 == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h2348cf3b__0))) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h4b35dc75__0) 
                                               << 1U) 
                                              | ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                                 & ((0x341U 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h2348cf3b__0))))))),4);
    bufp->fullBit(oldp+1187,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata_reg),32);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5),4);
    bufp->fullCData(oldp+1192,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))),4);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullCData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m),2);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1212,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1213,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[1U]),32);
    bufp->fullIData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[1U]),32);
    bufp->fullCData(oldp+1217,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1218,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1219,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1220,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1221,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1222,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1223,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1224,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1225,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1226,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1227,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1228,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1229,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1230,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1231,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 1U))));
    bufp->fullCData(oldp+1232,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1233,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1234,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))
                                 : 0U)),4);
    bufp->fullBit(oldp+1235,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+1236,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1237,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullIData(oldp+1238,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullBit(oldp+1239,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1240,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullIData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1245,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h8362b754__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1261,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]),32);
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1267,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1269,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1271,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1287,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1288,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1289,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1290,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1291,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1292,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1293,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1302,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1303,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1304,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1305,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1310,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1312,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1313,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[2U]),32);
    bufp->fullIData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__already),4);
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[1U]),32);
    bufp->fullIData(oldp+1327,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1330,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1331,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullIData(oldp+1332,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]
                                 : 0U)),32);
    bufp->fullBit(oldp+1333,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1334,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1335,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1336,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1337,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1338,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1339,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1340,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1341,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1342,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1343,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1344,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1345,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1346,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1347,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1348,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1349,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1350,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1351,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1352,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1353,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1354,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1355,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1356,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1357,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1358,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1359,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1360,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1361,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1362,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1363,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1364,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1365,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1366,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1367,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1368,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1369,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1370,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullBit(oldp+1371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1376,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1381,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1382,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1383,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1385,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1387,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1388,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1390,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1393,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1394,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1395,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1400,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1403,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1408,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1410,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1411,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullSData(oldp+1463,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1464,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1488,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1489,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1511,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1512,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1513,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1514,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1515,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1516,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1517,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1518,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1520,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1521,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1522,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1523,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1524,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1525,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1526,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1527,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1528,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1529,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1530,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1531,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1532,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1533,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1534,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1535,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1537,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1538,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1539,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1540,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1541,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1542,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullIData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata),32);
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullIData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1567,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1572,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1576,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1580,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1581,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1582,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1592,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1593,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1595,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1602,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1603,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1604,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1605,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullCData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isRAW));
    bufp->fullBit(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullBit(oldp+1613,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid))));
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1615,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1618,(vlSelf->clock));
    bufp->fullBit(oldp+1619,(vlSelf->reset));
    bufp->fullSData(oldp+1620,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1621,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1622,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1623,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1624,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1625,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1626,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1627,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1628,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1629,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1630,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1631,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1632,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1633,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1634,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1635,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1636,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1637,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1638,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1639,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1640,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1641,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1642,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1643,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1644,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1645,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1647,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1648,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullCData(oldp+1649,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1650,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1651,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1652,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1653,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1654,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0)))));
    bufp->fullCData(oldp+1655,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullIData(oldp+1656,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1657,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1658,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1660,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullCData(oldp+1661,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullBit(oldp+1662,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullIData(oldp+1663,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex
                                 : 0U)),32);
    bufp->fullCData(oldp+1664,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullCData(oldp+1665,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullBit(oldp+1666,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullCData(oldp+1667,(((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                   >> 3U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg
                                  [(7U & ((IData)(3U) 
                                          + (4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)))]) 
                                 << 3U) | ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                              >> 3U) 
                                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg
                                             [(7U & 
                                               ((IData)(2U) 
                                                + (4U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)))]) 
                                            << 2U) 
                                           | ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                                 >> 3U) 
                                                == 
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg
                                                [(7U 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (4U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)))]) 
                                               << 1U) 
                                              | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                                  >> 3U) 
                                                 == 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg
                                                 [(4U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)]))))),4);
    bufp->fullIData(oldp+1668,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
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
    bufp->fullIData(oldp+1669,(((((- (IData)((0x13U 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)))) 
                                  | (- (IData)((0x33U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res) 
                                | (((- (IData)((0x6fU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)))) 
                                    & ((IData)(4U) 
                                       + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id)) 
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
    bufp->fullBit(oldp+1670,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                              & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullIData(oldp+1671,(((((0x13U == (0x7fU 
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
    bufp->fullIData(oldp+1672,((((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
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
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))
                                                  ? 0U
                                                  : 
                                                 (0x1fU 
                                                  & vlSelf->__VdfgTmp_hdc6860cf__0))
                                                 : 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h23283275__0)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                                  : 0U))))))),32);
    bufp->fullIData(oldp+1673,((((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                 & (0x341U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h4b35dc75__0)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus
                                     : (((0x73U == 
                                          (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                         & (0x342U 
                                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h78d0ed1d__0)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec
                                             : 0U))))),32);
    bufp->fullIData(oldp+1674,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex)),32);
    bufp->fullCData(oldp+1675,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1676,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullBit(oldp+1677,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                   : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))))));
    bufp->fullIData(oldp+1678,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1681,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1682,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1683,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullSData(oldp+1684,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1687,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1688,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1690,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1693,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1695,(1U),3);
    bufp->fullCData(oldp+1696,(0U),2);
    bufp->fullCData(oldp+1697,(1U),2);
    bufp->fullCData(oldp+1698,(2U),2);
    bufp->fullCData(oldp+1699,(3U),2);
    bufp->fullSData(oldp+1700,(0xaU),11);
    bufp->fullBit(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1705,(0U));
    bufp->fullCData(oldp+1706,(0U),3);
    bufp->fullCData(oldp+1707,(2U),3);
    bufp->fullCData(oldp+1708,(3U),3);
    bufp->fullCData(oldp+1709,(4U),3);
    bufp->fullBit(oldp+1710,(1U));
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1712,(0U),4);
    bufp->fullIData(oldp+1713,(0U),32);
    bufp->fullCData(oldp+1714,(0U),8);
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__snpc),32);
    bufp->fullIData(oldp+1726,(0U),32);
    bufp->fullCData(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bid),4);
    bufp->fullCData(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bresp),2);
    bufp->fullBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_awready));
    bufp->fullBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wready));
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bvalid));
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullIData(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awaddr),32);
    bufp->fullIData(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wdata),32);
    bufp->fullCData(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wstrb),4);
    bufp->fullCData(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awlen),8);
    bufp->fullCData(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awid),4);
    bufp->fullCData(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awsize),3);
    bufp->fullCData(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awburst),2);
    bufp->fullBit(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awvalid));
    bufp->fullBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wvalid));
    bufp->fullBit(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_bready));
    bufp->fullBit(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wlast));
    bufp->fullCData(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1749,(3U),32);
    bufp->fullIData(oldp+1750,(2U),32);
    bufp->fullIData(oldp+1751,(0x2000000U),32);
    bufp->fullIData(oldp+1752,(0x2000004U),32);
    bufp->fullBit(oldp+1753,(0U));
    bufp->fullBit(oldp+1754,(1U));
    bufp->fullCData(oldp+1755,(1U),4);
    bufp->fullCData(oldp+1756,(2U),4);
    bufp->fullCData(oldp+1757,(3U),4);
    bufp->fullCData(oldp+1758,(4U),4);
    bufp->fullCData(oldp+1759,(5U),4);
    bufp->fullCData(oldp+1760,(6U),4);
    bufp->fullCData(oldp+1761,(7U),4);
    bufp->fullCData(oldp+1762,(8U),4);
    bufp->fullCData(oldp+1763,(9U),4);
    bufp->fullCData(oldp+1764,(0xaU),4);
    bufp->fullCData(oldp+1765,(0xbU),4);
    bufp->fullCData(oldp+1766,(0xcU),4);
    bufp->fullIData(oldp+1767,(4U),32);
    bufp->fullIData(oldp+1768,(1U),32);
    bufp->fullCData(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit),2);
    bufp->fullIData(oldp+1770,(0x20U),32);
    bufp->fullIData(oldp+1771,(0x1000000U),32);
    bufp->fullIData(oldp+1772,(0x1000004U),32);
    bufp->fullCData(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY));
    bufp->fullBit(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID));
    bufp->fullBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1781,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1782,(0x1800U),32);
    bufp->fullIData(oldp+1783,(0x79737978U),32);
    bufp->fullCData(oldp+1784,(4U),8);
    bufp->fullCData(oldp+1785,(8U),8);
    bufp->fullCData(oldp+1786,(3U),8);
    bufp->fullCData(oldp+1787,(0x9fU),8);
    bufp->fullCData(oldp+1788,(0x25U),8);
    bufp->fullCData(oldp+1789,(0xdU),8);
    bufp->fullCData(oldp+1790,(0x99U),8);
    bufp->fullCData(oldp+1791,(0x49U),8);
    bufp->fullCData(oldp+1792,(0x41U),8);
    bufp->fullCData(oldp+1793,(0x1fU),8);
    bufp->fullCData(oldp+1794,(1U),8);
    bufp->fullCData(oldp+1795,(9U),8);
    bufp->fullCData(oldp+1796,(0x11U),8);
    bufp->fullCData(oldp+1797,(0xc1U),8);
    bufp->fullCData(oldp+1798,(0x63U),8);
    bufp->fullCData(oldp+1799,(0x85U),8);
    bufp->fullCData(oldp+1800,(0x61U),8);
    bufp->fullCData(oldp+1801,(0x71U),8);
    bufp->fullCData(oldp+1802,(0xf0U),8);
    bufp->fullCData(oldp+1803,(0xe0U),8);
    bufp->fullCData(oldp+1804,(0x15U),8);
    bufp->fullCData(oldp+1805,(0xebU),8);
    bufp->fullCData(oldp+1806,(0x38U),8);
    bufp->fullIData(oldp+1807,(0x64U),32);
    bufp->fullIData(oldp+1808,(0x18U),32);
    bufp->fullIData(oldp+1809,(9U),32);
    bufp->fullIData(oldp+1810,(6U),32);
    bufp->fullIData(oldp+1811,(8U),32);
    bufp->fullIData(oldp+1812,(0xdU),32);
    bufp->fullIData(oldp+1813,(0x2000U),32);
    bufp->fullIData(oldp+1814,(0x2710U),32);
    bufp->fullIData(oldp+1815,(0x30cU),32);
    bufp->fullSData(oldp+1816,(0x20U),13);
    bufp->fullIData(oldp+1817,(0xaU),32);
    bufp->fullIData(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1819,(0x11U),32);
    bufp->fullIData(oldp+1820,(0x30000000U),32);
    bufp->fullIData(oldp+1821,(0x3fffffffU),32);
    bufp->fullCData(oldp+1822,(5U),3);
    bufp->fullCData(oldp+1823,(6U),3);
    bufp->fullCData(oldp+1824,(7U),3);
    bufp->fullIData(oldp+1825,(0xbU),32);
    bufp->fullIData(oldp+1826,(0x10U),32);
    bufp->fullIData(oldp+1827,(5U),32);
    bufp->fullIData(oldp+1828,(0x60U),32);
    bufp->fullIData(oldp+1829,(0x90U),32);
    bufp->fullIData(oldp+1830,(0x310U),32);
    bufp->fullIData(oldp+1831,(0x320U),32);
    bufp->fullIData(oldp+1832,(0x23U),32);
    bufp->fullIData(oldp+1833,(0x203U),32);
    bufp->fullIData(oldp+1834,(0x20dU),32);
    bufp->fullSData(oldp+1835,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1836,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1837,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1838,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
