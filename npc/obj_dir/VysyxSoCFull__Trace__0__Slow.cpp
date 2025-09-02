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
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBus(c+1514,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1515,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1516,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1517,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1518,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1519,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1520,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1521,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1522,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1523,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1524,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1525,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1526,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1527,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1528,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1529,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1530,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1531,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1532,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1533,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBus(c+1514,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1515,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1516,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1517,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1518,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1519,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1520,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1521,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1522,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1523,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1524,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1525,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1526,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1527,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1528,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1529,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1530,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1531,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1532,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1533,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+616,"spi_sck", false,-1);
    tracep->declBus(c+617,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1212,"spi_mosi", false,-1);
    tracep->declBit(c+1534,"spi_miso", false,-1);
    tracep->declBit(c+1532,"uart_rx", false,-1);
    tracep->declBit(c+1533,"uart_tx", false,-1);
    tracep->declBit(c+1508,"psram_sck", false,-1);
    tracep->declBit(c+1509,"psram_ce_n", false,-1);
    tracep->declBus(c+1535,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1536,"sdram_clk", false,-1);
    tracep->declBit(c+618,"sdram_cke", false,-1);
    tracep->declBit(c+1213,"sdram_cs", false,-1);
    tracep->declBit(c+1214,"sdram_ras", false,-1);
    tracep->declBit(c+1215,"sdram_cas", false,-1);
    tracep->declBit(c+1216,"sdram_we", false,-1);
    tracep->declBus(c+1217,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1218,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+619,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1242,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1514,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1515,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1516,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1517,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1518,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1519,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1520,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1521,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1522,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1523,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1524,"ps2_clk", false,-1);
    tracep->declBit(c+1525,"ps2_data", false,-1);
    tracep->declBus(c+1526,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1527,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1528,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1529,"vga_hsync", false,-1);
    tracep->declBit(c+1530,"vga_vsync", false,-1);
    tracep->declBit(c+1531,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBus(c+1297,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1298,"in_psel", false,-1);
    tracep->declBit(c+1205,"in_penable", false,-1);
    tracep->declBus(c+1581,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1299,"in_pwrite", false,-1);
    tracep->declBus(c+1300,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1301,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+620,"in_pready", false,-1);
    tracep->declBus(c+621,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+622,"in_pslverr", false,-1);
    tracep->declBus(c+1304,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1315,"out_psel", false,-1);
    tracep->declBit(c+1316,"out_penable", false,-1);
    tracep->declBus(c+1317,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1318,"out_pwrite", false,-1);
    tracep->declBus(c+1319,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1321,"out_pready", false,-1);
    tracep->declBus(c+1537,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1322,"out_pslverr", false,-1);
    tracep->declBus(c+1582,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1583,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1584,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1585,"DELAY", false,-1, 1,0);
    tracep->declBus(c+623,"state", false,-1, 1,0);
    tracep->declBus(c+624,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+625,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+626,"pslverr_reg", false,-1);
    tracep->declBus(c+1586,"r", false,-1, 10,0);
    tracep->declBus(c+1584,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1315,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1316,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1318,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1304,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1317,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1321,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1322,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1537,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1323,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1325,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1317,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+627,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1587,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1588,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1326,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1327,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1305,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1317,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+628,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1589,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+629,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1328,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1329,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1305,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1317,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+630,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1590,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+631,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1330,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1331,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1304,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1317,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1591,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+1206,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1332,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1333,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1305,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1317,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1334,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1591,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1335,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1336,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1325,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1317,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1539,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1591,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1338,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1339,"sel_0", false,-1);
    tracep->declBit(c+1340,"sel_1", false,-1);
    tracep->declBit(c+1341,"sel_2", false,-1);
    tracep->declBit(c+1342,"sel_3", false,-1);
    tracep->declBit(c+1343,"sel_4", false,-1);
    tracep->declBit(c+1344,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1302,"auto_in_awready", false,-1);
    tracep->declBit(c+1026,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1027,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1028,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1029,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1302,"auto_in_wready", false,-1);
    tracep->declBit(c+1030,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1031,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1032,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1345,"auto_in_bready", false,-1);
    tracep->declBit(c+1346,"auto_in_bvalid", false,-1);
    tracep->declBus(c+69,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1540,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1303,"auto_in_arready", false,-1);
    tracep->declBit(c+1033,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1034,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1347,"auto_in_rready", false,-1);
    tracep->declBit(c+1348,"auto_in_rvalid", false,-1);
    tracep->declBus(c+70,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1541,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1540,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1298,"auto_out_psel", false,-1);
    tracep->declBit(c+1205,"auto_out_penable", false,-1);
    tracep->declBit(c+1299,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1297,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1301,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+620,"auto_out_pready", false,-1);
    tracep->declBit(c+622,"auto_out_pslverr", false,-1);
    tracep->declBus(c+621,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1205,"nodeOut_penable", false,-1);
    tracep->declBus(c+1207,"state", false,-1, 1,0);
    tracep->declBit(c+1303,"accept_read", false,-1);
    tracep->declBit(c+1302,"accept_write", false,-1);
    tracep->declBit(c+71,"is_write_r", false,-1);
    tracep->declBit(c+1299,"is_write", false,-1);
    tracep->declBus(c+70,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+69,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+72,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+73,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+74,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+75,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+632,"resp", false,-1, 1,0);
    tracep->declBus(c+76,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1540,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1348,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+77,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1346,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1256,"in_arready", false,-1);
    tracep->declBit(c+1037,"in_arvalid", false,-1);
    tracep->declBus(c+1038,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1349,"in_rready", false,-1);
    tracep->declBit(c+633,"in_rvalid", false,-1);
    tracep->declBus(c+634,"in_rid", false,-1, 3,0);
    tracep->declBus(c+635,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+636,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+637,"in_rlast", false,-1);
    tracep->declBit(c+1257,"in_awready", false,-1);
    tracep->declBit(c+1043,"in_awvalid", false,-1);
    tracep->declBus(c+1044,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1045,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1046,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1047,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1048,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1258,"in_wready", false,-1);
    tracep->declBit(c+1049,"in_wvalid", false,-1);
    tracep->declBus(c+1050,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1051,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"in_wlast", false,-1);
    tracep->declBit(c+1350,"in_bready", false,-1);
    tracep->declBit(c+638,"in_bvalid", false,-1);
    tracep->declBus(c+639,"in_bid", false,-1, 3,0);
    tracep->declBus(c+640,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1259,"out_arready", false,-1);
    tracep->declBit(c+1260,"out_arvalid", false,-1);
    tracep->declBus(c+1261,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1262,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1263,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1145,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1264,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1351,"out_rready", false,-1);
    tracep->declBit(c+641,"out_rvalid", false,-1);
    tracep->declBus(c+642,"out_rid", false,-1, 3,0);
    tracep->declBus(c+643,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1582,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+644,"out_rlast", false,-1);
    tracep->declBit(c+1265,"out_awready", false,-1);
    tracep->declBit(c+1266,"out_awvalid", false,-1);
    tracep->declBus(c+1267,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1268,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1146,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1270,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1271,"out_wready", false,-1);
    tracep->declBit(c+1272,"out_wvalid", false,-1);
    tracep->declBus(c+1147,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"out_wlast", false,-1);
    tracep->declBit(c+1542,"out_bready", false,-1);
    tracep->declBit(c+645,"out_bvalid", false,-1);
    tracep->declBus(c+642,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1582,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1592,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1581,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1593,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1594,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1595,"DELAY", false,-1, 2,0);
    tracep->declBus(c+646,"rstate", false,-1, 2,0);
    tracep->declBus(c+647,"wstate", false,-1, 2,0);
    tracep->declBus(c+648,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+649,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+650,"rvalid_reg", false,-1);
    tracep->declBus(c+651,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+652,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+656,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+657,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+658,"bvalid_reg", false,-1);
    tracep->declBus(c+659,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+660,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1586,"r", false,-1, 10,0);
    tracep->declBus(c+1584,"s", false,-1, 1,0);
    tracep->declBus(c+661,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+78,"auto_in_awready", false,-1);
    tracep->declBit(c+1053,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1044,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1045,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1046,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1047,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1048,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+79,"auto_in_wready", false,-1);
    tracep->declBit(c+1054,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1050,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1051,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"auto_in_wlast", false,-1);
    tracep->declBit(c+1543,"auto_in_bready", false,-1);
    tracep->declBit(c+1352,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1353,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+609,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+80,"auto_in_arready", false,-1);
    tracep->declBit(c+1055,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1038,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1354,"auto_in_rready", false,-1);
    tracep->declBit(c+1355,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1356,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1544,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+610,"auto_in_rlast", false,-1);
    tracep->declBit(c+1357,"auto_out_awready", false,-1);
    tracep->declBit(c+1056,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1027,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1028,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1029,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1057,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1358,"auto_out_wready", false,-1);
    tracep->declBit(c+1058,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1031,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1032,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"auto_out_wlast", false,-1);
    tracep->declBit(c+1359,"auto_out_bready", false,-1);
    tracep->declBit(c+1360,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1353,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1361,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1362,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1363,"auto_out_arready", false,-1);
    tracep->declBit(c+1060,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1034,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1061,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1354,"auto_out_rready", false,-1);
    tracep->declBit(c+1355,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1356,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1544,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+611,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1364,"auto_out_rlast", false,-1);
    tracep->declBit(c+1058,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+81,"w_idle", false,-1);
    tracep->declBit(c+1365,"in_awready", false,-1);
    tracep->declBit(c+82,"busy", false,-1);
    tracep->declBus(c+83,"r_addr", false,-1, 31,0);
    tracep->declBus(c+84,"r_len", false,-1, 7,0);
    tracep->declBus(c+1062,"len", false,-1, 7,0);
    tracep->declBus(c+1063,"addr", false,-1, 31,0);
    tracep->declBit(c+85,"busy_1", false,-1);
    tracep->declBus(c+86,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+87,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1064,"len_1", false,-1, 7,0);
    tracep->declBus(c+1065,"addr_1", false,-1, 31,0);
    tracep->declBit(c+88,"wbeats_latched", false,-1);
    tracep->declBit(c+1056,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1066,"wbeats_valid", false,-1);
    tracep->declBus(c+89,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1067,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1059,"w_last", false,-1);
    tracep->declBit(c+1359,"nodeOut_bready", false,-1);
    tracep->declBus(c+90,"error_0", false,-1, 1,0);
    tracep->declBus(c+91,"error_1", false,-1, 1,0);
    tracep->declBus(c+92,"error_2", false,-1, 1,0);
    tracep->declBus(c+93,"error_3", false,-1, 1,0);
    tracep->declBus(c+94,"error_4", false,-1, 1,0);
    tracep->declBus(c+95,"error_5", false,-1, 1,0);
    tracep->declBus(c+96,"error_6", false,-1, 1,0);
    tracep->declBus(c+97,"error_7", false,-1, 1,0);
    tracep->declBus(c+98,"error_8", false,-1, 1,0);
    tracep->declBus(c+99,"error_9", false,-1, 1,0);
    tracep->declBus(c+100,"error_10", false,-1, 1,0);
    tracep->declBus(c+101,"error_11", false,-1, 1,0);
    tracep->declBus(c+102,"error_12", false,-1, 1,0);
    tracep->declBus(c+103,"error_13", false,-1, 1,0);
    tracep->declBus(c+104,"error_14", false,-1, 1,0);
    tracep->declBus(c+105,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+80,"io_enq_ready", false,-1);
    tracep->declBit(c+1055,"io_enq_valid", false,-1);
    tracep->declBus(c+1038,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1039,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1040,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1041,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1042,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1366,"io_deq_ready", false,-1);
    tracep->declBit(c+1060,"io_deq_valid", false,-1);
    tracep->declBus(c+1034,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1068,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1069,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1036,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1070,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+106,"ram", false,-1, 48,0);
    tracep->declBit(c+108,"full", false,-1);
    tracep->declBit(c+1060,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1367,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+78,"io_enq_ready", false,-1);
    tracep->declBit(c+1053,"io_enq_valid", false,-1);
    tracep->declBus(c+1044,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1045,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1046,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1047,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1048,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1368,"io_deq_ready", false,-1);
    tracep->declBit(c+1071,"io_deq_valid", false,-1);
    tracep->declBus(c+1027,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1072,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1073,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1029,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1074,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+109,"ram", false,-1, 48,0);
    tracep->declBit(c+111,"full", false,-1);
    tracep->declBit(c+1071,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1369,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+79,"io_enq_ready", false,-1);
    tracep->declBit(c+1054,"io_enq_valid", false,-1);
    tracep->declBus(c+1050,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1051,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1052,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1370,"io_deq_ready", false,-1);
    tracep->declBit(c+1075,"io_deq_valid", false,-1);
    tracep->declBus(c+1031,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1032,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1546,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+112,"ram", false,-1, 36,0);
    tracep->declBit(c+114,"full", false,-1);
    tracep->declBit(c+1075,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1371,"do_enq", false,-1);
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
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1372,"auto_in_awready", false,-1);
    tracep->declBit(c+1076,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1027,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1077,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1153,"auto_in_wready", false,-1);
    tracep->declBit(c+1078,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1031,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1032,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1373,"auto_in_bready", false,-1);
    tracep->declBit(c+115,"auto_in_bvalid", false,-1);
    tracep->declBus(c+116,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1374,"auto_in_arready", false,-1);
    tracep->declBit(c+1079,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1034,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1080,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1375,"auto_in_rready", false,-1);
    tracep->declBit(c+118,"auto_in_rvalid", false,-1);
    tracep->declBus(c+119,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+121,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1374,"nodeIn_arready", false,-1);
    tracep->declBit(c+1372,"nodeIn_awready", false,-1);
    tracep->declBit(c+1081,"w_sel0", false,-1);
    tracep->declBit(c+115,"w_full", false,-1);
    tracep->declBus(c+116,"w_id", false,-1, 3,0);
    tracep->declBit(c+122,"r_sel1", false,-1);
    tracep->declBit(c+123,"w_sel1", false,-1);
    tracep->declBit(c+118,"r_full", false,-1);
    tracep->declBus(c+119,"r_id", false,-1, 3,0);
    tracep->declBit(c+1376,"ren", false,-1);
    tracep->declBit(c+124,"rdata_REG", false,-1);
    tracep->declBus(c+125,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+126,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+127,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+128,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1082,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1376,"R0_en", false,-1);
    tracep->declBit(c+1512,"R0_clk", false,-1);
    tracep->declBus(c+129,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1083,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1377,"W0_en", false,-1);
    tracep->declBit(c+1512,"W0_clk", false,-1);
    tracep->declBus(c+1031,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1032,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1273,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1084,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1044,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1045,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1046,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1047,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1048,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1150,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1052,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1050,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1051,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1085,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1378,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1379,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1274,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1086,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1087,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1380,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1381,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1382,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1257,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1043,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1044,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1045,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1046,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1047,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1048,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1258,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1049,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1050,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1051,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1350,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+638,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+639,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+640,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1256,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1349,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+633,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+634,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+635,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+636,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+637,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+78,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1053,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1044,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1045,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1046,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1047,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1048,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+79,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1054,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1050,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1051,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1543,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1352,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1353,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+609,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+80,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1055,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1354,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1355,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1356,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1544,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+610,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1378,"in_0_bvalid", false,-1);
    tracep->declBit(c+1380,"in_0_rvalid", false,-1);
    tracep->declBit(c+1275,"in_0_wready", false,-1);
    tracep->declBit(c+1276,"in_0_awready", false,-1);
    tracep->declBit(c+1550,"in_0_arready", false,-1);
    tracep->declBit(c+1273,"anonIn_awready", false,-1);
    tracep->declBit(c+1274,"anonIn_arready", false,-1);
    tracep->declBit(c+1088,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1089,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1090,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1091,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1092,"arSel", false,-1, 15,0);
    tracep->declBus(c+1093,"awSel", false,-1, 15,0);
    tracep->declBus(c+1383,"rSel", false,-1, 15,0);
    tracep->declBus(c+1384,"bSel", false,-1, 15,0);
    tracep->declBus(c+130,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+131,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+132,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+133,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+134,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+135,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+136,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+137,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+138,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+139,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+140,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+141,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+142,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+143,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+144,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+145,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+146,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+147,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+148,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+149,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+150,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+151,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+152,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+153,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+154,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+155,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+156,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+157,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+158,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+159,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+160,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+161,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+162,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+163,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+164,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+165,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+166,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+167,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+168,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+169,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+170,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+171,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+172,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+173,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+174,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+175,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+176,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+177,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+178,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+179,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+180,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+181,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+182,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+183,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+184,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+185,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+186,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+187,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+188,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+189,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+190,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+191,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+192,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+193,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1094,"in_0_arvalid", false,-1);
    tracep->declBit(c+194,"latched", false,-1);
    tracep->declBit(c+1095,"in_0_awvalid", false,-1);
    tracep->declBit(c+1096,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1097,"in_0_wvalid", false,-1);
    tracep->declBit(c+195,"idle_2", false,-1);
    tracep->declBit(c+1385,"anyValid", false,-1);
    tracep->declBus(c+1386,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+196,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1387,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1388,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1389,"prefixOR_1", false,-1);
    tracep->declBit(c+1390,"winner_2_1", false,-1);
    tracep->declBit(c+197,"state_2_0", false,-1);
    tracep->declBit(c+198,"state_2_1", false,-1);
    tracep->declBit(c+1391,"muxState_2_0", false,-1);
    tracep->declBit(c+1392,"muxState_2_1", false,-1);
    tracep->declBit(c+199,"idle_3", false,-1);
    tracep->declBit(c+1393,"anyValid_1", false,-1);
    tracep->declBus(c+1394,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1395,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1396,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1397,"winner_3_0", false,-1);
    tracep->declBit(c+1398,"winner_3_1", false,-1);
    tracep->declBit(c+201,"state_3_0", false,-1);
    tracep->declBit(c+202,"state_3_1", false,-1);
    tracep->declBit(c+612,"muxState_3_0", false,-1);
    tracep->declBit(c+613,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1096,"io_enq_valid", false,-1);
    tracep->declBus(c+1098,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1277,"io_deq_ready", false,-1);
    tracep->declBit(c+1099,"io_deq_valid", false,-1);
    tracep->declBus(c+1100,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1099,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1278,"do_deq", false,-1);
    tracep->declBit(c+1279,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1596,"R0_en", false,-1);
    tracep->declBit(c+1512,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 1,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1279,"W0_en", false,-1);
    tracep->declBit(c+1512,"W0_clk", false,-1);
    tracep->declBus(c+1098,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+211+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1399,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1101,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1027,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1028,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1029,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1358,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1058,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1031,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1032,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1359,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1360,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1353,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1361,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1400,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1102,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1034,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1354,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1355,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1356,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1544,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1364,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1372,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1076,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1027,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1077,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1153,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1078,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1031,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1032,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1373,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+115,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+116,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1374,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1079,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1034,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1080,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1375,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+118,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+119,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+121,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1103,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1104,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+213,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1105,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1034,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1106,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+614,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+214,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+215,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1302,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1026,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1027,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1028,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1029,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1302,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1030,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1031,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1032,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1345,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1346,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+69,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1540,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1303,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1033,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1034,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1347,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1348,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+70,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1541,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1540,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1360,"in_0_bvalid", false,-1);
    tracep->declBit(c+1355,"in_0_rvalid", false,-1);
    tracep->declBit(c+1401,"in_0_wready", false,-1);
    tracep->declBit(c+1402,"in_0_awready", false,-1);
    tracep->declBit(c+1400,"in_0_arready", false,-1);
    tracep->declBit(c+1399,"anonIn_awready", false,-1);
    tracep->declBit(c+1107,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1108,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1109,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1110,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1111,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1112,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1113,"arSel", false,-1, 15,0);
    tracep->declBus(c+1114,"awSel", false,-1, 15,0);
    tracep->declBus(c+1403,"rSel", false,-1, 15,0);
    tracep->declBus(c+1404,"bSel", false,-1, 15,0);
    tracep->declBit(c+217,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+218,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+219,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+220,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+221,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+222,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+223,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+224,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+225,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+226,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+227,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+228,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+229,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+230,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+231,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+232,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+233,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+234,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+235,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+236,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+237,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+238,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+239,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+240,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+241,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+242,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+243,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+244,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+245,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+246,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+247,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+248,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+249,"latched", false,-1);
    tracep->declBit(c+1115,"in_0_awvalid", false,-1);
    tracep->declBit(c+1116,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1117,"in_0_wvalid", false,-1);
    tracep->declBit(c+250,"idle_3", false,-1);
    tracep->declBit(c+1405,"anyValid", false,-1);
    tracep->declBus(c+1406,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+251,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1407,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1408,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1409,"prefixOR_1", false,-1);
    tracep->declBit(c+1410,"winner_3_1", false,-1);
    tracep->declBit(c+1411,"winner_3_2", false,-1);
    tracep->declBit(c+252,"state_3_0", false,-1);
    tracep->declBit(c+253,"state_3_1", false,-1);
    tracep->declBit(c+254,"state_3_2", false,-1);
    tracep->declBit(c+1412,"muxState_3_0", false,-1);
    tracep->declBit(c+1413,"muxState_3_1", false,-1);
    tracep->declBit(c+1414,"muxState_3_2", false,-1);
    tracep->declBit(c+255,"idle_4", false,-1);
    tracep->declBit(c+1415,"anyValid_1", false,-1);
    tracep->declBus(c+1416,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+256,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1417,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1418,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1419,"winner_4_0", false,-1);
    tracep->declBit(c+1420,"winner_4_2", false,-1);
    tracep->declBit(c+257,"state_4_0", false,-1);
    tracep->declBit(c+258,"state_4_2", false,-1);
    tracep->declBit(c+1421,"muxState_4_0", false,-1);
    tracep->declBit(c+1422,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+1116,"io_enq_valid", false,-1);
    tracep->declBus(c+1118,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1423,"io_deq_ready", false,-1);
    tracep->declBit(c+1119,"io_deq_valid", false,-1);
    tracep->declBus(c+1120,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+260,"wrap", false,-1);
    tracep->declBit(c+261,"wrap_1", false,-1);
    tracep->declBit(c+262,"maybe_full", false,-1);
    tracep->declBit(c+263,"ptr_match", false,-1);
    tracep->declBit(c+264,"empty", false,-1);
    tracep->declBit(c+265,"full", false,-1);
    tracep->declBit(c+1119,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1424,"do_deq", false,-1);
    tracep->declBit(c+1425,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+261,"R0_addr", false,-1);
    tracep->declBit(c+1596,"R0_en", false,-1);
    tracep->declBit(c+1512,"R0_clk", false,-1);
    tracep->declBus(c+266,"R0_data", false,-1, 2,0);
    tracep->declBit(c+260,"W0_addr", false,-1);
    tracep->declBit(c+1425,"W0_en", false,-1);
    tracep->declBit(c+1512,"W0_clk", false,-1);
    tracep->declBus(c+1118,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+267+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1357,"auto_in_awready", false,-1);
    tracep->declBit(c+1056,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1027,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1028,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1029,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1057,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1358,"auto_in_wready", false,-1);
    tracep->declBit(c+1058,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1031,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1032,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"auto_in_wlast", false,-1);
    tracep->declBit(c+1359,"auto_in_bready", false,-1);
    tracep->declBit(c+1360,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1353,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1361,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1362,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1363,"auto_in_arready", false,-1);
    tracep->declBit(c+1060,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1034,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1061,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1354,"auto_in_rready", false,-1);
    tracep->declBit(c+1355,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1356,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1544,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+611,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1364,"auto_in_rlast", false,-1);
    tracep->declBit(c+1399,"auto_out_awready", false,-1);
    tracep->declBit(c+1101,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1027,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1028,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1029,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1358,"auto_out_wready", false,-1);
    tracep->declBit(c+1058,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1031,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1032,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"auto_out_wlast", false,-1);
    tracep->declBit(c+1359,"auto_out_bready", false,-1);
    tracep->declBit(c+1360,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1353,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1361,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1400,"auto_out_arready", false,-1);
    tracep->declBit(c+1102,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1034,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1354,"auto_out_rready", false,-1);
    tracep->declBit(c+1355,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1356,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1544,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1364,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1154,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1426,"io_deq_ready", false,-1);
    tracep->declBit(c+270,"io_deq_valid", false,-1);
    tracep->declBit(c+271,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+270,"full", false,-1);
    tracep->declBit(c+271,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+272,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1155,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1427,"io_deq_ready", false,-1);
    tracep->declBit(c+274,"io_deq_valid", false,-1);
    tracep->declBit(c+275,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+274,"full", false,-1);
    tracep->declBit(c+275,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+276,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1156,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1428,"io_deq_ready", false,-1);
    tracep->declBit(c+278,"io_deq_valid", false,-1);
    tracep->declBit(c+279,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+278,"full", false,-1);
    tracep->declBit(c+279,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+280,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1157,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1429,"io_deq_ready", false,-1);
    tracep->declBit(c+282,"io_deq_valid", false,-1);
    tracep->declBit(c+283,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+282,"full", false,-1);
    tracep->declBit(c+283,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+284,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1158,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1430,"io_deq_ready", false,-1);
    tracep->declBit(c+286,"io_deq_valid", false,-1);
    tracep->declBit(c+287,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+286,"full", false,-1);
    tracep->declBit(c+287,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+288,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1159,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1431,"io_deq_ready", false,-1);
    tracep->declBit(c+290,"io_deq_valid", false,-1);
    tracep->declBit(c+291,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+291,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+292,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1160,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1432,"io_deq_ready", false,-1);
    tracep->declBit(c+294,"io_deq_valid", false,-1);
    tracep->declBit(c+295,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+294,"full", false,-1);
    tracep->declBit(c+295,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+296,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1161,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1433,"io_deq_ready", false,-1);
    tracep->declBit(c+298,"io_deq_valid", false,-1);
    tracep->declBit(c+299,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+298,"full", false,-1);
    tracep->declBit(c+299,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+300,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1162,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1434,"io_deq_ready", false,-1);
    tracep->declBit(c+302,"io_deq_valid", false,-1);
    tracep->declBit(c+303,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+302,"full", false,-1);
    tracep->declBit(c+303,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+304,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1163,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1435,"io_deq_ready", false,-1);
    tracep->declBit(c+306,"io_deq_valid", false,-1);
    tracep->declBit(c+307,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+306,"full", false,-1);
    tracep->declBit(c+307,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+308,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1164,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1436,"io_deq_ready", false,-1);
    tracep->declBit(c+310,"io_deq_valid", false,-1);
    tracep->declBit(c+311,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+310,"full", false,-1);
    tracep->declBit(c+311,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+312,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1165,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1437,"io_deq_ready", false,-1);
    tracep->declBit(c+314,"io_deq_valid", false,-1);
    tracep->declBit(c+315,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+314,"full", false,-1);
    tracep->declBit(c+315,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+316,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1166,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1438,"io_deq_ready", false,-1);
    tracep->declBit(c+318,"io_deq_valid", false,-1);
    tracep->declBit(c+319,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+318,"full", false,-1);
    tracep->declBit(c+319,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+320,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1167,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1439,"io_deq_ready", false,-1);
    tracep->declBit(c+322,"io_deq_valid", false,-1);
    tracep->declBit(c+323,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+322,"full", false,-1);
    tracep->declBit(c+323,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+324,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1168,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1440,"io_deq_ready", false,-1);
    tracep->declBit(c+326,"io_deq_valid", false,-1);
    tracep->declBit(c+327,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+326,"full", false,-1);
    tracep->declBit(c+327,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+328,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1169,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1441,"io_deq_ready", false,-1);
    tracep->declBit(c+330,"io_deq_valid", false,-1);
    tracep->declBit(c+331,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+330,"full", false,-1);
    tracep->declBit(c+331,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+332,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1170,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1442,"io_deq_ready", false,-1);
    tracep->declBit(c+334,"io_deq_valid", false,-1);
    tracep->declBit(c+335,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+334,"full", false,-1);
    tracep->declBit(c+335,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+336,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1171,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1443,"io_deq_ready", false,-1);
    tracep->declBit(c+338,"io_deq_valid", false,-1);
    tracep->declBit(c+339,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+338,"full", false,-1);
    tracep->declBit(c+339,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+340,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+341,"io_enq_ready", false,-1);
    tracep->declBit(c+1172,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1444,"io_deq_ready", false,-1);
    tracep->declBit(c+342,"io_deq_valid", false,-1);
    tracep->declBit(c+343,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+342,"full", false,-1);
    tracep->declBit(c+343,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+344,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+345,"io_enq_ready", false,-1);
    tracep->declBit(c+1173,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1445,"io_deq_ready", false,-1);
    tracep->declBit(c+346,"io_deq_valid", false,-1);
    tracep->declBit(c+347,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+346,"full", false,-1);
    tracep->declBit(c+347,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+348,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+349,"io_enq_ready", false,-1);
    tracep->declBit(c+1174,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1446,"io_deq_ready", false,-1);
    tracep->declBit(c+350,"io_deq_valid", false,-1);
    tracep->declBit(c+351,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+350,"full", false,-1);
    tracep->declBit(c+351,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+352,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+353,"io_enq_ready", false,-1);
    tracep->declBit(c+1175,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1447,"io_deq_ready", false,-1);
    tracep->declBit(c+354,"io_deq_valid", false,-1);
    tracep->declBit(c+355,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+354,"full", false,-1);
    tracep->declBit(c+355,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+356,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+357,"io_enq_ready", false,-1);
    tracep->declBit(c+1176,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1448,"io_deq_ready", false,-1);
    tracep->declBit(c+358,"io_deq_valid", false,-1);
    tracep->declBit(c+359,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+358,"full", false,-1);
    tracep->declBit(c+359,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+360,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+361,"io_enq_ready", false,-1);
    tracep->declBit(c+1177,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1449,"io_deq_ready", false,-1);
    tracep->declBit(c+362,"io_deq_valid", false,-1);
    tracep->declBit(c+363,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+362,"full", false,-1);
    tracep->declBit(c+363,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+364,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+365,"io_enq_ready", false,-1);
    tracep->declBit(c+1178,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1450,"io_deq_ready", false,-1);
    tracep->declBit(c+366,"io_deq_valid", false,-1);
    tracep->declBit(c+367,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+366,"full", false,-1);
    tracep->declBit(c+367,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+368,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+369,"io_enq_ready", false,-1);
    tracep->declBit(c+1179,"io_enq_valid", false,-1);
    tracep->declBit(c+1057,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1451,"io_deq_ready", false,-1);
    tracep->declBit(c+370,"io_deq_valid", false,-1);
    tracep->declBit(c+371,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+370,"full", false,-1);
    tracep->declBit(c+371,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+372,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+373,"io_enq_ready", false,-1);
    tracep->declBit(c+1180,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1452,"io_deq_ready", false,-1);
    tracep->declBit(c+374,"io_deq_valid", false,-1);
    tracep->declBit(c+375,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+374,"full", false,-1);
    tracep->declBit(c+375,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+376,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+377,"io_enq_ready", false,-1);
    tracep->declBit(c+1181,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1453,"io_deq_ready", false,-1);
    tracep->declBit(c+378,"io_deq_valid", false,-1);
    tracep->declBit(c+379,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+378,"full", false,-1);
    tracep->declBit(c+379,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+380,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+381,"io_enq_ready", false,-1);
    tracep->declBit(c+1182,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1454,"io_deq_ready", false,-1);
    tracep->declBit(c+382,"io_deq_valid", false,-1);
    tracep->declBit(c+383,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+382,"full", false,-1);
    tracep->declBit(c+383,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+384,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+385,"io_enq_ready", false,-1);
    tracep->declBit(c+1183,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1455,"io_deq_ready", false,-1);
    tracep->declBit(c+386,"io_deq_valid", false,-1);
    tracep->declBit(c+387,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+386,"full", false,-1);
    tracep->declBit(c+387,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+388,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+389,"io_enq_ready", false,-1);
    tracep->declBit(c+1184,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1456,"io_deq_ready", false,-1);
    tracep->declBit(c+390,"io_deq_valid", false,-1);
    tracep->declBit(c+391,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+390,"full", false,-1);
    tracep->declBit(c+391,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+392,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+393,"io_enq_ready", false,-1);
    tracep->declBit(c+1185,"io_enq_valid", false,-1);
    tracep->declBit(c+1061,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1457,"io_deq_ready", false,-1);
    tracep->declBit(c+394,"io_deq_valid", false,-1);
    tracep->declBit(c+395,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+394,"full", false,-1);
    tracep->declBit(c+395,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+396,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1551,"reset", false,-1);
    tracep->declBit(c+1273,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1084,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1044,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1045,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1046,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1047,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1048,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1150,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1052,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1050,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1051,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1085,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1378,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1379,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1274,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1086,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1038,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1087,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1380,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1381,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1548,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1549,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1382,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1551,"reset", false,-1);
    tracep->declBit(c+1591,"io_interrupt", false,-1);
    tracep->declBit(c+1273,"io_master_awready", false,-1);
    tracep->declBit(c+1084,"io_master_awvalid", false,-1);
    tracep->declBus(c+1044,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1045,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1046,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1047,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1048,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1150,"io_master_wready", false,-1);
    tracep->declBit(c+1052,"io_master_wvalid", false,-1);
    tracep->declBus(c+1050,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1051,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"io_master_wlast", false,-1);
    tracep->declBit(c+1085,"io_master_bready", false,-1);
    tracep->declBit(c+1378,"io_master_bvalid", false,-1);
    tracep->declBus(c+1379,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1547,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1274,"io_master_arready", false,-1);
    tracep->declBit(c+1086,"io_master_arvalid", false,-1);
    tracep->declBus(c+1038,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1087,"io_master_rready", false,-1);
    tracep->declBit(c+1380,"io_master_rvalid", false,-1);
    tracep->declBus(c+1381,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1548,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1549,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1382,"io_master_rlast", false,-1);
    tracep->declBit(c+1597,"io_slave_awready", false,-1);
    tracep->declBit(c+1591,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1598,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1599,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1600,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1592,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1582,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1601,"io_slave_wready", false,-1);
    tracep->declBit(c+1591,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1599,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1598,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1591,"io_slave_wlast", false,-1);
    tracep->declBit(c+1591,"io_slave_bready", false,-1);
    tracep->declBit(c+1602,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1603,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1604,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1605,"io_slave_arready", false,-1);
    tracep->declBit(c+1591,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1598,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1599,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1600,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1592,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1582,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1591,"io_slave_rready", false,-1);
    tracep->declBit(c+1606,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1607,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1608,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1609,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1610,"io_slave_rlast", false,-1);
    tracep->declBus(c+397,"pc", false,-1, 31,0);
    tracep->declBit(c+398,"pc_valid", false,-1);
    tracep->declBus(c+399,"snpc", false,-1, 31,0);
    tracep->declBus(c+400,"inst_if", false,-1, 31,0);
    tracep->declBus(c+401,"pc_if", false,-1, 31,0);
    tracep->declBit(c+402,"if_valid", false,-1);
    tracep->declBit(c+403,"if_ready", false,-1);
    tracep->declBus(c+404,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1021,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1600,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1598,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1611,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1592,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1582,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1612,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+405,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1022,"if_axi_arready", false,-1);
    tracep->declBit(c+1458,"if_axi_rvalid", false,-1);
    tracep->declBit(c+406,"if_axi_rready", false,-1);
    tracep->declBit(c+1613,"if_axi_rlast", false,-1);
    tracep->declBus(c+13,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1186,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+14,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1614,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1187,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+15,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+16,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1552,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1023,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1151,"icache_axi_arready", false,-1);
    tracep->declBit(c+1188,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+17,"icache_axi_rready", false,-1);
    tracep->declBit(c+1459,"icache_axi_rlast", false,-1);
    tracep->declBus(c+407,"inst_id", false,-1, 31,0);
    tracep->declBit(c+408,"id_valid", false,-1);
    tracep->declBit(c+409,"id_ready", false,-1);
    tracep->declBus(c+410,"prepc", false,-1, 20,0);
    tracep->declBus(c+411,"prepc_en", false,-1, 1,0);
    tracep->declBus(c+412,"pc_id", false,-1, 31,0);
    tracep->declBus(c+413,"imm_id", false,-1, 31,0);
    tracep->declBus(c+414,"op_id", false,-1, 4,0);
    tracep->declBus(c+415,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+416,"rs1_id", false,-1, 3,0);
    tracep->declBus(c+417,"rs2_id", false,-1, 3,0);
    tracep->declBus(c+418,"rd_id", false,-1, 3,0);
    tracep->declBit(c+419,"gpr_wen_id", false,-1);
    tracep->declBit(c+420,"ls_valid_id", false,-1);
    tracep->declBit(c+421,"fencei_id", false,-1);
    tracep->declBus(c+422,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+423,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+424,"npc_ex", false,-1, 31,0);
    tracep->declBit(c+425,"ex_ready", false,-1);
    tracep->declBit(c+1460,"ex_valid", false,-1);
    tracep->declBus(c+426,"xrd_ex", false,-1, 31,0);
    tracep->declBus(c+427,"rd_ex", false,-1, 3,0);
    tracep->declBit(c+428,"gpr_wen_ex", false,-1);
    tracep->declBus(c+429,"mepc_ex", false,-1, 31,0);
    tracep->declBus(c+430,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+431,"csrsw_ex", false,-1, 31,0);
    tracep->declBus(c+432,"csrs_wen_ex", false,-1, 3,0);
    tracep->declBus(c+433,"ls_addr", false,-1, 31,0);
    tracep->declBus(c+434,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+435,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+1461,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+1553,"ls_done", false,-1);
    tracep->declBus(c+1554,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1555,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1121,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1462,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1556,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1615,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1616,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1617,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1189,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1618,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1190,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1557,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1558,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1619,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1620,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1559,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1560,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1024,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1280,"ls_axi_awready", false,-1);
    tracep->declBit(c+18,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1152,"ls_axi_wready", false,-1);
    tracep->declBit(c+1463,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+19,"ls_axi_bready", false,-1);
    tracep->declBit(c+1025,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1281,"ls_axi_arready", false,-1);
    tracep->declBit(c+1464,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+20,"ls_axi_rready", false,-1);
    tracep->declBit(c+18,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1191,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1621,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1622,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1122,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1561,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1623,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1624,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1123,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1625,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1626,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1124,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1627,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1628,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1125,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1629,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1126,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1630,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1631,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1632,"c_axi_awvalid", false,-1);
    tracep->declBit(c+1633,"c_axi_awready", false,-1);
    tracep->declBit(c+1634,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1635,"c_axi_wready", false,-1);
    tracep->declBit(c+1636,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1637,"c_axi_bready", false,-1);
    tracep->declBit(c+1127,"c_axi_arvalid", false,-1);
    tracep->declBit(c+436,"c_axi_arready", false,-1);
    tracep->declBit(c+437,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1128,"c_axi_rready", false,-1);
    tracep->declBit(c+1638,"c_axi_wlast", false,-1);
    tracep->declBit(c+1639,"c_axi_rlast", false,-1);
    tracep->declBus(c+438,"r1", false,-1, 31,0);
    tracep->declBus(c+439,"r2", false,-1, 31,0);
    tracep->declBus(c+440,"mepc", false,-1, 31,0);
    tracep->declBus(c+441,"mstatus", false,-1, 31,0);
    tracep->declBus(c+442,"mcause", false,-1, 31,0);
    tracep->declBus(c+443,"mtvec", false,-1, 31,0);
    tracep->declBus(c+444,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+445,"marchid", false,-1, 31,0);
    tracep->declBit(c+1591,"isRAW", false,-1);
    tracep->declBit(c+446,"CHazarden", false,-1);
    tracep->declBit(c+447,"isCHazard", false,-1);
    tracep->declBit(c+448,"difftest_delay", false,-1);
    tracep->declBit(c+449,"difftest", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1640,"n", false,-1, 31,0);
    tracep->declBus(c+1641,"w", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBus(c+397,"pc_i", false,-1, 31,0);
    tracep->declBus(c+399,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+410,"prepc_i", false,-1, 20,0);
    tracep->declBus(c+401,"prepc_tag_i", false,-1, 31,0);
    tracep->declBus(c+411,"prepc_en_i", false,-1, 1,0);
    tracep->declBus(c+450,"jsnpc_reg", false,-1, 20,0);
    tracep->declBus(c+451,"jtag_reg", false,-1, 29,0);
    tracep->declBus(c+452,"jtag", false,-1, 29,0);
    tracep->declBit(c+453,"jhit", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+454+i*1,"snpc_reg", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+458+i*1,"tag_reg", true,(i+0), 27,0);
    }
    tracep->declBus(c+462,"tag", false,-1, 27,0);
    tracep->declBus(c+463,"index", false,-1, 1,0);
    tracep->declBus(c+464,"prepc_tag", false,-1, 27,0);
    tracep->declBus(c+465,"prepc_index", false,-1, 1,0);
    tracep->declBus(c+1642,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBus(c+466,"hit", false,-1, 0,0);
    tracep->declBus(c+467,"already", false,-1, 0,0);
    tracep->declBus(c+468,"enable", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+469,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBit(c+436,"c_axi_arready", false,-1);
    tracep->declBit(c+1127,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1124,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1122,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1123,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1125,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1126,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1128,"c_axi_rready", false,-1);
    tracep->declBit(c+437,"c_axi_rvalid", false,-1);
    tracep->declBus(c+1627,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1561,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1631,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1639,"c_axi_rlast", false,-1);
    tracep->declBus(c+1643,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1644,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBus(c+1562,"c_rdata", false,-1, 31,0);
    tracep->declQuad(c+470,"mtime", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBit(c+447,"flush_i", false,-1);
    tracep->declBus(c+407,"inst_i", false,-1, 31,0);
    tracep->declBus(c+422,"pc_o", false,-1, 31,0);
    tracep->declBus(c+423,"inst_o", false,-1, 31,0);
    tracep->declBus(c+424,"npc_o", false,-1, 31,0);
    tracep->declBit(c+408,"id_valid_i", false,-1);
    tracep->declBit(c+425,"ex_ready_o", false,-1);
    tracep->declBit(c+1460,"ex_valid_o", false,-1);
    tracep->declBus(c+412,"pc_i", false,-1, 31,0);
    tracep->declBus(c+413,"imm_i", false,-1, 31,0);
    tracep->declBus(c+414,"op_i", false,-1, 4,0);
    tracep->declBus(c+415,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+438,"r1_i", false,-1, 31,0);
    tracep->declBus(c+439,"r2_i", false,-1, 31,0);
    tracep->declBus(c+418,"rd_i", false,-1, 3,0);
    tracep->declBit(c+419,"gpr_wen_i", false,-1);
    tracep->declBus(c+440,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+441,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+442,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+443,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+426,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+427,"rd_o", false,-1, 3,0);
    tracep->declBit(c+428,"gpr_wen_o", false,-1);
    tracep->declBus(c+429,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+430,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+431,"csrsw_o", false,-1, 31,0);
    tracep->declBus(c+432,"csrs_wen_o", false,-1, 3,0);
    tracep->declBus(c+433,"ls_addr_o", false,-1, 31,0);
    tracep->declBus(c+434,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1461,"ls_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1553,"ls_done_i", false,-1);
    tracep->declBus(c+435,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+1645,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1646,"WAIT", false,-1, 0,0);
    tracep->declBit(c+472,"state", false,-1);
    tracep->declBit(c+1465,"updata", false,-1);
    tracep->declBus(c+615,"xrd", false,-1, 31,0);
    tracep->declBus(c+473,"csr", false,-1, 31,0);
    tracep->declBus(c+474,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+475,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+476,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+475,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+475,"csrs_w", false,-1, 31,0);
    tracep->declBus(c+477,"csrs_wen", false,-1, 3,0);
    tracep->declBit(c+478,"funct7_i", false,-1);
    tracep->declBus(c+479,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+480,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+481,"alu_res", false,-1, 31,0);
    tracep->declBus(c+482,"a", false,-1, 31,0);
    tracep->declBus(c+483,"b", false,-1, 31,0);
    tracep->declBit(c+484,"a_use_r1", false,-1);
    tracep->declBit(c+485,"b_use_imm", false,-1);
    tracep->declBit(c+486,"b_use_shamt", false,-1);
    tracep->declBit(c+487,"b_use_r2", false,-1);
    tracep->declBit(c+488,"ab_use_signed", false,-1);
    tracep->declBus(c+1647,"ADD", false,-1, 3,0);
    tracep->declBus(c+1648,"SUB", false,-1, 3,0);
    tracep->declBus(c+1649,"SLL", false,-1, 3,0);
    tracep->declBus(c+1650,"SRL", false,-1, 3,0);
    tracep->declBus(c+1651,"SRA", false,-1, 3,0);
    tracep->declBus(c+1652,"SLT", false,-1, 3,0);
    tracep->declBus(c+1653,"AND", false,-1, 3,0);
    tracep->declBus(c+1598,"OR", false,-1, 3,0);
    tracep->declBus(c+1647,"XOR", false,-1, 3,0);
    tracep->declBit(c+489,"ls_valid", false,-1);
    tracep->declBus(c+413,"offset", false,-1, 31,0);
    tracep->declBit(c+490,"jalen", false,-1);
    tracep->declBit(c+491,"jalren", false,-1);
    tracep->declBit(c+492,"beqen", false,-1);
    tracep->declBit(c+493,"bneen", false,-1);
    tracep->declBit(c+494,"blten", false,-1);
    tracep->declBit(c+495,"bgeen", false,-1);
    tracep->declBit(c+496,"bltuen", false,-1);
    tracep->declBit(c+497,"bgeuen", false,-1);
    tracep->declBit(c+498,"ecall_en", false,-1);
    tracep->declBit(c+499,"mret_en", false,-1);
    tracep->declBus(c+500,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1640,"n", false,-1, 31,0);
    tracep->declBus(c+1654,"m", false,-1, 31,0);
    tracep->declBus(c+1655,"w", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBit(c+421,"fencei_i", false,-1);
    tracep->declBit(c+1022,"m_axi_arready", false,-1);
    tracep->declBit(c+405,"m_axi_arvalid", false,-1);
    tracep->declBus(c+1598,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+404,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1600,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1592,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1582,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+406,"m_axi_rready", false,-1);
    tracep->declBit(c+1458,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1611,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1021,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1612,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1613,"m_axi_rlast", false,-1);
    tracep->declBit(c+1151,"s_axi_arready", false,-1);
    tracep->declBit(c+1023,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1614,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+13,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+14,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+15,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+16,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+17,"s_axi_rready", false,-1);
    tracep->declBit(c+1188,"s_axi_rvalid", false,-1);
    tracep->declBus(c+1187,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1186,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1552,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1459,"s_axi_rlast", false,-1);
    tracep->declBus(c+1654,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1654,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1640,"CACHE_WAY", false,-1, 31,0);
    tracep->pushNamePrefix("cache_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+21,"[0]", false,-1, 31,0);
    tracep->declBus(c+22,"[1]", false,-1, 31,0);
    tracep->declBus(c+23,"[2]", false,-1, 31,0);
    tracep->declBus(c+24,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+25,"[0]", false,-1, 31,0);
    tracep->declBus(c+26,"[1]", false,-1, 31,0);
    tracep->declBus(c+27,"[2]", false,-1, 31,0);
    tracep->declBus(c+28,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+29,"[0]", false,-1, 31,0);
    tracep->declBus(c+30,"[1]", false,-1, 31,0);
    tracep->declBus(c+31,"[2]", false,-1, 31,0);
    tracep->declBus(c+32,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+33,"[0]", false,-1, 31,0);
    tracep->declBus(c+34,"[1]", false,-1, 31,0);
    tracep->declBus(c+35,"[2]", false,-1, 31,0);
    tracep->declBus(c+36,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+37,"[0]", false,-1, 26,0);
    tracep->declBus(c+38,"[1]", false,-1, 26,0);
    tracep->declBus(c+39,"[2]", false,-1, 26,0);
    tracep->declBus(c+40,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+41,"[0]", false,-1, 26,0);
    tracep->declBus(c+42,"[1]", false,-1, 26,0);
    tracep->declBus(c+43,"[2]", false,-1, 26,0);
    tracep->declBus(c+44,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+45,"[0]", false,-1, 26,0);
    tracep->declBus(c+46,"[1]", false,-1, 26,0);
    tracep->declBus(c+47,"[2]", false,-1, 26,0);
    tracep->declBus(c+48,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+49,"[0]", false,-1, 26,0);
    tracep->declBus(c+50,"[1]", false,-1, 26,0);
    tracep->declBus(c+51,"[2]", false,-1, 26,0);
    tracep->declBus(c+52,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+53+i*1,"valid_reg", true,(i+0), 3,0);
    }
    tracep->declBus(c+501,"tag", false,-1, 26,0);
    tracep->declBus(c+502,"index", false,-1, 0,0);
    tracep->declBus(c+503,"offset", false,-1, 1,0);
    tracep->declBus(c+57,"s_tag", false,-1, 26,0);
    tracep->declBus(c+58,"s_index", false,-1, 0,0);
    tracep->declBus(c+59,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1129,"access", false,-1, 1,0);
    tracep->declBus(c+60,"hit", false,-1, 1,0);
    tracep->declBus(c+1656,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBit(c+1466,"axi_rvalid", false,-1);
    tracep->declBit(c+504,"axi_rvalid_enable", false,-1);
    tracep->declBus(c+1645,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1646,"TRANS", false,-1, 0,0);
    tracep->declBit(c+61,"state", false,-1);
    tracep->declBus(c+62,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+63,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+64,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+65,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+66,"a", false,-1, 31,0);
    tracep->declBus(c+67,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBit(c+1591,"isRAW_i", false,-1);
    tracep->declBit(c+447,"flush_i", false,-1);
    tracep->declBus(c+407,"inst_o", false,-1, 31,0);
    tracep->declBus(c+410,"prepc_o", false,-1, 20,0);
    tracep->declBus(c+411,"prepc_en_o", false,-1, 1,0);
    tracep->declBit(c+402,"if_valid_i", false,-1);
    tracep->declBit(c+409,"id_ready_o", false,-1);
    tracep->declBit(c+408,"id_valid_o", false,-1);
    tracep->declBit(c+425,"ex_ready_i", false,-1);
    tracep->declBus(c+401,"pc_i", false,-1, 31,0);
    tracep->declBus(c+400,"inst_i", false,-1, 31,0);
    tracep->declBus(c+412,"pc_o", false,-1, 31,0);
    tracep->declBus(c+413,"imm_o", false,-1, 31,0);
    tracep->declBus(c+414,"op_o", false,-1, 4,0);
    tracep->declBus(c+415,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+416,"rs1_o", false,-1, 3,0);
    tracep->declBus(c+417,"rs2_o", false,-1, 3,0);
    tracep->declBus(c+418,"rd_o", false,-1, 3,0);
    tracep->declBit(c+419,"gpr_wen_o", false,-1);
    tracep->declBit(c+420,"ls_valid_o", false,-1);
    tracep->declBit(c+421,"fencei_o", false,-1);
    tracep->declBus(c+1645,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1646,"WAIT", false,-1, 0,0);
    tracep->declBit(c+505,"state", false,-1);
    tracep->declBit(c+506,"updata", false,-1);
    tracep->declBus(c+507,"op", false,-1, 4,0);
    tracep->declBus(c+508,"rd", false,-1, 3,0);
    tracep->declBus(c+509,"funct3", false,-1, 2,0);
    tracep->declBus(c+510,"rs1", false,-1, 3,0);
    tracep->declBus(c+511,"rs2", false,-1, 3,0);
    tracep->declBus(c+512,"immI", false,-1, 31,0);
    tracep->declBus(c+513,"immU", false,-1, 31,0);
    tracep->declBus(c+514,"immS", false,-1, 31,0);
    tracep->declBus(c+515,"immB", false,-1, 31,0);
    tracep->declBus(c+516,"immJ", false,-1, 31,0);
    tracep->declBus(c+517,"imm", false,-1, 31,0);
    tracep->declBus(c+518,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBit(c+447,"flush", false,-1);
    tracep->declBit(c+398,"pc_valid_i", false,-1);
    tracep->declBit(c+403,"if_ready_o", false,-1);
    tracep->declBit(c+402,"if_valid_o", false,-1);
    tracep->declBit(c+409,"id_ready_i", false,-1);
    tracep->declBus(c+397,"pc_i", false,-1, 31,0);
    tracep->declBus(c+401,"pc_o", false,-1, 31,0);
    tracep->declBus(c+400,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1022,"if_axi_arready_i", false,-1);
    tracep->declBit(c+405,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+1598,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+404,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+1600,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1592,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1582,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+406,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1458,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1611,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1021,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1612,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1613,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1645,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1646,"WAIT", false,-1, 0,0);
    tracep->declBit(c+519,"state", false,-1);
    tracep->declBit(c+520,"ifaddr_valid", false,-1);
    tracep->declBit(c+521,"updata", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBus(c+414,"op_i", false,-1, 4,0);
    tracep->declBus(c+415,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+522,"ls_valid_i", false,-1);
    tracep->declBus(c+433,"ls_addr_i", false,-1, 31,0);
    tracep->declBus(c+434,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1461,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1553,"ls_done_o", false,-1);
    tracep->declBit(c+1280,"ls_axi_awready", false,-1);
    tracep->declBit(c+1024,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1617,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1554,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1615,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1557,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1619,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1152,"ls_axi_wready", false,-1);
    tracep->declBit(c+18,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1555,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1556,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+18,"ls_axi_wlast", false,-1);
    tracep->declBit(c+19,"ls_axi_bready", false,-1);
    tracep->declBit(c+1463,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+1189,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1559,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1281,"ls_axi_arready", false,-1);
    tracep->declBit(c+1025,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1618,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1121,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1616,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1558,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1620,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+20,"ls_axi_rready", false,-1);
    tracep->declBit(c+1464,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+1190,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1462,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1560,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1191,"ls_axi_rlast", false,-1);
    tracep->declBit(c+523,"ls_wen_i", false,-1);
    tracep->declBit(c+524,"ls_ren_i", false,-1);
    tracep->declBus(c+525,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+526,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+527,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1582,"AXI_IDLE", false,-1, 1,0);
    tracep->declBus(c+1583,"AXI_READ", false,-1, 1,0);
    tracep->declBus(c+1584,"AXI_WRITE", false,-1, 1,0);
    tracep->declBus(c+1585,"AXI_DONE", false,-1, 1,0);
    tracep->declBus(c+68,"axi_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBit(c+447,"flush", false,-1);
    tracep->declBus(c+397,"pc_o", false,-1, 31,0);
    tracep->declBus(c+435,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+399,"snpc_i", false,-1, 31,0);
    tracep->declBit(c+398,"pc_valid_o", false,-1);
    tracep->declBit(c+403,"if_ready_i", false,-1);
    tracep->declBus(c+1657,"RESET_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1654,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1658,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBus(c+426,"wdata", false,-1, 31,0);
    tracep->declBus(c+427,"waddr", false,-1, 3,0);
    tracep->declBit(c+428,"wen", false,-1);
    tracep->declBus(c+416,"raddr1", false,-1, 3,0);
    tracep->declBus(c+438,"r1", false,-1, 31,0);
    tracep->declBus(c+417,"raddr2", false,-1, 3,0);
    tracep->declBus(c+439,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+528+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+544,"rdata1_low", false,-1, 31,0);
    tracep->declBus(c+545,"rdata1_high", false,-1, 31,0);
    tracep->declBus(c+546,"rdata2_low", false,-1, 31,0);
    tracep->declBus(c+547,"rdata2_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBit(c+1151,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1023,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1614,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+13,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+14,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+15,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+16,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+17,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1188,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+1187,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1186,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1552,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1459,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1280,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1024,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1617,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1554,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1615,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1557,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1619,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1152,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+18,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1555,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1556,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+18,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+19,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1463,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+1189,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1559,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1281,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1025,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1618,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1121,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1616,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1558,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1620,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+20,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1464,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+1190,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1462,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1560,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1191,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1273,"io_master_awready", false,-1);
    tracep->declBit(c+1084,"io_master_awvalid", false,-1);
    tracep->declBus(c+1044,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1045,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1046,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1047,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1048,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1150,"io_master_wready", false,-1);
    tracep->declBit(c+1052,"io_master_wvalid", false,-1);
    tracep->declBus(c+1050,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1051,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"io_master_wlast", false,-1);
    tracep->declBit(c+1085,"io_master_bready", false,-1);
    tracep->declBit(c+1378,"io_master_bvalid", false,-1);
    tracep->declBus(c+1379,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1547,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1274,"io_master_arready", false,-1);
    tracep->declBit(c+1086,"io_master_arvalid", false,-1);
    tracep->declBus(c+1038,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1039,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1040,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1087,"io_master_rready", false,-1);
    tracep->declBit(c+1380,"io_master_rvalid", false,-1);
    tracep->declBus(c+1381,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1548,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1549,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1382,"io_master_rlast", false,-1);
    tracep->declBit(c+436,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1127,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1124,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1122,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1123,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1125,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1126,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1128,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+437,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+1627,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1561,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1631,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1639,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+444,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+445,"marchid", false,-1, 31,0);
    tracep->declBus(c+1045,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1050,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1130,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1467,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1051,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1046,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1131,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1044,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1379,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1132,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1192,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1047,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1133,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1048,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1134,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1547,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1563,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1084,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1273,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1052,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1150,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1378,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1085,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1052,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1135,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1282,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1468,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1136,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1193,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1645,"SEL_IFU", false,-1, 0,0);
    tracep->declBus(c+1646,"SEL_LSU", false,-1, 0,0);
    tracep->declBit(c+1137,"sel_m", false,-1);
    tracep->declBus(c+1582,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1583,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1584,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+548,"state", false,-1, 1,0);
    tracep->declBus(c+1643,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1644,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1138,"sel_clint", false,-1);
    tracep->declBus(c+1659,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1660,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1139,"sel_mvendorid", false,-1);
    tracep->declBit(c+1140,"sel_marchid", false,-1);
    tracep->declBit(c+1141,"sel_id", false,-1);
    tracep->declBus(c+1564,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBit(c+1596,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1596,"I_AXI_RVALID", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1658,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1661,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBus(c+1599,"din", false,-1, 31,0);
    tracep->declBus(c+445,"dout", false,-1, 31,0);
    tracep->declBit(c+1591,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1658,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1599,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBus(c+430,"din", false,-1, 31,0);
    tracep->declBus(c+442,"dout", false,-1, 31,0);
    tracep->declBit(c+549,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1658,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1599,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBus(c+429,"din", false,-1, 31,0);
    tracep->declBus(c+440,"dout", false,-1, 31,0);
    tracep->declBit(c+550,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1658,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1662,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBus(c+431,"din", false,-1, 31,0);
    tracep->declBus(c+441,"dout", false,-1, 31,0);
    tracep->declBit(c+551,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1658,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1599,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBus(c+431,"din", false,-1, 31,0);
    tracep->declBus(c+443,"dout", false,-1, 31,0);
    tracep->declBit(c+552,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1658,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1663,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1551,"rst", false,-1);
    tracep->declBus(c+1599,"din", false,-1, 31,0);
    tracep->declBus(c+444,"dout", false,-1, 31,0);
    tracep->declBit(c+1591,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"io_d", false,-1);
    tracep->declBit(c+553,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"io_d", false,-1);
    tracep->declBit(c+553,"io_q", false,-1);
    tracep->declBit(c+553,"sync_0", false,-1);
    tracep->declBit(c+554,"sync_1", false,-1);
    tracep->declBit(c+555,"sync_2", false,-1);
    tracep->declBit(c+556,"sync_3", false,-1);
    tracep->declBit(c+557,"sync_4", false,-1);
    tracep->declBit(c+558,"sync_5", false,-1);
    tracep->declBit(c+559,"sync_6", false,-1);
    tracep->declBit(c+560,"sync_7", false,-1);
    tracep->declBit(c+561,"sync_8", false,-1);
    tracep->declBit(c+562,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1328,"auto_in_psel", false,-1);
    tracep->declBit(c+1329,"auto_in_penable", false,-1);
    tracep->declBit(c+1318,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1305,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1317,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+630,"auto_in_pready", false,-1);
    tracep->declBit(c+1590,"auto_in_pslverr", false,-1);
    tracep->declBus(c+631,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1514,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1515,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1516,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1517,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1518,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1519,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1520,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1521,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1522,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1523,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBus(c+1306,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1328,"in_psel", false,-1);
    tracep->declBit(c+1329,"in_penable", false,-1);
    tracep->declBus(c+1317,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1318,"in_pwrite", false,-1);
    tracep->declBus(c+1319,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+630,"in_pready", false,-1);
    tracep->declBus(c+631,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1590,"in_pslverr", false,-1);
    tracep->declBus(c+1514,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1515,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1516,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1517,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1518,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1519,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1520,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1521,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1522,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1523,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1600,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1664,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1665,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1666,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1667,"ONE", false,-1, 7,0);
    tracep->declBus(c+1668,"TWO", false,-1, 7,0);
    tracep->declBus(c+1669,"THREE", false,-1, 7,0);
    tracep->declBus(c+1670,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1671,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1672,"SIX", false,-1, 7,0);
    tracep->declBus(c+1673,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1674,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1675,"NINE", false,-1, 7,0);
    tracep->declBus(c+1676,"A", false,-1, 7,0);
    tracep->declBus(c+1677,"B", false,-1, 7,0);
    tracep->declBus(c+1678,"C", false,-1, 7,0);
    tracep->declBus(c+1679,"D", false,-1, 7,0);
    tracep->declBus(c+1680,"E", false,-1, 7,0);
    tracep->declBus(c+1681,"F", false,-1, 7,0);
    tracep->declBus(c+662,"led_reg", false,-1, 15,0);
    tracep->declBus(c+663,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+664+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1469,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1470,"write_en", false,-1);
    tracep->declBit(c+1471,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1326,"auto_in_psel", false,-1);
    tracep->declBit(c+1327,"auto_in_penable", false,-1);
    tracep->declBit(c+1318,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1305,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1317,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+628,"auto_in_pready", false,-1);
    tracep->declBit(c+1589,"auto_in_pslverr", false,-1);
    tracep->declBus(c+629,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1524,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1525,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBus(c+1306,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1326,"in_psel", false,-1);
    tracep->declBit(c+1327,"in_penable", false,-1);
    tracep->declBus(c+1317,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1318,"in_pwrite", false,-1);
    tracep->declBus(c+1319,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+628,"in_pready", false,-1);
    tracep->declBus(c+629,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1589,"in_pslverr", false,-1);
    tracep->declBit(c+1524,"ps2_clk", false,-1);
    tracep->declBit(c+1525,"ps2_data", false,-1);
    tracep->declBus(c+1682,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1683,"EXP", false,-1, 7,0);
    tracep->declBus(c+1310,"state", false,-1, 1,0);
    tracep->declBus(c+1311,"counter", false,-1, 3,0);
    tracep->declBus(c+1312,"buffer", false,-1, 7,0);
    tracep->declBus(c+1313,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1314,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1565,"ready", false,-1);
    tracep->declBus(c+1566,"rdata", false,-1, 31,0);
    tracep->declBit(c+1472,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1103,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1104,"auto_in_wvalid", false,-1);
    tracep->declBit(c+213,"auto_in_arready", false,-1);
    tracep->declBit(c+1105,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1034,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1106,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+614,"auto_in_rready", false,-1);
    tracep->declBit(c+214,"auto_in_rvalid", false,-1);
    tracep->declBus(c+215,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+214,"state", false,-1);
    tracep->declBus(c+216,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+215,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1142,"raddr", false,-1, 31,0);
    tracep->declBit(c+1143,"ren", false,-1);
    tracep->declBus(c+1144,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1330,"auto_in_psel", false,-1);
    tracep->declBit(c+1331,"auto_in_penable", false,-1);
    tracep->declBit(c+1318,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1304,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1317,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_in_pready", false,-1);
    tracep->declBit(c+1591,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1206,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1508,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1509,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1535,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBus(c+1304,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1330,"in_psel", false,-1);
    tracep->declBit(c+1331,"in_penable", false,-1);
    tracep->declBus(c+1317,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1318,"in_pwrite", false,-1);
    tracep->declBus(c+1319,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"in_pready", false,-1);
    tracep->declBus(c+1206,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1591,"in_pslverr", false,-1);
    tracep->declBit(c+1508,"qspi_sck", false,-1);
    tracep->declBit(c+1509,"qspi_ce_n", false,-1);
    tracep->declBus(c+1535,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1535,"din", false,-1, 3,0);
    tracep->declBus(c+1510,"dout", false,-1, 3,0);
    tracep->declBus(c+1511,"douten", false,-1, 3,0);
    tracep->declBit(c+1567,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1512,"clk_i", false,-1);
    tracep->declBit(c+1513,"rst_i", false,-1);
    tracep->declBus(c+1304,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1319,"dat_i", false,-1, 31,0);
    tracep->declBus(c+1206,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1320,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1330,"cyc_i", false,-1);
    tracep->declBit(c+1330,"stb_i", false,-1);
    tracep->declBit(c+1567,"ack_o", false,-1);
    tracep->declBit(c+1318,"we_i", false,-1);
    tracep->declBit(c+1508,"sck", false,-1);
    tracep->declBit(c+1509,"ce_n", false,-1);
    tracep->declBus(c+1535,"din", false,-1, 3,0);
    tracep->declBus(c+1510,"dout", false,-1, 3,0);
    tracep->declBus(c+1511,"douten", false,-1, 3,0);
    tracep->declBus(c+1645,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1646,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+672,"mr_sck", false,-1);
    tracep->declBit(c+673,"mr_ce_n", false,-1);
    tracep->declBus(c+1535,"mr_din", false,-1, 3,0);
    tracep->declBus(c+674,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+675,"mr_doe", false,-1);
    tracep->declBit(c+676,"mw_sck", false,-1);
    tracep->declBit(c+677,"mw_ce_n", false,-1);
    tracep->declBus(c+1535,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1473,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+678,"mw_doe", false,-1);
    tracep->declBit(c+1474,"mr_rd", false,-1);
    tracep->declBit(c+679,"mr_done", false,-1);
    tracep->declBit(c+1475,"mw_wr", false,-1);
    tracep->declBit(c+1476,"mw_done", false,-1);
    tracep->declBit(c+1330,"wb_valid", false,-1);
    tracep->declBit(c+1477,"wb_we", false,-1);
    tracep->declBit(c+1478,"wb_re", false,-1);
    tracep->declBit(c+680,"state", false,-1);
    tracep->declBit(c+1479,"nstate", false,-1);
    tracep->declBus(c+1480,"size", false,-1, 2,0);
    tracep->declBus(c+1481,"byte0", false,-1, 7,0);
    tracep->declBus(c+1482,"byte1", false,-1, 7,0);
    tracep->declBus(c+1483,"byte2", false,-1, 7,0);
    tracep->declBus(c+1484,"byte3", false,-1, 7,0);
    tracep->declBus(c+1307,"wdata", false,-1, 31,0);
    tracep->declBit(c+931,"qpi_flag", false,-1);
    tracep->declBit(c+932,"qpi_sck", false,-1);
    tracep->declBit(c+933,"qpi_ce_n", false,-1);
    tracep->declBus(c+934,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+935,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+936,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1568,"rst_n", false,-1);
    tracep->declBus(c+1308,"addr", false,-1, 23,0);
    tracep->declBit(c+1474,"rd", false,-1);
    tracep->declBus(c+1595,"size", false,-1, 2,0);
    tracep->declBit(c+679,"done", false,-1);
    tracep->declBus(c+1206,"line", false,-1, 31,0);
    tracep->declBit(c+672,"sck", false,-1);
    tracep->declBit(c+673,"ce_n", false,-1);
    tracep->declBus(c+1535,"din", false,-1, 3,0);
    tracep->declBus(c+674,"dout", false,-1, 3,0);
    tracep->declBit(c+675,"douten", false,-1);
    tracep->declBus(c+1645,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1646,"READ", false,-1, 0,0);
    tracep->declBus(c+1684,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+681,"state", false,-1);
    tracep->declBit(c+1485,"nstate", false,-1);
    tracep->declBus(c+682,"counter", false,-1, 7,0);
    tracep->declBus(c+683,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1208+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1685,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+684,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1568,"rst_n", false,-1);
    tracep->declBus(c+1309,"addr", false,-1, 23,0);
    tracep->declBus(c+1307,"line", false,-1, 31,0);
    tracep->declBus(c+1480,"size", false,-1, 2,0);
    tracep->declBit(c+1475,"wr", false,-1);
    tracep->declBit(c+1476,"done", false,-1);
    tracep->declBit(c+676,"sck", false,-1);
    tracep->declBit(c+677,"ce_n", false,-1);
    tracep->declBus(c+1535,"din", false,-1, 3,0);
    tracep->declBus(c+1473,"dout", false,-1, 3,0);
    tracep->declBit(c+678,"douten", false,-1);
    tracep->declBus(c+1645,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1646,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1486,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+685,"state", false,-1);
    tracep->declBit(c+1487,"nstate", false,-1);
    tracep->declBus(c+686,"counter", false,-1, 7,0);
    tracep->declBus(c+687,"saddr", false,-1, 23,0);
    tracep->declBus(c+1686,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1265,"auto_in_awready", false,-1);
    tracep->declBit(c+1266,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1267,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1268,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1146,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1270,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1271,"auto_in_wready", false,-1);
    tracep->declBit(c+1272,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1147,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_in_wlast", false,-1);
    tracep->declBit(c+1542,"auto_in_bready", false,-1);
    tracep->declBit(c+645,"auto_in_bvalid", false,-1);
    tracep->declBus(c+642,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1582,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1259,"auto_in_arready", false,-1);
    tracep->declBit(c+1260,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1261,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1262,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1263,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1145,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1264,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1351,"auto_in_rready", false,-1);
    tracep->declBit(c+641,"auto_in_rvalid", false,-1);
    tracep->declBus(c+642,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+643,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1582,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+644,"auto_in_rlast", false,-1);
    tracep->declBit(c+1536,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+618,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1213,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1214,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1215,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1216,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1217,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1218,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+619,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1242,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1265,"in_awready", false,-1);
    tracep->declBit(c+1266,"in_awvalid", false,-1);
    tracep->declBus(c+1268,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1267,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1269,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1146,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1270,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1271,"in_wready", false,-1);
    tracep->declBit(c+1272,"in_wvalid", false,-1);
    tracep->declBus(c+1147,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"in_wlast", false,-1);
    tracep->declBit(c+1542,"in_bready", false,-1);
    tracep->declBit(c+645,"in_bvalid", false,-1);
    tracep->declBus(c+1582,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+642,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1259,"in_arready", false,-1);
    tracep->declBit(c+1260,"in_arvalid", false,-1);
    tracep->declBus(c+1262,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1261,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1263,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1145,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1264,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1351,"in_rready", false,-1);
    tracep->declBit(c+641,"in_rvalid", false,-1);
    tracep->declBus(c+1582,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+643,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+644,"in_rlast", false,-1);
    tracep->declBus(c+642,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1536,"sdram_clk", false,-1);
    tracep->declBit(c+618,"sdram_cke", false,-1);
    tracep->declBit(c+1213,"sdram_cs", false,-1);
    tracep->declBit(c+1214,"sdram_ras", false,-1);
    tracep->declBit(c+1215,"sdram_cas", false,-1);
    tracep->declBit(c+1216,"sdram_we", false,-1);
    tracep->declBus(c+1217,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1218,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+619,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1242,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+688,"sdram_dout_en", false,-1);
    tracep->declBus(c+689,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1512,"clk_i", false,-1);
    tracep->declBit(c+1513,"rst_i", false,-1);
    tracep->declBit(c+1266,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1268,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1267,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1269,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1270,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1272,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1147,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1148,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1149,"inport_wlast_i", false,-1);
    tracep->declBit(c+1542,"inport_bready_i", false,-1);
    tracep->declBit(c+1260,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1262,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1261,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1263,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1264,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1351,"inport_rready_i", false,-1);
    tracep->declBus(c+1242,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1265,"inport_awready_o", false,-1);
    tracep->declBit(c+1271,"inport_wready_o", false,-1);
    tracep->declBit(c+645,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1582,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+642,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1259,"inport_arready_o", false,-1);
    tracep->declBit(c+641,"inport_rvalid_o", false,-1);
    tracep->declBus(c+643,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1582,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+642,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+644,"inport_rlast_o", false,-1);
    tracep->declBit(c+1536,"sdram_clk_o", false,-1);
    tracep->declBit(c+618,"sdram_cke_o", false,-1);
    tracep->declBit(c+1213,"sdram_cs_o", false,-1);
    tracep->declBit(c+1214,"sdram_ras_o", false,-1);
    tracep->declBit(c+1215,"sdram_cas_o", false,-1);
    tracep->declBit(c+1216,"sdram_we_o", false,-1);
    tracep->declBus(c+619,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1217,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1218,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+689,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+688,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1687,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1688,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1689,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1640,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1283,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1284,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1285,"ram_rd_w", false,-1);
    tracep->declBit(c+1219,"ram_accept_w", false,-1);
    tracep->declBus(c+1147,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+690,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1286,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+691,"ram_ack_w", false,-1);
    tracep->declBit(c+1591,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1512,"clk_i", false,-1);
    tracep->declBit(c+1513,"rst_i", false,-1);
    tracep->declBit(c+1266,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1268,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1267,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1269,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1270,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1272,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1147,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1148,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1149,"axi_wlast_i", false,-1);
    tracep->declBit(c+1542,"axi_bready_i", false,-1);
    tracep->declBit(c+1260,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1262,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1261,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1263,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1264,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1351,"axi_rready_i", false,-1);
    tracep->declBit(c+1219,"ram_accept_i", false,-1);
    tracep->declBit(c+691,"ram_ack_i", false,-1);
    tracep->declBit(c+1591,"ram_error_i", false,-1);
    tracep->declBus(c+690,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1265,"axi_awready_o", false,-1);
    tracep->declBit(c+1271,"axi_wready_o", false,-1);
    tracep->declBit(c+645,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1582,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+642,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1259,"axi_arready_o", false,-1);
    tracep->declBit(c+641,"axi_rvalid_o", false,-1);
    tracep->declBus(c+643,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1582,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+642,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+644,"axi_rlast_o", false,-1);
    tracep->declBus(c+1284,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1285,"ram_rd_o", false,-1);
    tracep->declBus(c+1286,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1283,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1147,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+692,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+693,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+694,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+695,"req_rd_q", false,-1);
    tracep->declBit(c+696,"req_wr_q", false,-1);
    tracep->declBus(c+697,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+698,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+699,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+700,"req_prio_q", false,-1);
    tracep->declBit(c+701,"req_hold_rd_q", false,-1);
    tracep->declBit(c+702,"req_hold_wr_q", false,-1);
    tracep->declBit(c+703,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1287,"req_push_w", false,-1);
    tracep->declBus(c+1569,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+704,"req_out_valid_w", false,-1);
    tracep->declBus(c+705,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1488,"resp_accept_w", false,-1);
    tracep->declBit(c+706,"resp_is_write_w", false,-1);
    tracep->declBit(c+707,"resp_is_read_w", false,-1);
    tracep->declBit(c+644,"resp_is_last_w", false,-1);
    tracep->declBus(c+642,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+708,"resp_valid_w", false,-1);
    tracep->declBit(c+709,"write_prio_w", false,-1);
    tracep->declBit(c+710,"read_prio_w", false,-1);
    tracep->declBit(c+1288,"write_active_w", false,-1);
    tracep->declBit(c+1285,"read_active_w", false,-1);
    tracep->declBus(c+1283,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1289,"wr_w", false,-1);
    tracep->declBit(c+1285,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1690,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1654,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1640,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1512,"clk_i", false,-1);
    tracep->declBit(c+1513,"rst_i", false,-1);
    tracep->declBus(c+1569,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1287,"push_i", false,-1);
    tracep->declBit(c+1488,"pop_i", false,-1);
    tracep->declBus(c+705,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+703,"accept_o", false,-1);
    tracep->declBit(c+704,"valid_o", false,-1);
    tracep->declBus(c+1691,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+711+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+715,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+716,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+717,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1658,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1654,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1640,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1512,"clk_i", false,-1);
    tracep->declBit(c+1513,"rst_i", false,-1);
    tracep->declBus(c+690,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+691,"push_i", false,-1);
    tracep->declBit(c+1488,"pop_i", false,-1);
    tracep->declBus(c+643,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+718,"accept_o", false,-1);
    tracep->declBit(c+708,"valid_o", false,-1);
    tracep->declBus(c+1691,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+719+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+723,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+724,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+725,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1512,"clk_i", false,-1);
    tracep->declBit(c+1513,"rst_i", false,-1);
    tracep->declBus(c+1284,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1285,"inport_rd_i", false,-1);
    tracep->declBus(c+1286,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1283,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1147,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1242,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1219,"inport_accept_o", false,-1);
    tracep->declBit(c+691,"inport_ack_o", false,-1);
    tracep->declBit(c+1591,"inport_error_o", false,-1);
    tracep->declBus(c+690,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1536,"sdram_clk_o", false,-1);
    tracep->declBit(c+618,"sdram_cke_o", false,-1);
    tracep->declBit(c+1213,"sdram_cs_o", false,-1);
    tracep->declBit(c+1214,"sdram_ras_o", false,-1);
    tracep->declBit(c+1215,"sdram_cas_o", false,-1);
    tracep->declBit(c+1216,"sdram_we_o", false,-1);
    tracep->declBus(c+619,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1217,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1218,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+689,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+688,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1687,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1688,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1689,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1640,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1691,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1654,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1692,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1693,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1694,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1695,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1696,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1654,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1653,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1649,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1651,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1650,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1652,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1648,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1647,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1598,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1697,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1654,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1598,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1647,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1648,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1649,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1650,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1651,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1652,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1653,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1698,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1699,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1700,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1700,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1658,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1700,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1640,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1640,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1690,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1283,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1284,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1285,"ram_rd_w", false,-1);
    tracep->declBit(c+1219,"ram_accept_w", false,-1);
    tracep->declBus(c+1147,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+690,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+691,"ram_ack_w", false,-1);
    tracep->declBit(c+1290,"ram_req_w", false,-1);
    tracep->declBus(c+1220,"command_q", false,-1, 3,0);
    tracep->declBus(c+1217,"addr_q", false,-1, 12,0);
    tracep->declBus(c+689,"data_q", false,-1, 31,0);
    tracep->declBit(c+726,"data_rd_en_q", false,-1);
    tracep->declBus(c+619,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+618,"cke_q", false,-1);
    tracep->declBus(c+1218,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1701,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+727,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1242,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+728,"refresh_q", false,-1);
    tracep->declBus(c+1221,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+729+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1222,"state_q", false,-1, 3,0);
    tracep->declBus(c+1291,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1292,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+737,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+738,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1293,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1294,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1295,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1654,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+739,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1296,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1702,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1223,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+740,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+690,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+741,"idx", false,-1, 31,0);
    tracep->declBus(c+742,"rd_q", false,-1, 3,0);
    tracep->declBit(c+691,"ack_q", false,-1);
    tracep->declArray(c+1224,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1336,"auto_in_psel", false,-1);
    tracep->declBit(c+1337,"auto_in_penable", false,-1);
    tracep->declBit(c+1318,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1325,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1317,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1539,"auto_in_pready", false,-1);
    tracep->declBit(c+1591,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1338,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+616,"spi_bundle_sck", false,-1);
    tracep->declBus(c+617,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1212,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1534,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1657,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1703,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1692,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBus(c+1489,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1336,"in_psel", false,-1);
    tracep->declBit(c+1337,"in_penable", false,-1);
    tracep->declBus(c+1317,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1318,"in_pwrite", false,-1);
    tracep->declBus(c+1319,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1539,"in_pready", false,-1);
    tracep->declBus(c+1338,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1591,"in_pslverr", false,-1);
    tracep->declBit(c+616,"spi_sck", false,-1);
    tracep->declBus(c+617,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1212,"spi_mosi", false,-1);
    tracep->declBit(c+1534,"spi_miso", false,-1);
    tracep->declBit(c+743,"spi_irq_out", false,-1);
    tracep->declBus(c+1490,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1491,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1492,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1493,"wb_we_i", false,-1);
    tracep->declBit(c+1494,"wb_stb_i", false,-1);
    tracep->declBit(c+1495,"wb_cyc_i", false,-1);
    tracep->declBit(c+744,"wb_ack_o", false,-1);
    tracep->declBus(c+745,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1592,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1581,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1593,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1594,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1595,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1704,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1705,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1706,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+563,"state", false,-1, 2,0);
    tracep->declBus(c+564,"next_state", false,-1, 2,0);
    tracep->declBus(c+565,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+566,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+567,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+568,"flash_pwrite", false,-1);
    tracep->declBit(c+569,"flash_psel", false,-1);
    tracep->declBit(c+570,"flash_penable", false,-1);
    tracep->declBit(c+571,"flash_pready", false,-1);
    tracep->declBus(c+572,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1655,"Tp", false,-1, 31,0);
    tracep->declBit(c+1512,"wb_clk_i", false,-1);
    tracep->declBit(c+1513,"wb_rst_i", false,-1);
    tracep->declBus(c+1490,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1491,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+745,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1492,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1493,"wb_we_i", false,-1);
    tracep->declBit(c+1494,"wb_stb_i", false,-1);
    tracep->declBit(c+1495,"wb_cyc_i", false,-1);
    tracep->declBit(c+744,"wb_ack_o", false,-1);
    tracep->declBit(c+1591,"wb_err_o", false,-1);
    tracep->declBit(c+743,"wb_int_o", false,-1);
    tracep->declBus(c+617,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+616,"sclk_pad_o", false,-1);
    tracep->declBit(c+1212,"mosi_pad_o", false,-1);
    tracep->declBit(c+1534,"miso_pad_i", false,-1);
    tracep->declBus(c+746,"divider", false,-1, 15,0);
    tracep->declBus(c+747,"ctrl", false,-1, 13,0);
    tracep->declBus(c+748,"ss", false,-1, 7,0);
    tracep->declBus(c+1496,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+749,"rx", false,-1, 127,0);
    tracep->declBit(c+753,"rx_negedge", false,-1);
    tracep->declBit(c+754,"tx_negedge", false,-1);
    tracep->declBus(c+755,"char_len", false,-1, 6,0);
    tracep->declBit(c+756,"go", false,-1);
    tracep->declBit(c+757,"lsb", false,-1);
    tracep->declBit(c+758,"ie", false,-1);
    tracep->declBit(c+759,"ass", false,-1);
    tracep->declBit(c+1497,"spi_divider_sel", false,-1);
    tracep->declBit(c+1498,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1499,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1500,"spi_ss_sel", false,-1);
    tracep->declBit(c+760,"tip", false,-1);
    tracep->declBit(c+761,"pos_edge", false,-1);
    tracep->declBit(c+762,"neg_edge", false,-1);
    tracep->declBit(c+763,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1655,"Tp", false,-1, 31,0);
    tracep->declBit(c+1512,"clk_in", false,-1);
    tracep->declBit(c+1513,"rst", false,-1);
    tracep->declBit(c+760,"enable", false,-1);
    tracep->declBit(c+756,"go", false,-1);
    tracep->declBit(c+763,"last_clk", false,-1);
    tracep->declBus(c+746,"divider", false,-1, 15,0);
    tracep->declBit(c+616,"clk_out", false,-1);
    tracep->declBit(c+761,"pos_edge", false,-1);
    tracep->declBit(c+762,"neg_edge", false,-1);
    tracep->declBus(c+764,"cnt", false,-1, 15,0);
    tracep->declBit(c+765,"cnt_zero", false,-1);
    tracep->declBit(c+766,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1655,"Tp", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1513,"rst", false,-1);
    tracep->declBus(c+1501,"latch", false,-1, 3,0);
    tracep->declBus(c+1492,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+755,"len", false,-1, 6,0);
    tracep->declBit(c+757,"lsb", false,-1);
    tracep->declBit(c+756,"go", false,-1);
    tracep->declBit(c+761,"pos_edge", false,-1);
    tracep->declBit(c+762,"neg_edge", false,-1);
    tracep->declBit(c+753,"rx_negedge", false,-1);
    tracep->declBit(c+754,"tx_negedge", false,-1);
    tracep->declBit(c+760,"tip", false,-1);
    tracep->declBit(c+763,"last", false,-1);
    tracep->declBus(c+1491,"p_in", false,-1, 31,0);
    tracep->declArray(c+749,"p_out", false,-1, 127,0);
    tracep->declBit(c+616,"s_clk", false,-1);
    tracep->declBit(c+1534,"s_in", false,-1);
    tracep->declBit(c+1212,"s_out", false,-1);
    tracep->declBus(c+767,"cnt", false,-1, 7,0);
    tracep->declArray(c+749,"data", false,-1, 127,0);
    tracep->declBus(c+768,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+769,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+770,"rx_clk", false,-1);
    tracep->declBit(c+771,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1332,"auto_in_psel", false,-1);
    tracep->declBit(c+1333,"auto_in_penable", false,-1);
    tracep->declBit(c+1318,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1305,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1317,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1334,"auto_in_pready", false,-1);
    tracep->declBit(c+1591,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1335,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1532,"uart_rx", false,-1);
    tracep->declBit(c+1533,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1332,"in_psel", false,-1);
    tracep->declBit(c+1333,"in_penable", false,-1);
    tracep->declBus(c+1317,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1334,"in_pready", false,-1);
    tracep->declBit(c+1591,"in_pslverr", false,-1);
    tracep->declBus(c+1306,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1318,"in_pwrite", false,-1);
    tracep->declBus(c+1335,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1319,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1532,"uart_rx", false,-1);
    tracep->declBit(c+1533,"uart_tx", false,-1);
    tracep->declBit(c+772,"rtsn", false,-1);
    tracep->declBit(c+1591,"ctsn", false,-1);
    tracep->declBit(c+773,"dtr_pad_o", false,-1);
    tracep->declBit(c+1591,"dsr_pad_i", false,-1);
    tracep->declBit(c+1591,"ri_pad_i", false,-1);
    tracep->declBit(c+1591,"dcd_pad_i", false,-1);
    tracep->declBit(c+774,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1502,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1503,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+573,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1504,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+775,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1513,"wb_rst_i", false,-1);
    tracep->declBus(c+1502,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1505,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1504,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1533,"stx_pad_o", false,-1);
    tracep->declBit(c+1532,"srx_pad_i", false,-1);
    tracep->declBus(c+1698,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+775,"rts_pad_o", false,-1);
    tracep->declBit(c+773,"dtr_pad_o", false,-1);
    tracep->declBit(c+774,"int_o", false,-1);
    tracep->declBit(c+776,"enable", false,-1);
    tracep->declBit(c+777,"srx_pad", false,-1);
    tracep->declBus(c+778,"ier", false,-1, 3,0);
    tracep->declBus(c+779,"iir", false,-1, 3,0);
    tracep->declBus(c+780,"fcr", false,-1, 1,0);
    tracep->declBus(c+781,"mcr", false,-1, 4,0);
    tracep->declBus(c+782,"lcr", false,-1, 7,0);
    tracep->declBus(c+783,"msr", false,-1, 7,0);
    tracep->declBus(c+784,"dl", false,-1, 15,0);
    tracep->declBus(c+785,"scratch", false,-1, 7,0);
    tracep->declBit(c+786,"start_dlc", false,-1);
    tracep->declBit(c+787,"lsr_mask_d", false,-1);
    tracep->declBit(c+788,"msi_reset", false,-1);
    tracep->declBus(c+789,"dlc", false,-1, 15,0);
    tracep->declBus(c+790,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+791,"rx_reset", false,-1);
    tracep->declBit(c+792,"tx_reset", false,-1);
    tracep->declBit(c+793,"dlab", false,-1);
    tracep->declBit(c+1596,"cts_pad_i", false,-1);
    tracep->declBit(c+1591,"dsr_pad_i", false,-1);
    tracep->declBit(c+1591,"ri_pad_i", false,-1);
    tracep->declBit(c+1591,"dcd_pad_i", false,-1);
    tracep->declBit(c+794,"loopback", false,-1);
    tracep->declBit(c+1591,"cts", false,-1);
    tracep->declBit(c+1596,"dsr", false,-1);
    tracep->declBit(c+1596,"ri", false,-1);
    tracep->declBit(c+1596,"dcd", false,-1);
    tracep->declBit(c+795,"cts_c", false,-1);
    tracep->declBit(c+796,"dsr_c", false,-1);
    tracep->declBit(c+797,"ri_c", false,-1);
    tracep->declBit(c+798,"dcd_c", false,-1);
    tracep->declBus(c+799,"lsr", false,-1, 7,0);
    tracep->declBit(c+800,"lsr0", false,-1);
    tracep->declBit(c+801,"lsr1", false,-1);
    tracep->declBit(c+802,"lsr2", false,-1);
    tracep->declBit(c+803,"lsr3", false,-1);
    tracep->declBit(c+804,"lsr4", false,-1);
    tracep->declBit(c+805,"lsr5", false,-1);
    tracep->declBit(c+806,"lsr6", false,-1);
    tracep->declBit(c+807,"lsr7", false,-1);
    tracep->declBit(c+808,"lsr0r", false,-1);
    tracep->declBit(c+809,"lsr1r", false,-1);
    tracep->declBit(c+810,"lsr2r", false,-1);
    tracep->declBit(c+811,"lsr3r", false,-1);
    tracep->declBit(c+812,"lsr4r", false,-1);
    tracep->declBit(c+813,"lsr5r", false,-1);
    tracep->declBit(c+814,"lsr6r", false,-1);
    tracep->declBit(c+815,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+816,"rls_int", false,-1);
    tracep->declBit(c+817,"rda_int", false,-1);
    tracep->declBit(c+818,"ti_int", false,-1);
    tracep->declBit(c+819,"thre_int", false,-1);
    tracep->declBit(c+820,"ms_int", false,-1);
    tracep->declBit(c+821,"tf_push", false,-1);
    tracep->declBit(c+822,"rf_pop", false,-1);
    tracep->declBus(c+1570,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+823,"rf_error_bit", false,-1);
    tracep->declBit(c+801,"rf_overrun", false,-1);
    tracep->declBit(c+824,"rf_push_pulse", false,-1);
    tracep->declBus(c+825,"rf_count", false,-1, 4,0);
    tracep->declBus(c+826,"tf_count", false,-1, 4,0);
    tracep->declBus(c+827,"tstate", false,-1, 2,0);
    tracep->declBus(c+828,"rstate", false,-1, 3,0);
    tracep->declBus(c+829,"counter_t", false,-1, 9,0);
    tracep->declBit(c+830,"thre_set_en", false,-1);
    tracep->declBus(c+831,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+832,"block_value", false,-1, 7,0);
    tracep->declBit(c+833,"serial_out", false,-1);
    tracep->declBit(c+834,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+835,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+836,"lsr0_d", false,-1);
    tracep->declBit(c+837,"lsr1_d", false,-1);
    tracep->declBit(c+838,"lsr2_d", false,-1);
    tracep->declBit(c+839,"lsr3_d", false,-1);
    tracep->declBit(c+840,"lsr4_d", false,-1);
    tracep->declBit(c+841,"lsr5_d", false,-1);
    tracep->declBit(c+842,"lsr6_d", false,-1);
    tracep->declBit(c+843,"lsr7_d", false,-1);
    tracep->declBit(c+844,"rls_int_d", false,-1);
    tracep->declBit(c+845,"thre_int_d", false,-1);
    tracep->declBit(c+846,"ms_int_d", false,-1);
    tracep->declBit(c+847,"ti_int_d", false,-1);
    tracep->declBit(c+848,"rda_int_d", false,-1);
    tracep->declBit(c+849,"rls_int_rise", false,-1);
    tracep->declBit(c+850,"thre_int_rise", false,-1);
    tracep->declBit(c+851,"ms_int_rise", false,-1);
    tracep->declBit(c+852,"ti_int_rise", false,-1);
    tracep->declBit(c+853,"rda_int_rise", false,-1);
    tracep->declBit(c+854,"rls_int_pnd", false,-1);
    tracep->declBit(c+855,"rda_int_pnd", false,-1);
    tracep->declBit(c+856,"thre_int_pnd", false,-1);
    tracep->declBit(c+857,"ms_int_pnd", false,-1);
    tracep->declBit(c+858,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1655,"Tp", false,-1, 31,0);
    tracep->declBus(c+1655,"width", false,-1, 31,0);
    tracep->declBus(c+1646,"init_value", false,-1, 0,0);
    tracep->declBit(c+1513,"rst_i", false,-1);
    tracep->declBit(c+1512,"clk_i", false,-1);
    tracep->declBit(c+1591,"stage1_rst_i", false,-1);
    tracep->declBit(c+1596,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1532,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+777,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+859,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1513,"wb_rst_i", false,-1);
    tracep->declBus(c+782,"lcr", false,-1, 7,0);
    tracep->declBit(c+822,"rf_pop", false,-1);
    tracep->declBit(c+834,"srx_pad_i", false,-1);
    tracep->declBit(c+776,"enable", false,-1);
    tracep->declBit(c+791,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+829,"counter_t", false,-1, 9,0);
    tracep->declBus(c+825,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1570,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+801,"rf_overrun", false,-1);
    tracep->declBit(c+823,"rf_error_bit", false,-1);
    tracep->declBus(c+828,"rstate", false,-1, 3,0);
    tracep->declBit(c+824,"rf_push_pulse", false,-1);
    tracep->declBus(c+860,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+861,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+862,"rshift", false,-1, 7,0);
    tracep->declBit(c+863,"rparity", false,-1);
    tracep->declBit(c+864,"rparity_error", false,-1);
    tracep->declBit(c+865,"rframing_error", false,-1);
    tracep->declBit(c+866,"rbit_in", false,-1);
    tracep->declBit(c+867,"rparity_xor", false,-1);
    tracep->declBus(c+868,"counter_b", false,-1, 7,0);
    tracep->declBit(c+869,"rf_push_q", false,-1);
    tracep->declBus(c+870,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+871,"rf_push", false,-1);
    tracep->declBit(c+872,"break_error", false,-1);
    tracep->declBit(c+873,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+874,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+875,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+876,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1598,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1647,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1648,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1649,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1650,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1651,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1652,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1653,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1698,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1699,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1707,"sr_push", false,-1, 3,0);
    tracep->declBus(c+877,"toc_value", false,-1, 9,0);
    tracep->declBus(c+878,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1708,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1709,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1654,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1710,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1513,"wb_rst_i", false,-1);
    tracep->declBit(c+824,"push", false,-1);
    tracep->declBit(c+822,"pop", false,-1);
    tracep->declBus(c+870,"data_in", false,-1, 10,0);
    tracep->declBit(c+791,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1570,"data_out", false,-1, 10,0);
    tracep->declBit(c+801,"overrun", false,-1);
    tracep->declBus(c+825,"count", false,-1, 4,0);
    tracep->declBit(c+823,"error_bit", false,-1);
    tracep->declBus(c+1571,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+879+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+895,"top", false,-1, 3,0);
    tracep->declBus(c+896,"bottom", false,-1, 3,0);
    tracep->declBus(c+897,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+898,"word0", false,-1, 2,0);
    tracep->declBus(c+899,"word1", false,-1, 2,0);
    tracep->declBus(c+900,"word2", false,-1, 2,0);
    tracep->declBus(c+901,"word3", false,-1, 2,0);
    tracep->declBus(c+902,"word4", false,-1, 2,0);
    tracep->declBus(c+903,"word5", false,-1, 2,0);
    tracep->declBus(c+904,"word6", false,-1, 2,0);
    tracep->declBus(c+905,"word7", false,-1, 2,0);
    tracep->declBus(c+906,"word8", false,-1, 2,0);
    tracep->declBus(c+907,"word9", false,-1, 2,0);
    tracep->declBus(c+908,"word10", false,-1, 2,0);
    tracep->declBus(c+909,"word11", false,-1, 2,0);
    tracep->declBus(c+910,"word12", false,-1, 2,0);
    tracep->declBus(c+911,"word13", false,-1, 2,0);
    tracep->declBus(c+912,"word14", false,-1, 2,0);
    tracep->declBus(c+913,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1654,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1692,"data_width", false,-1, 31,0);
    tracep->declBus(c+1709,"depth", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+824,"we", false,-1);
    tracep->declBus(c+895,"a", false,-1, 3,0);
    tracep->declBus(c+896,"dpra", false,-1, 3,0);
    tracep->declBus(c+914,"di", false,-1, 7,0);
    tracep->declBus(c+1571,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+574+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1513,"wb_rst_i", false,-1);
    tracep->declBus(c+782,"lcr", false,-1, 7,0);
    tracep->declBit(c+821,"tf_push", false,-1);
    tracep->declBus(c+1505,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+776,"enable", false,-1);
    tracep->declBit(c+792,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+833,"stx_pad_o", false,-1);
    tracep->declBus(c+827,"tstate", false,-1, 2,0);
    tracep->declBus(c+826,"tf_count", false,-1, 4,0);
    tracep->declBus(c+915,"counter", false,-1, 4,0);
    tracep->declBus(c+916,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+917,"shift_out", false,-1, 6,0);
    tracep->declBit(c+918,"stx_o_tmp", false,-1);
    tracep->declBit(c+919,"parity_xor", false,-1);
    tracep->declBit(c+920,"tf_pop", false,-1);
    tracep->declBit(c+921,"bit_out", false,-1);
    tracep->declBus(c+1505,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1572,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+922,"tf_overrun", false,-1);
    tracep->declBus(c+1592,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1581,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1593,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1594,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1595,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1704,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1692,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1709,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1654,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1710,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+1513,"wb_rst_i", false,-1);
    tracep->declBit(c+821,"push", false,-1);
    tracep->declBit(c+920,"pop", false,-1);
    tracep->declBus(c+1505,"data_in", false,-1, 7,0);
    tracep->declBit(c+792,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1572,"data_out", false,-1, 7,0);
    tracep->declBit(c+922,"overrun", false,-1);
    tracep->declBus(c+826,"count", false,-1, 4,0);
    tracep->declBus(c+923,"top", false,-1, 3,0);
    tracep->declBus(c+924,"bottom", false,-1, 3,0);
    tracep->declBus(c+925,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1654,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1692,"data_width", false,-1, 31,0);
    tracep->declBus(c+1709,"depth", false,-1, 31,0);
    tracep->declBit(c+1512,"clk", false,-1);
    tracep->declBit(c+821,"we", false,-1);
    tracep->declBus(c+923,"a", false,-1, 3,0);
    tracep->declBus(c+924,"dpra", false,-1, 3,0);
    tracep->declBus(c+1505,"di", false,-1, 7,0);
    tracep->declBus(c+1572,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+590+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBit(c+1323,"auto_in_psel", false,-1);
    tracep->declBit(c+1324,"auto_in_penable", false,-1);
    tracep->declBit(c+1318,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1325,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1317,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1319,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+627,"auto_in_pready", false,-1);
    tracep->declBit(c+1587,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1588,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1526,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1527,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1528,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1529,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1530,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1531,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1512,"clock", false,-1);
    tracep->declBit(c+1513,"reset", false,-1);
    tracep->declBus(c+1489,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1323,"in_psel", false,-1);
    tracep->declBit(c+1324,"in_penable", false,-1);
    tracep->declBus(c+1317,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1318,"in_pwrite", false,-1);
    tracep->declBus(c+1319,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1320,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+627,"in_pready", false,-1);
    tracep->declBus(c+1588,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1587,"in_pslverr", false,-1);
    tracep->declBus(c+1526,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1527,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1528,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1529,"vga_hsync", false,-1);
    tracep->declBit(c+1530,"vga_vsync", false,-1);
    tracep->declBit(c+1531,"vga_valid", false,-1);
    tracep->declBit(c+1506,"is_write", false,-1);
    tracep->declBus(c+1507,"addr", false,-1, 31,0);
    tracep->declBit(c+627,"ready", false,-1);
    tracep->declBus(c+926,"i", false,-1, 31,0);
    tracep->declBus(c+1711,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1712,"h_active", false,-1, 31,0);
    tracep->declBus(c+1713,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1714,"h_total", false,-1, 31,0);
    tracep->declBus(c+1640,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1715,"v_active", false,-1, 31,0);
    tracep->declBus(c+1716,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1717,"v_total", false,-1, 31,0);
    tracep->declBus(c+927,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+606,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+928,"h_valid", false,-1);
    tracep->declBit(c+607,"v_valid", false,-1);
    tracep->declBus(c+929,"h_addr", false,-1, 9,0);
    tracep->declBus(c+608,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1573,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+616,"sck", false,-1);
    tracep->declBit(c+1227,"ss", false,-1);
    tracep->declBit(c+1212,"mosi", false,-1);
    tracep->declBit(c+1200,"miso", false,-1);
    tracep->declBus(c+1201,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+1202,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+1203,"counter", false,-1, 2,0);
    tracep->declBit(c+1204,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+616,"sck", false,-1);
    tracep->declBit(c+930,"ss", false,-1);
    tracep->declBit(c+1212,"mosi", false,-1);
    tracep->declBit(c+1574,"miso", false,-1);
    tracep->declBit(c+930,"reset", false,-1);
    tracep->declBus(c+1194,"state", false,-1, 2,0);
    tracep->declBus(c+1195,"counter", false,-1, 7,0);
    tracep->declBus(c+1196,"cmd", false,-1, 7,0);
    tracep->declBus(c+1197,"addr", false,-1, 23,0);
    tracep->declBus(c+1198,"data", false,-1, 31,0);
    tracep->declBit(c+1199,"ren", false,-1);
    tracep->declBus(c+1575,"rdata", false,-1, 31,0);
    tracep->declBus(c+1576,"raddr", false,-1, 31,0);
    tracep->declBus(c+1577,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+616,"clock", false,-1);
    tracep->declBit(c+1199,"valid", false,-1);
    tracep->declBus(c+1196,"cmd", false,-1, 7,0);
    tracep->declBus(c+1576,"addr", false,-1, 31,0);
    tracep->declBus(c+1575,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1508,"sck", false,-1);
    tracep->declBit(c+1509,"ce_n", false,-1);
    tracep->declBus(c+1535,"dio", false,-1, 3,0);
    tracep->declBit(c+1509,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+1245,"cmd", false,-1, 7,0);
    tracep->declBus(c+1246,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1247+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1578,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1579,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+1251,"ren", false,-1);
    tracep->declBit(c+1252,"wen", false,-1);
    tracep->declBus(c+1253,"len", false,-1, 7,0);
    tracep->declBus(c+1580,"rdata", false,-1, 31,0);
    tracep->declBus(c+1254,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1508,"clock", false,-1);
    tracep->declBit(c+1251,"ren", false,-1);
    tracep->declBit(c+1252,"wen", false,-1);
    tracep->declBus(c+1245,"cmd", false,-1, 7,0);
    tracep->declBus(c+1254,"saddr", false,-1, 31,0);
    tracep->declBus(c+1580,"rdata", false,-1, 31,0);
    tracep->declBus(c+1255,"wdata", false,-1, 31,0);
    tracep->declBus(c+1253,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1536,"clk", false,-1);
    tracep->declBit(c+618,"cke", false,-1);
    tracep->declBit(c+1213,"cs", false,-1);
    tracep->declBit(c+1214,"ras", false,-1);
    tracep->declBit(c+1215,"cas", false,-1);
    tracep->declBit(c+1216,"we", false,-1);
    tracep->declBus(c+1217,"a", false,-1, 12,0);
    tracep->declBus(c+1228,"ba", false,-1, 1,0);
    tracep->declBus(c+1229,"dqm", false,-1, 1,0);
    tracep->declBus(c+1243,"dq", false,-1, 15,0);
    tracep->declBit(c+1230,"reset", false,-1);
    tracep->declBus(c+937,"state", false,-1, 2,0);
    tracep->declBus(c+938,"counter", false,-1, 7,0);
    tracep->declBus(c+939,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1718,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+940,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+941,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1231,"nop", false,-1);
    tracep->declBit(c+1232,"active", false,-1);
    tracep->declBit(c+1233,"precharge", false,-1);
    tracep->declBit(c+1234,"read", false,-1);
    tracep->declBit(c+1235,"write", false,-1);
    tracep->declBit(c+1236,"burstterm", false,-1);
    tracep->declBit(c+1237,"autorefresh", false,-1);
    tracep->declBit(c+1238,"mode", false,-1);
    tracep->declBus(c+942,"test", false,-1, 15,0);
    tracep->declBus(c+943,"test1", false,-1, 15,0);
    tracep->declBus(c+944,"sense", false,-1, 31,0);
    tracep->declBit(c+945,"write_burst_mode", false,-1);
    tracep->declBus(c+946,"op_mode", false,-1, 1,0);
    tracep->declBus(c+947,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+948,"burst_type", false,-1);
    tracep->declBus(c+949,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+950,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+951,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+952,"bank", false,-1, 1,0);
    tracep->declBus(c+953,"row", false,-1, 12,0);
    tracep->declBus(c+954,"column", false,-1, 8,0);
    tracep->declBus(c+955,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+956,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+957,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1536,"clk", false,-1);
    tracep->declBit(c+618,"cke", false,-1);
    tracep->declBit(c+1213,"cs", false,-1);
    tracep->declBit(c+1214,"ras", false,-1);
    tracep->declBit(c+1215,"cas", false,-1);
    tracep->declBit(c+1216,"we", false,-1);
    tracep->declBus(c+1217,"a", false,-1, 12,0);
    tracep->declBus(c+1228,"ba", false,-1, 1,0);
    tracep->declBus(c+1239,"dqm", false,-1, 1,0);
    tracep->declBus(c+1244,"dq", false,-1, 15,0);
    tracep->declBit(c+1230,"reset", false,-1);
    tracep->declBus(c+958,"state", false,-1, 2,0);
    tracep->declBus(c+959,"counter", false,-1, 7,0);
    tracep->declBus(c+960,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1719,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+961,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+962,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1231,"nop", false,-1);
    tracep->declBit(c+1232,"active", false,-1);
    tracep->declBit(c+1233,"precharge", false,-1);
    tracep->declBit(c+1234,"read", false,-1);
    tracep->declBit(c+1235,"write", false,-1);
    tracep->declBit(c+1236,"burstterm", false,-1);
    tracep->declBit(c+1237,"autorefresh", false,-1);
    tracep->declBit(c+1238,"mode", false,-1);
    tracep->declBus(c+963,"test", false,-1, 15,0);
    tracep->declBus(c+964,"test1", false,-1, 15,0);
    tracep->declBus(c+965,"sense", false,-1, 31,0);
    tracep->declBit(c+966,"write_burst_mode", false,-1);
    tracep->declBus(c+967,"op_mode", false,-1, 1,0);
    tracep->declBus(c+968,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+969,"burst_type", false,-1);
    tracep->declBus(c+970,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+971,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+972,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+973,"bank", false,-1, 1,0);
    tracep->declBus(c+974,"row", false,-1, 12,0);
    tracep->declBus(c+975,"column", false,-1, 8,0);
    tracep->declBus(c+976,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+977,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+978,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1536,"clk", false,-1);
    tracep->declBit(c+618,"cke", false,-1);
    tracep->declBit(c+1213,"cs", false,-1);
    tracep->declBit(c+1214,"ras", false,-1);
    tracep->declBit(c+1215,"cas", false,-1);
    tracep->declBit(c+1216,"we", false,-1);
    tracep->declBus(c+1217,"a", false,-1, 12,0);
    tracep->declBus(c+1228,"ba", false,-1, 1,0);
    tracep->declBus(c+1240,"dqm", false,-1, 1,0);
    tracep->declBus(c+1243,"dq", false,-1, 15,0);
    tracep->declBit(c+1230,"reset", false,-1);
    tracep->declBus(c+979,"state", false,-1, 2,0);
    tracep->declBus(c+980,"counter", false,-1, 7,0);
    tracep->declBus(c+981,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1720,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+982,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+983,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1231,"nop", false,-1);
    tracep->declBit(c+1232,"active", false,-1);
    tracep->declBit(c+1233,"precharge", false,-1);
    tracep->declBit(c+1234,"read", false,-1);
    tracep->declBit(c+1235,"write", false,-1);
    tracep->declBit(c+1236,"burstterm", false,-1);
    tracep->declBit(c+1237,"autorefresh", false,-1);
    tracep->declBit(c+1238,"mode", false,-1);
    tracep->declBus(c+984,"test", false,-1, 15,0);
    tracep->declBus(c+985,"test1", false,-1, 15,0);
    tracep->declBus(c+986,"sense", false,-1, 31,0);
    tracep->declBit(c+987,"write_burst_mode", false,-1);
    tracep->declBus(c+988,"op_mode", false,-1, 1,0);
    tracep->declBus(c+989,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+990,"burst_type", false,-1);
    tracep->declBus(c+991,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+992,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+993,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+994,"bank", false,-1, 1,0);
    tracep->declBus(c+995,"row", false,-1, 12,0);
    tracep->declBus(c+996,"column", false,-1, 8,0);
    tracep->declBus(c+997,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+998,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+999,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1536,"clk", false,-1);
    tracep->declBit(c+618,"cke", false,-1);
    tracep->declBit(c+1213,"cs", false,-1);
    tracep->declBit(c+1214,"ras", false,-1);
    tracep->declBit(c+1215,"cas", false,-1);
    tracep->declBit(c+1216,"we", false,-1);
    tracep->declBus(c+1217,"a", false,-1, 12,0);
    tracep->declBus(c+1228,"ba", false,-1, 1,0);
    tracep->declBus(c+1241,"dqm", false,-1, 1,0);
    tracep->declBus(c+1244,"dq", false,-1, 15,0);
    tracep->declBit(c+1230,"reset", false,-1);
    tracep->declBus(c+1000,"state", false,-1, 2,0);
    tracep->declBus(c+1001,"counter", false,-1, 7,0);
    tracep->declBus(c+1002,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1721,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+1003,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+1004,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1231,"nop", false,-1);
    tracep->declBit(c+1232,"active", false,-1);
    tracep->declBit(c+1233,"precharge", false,-1);
    tracep->declBit(c+1234,"read", false,-1);
    tracep->declBit(c+1235,"write", false,-1);
    tracep->declBit(c+1236,"burstterm", false,-1);
    tracep->declBit(c+1237,"autorefresh", false,-1);
    tracep->declBit(c+1238,"mode", false,-1);
    tracep->declBus(c+1005,"test", false,-1, 15,0);
    tracep->declBus(c+1006,"test1", false,-1, 15,0);
    tracep->declBus(c+1007,"sense", false,-1, 31,0);
    tracep->declBit(c+1008,"write_burst_mode", false,-1);
    tracep->declBus(c+1009,"op_mode", false,-1, 1,0);
    tracep->declBus(c+1010,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+1011,"burst_type", false,-1);
    tracep->declBus(c+1012,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+1013,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+1014,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+1015,"bank", false,-1, 1,0);
    tracep->declBus(c+1016,"row", false,-1, 12,0);
    tracep->declBus(c+1017,"column", false,-1, 8,0);
    tracep->declBus(c+1018,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+1019,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+1020,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullIData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid));
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rready));
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [0U][0U]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [0U][1U]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [0U][2U]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [0U][3U]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [1U][0U]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [1U][1U]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [1U][2U]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [1U][3U]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [2U][0U]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [2U][1U]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [2U][2U]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [2U][3U]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [3U][0U]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [3U][1U]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [3U][2U]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [3U][3U]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [0U][0U]),27);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [0U][1U]),27);
    bufp->fullIData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [0U][2U]),27);
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [0U][3U]),27);
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [1U][0U]),27);
    bufp->fullIData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [1U][1U]),27);
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [1U][2U]),27);
    bufp->fullIData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [1U][3U]),27);
    bufp->fullIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [2U][0U]),27);
    bufp->fullIData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [2U][1U]),27);
    bufp->fullIData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [2U][2U]),27);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [2U][3U]),27);
    bufp->fullIData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [3U][0U]),27);
    bufp->fullIData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [3U][1U]),27);
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [3U][2U]),27);
    bufp->fullIData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [3U][3U]),27);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),4);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),4);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),4);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),4);
    bufp->fullIData(oldp+57,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                              >> 5U)),27);
    bufp->fullBit(oldp+58,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                  >> 4U))));
    bufp->fullCData(oldp+59,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                    >> 2U))),2);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit),2);
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state));
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),2);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+78,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+79,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+80,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+81,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+117,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+120,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+273,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+281,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+289,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+293,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+297,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+301,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+313,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+317,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+321,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+325,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+329,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+333,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+337,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+341,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+345,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+349,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+353,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+357,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+361,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+365,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+369,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+373,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+377,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+381,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+385,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+389,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+393,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)))));
    bufp->fullIData(oldp+399,((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                 >> 2U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg)
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                   + (((- (IData)((1U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg 
                                                      >> 0x14U)))) 
                                       << 0x15U) | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg))
                                : (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                     >> 4U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg
                                    [(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                            >> 2U))])
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                       + (0xfffffc00U 
                                          | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg
                                          [(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                                  >> 2U))]))
                                    : ((IData)(4U) 
                                       + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)))),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+409,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)))));
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc),21);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en),2);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),5);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id),4);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id),4);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),4);
    bufp->fullBit(oldp+419,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id))));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_id));
    bufp->fullBit(oldp+421,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_ex),32);
    bufp->fullBit(oldp+425,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ex),32);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),4);
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ex),32);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrsw_ex),32);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex),4);
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_addr),32);
    bufp->fullIData(oldp+434,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                    : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                           << 8U) : 
                                       ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                            << 0x10U)
                                         : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                << 0x18U)
                                             : 0U))))
                                : 0U)),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_arready));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid));
    bufp->fullIData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CHazarden));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest_delay));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg),21);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg),30);
    bufp->fullIData(oldp+452,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                               >> 2U)),30);
    bufp->fullBit(oldp+453,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                              >> 2U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg)));
    bufp->fullSData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[0]),10);
    bufp->fullSData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[1]),10);
    bufp->fullSData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[2]),10);
    bufp->fullSData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[3]),10);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[0]),28);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[1]),28);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[2]),28);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[3]),28);
    bufp->fullIData(oldp+462,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                               >> 4U)),28);
    bufp->fullCData(oldp+463,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                     >> 2U))),2);
    bufp->fullIData(oldp+464,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                               >> 4U)),28);
    bufp->fullCData(oldp+465,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                     >> 2U))),2);
    bufp->fullBit(oldp+466,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                              >> 4U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg
                             [(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                     >> 2U))])));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__already));
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__enable),2);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__a),32);
    bufp->fullQData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+474,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0c8976f5__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullIData(oldp+476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0c8976f5__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullCData(oldp+477,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7d20678f__0) 
                                << 3U) | ((((0x1cU 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                            & ((0x342U 
                                                == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hbd4e74d7__0))) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h45820bb5__0) 
                                            << 1U) 
                                           | ((0x1cU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & ((0x341U 
                                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hbd4e74d7__0))))))),4);
    bufp->fullBit(oldp+478,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                   >> 0xaU))));
    bufp->fullCData(oldp+479,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)),5);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel),4);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_use_r1));
    bufp->fullBit(oldp+485,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt));
    bufp->fullBit(oldp+487,((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+488,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+490,((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+491,((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+492,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+493,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+494,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+495,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+496,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+497,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+498,(((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullBit(oldp+499,(((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0x302U == (0x3ffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullIData(oldp+501,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                               >> 5U)),27);
    bufp->fullBit(oldp+502,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                   >> 4U))));
    bufp->fullCData(oldp+503,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                     >> 2U))),2);
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid_enable));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__updata));
    bufp->fullCData(oldp+507,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                        >> 2U))),5);
    bufp->fullCData(oldp+508,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h86c6dcd9__0) 
                                | ((0x1bU == (0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 2U))) 
                                   | ((0x19U == (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                    >> 2U))) 
                                      | ((0U == (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                    >> 2U))) 
                                         | ((4U == 
                                             (0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 2U))) 
                                            | ((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                    >> 2U))) 
                                               | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                      >> 2U)))))))))
                                ? (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                           >> 7U)) : 0U)),4);
    bufp->fullCData(oldp+509,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+510,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h26248598__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb68e3e2e__0))
                                ? (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                           >> 0xfU))
                                : 0U)),4);
    bufp->fullCData(oldp+511,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb68e3e2e__0)
                                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                           >> 0x14U)
                                        : ((IData)(
                                                   ((0x70U 
                                                     == 
                                                     (0x707cU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                                    & (0U 
                                                       == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)))
                                            ? 0xfU : 0U)))),4);
    bufp->fullIData(oldp+512,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+513,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+514,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+515,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+516,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+518,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+520,(((3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                     >> 0x1cU)) | (
                                                   (0xfU 
                                                    == 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                                     >> 0x18U)) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                                       >> 0x1fU) 
                                                      & (3U 
                                                         != 
                                                         (3U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                                             >> 0x1dU))))))));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__updata));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5));
    bufp->fullBit(oldp+523,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5))));
    bufp->fullBit(oldp+524,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5))));
    bufp->fullCData(oldp+525,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                         ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                  ? 0xfU
                                                  : 
                                                 (((1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hc348b5d7__0) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hc348b5d7__0) 
                                                     & (1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                     ? 0xcU
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0))
                                                      ? 8U
                                                      : 0U)))))))),4);
    bufp->fullCData(oldp+526,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                                ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+527,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                   | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt))
                                         ? 1U : 2U))),3);
    bufp->fullIData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+544,((((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [1U]) | (((- (IData)(
                                                     (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [2U]) | (
                                                   ((- (IData)(
                                                               (3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [3U]) 
                                                   | (((- (IData)(
                                                                  (4U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [4U]) 
                                                      | (((- (IData)(
                                                                     (5U 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [5U]) 
                                                         | (((- (IData)(
                                                                        (6U 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [6U]) 
                                                            | ((- (IData)(
                                                                          (7U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                               [7U])))))))),32);
    bufp->fullIData(oldp+545,((((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [8U]) | (((- (IData)(
                                                     (9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [9U]) | (
                                                   ((- (IData)(
                                                               (0xaU 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [0xaU]) 
                                                   | (((- (IData)(
                                                                  (0xbU 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [0xbU]) 
                                                      | (((- (IData)(
                                                                     (0xcU 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [0xcU]) 
                                                         | (((- (IData)(
                                                                        (0xdU 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [0xdU]) 
                                                            | (((- (IData)(
                                                                           (0xeU 
                                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                [0xeU]) 
                                                               | ((- (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                  [0xfU]))))))))),32);
    bufp->fullIData(oldp+546,((((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [1U]) | (((- (IData)(
                                                     (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [2U]) | (
                                                   ((- (IData)(
                                                               (3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [3U]) 
                                                   | (((- (IData)(
                                                                  (4U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [4U]) 
                                                      | (((- (IData)(
                                                                     (5U 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [5U]) 
                                                         | (((- (IData)(
                                                                        (6U 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [6U]) 
                                                            | ((- (IData)(
                                                                          (7U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                               [7U])))))))),32);
    bufp->fullIData(oldp+547,((((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [8U]) | (((- (IData)(
                                                     (9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [9U]) | (
                                                   ((- (IData)(
                                                               (0xaU 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [0xaU]) 
                                                   | (((- (IData)(
                                                                  (0xbU 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [0xbU]) 
                                                      | (((- (IData)(
                                                                     (0xcU 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [0xcU]) 
                                                         | (((- (IData)(
                                                                        (0xdU 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [0xdU]) 
                                                            | (((- (IData)(
                                                                           (0xeU 
                                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                [0xeU]) 
                                                               | ((- (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                  [0xfU]))))))))),32);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+549,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 2U))));
    bufp->fullBit(oldp+550,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex))));
    bufp->fullBit(oldp+551,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 1U))));
    bufp->fullBit(oldp+552,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 3U))));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+608,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullCData(oldp+609,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+610,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+611,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->fullBit(oldp+613,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+614,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullIData(oldp+615,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res
                                : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res
                                    : ((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                        ? ((IData)(4U) 
                                           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id)
                                        : ((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                            ? ((IData)(4U) 
                                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id)
                                            : ((0xdU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h34b2fd6d__0
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata
                                                     : 
                                                    (((0x1cU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                      & ((1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6feb8d8__0)))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr
                                                      : 0U))))))))),32);
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+632,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+642,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+644,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+674,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+675,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+678,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+679,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+684,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+688,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+703,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+704,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+706,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+707,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+708,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+709,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+710,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+718,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+753,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+754,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+755,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+756,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+757,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+758,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+759,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+763,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+765,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+766,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+768,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+772,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+773,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+775,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+793,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+794,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+795,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+796,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+797,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+798,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+799,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+802,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+803,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+804,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+823,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+830,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+849,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+850,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+851,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+852,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+853,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+872,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+873,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+874,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+875,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+876,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+878,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+897,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+914,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+925,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+929,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+939,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+940,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+941,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+942,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+943,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+944,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+945,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+946,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+947,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+948,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+949,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+950,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+951,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+953,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+954,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+960,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+961,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+962,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+963,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+964,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+965,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+966,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+967,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+968,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+969,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+970,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+971,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+972,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+974,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+975,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+981,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+982,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+983,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+984,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+985,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+986,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+987,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+988,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+989,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+990,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+991,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+992,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+993,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+995,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+996,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                               [0U][0U][0U]),16);
    bufp->fullSData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                               [0U][0U][1U]),16);
    bufp->fullIData(oldp+1007,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                 [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [1U])),32);
    bufp->fullBit(oldp+1008,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                    >> 9U))));
    bufp->fullCData(oldp+1009,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1010,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1011,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                    >> 3U))));
    bufp->fullCData(oldp+1012,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+1013,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 4U))),8);
    bufp->fullCData(oldp+1014,((0xffU & ((IData)(1U) 
                                         << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullCData(oldp+1038,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c4b59f0__0))),4);
    bufp->fullIData(oldp+1039,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc738152c__0)),32);
    bufp->fullCData(oldp+1040,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h570f9425__0))),8);
    bufp->fullCData(oldp+1041,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd9dc2966__0))),3);
    bufp->fullCData(oldp+1042,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc7f27ace__0))),2);
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1049,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1057,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1059,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1061,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1077,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1078,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1079,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1080,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1081,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1082,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1083,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1086,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h045b8425__0))));
    bufp->fullBit(oldp+1087,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h92ac1dc2__0))));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1092,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c4b59f0__0))))),16);
    bufp->fullSData(oldp+1093,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)))),16);
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1104,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1106,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1111,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1113,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1114,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_araddr),32);
    bufp->fullIData(oldp+1122,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc738152c__0 
                                        >> 0x20U))),32);
    bufp->fullCData(oldp+1123,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h570f9425__0) 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1124,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c4b59f0__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1125,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd9dc2966__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1126,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc7f27ace__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1127,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h045b8425__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1128,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h92ac1dc2__0) 
                                    >> 1U))));
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),2);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1139,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1140,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1142,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1145,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd9dc2966__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1146,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize)
                                 : 0U)),3);
    bufp->fullIData(oldp+1147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata
                                 : 0U)),32);
    bufp->fullCData(oldp+1148,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb)
                                 : 0U)),4);
    bufp->fullBit(oldp+1149,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid))));
    bufp->fullBit(oldp+1150,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1151,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1152,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullBit(oldp+1153,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1154,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1155,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1156,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1157,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1158,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1159,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1160,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1161,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1163,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1164,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1165,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1166,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1167,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1168,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1169,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1170,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1171,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1172,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1173,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1174,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1175,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1176,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1177,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1178,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1179,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1180,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1181,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1182,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1183,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1184,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1185,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1186,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA)),32);
    bufp->fullCData(oldp+1187,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+1188,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullCData(oldp+1189,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)
                                 : 0U)),4);
    bufp->fullCData(oldp+1190,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))
                                 : 0U)),4);
    bufp->fullBit(oldp+1191,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+1192,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+1193,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1199,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+1205,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+1206,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))),32);
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1213,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1214,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1215,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1216,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+1228,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+1233,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+1242,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                 << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+1243,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+1244,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+1255,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [0U])))),32);
    bufp->fullBit(oldp+1256,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1257,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1258,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1286,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1289,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1293,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1294,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1295,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1301,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_hd70e40ba__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullIData(oldp+1304,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1305,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullIData(oldp+1306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1307,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1308,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1309,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1317,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1322,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1323,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1324,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1326,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1328,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1329,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1331,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1334,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1335,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1336,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1341,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1344,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1383,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1384,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1403,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1404,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1426,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1427,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1428,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1429,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1430,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1431,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1432,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1433,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1434,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1435,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1436,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1437,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1438,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1439,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1440,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1441,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1442,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1443,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1444,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1445,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1446,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1447,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1448,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1449,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1450,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1451,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1452,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1453,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1454,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1455,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1456,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1457,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullIData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rdata),32);
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__updata));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid));
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1486,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullIData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1498,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1500,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1507,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1512,(vlSelf->clock));
    bufp->fullBit(oldp+1513,(vlSelf->reset));
    bufp->fullSData(oldp+1514,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1515,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1516,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1517,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1518,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1519,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1520,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1521,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1522,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1523,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1524,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1525,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1526,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1527,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1528,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1529,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1530,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1531,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1532,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1533,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1534,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1535,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1536,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1537,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1538,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1539,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1541,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1542,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullBit(oldp+1543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullIData(oldp+1544,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1545,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1546,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid)))));
    bufp->fullCData(oldp+1547,((3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
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
                                        : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                  : 0U)))),2);
    bufp->fullIData(oldp+1548,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1549,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1550,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1552,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp)
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
                                                 : 0U))))),2);
    bufp->fullBit(oldp+1553,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rready) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid)))));
    bufp->fullIData(oldp+1554,(((IData)(vlSelf->__VdfgTmp_hfab946d0__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_addr
                                 : 0U)),32);
    bufp->fullIData(oldp+1555,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid)
                                 ? ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                     ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                         : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                << 8U)
                                             : ((2U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                 << 0x10U)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                  << 0x18U)
                                                  : 0U))))
                                     : 0U) : 0U)),32);
    bufp->fullCData(oldp+1556,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
                                     & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                     ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                              ? 3U : 
                                             (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                               ? 0xfU
                                               : ((
                                                   (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hc348b5d7__0) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hc348b5d7__0) 
                                                     & (1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                     ? 0xcU
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0))
                                                      ? 8U
                                                      : 0U)))))))
                                 : 0U)),4);
    bufp->fullCData(oldp+1557,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                                     ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                              ? 1U : 2U))
                                 : 0U)),3);
    bufp->fullCData(oldp+1558,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid)
                                 ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                     & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                        | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                     ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt))
                                              ? 1U : 2U))
                                 : 0U)),3);
    bufp->fullCData(oldp+1559,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? (3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
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
                                            : 0U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                            : 0U)))
                                 : 0U)),2);
    bufp->fullCData(oldp+1560,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp)
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
                                                    : 0U)))
                                 : 0U)),2);
    bufp->fullIData(oldp+1561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
                                 ? (((- (IData)((0x2000000U 
                                                 == (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc738152c__0 
                                                             >> 0x20U))))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                    | ((- (IData)((0x2000004U 
                                                   == (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc738152c__0 
                                                               >> 0x20U))))) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                                  >> 0x20U))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1562,((((- (IData)((0x2000000U 
                                             == (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc738152c__0 
                                                         >> 0x20U))))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                | ((- (IData)((0x2000004U 
                                               == (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc738152c__0 
                                                           >> 0x20U))))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullCData(oldp+1563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp)
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                           : 0U) | 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U)) : 0U) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                                        : 0U)))),2);
    bufp->fullIData(oldp+1564,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1567,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1568,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1569,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullSData(oldp+1570,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1573,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1574,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1576,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1579,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1581,(1U),3);
    bufp->fullCData(oldp+1582,(0U),2);
    bufp->fullCData(oldp+1583,(1U),2);
    bufp->fullCData(oldp+1584,(2U),2);
    bufp->fullCData(oldp+1585,(3U),2);
    bufp->fullSData(oldp+1586,(0xaU),11);
    bufp->fullBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1591,(0U));
    bufp->fullCData(oldp+1592,(0U),3);
    bufp->fullCData(oldp+1593,(2U),3);
    bufp->fullCData(oldp+1594,(3U),3);
    bufp->fullCData(oldp+1595,(4U),3);
    bufp->fullBit(oldp+1596,(1U));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1598,(0U),4);
    bufp->fullIData(oldp+1599,(0U),32);
    bufp->fullCData(oldp+1600,(0U),8);
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullBit(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullCData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awlen),8);
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arlen),8);
    bufp->fullCData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awid),4);
    bufp->fullCData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arid),4);
    bufp->fullCData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awburst),2);
    bufp->fullCData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arburst),2);
    bufp->fullIData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awaddr),32);
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wdata),32);
    bufp->fullCData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wstrb),4);
    bufp->fullCData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awlen),8);
    bufp->fullCData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awid),4);
    bufp->fullCData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid),4);
    bufp->fullCData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid),4);
    bufp->fullCData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awsize),3);
    bufp->fullCData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awburst),2);
    bufp->fullCData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp),2);
    bufp->fullCData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp),2);
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awvalid));
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awready));
    bufp->fullBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wvalid));
    bufp->fullBit(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready));
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bvalid));
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bready));
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wlast));
    bufp->fullBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast));
    bufp->fullIData(oldp+1640,(2U),32);
    bufp->fullIData(oldp+1641,(0U),32);
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__log2__Vstatic__loop_var),32);
    bufp->fullIData(oldp+1643,(0x2000000U),32);
    bufp->fullIData(oldp+1644,(0x2000004U),32);
    bufp->fullBit(oldp+1645,(0U));
    bufp->fullBit(oldp+1646,(1U));
    bufp->fullCData(oldp+1647,(1U),4);
    bufp->fullCData(oldp+1648,(2U),4);
    bufp->fullCData(oldp+1649,(3U),4);
    bufp->fullCData(oldp+1650,(4U),4);
    bufp->fullCData(oldp+1651,(5U),4);
    bufp->fullCData(oldp+1652,(6U),4);
    bufp->fullCData(oldp+1653,(7U),4);
    bufp->fullIData(oldp+1654,(4U),32);
    bufp->fullIData(oldp+1655,(1U),32);
    bufp->fullIData(oldp+1656,(2U),32);
    bufp->fullIData(oldp+1657,(0x30000000U),32);
    bufp->fullIData(oldp+1658,(0x20U),32);
    bufp->fullIData(oldp+1659,(0x1000000U),32);
    bufp->fullIData(oldp+1660,(0x1000004U),32);
    bufp->fullIData(oldp+1661,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1662,(0x1800U),32);
    bufp->fullIData(oldp+1663,(0x79737978U),32);
    bufp->fullCData(oldp+1664,(4U),8);
    bufp->fullCData(oldp+1665,(8U),8);
    bufp->fullCData(oldp+1666,(3U),8);
    bufp->fullCData(oldp+1667,(0x9fU),8);
    bufp->fullCData(oldp+1668,(0x25U),8);
    bufp->fullCData(oldp+1669,(0xdU),8);
    bufp->fullCData(oldp+1670,(0x99U),8);
    bufp->fullCData(oldp+1671,(0x49U),8);
    bufp->fullCData(oldp+1672,(0x41U),8);
    bufp->fullCData(oldp+1673,(0x1fU),8);
    bufp->fullCData(oldp+1674,(1U),8);
    bufp->fullCData(oldp+1675,(9U),8);
    bufp->fullCData(oldp+1676,(0x11U),8);
    bufp->fullCData(oldp+1677,(0xc1U),8);
    bufp->fullCData(oldp+1678,(0x63U),8);
    bufp->fullCData(oldp+1679,(0x85U),8);
    bufp->fullCData(oldp+1680,(0x61U),8);
    bufp->fullCData(oldp+1681,(0x71U),8);
    bufp->fullCData(oldp+1682,(0xf0U),8);
    bufp->fullCData(oldp+1683,(0xe0U),8);
    bufp->fullCData(oldp+1684,(0x15U),8);
    bufp->fullCData(oldp+1685,(0xebU),8);
    bufp->fullCData(oldp+1686,(0x38U),8);
    bufp->fullIData(oldp+1687,(0x64U),32);
    bufp->fullIData(oldp+1688,(0x18U),32);
    bufp->fullIData(oldp+1689,(9U),32);
    bufp->fullIData(oldp+1690,(6U),32);
    bufp->fullIData(oldp+1691,(3U),32);
    bufp->fullIData(oldp+1692,(8U),32);
    bufp->fullIData(oldp+1693,(0xdU),32);
    bufp->fullIData(oldp+1694,(0x2000U),32);
    bufp->fullIData(oldp+1695,(0x2710U),32);
    bufp->fullIData(oldp+1696,(0x30cU),32);
    bufp->fullSData(oldp+1697,(0x20U),13);
    bufp->fullCData(oldp+1698,(8U),4);
    bufp->fullCData(oldp+1699,(9U),4);
    bufp->fullIData(oldp+1700,(0xaU),32);
    bufp->fullIData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1702,(0x11U),32);
    bufp->fullIData(oldp+1703,(0x3fffffffU),32);
    bufp->fullCData(oldp+1704,(5U),3);
    bufp->fullCData(oldp+1705,(6U),3);
    bufp->fullCData(oldp+1706,(7U),3);
    bufp->fullCData(oldp+1707,(0xaU),4);
    bufp->fullIData(oldp+1708,(0xbU),32);
    bufp->fullIData(oldp+1709,(0x10U),32);
    bufp->fullIData(oldp+1710,(5U),32);
    bufp->fullIData(oldp+1711,(0x60U),32);
    bufp->fullIData(oldp+1712,(0x90U),32);
    bufp->fullIData(oldp+1713,(0x310U),32);
    bufp->fullIData(oldp+1714,(0x320U),32);
    bufp->fullIData(oldp+1715,(0x23U),32);
    bufp->fullIData(oldp+1716,(0x203U),32);
    bufp->fullIData(oldp+1717,(0x20dU),32);
    bufp->fullSData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1719,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1720,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
