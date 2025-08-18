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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1629,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1630,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1631,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1632,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1633,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1634,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1635,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1636,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1637,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1638,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1639,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1640,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1641,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1642,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1643,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1644,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1645,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1646,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1647,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1648,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1629,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1630,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1631,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1632,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1633,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1634,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1635,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1636,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1637,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1638,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1639,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1640,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1641,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1642,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1643,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1644,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1645,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1646,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1647,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1648,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+499,"spi_sck", false,-1);
    tracep->declBus(c+500,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+942,"spi_mosi", false,-1);
    tracep->declBit(c+1649,"spi_miso", false,-1);
    tracep->declBit(c+1647,"uart_rx", false,-1);
    tracep->declBit(c+1648,"uart_tx", false,-1);
    tracep->declBit(c+1623,"psram_sck", false,-1);
    tracep->declBit(c+1624,"psram_ce_n", false,-1);
    tracep->declBus(c+1650,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1651,"sdram_clk", false,-1);
    tracep->declBit(c+501,"sdram_cke", false,-1);
    tracep->declBit(c+943,"sdram_cs", false,-1);
    tracep->declBit(c+944,"sdram_ras", false,-1);
    tracep->declBit(c+945,"sdram_cas", false,-1);
    tracep->declBit(c+946,"sdram_we", false,-1);
    tracep->declBus(c+947,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+948,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+502,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+972,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1629,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1630,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1631,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1632,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1633,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1634,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1635,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1636,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1637,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1638,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1639,"ps2_clk", false,-1);
    tracep->declBit(c+1640,"ps2_data", false,-1);
    tracep->declBus(c+1641,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1642,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1643,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1644,"vga_hsync", false,-1);
    tracep->declBit(c+1645,"vga_vsync", false,-1);
    tracep->declBit(c+1646,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1245,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1246,"in_psel", false,-1);
    tracep->declBit(c+904,"in_penable", false,-1);
    tracep->declBus(c+1705,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1247,"in_pwrite", false,-1);
    tracep->declBus(c+1248,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1249,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+503,"in_pready", false,-1);
    tracep->declBus(c+504,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+505,"in_pslverr", false,-1);
    tracep->declBus(c+1335,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1385,"out_psel", false,-1);
    tracep->declBit(c+1386,"out_penable", false,-1);
    tracep->declBus(c+1387,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1388,"out_pwrite", false,-1);
    tracep->declBus(c+1389,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1391,"out_pready", false,-1);
    tracep->declBus(c+1652,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1392,"out_pslverr", false,-1);
    tracep->declBus(c+1706,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1707,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1708,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1709,"DELAY", false,-1, 1,0);
    tracep->declBus(c+506,"state", false,-1, 1,0);
    tracep->declBus(c+507,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+508,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+509,"pslverr_reg", false,-1);
    tracep->declBus(c+1710,"r", false,-1, 10,0);
    tracep->declBus(c+1708,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1385,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1386,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1388,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1335,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1387,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1391,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1392,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1652,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1393,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1394,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1388,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1395,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1387,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+510,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1711,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1712,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1396,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1397,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1388,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1336,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1387,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+511,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1713,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+512,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1398,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1399,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1388,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1336,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1387,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+513,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1714,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+514,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1400,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1401,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1388,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1335,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1387,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1653,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1715,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+905,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1402,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1403,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1388,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1336,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1387,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1404,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1715,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1405,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1406,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1407,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1388,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1395,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1387,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1654,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1715,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1408,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1409,"sel_0", false,-1);
    tracep->declBit(c+1410,"sel_1", false,-1);
    tracep->declBit(c+1411,"sel_2", false,-1);
    tracep->declBit(c+1412,"sel_3", false,-1);
    tracep->declBit(c+1413,"sel_4", false,-1);
    tracep->declBit(c+1414,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1250,"auto_in_awready", false,-1);
    tracep->declBit(c+1251,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1252,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1253,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1254,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1250,"auto_in_wready", false,-1);
    tracep->declBit(c+1255,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1256,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1415,"auto_in_bready", false,-1);
    tracep->declBit(c+1416,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1655,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1258,"auto_in_arready", false,-1);
    tracep->declBit(c+1259,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1260,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1261,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1262,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1417,"auto_in_rready", false,-1);
    tracep->declBit(c+1418,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1656,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1655,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1246,"auto_out_psel", false,-1);
    tracep->declBit(c+904,"auto_out_penable", false,-1);
    tracep->declBit(c+1247,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1245,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1248,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1249,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+503,"auto_out_pready", false,-1);
    tracep->declBit(c+505,"auto_out_pslverr", false,-1);
    tracep->declBus(c+504,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+904,"nodeOut_penable", false,-1);
    tracep->declBus(c+906,"state", false,-1, 1,0);
    tracep->declBit(c+1258,"accept_read", false,-1);
    tracep->declBit(c+1250,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1247,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+515,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1655,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1418,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1416,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1419,"in_arready", false,-1);
    tracep->declBit(c+1263,"in_arvalid", false,-1);
    tracep->declBus(c+1101,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1102,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1103,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1104,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1105,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1420,"in_rready", false,-1);
    tracep->declBit(c+516,"in_rvalid", false,-1);
    tracep->declBus(c+517,"in_rid", false,-1, 3,0);
    tracep->declBus(c+518,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+519,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+520,"in_rlast", false,-1);
    tracep->declBit(c+1421,"in_awready", false,-1);
    tracep->declBit(c+1264,"in_awvalid", false,-1);
    tracep->declBus(c+1106,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1107,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1108,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1109,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1110,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1422,"in_wready", false,-1);
    tracep->declBit(c+1265,"in_wvalid", false,-1);
    tracep->declBus(c+1266,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1111,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"in_wlast", false,-1);
    tracep->declBit(c+1423,"in_bready", false,-1);
    tracep->declBit(c+521,"in_bvalid", false,-1);
    tracep->declBus(c+522,"in_bid", false,-1, 3,0);
    tracep->declBus(c+523,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1424,"out_arready", false,-1);
    tracep->declBit(c+1425,"out_arvalid", false,-1);
    tracep->declBus(c+1426,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1427,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1428,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1238,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1429,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1430,"out_rready", false,-1);
    tracep->declBit(c+524,"out_rvalid", false,-1);
    tracep->declBus(c+525,"out_rid", false,-1, 3,0);
    tracep->declBus(c+526,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1706,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+527,"out_rlast", false,-1);
    tracep->declBit(c+1431,"out_awready", false,-1);
    tracep->declBit(c+1432,"out_awvalid", false,-1);
    tracep->declBus(c+1433,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1434,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1435,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1239,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1436,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1437,"out_wready", false,-1);
    tracep->declBit(c+1438,"out_wvalid", false,-1);
    tracep->declBus(c+1337,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1240,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1241,"out_wlast", false,-1);
    tracep->declBit(c+1657,"out_bready", false,-1);
    tracep->declBit(c+528,"out_bvalid", false,-1);
    tracep->declBus(c+525,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1706,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1716,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1705,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1717,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1718,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1719,"DELAY", false,-1, 2,0);
    tracep->declBus(c+529,"rstate", false,-1, 2,0);
    tracep->declBus(c+530,"wstate", false,-1, 2,0);
    tracep->declBus(c+531,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+532,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+533,"rvalid_reg", false,-1);
    tracep->declBus(c+534,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+535,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+539,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+540,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+541,"bvalid_reg", false,-1);
    tracep->declBus(c+542,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+543,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1710,"r", false,-1, 10,0);
    tracep->declBus(c+1708,"s", false,-1, 1,0);
    tracep->declBus(c+544,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+1267,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1106,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1107,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1108,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1109,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+1268,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"auto_in_wlast", false,-1);
    tracep->declBit(c+464,"auto_in_bready", false,-1);
    tracep->declBit(c+1439,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1440,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1658,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+1269,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1101,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1102,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1103,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1104,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1441,"auto_in_rready", false,-1);
    tracep->declBit(c+1442,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1443,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1659,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1661,"auto_in_rlast", false,-1);
    tracep->declBit(c+1444,"auto_out_awready", false,-1);
    tracep->declBit(c+1270,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1252,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1253,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1254,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1271,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1445,"auto_out_wready", false,-1);
    tracep->declBit(c+1272,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1256,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1273,"auto_out_wlast", false,-1);
    tracep->declBit(c+1446,"auto_out_bready", false,-1);
    tracep->declBit(c+1447,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1440,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1448,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1449,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1450,"auto_out_arready", false,-1);
    tracep->declBit(c+1274,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1260,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1261,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1262,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1275,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1441,"auto_out_rready", false,-1);
    tracep->declBit(c+1442,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1443,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1659,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1662,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1451,"auto_out_rlast", false,-1);
    tracep->declBit(c+1272,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1452,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1276,"len", false,-1, 7,0);
    tracep->declBus(c+1277,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1278,"len_1", false,-1, 7,0);
    tracep->declBus(c+1279,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1270,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1280,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1281,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1273,"w_last", false,-1);
    tracep->declBit(c+1446,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+1269,"io_enq_valid", false,-1);
    tracep->declBus(c+1101,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1102,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1103,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1104,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1105,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1453,"io_deq_ready", false,-1);
    tracep->declBit(c+1274,"io_deq_valid", false,-1);
    tracep->declBus(c+1260,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1282,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1283,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1262,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1284,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1274,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1454,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1267,"io_enq_valid", false,-1);
    tracep->declBus(c+1106,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1107,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1108,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1109,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1110,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1455,"io_deq_ready", false,-1);
    tracep->declBit(c+1285,"io_deq_valid", false,-1);
    tracep->declBus(c+1252,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1286,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1287,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1254,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1288,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1285,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1456,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1268,"io_enq_valid", false,-1);
    tracep->declBus(c+1266,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1111,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1112,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1457,"io_deq_ready", false,-1);
    tracep->declBit(c+1289,"io_deq_valid", false,-1);
    tracep->declBus(c+1256,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1257,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1663,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1289,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1458,"do_enq", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1459,"auto_in_awready", false,-1);
    tracep->declBit(c+1290,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1252,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1291,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1338,"auto_in_wready", false,-1);
    tracep->declBit(c+1292,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1256,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1460,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1461,"auto_in_arready", false,-1);
    tracep->declBit(c+1293,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1260,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1294,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1462,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1461,"nodeIn_arready", false,-1);
    tracep->declBit(c+1459,"nodeIn_awready", false,-1);
    tracep->declBit(c+1295,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1463,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1296,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1463,"R0_en", false,-1);
    tracep->declBit(c+1627,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1297,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1464,"W0_en", false,-1);
    tracep->declBit(c+1627,"W0_clk", false,-1);
    tracep->declBus(c+1256,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1257,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1465,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1113,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1106,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1107,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1108,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1109,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1339,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1114,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1115,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1466,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1467,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1664,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1468,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1116,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1101,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1102,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1103,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1104,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1117,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1469,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1470,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1665,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1471,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1421,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1264,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1106,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1107,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1108,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1109,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1422,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1265,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1423,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+521,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+522,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+523,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1419,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1263,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1101,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1102,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1103,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1104,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1420,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+516,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+517,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+518,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+519,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+520,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1267,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1106,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1107,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1108,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1109,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1268,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+464,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1439,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1440,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1658,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1269,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1101,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1102,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1103,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1104,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1441,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1442,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1443,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1659,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1661,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1466,"in_0_bvalid", false,-1);
    tracep->declBit(c+1469,"in_0_rvalid", false,-1);
    tracep->declBit(c+1472,"in_0_wready", false,-1);
    tracep->declBit(c+1473,"in_0_awready", false,-1);
    tracep->declBit(c+465,"in_0_arready", false,-1);
    tracep->declBit(c+1465,"anonIn_awready", false,-1);
    tracep->declBit(c+1468,"anonIn_arready", false,-1);
    tracep->declBit(c+1118,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1119,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1120,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1121,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1122,"arSel", false,-1, 15,0);
    tracep->declBus(c+1123,"awSel", false,-1, 15,0);
    tracep->declBus(c+1474,"rSel", false,-1, 15,0);
    tracep->declBus(c+1475,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1298,"in_0_arvalid", false,-1);
    tracep->declBit(c+138,"latched", false,-1);
    tracep->declBit(c+1299,"in_0_awvalid", false,-1);
    tracep->declBit(c+1300,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1301,"in_0_wvalid", false,-1);
    tracep->declBit(c+139,"idle_2", false,-1);
    tracep->declBit(c+1476,"anyValid", false,-1);
    tracep->declBus(c+1477,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1478,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1479,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1480,"prefixOR_1", false,-1);
    tracep->declBit(c+1481,"winner_2_1", false,-1);
    tracep->declBit(c+141,"state_2_0", false,-1);
    tracep->declBit(c+142,"state_2_1", false,-1);
    tracep->declBit(c+1482,"muxState_2_0", false,-1);
    tracep->declBit(c+1483,"muxState_2_1", false,-1);
    tracep->declBit(c+143,"idle_3", false,-1);
    tracep->declBit(c+1484,"anyValid_1", false,-1);
    tracep->declBus(c+1485,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+144,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1486,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1487,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1488,"winner_3_0", false,-1);
    tracep->declBit(c+1489,"winner_3_1", false,-1);
    tracep->declBit(c+145,"state_3_0", false,-1);
    tracep->declBit(c+146,"state_3_1", false,-1);
    tracep->declBit(c+1490,"muxState_3_0", false,-1);
    tracep->declBit(c+1491,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1300,"io_enq_valid", false,-1);
    tracep->declBus(c+1124,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1492,"io_deq_ready", false,-1);
    tracep->declBit(c+1302,"io_deq_valid", false,-1);
    tracep->declBus(c+1303,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+148,"wrap", false,-1);
    tracep->declBit(c+149,"wrap_1", false,-1);
    tracep->declBit(c+150,"maybe_full", false,-1);
    tracep->declBit(c+151,"ptr_match", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+1302,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1493,"do_deq", false,-1);
    tracep->declBit(c+1494,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+149,"R0_addr", false,-1);
    tracep->declBit(c+1720,"R0_en", false,-1);
    tracep->declBit(c+1627,"R0_clk", false,-1);
    tracep->declBus(c+154,"R0_data", false,-1, 1,0);
    tracep->declBit(c+148,"W0_addr", false,-1);
    tracep->declBit(c+1494,"W0_en", false,-1);
    tracep->declBit(c+1627,"W0_clk", false,-1);
    tracep->declBus(c+1124,"W0_data", false,-1, 1,0);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1495,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1304,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1252,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1253,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1254,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1445,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1272,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1256,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1273,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1446,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1447,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1440,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1448,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1496,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1305,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1260,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1261,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1262,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1441,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1442,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1443,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1659,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1451,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1459,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1290,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1252,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1291,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1338,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1292,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1256,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1460,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1461,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1293,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1260,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1294,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1462,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1306,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1307,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+157,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1308,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1260,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1309,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1667,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+158,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+159,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1250,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1251,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1252,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1253,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1254,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1250,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1255,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1256,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1415,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1416,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1655,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1258,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1259,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1260,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1261,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1262,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1417,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1418,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1656,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1655,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1447,"in_0_bvalid", false,-1);
    tracep->declBit(c+1442,"in_0_rvalid", false,-1);
    tracep->declBit(c+1497,"in_0_wready", false,-1);
    tracep->declBit(c+1498,"in_0_awready", false,-1);
    tracep->declBit(c+1496,"in_0_arready", false,-1);
    tracep->declBit(c+1495,"anonIn_awready", false,-1);
    tracep->declBit(c+1310,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1311,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1312,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1313,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1314,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1315,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1316,"arSel", false,-1, 15,0);
    tracep->declBus(c+1317,"awSel", false,-1, 15,0);
    tracep->declBus(c+1499,"rSel", false,-1, 15,0);
    tracep->declBus(c+1500,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1318,"in_0_awvalid", false,-1);
    tracep->declBit(c+1319,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1320,"in_0_wvalid", false,-1);
    tracep->declBit(c+194,"idle_3", false,-1);
    tracep->declBit(c+1501,"anyValid", false,-1);
    tracep->declBus(c+1502,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+195,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1503,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1504,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1505,"prefixOR_1", false,-1);
    tracep->declBit(c+1506,"winner_3_1", false,-1);
    tracep->declBit(c+1507,"winner_3_2", false,-1);
    tracep->declBit(c+196,"state_3_0", false,-1);
    tracep->declBit(c+197,"state_3_1", false,-1);
    tracep->declBit(c+198,"state_3_2", false,-1);
    tracep->declBit(c+1508,"muxState_3_0", false,-1);
    tracep->declBit(c+1509,"muxState_3_1", false,-1);
    tracep->declBit(c+1510,"muxState_3_2", false,-1);
    tracep->declBit(c+199,"idle_4", false,-1);
    tracep->declBit(c+1511,"anyValid_1", false,-1);
    tracep->declBus(c+1512,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1513,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1514,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1515,"winner_4_0", false,-1);
    tracep->declBit(c+1516,"winner_4_2", false,-1);
    tracep->declBit(c+201,"state_4_0", false,-1);
    tracep->declBit(c+202,"state_4_2", false,-1);
    tracep->declBit(c+1517,"muxState_4_0", false,-1);
    tracep->declBit(c+1518,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1319,"io_enq_valid", false,-1);
    tracep->declBus(c+1321,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1519,"io_deq_ready", false,-1);
    tracep->declBit(c+1322,"io_deq_valid", false,-1);
    tracep->declBus(c+1323,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1322,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1520,"do_deq", false,-1);
    tracep->declBit(c+1521,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1720,"R0_en", false,-1);
    tracep->declBit(c+1627,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1521,"W0_en", false,-1);
    tracep->declBit(c+1627,"W0_clk", false,-1);
    tracep->declBus(c+1321,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1444,"auto_in_awready", false,-1);
    tracep->declBit(c+1270,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1252,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1253,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1254,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1271,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1445,"auto_in_wready", false,-1);
    tracep->declBit(c+1272,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1256,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1273,"auto_in_wlast", false,-1);
    tracep->declBit(c+1446,"auto_in_bready", false,-1);
    tracep->declBit(c+1447,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1440,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1448,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1449,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1450,"auto_in_arready", false,-1);
    tracep->declBit(c+1274,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1260,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1261,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1262,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1275,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1441,"auto_in_rready", false,-1);
    tracep->declBit(c+1442,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1443,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1659,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1662,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1451,"auto_in_rlast", false,-1);
    tracep->declBit(c+1495,"auto_out_awready", false,-1);
    tracep->declBit(c+1304,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1252,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1253,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1254,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1445,"auto_out_wready", false,-1);
    tracep->declBit(c+1272,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1256,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1273,"auto_out_wlast", false,-1);
    tracep->declBit(c+1446,"auto_out_bready", false,-1);
    tracep->declBit(c+1447,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1440,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1448,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1496,"auto_out_arready", false,-1);
    tracep->declBit(c+1305,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1260,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1261,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1262,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1441,"auto_out_rready", false,-1);
    tracep->declBit(c+1442,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1443,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1659,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1451,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1340,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1522,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1341,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1523,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1342,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1524,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1343,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1525,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1344,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1526,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1345,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1527,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1346,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1528,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1347,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1529,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1348,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1530,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1349,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1531,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1350,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1532,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1351,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1533,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+1352,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1534,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1353,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1535,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1354,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1536,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1355,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1537,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1356,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1538,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1357,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1539,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1358,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1540,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1359,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1541,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1360,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1542,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1361,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1543,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1362,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1544,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1363,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1545,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1364,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1546,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1365,"io_enq_valid", false,-1);
    tracep->declBit(c+1271,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1547,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1366,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1548,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1367,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1549,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1368,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1550,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1369,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1551,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1370,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1552,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1371,"io_enq_valid", false,-1);
    tracep->declBit(c+1275,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1553,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1668,"reset", false,-1);
    tracep->declBit(c+1465,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1113,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1106,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1107,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1108,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1109,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1110,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1339,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1114,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1115,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1466,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1467,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1664,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1468,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1116,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1101,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1102,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1103,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1104,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1105,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1117,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1469,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1470,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1665,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1471,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1668,"reset", false,-1);
    tracep->declBit(c+1715,"io_interrupt", false,-1);
    tracep->declBit(c+1465,"io_master_awready", false,-1);
    tracep->declBit(c+1113,"io_master_awvalid", false,-1);
    tracep->declBus(c+1106,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1107,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1108,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1109,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1110,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1339,"io_master_wready", false,-1);
    tracep->declBit(c+1114,"io_master_wvalid", false,-1);
    tracep->declBus(c+1266,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1111,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"io_master_wlast", false,-1);
    tracep->declBit(c+1115,"io_master_bready", false,-1);
    tracep->declBit(c+1466,"io_master_bvalid", false,-1);
    tracep->declBus(c+1467,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1664,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1468,"io_master_arready", false,-1);
    tracep->declBit(c+1116,"io_master_arvalid", false,-1);
    tracep->declBus(c+1101,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1102,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1103,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1104,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1105,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1117,"io_master_rready", false,-1);
    tracep->declBit(c+1469,"io_master_rvalid", false,-1);
    tracep->declBus(c+1470,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1665,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1666,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1471,"io_master_rlast", false,-1);
    tracep->declBit(c+1721,"io_slave_awready", false,-1);
    tracep->declBit(c+1715,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1722,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1723,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1724,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1716,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1706,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1725,"io_slave_wready", false,-1);
    tracep->declBit(c+1715,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1723,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1722,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1715,"io_slave_wlast", false,-1);
    tracep->declBit(c+1715,"io_slave_bready", false,-1);
    tracep->declBit(c+1726,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1727,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1728,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1729,"io_slave_arready", false,-1);
    tracep->declBit(c+1715,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1722,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1723,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1724,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1716,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1706,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1715,"io_slave_rready", false,-1);
    tracep->declBit(c+1730,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1731,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1732,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1733,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1734,"io_slave_rlast", false,-1);
    tracep->declBus(c+1616,"pc", false,-1, 31,0);
    tracep->declBit(c+1720,"pc_valid", false,-1);
    tracep->declBus(c+1669,"snpc", false,-1, 31,0);
    tracep->declBus(c+1018,"inst_if", false,-1, 31,0);
    tracep->declBus(c+1019,"pc_if", false,-1, 31,0);
    tracep->declBit(c+1020,"if_valid", false,-1);
    tracep->declBit(c+1376,"if_ready", false,-1);
    tracep->declBus(c+1735,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1735,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1377,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1125,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1722,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1724,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+341,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1736,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+342,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1737,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1716,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+343,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1706,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+344,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1738,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+478,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1715,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1739,"if_axi_awready", false,-1);
    tracep->declBit(c+1715,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1740,"if_axi_wready", false,-1);
    tracep->declBit(c+1741,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1715,"if_axi_bready", false,-1);
    tracep->declBit(c+1378,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1126,"if_axi_arready", false,-1);
    tracep->declBit(c+1127,"if_axi_rvalid", false,-1);
    tracep->declBit(c+1021,"if_axi_rready", false,-1);
    tracep->declBit(c+1742,"if_axi_wlast", false,-1);
    tracep->declBit(c+1743,"if_axi_rlast", false,-1);
    tracep->declBus(c+1744,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1745,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1128,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1554,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1746,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1747,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1129,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1748,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+466,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1749,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+467,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1750,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1130,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1751,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1131,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1670,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1671,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1752,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+468,"icache_axi_awready", false,-1);
    tracep->declBit(c+1753,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1672,"icache_axi_wready", false,-1);
    tracep->declBit(c+469,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1754,"icache_axi_bready", false,-1);
    tracep->declBit(c+1132,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1242,"icache_axi_arready", false,-1);
    tracep->declBit(c+1243,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+1133,"icache_axi_rready", false,-1);
    tracep->declBit(c+1755,"icache_axi_wlast", false,-1);
    tracep->declBit(c+1555,"icache_axi_rlast", false,-1);
    tracep->declBus(c+907,"inst_id", false,-1, 31,0);
    tracep->declBit(c+1324,"id_valid", false,-1);
    tracep->declBit(c+1325,"id_ready", false,-1);
    tracep->declBus(c+1022,"prepc", false,-1, 31,0);
    tracep->declBit(c+1023,"prepc_en", false,-1);
    tracep->declBus(c+1024,"rs1", false,-1, 4,0);
    tracep->declBus(c+1025,"rs2", false,-1, 4,0);
    tracep->declBus(c+1026,"pc_id", false,-1, 31,0);
    tracep->declBus(c+908,"imm_id", false,-1, 31,0);
    tracep->declBus(c+1027,"op_id", false,-1, 6,0);
    tracep->declBus(c+1028,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+909,"rd_id", false,-1, 4,0);
    tracep->declBit(c+910,"gpr_wen_id", false,-1);
    tracep->declBus(c+911,"alu_sel_id", false,-1, 3,0);
    tracep->declBus(c+912,"a_id", false,-1, 31,0);
    tracep->declBus(c+913,"b_id", false,-1, 31,0);
    tracep->declBus(c+345,"r1_id", false,-1, 31,0);
    tracep->declBus(c+1029,"r2_id", false,-1, 31,0);
    tracep->declBus(c+914,"csr_id", false,-1, 31,0);
    tracep->declBus(c+346,"mepc_id", false,-1, 31,0);
    tracep->declBus(c+347,"mtvec_id", false,-1, 31,0);
    tracep->declBit(c+1030,"mepc_wen_id", false,-1);
    tracep->declBit(c+1031,"mstatus_wen_id", false,-1);
    tracep->declBit(c+1032,"mcause_wen_id", false,-1);
    tracep->declBit(c+1033,"mtvec_wen_id", false,-1);
    tracep->declBit(c+1379,"fencei_id", false,-1);
    tracep->declBus(c+915,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+916,"inst_ex", false,-1, 31,0);
    tracep->declBit(c+1034,"ex_ready", false,-1);
    tracep->declBit(c+1326,"ex_valid", false,-1);
    tracep->declBus(c+348,"op_ex", false,-1, 6,0);
    tracep->declBus(c+349,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+917,"rd_ex", false,-1, 4,0);
    tracep->declBit(c+918,"gpr_wen_ex", false,-1);
    tracep->declBus(c+1035,"mepc_ex", false,-1, 31,0);
    tracep->declBus(c+1036,"mstatus_ex", false,-1, 31,0);
    tracep->declBus(c+1037,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+1038,"mtvec_ex", false,-1, 31,0);
    tracep->declBit(c+1039,"mepc_wen_ex", false,-1);
    tracep->declBit(c+1040,"mstatus_wen_ex", false,-1);
    tracep->declBit(c+1041,"mcause_wen_ex", false,-1);
    tracep->declBit(c+1042,"mtvec_wen_ex", false,-1);
    tracep->declBus(c+919,"ex_ex", false,-1, 31,0);
    tracep->declBit(c+1043,"ls_valid_ex", false,-1);
    tracep->declBit(c+350,"ls_wen_ex", false,-1);
    tracep->declBit(c+1044,"ls_read_ex", false,-1);
    tracep->declBit(c+1045,"ls_write_ex", false,-1);
    tracep->declBus(c+1046,"ls_waddr_ex", false,-1, 31,0);
    tracep->declBus(c+351,"ls_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+1047,"ls_raddr_ex", false,-1, 31,0);
    tracep->declBus(c+1048,"ls_wmask_ex", false,-1, 3,0);
    tracep->declBus(c+1049,"ls_awsize_ex", false,-1, 2,0);
    tracep->declBus(c+1050,"ls_arsize_ex", false,-1, 2,0);
    tracep->declBus(c+1051,"ls_awlen_ex", false,-1, 7,0);
    tracep->declBus(c+1052,"ls_arlen_ex", false,-1, 7,0);
    tracep->declBus(c+1053,"ls_awburst_ex", false,-1, 1,0);
    tracep->declBus(c+1054,"ls_arburst_ex", false,-1, 1,0);
    tracep->declBus(c+920,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+479,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+480,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+481,"dnpc_ls", false,-1, 31,0);
    tracep->declBit(c+1134,"ls_ready", false,-1);
    tracep->declBit(c+1135,"ls_valid", false,-1);
    tracep->declBit(c+1136,"difftest", false,-1);
    tracep->declBus(c+482,"xrd_ls", false,-1, 31,0);
    tracep->declBus(c+483,"rd_ls", false,-1, 4,0);
    tracep->declBit(c+484,"gpr_wen_ls", false,-1);
    tracep->declBus(c+986,"mepc_ls", false,-1, 31,0);
    tracep->declBus(c+987,"mstatus_ls", false,-1, 31,0);
    tracep->declBus(c+988,"mcause_ls", false,-1, 31,0);
    tracep->declBus(c+989,"mtvec_ls", false,-1, 31,0);
    tracep->declBit(c+990,"mepc_wen_ls", false,-1);
    tracep->declBit(c+991,"mstatus_wen_ls", false,-1);
    tracep->declBit(c+992,"mcause_wen_ls", false,-1);
    tracep->declBit(c+993,"mtvec_wen_ls", false,-1);
    tracep->declBus(c+994,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1673,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+995,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1244,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+996,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+997,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+998,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1756,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+470,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1757,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+471,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+999,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1000,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1001,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1002,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1674,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1675,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1003,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1556,"ls_axi_awready", false,-1);
    tracep->declBit(c+1004,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1676,"ls_axi_wready", false,-1);
    tracep->declBit(c+1557,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+1005,"ls_axi_bready", false,-1);
    tracep->declBit(c+1006,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1558,"ls_axi_arready", false,-1);
    tracep->declBit(c+1559,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+1007,"ls_axi_rready", false,-1);
    tracep->declBit(c+1008,"ls_axi_wlast", false,-1);
    tracep->declBit(c+472,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1137,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1327,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1138,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+352,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1139,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1140,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1141,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1142,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+353,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1143,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+354,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1144,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1145,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1146,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1147,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+355,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+356,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1148,"c_axi_awvalid", false,-1);
    tracep->declBit(c+357,"c_axi_awready", false,-1);
    tracep->declBit(c+1149,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1055,"c_axi_wready", false,-1);
    tracep->declBit(c+358,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1150,"c_axi_bready", false,-1);
    tracep->declBit(c+1151,"c_axi_arvalid", false,-1);
    tracep->declBit(c+921,"c_axi_arready", false,-1);
    tracep->declBit(c+922,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1152,"c_axi_rready", false,-1);
    tracep->declBit(c+1153,"c_axi_wlast", false,-1);
    tracep->declBit(c+359,"c_axi_rlast", false,-1);
    tracep->declBus(c+1056,"r1", false,-1, 31,0);
    tracep->declBus(c+1057,"r2", false,-1, 31,0);
    tracep->declBus(c+923,"mepc", false,-1, 31,0);
    tracep->declBus(c+924,"mstatus", false,-1, 31,0);
    tracep->declBus(c+925,"mcause", false,-1, 31,0);
    tracep->declBus(c+926,"mtvec", false,-1, 31,0);
    tracep->declBus(c+360,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+361,"marchid", false,-1, 31,0);
    tracep->declBit(c+1328,"isRAW", false,-1);
    tracep->declBit(c+1619,"isCHazard", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1758,"n", false,-1, 31,0);
    tracep->declBus(c+1759,"w", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBus(c+1616,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1669,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+1022,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1019,"dnpc_tag_i", false,-1, 31,0);
    tracep->declBit(c+1023,"dnpc_en_i", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+362+i*1,"snpc_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+370+i*1,"tag_reg", true,(i+0), 28,0);
    }
    tracep->declBus(c+1617,"tag", false,-1, 28,0);
    tracep->declBus(c+1618,"index", false,-1, 0,0);
    tracep->declBus(c+1058,"dnpc_tag", false,-1, 28,0);
    tracep->declBus(c+1059,"dnpc_index", false,-1, 0,0);
    tracep->declBus(c+1620,"hit", false,-1, 3,0);
    tracep->declBus(c+1060,"already", false,-1, 3,0);
    tracep->declBit(c+378,"enable", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+379,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+380,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBit(c+357,"c_axi_awready", false,-1);
    tracep->declBit(c+1148,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1142,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1140,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1144,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1055,"c_axi_wready", false,-1);
    tracep->declBit(c+1149,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1327,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1139,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1153,"c_axi_wlast", false,-1);
    tracep->declBit(c+1150,"c_axi_bready", false,-1);
    tracep->declBit(c+358,"c_axi_bvalid", false,-1);
    tracep->declBus(c+353,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+355,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+921,"c_axi_arready", false,-1);
    tracep->declBit(c+1151,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1143,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1141,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1145,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1147,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1152,"c_axi_rready", false,-1);
    tracep->declBit(c+922,"c_axi_rvalid", false,-1);
    tracep->declBus(c+354,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+352,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+356,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+359,"c_axi_rlast", false,-1);
    tracep->declBit(c+357,"axi_awready", false,-1);
    tracep->declBit(c+1055,"axi_wready", false,-1);
    tracep->declBit(c+358,"axi_bvalid", false,-1);
    tracep->declBit(c+921,"axi_arready", false,-1);
    tracep->declBit(c+922,"axi_rvalid", false,-1);
    tracep->declBit(c+359,"axi_rlast", false,-1);
    tracep->declBus(c+355,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+356,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+353,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+354,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+352,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+381,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1760,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1761,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+382,"mtime", false,-1, 63,0);
    tracep->declBus(c+1677,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBit(c+1619,"isCHazard", false,-1);
    tracep->declBus(c+907,"inst_i", false,-1, 31,0);
    tracep->declBus(c+915,"pc_o", false,-1, 31,0);
    tracep->declBus(c+916,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1324,"id_valid_i", false,-1);
    tracep->declBit(c+1034,"ex_ready_o", false,-1);
    tracep->declBit(c+1326,"ex_valid_o", false,-1);
    tracep->declBit(c+1134,"ls_ready_i", false,-1);
    tracep->declBus(c+1026,"pc_i", false,-1, 31,0);
    tracep->declBus(c+908,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1027,"op_i", false,-1, 6,0);
    tracep->declBus(c+1028,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+909,"rd_i", false,-1, 4,0);
    tracep->declBit(c+910,"gpr_wen_i", false,-1);
    tracep->declBus(c+911,"alu_sel_i", false,-1, 3,0);
    tracep->declBus(c+912,"a_i", false,-1, 31,0);
    tracep->declBus(c+913,"b_i", false,-1, 31,0);
    tracep->declBus(c+345,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1029,"r2_i", false,-1, 31,0);
    tracep->declBus(c+914,"csr_i", false,-1, 31,0);
    tracep->declBus(c+346,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+347,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1030,"mepc_wen_i", false,-1);
    tracep->declBit(c+1031,"mstatus_wen_i", false,-1);
    tracep->declBit(c+1032,"mcause_wen_i", false,-1);
    tracep->declBit(c+1033,"mtvec_wen_i", false,-1);
    tracep->declBus(c+348,"op_o", false,-1, 6,0);
    tracep->declBus(c+349,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+917,"rd_o", false,-1, 4,0);
    tracep->declBit(c+918,"gpr_wen_o", false,-1);
    tracep->declBus(c+1035,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+1036,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+1037,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1038,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+1039,"mepc_wen_o", false,-1);
    tracep->declBit(c+1040,"mstatus_wen_o", false,-1);
    tracep->declBit(c+1041,"mcause_wen_o", false,-1);
    tracep->declBit(c+1042,"mtvec_wen_o", false,-1);
    tracep->declBus(c+919,"ex_o", false,-1, 31,0);
    tracep->declBit(c+1043,"ls_valid_o", false,-1);
    tracep->declBit(c+350,"ls_wen_o", false,-1);
    tracep->declBit(c+1044,"ls_read_o", false,-1);
    tracep->declBit(c+1045,"ls_write_o", false,-1);
    tracep->declBus(c+1046,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+351,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1047,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+1048,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+1049,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1050,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1051,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1052,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1053,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1054,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+920,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+384,"ex_valid_reg", false,-1);
    tracep->declBus(c+1762,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1763,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1061,"state", false,-1);
    tracep->declBus(c+1678,"al_res", false,-1, 31,0);
    tracep->declBit(c+1679,"al_done", false,-1);
    tracep->declBus(c+1680,"ex", false,-1, 31,0);
    tracep->declBus(c+1062,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+1063,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+1064,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1063,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+1063,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+1065,"ls_valid", false,-1);
    tracep->declBit(c+1066,"ls_wen", false,-1);
    tracep->declBus(c+1067,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+1068,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+1069,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1070,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+1071,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1072,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1724,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1724,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1707,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1707,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+908,"offset", false,-1, 31,0);
    tracep->declBit(c+1073,"jalen", false,-1);
    tracep->declBit(c+1074,"jalren", false,-1);
    tracep->declBit(c+458,"beqen", false,-1);
    tracep->declBit(c+459,"bneen", false,-1);
    tracep->declBit(c+460,"blten", false,-1);
    tracep->declBit(c+461,"bgeen", false,-1);
    tracep->declBit(c+462,"bltuen", false,-1);
    tracep->declBit(c+463,"bgeuen", false,-1);
    tracep->declBit(c+1075,"ecall_en", false,-1);
    tracep->declBit(c+1681,"mret_en", false,-1);
    tracep->declBus(c+1076,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBus(c+912,"a", false,-1, 31,0);
    tracep->declBus(c+913,"b", false,-1, 31,0);
    tracep->declBus(c+911,"opcode", false,-1, 3,0);
    tracep->declBus(c+1678,"res", false,-1, 31,0);
    tracep->declBit(c+1679,"done", false,-1);
    tracep->declBus(c+1722,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1764,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1765,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1766,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1767,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1768,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1769,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1770,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1771,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1772,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1773,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1774,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1775,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1762,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1763,"EXECUTE", false,-1, 0,0);
    tracep->declBit(c+485,"state", false,-1);
    tracep->declQuad(c+486,"mul_result", false,-1, 63,0);
    tracep->declBus(c+488,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+489,"dividend", false,-1, 31,0);
    tracep->declBus(c+490,"divisor", false,-1, 31,0);
    tracep->declBus(c+491,"quotient", false,-1, 31,0);
    tracep->declBus(c+492,"remainder", false,-1, 31,0);
    tracep->declBus(c+493,"div_counter", false,-1, 5,0);
    tracep->declBit(c+494,"done_reg", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1759,"n", false,-1, 31,0);
    tracep->declBus(c+1776,"m", false,-1, 31,0);
    tracep->declBus(c+1759,"w", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBit(c+1379,"fencei_i", false,-1);
    tracep->declBit(c+1739,"m_axi_awready", false,-1);
    tracep->declBit(c+1715,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1722,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1735,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1724,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1716,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1706,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1740,"m_axi_wready", false,-1);
    tracep->declBit(c+1715,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1735,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1722,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1742,"m_axi_wlast", false,-1);
    tracep->declBit(c+1715,"m_axi_bready", false,-1);
    tracep->declBit(c+1741,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1736,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1738,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1126,"m_axi_arready", false,-1);
    tracep->declBit(c+1378,"m_axi_arvalid", false,-1);
    tracep->declBus(c+342,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1377,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+341,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+343,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+344,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1021,"m_axi_rready", false,-1);
    tracep->declBit(c+1127,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1737,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1125,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+478,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1743,"m_axi_rlast", false,-1);
    tracep->declBit(c+468,"s_axi_awready", false,-1);
    tracep->declBit(c+1752,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1748,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1744,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1747,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1750,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1751,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1672,"s_axi_wready", false,-1);
    tracep->declBit(c+1753,"s_axi_wvalid", false,-1);
    tracep->declBus(c+1745,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1746,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1755,"s_axi_wlast", false,-1);
    tracep->declBit(c+1754,"s_axi_bready", false,-1);
    tracep->declBit(c+469,"s_axi_bvalid", false,-1);
    tracep->declBus(c+466,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1670,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1242,"s_axi_arready", false,-1);
    tracep->declBit(c+1132,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1749,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1128,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1129,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1130,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1131,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1133,"s_axi_rready", false,-1);
    tracep->declBit(c+1243,"s_axi_rvalid", false,-1);
    tracep->declBus(c+467,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1554,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1671,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1555,"s_axi_rlast", false,-1);
    tracep->declBus(c+1776,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1776,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1776,"CACHE_WAY", false,-1, 31,0);
    tracep->pushNamePrefix("cache_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+1154,"[0]", false,-1, 31,0);
    tracep->declBus(c+1155,"[1]", false,-1, 31,0);
    tracep->declBus(c+1156,"[2]", false,-1, 31,0);
    tracep->declBus(c+1157,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+1158,"[0]", false,-1, 31,0);
    tracep->declBus(c+1159,"[1]", false,-1, 31,0);
    tracep->declBus(c+1160,"[2]", false,-1, 31,0);
    tracep->declBus(c+1161,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+1162,"[0]", false,-1, 31,0);
    tracep->declBus(c+1163,"[1]", false,-1, 31,0);
    tracep->declBus(c+1164,"[2]", false,-1, 31,0);
    tracep->declBus(c+1165,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+1166,"[0]", false,-1, 31,0);
    tracep->declBus(c+1167,"[1]", false,-1, 31,0);
    tracep->declBus(c+1168,"[2]", false,-1, 31,0);
    tracep->declBus(c+1169,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+1170,"[0]", false,-1, 27,0);
    tracep->declBus(c+1171,"[1]", false,-1, 27,0);
    tracep->declBus(c+1172,"[2]", false,-1, 27,0);
    tracep->declBus(c+1173,"[3]", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+1174,"[0]", false,-1, 27,0);
    tracep->declBus(c+1175,"[1]", false,-1, 27,0);
    tracep->declBus(c+1176,"[2]", false,-1, 27,0);
    tracep->declBus(c+1177,"[3]", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+1178,"[0]", false,-1, 27,0);
    tracep->declBus(c+1179,"[1]", false,-1, 27,0);
    tracep->declBus(c+1180,"[2]", false,-1, 27,0);
    tracep->declBus(c+1181,"[3]", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+1182,"[0]", false,-1, 27,0);
    tracep->declBus(c+1183,"[1]", false,-1, 27,0);
    tracep->declBus(c+1184,"[2]", false,-1, 27,0);
    tracep->declBus(c+1185,"[3]", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1186+i*1,"valid_reg", true,(i+0), 3,0);
    }
    tracep->declBus(c+1380,"tag", false,-1, 27,0);
    tracep->declBus(c+1381,"index", false,-1, -1,0);
    tracep->declBus(c+1382,"offset", false,-1, 1,0);
    tracep->declBus(c+1190,"s_tag", false,-1, 27,0);
    tracep->declBus(c+1191,"s_index", false,-1, -1,0);
    tracep->declBus(c+1192,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1621,"access", false,-1, 3,0);
    tracep->declBus(c+1622,"hit", false,-1, 3,0);
    tracep->declBus(c+1706,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1707,"TRANS", false,-1, 1,0);
    tracep->declBus(c+1708,"RETURN", false,-1, 1,0);
    tracep->declBus(c+1193,"state", false,-1, 1,0);
    tracep->declBus(c+1194,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+1195,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+495,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+496,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1196,"a", false,-1, 31,0);
    tracep->declBus(c+1197,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBit(c+1328,"isRAW", false,-1);
    tracep->declBit(c+1619,"isCHazard", false,-1);
    tracep->declBus(c+907,"inst_o", false,-1, 31,0);
    tracep->declBus(c+1022,"prepc_o", false,-1, 31,0);
    tracep->declBit(c+1023,"prepc_en_o", false,-1);
    tracep->declBus(c+1024,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+1025,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+1056,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1057,"r2_i", false,-1, 31,0);
    tracep->declBus(c+923,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+924,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+925,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+926,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1020,"if_valid_i", false,-1);
    tracep->declBit(c+1325,"id_ready_o", false,-1);
    tracep->declBit(c+1324,"id_valid_o", false,-1);
    tracep->declBit(c+1034,"ex_ready_i", false,-1);
    tracep->declBus(c+1019,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1018,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1026,"pc_o", false,-1, 31,0);
    tracep->declBus(c+908,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1027,"op_o", false,-1, 6,0);
    tracep->declBus(c+1028,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+909,"rd_o", false,-1, 4,0);
    tracep->declBit(c+910,"gpr_wen_o", false,-1);
    tracep->declBus(c+911,"alu_sel_o", false,-1, 3,0);
    tracep->declBus(c+912,"a_o", false,-1, 31,0);
    tracep->declBus(c+913,"b_o", false,-1, 31,0);
    tracep->declBus(c+345,"r1_o", false,-1, 31,0);
    tracep->declBus(c+1029,"r2_o", false,-1, 31,0);
    tracep->declBus(c+914,"csr_o", false,-1, 31,0);
    tracep->declBus(c+346,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+347,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+1030,"mepc_wen_o", false,-1);
    tracep->declBit(c+1031,"mstatus_wen_o", false,-1);
    tracep->declBit(c+1032,"mcause_wen_o", false,-1);
    tracep->declBit(c+1033,"mtvec_wen_o", false,-1);
    tracep->declBit(c+1379,"fencei_o", false,-1);
    tracep->declBus(c+1762,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1763,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1077,"state", false,-1);
    tracep->declBus(c+1078,"op", false,-1, 6,0);
    tracep->declBus(c+1079,"rd", false,-1, 4,0);
    tracep->declBus(c+1080,"funct3", false,-1, 2,0);
    tracep->declBus(c+1081,"immI", false,-1, 31,0);
    tracep->declBus(c+1082,"immU", false,-1, 31,0);
    tracep->declBus(c+1083,"immS", false,-1, 31,0);
    tracep->declBus(c+1084,"immB", false,-1, 31,0);
    tracep->declBus(c+1085,"immJ", false,-1, 31,0);
    tracep->declBus(c+1086,"imm", false,-1, 31,0);
    tracep->declBus(c+1087,"funct7", false,-1, 6,0);
    tracep->declBus(c+1088,"shamt", false,-1, 4,0);
    tracep->declBit(c+1089,"gpr_wen", false,-1);
    tracep->declBus(c+1090,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+1091,"a", false,-1, 31,0);
    tracep->declBus(c+1092,"b", false,-1, 31,0);
    tracep->declBus(c+1722,"ADD", false,-1, 3,0);
    tracep->declBus(c+1764,"SUB", false,-1, 3,0);
    tracep->declBus(c+1765,"SLL", false,-1, 3,0);
    tracep->declBus(c+1766,"SRL", false,-1, 3,0);
    tracep->declBus(c+1767,"SRA", false,-1, 3,0);
    tracep->declBus(c+1768,"SLT", false,-1, 3,0);
    tracep->declBus(c+1769,"AND", false,-1, 3,0);
    tracep->declBus(c+1770,"OR", false,-1, 3,0);
    tracep->declBus(c+1771,"XOR", false,-1, 3,0);
    tracep->declBus(c+1772,"MUL", false,-1, 3,0);
    tracep->declBus(c+1773,"MULH", false,-1, 3,0);
    tracep->declBus(c+1774,"DIV", false,-1, 3,0);
    tracep->declBus(c+1775,"REM", false,-1, 3,0);
    tracep->declBus(c+1682,"csr", false,-1, 31,0);
    tracep->declBit(c+1093,"mepc_wen", false,-1);
    tracep->declBit(c+1094,"mstatus_wen", false,-1);
    tracep->declBit(c+1095,"mcause_wen", false,-1);
    tracep->declBit(c+1096,"mtvec_wen", false,-1);
    tracep->declBit(c+1097,"fencei", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBit(c+1619,"isCHazard", false,-1);
    tracep->declBit(c+1720,"pc_valid_i", false,-1);
    tracep->declBit(c+1376,"if_ready_o", false,-1);
    tracep->declBit(c+1020,"if_valid_o", false,-1);
    tracep->declBit(c+1325,"id_ready_i", false,-1);
    tracep->declBus(c+1616,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1019,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1018,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1739,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1715,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1722,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1735,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1724,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1716,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1706,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1740,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1715,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1735,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1722,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1742,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1715,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1741,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1736,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1738,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1126,"if_axi_arready_i", false,-1);
    tracep->declBit(c+1378,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+342,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+1377,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+341,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+343,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+344,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1021,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1127,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1737,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1125,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+478,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1743,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1762,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1763,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1383,"state", false,-1);
    tracep->declBit(c+385,"isCHazard_reg", false,-1);
    tracep->declBus(c+1762,"AXI_IDLE", false,-1, 0,0);
    tracep->declBus(c+1763,"AXI_FETCH", false,-1, 0,0);
    tracep->declBit(c+1384,"axi_state", false,-1);
    tracep->declBus(c+1098,"axi_rdata_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBus(c+915,"pc_i", false,-1, 31,0);
    tracep->declBus(c+916,"inst_i", false,-1, 31,0);
    tracep->declBus(c+920,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+479,"pc_o", false,-1, 31,0);
    tracep->declBus(c+480,"inst_o", false,-1, 31,0);
    tracep->declBus(c+481,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+1683,"ex_valid_i", false,-1);
    tracep->declBit(c+1134,"ls_ready_o", false,-1);
    tracep->declBit(c+1135,"ls_valid_o", false,-1);
    tracep->declBit(c+1136,"difftest_o", false,-1);
    tracep->declBus(c+348,"op_i", false,-1, 6,0);
    tracep->declBus(c+349,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+917,"rd_i", false,-1, 4,0);
    tracep->declBit(c+918,"gpr_wen_i", false,-1);
    tracep->declBus(c+1035,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+1036,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+1037,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+1038,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1039,"mepc_wen_i", false,-1);
    tracep->declBit(c+1040,"mstatus_wen_i", false,-1);
    tracep->declBit(c+1041,"mcause_wen_i", false,-1);
    tracep->declBit(c+1042,"mtvec_wen_i", false,-1);
    tracep->declBus(c+919,"ex_i", false,-1, 31,0);
    tracep->declBit(c+1043,"ls_valid_i", false,-1);
    tracep->declBit(c+350,"ls_wen_i", false,-1);
    tracep->declBit(c+1044,"ls_read_i", false,-1);
    tracep->declBit(c+1045,"ls_write_i", false,-1);
    tracep->declBus(c+1046,"ls_waddr_i", false,-1, 31,0);
    tracep->declBus(c+351,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1047,"ls_raddr_i", false,-1, 31,0);
    tracep->declBus(c+1048,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1049,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1050,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1051,"ls_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1052,"ls_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1053,"ls_awburst_i", false,-1, 1,0);
    tracep->declBus(c+1054,"ls_arburst_i", false,-1, 1,0);
    tracep->declBus(c+482,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+483,"rd_o", false,-1, 4,0);
    tracep->declBit(c+484,"gpr_wen_o", false,-1);
    tracep->declBus(c+986,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+987,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+988,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+989,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+990,"mepc_wen_o", false,-1);
    tracep->declBit(c+991,"mstatus_wen_o", false,-1);
    tracep->declBit(c+992,"mcause_wen_o", false,-1);
    tracep->declBit(c+993,"mtvec_wen_o", false,-1);
    tracep->declBit(c+1556,"ls_axi_awready", false,-1);
    tracep->declBit(c+1003,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1756,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+994,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+997,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+999,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1001,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1676,"ls_axi_wready", false,-1);
    tracep->declBit(c+1004,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1673,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+996,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1008,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1005,"ls_axi_bready", false,-1);
    tracep->declBit(c+1557,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+470,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1674,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1558,"ls_axi_arready", false,-1);
    tracep->declBit(c+1006,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1757,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+995,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+998,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1000,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1002,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1007,"ls_axi_rready", false,-1);
    tracep->declBit(c+1559,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+471,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1244,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1675,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+472,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1706,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1707,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1708,"DONE", false,-1, 1,0);
    tracep->declBus(c+1709,"DIFFTEST", false,-1, 1,0);
    tracep->declBus(c+1198,"state", false,-1, 1,0);
    tracep->declBus(c+1684,"xrd", false,-1, 31,0);
    tracep->declBit(c+1009,"ls_done_reg", false,-1);
    tracep->declBit(c+1009,"ls_done_o", false,-1);
    tracep->declBus(c+1010,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1329,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+1716,"AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1705,"AXI_READ", false,-1, 2,0);
    tracep->declBus(c+1717,"AXI_WRITE1", false,-1, 2,0);
    tracep->declBus(c+1718,"AXI_WRITE2", false,-1, 2,0);
    tracep->declBus(c+1719,"AXI_DONE", false,-1, 2,0);
    tracep->declBus(c+1011,"axi_state", false,-1, 2,0);
    tracep->declBit(c+1003,"axi_awvalid", false,-1);
    tracep->declBit(c+1004,"axi_wvalid", false,-1);
    tracep->declBus(c+1756,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+994,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1012,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+997,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+999,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1001,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+996,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1005,"axi_bready", false,-1);
    tracep->declBit(c+1008,"axi_wlast", false,-1);
    tracep->declBit(c+1006,"axi_arvalid", false,-1);
    tracep->declBit(c+1007,"axi_rready", false,-1);
    tracep->declBus(c+1757,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+995,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+998,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1000,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1002,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBit(c+1619,"isCHazard", false,-1);
    tracep->declBus(c+1616,"pc_o", false,-1, 31,0);
    tracep->declBus(c+920,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1669,"snpc_i", false,-1, 31,0);
    tracep->declBit(c+1720,"pc_valid_o", false,-1);
    tracep->declBit(c+1376,"if_ready_i", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1776,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1777,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBus(c+482,"wdata", false,-1, 31,0);
    tracep->declBus(c+497,"waddr", false,-1, 3,0);
    tracep->declBit(c+484,"wen", false,-1);
    tracep->declBus(c+1099,"raddr1", false,-1, 3,0);
    tracep->declBus(c+1056,"r1", false,-1, 31,0);
    tracep->declBus(c+1100,"raddr2", false,-1, 3,0);
    tracep->declBus(c+1057,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+386+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBit(c+468,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1752,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1748,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1744,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1747,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1750,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1751,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1672,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1753,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1745,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1746,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1755,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1754,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+469,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+466,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1670,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1242,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1132,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1749,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1128,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1129,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1130,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1131,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1133,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1243,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+467,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1554,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1671,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1555,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1556,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1003,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1756,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+994,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+997,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+999,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1001,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1676,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1004,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1673,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+996,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1008,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+1005,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1557,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+470,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1674,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1558,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1006,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1757,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+995,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+998,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1000,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1002,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1007,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1559,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+471,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1244,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1675,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+472,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1465,"io_master_awready", false,-1);
    tracep->declBit(c+1113,"io_master_awvalid", false,-1);
    tracep->declBus(c+1106,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1107,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1108,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1109,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1110,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1339,"io_master_wready", false,-1);
    tracep->declBit(c+1114,"io_master_wvalid", false,-1);
    tracep->declBus(c+1266,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1111,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"io_master_wlast", false,-1);
    tracep->declBit(c+1115,"io_master_bready", false,-1);
    tracep->declBit(c+1466,"io_master_bvalid", false,-1);
    tracep->declBus(c+1467,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1664,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1468,"io_master_arready", false,-1);
    tracep->declBit(c+1116,"io_master_arvalid", false,-1);
    tracep->declBus(c+1101,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1102,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1103,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1104,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1105,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1117,"io_master_rready", false,-1);
    tracep->declBit(c+1469,"io_master_rvalid", false,-1);
    tracep->declBus(c+1470,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1665,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1666,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1471,"io_master_rlast", false,-1);
    tracep->declBit(c+357,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1148,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1142,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1137,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1140,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1144,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1146,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1055,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1149,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1327,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1139,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1153,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1150,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+358,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+353,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+355,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+921,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1151,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1143,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1138,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1141,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1145,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1147,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1152,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+922,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+354,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+352,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+356,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+359,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+360,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+361,"marchid", false,-1, 31,0);
    tracep->declBus(c+1199,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1330,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1200,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1560,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1201,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1202,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1203,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1204,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+473,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1205,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+474,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1206,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1207,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1208,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1209,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1685,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1686,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1210,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+475,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1211,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1687,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+476,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1212,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1213,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1561,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1562,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1214,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1215,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+477,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+498,"state", false,-1, 1,0);
    tracep->declBus(c+1216,"sel_m", false,-1, 1,0);
    tracep->declBus(c+1706,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1707,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1708,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1760,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1761,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1217,"sel_clint", false,-1);
    tracep->declBus(c+1778,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1779,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1218,"sel_mvendorid", false,-1);
    tracep->declBit(c+1219,"sel_marchid", false,-1);
    tracep->declBit(c+1220,"sel_id", false,-1);
    tracep->declBus(c+1221,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1331,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1222,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1688,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1223,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1224,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1225,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1226,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1780,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1227,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1781,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1228,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1229,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1230,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1231,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1782,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1783,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1784,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1232,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1233,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1785,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1786,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1234,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1235,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1720,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1720,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1236,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1237,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1787,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1777,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1788,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBus(c+1723,"din", false,-1, 31,0);
    tracep->declBus(c+361,"dout", false,-1, 31,0);
    tracep->declBit(c+1715,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1777,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1723,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBus(c+988,"din", false,-1, 31,0);
    tracep->declBus(c+925,"dout", false,-1, 31,0);
    tracep->declBit(c+992,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1777,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1723,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBus(c+986,"din", false,-1, 31,0);
    tracep->declBus(c+923,"dout", false,-1, 31,0);
    tracep->declBit(c+990,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1777,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1789,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBus(c+987,"din", false,-1, 31,0);
    tracep->declBus(c+924,"dout", false,-1, 31,0);
    tracep->declBit(c+991,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1777,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1723,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBus(c+989,"din", false,-1, 31,0);
    tracep->declBus(c+926,"dout", false,-1, 31,0);
    tracep->declBit(c+993,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1777,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1790,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1668,"rst", false,-1);
    tracep->declBus(c+1723,"din", false,-1, 31,0);
    tracep->declBus(c+360,"dout", false,-1, 31,0);
    tracep->declBit(c+1715,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"io_d", false,-1);
    tracep->declBit(c+402,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"io_d", false,-1);
    tracep->declBit(c+402,"io_q", false,-1);
    tracep->declBit(c+402,"sync_0", false,-1);
    tracep->declBit(c+403,"sync_1", false,-1);
    tracep->declBit(c+404,"sync_2", false,-1);
    tracep->declBit(c+405,"sync_3", false,-1);
    tracep->declBit(c+406,"sync_4", false,-1);
    tracep->declBit(c+407,"sync_5", false,-1);
    tracep->declBit(c+408,"sync_6", false,-1);
    tracep->declBit(c+409,"sync_7", false,-1);
    tracep->declBit(c+410,"sync_8", false,-1);
    tracep->declBit(c+411,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1398,"auto_in_psel", false,-1);
    tracep->declBit(c+1399,"auto_in_penable", false,-1);
    tracep->declBit(c+1388,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1336,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1387,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+513,"auto_in_pready", false,-1);
    tracep->declBit(c+1714,"auto_in_pslverr", false,-1);
    tracep->declBus(c+514,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1629,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1630,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1631,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1632,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1633,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1634,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1635,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1636,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1637,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1638,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1372,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1398,"in_psel", false,-1);
    tracep->declBit(c+1399,"in_penable", false,-1);
    tracep->declBus(c+1387,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1388,"in_pwrite", false,-1);
    tracep->declBus(c+1389,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+513,"in_pready", false,-1);
    tracep->declBus(c+514,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1714,"in_pslverr", false,-1);
    tracep->declBus(c+1629,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1630,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1631,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1632,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1633,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1634,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1635,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1636,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1637,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1638,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1724,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1791,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1792,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1793,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1794,"ONE", false,-1, 7,0);
    tracep->declBus(c+1795,"TWO", false,-1, 7,0);
    tracep->declBus(c+1796,"THREE", false,-1, 7,0);
    tracep->declBus(c+1797,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1798,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1799,"SIX", false,-1, 7,0);
    tracep->declBus(c+1800,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1801,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1802,"NINE", false,-1, 7,0);
    tracep->declBus(c+1803,"A", false,-1, 7,0);
    tracep->declBus(c+1804,"B", false,-1, 7,0);
    tracep->declBus(c+1805,"C", false,-1, 7,0);
    tracep->declBus(c+1806,"D", false,-1, 7,0);
    tracep->declBus(c+1807,"E", false,-1, 7,0);
    tracep->declBus(c+1808,"F", false,-1, 7,0);
    tracep->declBus(c+545,"led_reg", false,-1, 15,0);
    tracep->declBus(c+546,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+547+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1563,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1564,"write_en", false,-1);
    tracep->declBit(c+1565,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1396,"auto_in_psel", false,-1);
    tracep->declBit(c+1397,"auto_in_penable", false,-1);
    tracep->declBit(c+1388,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1336,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1387,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+511,"auto_in_pready", false,-1);
    tracep->declBit(c+1713,"auto_in_pslverr", false,-1);
    tracep->declBus(c+512,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1639,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1640,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1372,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1396,"in_psel", false,-1);
    tracep->declBit(c+1397,"in_penable", false,-1);
    tracep->declBus(c+1387,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1388,"in_pwrite", false,-1);
    tracep->declBus(c+1389,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+511,"in_pready", false,-1);
    tracep->declBus(c+512,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1713,"in_pslverr", false,-1);
    tracep->declBit(c+1639,"ps2_clk", false,-1);
    tracep->declBit(c+1640,"ps2_data", false,-1);
    tracep->declBus(c+1809,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1810,"EXP", false,-1, 7,0);
    tracep->declBus(c+1013,"state", false,-1, 1,0);
    tracep->declBus(c+1014,"counter", false,-1, 3,0);
    tracep->declBus(c+1015,"buffer", false,-1, 7,0);
    tracep->declBus(c+1016,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1017,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1689,"ready", false,-1);
    tracep->declBus(c+1690,"rdata", false,-1, 31,0);
    tracep->declBit(c+1566,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1306,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1307,"auto_in_wvalid", false,-1);
    tracep->declBit(c+157,"auto_in_arready", false,-1);
    tracep->declBit(c+1308,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1260,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1309,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1667,"auto_in_rready", false,-1);
    tracep->declBit(c+158,"auto_in_rvalid", false,-1);
    tracep->declBus(c+159,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"state", false,-1);
    tracep->declBus(c+160,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+159,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1332,"raddr", false,-1, 31,0);
    tracep->declBit(c+1333,"ren", false,-1);
    tracep->declBus(c+1334,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1400,"auto_in_psel", false,-1);
    tracep->declBit(c+1401,"auto_in_penable", false,-1);
    tracep->declBit(c+1388,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1335,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1387,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1653,"auto_in_pready", false,-1);
    tracep->declBit(c+1715,"auto_in_pslverr", false,-1);
    tracep->declBus(c+905,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1623,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1624,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1650,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1335,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1400,"in_psel", false,-1);
    tracep->declBit(c+1401,"in_penable", false,-1);
    tracep->declBus(c+1387,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1388,"in_pwrite", false,-1);
    tracep->declBus(c+1389,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1653,"in_pready", false,-1);
    tracep->declBus(c+905,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1715,"in_pslverr", false,-1);
    tracep->declBit(c+1623,"qspi_sck", false,-1);
    tracep->declBit(c+1624,"qspi_ce_n", false,-1);
    tracep->declBus(c+1650,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1650,"din", false,-1, 3,0);
    tracep->declBus(c+1625,"dout", false,-1, 3,0);
    tracep->declBus(c+1626,"douten", false,-1, 3,0);
    tracep->declBit(c+1691,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBus(c+1335,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1389,"dat_i", false,-1, 31,0);
    tracep->declBus(c+905,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1390,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1400,"cyc_i", false,-1);
    tracep->declBit(c+1400,"stb_i", false,-1);
    tracep->declBit(c+1691,"ack_o", false,-1);
    tracep->declBit(c+1388,"we_i", false,-1);
    tracep->declBit(c+1623,"sck", false,-1);
    tracep->declBit(c+1624,"ce_n", false,-1);
    tracep->declBus(c+1650,"din", false,-1, 3,0);
    tracep->declBus(c+1625,"dout", false,-1, 3,0);
    tracep->declBus(c+1626,"douten", false,-1, 3,0);
    tracep->declBus(c+1762,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1763,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+555,"mr_sck", false,-1);
    tracep->declBit(c+556,"mr_ce_n", false,-1);
    tracep->declBus(c+1650,"mr_din", false,-1, 3,0);
    tracep->declBus(c+557,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+558,"mr_doe", false,-1);
    tracep->declBit(c+559,"mw_sck", false,-1);
    tracep->declBit(c+560,"mw_ce_n", false,-1);
    tracep->declBus(c+1650,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1567,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+561,"mw_doe", false,-1);
    tracep->declBit(c+1568,"mr_rd", false,-1);
    tracep->declBit(c+562,"mr_done", false,-1);
    tracep->declBit(c+1569,"mw_wr", false,-1);
    tracep->declBit(c+1570,"mw_done", false,-1);
    tracep->declBit(c+1400,"wb_valid", false,-1);
    tracep->declBit(c+1571,"wb_we", false,-1);
    tracep->declBit(c+1572,"wb_re", false,-1);
    tracep->declBit(c+563,"state", false,-1);
    tracep->declBit(c+1573,"nstate", false,-1);
    tracep->declBus(c+1574,"size", false,-1, 2,0);
    tracep->declBus(c+1575,"byte0", false,-1, 7,0);
    tracep->declBus(c+1576,"byte1", false,-1, 7,0);
    tracep->declBus(c+1577,"byte2", false,-1, 7,0);
    tracep->declBus(c+1578,"byte3", false,-1, 7,0);
    tracep->declBus(c+1373,"wdata", false,-1, 31,0);
    tracep->declBit(c+814,"qpi_flag", false,-1);
    tracep->declBit(c+815,"qpi_sck", false,-1);
    tracep->declBit(c+816,"qpi_ce_n", false,-1);
    tracep->declBus(c+817,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+818,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+819,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1692,"rst_n", false,-1);
    tracep->declBus(c+1374,"addr", false,-1, 23,0);
    tracep->declBit(c+1568,"rd", false,-1);
    tracep->declBus(c+1719,"size", false,-1, 2,0);
    tracep->declBit(c+562,"done", false,-1);
    tracep->declBus(c+905,"line", false,-1, 31,0);
    tracep->declBit(c+555,"sck", false,-1);
    tracep->declBit(c+556,"ce_n", false,-1);
    tracep->declBus(c+1650,"din", false,-1, 3,0);
    tracep->declBus(c+557,"dout", false,-1, 3,0);
    tracep->declBit(c+558,"douten", false,-1);
    tracep->declBus(c+1762,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1763,"READ", false,-1, 0,0);
    tracep->declBus(c+1811,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+564,"state", false,-1);
    tracep->declBit(c+1579,"nstate", false,-1);
    tracep->declBus(c+565,"counter", false,-1, 7,0);
    tracep->declBus(c+566,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+927+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1812,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+567,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1692,"rst_n", false,-1);
    tracep->declBus(c+1375,"addr", false,-1, 23,0);
    tracep->declBus(c+1373,"line", false,-1, 31,0);
    tracep->declBus(c+1574,"size", false,-1, 2,0);
    tracep->declBit(c+1569,"wr", false,-1);
    tracep->declBit(c+1570,"done", false,-1);
    tracep->declBit(c+559,"sck", false,-1);
    tracep->declBit(c+560,"ce_n", false,-1);
    tracep->declBus(c+1650,"din", false,-1, 3,0);
    tracep->declBus(c+1567,"dout", false,-1, 3,0);
    tracep->declBit(c+561,"douten", false,-1);
    tracep->declBus(c+1762,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1763,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1580,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+568,"state", false,-1);
    tracep->declBit(c+1581,"nstate", false,-1);
    tracep->declBus(c+569,"counter", false,-1, 7,0);
    tracep->declBus(c+570,"saddr", false,-1, 23,0);
    tracep->declBus(c+1813,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1431,"auto_in_awready", false,-1);
    tracep->declBit(c+1432,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1433,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1434,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1435,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1239,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1436,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1437,"auto_in_wready", false,-1);
    tracep->declBit(c+1438,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1337,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1240,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1241,"auto_in_wlast", false,-1);
    tracep->declBit(c+1657,"auto_in_bready", false,-1);
    tracep->declBit(c+528,"auto_in_bvalid", false,-1);
    tracep->declBus(c+525,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1706,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1424,"auto_in_arready", false,-1);
    tracep->declBit(c+1425,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1426,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1427,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1238,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1429,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1430,"auto_in_rready", false,-1);
    tracep->declBit(c+524,"auto_in_rvalid", false,-1);
    tracep->declBus(c+525,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+526,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1706,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+527,"auto_in_rlast", false,-1);
    tracep->declBit(c+1651,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+501,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+943,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+944,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+945,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+946,"sdram_bundle_we", false,-1);
    tracep->declBus(c+947,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+948,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+502,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+972,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1431,"in_awready", false,-1);
    tracep->declBit(c+1432,"in_awvalid", false,-1);
    tracep->declBus(c+1434,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1433,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1435,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1239,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1436,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1437,"in_wready", false,-1);
    tracep->declBit(c+1438,"in_wvalid", false,-1);
    tracep->declBus(c+1337,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1240,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1241,"in_wlast", false,-1);
    tracep->declBit(c+1657,"in_bready", false,-1);
    tracep->declBit(c+528,"in_bvalid", false,-1);
    tracep->declBus(c+1706,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+525,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1424,"in_arready", false,-1);
    tracep->declBit(c+1425,"in_arvalid", false,-1);
    tracep->declBus(c+1427,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1426,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1428,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1238,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1429,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1430,"in_rready", false,-1);
    tracep->declBit(c+524,"in_rvalid", false,-1);
    tracep->declBus(c+1706,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+526,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+527,"in_rlast", false,-1);
    tracep->declBus(c+525,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1651,"sdram_clk", false,-1);
    tracep->declBit(c+501,"sdram_cke", false,-1);
    tracep->declBit(c+943,"sdram_cs", false,-1);
    tracep->declBit(c+944,"sdram_ras", false,-1);
    tracep->declBit(c+945,"sdram_cas", false,-1);
    tracep->declBit(c+946,"sdram_we", false,-1);
    tracep->declBus(c+947,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+948,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+502,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+972,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+571,"sdram_dout_en", false,-1);
    tracep->declBus(c+572,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBit(c+1432,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1434,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1433,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1435,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1436,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1438,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1337,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1240,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1241,"inport_wlast_i", false,-1);
    tracep->declBit(c+1657,"inport_bready_i", false,-1);
    tracep->declBit(c+1425,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1427,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1426,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1428,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1429,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1430,"inport_rready_i", false,-1);
    tracep->declBus(c+972,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1431,"inport_awready_o", false,-1);
    tracep->declBit(c+1437,"inport_wready_o", false,-1);
    tracep->declBit(c+528,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1706,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+525,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1424,"inport_arready_o", false,-1);
    tracep->declBit(c+524,"inport_rvalid_o", false,-1);
    tracep->declBus(c+526,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1706,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+525,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+527,"inport_rlast_o", false,-1);
    tracep->declBit(c+1651,"sdram_clk_o", false,-1);
    tracep->declBit(c+501,"sdram_cke_o", false,-1);
    tracep->declBit(c+943,"sdram_cs_o", false,-1);
    tracep->declBit(c+944,"sdram_ras_o", false,-1);
    tracep->declBit(c+945,"sdram_cas_o", false,-1);
    tracep->declBit(c+946,"sdram_we_o", false,-1);
    tracep->declBus(c+502,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+947,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+948,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+572,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+571,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1814,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1815,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1816,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1759,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1582,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1583,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1584,"ram_rd_w", false,-1);
    tracep->declBit(c+949,"ram_accept_w", false,-1);
    tracep->declBus(c+1337,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+573,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1585,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+574,"ram_ack_w", false,-1);
    tracep->declBit(c+1715,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBit(c+1432,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1434,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1433,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1435,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1436,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1438,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1337,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1240,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1241,"axi_wlast_i", false,-1);
    tracep->declBit(c+1657,"axi_bready_i", false,-1);
    tracep->declBit(c+1425,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1427,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1426,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1428,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1429,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1430,"axi_rready_i", false,-1);
    tracep->declBit(c+949,"ram_accept_i", false,-1);
    tracep->declBit(c+574,"ram_ack_i", false,-1);
    tracep->declBit(c+1715,"ram_error_i", false,-1);
    tracep->declBus(c+573,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1431,"axi_awready_o", false,-1);
    tracep->declBit(c+1437,"axi_wready_o", false,-1);
    tracep->declBit(c+528,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1706,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+525,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1424,"axi_arready_o", false,-1);
    tracep->declBit(c+524,"axi_rvalid_o", false,-1);
    tracep->declBus(c+526,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1706,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+525,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+527,"axi_rlast_o", false,-1);
    tracep->declBus(c+1583,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1584,"ram_rd_o", false,-1);
    tracep->declBus(c+1585,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1582,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1337,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+575,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+576,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+577,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+578,"req_rd_q", false,-1);
    tracep->declBit(c+579,"req_wr_q", false,-1);
    tracep->declBus(c+580,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+581,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+582,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+583,"req_prio_q", false,-1);
    tracep->declBit(c+584,"req_hold_rd_q", false,-1);
    tracep->declBit(c+585,"req_hold_wr_q", false,-1);
    tracep->declBit(c+586,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1586,"req_push_w", false,-1);
    tracep->declBus(c+1693,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+587,"req_out_valid_w", false,-1);
    tracep->declBus(c+588,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1587,"resp_accept_w", false,-1);
    tracep->declBit(c+589,"resp_is_write_w", false,-1);
    tracep->declBit(c+590,"resp_is_read_w", false,-1);
    tracep->declBit(c+527,"resp_is_last_w", false,-1);
    tracep->declBus(c+525,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+591,"resp_valid_w", false,-1);
    tracep->declBit(c+592,"write_prio_w", false,-1);
    tracep->declBit(c+593,"read_prio_w", false,-1);
    tracep->declBit(c+1588,"write_active_w", false,-1);
    tracep->declBit(c+1584,"read_active_w", false,-1);
    tracep->declBus(c+1582,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1589,"wr_w", false,-1);
    tracep->declBit(c+1584,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1817,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1776,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1759,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBus(c+1693,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1586,"push_i", false,-1);
    tracep->declBit(c+1587,"pop_i", false,-1);
    tracep->declBus(c+588,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+586,"accept_o", false,-1);
    tracep->declBit(c+587,"valid_o", false,-1);
    tracep->declBus(c+1758,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+594+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+598,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+599,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+600,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1777,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1776,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1759,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBus(c+573,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+574,"push_i", false,-1);
    tracep->declBit(c+1587,"pop_i", false,-1);
    tracep->declBus(c+526,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+601,"accept_o", false,-1);
    tracep->declBit(c+591,"valid_o", false,-1);
    tracep->declBus(c+1758,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+602+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+606,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+607,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+608,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBus(c+1583,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1584,"inport_rd_i", false,-1);
    tracep->declBus(c+1585,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1582,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1337,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+972,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+949,"inport_accept_o", false,-1);
    tracep->declBit(c+574,"inport_ack_o", false,-1);
    tracep->declBit(c+1715,"inport_error_o", false,-1);
    tracep->declBus(c+573,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1651,"sdram_clk_o", false,-1);
    tracep->declBit(c+501,"sdram_cke_o", false,-1);
    tracep->declBit(c+943,"sdram_cs_o", false,-1);
    tracep->declBit(c+944,"sdram_ras_o", false,-1);
    tracep->declBit(c+945,"sdram_cas_o", false,-1);
    tracep->declBit(c+946,"sdram_we_o", false,-1);
    tracep->declBus(c+502,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+947,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+948,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+572,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+571,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1814,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1815,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1816,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1759,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1758,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1776,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1818,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1819,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1820,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1821,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1822,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1776,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1770,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1766,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1768,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1767,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1769,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1765,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1722,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1823,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1776,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1722,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1764,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1765,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1766,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1767,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1768,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1769,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1770,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1771,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1772,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1824,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1824,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1777,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1824,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1759,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1759,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1817,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1582,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1583,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1584,"ram_rd_w", false,-1);
    tracep->declBit(c+949,"ram_accept_w", false,-1);
    tracep->declBus(c+1337,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+573,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+574,"ram_ack_w", false,-1);
    tracep->declBit(c+1590,"ram_req_w", false,-1);
    tracep->declBus(c+950,"command_q", false,-1, 3,0);
    tracep->declBus(c+947,"addr_q", false,-1, 12,0);
    tracep->declBus(c+572,"data_q", false,-1, 31,0);
    tracep->declBit(c+609,"data_rd_en_q", false,-1);
    tracep->declBus(c+502,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+501,"cke_q", false,-1);
    tracep->declBus(c+948,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1825,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+610,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+972,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+611,"refresh_q", false,-1);
    tracep->declBus(c+951,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+612+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+952,"state_q", false,-1, 3,0);
    tracep->declBus(c+1591,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1592,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+620,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+621,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1593,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1594,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1595,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1776,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+622,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1596,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1826,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+953,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+623,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+573,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+624,"idx", false,-1, 31,0);
    tracep->declBus(c+625,"rd_q", false,-1, 3,0);
    tracep->declBit(c+574,"ack_q", false,-1);
    tracep->declArray(c+954,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1406,"auto_in_psel", false,-1);
    tracep->declBit(c+1407,"auto_in_penable", false,-1);
    tracep->declBit(c+1388,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1395,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1387,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1654,"auto_in_pready", false,-1);
    tracep->declBit(c+1715,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1408,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+499,"spi_bundle_sck", false,-1);
    tracep->declBus(c+500,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+942,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1649,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1827,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1828,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1818,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1597,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1406,"in_psel", false,-1);
    tracep->declBit(c+1407,"in_penable", false,-1);
    tracep->declBus(c+1387,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1388,"in_pwrite", false,-1);
    tracep->declBus(c+1389,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1654,"in_pready", false,-1);
    tracep->declBus(c+1408,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1715,"in_pslverr", false,-1);
    tracep->declBit(c+499,"spi_sck", false,-1);
    tracep->declBus(c+500,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+942,"spi_mosi", false,-1);
    tracep->declBit(c+1649,"spi_miso", false,-1);
    tracep->declBit(c+626,"spi_irq_out", false,-1);
    tracep->declBus(c+1598,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1599,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1600,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1601,"wb_we_i", false,-1);
    tracep->declBit(c+1602,"wb_stb_i", false,-1);
    tracep->declBit(c+1603,"wb_cyc_i", false,-1);
    tracep->declBit(c+627,"wb_ack_o", false,-1);
    tracep->declBus(c+628,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1716,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1705,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1717,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1718,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1719,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1829,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1830,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1831,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+412,"state", false,-1, 2,0);
    tracep->declBus(c+413,"next_state", false,-1, 2,0);
    tracep->declBus(c+414,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+415,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+416,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+417,"flash_pwrite", false,-1);
    tracep->declBit(c+418,"flash_psel", false,-1);
    tracep->declBit(c+419,"flash_penable", false,-1);
    tracep->declBit(c+420,"flash_pready", false,-1);
    tracep->declBus(c+421,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1832,"Tp", false,-1, 31,0);
    tracep->declBit(c+1627,"wb_clk_i", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBus(c+1598,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1599,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+628,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1600,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1601,"wb_we_i", false,-1);
    tracep->declBit(c+1602,"wb_stb_i", false,-1);
    tracep->declBit(c+1603,"wb_cyc_i", false,-1);
    tracep->declBit(c+627,"wb_ack_o", false,-1);
    tracep->declBit(c+1715,"wb_err_o", false,-1);
    tracep->declBit(c+626,"wb_int_o", false,-1);
    tracep->declBus(c+500,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+499,"sclk_pad_o", false,-1);
    tracep->declBit(c+942,"mosi_pad_o", false,-1);
    tracep->declBit(c+1649,"miso_pad_i", false,-1);
    tracep->declBus(c+629,"divider", false,-1, 15,0);
    tracep->declBus(c+630,"ctrl", false,-1, 13,0);
    tracep->declBus(c+631,"ss", false,-1, 7,0);
    tracep->declBus(c+1604,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+632,"rx", false,-1, 127,0);
    tracep->declBit(c+636,"rx_negedge", false,-1);
    tracep->declBit(c+637,"tx_negedge", false,-1);
    tracep->declBus(c+638,"char_len", false,-1, 6,0);
    tracep->declBit(c+639,"go", false,-1);
    tracep->declBit(c+640,"lsb", false,-1);
    tracep->declBit(c+641,"ie", false,-1);
    tracep->declBit(c+642,"ass", false,-1);
    tracep->declBit(c+1605,"spi_divider_sel", false,-1);
    tracep->declBit(c+1606,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1607,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1608,"spi_ss_sel", false,-1);
    tracep->declBit(c+643,"tip", false,-1);
    tracep->declBit(c+644,"pos_edge", false,-1);
    tracep->declBit(c+645,"neg_edge", false,-1);
    tracep->declBit(c+646,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1832,"Tp", false,-1, 31,0);
    tracep->declBit(c+1627,"clk_in", false,-1);
    tracep->declBit(c+1628,"rst", false,-1);
    tracep->declBit(c+643,"enable", false,-1);
    tracep->declBit(c+639,"go", false,-1);
    tracep->declBit(c+646,"last_clk", false,-1);
    tracep->declBus(c+629,"divider", false,-1, 15,0);
    tracep->declBit(c+499,"clk_out", false,-1);
    tracep->declBit(c+644,"pos_edge", false,-1);
    tracep->declBit(c+645,"neg_edge", false,-1);
    tracep->declBus(c+647,"cnt", false,-1, 15,0);
    tracep->declBit(c+648,"cnt_zero", false,-1);
    tracep->declBit(c+649,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1832,"Tp", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"rst", false,-1);
    tracep->declBus(c+1609,"latch", false,-1, 3,0);
    tracep->declBus(c+1600,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+638,"len", false,-1, 6,0);
    tracep->declBit(c+640,"lsb", false,-1);
    tracep->declBit(c+639,"go", false,-1);
    tracep->declBit(c+644,"pos_edge", false,-1);
    tracep->declBit(c+645,"neg_edge", false,-1);
    tracep->declBit(c+636,"rx_negedge", false,-1);
    tracep->declBit(c+637,"tx_negedge", false,-1);
    tracep->declBit(c+643,"tip", false,-1);
    tracep->declBit(c+646,"last", false,-1);
    tracep->declBus(c+1599,"p_in", false,-1, 31,0);
    tracep->declArray(c+632,"p_out", false,-1, 127,0);
    tracep->declBit(c+499,"s_clk", false,-1);
    tracep->declBit(c+1649,"s_in", false,-1);
    tracep->declBit(c+942,"s_out", false,-1);
    tracep->declBus(c+650,"cnt", false,-1, 7,0);
    tracep->declArray(c+632,"data", false,-1, 127,0);
    tracep->declBus(c+651,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+652,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+653,"rx_clk", false,-1);
    tracep->declBit(c+654,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1402,"auto_in_psel", false,-1);
    tracep->declBit(c+1403,"auto_in_penable", false,-1);
    tracep->declBit(c+1388,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1336,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1387,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1404,"auto_in_pready", false,-1);
    tracep->declBit(c+1715,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1405,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1647,"uart_rx", false,-1);
    tracep->declBit(c+1648,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1402,"in_psel", false,-1);
    tracep->declBit(c+1403,"in_penable", false,-1);
    tracep->declBus(c+1387,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1404,"in_pready", false,-1);
    tracep->declBit(c+1715,"in_pslverr", false,-1);
    tracep->declBus(c+1372,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1388,"in_pwrite", false,-1);
    tracep->declBus(c+1405,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1389,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1647,"uart_rx", false,-1);
    tracep->declBit(c+1648,"uart_tx", false,-1);
    tracep->declBit(c+655,"rtsn", false,-1);
    tracep->declBit(c+1715,"ctsn", false,-1);
    tracep->declBit(c+656,"dtr_pad_o", false,-1);
    tracep->declBit(c+1715,"dsr_pad_i", false,-1);
    tracep->declBit(c+1715,"ri_pad_i", false,-1);
    tracep->declBit(c+1715,"dcd_pad_i", false,-1);
    tracep->declBit(c+657,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1610,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1611,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+422,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1612,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+658,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBus(c+1610,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1613,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1612,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1648,"stx_pad_o", false,-1);
    tracep->declBit(c+1647,"srx_pad_i", false,-1);
    tracep->declBus(c+1771,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+658,"rts_pad_o", false,-1);
    tracep->declBit(c+656,"dtr_pad_o", false,-1);
    tracep->declBit(c+657,"int_o", false,-1);
    tracep->declBit(c+659,"enable", false,-1);
    tracep->declBit(c+660,"srx_pad", false,-1);
    tracep->declBus(c+661,"ier", false,-1, 3,0);
    tracep->declBus(c+662,"iir", false,-1, 3,0);
    tracep->declBus(c+663,"fcr", false,-1, 1,0);
    tracep->declBus(c+664,"mcr", false,-1, 4,0);
    tracep->declBus(c+665,"lcr", false,-1, 7,0);
    tracep->declBus(c+666,"msr", false,-1, 7,0);
    tracep->declBus(c+667,"dl", false,-1, 15,0);
    tracep->declBus(c+668,"scratch", false,-1, 7,0);
    tracep->declBit(c+669,"start_dlc", false,-1);
    tracep->declBit(c+670,"lsr_mask_d", false,-1);
    tracep->declBit(c+671,"msi_reset", false,-1);
    tracep->declBus(c+672,"dlc", false,-1, 15,0);
    tracep->declBus(c+673,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+674,"rx_reset", false,-1);
    tracep->declBit(c+675,"tx_reset", false,-1);
    tracep->declBit(c+676,"dlab", false,-1);
    tracep->declBit(c+1720,"cts_pad_i", false,-1);
    tracep->declBit(c+1715,"dsr_pad_i", false,-1);
    tracep->declBit(c+1715,"ri_pad_i", false,-1);
    tracep->declBit(c+1715,"dcd_pad_i", false,-1);
    tracep->declBit(c+677,"loopback", false,-1);
    tracep->declBit(c+1715,"cts", false,-1);
    tracep->declBit(c+1720,"dsr", false,-1);
    tracep->declBit(c+1720,"ri", false,-1);
    tracep->declBit(c+1720,"dcd", false,-1);
    tracep->declBit(c+678,"cts_c", false,-1);
    tracep->declBit(c+679,"dsr_c", false,-1);
    tracep->declBit(c+680,"ri_c", false,-1);
    tracep->declBit(c+681,"dcd_c", false,-1);
    tracep->declBus(c+682,"lsr", false,-1, 7,0);
    tracep->declBit(c+683,"lsr0", false,-1);
    tracep->declBit(c+684,"lsr1", false,-1);
    tracep->declBit(c+685,"lsr2", false,-1);
    tracep->declBit(c+686,"lsr3", false,-1);
    tracep->declBit(c+687,"lsr4", false,-1);
    tracep->declBit(c+688,"lsr5", false,-1);
    tracep->declBit(c+689,"lsr6", false,-1);
    tracep->declBit(c+690,"lsr7", false,-1);
    tracep->declBit(c+691,"lsr0r", false,-1);
    tracep->declBit(c+692,"lsr1r", false,-1);
    tracep->declBit(c+693,"lsr2r", false,-1);
    tracep->declBit(c+694,"lsr3r", false,-1);
    tracep->declBit(c+695,"lsr4r", false,-1);
    tracep->declBit(c+696,"lsr5r", false,-1);
    tracep->declBit(c+697,"lsr6r", false,-1);
    tracep->declBit(c+698,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+699,"rls_int", false,-1);
    tracep->declBit(c+700,"rda_int", false,-1);
    tracep->declBit(c+701,"ti_int", false,-1);
    tracep->declBit(c+702,"thre_int", false,-1);
    tracep->declBit(c+703,"ms_int", false,-1);
    tracep->declBit(c+704,"tf_push", false,-1);
    tracep->declBit(c+705,"rf_pop", false,-1);
    tracep->declBus(c+1694,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+706,"rf_error_bit", false,-1);
    tracep->declBit(c+684,"rf_overrun", false,-1);
    tracep->declBit(c+707,"rf_push_pulse", false,-1);
    tracep->declBus(c+708,"rf_count", false,-1, 4,0);
    tracep->declBus(c+709,"tf_count", false,-1, 4,0);
    tracep->declBus(c+710,"tstate", false,-1, 2,0);
    tracep->declBus(c+711,"rstate", false,-1, 3,0);
    tracep->declBus(c+712,"counter_t", false,-1, 9,0);
    tracep->declBit(c+713,"thre_set_en", false,-1);
    tracep->declBus(c+714,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+715,"block_value", false,-1, 7,0);
    tracep->declBit(c+716,"serial_out", false,-1);
    tracep->declBit(c+717,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+718,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+719,"lsr0_d", false,-1);
    tracep->declBit(c+720,"lsr1_d", false,-1);
    tracep->declBit(c+721,"lsr2_d", false,-1);
    tracep->declBit(c+722,"lsr3_d", false,-1);
    tracep->declBit(c+723,"lsr4_d", false,-1);
    tracep->declBit(c+724,"lsr5_d", false,-1);
    tracep->declBit(c+725,"lsr6_d", false,-1);
    tracep->declBit(c+726,"lsr7_d", false,-1);
    tracep->declBit(c+727,"rls_int_d", false,-1);
    tracep->declBit(c+728,"thre_int_d", false,-1);
    tracep->declBit(c+729,"ms_int_d", false,-1);
    tracep->declBit(c+730,"ti_int_d", false,-1);
    tracep->declBit(c+731,"rda_int_d", false,-1);
    tracep->declBit(c+732,"rls_int_rise", false,-1);
    tracep->declBit(c+733,"thre_int_rise", false,-1);
    tracep->declBit(c+734,"ms_int_rise", false,-1);
    tracep->declBit(c+735,"ti_int_rise", false,-1);
    tracep->declBit(c+736,"rda_int_rise", false,-1);
    tracep->declBit(c+737,"rls_int_pnd", false,-1);
    tracep->declBit(c+738,"rda_int_pnd", false,-1);
    tracep->declBit(c+739,"thre_int_pnd", false,-1);
    tracep->declBit(c+740,"ms_int_pnd", false,-1);
    tracep->declBit(c+741,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1832,"Tp", false,-1, 31,0);
    tracep->declBus(c+1832,"width", false,-1, 31,0);
    tracep->declBus(c+1763,"init_value", false,-1, 0,0);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1715,"stage1_rst_i", false,-1);
    tracep->declBit(c+1720,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1647,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+660,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+742,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBus(c+665,"lcr", false,-1, 7,0);
    tracep->declBit(c+705,"rf_pop", false,-1);
    tracep->declBit(c+717,"srx_pad_i", false,-1);
    tracep->declBit(c+659,"enable", false,-1);
    tracep->declBit(c+674,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+712,"counter_t", false,-1, 9,0);
    tracep->declBus(c+708,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1694,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+684,"rf_overrun", false,-1);
    tracep->declBit(c+706,"rf_error_bit", false,-1);
    tracep->declBus(c+711,"rstate", false,-1, 3,0);
    tracep->declBit(c+707,"rf_push_pulse", false,-1);
    tracep->declBus(c+743,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+744,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+745,"rshift", false,-1, 7,0);
    tracep->declBit(c+746,"rparity", false,-1);
    tracep->declBit(c+747,"rparity_error", false,-1);
    tracep->declBit(c+748,"rframing_error", false,-1);
    tracep->declBit(c+749,"rbit_in", false,-1);
    tracep->declBit(c+750,"rparity_xor", false,-1);
    tracep->declBus(c+751,"counter_b", false,-1, 7,0);
    tracep->declBit(c+752,"rf_push_q", false,-1);
    tracep->declBus(c+753,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+754,"rf_push", false,-1);
    tracep->declBit(c+755,"break_error", false,-1);
    tracep->declBit(c+756,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+757,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+758,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+759,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1722,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1764,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1765,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1766,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1767,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1768,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1769,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1770,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1771,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1772,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1773,"sr_push", false,-1, 3,0);
    tracep->declBus(c+760,"toc_value", false,-1, 9,0);
    tracep->declBus(c+761,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1833,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1834,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1776,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1835,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBit(c+707,"push", false,-1);
    tracep->declBit(c+705,"pop", false,-1);
    tracep->declBus(c+753,"data_in", false,-1, 10,0);
    tracep->declBit(c+674,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1694,"data_out", false,-1, 10,0);
    tracep->declBit(c+684,"overrun", false,-1);
    tracep->declBus(c+708,"count", false,-1, 4,0);
    tracep->declBit(c+706,"error_bit", false,-1);
    tracep->declBus(c+1695,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+762+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+778,"top", false,-1, 3,0);
    tracep->declBus(c+779,"bottom", false,-1, 3,0);
    tracep->declBus(c+780,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+781,"word0", false,-1, 2,0);
    tracep->declBus(c+782,"word1", false,-1, 2,0);
    tracep->declBus(c+783,"word2", false,-1, 2,0);
    tracep->declBus(c+784,"word3", false,-1, 2,0);
    tracep->declBus(c+785,"word4", false,-1, 2,0);
    tracep->declBus(c+786,"word5", false,-1, 2,0);
    tracep->declBus(c+787,"word6", false,-1, 2,0);
    tracep->declBus(c+788,"word7", false,-1, 2,0);
    tracep->declBus(c+789,"word8", false,-1, 2,0);
    tracep->declBus(c+790,"word9", false,-1, 2,0);
    tracep->declBus(c+791,"word10", false,-1, 2,0);
    tracep->declBus(c+792,"word11", false,-1, 2,0);
    tracep->declBus(c+793,"word12", false,-1, 2,0);
    tracep->declBus(c+794,"word13", false,-1, 2,0);
    tracep->declBus(c+795,"word14", false,-1, 2,0);
    tracep->declBus(c+796,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1776,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1818,"data_width", false,-1, 31,0);
    tracep->declBus(c+1834,"depth", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+707,"we", false,-1);
    tracep->declBus(c+778,"a", false,-1, 3,0);
    tracep->declBus(c+779,"dpra", false,-1, 3,0);
    tracep->declBus(c+797,"di", false,-1, 7,0);
    tracep->declBus(c+1695,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+423+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBus(c+665,"lcr", false,-1, 7,0);
    tracep->declBit(c+704,"tf_push", false,-1);
    tracep->declBus(c+1613,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+659,"enable", false,-1);
    tracep->declBit(c+675,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+716,"stx_pad_o", false,-1);
    tracep->declBus(c+710,"tstate", false,-1, 2,0);
    tracep->declBus(c+709,"tf_count", false,-1, 4,0);
    tracep->declBus(c+798,"counter", false,-1, 4,0);
    tracep->declBus(c+799,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+800,"shift_out", false,-1, 6,0);
    tracep->declBit(c+801,"stx_o_tmp", false,-1);
    tracep->declBit(c+802,"parity_xor", false,-1);
    tracep->declBit(c+803,"tf_pop", false,-1);
    tracep->declBit(c+804,"bit_out", false,-1);
    tracep->declBus(c+1613,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1696,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+805,"tf_overrun", false,-1);
    tracep->declBus(c+1716,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1705,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1717,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1718,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1719,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1829,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1818,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1834,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1776,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1835,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBit(c+704,"push", false,-1);
    tracep->declBit(c+803,"pop", false,-1);
    tracep->declBus(c+1613,"data_in", false,-1, 7,0);
    tracep->declBit(c+675,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1696,"data_out", false,-1, 7,0);
    tracep->declBit(c+805,"overrun", false,-1);
    tracep->declBus(c+709,"count", false,-1, 4,0);
    tracep->declBus(c+806,"top", false,-1, 3,0);
    tracep->declBus(c+807,"bottom", false,-1, 3,0);
    tracep->declBus(c+808,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1776,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1818,"data_width", false,-1, 31,0);
    tracep->declBus(c+1834,"depth", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+704,"we", false,-1);
    tracep->declBus(c+806,"a", false,-1, 3,0);
    tracep->declBus(c+807,"dpra", false,-1, 3,0);
    tracep->declBus(c+1613,"di", false,-1, 7,0);
    tracep->declBus(c+1696,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+439+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1393,"auto_in_psel", false,-1);
    tracep->declBit(c+1394,"auto_in_penable", false,-1);
    tracep->declBit(c+1388,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1395,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1387,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1389,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+510,"auto_in_pready", false,-1);
    tracep->declBit(c+1711,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1712,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1641,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1642,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1643,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1644,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1645,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1646,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1597,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1393,"in_psel", false,-1);
    tracep->declBit(c+1394,"in_penable", false,-1);
    tracep->declBus(c+1387,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1388,"in_pwrite", false,-1);
    tracep->declBus(c+1389,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1390,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+510,"in_pready", false,-1);
    tracep->declBus(c+1712,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1711,"in_pslverr", false,-1);
    tracep->declBus(c+1641,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1642,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1643,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1644,"vga_hsync", false,-1);
    tracep->declBit(c+1645,"vga_vsync", false,-1);
    tracep->declBit(c+1646,"vga_valid", false,-1);
    tracep->declBit(c+1614,"is_write", false,-1);
    tracep->declBus(c+1615,"addr", false,-1, 31,0);
    tracep->declBit(c+510,"ready", false,-1);
    tracep->declBus(c+809,"i", false,-1, 31,0);
    tracep->declBus(c+1836,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1837,"h_active", false,-1, 31,0);
    tracep->declBus(c+1838,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1839,"h_total", false,-1, 31,0);
    tracep->declBus(c+1759,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1840,"v_active", false,-1, 31,0);
    tracep->declBus(c+1841,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1842,"v_total", false,-1, 31,0);
    tracep->declBus(c+810,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+455,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+811,"h_valid", false,-1);
    tracep->declBit(c+456,"v_valid", false,-1);
    tracep->declBus(c+812,"h_addr", false,-1, 9,0);
    tracep->declBus(c+457,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1697,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+499,"sck", false,-1);
    tracep->declBit(c+957,"ss", false,-1);
    tracep->declBit(c+942,"mosi", false,-1);
    tracep->declBit(c+937,"miso", false,-1);
    tracep->declBus(c+938,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+939,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+940,"counter", false,-1, 2,0);
    tracep->declBit(c+941,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+499,"sck", false,-1);
    tracep->declBit(c+813,"ss", false,-1);
    tracep->declBit(c+942,"mosi", false,-1);
    tracep->declBit(c+1698,"miso", false,-1);
    tracep->declBit(c+813,"reset", false,-1);
    tracep->declBus(c+931,"state", false,-1, 2,0);
    tracep->declBus(c+932,"counter", false,-1, 7,0);
    tracep->declBus(c+933,"cmd", false,-1, 7,0);
    tracep->declBus(c+934,"addr", false,-1, 23,0);
    tracep->declBus(c+935,"data", false,-1, 31,0);
    tracep->declBit(c+936,"ren", false,-1);
    tracep->declBus(c+1699,"rdata", false,-1, 31,0);
    tracep->declBus(c+1700,"raddr", false,-1, 31,0);
    tracep->declBus(c+1701,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+499,"clock", false,-1);
    tracep->declBit(c+936,"valid", false,-1);
    tracep->declBus(c+933,"cmd", false,-1, 7,0);
    tracep->declBus(c+1700,"addr", false,-1, 31,0);
    tracep->declBus(c+1699,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1623,"sck", false,-1);
    tracep->declBit(c+1624,"ce_n", false,-1);
    tracep->declBus(c+1650,"dio", false,-1, 3,0);
    tracep->declBit(c+1624,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+975,"cmd", false,-1, 7,0);
    tracep->declBus(c+976,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+977+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1702,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1703,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+981,"ren", false,-1);
    tracep->declBit(c+982,"wen", false,-1);
    tracep->declBus(c+983,"len", false,-1, 7,0);
    tracep->declBus(c+1704,"rdata", false,-1, 31,0);
    tracep->declBus(c+984,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1623,"clock", false,-1);
    tracep->declBit(c+981,"ren", false,-1);
    tracep->declBit(c+982,"wen", false,-1);
    tracep->declBus(c+975,"cmd", false,-1, 7,0);
    tracep->declBus(c+984,"saddr", false,-1, 31,0);
    tracep->declBus(c+1704,"rdata", false,-1, 31,0);
    tracep->declBus(c+985,"wdata", false,-1, 31,0);
    tracep->declBus(c+983,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1651,"clk", false,-1);
    tracep->declBit(c+501,"cke", false,-1);
    tracep->declBit(c+943,"cs", false,-1);
    tracep->declBit(c+944,"ras", false,-1);
    tracep->declBit(c+945,"cas", false,-1);
    tracep->declBit(c+946,"we", false,-1);
    tracep->declBus(c+947,"a", false,-1, 12,0);
    tracep->declBus(c+958,"ba", false,-1, 1,0);
    tracep->declBus(c+959,"dqm", false,-1, 1,0);
    tracep->declBus(c+973,"dq", false,-1, 15,0);
    tracep->declBit(c+960,"reset", false,-1);
    tracep->declBus(c+820,"state", false,-1, 2,0);
    tracep->declBus(c+821,"counter", false,-1, 7,0);
    tracep->declBus(c+822,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1843,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+823,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+824,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+961,"nop", false,-1);
    tracep->declBit(c+962,"active", false,-1);
    tracep->declBit(c+963,"precharge", false,-1);
    tracep->declBit(c+964,"read", false,-1);
    tracep->declBit(c+965,"write", false,-1);
    tracep->declBit(c+966,"burstterm", false,-1);
    tracep->declBit(c+967,"autorefresh", false,-1);
    tracep->declBit(c+968,"mode", false,-1);
    tracep->declBus(c+825,"test", false,-1, 15,0);
    tracep->declBus(c+826,"test1", false,-1, 15,0);
    tracep->declBus(c+827,"sense", false,-1, 31,0);
    tracep->declBit(c+828,"write_burst_mode", false,-1);
    tracep->declBus(c+829,"op_mode", false,-1, 1,0);
    tracep->declBus(c+830,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+831,"burst_type", false,-1);
    tracep->declBus(c+832,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+833,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+834,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+835,"bank", false,-1, 1,0);
    tracep->declBus(c+836,"row", false,-1, 12,0);
    tracep->declBus(c+837,"column", false,-1, 8,0);
    tracep->declBus(c+838,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+839,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+840,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1651,"clk", false,-1);
    tracep->declBit(c+501,"cke", false,-1);
    tracep->declBit(c+943,"cs", false,-1);
    tracep->declBit(c+944,"ras", false,-1);
    tracep->declBit(c+945,"cas", false,-1);
    tracep->declBit(c+946,"we", false,-1);
    tracep->declBus(c+947,"a", false,-1, 12,0);
    tracep->declBus(c+958,"ba", false,-1, 1,0);
    tracep->declBus(c+969,"dqm", false,-1, 1,0);
    tracep->declBus(c+974,"dq", false,-1, 15,0);
    tracep->declBit(c+960,"reset", false,-1);
    tracep->declBus(c+841,"state", false,-1, 2,0);
    tracep->declBus(c+842,"counter", false,-1, 7,0);
    tracep->declBus(c+843,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1844,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+844,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+845,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+961,"nop", false,-1);
    tracep->declBit(c+962,"active", false,-1);
    tracep->declBit(c+963,"precharge", false,-1);
    tracep->declBit(c+964,"read", false,-1);
    tracep->declBit(c+965,"write", false,-1);
    tracep->declBit(c+966,"burstterm", false,-1);
    tracep->declBit(c+967,"autorefresh", false,-1);
    tracep->declBit(c+968,"mode", false,-1);
    tracep->declBus(c+846,"test", false,-1, 15,0);
    tracep->declBus(c+847,"test1", false,-1, 15,0);
    tracep->declBus(c+848,"sense", false,-1, 31,0);
    tracep->declBit(c+849,"write_burst_mode", false,-1);
    tracep->declBus(c+850,"op_mode", false,-1, 1,0);
    tracep->declBus(c+851,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+852,"burst_type", false,-1);
    tracep->declBus(c+853,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+854,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+855,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+856,"bank", false,-1, 1,0);
    tracep->declBus(c+857,"row", false,-1, 12,0);
    tracep->declBus(c+858,"column", false,-1, 8,0);
    tracep->declBus(c+859,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+860,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+861,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1651,"clk", false,-1);
    tracep->declBit(c+501,"cke", false,-1);
    tracep->declBit(c+943,"cs", false,-1);
    tracep->declBit(c+944,"ras", false,-1);
    tracep->declBit(c+945,"cas", false,-1);
    tracep->declBit(c+946,"we", false,-1);
    tracep->declBus(c+947,"a", false,-1, 12,0);
    tracep->declBus(c+958,"ba", false,-1, 1,0);
    tracep->declBus(c+970,"dqm", false,-1, 1,0);
    tracep->declBus(c+973,"dq", false,-1, 15,0);
    tracep->declBit(c+960,"reset", false,-1);
    tracep->declBus(c+862,"state", false,-1, 2,0);
    tracep->declBus(c+863,"counter", false,-1, 7,0);
    tracep->declBus(c+864,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1845,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+865,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+866,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+961,"nop", false,-1);
    tracep->declBit(c+962,"active", false,-1);
    tracep->declBit(c+963,"precharge", false,-1);
    tracep->declBit(c+964,"read", false,-1);
    tracep->declBit(c+965,"write", false,-1);
    tracep->declBit(c+966,"burstterm", false,-1);
    tracep->declBit(c+967,"autorefresh", false,-1);
    tracep->declBit(c+968,"mode", false,-1);
    tracep->declBus(c+867,"test", false,-1, 15,0);
    tracep->declBus(c+868,"test1", false,-1, 15,0);
    tracep->declBus(c+869,"sense", false,-1, 31,0);
    tracep->declBit(c+870,"write_burst_mode", false,-1);
    tracep->declBus(c+871,"op_mode", false,-1, 1,0);
    tracep->declBus(c+872,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+873,"burst_type", false,-1);
    tracep->declBus(c+874,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+875,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+876,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+877,"bank", false,-1, 1,0);
    tracep->declBus(c+878,"row", false,-1, 12,0);
    tracep->declBus(c+879,"column", false,-1, 8,0);
    tracep->declBus(c+880,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+881,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+882,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1651,"clk", false,-1);
    tracep->declBit(c+501,"cke", false,-1);
    tracep->declBit(c+943,"cs", false,-1);
    tracep->declBit(c+944,"ras", false,-1);
    tracep->declBit(c+945,"cas", false,-1);
    tracep->declBit(c+946,"we", false,-1);
    tracep->declBus(c+947,"a", false,-1, 12,0);
    tracep->declBus(c+958,"ba", false,-1, 1,0);
    tracep->declBus(c+971,"dqm", false,-1, 1,0);
    tracep->declBus(c+974,"dq", false,-1, 15,0);
    tracep->declBit(c+960,"reset", false,-1);
    tracep->declBus(c+883,"state", false,-1, 2,0);
    tracep->declBus(c+884,"counter", false,-1, 7,0);
    tracep->declBus(c+885,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1846,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+886,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+887,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+961,"nop", false,-1);
    tracep->declBit(c+962,"active", false,-1);
    tracep->declBit(c+963,"precharge", false,-1);
    tracep->declBit(c+964,"read", false,-1);
    tracep->declBit(c+965,"write", false,-1);
    tracep->declBit(c+966,"burstterm", false,-1);
    tracep->declBit(c+967,"autorefresh", false,-1);
    tracep->declBit(c+968,"mode", false,-1);
    tracep->declBus(c+888,"test", false,-1, 15,0);
    tracep->declBus(c+889,"test1", false,-1, 15,0);
    tracep->declBus(c+890,"sense", false,-1, 31,0);
    tracep->declBit(c+891,"write_burst_mode", false,-1);
    tracep->declBus(c+892,"op_mode", false,-1, 1,0);
    tracep->declBus(c+893,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+894,"burst_type", false,-1);
    tracep->declBus(c+895,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+896,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+897,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+898,"bank", false,-1, 1,0);
    tracep->declBus(c+899,"row", false,-1, 12,0);
    tracep->declBus(c+900,"column", false,-1, 8,0);
    tracep->declBus(c+901,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+902,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+903,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arlen),8);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arid),4);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arsize),3);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arburst),2);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_id),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_id),32);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex),7);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wen_ex));
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[0]),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[1]),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[2]),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[3]),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[4]),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[5]),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[6]),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[7]),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[0]),29);
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[1]),29);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[2]),29);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[3]),29);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[4]),29);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[5]),29);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[6]),29);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[7]),29);
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__enable));
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk2__DOT__a),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid_reg));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__isCHazard_reg));
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+457,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullBit(oldp+458,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+459,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+460,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+461,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+462,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+463,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+464,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))))));
    bufp->fullBit(oldp+465,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullCData(oldp+466,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+467,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+468,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                        >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+469,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+470,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+471,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+472,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))));
    bufp->fullCData(oldp+473,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),4);
    bufp->fullCData(oldp+474,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+475,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+477,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ls),32);
    bufp->fullIData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ls),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ls),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ls),32);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls),5);
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ls));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state));
    bufp->fullQData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__done_reg));
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullCData(oldp+497,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls))),4);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+525,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+527,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+557,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+558,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+561,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+562,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+567,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+586,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+587,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+589,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+590,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+591,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+592,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+593,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+601,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+636,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+637,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+638,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+639,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+640,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+641,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+642,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+646,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+648,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+649,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+651,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+655,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+656,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+658,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+676,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+677,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+678,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+679,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+680,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+681,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+682,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+685,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+686,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+687,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+706,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+713,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+732,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+733,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+734,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+735,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+736,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+755,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+756,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+757,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+758,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+759,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+761,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+780,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+797,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+808,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+812,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+823,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+824,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+825,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+826,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+827,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+828,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+829,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+830,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+831,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+832,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+833,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+834,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+836,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+837,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+843,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+844,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+845,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+846,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+847,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+848,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+849,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+850,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+851,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+852,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+853,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+854,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+855,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+857,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+858,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+864,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+866,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+867,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+868,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+869,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+870,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+871,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+872,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+873,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+874,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+875,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+876,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+878,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+879,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+885,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+886,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+887,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+888,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+889,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+890,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+891,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+892,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+893,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+894,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+895,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+896,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+897,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+899,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+900,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullBit(oldp+904,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+905,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullIData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),5);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_id));
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_sel_id),4);
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_id),32);
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_id),32);
    bufp->fullIData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_id),32);
    bufp->fullIData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),5);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex),32);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
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
    bufp->fullIData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ls),32);
    bufp->fullIData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ls),32);
    bufp->fullIData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ls),32);
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ls),32);
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_ls));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_ls));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_ls));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_ls));
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),3);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+1022,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en)
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),7);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id),32);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_id));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_id));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_id));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_id));
    bufp->fullBit(oldp+1034,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ex),32);
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ex),32);
    bufp->fullIData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ex),32);
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_ex));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_ex));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_ex));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_ex));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_read_ex));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_write_ex));
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex),32);
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex),32);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wmask_ex),4);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awsize_ex),3);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arsize_ex),3);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awlen_ex),8);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arlen_ex),8);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awburst_ex),2);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arburst_ex),2);
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+1058,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                >> 3U)),29);
    bufp->fullBit(oldp+1059,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    >> 2U))));
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__already),4);
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+1062,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullIData(oldp+1064,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+1066,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_waddr),32);
    bufp->fullIData(oldp+1068,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0)
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
    bufp->fullCData(oldp+1069,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0) 
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
    bufp->fullIData(oldp+1070,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h46116b93__0
                                 : 0U)),32);
    bufp->fullCData(oldp+1071,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                 ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                          ? 1U : 2U))),3);
    bufp->fullCData(oldp+1072,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                 ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                             | (5U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1073,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1074,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+1078,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),7);
    bufp->fullCData(oldp+1079,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
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
    bufp->fullCData(oldp+1080,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                      >> 0xcU))),3);
    bufp->fullIData(oldp+1081,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1082,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+1083,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1084,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1085,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7),7);
    bufp->fullCData(oldp+1088,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                         >> 0x14U))),5);
    bufp->fullBit(oldp+1089,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
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
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__alu_sel),4);
    bufp->fullIData(oldp+1091,(((((0x13U == (0x7fU 
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
    bufp->fullIData(oldp+1092,((((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
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
                                                  & vlSelf->__VdfgTmp_hb822d0a9__0))
                                                 : 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h23283275__0)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                                  : 0U))))))),32);
    bufp->fullBit(oldp+1093,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c5312ed__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h4616dcf9__0))));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mstatus_wen));
    bufp->fullBit(oldp+1095,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c6f122f__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h4616dcf9__0))));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mtvec_wen));
    bufp->fullBit(oldp+1097,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)));
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata_reg),32);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5),4);
    bufp->fullCData(oldp+1100,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))),4);
    bufp->fullCData(oldp+1101,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))),4);
    bufp->fullIData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[0U]),32);
    bufp->fullCData(oldp+1103,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0)),8);
    bufp->fullCData(oldp+1104,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))),3);
    bufp->fullCData(oldp+1105,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0))),2);
    bufp->fullCData(oldp+1106,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))),4);
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[0U]),32);
    bufp->fullCData(oldp+1108,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0)),8);
    bufp->fullCData(oldp+1109,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))),3);
    bufp->fullCData(oldp+1110,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0))),2);
    bufp->fullCData(oldp+1111,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))),4);
    bufp->fullBit(oldp+1112,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+1113,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0))));
    bufp->fullBit(oldp+1114,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0))));
    bufp->fullBit(oldp+1115,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0))));
    bufp->fullBit(oldp+1116,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0))));
    bufp->fullBit(oldp+1117,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0))));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1122,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))))),16);
    bufp->fullSData(oldp+1123,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))))),16);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullBit(oldp+1134,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1135,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1136,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[2U]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]),32);
    bufp->fullCData(oldp+1139,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1140,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1141,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1142,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1143,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1144,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1145,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1146,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1147,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1148,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1149,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1150,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1151,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1152,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1153,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 2U))));
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [0U][0U]),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [0U][1U]),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [0U][2U]),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [0U][3U]),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [1U][0U]),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [1U][1U]),32);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [1U][2U]),32);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [1U][3U]),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [2U][0U]),32);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [2U][1U]),32);
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [2U][2U]),32);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [2U][3U]),32);
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [3U][0U]),32);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [3U][1U]),32);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [3U][2U]),32);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                               [3U][3U]),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [0U][0U]),28);
    bufp->fullIData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [0U][1U]),28);
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [0U][2U]),28);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [0U][3U]),28);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [1U][0U]),28);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [1U][1U]),28);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [1U][2U]),28);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [1U][3U]),28);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [2U][0U]),28);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [2U][1U]),28);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [2U][2U]),28);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [2U][3U]),28);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [3U][0U]),28);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [3U][1U]),28);
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [3U][2U]),28);
    bufp->fullIData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                               [3U][3U]),28);
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),4);
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),4);
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),4);
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),4);
    bufp->fullIData(oldp+1190,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                >> 4U)),28);
    bufp->fullCData(oldp+1191,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1192,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state),2);
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m),2);
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1218,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1219,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[1U]),32);
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[1U]),32);
    bufp->fullCData(oldp+1223,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1224,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1225,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1226,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1227,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1228,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1229,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1230,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1231,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1232,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1233,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1234,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1235,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1236,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1237,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 1U))));
    bufp->fullCData(oldp+1238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1240,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))
                                 : 0U)),4);
    bufp->fullBit(oldp+1241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+1242,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1243,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullIData(oldp+1244,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullIData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1249,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h8362b754__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1265,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]),32);
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1271,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1273,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1275,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1291,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1294,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1295,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1296,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1297,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1307,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1308,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1309,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1314,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1316,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1317,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullIData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[2U]),32);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isRAW));
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[1U]),32);
    bufp->fullIData(oldp+1332,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1335,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1336,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullIData(oldp+1337,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]
                                 : 0U)),32);
    bufp->fullBit(oldp+1338,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1339,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1340,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1341,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1342,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1343,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1344,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1345,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1346,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1347,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1348,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1349,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1350,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1351,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1352,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1353,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1354,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1355,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1356,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1357,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1358,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1359,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1360,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1361,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1362,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1363,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1364,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1365,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1366,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1367,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1368,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1369,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1370,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1371,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1372,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1373,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1374,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1375,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullBit(oldp+1376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_id));
    bufp->fullIData(oldp+1380,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                >> 4U)),28);
    bufp->fullCData(oldp+1381,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1382,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1387,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1392,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1393,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1394,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1396,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1398,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1399,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1401,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1404,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1405,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1406,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1411,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1414,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1419,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1421,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1422,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullSData(oldp+1474,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1475,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1499,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1500,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1523,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1524,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1525,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1526,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1527,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1528,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1529,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1530,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1531,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1532,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1533,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1534,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1535,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1536,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1537,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1538,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1539,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1540,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1541,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1542,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1543,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1544,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1545,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1546,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1547,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1548,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1549,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1550,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1551,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1552,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1553,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullIData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata),32);
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1580,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1585,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1589,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1593,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1594,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1595,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1605,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1608,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1615,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullIData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+1617,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                >> 3U)),29);
    bufp->fullBit(oldp+1618,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                    >> 2U))));
    bufp->fullBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullCData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit),4);
    bufp->fullCData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),4);
    bufp->fullCData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit),4);
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1627,(vlSelf->clock));
    bufp->fullBit(oldp+1628,(vlSelf->reset));
    bufp->fullSData(oldp+1629,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1630,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1631,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1632,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1633,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1634,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1635,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1636,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1637,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1638,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1639,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1640,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1641,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1642,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1643,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1644,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1645,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1646,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1647,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1648,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1649,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1650,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1651,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1652,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1653,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1654,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1656,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1657,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullCData(oldp+1658,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1659,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1660,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1661,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1662,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1663,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0)))));
    bufp->fullCData(oldp+1664,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullIData(oldp+1665,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1666,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1667,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1669,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit))
                                 ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg
                                [(7U & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc) 
                                        + VL_CLOG2_I((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit))))])),32);
    bufp->fullCData(oldp+1670,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullCData(oldp+1671,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullBit(oldp+1672,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullIData(oldp+1673,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex
                                 : 0U)),32);
    bufp->fullCData(oldp+1674,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullCData(oldp+1675,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullBit(oldp+1676,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullIData(oldp+1677,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
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
    bufp->fullIData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullBit(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullIData(oldp+1680,(((((- (IData)((0x13U 
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
    bufp->fullBit(oldp+1681,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                              & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullIData(oldp+1682,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c5312ed__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mstatus_wen)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c6f122f__0)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mtvec_wen)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec
                                             : 0U))))),32);
    bufp->fullBit(oldp+1683,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid))));
    bufp->fullIData(oldp+1684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex)),32);
    bufp->fullCData(oldp+1685,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1686,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullBit(oldp+1687,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                   : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))))));
    bufp->fullIData(oldp+1688,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1692,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1693,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullSData(oldp+1694,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1697,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1698,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1699,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1700,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1703,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1704,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1705,(1U),3);
    bufp->fullCData(oldp+1706,(0U),2);
    bufp->fullCData(oldp+1707,(1U),2);
    bufp->fullCData(oldp+1708,(2U),2);
    bufp->fullCData(oldp+1709,(3U),2);
    bufp->fullSData(oldp+1710,(0xaU),11);
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1715,(0U));
    bufp->fullCData(oldp+1716,(0U),3);
    bufp->fullCData(oldp+1717,(2U),3);
    bufp->fullCData(oldp+1718,(3U),3);
    bufp->fullCData(oldp+1719,(4U),3);
    bufp->fullBit(oldp+1720,(1U));
    bufp->fullBit(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1722,(0U),4);
    bufp->fullIData(oldp+1723,(0U),32);
    bufp->fullCData(oldp+1724,(0U),8);
    bufp->fullBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1735,(0U),32);
    bufp->fullCData(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bid),4);
    bufp->fullCData(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bresp),2);
    bufp->fullBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_awready));
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wready));
    bufp->fullBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bvalid));
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullIData(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awaddr),32);
    bufp->fullIData(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wdata),32);
    bufp->fullCData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wstrb),4);
    bufp->fullCData(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awlen),8);
    bufp->fullCData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awid),4);
    bufp->fullCData(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awsize),3);
    bufp->fullCData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awburst),2);
    bufp->fullBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awvalid));
    bufp->fullBit(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wvalid));
    bufp->fullBit(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_bready));
    bufp->fullBit(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wlast));
    bufp->fullCData(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1758,(3U),32);
    bufp->fullIData(oldp+1759,(2U),32);
    bufp->fullIData(oldp+1760,(0x2000000U),32);
    bufp->fullIData(oldp+1761,(0x2000004U),32);
    bufp->fullBit(oldp+1762,(0U));
    bufp->fullBit(oldp+1763,(1U));
    bufp->fullCData(oldp+1764,(1U),4);
    bufp->fullCData(oldp+1765,(2U),4);
    bufp->fullCData(oldp+1766,(3U),4);
    bufp->fullCData(oldp+1767,(4U),4);
    bufp->fullCData(oldp+1768,(5U),4);
    bufp->fullCData(oldp+1769,(6U),4);
    bufp->fullCData(oldp+1770,(7U),4);
    bufp->fullCData(oldp+1771,(8U),4);
    bufp->fullCData(oldp+1772,(9U),4);
    bufp->fullCData(oldp+1773,(0xaU),4);
    bufp->fullCData(oldp+1774,(0xbU),4);
    bufp->fullCData(oldp+1775,(0xcU),4);
    bufp->fullIData(oldp+1776,(4U),32);
    bufp->fullIData(oldp+1777,(0x20U),32);
    bufp->fullIData(oldp+1778,(0x1000000U),32);
    bufp->fullIData(oldp+1779,(0x1000004U),32);
    bufp->fullCData(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY));
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID));
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1788,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1789,(0x1800U),32);
    bufp->fullIData(oldp+1790,(0x79737978U),32);
    bufp->fullCData(oldp+1791,(4U),8);
    bufp->fullCData(oldp+1792,(8U),8);
    bufp->fullCData(oldp+1793,(3U),8);
    bufp->fullCData(oldp+1794,(0x9fU),8);
    bufp->fullCData(oldp+1795,(0x25U),8);
    bufp->fullCData(oldp+1796,(0xdU),8);
    bufp->fullCData(oldp+1797,(0x99U),8);
    bufp->fullCData(oldp+1798,(0x49U),8);
    bufp->fullCData(oldp+1799,(0x41U),8);
    bufp->fullCData(oldp+1800,(0x1fU),8);
    bufp->fullCData(oldp+1801,(1U),8);
    bufp->fullCData(oldp+1802,(9U),8);
    bufp->fullCData(oldp+1803,(0x11U),8);
    bufp->fullCData(oldp+1804,(0xc1U),8);
    bufp->fullCData(oldp+1805,(0x63U),8);
    bufp->fullCData(oldp+1806,(0x85U),8);
    bufp->fullCData(oldp+1807,(0x61U),8);
    bufp->fullCData(oldp+1808,(0x71U),8);
    bufp->fullCData(oldp+1809,(0xf0U),8);
    bufp->fullCData(oldp+1810,(0xe0U),8);
    bufp->fullCData(oldp+1811,(0x15U),8);
    bufp->fullCData(oldp+1812,(0xebU),8);
    bufp->fullCData(oldp+1813,(0x38U),8);
    bufp->fullIData(oldp+1814,(0x64U),32);
    bufp->fullIData(oldp+1815,(0x18U),32);
    bufp->fullIData(oldp+1816,(9U),32);
    bufp->fullIData(oldp+1817,(6U),32);
    bufp->fullIData(oldp+1818,(8U),32);
    bufp->fullIData(oldp+1819,(0xdU),32);
    bufp->fullIData(oldp+1820,(0x2000U),32);
    bufp->fullIData(oldp+1821,(0x2710U),32);
    bufp->fullIData(oldp+1822,(0x30cU),32);
    bufp->fullSData(oldp+1823,(0x20U),13);
    bufp->fullIData(oldp+1824,(0xaU),32);
    bufp->fullIData(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1826,(0x11U),32);
    bufp->fullIData(oldp+1827,(0x30000000U),32);
    bufp->fullIData(oldp+1828,(0x3fffffffU),32);
    bufp->fullCData(oldp+1829,(5U),3);
    bufp->fullCData(oldp+1830,(6U),3);
    bufp->fullCData(oldp+1831,(7U),3);
    bufp->fullIData(oldp+1832,(1U),32);
    bufp->fullIData(oldp+1833,(0xbU),32);
    bufp->fullIData(oldp+1834,(0x10U),32);
    bufp->fullIData(oldp+1835,(5U),32);
    bufp->fullIData(oldp+1836,(0x60U),32);
    bufp->fullIData(oldp+1837,(0x90U),32);
    bufp->fullIData(oldp+1838,(0x310U),32);
    bufp->fullIData(oldp+1839,(0x320U),32);
    bufp->fullIData(oldp+1840,(0x23U),32);
    bufp->fullIData(oldp+1841,(0x203U),32);
    bufp->fullIData(oldp+1842,(0x20dU),32);
    bufp->fullSData(oldp+1843,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1844,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1845,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1846,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
