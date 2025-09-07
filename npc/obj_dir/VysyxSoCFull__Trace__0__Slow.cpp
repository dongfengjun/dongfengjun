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
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBus(c+1547,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1548,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1549,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1550,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1551,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1552,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1553,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1554,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1555,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1556,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1557,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1558,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1559,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1560,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1561,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1562,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1563,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1564,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1565,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1566,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBus(c+1547,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1548,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1549,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1550,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1551,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1552,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1553,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1554,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1555,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1556,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1557,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1558,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1559,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1560,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1561,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1562,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1563,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1564,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1565,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1566,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+607,"spi_sck", false,-1);
    tracep->declBus(c+608,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1258,"spi_mosi", false,-1);
    tracep->declBit(c+1567,"spi_miso", false,-1);
    tracep->declBit(c+1565,"uart_rx", false,-1);
    tracep->declBit(c+1566,"uart_tx", false,-1);
    tracep->declBit(c+1541,"psram_sck", false,-1);
    tracep->declBit(c+1542,"psram_ce_n", false,-1);
    tracep->declBus(c+1568,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1569,"sdram_clk", false,-1);
    tracep->declBit(c+609,"sdram_cke", false,-1);
    tracep->declBit(c+1259,"sdram_cs", false,-1);
    tracep->declBit(c+1260,"sdram_ras", false,-1);
    tracep->declBit(c+1261,"sdram_cas", false,-1);
    tracep->declBit(c+1262,"sdram_we", false,-1);
    tracep->declBus(c+1263,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1264,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+610,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1288,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1547,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1548,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1549,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1550,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1551,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1552,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1553,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1554,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1555,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1556,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1557,"ps2_clk", false,-1);
    tracep->declBit(c+1558,"ps2_data", false,-1);
    tracep->declBus(c+1559,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1560,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1561,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1562,"vga_hsync", false,-1);
    tracep->declBit(c+1563,"vga_vsync", false,-1);
    tracep->declBit(c+1564,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBus(c+1063,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1064,"in_psel", false,-1);
    tracep->declBit(c+1012,"in_penable", false,-1);
    tracep->declBus(c+1611,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1065,"in_pwrite", false,-1);
    tracep->declBus(c+1066,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1067,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+611,"in_pready", false,-1);
    tracep->declBus(c+612,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+613,"in_pslverr", false,-1);
    tracep->declBus(c+1193,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1302,"out_psel", false,-1);
    tracep->declBit(c+1303,"out_penable", false,-1);
    tracep->declBus(c+1304,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1305,"out_pwrite", false,-1);
    tracep->declBus(c+1306,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1308,"out_pready", false,-1);
    tracep->declBus(c+1570,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1309,"out_pslverr", false,-1);
    tracep->declBus(c+1612,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1613,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1614,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1615,"DELAY", false,-1, 1,0);
    tracep->declBus(c+614,"state", false,-1, 1,0);
    tracep->declBus(c+615,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+616,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+617,"pslverr_reg", false,-1);
    tracep->declBus(c+1616,"r", false,-1, 10,0);
    tracep->declBus(c+1614,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1302,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1303,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1305,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1193,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1308,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1309,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1570,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1310,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1311,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1305,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1312,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1304,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+618,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1617,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1618,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1313,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1314,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1305,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1194,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1304,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+619,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1619,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+620,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1315,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1316,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1305,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1194,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1304,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+621,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1620,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+622,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1317,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1305,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1193,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1571,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1621,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+1013,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1320,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1305,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1194,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1304,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1321,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1621,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1322,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1323,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1305,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1312,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1304,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1572,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1621,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1325,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1326,"sel_0", false,-1);
    tracep->declBit(c+1327,"sel_1", false,-1);
    tracep->declBit(c+1328,"sel_2", false,-1);
    tracep->declBit(c+1329,"sel_3", false,-1);
    tracep->declBit(c+1330,"sel_4", false,-1);
    tracep->declBit(c+1331,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1068,"auto_in_awready", false,-1);
    tracep->declBit(c+1069,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1070,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1071,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1072,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1068,"auto_in_wready", false,-1);
    tracep->declBit(c+1073,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1074,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1332,"auto_in_bready", false,-1);
    tracep->declBit(c+1333,"auto_in_bvalid", false,-1);
    tracep->declBus(c+9,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1573,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1076,"auto_in_arready", false,-1);
    tracep->declBit(c+1077,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1079,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1334,"auto_in_rready", false,-1);
    tracep->declBit(c+1335,"auto_in_rvalid", false,-1);
    tracep->declBus(c+10,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1574,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1573,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1064,"auto_out_psel", false,-1);
    tracep->declBit(c+1012,"auto_out_penable", false,-1);
    tracep->declBit(c+1065,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1063,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1066,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+611,"auto_out_pready", false,-1);
    tracep->declBit(c+613,"auto_out_pslverr", false,-1);
    tracep->declBus(c+612,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1012,"nodeOut_penable", false,-1);
    tracep->declBus(c+1014,"state", false,-1, 1,0);
    tracep->declBit(c+1076,"accept_read", false,-1);
    tracep->declBit(c+1068,"accept_write", false,-1);
    tracep->declBit(c+11,"is_write_r", false,-1);
    tracep->declBit(c+1065,"is_write", false,-1);
    tracep->declBus(c+10,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+9,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+12,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+13,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+14,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+15,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+623,"resp", false,-1, 1,0);
    tracep->declBus(c+16,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1573,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1335,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+17,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1333,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1336,"in_arready", false,-1);
    tracep->declBit(c+1081,"in_arvalid", false,-1);
    tracep->declBus(c+1082,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1083,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1084,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1085,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1337,"in_rready", false,-1);
    tracep->declBit(c+624,"in_rvalid", false,-1);
    tracep->declBus(c+625,"in_rid", false,-1, 3,0);
    tracep->declBus(c+626,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+627,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+628,"in_rlast", false,-1);
    tracep->declBit(c+1338,"in_awready", false,-1);
    tracep->declBit(c+1087,"in_awvalid", false,-1);
    tracep->declBus(c+1088,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1090,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1091,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1092,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1339,"in_wready", false,-1);
    tracep->declBit(c+1093,"in_wvalid", false,-1);
    tracep->declBus(c+1094,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1095,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"in_wlast", false,-1);
    tracep->declBit(c+1340,"in_bready", false,-1);
    tracep->declBit(c+629,"in_bvalid", false,-1);
    tracep->declBus(c+630,"in_bid", false,-1, 3,0);
    tracep->declBus(c+631,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1341,"out_arready", false,-1);
    tracep->declBit(c+1342,"out_arvalid", false,-1);
    tracep->declBus(c+1343,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1344,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1345,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1195,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1346,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1347,"out_rready", false,-1);
    tracep->declBit(c+632,"out_rvalid", false,-1);
    tracep->declBus(c+633,"out_rid", false,-1, 3,0);
    tracep->declBus(c+634,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1612,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+635,"out_rlast", false,-1);
    tracep->declBit(c+1348,"out_awready", false,-1);
    tracep->declBit(c+1349,"out_awvalid", false,-1);
    tracep->declBus(c+1350,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1351,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1352,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1196,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1353,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1354,"out_wready", false,-1);
    tracep->declBit(c+1355,"out_wvalid", false,-1);
    tracep->declBus(c+1197,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1198,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"out_wlast", false,-1);
    tracep->declBit(c+1575,"out_bready", false,-1);
    tracep->declBit(c+636,"out_bvalid", false,-1);
    tracep->declBus(c+633,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1612,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1622,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1611,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1623,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1624,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1625,"DELAY", false,-1, 2,0);
    tracep->declBus(c+637,"rstate", false,-1, 2,0);
    tracep->declBus(c+638,"wstate", false,-1, 2,0);
    tracep->declBus(c+639,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+640,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+641,"rvalid_reg", false,-1);
    tracep->declBus(c+642,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+643,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+647,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+648,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+649,"bvalid_reg", false,-1);
    tracep->declBus(c+650,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+651,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1616,"r", false,-1, 10,0);
    tracep->declBus(c+1614,"s", false,-1, 1,0);
    tracep->declBus(c+652,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+18,"auto_in_awready", false,-1);
    tracep->declBit(c+1097,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1088,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1090,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1091,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1092,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+19,"auto_in_wready", false,-1);
    tracep->declBit(c+1098,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1094,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"auto_in_wlast", false,-1);
    tracep->declBit(c+1576,"auto_in_bready", false,-1);
    tracep->declBit(c+1356,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1357,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+586,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+20,"auto_in_arready", false,-1);
    tracep->declBit(c+1099,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1082,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1083,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1084,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1085,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1358,"auto_in_rready", false,-1);
    tracep->declBit(c+1359,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1360,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1577,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+587,"auto_in_rlast", false,-1);
    tracep->declBit(c+1361,"auto_out_awready", false,-1);
    tracep->declBit(c+1100,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1070,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1071,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1072,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1101,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1362,"auto_out_wready", false,-1);
    tracep->declBit(c+1102,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1074,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1103,"auto_out_wlast", false,-1);
    tracep->declBit(c+1363,"auto_out_bready", false,-1);
    tracep->declBit(c+1364,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1357,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1366,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1367,"auto_out_arready", false,-1);
    tracep->declBit(c+1104,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1079,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1105,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1358,"auto_out_rready", false,-1);
    tracep->declBit(c+1359,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1360,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1577,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+588,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1368,"auto_out_rlast", false,-1);
    tracep->declBit(c+1102,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+21,"w_idle", false,-1);
    tracep->declBit(c+1369,"in_awready", false,-1);
    tracep->declBit(c+22,"busy", false,-1);
    tracep->declBus(c+23,"r_addr", false,-1, 31,0);
    tracep->declBus(c+24,"r_len", false,-1, 7,0);
    tracep->declBus(c+1106,"len", false,-1, 7,0);
    tracep->declBus(c+1107,"addr", false,-1, 31,0);
    tracep->declBit(c+25,"busy_1", false,-1);
    tracep->declBus(c+26,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+27,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1108,"len_1", false,-1, 7,0);
    tracep->declBus(c+1109,"addr_1", false,-1, 31,0);
    tracep->declBit(c+28,"wbeats_latched", false,-1);
    tracep->declBit(c+1100,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1110,"wbeats_valid", false,-1);
    tracep->declBus(c+29,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1111,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1103,"w_last", false,-1);
    tracep->declBit(c+1363,"nodeOut_bready", false,-1);
    tracep->declBus(c+30,"error_0", false,-1, 1,0);
    tracep->declBus(c+31,"error_1", false,-1, 1,0);
    tracep->declBus(c+32,"error_2", false,-1, 1,0);
    tracep->declBus(c+33,"error_3", false,-1, 1,0);
    tracep->declBus(c+34,"error_4", false,-1, 1,0);
    tracep->declBus(c+35,"error_5", false,-1, 1,0);
    tracep->declBus(c+36,"error_6", false,-1, 1,0);
    tracep->declBus(c+37,"error_7", false,-1, 1,0);
    tracep->declBus(c+38,"error_8", false,-1, 1,0);
    tracep->declBus(c+39,"error_9", false,-1, 1,0);
    tracep->declBus(c+40,"error_10", false,-1, 1,0);
    tracep->declBus(c+41,"error_11", false,-1, 1,0);
    tracep->declBus(c+42,"error_12", false,-1, 1,0);
    tracep->declBus(c+43,"error_13", false,-1, 1,0);
    tracep->declBus(c+44,"error_14", false,-1, 1,0);
    tracep->declBus(c+45,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+20,"io_enq_ready", false,-1);
    tracep->declBit(c+1099,"io_enq_valid", false,-1);
    tracep->declBus(c+1082,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1083,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1084,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1085,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1086,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1370,"io_deq_ready", false,-1);
    tracep->declBit(c+1104,"io_deq_valid", false,-1);
    tracep->declBus(c+1078,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1112,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1113,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1080,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1114,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+46,"ram", false,-1, 48,0);
    tracep->declBit(c+48,"full", false,-1);
    tracep->declBit(c+1104,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1371,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+18,"io_enq_ready", false,-1);
    tracep->declBit(c+1097,"io_enq_valid", false,-1);
    tracep->declBus(c+1088,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1089,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1090,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1091,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1092,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1372,"io_deq_ready", false,-1);
    tracep->declBit(c+1115,"io_deq_valid", false,-1);
    tracep->declBus(c+1070,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1116,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1117,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1072,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1118,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+49,"ram", false,-1, 48,0);
    tracep->declBit(c+51,"full", false,-1);
    tracep->declBit(c+1115,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1373,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+19,"io_enq_ready", false,-1);
    tracep->declBit(c+1098,"io_enq_valid", false,-1);
    tracep->declBus(c+1094,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1095,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1096,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1374,"io_deq_ready", false,-1);
    tracep->declBit(c+1119,"io_deq_valid", false,-1);
    tracep->declBus(c+1074,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1075,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1579,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+52,"ram", false,-1, 36,0);
    tracep->declBit(c+54,"full", false,-1);
    tracep->declBit(c+1119,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1375,"do_enq", false,-1);
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
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1376,"auto_in_awready", false,-1);
    tracep->declBit(c+1120,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1070,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1121,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1200,"auto_in_wready", false,-1);
    tracep->declBit(c+1122,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1074,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1377,"auto_in_bready", false,-1);
    tracep->declBit(c+55,"auto_in_bvalid", false,-1);
    tracep->declBus(c+56,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+57,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1378,"auto_in_arready", false,-1);
    tracep->declBit(c+1123,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1124,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1379,"auto_in_rready", false,-1);
    tracep->declBit(c+58,"auto_in_rvalid", false,-1);
    tracep->declBus(c+59,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+61,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1378,"nodeIn_arready", false,-1);
    tracep->declBit(c+1376,"nodeIn_awready", false,-1);
    tracep->declBit(c+1125,"w_sel0", false,-1);
    tracep->declBit(c+55,"w_full", false,-1);
    tracep->declBus(c+56,"w_id", false,-1, 3,0);
    tracep->declBit(c+62,"r_sel1", false,-1);
    tracep->declBit(c+63,"w_sel1", false,-1);
    tracep->declBit(c+58,"r_full", false,-1);
    tracep->declBus(c+59,"r_id", false,-1, 3,0);
    tracep->declBit(c+1380,"ren", false,-1);
    tracep->declBit(c+64,"rdata_REG", false,-1);
    tracep->declBus(c+65,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+66,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+67,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+68,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1126,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1380,"R0_en", false,-1);
    tracep->declBit(c+1545,"R0_clk", false,-1);
    tracep->declBus(c+69,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1127,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1381,"W0_en", false,-1);
    tracep->declBit(c+1545,"W0_clk", false,-1);
    tracep->declBus(c+1074,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1075,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1382,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1128,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1088,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1090,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1091,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1092,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1201,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1096,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1094,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1129,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1383,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1384,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1580,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1385,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1130,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1082,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1083,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1084,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1085,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1131,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1386,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1387,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1581,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1582,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1388,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1338,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1087,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1088,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1090,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1091,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1092,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1339,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1093,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1094,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1340,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+629,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+630,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+631,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1336,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1081,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1082,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1083,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1084,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1085,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1337,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+624,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+625,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+626,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+627,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+628,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+18,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1097,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1088,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1090,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1091,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1092,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+19,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1098,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1094,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1576,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1356,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1357,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+586,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+20,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1099,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1082,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1083,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1084,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1085,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1358,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1359,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1360,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1577,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+587,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1383,"in_0_bvalid", false,-1);
    tracep->declBit(c+1386,"in_0_rvalid", false,-1);
    tracep->declBit(c+1389,"in_0_wready", false,-1);
    tracep->declBit(c+1390,"in_0_awready", false,-1);
    tracep->declBit(c+1583,"in_0_arready", false,-1);
    tracep->declBit(c+1382,"anonIn_awready", false,-1);
    tracep->declBit(c+1385,"anonIn_arready", false,-1);
    tracep->declBit(c+1132,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1133,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1134,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1135,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1136,"arSel", false,-1, 15,0);
    tracep->declBus(c+1137,"awSel", false,-1, 15,0);
    tracep->declBus(c+1391,"rSel", false,-1, 15,0);
    tracep->declBus(c+1392,"bSel", false,-1, 15,0);
    tracep->declBus(c+70,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+71,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+72,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+73,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+74,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+75,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+76,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+77,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+78,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+79,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+80,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+81,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+82,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+83,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+84,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+85,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+86,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+87,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+88,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+89,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+90,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+91,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+92,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+93,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+94,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+95,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+96,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+97,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+98,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+99,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+100,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+101,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+102,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+103,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+104,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+105,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+106,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+107,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+108,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+109,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+110,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+111,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+112,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+113,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+114,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+115,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+116,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+117,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+118,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+119,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+120,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+121,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+122,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+123,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+124,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+125,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+126,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+127,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+128,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+129,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+130,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+131,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+132,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+133,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1138,"in_0_arvalid", false,-1);
    tracep->declBit(c+134,"latched", false,-1);
    tracep->declBit(c+1139,"in_0_awvalid", false,-1);
    tracep->declBit(c+1140,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1141,"in_0_wvalid", false,-1);
    tracep->declBit(c+135,"idle_2", false,-1);
    tracep->declBit(c+1393,"anyValid", false,-1);
    tracep->declBus(c+1394,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+136,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1395,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1396,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1397,"prefixOR_1", false,-1);
    tracep->declBit(c+1398,"winner_2_1", false,-1);
    tracep->declBit(c+137,"state_2_0", false,-1);
    tracep->declBit(c+138,"state_2_1", false,-1);
    tracep->declBit(c+1399,"muxState_2_0", false,-1);
    tracep->declBit(c+1400,"muxState_2_1", false,-1);
    tracep->declBit(c+139,"idle_3", false,-1);
    tracep->declBit(c+1401,"anyValid_1", false,-1);
    tracep->declBus(c+1402,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1403,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1404,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1405,"winner_3_0", false,-1);
    tracep->declBit(c+1406,"winner_3_1", false,-1);
    tracep->declBit(c+141,"state_3_0", false,-1);
    tracep->declBit(c+142,"state_3_1", false,-1);
    tracep->declBit(c+589,"muxState_3_0", false,-1);
    tracep->declBit(c+590,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+143,"io_enq_ready", false,-1);
    tracep->declBit(c+1140,"io_enq_valid", false,-1);
    tracep->declBus(c+1142,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1407,"io_deq_ready", false,-1);
    tracep->declBit(c+1143,"io_deq_valid", false,-1);
    tracep->declBus(c+1144,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+144,"wrap", false,-1);
    tracep->declBit(c+145,"wrap_1", false,-1);
    tracep->declBit(c+146,"maybe_full", false,-1);
    tracep->declBit(c+147,"ptr_match", false,-1);
    tracep->declBit(c+148,"empty", false,-1);
    tracep->declBit(c+149,"full", false,-1);
    tracep->declBit(c+1143,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1408,"do_deq", false,-1);
    tracep->declBit(c+1409,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+145,"R0_addr", false,-1);
    tracep->declBit(c+1626,"R0_en", false,-1);
    tracep->declBit(c+1545,"R0_clk", false,-1);
    tracep->declBus(c+150,"R0_data", false,-1, 1,0);
    tracep->declBit(c+144,"W0_addr", false,-1);
    tracep->declBit(c+1409,"W0_en", false,-1);
    tracep->declBit(c+1545,"W0_clk", false,-1);
    tracep->declBus(c+1142,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+151+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1410,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1145,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1070,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1071,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1072,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1362,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1102,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1074,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1103,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1363,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1364,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1357,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1411,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1146,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1079,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1358,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1359,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1360,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1577,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1368,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1120,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1070,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1121,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1200,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1122,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1074,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1377,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+55,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+56,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+57,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1378,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1123,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1124,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1379,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+58,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+59,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+61,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1147,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1148,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+153,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1149,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+591,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+154,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+155,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+156,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1068,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1069,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1070,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1071,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1072,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1068,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1073,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1074,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1332,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1333,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+9,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1573,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1076,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1077,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1079,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1334,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1335,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+10,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1574,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1573,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1364,"in_0_bvalid", false,-1);
    tracep->declBit(c+1359,"in_0_rvalid", false,-1);
    tracep->declBit(c+1412,"in_0_wready", false,-1);
    tracep->declBit(c+1413,"in_0_awready", false,-1);
    tracep->declBit(c+1411,"in_0_arready", false,-1);
    tracep->declBit(c+1410,"anonIn_awready", false,-1);
    tracep->declBit(c+1151,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1152,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1153,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1154,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1155,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1156,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1157,"arSel", false,-1, 15,0);
    tracep->declBus(c+1158,"awSel", false,-1, 15,0);
    tracep->declBus(c+1414,"rSel", false,-1, 15,0);
    tracep->declBus(c+1415,"bSel", false,-1, 15,0);
    tracep->declBit(c+157,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+158,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+159,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+160,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+161,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+162,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+163,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+164,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+165,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+166,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+167,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+168,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+169,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+170,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+171,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+172,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+173,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+174,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+175,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+176,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+177,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+178,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+179,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+180,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+181,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+182,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+183,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+184,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+185,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+186,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+187,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+188,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+189,"latched", false,-1);
    tracep->declBit(c+1159,"in_0_awvalid", false,-1);
    tracep->declBit(c+1160,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1161,"in_0_wvalid", false,-1);
    tracep->declBit(c+190,"idle_3", false,-1);
    tracep->declBit(c+1416,"anyValid", false,-1);
    tracep->declBus(c+1417,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+191,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1418,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1419,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1420,"prefixOR_1", false,-1);
    tracep->declBit(c+1421,"winner_3_1", false,-1);
    tracep->declBit(c+1422,"winner_3_2", false,-1);
    tracep->declBit(c+192,"state_3_0", false,-1);
    tracep->declBit(c+193,"state_3_1", false,-1);
    tracep->declBit(c+194,"state_3_2", false,-1);
    tracep->declBit(c+1423,"muxState_3_0", false,-1);
    tracep->declBit(c+1424,"muxState_3_1", false,-1);
    tracep->declBit(c+1425,"muxState_3_2", false,-1);
    tracep->declBit(c+195,"idle_4", false,-1);
    tracep->declBit(c+1426,"anyValid_1", false,-1);
    tracep->declBus(c+1427,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+196,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1428,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1429,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1430,"winner_4_0", false,-1);
    tracep->declBit(c+1431,"winner_4_2", false,-1);
    tracep->declBit(c+197,"state_4_0", false,-1);
    tracep->declBit(c+198,"state_4_2", false,-1);
    tracep->declBit(c+1432,"muxState_4_0", false,-1);
    tracep->declBit(c+1433,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+199,"io_enq_ready", false,-1);
    tracep->declBit(c+1160,"io_enq_valid", false,-1);
    tracep->declBus(c+1162,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1434,"io_deq_ready", false,-1);
    tracep->declBit(c+1163,"io_deq_valid", false,-1);
    tracep->declBus(c+1164,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+200,"wrap", false,-1);
    tracep->declBit(c+201,"wrap_1", false,-1);
    tracep->declBit(c+202,"maybe_full", false,-1);
    tracep->declBit(c+203,"ptr_match", false,-1);
    tracep->declBit(c+204,"empty", false,-1);
    tracep->declBit(c+205,"full", false,-1);
    tracep->declBit(c+1163,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1435,"do_deq", false,-1);
    tracep->declBit(c+1436,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+201,"R0_addr", false,-1);
    tracep->declBit(c+1626,"R0_en", false,-1);
    tracep->declBit(c+1545,"R0_clk", false,-1);
    tracep->declBus(c+206,"R0_data", false,-1, 2,0);
    tracep->declBit(c+200,"W0_addr", false,-1);
    tracep->declBit(c+1436,"W0_en", false,-1);
    tracep->declBit(c+1545,"W0_clk", false,-1);
    tracep->declBus(c+1162,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+207+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1361,"auto_in_awready", false,-1);
    tracep->declBit(c+1100,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1070,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1071,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1072,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1101,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1362,"auto_in_wready", false,-1);
    tracep->declBit(c+1102,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1074,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1103,"auto_in_wlast", false,-1);
    tracep->declBit(c+1363,"auto_in_bready", false,-1);
    tracep->declBit(c+1364,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1357,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1366,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1367,"auto_in_arready", false,-1);
    tracep->declBit(c+1104,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1079,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1105,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1358,"auto_in_rready", false,-1);
    tracep->declBit(c+1359,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1360,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1577,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+588,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1368,"auto_in_rlast", false,-1);
    tracep->declBit(c+1410,"auto_out_awready", false,-1);
    tracep->declBit(c+1145,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1070,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1071,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1072,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1362,"auto_out_wready", false,-1);
    tracep->declBit(c+1102,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1074,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1103,"auto_out_wlast", false,-1);
    tracep->declBit(c+1363,"auto_out_bready", false,-1);
    tracep->declBit(c+1364,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1357,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1411,"auto_out_arready", false,-1);
    tracep->declBit(c+1146,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1079,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1358,"auto_out_rready", false,-1);
    tracep->declBit(c+1359,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1360,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1577,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1368,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+209,"io_enq_ready", false,-1);
    tracep->declBit(c+1202,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1437,"io_deq_ready", false,-1);
    tracep->declBit(c+210,"io_deq_valid", false,-1);
    tracep->declBit(c+211,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+210,"full", false,-1);
    tracep->declBit(c+211,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+212,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1203,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1438,"io_deq_ready", false,-1);
    tracep->declBit(c+214,"io_deq_valid", false,-1);
    tracep->declBit(c+215,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+214,"full", false,-1);
    tracep->declBit(c+215,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+216,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1204,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1439,"io_deq_ready", false,-1);
    tracep->declBit(c+218,"io_deq_valid", false,-1);
    tracep->declBit(c+219,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+218,"full", false,-1);
    tracep->declBit(c+219,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+220,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1205,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1440,"io_deq_ready", false,-1);
    tracep->declBit(c+222,"io_deq_valid", false,-1);
    tracep->declBit(c+223,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+222,"full", false,-1);
    tracep->declBit(c+223,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+224,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1206,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1441,"io_deq_ready", false,-1);
    tracep->declBit(c+226,"io_deq_valid", false,-1);
    tracep->declBit(c+227,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+226,"full", false,-1);
    tracep->declBit(c+227,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+228,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1207,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1442,"io_deq_ready", false,-1);
    tracep->declBit(c+230,"io_deq_valid", false,-1);
    tracep->declBit(c+231,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+230,"full", false,-1);
    tracep->declBit(c+231,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+232,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1208,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1443,"io_deq_ready", false,-1);
    tracep->declBit(c+234,"io_deq_valid", false,-1);
    tracep->declBit(c+235,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+234,"full", false,-1);
    tracep->declBit(c+235,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+236,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1209,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1444,"io_deq_ready", false,-1);
    tracep->declBit(c+238,"io_deq_valid", false,-1);
    tracep->declBit(c+239,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+238,"full", false,-1);
    tracep->declBit(c+239,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+240,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1210,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1445,"io_deq_ready", false,-1);
    tracep->declBit(c+242,"io_deq_valid", false,-1);
    tracep->declBit(c+243,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+242,"full", false,-1);
    tracep->declBit(c+243,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+244,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1211,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1446,"io_deq_ready", false,-1);
    tracep->declBit(c+246,"io_deq_valid", false,-1);
    tracep->declBit(c+247,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+246,"full", false,-1);
    tracep->declBit(c+247,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+248,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1212,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1447,"io_deq_ready", false,-1);
    tracep->declBit(c+250,"io_deq_valid", false,-1);
    tracep->declBit(c+251,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+250,"full", false,-1);
    tracep->declBit(c+251,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+252,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1213,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1448,"io_deq_ready", false,-1);
    tracep->declBit(c+254,"io_deq_valid", false,-1);
    tracep->declBit(c+255,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+254,"full", false,-1);
    tracep->declBit(c+255,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+256,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1214,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1449,"io_deq_ready", false,-1);
    tracep->declBit(c+258,"io_deq_valid", false,-1);
    tracep->declBit(c+259,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+258,"full", false,-1);
    tracep->declBit(c+259,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+260,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+1215,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1450,"io_deq_ready", false,-1);
    tracep->declBit(c+262,"io_deq_valid", false,-1);
    tracep->declBit(c+263,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+262,"full", false,-1);
    tracep->declBit(c+263,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+264,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1216,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1451,"io_deq_ready", false,-1);
    tracep->declBit(c+266,"io_deq_valid", false,-1);
    tracep->declBit(c+267,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+266,"full", false,-1);
    tracep->declBit(c+267,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+268,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1217,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1452,"io_deq_ready", false,-1);
    tracep->declBit(c+270,"io_deq_valid", false,-1);
    tracep->declBit(c+271,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+270,"full", false,-1);
    tracep->declBit(c+271,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+272,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1218,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1453,"io_deq_ready", false,-1);
    tracep->declBit(c+274,"io_deq_valid", false,-1);
    tracep->declBit(c+275,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+274,"full", false,-1);
    tracep->declBit(c+275,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+276,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1219,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1454,"io_deq_ready", false,-1);
    tracep->declBit(c+278,"io_deq_valid", false,-1);
    tracep->declBit(c+279,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+278,"full", false,-1);
    tracep->declBit(c+279,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+280,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1220,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1455,"io_deq_ready", false,-1);
    tracep->declBit(c+282,"io_deq_valid", false,-1);
    tracep->declBit(c+283,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+282,"full", false,-1);
    tracep->declBit(c+283,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+284,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1221,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1456,"io_deq_ready", false,-1);
    tracep->declBit(c+286,"io_deq_valid", false,-1);
    tracep->declBit(c+287,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+286,"full", false,-1);
    tracep->declBit(c+287,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+288,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1222,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1457,"io_deq_ready", false,-1);
    tracep->declBit(c+290,"io_deq_valid", false,-1);
    tracep->declBit(c+291,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+291,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+292,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1223,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1458,"io_deq_ready", false,-1);
    tracep->declBit(c+294,"io_deq_valid", false,-1);
    tracep->declBit(c+295,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+294,"full", false,-1);
    tracep->declBit(c+295,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+296,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1224,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1459,"io_deq_ready", false,-1);
    tracep->declBit(c+298,"io_deq_valid", false,-1);
    tracep->declBit(c+299,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+298,"full", false,-1);
    tracep->declBit(c+299,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+300,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1225,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1460,"io_deq_ready", false,-1);
    tracep->declBit(c+302,"io_deq_valid", false,-1);
    tracep->declBit(c+303,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+302,"full", false,-1);
    tracep->declBit(c+303,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+304,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1226,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1461,"io_deq_ready", false,-1);
    tracep->declBit(c+306,"io_deq_valid", false,-1);
    tracep->declBit(c+307,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+306,"full", false,-1);
    tracep->declBit(c+307,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+308,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1227,"io_enq_valid", false,-1);
    tracep->declBit(c+1101,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1462,"io_deq_ready", false,-1);
    tracep->declBit(c+310,"io_deq_valid", false,-1);
    tracep->declBit(c+311,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+310,"full", false,-1);
    tracep->declBit(c+311,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+312,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1228,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1463,"io_deq_ready", false,-1);
    tracep->declBit(c+314,"io_deq_valid", false,-1);
    tracep->declBit(c+315,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+314,"full", false,-1);
    tracep->declBit(c+315,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+316,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1229,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1464,"io_deq_ready", false,-1);
    tracep->declBit(c+318,"io_deq_valid", false,-1);
    tracep->declBit(c+319,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+318,"full", false,-1);
    tracep->declBit(c+319,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+320,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1230,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1465,"io_deq_ready", false,-1);
    tracep->declBit(c+322,"io_deq_valid", false,-1);
    tracep->declBit(c+323,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+322,"full", false,-1);
    tracep->declBit(c+323,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+324,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1231,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1466,"io_deq_ready", false,-1);
    tracep->declBit(c+326,"io_deq_valid", false,-1);
    tracep->declBit(c+327,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+326,"full", false,-1);
    tracep->declBit(c+327,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+328,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1232,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1467,"io_deq_ready", false,-1);
    tracep->declBit(c+330,"io_deq_valid", false,-1);
    tracep->declBit(c+331,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+330,"full", false,-1);
    tracep->declBit(c+331,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+332,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1233,"io_enq_valid", false,-1);
    tracep->declBit(c+1105,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1468,"io_deq_ready", false,-1);
    tracep->declBit(c+334,"io_deq_valid", false,-1);
    tracep->declBit(c+335,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+334,"full", false,-1);
    tracep->declBit(c+335,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+336,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1584,"reset", false,-1);
    tracep->declBit(c+1382,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1128,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1088,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1090,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1091,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1092,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1201,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1096,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1094,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1095,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1129,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1383,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1384,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1580,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1385,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1130,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1082,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1083,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1084,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1085,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1131,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1386,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1387,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1581,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1582,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1388,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1584,"reset", false,-1);
    tracep->declBit(c+1621,"io_interrupt", false,-1);
    tracep->declBit(c+1382,"io_master_awready", false,-1);
    tracep->declBit(c+1128,"io_master_awvalid", false,-1);
    tracep->declBus(c+1088,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1090,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1091,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1092,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1201,"io_master_wready", false,-1);
    tracep->declBit(c+1096,"io_master_wvalid", false,-1);
    tracep->declBus(c+1094,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1095,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"io_master_wlast", false,-1);
    tracep->declBit(c+1129,"io_master_bready", false,-1);
    tracep->declBit(c+1383,"io_master_bvalid", false,-1);
    tracep->declBus(c+1384,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1580,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1385,"io_master_arready", false,-1);
    tracep->declBit(c+1130,"io_master_arvalid", false,-1);
    tracep->declBus(c+1082,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1083,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1084,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1085,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1131,"io_master_rready", false,-1);
    tracep->declBit(c+1386,"io_master_rvalid", false,-1);
    tracep->declBus(c+1387,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1581,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1582,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1388,"io_master_rlast", false,-1);
    tracep->declBit(c+1627,"io_slave_awready", false,-1);
    tracep->declBit(c+1621,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1628,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1629,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1630,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1622,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1612,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1631,"io_slave_wready", false,-1);
    tracep->declBit(c+1621,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1629,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1628,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1621,"io_slave_wlast", false,-1);
    tracep->declBit(c+1621,"io_slave_bready", false,-1);
    tracep->declBit(c+1632,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1633,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1634,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1635,"io_slave_arready", false,-1);
    tracep->declBit(c+1621,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1628,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1629,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1630,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1622,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1612,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1621,"io_slave_rready", false,-1);
    tracep->declBit(c+1636,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1637,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1638,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1639,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1640,"io_slave_rlast", false,-1);
    tracep->declBus(c+337,"snpc", false,-1, 31,0);
    tracep->declBus(c+1015,"inst_if", false,-1, 31,0);
    tracep->declBus(c+338,"pc_if", false,-1, 31,0);
    tracep->declBit(c+339,"if_valid", false,-1);
    tracep->declBus(c+340,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1165,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1630,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1628,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1641,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1622,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1612,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1642,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1016,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1017,"if_axi_arready", false,-1);
    tracep->declBit(c+1469,"if_axi_rvalid", false,-1);
    tracep->declBit(c+1018,"if_axi_rready", false,-1);
    tracep->declBit(c+1643,"if_axi_rlast", false,-1);
    tracep->declBus(c+341,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1234,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+342,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1644,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1235,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1623,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1613,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1585,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+343,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1470,"icache_axi_arready", false,-1);
    tracep->declBit(c+1471,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+344,"icache_axi_rready", false,-1);
    tracep->declBit(c+1472,"icache_axi_rlast", false,-1);
    tracep->declBit(c+345,"id_valid", false,-1);
    tracep->declBit(c+346,"id_ready", false,-1);
    tracep->declBus(c+1019,"prepc", false,-1, 20,0);
    tracep->declBus(c+1020,"prepc_en", false,-1, 1,0);
    tracep->declBus(c+347,"rs1", false,-1, 3,0);
    tracep->declBus(c+348,"rs2", false,-1, 3,0);
    tracep->declBus(c+349,"pc_id", false,-1, 31,0);
    tracep->declBus(c+350,"imm_id", false,-1, 31,0);
    tracep->declBus(c+1021,"op_id", false,-1, 4,0);
    tracep->declBus(c+351,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+352,"rd_id", false,-1, 3,0);
    tracep->declBit(c+353,"gpr_wen_id", false,-1);
    tracep->declBit(c+354,"ls_valid_id", false,-1);
    tracep->declBit(c+1022,"fencei_id", false,-1);
    tracep->declBit(c+355,"ex_ready", false,-1);
    tracep->declBit(c+592,"ex_valid", false,-1);
    tracep->declBus(c+356,"xrd_ex", false,-1, 31,0);
    tracep->declBus(c+357,"rd_ex", false,-1, 3,0);
    tracep->declBit(c+358,"gpr_wen_ex", false,-1);
    tracep->declBus(c+359,"csrs_wen_ex", false,-1, 3,0);
    tracep->declBus(c+1023,"ls_addr", false,-1, 31,0);
    tracep->declBus(c+1024,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+360,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+361,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+1586,"ls_done", false,-1);
    tracep->declBus(c+597,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+598,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+599,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1473,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1587,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1645,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1646,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1647,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1236,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1648,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1237,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1588,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1589,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1649,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1650,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1590,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1591,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+600,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1474,"ls_axi_awready", false,-1);
    tracep->declBit(c+601,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1238,"ls_axi_wready", false,-1);
    tracep->declBit(c+1475,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+602,"ls_axi_bready", false,-1);
    tracep->declBit(c+603,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1239,"ls_axi_arready", false,-1);
    tracep->declBit(c+1476,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+604,"ls_axi_rready", false,-1);
    tracep->declBit(c+601,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1240,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1651,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1652,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1166,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+362,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1653,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1654,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1167,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1656,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1168,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1657,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1658,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1169,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1659,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1170,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1660,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1661,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1662,"c_axi_awvalid", false,-1);
    tracep->declBit(c+1663,"c_axi_awready", false,-1);
    tracep->declBit(c+1664,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1665,"c_axi_wready", false,-1);
    tracep->declBit(c+1666,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1667,"c_axi_bready", false,-1);
    tracep->declBit(c+1171,"c_axi_arvalid", false,-1);
    tracep->declBit(c+363,"c_axi_arready", false,-1);
    tracep->declBit(c+364,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1172,"c_axi_rready", false,-1);
    tracep->declBit(c+1668,"c_axi_wlast", false,-1);
    tracep->declBit(c+1669,"c_axi_rlast", false,-1);
    tracep->declBus(c+365,"r1", false,-1, 31,0);
    tracep->declBus(c+1025,"r2", false,-1, 31,0);
    tracep->declBus(c+366,"mepc", false,-1, 31,0);
    tracep->declBus(c+367,"mstatus", false,-1, 31,0);
    tracep->declBus(c+368,"mcause", false,-1, 31,0);
    tracep->declBus(c+369,"mtvec", false,-1, 31,0);
    tracep->declBit(c+1621,"isRAW", false,-1);
    tracep->declBit(c+370,"CHazarden", false,-1);
    tracep->declBit(c+371,"isCHazard", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1670,"B_N", false,-1, 31,0);
    tracep->declBus(c+1671,"B_W", false,-1, 31,0);
    tracep->declBus(c+1672,"BTAG", false,-1, 31,0);
    tracep->declBus(c+1673,"BTARG", false,-1, 31,0);
    tracep->declBus(c+1670,"J_N", false,-1, 31,0);
    tracep->declBus(c+1671,"J_W", false,-1, 31,0);
    tracep->declBus(c+1672,"JTAG", false,-1, 31,0);
    tracep->declBus(c+1674,"JTARG", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+340,"pc_i", false,-1, 31,0);
    tracep->declBus(c+337,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+1019,"prepc_i", false,-1, 20,0);
    tracep->declBus(c+338,"prepc_tag_i", false,-1, 31,0);
    tracep->declBus(c+1020,"prepc_en_i", false,-1, 1,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+372+i*1,"jsnpc_reg", true,(i+0), 15,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+388+i*1,"jtag_reg", true,(i+0), 25,0);
    }
    tracep->declBus(c+404,"jtag", false,-1, 25,0);
    tracep->declBus(c+405,"jindex", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+406+i*1,"bsnpc_reg", true,(i+0), 7,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+422+i*1,"btag_reg", true,(i+0), 25,0);
    }
    tracep->declBus(c+404,"btag", false,-1, 25,0);
    tracep->declBus(c+405,"bindex", false,-1, 3,0);
    tracep->declBus(c+438,"jtag_pre", false,-1, 25,0);
    tracep->declBus(c+439,"jindex_pre", false,-1, 3,0);
    tracep->declBus(c+438,"btag_pre", false,-1, 25,0);
    tracep->declBus(c+439,"bindex_pre", false,-1, 3,0);
    tracep->declBus(c+1675,"blog2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBus(c+1675,"jlog2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBus(c+440,"bhit", false,-1, 0,0);
    tracep->declBus(c+441,"jhit", false,-1, 0,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+442,"a", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+443,"a", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+444,"a", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+445,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+363,"c_axi_arready", false,-1);
    tracep->declBit(c+1171,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1168,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1166,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1167,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1169,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1170,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1172,"c_axi_rready", false,-1);
    tracep->declBit(c+364,"c_axi_rvalid", false,-1);
    tracep->declBus(c+1657,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+362,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1661,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1669,"c_axi_rlast", false,-1);
    tracep->declBus(c+1676,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1677,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBus(c+1592,"c_rdata", false,-1, 31,0);
    tracep->declQuad(c+446,"mtime", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+371,"flush_i", false,-1);
    tracep->declBit(c+345,"id_valid_i", false,-1);
    tracep->declBit(c+355,"ex_ready_o", false,-1);
    tracep->declBit(c+592,"ex_valid_o", false,-1);
    tracep->declBus(c+349,"pc_i", false,-1, 31,0);
    tracep->declBus(c+350,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1021,"op_i", false,-1, 4,0);
    tracep->declBus(c+351,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+365,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1025,"r2_i", false,-1, 31,0);
    tracep->declBus(c+352,"rd_i", false,-1, 3,0);
    tracep->declBit(c+353,"gpr_wen_i", false,-1);
    tracep->declBus(c+366,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+367,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+368,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+369,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+356,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+357,"rd_o", false,-1, 3,0);
    tracep->declBit(c+358,"gpr_wen_o", false,-1);
    tracep->declBus(c+359,"csrs_wen_o", false,-1, 3,0);
    tracep->declBus(c+1023,"ls_addr_o", false,-1, 31,0);
    tracep->declBus(c+1024,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+361,"ls_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1586,"ls_done_i", false,-1);
    tracep->declBus(c+360,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+1678,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1679,"WAIT", false,-1, 0,0);
    tracep->declBit(c+448,"state", false,-1);
    tracep->declBit(c+1477,"updata", false,-1);
    tracep->declBus(c+1026,"total", false,-1, 1,0);
    tracep->declBus(c+1027,"abnormal", false,-1, 1,0);
    tracep->declBus(c+449,"counter", false,-1, 1,0);
    tracep->declBus(c+1028,"add_res", false,-1, 31,0);
    tracep->declBus(c+450,"add_pc_4", false,-1, 31,0);
    tracep->declBus(c+569,"sll_res", false,-1, 31,0);
    tracep->declBus(c+570,"srl_res", false,-1, 31,0);
    tracep->declBit(c+1029,"slt_res", false,-1);
    tracep->declBus(c+571,"and_res", false,-1, 31,0);
    tracep->declBus(c+572,"or_res", false,-1, 31,0);
    tracep->declBus(c+573,"xor_res", false,-1, 31,0);
    tracep->declBus(c+574,"xrd", false,-1, 31,0);
    tracep->declBus(c+451,"csr", false,-1, 31,0);
    tracep->declBus(c+1030,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1031,"csrs_w", false,-1, 31,0);
    tracep->declBus(c+1032,"csrs_wen", false,-1, 3,0);
    tracep->declBit(c+452,"funct7_i", false,-1);
    tracep->declBus(c+1628,"ADD", false,-1, 3,0);
    tracep->declBus(c+1680,"SUB", false,-1, 3,0);
    tracep->declBus(c+1681,"SLL", false,-1, 3,0);
    tracep->declBus(c+1682,"SRL", false,-1, 3,0);
    tracep->declBus(c+1683,"SRA", false,-1, 3,0);
    tracep->declBus(c+1684,"SLT", false,-1, 3,0);
    tracep->declBus(c+1685,"AND", false,-1, 3,0);
    tracep->declBus(c+1686,"OR", false,-1, 3,0);
    tracep->declBus(c+1687,"XOR", false,-1, 3,0);
    tracep->declBus(c+1033,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+1034,"alu_res", false,-1, 31,0);
    tracep->declBit(c+1035,"ls_valid", false,-1);
    tracep->declBit(c+1036,"jalen", false,-1);
    tracep->declBit(c+1037,"jalren", false,-1);
    tracep->declBit(c+575,"beqen", false,-1);
    tracep->declBit(c+576,"bneen", false,-1);
    tracep->declBit(c+577,"blten", false,-1);
    tracep->declBit(c+578,"bgeen", false,-1);
    tracep->declBit(c+579,"bltuen", false,-1);
    tracep->declBit(c+580,"bgeuen", false,-1);
    tracep->declBit(c+1038,"ecall_en", false,-1);
    tracep->declBit(c+581,"mret_en", false,-1);
    tracep->declBus(c+1039,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1670,"n", false,-1, 31,0);
    tracep->declBus(c+1670,"m", false,-1, 31,0);
    tracep->declBus(c+1671,"w", false,-1, 31,0);
    tracep->declBus(c+1674,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+1022,"fencei_i", false,-1);
    tracep->declBit(c+1017,"m_axi_arready", false,-1);
    tracep->declBit(c+1016,"m_axi_arvalid", false,-1);
    tracep->declBus(c+1628,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+340,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1630,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1622,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1612,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1018,"m_axi_rready", false,-1);
    tracep->declBit(c+1469,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1641,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1165,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1642,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1643,"m_axi_rlast", false,-1);
    tracep->declBit(c+1470,"s_axi_arready", false,-1);
    tracep->declBit(c+343,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1644,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+341,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+342,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1623,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1613,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+344,"s_axi_rready", false,-1);
    tracep->declBit(c+1471,"s_axi_rvalid", false,-1);
    tracep->declBus(c+1235,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1234,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1585,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1472,"s_axi_rlast", false,-1);
    tracep->declBus(c+453,"tag_check", false,-1, 15,0);
    tracep->declBit(c+1040,"unvalid", false,-1);
    tracep->declBus(c+1670,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1674,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1688,"CACHE_WAY", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+454+i*1,"tag_reg", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+470+i*1,"valid_reg", true,(i+0), 15,0);
    }
    tracep->declBus(c+1173,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1174,"tag", false,-1, 7,0);
    tracep->declBus(c+1175,"index", false,-1, 3,0);
    tracep->declBus(c+1176,"offset", false,-1, 1,0);
    tracep->declBus(c+1177,"hit", false,-1, 0,0);
    tracep->declBus(c+1675,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBit(c+1478,"axi_rvalid", false,-1);
    tracep->declBit(c+474,"axi_rvalid_enable", false,-1);
    tracep->declBus(c+1678,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1679,"TRANS", false,-1, 0,0);
    tracep->declBit(c+605,"state", false,-1);
    tracep->declBus(c+475,"burst_counter", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+476,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+477,"a", false,-1, 31,0);
    tracep->declBus(c+478,"b", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+479,"a", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+480,"a", false,-1, 31,0);
    tracep->declBus(c+481,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+1621,"isRAW_i", false,-1);
    tracep->declBit(c+371,"flush_i", false,-1);
    tracep->declBus(c+1019,"prepc_o", false,-1, 20,0);
    tracep->declBus(c+1020,"prepc_en_o", false,-1, 1,0);
    tracep->declBit(c+339,"if_valid_i", false,-1);
    tracep->declBit(c+346,"id_ready_o", false,-1);
    tracep->declBit(c+345,"id_valid_o", false,-1);
    tracep->declBit(c+355,"ex_ready_i", false,-1);
    tracep->declBus(c+338,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1015,"inst_i", false,-1, 31,0);
    tracep->declBus(c+349,"pc_o", false,-1, 31,0);
    tracep->declBus(c+350,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1021,"op_o", false,-1, 4,0);
    tracep->declBus(c+351,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+347,"rs1_o", false,-1, 3,0);
    tracep->declBus(c+348,"rs2_o", false,-1, 3,0);
    tracep->declBus(c+352,"rd_o", false,-1, 3,0);
    tracep->declBit(c+353,"gpr_wen_o", false,-1);
    tracep->declBit(c+354,"ls_valid_o", false,-1);
    tracep->declBit(c+1022,"fencei_o", false,-1);
    tracep->declBus(c+1678,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1679,"WAIT", false,-1, 0,0);
    tracep->declBit(c+482,"state", false,-1);
    tracep->declBit(c+1041,"updata", false,-1);
    tracep->declBus(c+1042,"op", false,-1, 4,0);
    tracep->declBus(c+1043,"rd", false,-1, 3,0);
    tracep->declBus(c+1044,"funct3", false,-1, 2,0);
    tracep->declBus(c+1045,"rs1", false,-1, 3,0);
    tracep->declBus(c+1046,"rs2", false,-1, 3,0);
    tracep->declBus(c+1047,"immI", false,-1, 31,0);
    tracep->declBus(c+1048,"immU", false,-1, 31,0);
    tracep->declBus(c+1049,"immS", false,-1, 31,0);
    tracep->declBus(c+1050,"immB", false,-1, 31,0);
    tracep->declBus(c+1051,"immJ", false,-1, 31,0);
    tracep->declBus(c+1052,"imm", false,-1, 31,0);
    tracep->declBus(c+1053,"funct7", false,-1, 6,0);
    tracep->declBit(c+483,"prevalid", false,-1);
    tracep->declBus(c+1054,"prepc_en", false,-1, 1,0);
    tracep->declBus(c+582,"prepc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+371,"flush", false,-1);
    tracep->declBit(c+339,"if_valid_o", false,-1);
    tracep->declBit(c+346,"id_ready_i", false,-1);
    tracep->declBus(c+360,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+337,"snpc_i", false,-1, 31,0);
    tracep->declBus(c+338,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1015,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1017,"if_axi_arready_i", false,-1);
    tracep->declBit(c+1016,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+1628,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+340,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+1630,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1622,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1612,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1018,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1469,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1641,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1165,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1642,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1643,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1678,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1679,"WAIT", false,-1, 0,0);
    tracep->declBit(c+484,"state", false,-1);
    tracep->declBus(c+1689,"RESET_PC", false,-1, 31,0);
    tracep->declBus(c+340,"pc", false,-1, 31,0);
    tracep->declBit(c+1055,"updata", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+1021,"op_i", false,-1, 4,0);
    tracep->declBus(c+351,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+1056,"ls_valid_i", false,-1);
    tracep->declBus(c+1023,"ls_addr_i", false,-1, 31,0);
    tracep->declBus(c+1024,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+361,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1586,"ls_done_o", false,-1);
    tracep->declBit(c+1474,"ls_axi_awready", false,-1);
    tracep->declBit(c+600,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1647,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+597,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1645,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1588,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1649,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1238,"ls_axi_wready", false,-1);
    tracep->declBit(c+601,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+598,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1587,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+601,"ls_axi_wlast", false,-1);
    tracep->declBit(c+602,"ls_axi_bready", false,-1);
    tracep->declBit(c+1475,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+1236,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1590,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1239,"ls_axi_arready", false,-1);
    tracep->declBit(c+603,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1648,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+599,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1646,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1589,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1650,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+604,"ls_axi_rready", false,-1);
    tracep->declBit(c+1476,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+1237,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1473,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1591,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1240,"ls_axi_rlast", false,-1);
    tracep->declBit(c+1057,"ls_wen_i", false,-1);
    tracep->declBit(c+1058,"ls_ren_i", false,-1);
    tracep->declBus(c+583,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1479,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+584,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+585,"ls_arsize_i", false,-1, 2,0);
    tracep->declBit(c+485,"ls_read_done", false,-1);
    tracep->declBus(c+1612,"AXI_IDLE", false,-1, 1,0);
    tracep->declBus(c+1613,"AXI_READ", false,-1, 1,0);
    tracep->declBus(c+1614,"AXI_WRITE", false,-1, 1,0);
    tracep->declBus(c+606,"axi_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1670,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1672,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBus(c+356,"wdata", false,-1, 31,0);
    tracep->declBus(c+357,"waddr", false,-1, 3,0);
    tracep->declBit(c+358,"wen", false,-1);
    tracep->declBus(c+347,"raddr1", false,-1, 3,0);
    tracep->declBus(c+365,"r1", false,-1, 31,0);
    tracep->declBus(c+348,"raddr2", false,-1, 3,0);
    tracep->declBus(c+1025,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+486+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+502,"rdata1_low", false,-1, 31,0);
    tracep->declBus(c+503,"rdata1_high", false,-1, 31,0);
    tracep->declBus(c+504,"rdata2_low", false,-1, 31,0);
    tracep->declBus(c+505,"rdata2_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+1470,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+343,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1644,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+341,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+342,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1623,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1613,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+344,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1471,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+1235,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1234,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1585,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1472,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1474,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+600,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1647,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+597,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1645,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1588,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1649,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1238,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+601,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+598,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1587,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+601,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+602,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1475,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+1236,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1590,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1239,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+603,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1648,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+599,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1646,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1589,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1650,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+604,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1476,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+1237,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1473,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1591,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1240,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1382,"io_master_awready", false,-1);
    tracep->declBit(c+1128,"io_master_awvalid", false,-1);
    tracep->declBus(c+1088,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1090,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1091,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1092,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1201,"io_master_wready", false,-1);
    tracep->declBit(c+1096,"io_master_wvalid", false,-1);
    tracep->declBus(c+1094,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1095,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1096,"io_master_wlast", false,-1);
    tracep->declBit(c+1129,"io_master_bready", false,-1);
    tracep->declBit(c+1383,"io_master_bvalid", false,-1);
    tracep->declBus(c+1384,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1580,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1385,"io_master_arready", false,-1);
    tracep->declBit(c+1130,"io_master_arvalid", false,-1);
    tracep->declBus(c+1082,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1083,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1084,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1085,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1131,"io_master_rready", false,-1);
    tracep->declBit(c+1386,"io_master_rvalid", false,-1);
    tracep->declBus(c+1387,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1581,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1582,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1388,"io_master_rlast", false,-1);
    tracep->declBit(c+363,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1171,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1168,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1166,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1167,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1169,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1170,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1172,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+364,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+1657,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+362,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1661,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1669,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+1089,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1094,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1178,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1480,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1095,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1090,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1179,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1088,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1384,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1180,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1241,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1091,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1181,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1092,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1182,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1580,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1593,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1128,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1382,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1096,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1201,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1383,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1129,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1096,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1183,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1481,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1482,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1184,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1242,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1678,"SEL_IFU", false,-1, 0,0);
    tracep->declBus(c+1679,"SEL_LSU", false,-1, 0,0);
    tracep->declBit(c+1185,"sel_m", false,-1);
    tracep->declBus(c+1612,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1613,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1614,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+506,"state", false,-1, 1,0);
    tracep->declBus(c+1676,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1677,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1186,"sel_clint", false,-1);
    tracep->declBus(c+1690,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1691,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1187,"sel_mvendorid", false,-1);
    tracep->declBit(c+1188,"sel_marchid", false,-1);
    tracep->declBit(c+1189,"sel_id", false,-1);
    tracep->declBus(c+1594,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBit(c+1626,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1626,"I_AXI_RVALID", false,-1);
    tracep->declBus(c+507,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+508,"marchid", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1672,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1629,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+356,"din", false,-1, 31,0);
    tracep->declBus(c+368,"dout", false,-1, 31,0);
    tracep->declBit(c+509,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1672,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1629,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+356,"din", false,-1, 31,0);
    tracep->declBus(c+366,"dout", false,-1, 31,0);
    tracep->declBit(c+510,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1672,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1692,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+356,"din", false,-1, 31,0);
    tracep->declBus(c+367,"dout", false,-1, 31,0);
    tracep->declBit(c+511,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1672,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1629,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+356,"din", false,-1, 31,0);
    tracep->declBus(c+369,"dout", false,-1, 31,0);
    tracep->declBit(c+512,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"io_d", false,-1);
    tracep->declBit(c+513,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"io_d", false,-1);
    tracep->declBit(c+513,"io_q", false,-1);
    tracep->declBit(c+513,"sync_0", false,-1);
    tracep->declBit(c+514,"sync_1", false,-1);
    tracep->declBit(c+515,"sync_2", false,-1);
    tracep->declBit(c+516,"sync_3", false,-1);
    tracep->declBit(c+517,"sync_4", false,-1);
    tracep->declBit(c+518,"sync_5", false,-1);
    tracep->declBit(c+519,"sync_6", false,-1);
    tracep->declBit(c+520,"sync_7", false,-1);
    tracep->declBit(c+521,"sync_8", false,-1);
    tracep->declBit(c+522,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1315,"auto_in_psel", false,-1);
    tracep->declBit(c+1316,"auto_in_penable", false,-1);
    tracep->declBit(c+1305,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1194,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1304,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+621,"auto_in_pready", false,-1);
    tracep->declBit(c+1620,"auto_in_pslverr", false,-1);
    tracep->declBus(c+622,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1547,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1548,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1549,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1550,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1551,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1552,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1553,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1554,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1555,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1556,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBus(c+1243,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1315,"in_psel", false,-1);
    tracep->declBit(c+1316,"in_penable", false,-1);
    tracep->declBus(c+1304,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1305,"in_pwrite", false,-1);
    tracep->declBus(c+1306,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+621,"in_pready", false,-1);
    tracep->declBus(c+622,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1620,"in_pslverr", false,-1);
    tracep->declBus(c+1547,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1548,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1549,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1550,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1551,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1552,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1553,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1554,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1555,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1556,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1630,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1693,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1694,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1695,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1696,"ONE", false,-1, 7,0);
    tracep->declBus(c+1697,"TWO", false,-1, 7,0);
    tracep->declBus(c+1698,"THREE", false,-1, 7,0);
    tracep->declBus(c+1699,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1700,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1701,"SIX", false,-1, 7,0);
    tracep->declBus(c+1702,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1703,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1704,"NINE", false,-1, 7,0);
    tracep->declBus(c+1705,"A", false,-1, 7,0);
    tracep->declBus(c+1706,"B", false,-1, 7,0);
    tracep->declBus(c+1707,"C", false,-1, 7,0);
    tracep->declBus(c+1708,"D", false,-1, 7,0);
    tracep->declBus(c+1709,"E", false,-1, 7,0);
    tracep->declBus(c+1710,"F", false,-1, 7,0);
    tracep->declBus(c+653,"led_reg", false,-1, 15,0);
    tracep->declBus(c+654,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+655+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1483,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1484,"write_en", false,-1);
    tracep->declBit(c+1485,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1313,"auto_in_psel", false,-1);
    tracep->declBit(c+1314,"auto_in_penable", false,-1);
    tracep->declBit(c+1305,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1194,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1304,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+619,"auto_in_pready", false,-1);
    tracep->declBit(c+1619,"auto_in_pslverr", false,-1);
    tracep->declBus(c+620,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1557,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1558,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBus(c+1243,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1313,"in_psel", false,-1);
    tracep->declBit(c+1314,"in_penable", false,-1);
    tracep->declBus(c+1304,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1305,"in_pwrite", false,-1);
    tracep->declBus(c+1306,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+619,"in_pready", false,-1);
    tracep->declBus(c+620,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1619,"in_pslverr", false,-1);
    tracep->declBit(c+1557,"ps2_clk", false,-1);
    tracep->declBit(c+1558,"ps2_data", false,-1);
    tracep->declBus(c+1711,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1712,"EXP", false,-1, 7,0);
    tracep->declBus(c+1536,"state", false,-1, 1,0);
    tracep->declBus(c+1537,"counter", false,-1, 3,0);
    tracep->declBus(c+1538,"buffer", false,-1, 7,0);
    tracep->declBus(c+1539,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1540,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1595,"ready", false,-1);
    tracep->declBus(c+1596,"rdata", false,-1, 31,0);
    tracep->declBit(c+1486,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1147,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1148,"auto_in_wvalid", false,-1);
    tracep->declBit(c+153,"auto_in_arready", false,-1);
    tracep->declBit(c+1149,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+591,"auto_in_rready", false,-1);
    tracep->declBit(c+154,"auto_in_rvalid", false,-1);
    tracep->declBus(c+155,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+156,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+154,"state", false,-1);
    tracep->declBus(c+156,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+155,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1190,"raddr", false,-1, 31,0);
    tracep->declBit(c+1191,"ren", false,-1);
    tracep->declBus(c+1192,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1317,"auto_in_psel", false,-1);
    tracep->declBit(c+1318,"auto_in_penable", false,-1);
    tracep->declBit(c+1305,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1193,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1304,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1571,"auto_in_pready", false,-1);
    tracep->declBit(c+1621,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1013,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1541,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1542,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1568,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBus(c+1193,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1317,"in_psel", false,-1);
    tracep->declBit(c+1318,"in_penable", false,-1);
    tracep->declBus(c+1304,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1305,"in_pwrite", false,-1);
    tracep->declBus(c+1306,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1571,"in_pready", false,-1);
    tracep->declBus(c+1013,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1621,"in_pslverr", false,-1);
    tracep->declBit(c+1541,"qspi_sck", false,-1);
    tracep->declBit(c+1542,"qspi_ce_n", false,-1);
    tracep->declBus(c+1568,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1568,"din", false,-1, 3,0);
    tracep->declBus(c+1543,"dout", false,-1, 3,0);
    tracep->declBus(c+1544,"douten", false,-1, 3,0);
    tracep->declBit(c+1597,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1545,"clk_i", false,-1);
    tracep->declBit(c+1546,"rst_i", false,-1);
    tracep->declBus(c+1193,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1306,"dat_i", false,-1, 31,0);
    tracep->declBus(c+1013,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1307,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1317,"cyc_i", false,-1);
    tracep->declBit(c+1317,"stb_i", false,-1);
    tracep->declBit(c+1597,"ack_o", false,-1);
    tracep->declBit(c+1305,"we_i", false,-1);
    tracep->declBit(c+1541,"sck", false,-1);
    tracep->declBit(c+1542,"ce_n", false,-1);
    tracep->declBus(c+1568,"din", false,-1, 3,0);
    tracep->declBus(c+1543,"dout", false,-1, 3,0);
    tracep->declBus(c+1544,"douten", false,-1, 3,0);
    tracep->declBus(c+1678,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1679,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+663,"mr_sck", false,-1);
    tracep->declBit(c+664,"mr_ce_n", false,-1);
    tracep->declBus(c+1568,"mr_din", false,-1, 3,0);
    tracep->declBus(c+665,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+666,"mr_doe", false,-1);
    tracep->declBit(c+667,"mw_sck", false,-1);
    tracep->declBit(c+668,"mw_ce_n", false,-1);
    tracep->declBus(c+1568,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1487,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+669,"mw_doe", false,-1);
    tracep->declBit(c+1488,"mr_rd", false,-1);
    tracep->declBit(c+670,"mr_done", false,-1);
    tracep->declBit(c+1489,"mw_wr", false,-1);
    tracep->declBit(c+1490,"mw_done", false,-1);
    tracep->declBit(c+1317,"wb_valid", false,-1);
    tracep->declBit(c+1491,"wb_we", false,-1);
    tracep->declBit(c+1492,"wb_re", false,-1);
    tracep->declBit(c+671,"state", false,-1);
    tracep->declBit(c+1493,"nstate", false,-1);
    tracep->declBus(c+1494,"size", false,-1, 2,0);
    tracep->declBus(c+1495,"byte0", false,-1, 7,0);
    tracep->declBus(c+1496,"byte1", false,-1, 7,0);
    tracep->declBus(c+1497,"byte2", false,-1, 7,0);
    tracep->declBus(c+1498,"byte3", false,-1, 7,0);
    tracep->declBus(c+1244,"wdata", false,-1, 31,0);
    tracep->declBit(c+922,"qpi_flag", false,-1);
    tracep->declBit(c+923,"qpi_sck", false,-1);
    tracep->declBit(c+924,"qpi_ce_n", false,-1);
    tracep->declBus(c+925,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+926,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+927,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1598,"rst_n", false,-1);
    tracep->declBus(c+1245,"addr", false,-1, 23,0);
    tracep->declBit(c+1488,"rd", false,-1);
    tracep->declBus(c+1625,"size", false,-1, 2,0);
    tracep->declBit(c+670,"done", false,-1);
    tracep->declBus(c+1013,"line", false,-1, 31,0);
    tracep->declBit(c+663,"sck", false,-1);
    tracep->declBit(c+664,"ce_n", false,-1);
    tracep->declBus(c+1568,"din", false,-1, 3,0);
    tracep->declBus(c+665,"dout", false,-1, 3,0);
    tracep->declBit(c+666,"douten", false,-1);
    tracep->declBus(c+1678,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1679,"READ", false,-1, 0,0);
    tracep->declBus(c+1713,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+672,"state", false,-1);
    tracep->declBit(c+1499,"nstate", false,-1);
    tracep->declBus(c+673,"counter", false,-1, 7,0);
    tracep->declBus(c+674,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1059+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1714,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+675,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1598,"rst_n", false,-1);
    tracep->declBus(c+1246,"addr", false,-1, 23,0);
    tracep->declBus(c+1244,"line", false,-1, 31,0);
    tracep->declBus(c+1494,"size", false,-1, 2,0);
    tracep->declBit(c+1489,"wr", false,-1);
    tracep->declBit(c+1490,"done", false,-1);
    tracep->declBit(c+667,"sck", false,-1);
    tracep->declBit(c+668,"ce_n", false,-1);
    tracep->declBus(c+1568,"din", false,-1, 3,0);
    tracep->declBus(c+1487,"dout", false,-1, 3,0);
    tracep->declBit(c+669,"douten", false,-1);
    tracep->declBus(c+1678,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1679,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1500,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+676,"state", false,-1);
    tracep->declBit(c+1501,"nstate", false,-1);
    tracep->declBus(c+677,"counter", false,-1, 7,0);
    tracep->declBus(c+678,"saddr", false,-1, 23,0);
    tracep->declBus(c+1715,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1348,"auto_in_awready", false,-1);
    tracep->declBit(c+1349,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1350,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1351,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1352,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1196,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1353,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1354,"auto_in_wready", false,-1);
    tracep->declBit(c+1355,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1197,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"auto_in_wlast", false,-1);
    tracep->declBit(c+1575,"auto_in_bready", false,-1);
    tracep->declBit(c+636,"auto_in_bvalid", false,-1);
    tracep->declBus(c+633,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1612,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1341,"auto_in_arready", false,-1);
    tracep->declBit(c+1342,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1343,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1344,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1345,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1195,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1346,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1347,"auto_in_rready", false,-1);
    tracep->declBit(c+632,"auto_in_rvalid", false,-1);
    tracep->declBus(c+633,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+634,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1612,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+635,"auto_in_rlast", false,-1);
    tracep->declBit(c+1569,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+609,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1259,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1260,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1261,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1262,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1263,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1264,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+610,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1288,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1348,"in_awready", false,-1);
    tracep->declBit(c+1349,"in_awvalid", false,-1);
    tracep->declBus(c+1351,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1350,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1352,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1196,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1353,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1354,"in_wready", false,-1);
    tracep->declBit(c+1355,"in_wvalid", false,-1);
    tracep->declBus(c+1197,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1198,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"in_wlast", false,-1);
    tracep->declBit(c+1575,"in_bready", false,-1);
    tracep->declBit(c+636,"in_bvalid", false,-1);
    tracep->declBus(c+1612,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+633,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1341,"in_arready", false,-1);
    tracep->declBit(c+1342,"in_arvalid", false,-1);
    tracep->declBus(c+1344,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1343,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1345,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1195,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1346,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1347,"in_rready", false,-1);
    tracep->declBit(c+632,"in_rvalid", false,-1);
    tracep->declBus(c+1612,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+634,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+635,"in_rlast", false,-1);
    tracep->declBus(c+633,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1569,"sdram_clk", false,-1);
    tracep->declBit(c+609,"sdram_cke", false,-1);
    tracep->declBit(c+1259,"sdram_cs", false,-1);
    tracep->declBit(c+1260,"sdram_ras", false,-1);
    tracep->declBit(c+1261,"sdram_cas", false,-1);
    tracep->declBit(c+1262,"sdram_we", false,-1);
    tracep->declBus(c+1263,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1264,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+610,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1288,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+679,"sdram_dout_en", false,-1);
    tracep->declBus(c+680,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1545,"clk_i", false,-1);
    tracep->declBit(c+1546,"rst_i", false,-1);
    tracep->declBit(c+1349,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1351,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1350,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1352,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1353,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1355,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1197,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1198,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1199,"inport_wlast_i", false,-1);
    tracep->declBit(c+1575,"inport_bready_i", false,-1);
    tracep->declBit(c+1342,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1344,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1343,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1345,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1346,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1347,"inport_rready_i", false,-1);
    tracep->declBus(c+1288,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1348,"inport_awready_o", false,-1);
    tracep->declBit(c+1354,"inport_wready_o", false,-1);
    tracep->declBit(c+636,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1612,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+633,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1341,"inport_arready_o", false,-1);
    tracep->declBit(c+632,"inport_rvalid_o", false,-1);
    tracep->declBus(c+634,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1612,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+633,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+635,"inport_rlast_o", false,-1);
    tracep->declBit(c+1569,"sdram_clk_o", false,-1);
    tracep->declBit(c+609,"sdram_cke_o", false,-1);
    tracep->declBit(c+1259,"sdram_cs_o", false,-1);
    tracep->declBit(c+1260,"sdram_ras_o", false,-1);
    tracep->declBit(c+1261,"sdram_cas_o", false,-1);
    tracep->declBit(c+1262,"sdram_we_o", false,-1);
    tracep->declBus(c+610,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1263,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1264,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+680,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+679,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1716,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1717,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1718,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1719,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1502,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1503,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1504,"ram_rd_w", false,-1);
    tracep->declBit(c+1265,"ram_accept_w", false,-1);
    tracep->declBus(c+1197,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+681,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1505,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+682,"ram_ack_w", false,-1);
    tracep->declBit(c+1621,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1545,"clk_i", false,-1);
    tracep->declBit(c+1546,"rst_i", false,-1);
    tracep->declBit(c+1349,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1351,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1350,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1352,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1353,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1355,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1197,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1198,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1199,"axi_wlast_i", false,-1);
    tracep->declBit(c+1575,"axi_bready_i", false,-1);
    tracep->declBit(c+1342,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1344,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1343,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1345,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1346,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1347,"axi_rready_i", false,-1);
    tracep->declBit(c+1265,"ram_accept_i", false,-1);
    tracep->declBit(c+682,"ram_ack_i", false,-1);
    tracep->declBit(c+1621,"ram_error_i", false,-1);
    tracep->declBus(c+681,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1348,"axi_awready_o", false,-1);
    tracep->declBit(c+1354,"axi_wready_o", false,-1);
    tracep->declBit(c+636,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1612,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+633,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1341,"axi_arready_o", false,-1);
    tracep->declBit(c+632,"axi_rvalid_o", false,-1);
    tracep->declBus(c+634,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1612,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+633,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+635,"axi_rlast_o", false,-1);
    tracep->declBus(c+1503,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1504,"ram_rd_o", false,-1);
    tracep->declBus(c+1505,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1502,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1197,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+683,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+684,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+685,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+686,"req_rd_q", false,-1);
    tracep->declBit(c+687,"req_wr_q", false,-1);
    tracep->declBus(c+688,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+689,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+690,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+691,"req_prio_q", false,-1);
    tracep->declBit(c+692,"req_hold_rd_q", false,-1);
    tracep->declBit(c+693,"req_hold_wr_q", false,-1);
    tracep->declBit(c+694,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1506,"req_push_w", false,-1);
    tracep->declBus(c+1599,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+695,"req_out_valid_w", false,-1);
    tracep->declBus(c+696,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1507,"resp_accept_w", false,-1);
    tracep->declBit(c+697,"resp_is_write_w", false,-1);
    tracep->declBit(c+698,"resp_is_read_w", false,-1);
    tracep->declBit(c+635,"resp_is_last_w", false,-1);
    tracep->declBus(c+633,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+699,"resp_valid_w", false,-1);
    tracep->declBit(c+700,"write_prio_w", false,-1);
    tracep->declBit(c+701,"read_prio_w", false,-1);
    tracep->declBit(c+1508,"write_active_w", false,-1);
    tracep->declBit(c+1504,"read_active_w", false,-1);
    tracep->declBus(c+1502,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1509,"wr_w", false,-1);
    tracep->declBit(c+1504,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1720,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1670,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1719,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1545,"clk_i", false,-1);
    tracep->declBit(c+1546,"rst_i", false,-1);
    tracep->declBus(c+1599,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1506,"push_i", false,-1);
    tracep->declBit(c+1507,"pop_i", false,-1);
    tracep->declBus(c+696,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+694,"accept_o", false,-1);
    tracep->declBit(c+695,"valid_o", false,-1);
    tracep->declBus(c+1721,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+702+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+706,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+707,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+708,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1672,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1670,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1719,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1545,"clk_i", false,-1);
    tracep->declBit(c+1546,"rst_i", false,-1);
    tracep->declBus(c+681,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+682,"push_i", false,-1);
    tracep->declBit(c+1507,"pop_i", false,-1);
    tracep->declBus(c+634,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+709,"accept_o", false,-1);
    tracep->declBit(c+699,"valid_o", false,-1);
    tracep->declBus(c+1721,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+710+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+714,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+715,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+716,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1545,"clk_i", false,-1);
    tracep->declBit(c+1546,"rst_i", false,-1);
    tracep->declBus(c+1503,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1504,"inport_rd_i", false,-1);
    tracep->declBus(c+1505,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1502,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1197,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1288,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1265,"inport_accept_o", false,-1);
    tracep->declBit(c+682,"inport_ack_o", false,-1);
    tracep->declBit(c+1621,"inport_error_o", false,-1);
    tracep->declBus(c+681,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1569,"sdram_clk_o", false,-1);
    tracep->declBit(c+609,"sdram_cke_o", false,-1);
    tracep->declBit(c+1259,"sdram_cs_o", false,-1);
    tracep->declBit(c+1260,"sdram_ras_o", false,-1);
    tracep->declBit(c+1261,"sdram_cas_o", false,-1);
    tracep->declBit(c+1262,"sdram_we_o", false,-1);
    tracep->declBus(c+610,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1263,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1264,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+680,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+679,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1716,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1717,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1718,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1719,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1721,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1670,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1673,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1722,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1723,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1724,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1725,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1670,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1686,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1682,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1684,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1683,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1685,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1681,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1680,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1628,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1726,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1670,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1628,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1680,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1681,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1682,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1683,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1684,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1685,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1686,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1687,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1727,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1728,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1728,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1672,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1728,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1719,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1719,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1720,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1502,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1503,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1504,"ram_rd_w", false,-1);
    tracep->declBit(c+1265,"ram_accept_w", false,-1);
    tracep->declBus(c+1197,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+681,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+682,"ram_ack_w", false,-1);
    tracep->declBit(c+1510,"ram_req_w", false,-1);
    tracep->declBus(c+1266,"command_q", false,-1, 3,0);
    tracep->declBus(c+1263,"addr_q", false,-1, 12,0);
    tracep->declBus(c+680,"data_q", false,-1, 31,0);
    tracep->declBit(c+717,"data_rd_en_q", false,-1);
    tracep->declBus(c+610,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+609,"cke_q", false,-1);
    tracep->declBus(c+1264,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1729,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+718,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1288,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+719,"refresh_q", false,-1);
    tracep->declBus(c+1267,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+720+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1268,"state_q", false,-1, 3,0);
    tracep->declBus(c+1511,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1512,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+728,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+729,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1513,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1514,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1515,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1670,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+730,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1516,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1730,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1269,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+731,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+681,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+732,"idx", false,-1, 31,0);
    tracep->declBus(c+733,"rd_q", false,-1, 3,0);
    tracep->declBit(c+682,"ack_q", false,-1);
    tracep->declArray(c+1270,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1323,"auto_in_psel", false,-1);
    tracep->declBit(c+1324,"auto_in_penable", false,-1);
    tracep->declBit(c+1305,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1312,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1304,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1572,"auto_in_pready", false,-1);
    tracep->declBit(c+1621,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1325,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+607,"spi_bundle_sck", false,-1);
    tracep->declBus(c+608,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1258,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1567,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1689,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1731,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1673,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBus(c+1517,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1323,"in_psel", false,-1);
    tracep->declBit(c+1324,"in_penable", false,-1);
    tracep->declBus(c+1304,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1305,"in_pwrite", false,-1);
    tracep->declBus(c+1306,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1572,"in_pready", false,-1);
    tracep->declBus(c+1325,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1621,"in_pslverr", false,-1);
    tracep->declBit(c+607,"spi_sck", false,-1);
    tracep->declBus(c+608,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1258,"spi_mosi", false,-1);
    tracep->declBit(c+1567,"spi_miso", false,-1);
    tracep->declBit(c+734,"spi_irq_out", false,-1);
    tracep->declBus(c+1518,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1519,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1520,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1521,"wb_we_i", false,-1);
    tracep->declBit(c+1522,"wb_stb_i", false,-1);
    tracep->declBit(c+1523,"wb_cyc_i", false,-1);
    tracep->declBit(c+735,"wb_ack_o", false,-1);
    tracep->declBus(c+736,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1622,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1611,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1623,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1624,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1625,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1732,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1733,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1734,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+523,"state", false,-1, 2,0);
    tracep->declBus(c+524,"next_state", false,-1, 2,0);
    tracep->declBus(c+525,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+526,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+527,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+528,"flash_pwrite", false,-1);
    tracep->declBit(c+529,"flash_psel", false,-1);
    tracep->declBit(c+530,"flash_penable", false,-1);
    tracep->declBit(c+531,"flash_pready", false,-1);
    tracep->declBus(c+532,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1688,"Tp", false,-1, 31,0);
    tracep->declBit(c+1545,"wb_clk_i", false,-1);
    tracep->declBit(c+1546,"wb_rst_i", false,-1);
    tracep->declBus(c+1518,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1519,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+736,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1520,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1521,"wb_we_i", false,-1);
    tracep->declBit(c+1522,"wb_stb_i", false,-1);
    tracep->declBit(c+1523,"wb_cyc_i", false,-1);
    tracep->declBit(c+735,"wb_ack_o", false,-1);
    tracep->declBit(c+1621,"wb_err_o", false,-1);
    tracep->declBit(c+734,"wb_int_o", false,-1);
    tracep->declBus(c+608,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+607,"sclk_pad_o", false,-1);
    tracep->declBit(c+1258,"mosi_pad_o", false,-1);
    tracep->declBit(c+1567,"miso_pad_i", false,-1);
    tracep->declBus(c+737,"divider", false,-1, 15,0);
    tracep->declBus(c+738,"ctrl", false,-1, 13,0);
    tracep->declBus(c+739,"ss", false,-1, 7,0);
    tracep->declBus(c+1524,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+740,"rx", false,-1, 127,0);
    tracep->declBit(c+744,"rx_negedge", false,-1);
    tracep->declBit(c+745,"tx_negedge", false,-1);
    tracep->declBus(c+746,"char_len", false,-1, 6,0);
    tracep->declBit(c+747,"go", false,-1);
    tracep->declBit(c+748,"lsb", false,-1);
    tracep->declBit(c+749,"ie", false,-1);
    tracep->declBit(c+750,"ass", false,-1);
    tracep->declBit(c+1525,"spi_divider_sel", false,-1);
    tracep->declBit(c+1526,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1527,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1528,"spi_ss_sel", false,-1);
    tracep->declBit(c+751,"tip", false,-1);
    tracep->declBit(c+752,"pos_edge", false,-1);
    tracep->declBit(c+753,"neg_edge", false,-1);
    tracep->declBit(c+754,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1688,"Tp", false,-1, 31,0);
    tracep->declBit(c+1545,"clk_in", false,-1);
    tracep->declBit(c+1546,"rst", false,-1);
    tracep->declBit(c+751,"enable", false,-1);
    tracep->declBit(c+747,"go", false,-1);
    tracep->declBit(c+754,"last_clk", false,-1);
    tracep->declBus(c+737,"divider", false,-1, 15,0);
    tracep->declBit(c+607,"clk_out", false,-1);
    tracep->declBit(c+752,"pos_edge", false,-1);
    tracep->declBit(c+753,"neg_edge", false,-1);
    tracep->declBus(c+755,"cnt", false,-1, 15,0);
    tracep->declBit(c+756,"cnt_zero", false,-1);
    tracep->declBit(c+757,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1688,"Tp", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1546,"rst", false,-1);
    tracep->declBus(c+1529,"latch", false,-1, 3,0);
    tracep->declBus(c+1520,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+746,"len", false,-1, 6,0);
    tracep->declBit(c+748,"lsb", false,-1);
    tracep->declBit(c+747,"go", false,-1);
    tracep->declBit(c+752,"pos_edge", false,-1);
    tracep->declBit(c+753,"neg_edge", false,-1);
    tracep->declBit(c+744,"rx_negedge", false,-1);
    tracep->declBit(c+745,"tx_negedge", false,-1);
    tracep->declBit(c+751,"tip", false,-1);
    tracep->declBit(c+754,"last", false,-1);
    tracep->declBus(c+1519,"p_in", false,-1, 31,0);
    tracep->declArray(c+740,"p_out", false,-1, 127,0);
    tracep->declBit(c+607,"s_clk", false,-1);
    tracep->declBit(c+1567,"s_in", false,-1);
    tracep->declBit(c+1258,"s_out", false,-1);
    tracep->declBus(c+758,"cnt", false,-1, 7,0);
    tracep->declArray(c+740,"data", false,-1, 127,0);
    tracep->declBus(c+759,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+760,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+761,"rx_clk", false,-1);
    tracep->declBit(c+762,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1319,"auto_in_psel", false,-1);
    tracep->declBit(c+1320,"auto_in_penable", false,-1);
    tracep->declBit(c+1305,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1194,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1304,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1321,"auto_in_pready", false,-1);
    tracep->declBit(c+1621,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1322,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1565,"uart_rx", false,-1);
    tracep->declBit(c+1566,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1319,"in_psel", false,-1);
    tracep->declBit(c+1320,"in_penable", false,-1);
    tracep->declBus(c+1304,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1321,"in_pready", false,-1);
    tracep->declBit(c+1621,"in_pslverr", false,-1);
    tracep->declBus(c+1243,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1305,"in_pwrite", false,-1);
    tracep->declBus(c+1322,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1306,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1565,"uart_rx", false,-1);
    tracep->declBit(c+1566,"uart_tx", false,-1);
    tracep->declBit(c+763,"rtsn", false,-1);
    tracep->declBit(c+1621,"ctsn", false,-1);
    tracep->declBit(c+764,"dtr_pad_o", false,-1);
    tracep->declBit(c+1621,"dsr_pad_i", false,-1);
    tracep->declBit(c+1621,"ri_pad_i", false,-1);
    tracep->declBit(c+1621,"dcd_pad_i", false,-1);
    tracep->declBit(c+765,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1530,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1531,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+533,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1532,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+766,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1546,"wb_rst_i", false,-1);
    tracep->declBus(c+1530,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1533,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1532,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1566,"stx_pad_o", false,-1);
    tracep->declBit(c+1565,"srx_pad_i", false,-1);
    tracep->declBus(c+1687,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+766,"rts_pad_o", false,-1);
    tracep->declBit(c+764,"dtr_pad_o", false,-1);
    tracep->declBit(c+765,"int_o", false,-1);
    tracep->declBit(c+767,"enable", false,-1);
    tracep->declBit(c+768,"srx_pad", false,-1);
    tracep->declBus(c+769,"ier", false,-1, 3,0);
    tracep->declBus(c+770,"iir", false,-1, 3,0);
    tracep->declBus(c+771,"fcr", false,-1, 1,0);
    tracep->declBus(c+772,"mcr", false,-1, 4,0);
    tracep->declBus(c+773,"lcr", false,-1, 7,0);
    tracep->declBus(c+774,"msr", false,-1, 7,0);
    tracep->declBus(c+775,"dl", false,-1, 15,0);
    tracep->declBus(c+776,"scratch", false,-1, 7,0);
    tracep->declBit(c+777,"start_dlc", false,-1);
    tracep->declBit(c+778,"lsr_mask_d", false,-1);
    tracep->declBit(c+779,"msi_reset", false,-1);
    tracep->declBus(c+780,"dlc", false,-1, 15,0);
    tracep->declBus(c+781,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+782,"rx_reset", false,-1);
    tracep->declBit(c+783,"tx_reset", false,-1);
    tracep->declBit(c+784,"dlab", false,-1);
    tracep->declBit(c+1626,"cts_pad_i", false,-1);
    tracep->declBit(c+1621,"dsr_pad_i", false,-1);
    tracep->declBit(c+1621,"ri_pad_i", false,-1);
    tracep->declBit(c+1621,"dcd_pad_i", false,-1);
    tracep->declBit(c+785,"loopback", false,-1);
    tracep->declBit(c+1621,"cts", false,-1);
    tracep->declBit(c+1626,"dsr", false,-1);
    tracep->declBit(c+1626,"ri", false,-1);
    tracep->declBit(c+1626,"dcd", false,-1);
    tracep->declBit(c+786,"cts_c", false,-1);
    tracep->declBit(c+787,"dsr_c", false,-1);
    tracep->declBit(c+788,"ri_c", false,-1);
    tracep->declBit(c+789,"dcd_c", false,-1);
    tracep->declBus(c+790,"lsr", false,-1, 7,0);
    tracep->declBit(c+791,"lsr0", false,-1);
    tracep->declBit(c+792,"lsr1", false,-1);
    tracep->declBit(c+793,"lsr2", false,-1);
    tracep->declBit(c+794,"lsr3", false,-1);
    tracep->declBit(c+795,"lsr4", false,-1);
    tracep->declBit(c+796,"lsr5", false,-1);
    tracep->declBit(c+797,"lsr6", false,-1);
    tracep->declBit(c+798,"lsr7", false,-1);
    tracep->declBit(c+799,"lsr0r", false,-1);
    tracep->declBit(c+800,"lsr1r", false,-1);
    tracep->declBit(c+801,"lsr2r", false,-1);
    tracep->declBit(c+802,"lsr3r", false,-1);
    tracep->declBit(c+803,"lsr4r", false,-1);
    tracep->declBit(c+804,"lsr5r", false,-1);
    tracep->declBit(c+805,"lsr6r", false,-1);
    tracep->declBit(c+806,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+807,"rls_int", false,-1);
    tracep->declBit(c+808,"rda_int", false,-1);
    tracep->declBit(c+809,"ti_int", false,-1);
    tracep->declBit(c+810,"thre_int", false,-1);
    tracep->declBit(c+811,"ms_int", false,-1);
    tracep->declBit(c+812,"tf_push", false,-1);
    tracep->declBit(c+813,"rf_pop", false,-1);
    tracep->declBus(c+1600,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+814,"rf_error_bit", false,-1);
    tracep->declBit(c+792,"rf_overrun", false,-1);
    tracep->declBit(c+815,"rf_push_pulse", false,-1);
    tracep->declBus(c+816,"rf_count", false,-1, 4,0);
    tracep->declBus(c+817,"tf_count", false,-1, 4,0);
    tracep->declBus(c+818,"tstate", false,-1, 2,0);
    tracep->declBus(c+819,"rstate", false,-1, 3,0);
    tracep->declBus(c+820,"counter_t", false,-1, 9,0);
    tracep->declBit(c+821,"thre_set_en", false,-1);
    tracep->declBus(c+822,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+823,"block_value", false,-1, 7,0);
    tracep->declBit(c+824,"serial_out", false,-1);
    tracep->declBit(c+825,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+826,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+827,"lsr0_d", false,-1);
    tracep->declBit(c+828,"lsr1_d", false,-1);
    tracep->declBit(c+829,"lsr2_d", false,-1);
    tracep->declBit(c+830,"lsr3_d", false,-1);
    tracep->declBit(c+831,"lsr4_d", false,-1);
    tracep->declBit(c+832,"lsr5_d", false,-1);
    tracep->declBit(c+833,"lsr6_d", false,-1);
    tracep->declBit(c+834,"lsr7_d", false,-1);
    tracep->declBit(c+835,"rls_int_d", false,-1);
    tracep->declBit(c+836,"thre_int_d", false,-1);
    tracep->declBit(c+837,"ms_int_d", false,-1);
    tracep->declBit(c+838,"ti_int_d", false,-1);
    tracep->declBit(c+839,"rda_int_d", false,-1);
    tracep->declBit(c+840,"rls_int_rise", false,-1);
    tracep->declBit(c+841,"thre_int_rise", false,-1);
    tracep->declBit(c+842,"ms_int_rise", false,-1);
    tracep->declBit(c+843,"ti_int_rise", false,-1);
    tracep->declBit(c+844,"rda_int_rise", false,-1);
    tracep->declBit(c+845,"rls_int_pnd", false,-1);
    tracep->declBit(c+846,"rda_int_pnd", false,-1);
    tracep->declBit(c+847,"thre_int_pnd", false,-1);
    tracep->declBit(c+848,"ms_int_pnd", false,-1);
    tracep->declBit(c+849,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1688,"Tp", false,-1, 31,0);
    tracep->declBus(c+1688,"width", false,-1, 31,0);
    tracep->declBus(c+1679,"init_value", false,-1, 0,0);
    tracep->declBit(c+1546,"rst_i", false,-1);
    tracep->declBit(c+1545,"clk_i", false,-1);
    tracep->declBit(c+1621,"stage1_rst_i", false,-1);
    tracep->declBit(c+1626,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1565,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+768,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+850,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1546,"wb_rst_i", false,-1);
    tracep->declBus(c+773,"lcr", false,-1, 7,0);
    tracep->declBit(c+813,"rf_pop", false,-1);
    tracep->declBit(c+825,"srx_pad_i", false,-1);
    tracep->declBit(c+767,"enable", false,-1);
    tracep->declBit(c+782,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+820,"counter_t", false,-1, 9,0);
    tracep->declBus(c+816,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1600,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+792,"rf_overrun", false,-1);
    tracep->declBit(c+814,"rf_error_bit", false,-1);
    tracep->declBus(c+819,"rstate", false,-1, 3,0);
    tracep->declBit(c+815,"rf_push_pulse", false,-1);
    tracep->declBus(c+851,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+852,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+853,"rshift", false,-1, 7,0);
    tracep->declBit(c+854,"rparity", false,-1);
    tracep->declBit(c+855,"rparity_error", false,-1);
    tracep->declBit(c+856,"rframing_error", false,-1);
    tracep->declBit(c+857,"rbit_in", false,-1);
    tracep->declBit(c+858,"rparity_xor", false,-1);
    tracep->declBus(c+859,"counter_b", false,-1, 7,0);
    tracep->declBit(c+860,"rf_push_q", false,-1);
    tracep->declBus(c+861,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+862,"rf_push", false,-1);
    tracep->declBit(c+863,"break_error", false,-1);
    tracep->declBit(c+864,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+865,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+866,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+867,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1628,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1680,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1681,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1682,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1683,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1684,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1685,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1686,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1687,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1727,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1735,"sr_push", false,-1, 3,0);
    tracep->declBus(c+868,"toc_value", false,-1, 9,0);
    tracep->declBus(c+869,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1736,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1674,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1670,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1737,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1546,"wb_rst_i", false,-1);
    tracep->declBit(c+815,"push", false,-1);
    tracep->declBit(c+813,"pop", false,-1);
    tracep->declBus(c+861,"data_in", false,-1, 10,0);
    tracep->declBit(c+782,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1600,"data_out", false,-1, 10,0);
    tracep->declBit(c+792,"overrun", false,-1);
    tracep->declBus(c+816,"count", false,-1, 4,0);
    tracep->declBit(c+814,"error_bit", false,-1);
    tracep->declBus(c+1601,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+870+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+886,"top", false,-1, 3,0);
    tracep->declBus(c+887,"bottom", false,-1, 3,0);
    tracep->declBus(c+888,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+889,"word0", false,-1, 2,0);
    tracep->declBus(c+890,"word1", false,-1, 2,0);
    tracep->declBus(c+891,"word2", false,-1, 2,0);
    tracep->declBus(c+892,"word3", false,-1, 2,0);
    tracep->declBus(c+893,"word4", false,-1, 2,0);
    tracep->declBus(c+894,"word5", false,-1, 2,0);
    tracep->declBus(c+895,"word6", false,-1, 2,0);
    tracep->declBus(c+896,"word7", false,-1, 2,0);
    tracep->declBus(c+897,"word8", false,-1, 2,0);
    tracep->declBus(c+898,"word9", false,-1, 2,0);
    tracep->declBus(c+899,"word10", false,-1, 2,0);
    tracep->declBus(c+900,"word11", false,-1, 2,0);
    tracep->declBus(c+901,"word12", false,-1, 2,0);
    tracep->declBus(c+902,"word13", false,-1, 2,0);
    tracep->declBus(c+903,"word14", false,-1, 2,0);
    tracep->declBus(c+904,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1670,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1673,"data_width", false,-1, 31,0);
    tracep->declBus(c+1674,"depth", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+815,"we", false,-1);
    tracep->declBus(c+886,"a", false,-1, 3,0);
    tracep->declBus(c+887,"dpra", false,-1, 3,0);
    tracep->declBus(c+905,"di", false,-1, 7,0);
    tracep->declBus(c+1601,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+534+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1546,"wb_rst_i", false,-1);
    tracep->declBus(c+773,"lcr", false,-1, 7,0);
    tracep->declBit(c+812,"tf_push", false,-1);
    tracep->declBus(c+1533,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+767,"enable", false,-1);
    tracep->declBit(c+783,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+824,"stx_pad_o", false,-1);
    tracep->declBus(c+818,"tstate", false,-1, 2,0);
    tracep->declBus(c+817,"tf_count", false,-1, 4,0);
    tracep->declBus(c+906,"counter", false,-1, 4,0);
    tracep->declBus(c+907,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+908,"shift_out", false,-1, 6,0);
    tracep->declBit(c+909,"stx_o_tmp", false,-1);
    tracep->declBit(c+910,"parity_xor", false,-1);
    tracep->declBit(c+911,"tf_pop", false,-1);
    tracep->declBit(c+912,"bit_out", false,-1);
    tracep->declBus(c+1533,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1602,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+913,"tf_overrun", false,-1);
    tracep->declBus(c+1622,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1611,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1623,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1624,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1625,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1732,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1673,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1674,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1670,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1737,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+1546,"wb_rst_i", false,-1);
    tracep->declBit(c+812,"push", false,-1);
    tracep->declBit(c+911,"pop", false,-1);
    tracep->declBus(c+1533,"data_in", false,-1, 7,0);
    tracep->declBit(c+783,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1602,"data_out", false,-1, 7,0);
    tracep->declBit(c+913,"overrun", false,-1);
    tracep->declBus(c+817,"count", false,-1, 4,0);
    tracep->declBus(c+914,"top", false,-1, 3,0);
    tracep->declBus(c+915,"bottom", false,-1, 3,0);
    tracep->declBus(c+916,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1670,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1673,"data_width", false,-1, 31,0);
    tracep->declBus(c+1674,"depth", false,-1, 31,0);
    tracep->declBit(c+1545,"clk", false,-1);
    tracep->declBit(c+812,"we", false,-1);
    tracep->declBus(c+914,"a", false,-1, 3,0);
    tracep->declBus(c+915,"dpra", false,-1, 3,0);
    tracep->declBus(c+1533,"di", false,-1, 7,0);
    tracep->declBus(c+1602,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+550+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBit(c+1310,"auto_in_psel", false,-1);
    tracep->declBit(c+1311,"auto_in_penable", false,-1);
    tracep->declBit(c+1305,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1312,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1304,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1306,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+618,"auto_in_pready", false,-1);
    tracep->declBit(c+1617,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1618,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1559,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1560,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1561,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1562,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1563,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1564,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1545,"clock", false,-1);
    tracep->declBit(c+1546,"reset", false,-1);
    tracep->declBus(c+1517,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1310,"in_psel", false,-1);
    tracep->declBit(c+1311,"in_penable", false,-1);
    tracep->declBus(c+1304,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1305,"in_pwrite", false,-1);
    tracep->declBus(c+1306,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+618,"in_pready", false,-1);
    tracep->declBus(c+1618,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1617,"in_pslverr", false,-1);
    tracep->declBus(c+1559,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1560,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1561,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1562,"vga_hsync", false,-1);
    tracep->declBit(c+1563,"vga_vsync", false,-1);
    tracep->declBit(c+1564,"vga_valid", false,-1);
    tracep->declBit(c+1534,"is_write", false,-1);
    tracep->declBus(c+1535,"addr", false,-1, 31,0);
    tracep->declBit(c+618,"ready", false,-1);
    tracep->declBus(c+917,"i", false,-1, 31,0);
    tracep->declBus(c+1738,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1739,"h_active", false,-1, 31,0);
    tracep->declBus(c+1740,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1741,"h_total", false,-1, 31,0);
    tracep->declBus(c+1719,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1742,"v_active", false,-1, 31,0);
    tracep->declBus(c+1743,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1744,"v_total", false,-1, 31,0);
    tracep->declBus(c+918,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+566,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+919,"h_valid", false,-1);
    tracep->declBit(c+567,"v_valid", false,-1);
    tracep->declBus(c+920,"h_addr", false,-1, 9,0);
    tracep->declBus(c+568,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1603,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+607,"sck", false,-1);
    tracep->declBit(c+1273,"ss", false,-1);
    tracep->declBit(c+1258,"mosi", false,-1);
    tracep->declBit(c+1253,"miso", false,-1);
    tracep->declBus(c+1254,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+1255,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+1256,"counter", false,-1, 2,0);
    tracep->declBit(c+1257,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+607,"sck", false,-1);
    tracep->declBit(c+921,"ss", false,-1);
    tracep->declBit(c+1258,"mosi", false,-1);
    tracep->declBit(c+1604,"miso", false,-1);
    tracep->declBit(c+921,"reset", false,-1);
    tracep->declBus(c+1247,"state", false,-1, 2,0);
    tracep->declBus(c+1248,"counter", false,-1, 7,0);
    tracep->declBus(c+1249,"cmd", false,-1, 7,0);
    tracep->declBus(c+1250,"addr", false,-1, 23,0);
    tracep->declBus(c+1251,"data", false,-1, 31,0);
    tracep->declBit(c+1252,"ren", false,-1);
    tracep->declBus(c+1605,"rdata", false,-1, 31,0);
    tracep->declBus(c+1606,"raddr", false,-1, 31,0);
    tracep->declBus(c+1607,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+607,"clock", false,-1);
    tracep->declBit(c+1252,"valid", false,-1);
    tracep->declBus(c+1249,"cmd", false,-1, 7,0);
    tracep->declBus(c+1606,"addr", false,-1, 31,0);
    tracep->declBus(c+1605,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1541,"sck", false,-1);
    tracep->declBit(c+1542,"ce_n", false,-1);
    tracep->declBus(c+1568,"dio", false,-1, 3,0);
    tracep->declBit(c+1542,"reset", false,-1);
    tracep->declBus(c+593,"state", false,-1, 3,0);
    tracep->declBus(c+594,"counter", false,-1, 7,0);
    tracep->declBus(c+1291,"cmd", false,-1, 7,0);
    tracep->declBus(c+1292,"addr", false,-1, 23,0);
    tracep->declBus(c+595,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1293+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1608,"qpi_flag", false,-1);
    tracep->declBus(c+596,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1609,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+1297,"ren", false,-1);
    tracep->declBit(c+1298,"wen", false,-1);
    tracep->declBus(c+1299,"len", false,-1, 7,0);
    tracep->declBus(c+1610,"rdata", false,-1, 31,0);
    tracep->declBus(c+1300,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1541,"clock", false,-1);
    tracep->declBit(c+1297,"ren", false,-1);
    tracep->declBit(c+1298,"wen", false,-1);
    tracep->declBus(c+1291,"cmd", false,-1, 7,0);
    tracep->declBus(c+1300,"saddr", false,-1, 31,0);
    tracep->declBus(c+1610,"rdata", false,-1, 31,0);
    tracep->declBus(c+1301,"wdata", false,-1, 31,0);
    tracep->declBus(c+1299,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+609,"cke", false,-1);
    tracep->declBit(c+1259,"cs", false,-1);
    tracep->declBit(c+1260,"ras", false,-1);
    tracep->declBit(c+1261,"cas", false,-1);
    tracep->declBit(c+1262,"we", false,-1);
    tracep->declBus(c+1263,"a", false,-1, 12,0);
    tracep->declBus(c+1274,"ba", false,-1, 1,0);
    tracep->declBus(c+1275,"dqm", false,-1, 1,0);
    tracep->declBus(c+1289,"dq", false,-1, 15,0);
    tracep->declBit(c+1276,"reset", false,-1);
    tracep->declBus(c+928,"state", false,-1, 2,0);
    tracep->declBus(c+929,"counter", false,-1, 7,0);
    tracep->declBus(c+930,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1745,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+931,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+932,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1277,"nop", false,-1);
    tracep->declBit(c+1278,"active", false,-1);
    tracep->declBit(c+1279,"precharge", false,-1);
    tracep->declBit(c+1280,"read", false,-1);
    tracep->declBit(c+1281,"write", false,-1);
    tracep->declBit(c+1282,"burstterm", false,-1);
    tracep->declBit(c+1283,"autorefresh", false,-1);
    tracep->declBit(c+1284,"mode", false,-1);
    tracep->declBus(c+933,"test", false,-1, 15,0);
    tracep->declBus(c+934,"test1", false,-1, 15,0);
    tracep->declBus(c+935,"sense", false,-1, 31,0);
    tracep->declBit(c+936,"write_burst_mode", false,-1);
    tracep->declBus(c+937,"op_mode", false,-1, 1,0);
    tracep->declBus(c+938,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+939,"burst_type", false,-1);
    tracep->declBus(c+940,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+941,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+942,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+943,"bank", false,-1, 1,0);
    tracep->declBus(c+944,"row", false,-1, 12,0);
    tracep->declBus(c+945,"column", false,-1, 8,0);
    tracep->declBus(c+946,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+947,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+948,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+609,"cke", false,-1);
    tracep->declBit(c+1259,"cs", false,-1);
    tracep->declBit(c+1260,"ras", false,-1);
    tracep->declBit(c+1261,"cas", false,-1);
    tracep->declBit(c+1262,"we", false,-1);
    tracep->declBus(c+1263,"a", false,-1, 12,0);
    tracep->declBus(c+1274,"ba", false,-1, 1,0);
    tracep->declBus(c+1285,"dqm", false,-1, 1,0);
    tracep->declBus(c+1290,"dq", false,-1, 15,0);
    tracep->declBit(c+1276,"reset", false,-1);
    tracep->declBus(c+949,"state", false,-1, 2,0);
    tracep->declBus(c+950,"counter", false,-1, 7,0);
    tracep->declBus(c+951,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1746,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+952,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+953,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1277,"nop", false,-1);
    tracep->declBit(c+1278,"active", false,-1);
    tracep->declBit(c+1279,"precharge", false,-1);
    tracep->declBit(c+1280,"read", false,-1);
    tracep->declBit(c+1281,"write", false,-1);
    tracep->declBit(c+1282,"burstterm", false,-1);
    tracep->declBit(c+1283,"autorefresh", false,-1);
    tracep->declBit(c+1284,"mode", false,-1);
    tracep->declBus(c+954,"test", false,-1, 15,0);
    tracep->declBus(c+955,"test1", false,-1, 15,0);
    tracep->declBus(c+956,"sense", false,-1, 31,0);
    tracep->declBit(c+957,"write_burst_mode", false,-1);
    tracep->declBus(c+958,"op_mode", false,-1, 1,0);
    tracep->declBus(c+959,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+960,"burst_type", false,-1);
    tracep->declBus(c+961,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+962,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+963,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+964,"bank", false,-1, 1,0);
    tracep->declBus(c+965,"row", false,-1, 12,0);
    tracep->declBus(c+966,"column", false,-1, 8,0);
    tracep->declBus(c+967,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+968,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+969,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+609,"cke", false,-1);
    tracep->declBit(c+1259,"cs", false,-1);
    tracep->declBit(c+1260,"ras", false,-1);
    tracep->declBit(c+1261,"cas", false,-1);
    tracep->declBit(c+1262,"we", false,-1);
    tracep->declBus(c+1263,"a", false,-1, 12,0);
    tracep->declBus(c+1274,"ba", false,-1, 1,0);
    tracep->declBus(c+1286,"dqm", false,-1, 1,0);
    tracep->declBus(c+1289,"dq", false,-1, 15,0);
    tracep->declBit(c+1276,"reset", false,-1);
    tracep->declBus(c+970,"state", false,-1, 2,0);
    tracep->declBus(c+971,"counter", false,-1, 7,0);
    tracep->declBus(c+972,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1747,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+973,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+974,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1277,"nop", false,-1);
    tracep->declBit(c+1278,"active", false,-1);
    tracep->declBit(c+1279,"precharge", false,-1);
    tracep->declBit(c+1280,"read", false,-1);
    tracep->declBit(c+1281,"write", false,-1);
    tracep->declBit(c+1282,"burstterm", false,-1);
    tracep->declBit(c+1283,"autorefresh", false,-1);
    tracep->declBit(c+1284,"mode", false,-1);
    tracep->declBus(c+975,"test", false,-1, 15,0);
    tracep->declBus(c+976,"test1", false,-1, 15,0);
    tracep->declBus(c+977,"sense", false,-1, 31,0);
    tracep->declBit(c+978,"write_burst_mode", false,-1);
    tracep->declBus(c+979,"op_mode", false,-1, 1,0);
    tracep->declBus(c+980,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+981,"burst_type", false,-1);
    tracep->declBus(c+982,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+983,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+984,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+985,"bank", false,-1, 1,0);
    tracep->declBus(c+986,"row", false,-1, 12,0);
    tracep->declBus(c+987,"column", false,-1, 8,0);
    tracep->declBus(c+988,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+989,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+990,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+609,"cke", false,-1);
    tracep->declBit(c+1259,"cs", false,-1);
    tracep->declBit(c+1260,"ras", false,-1);
    tracep->declBit(c+1261,"cas", false,-1);
    tracep->declBit(c+1262,"we", false,-1);
    tracep->declBus(c+1263,"a", false,-1, 12,0);
    tracep->declBus(c+1274,"ba", false,-1, 1,0);
    tracep->declBus(c+1287,"dqm", false,-1, 1,0);
    tracep->declBus(c+1290,"dq", false,-1, 15,0);
    tracep->declBit(c+1276,"reset", false,-1);
    tracep->declBus(c+991,"state", false,-1, 2,0);
    tracep->declBus(c+992,"counter", false,-1, 7,0);
    tracep->declBus(c+993,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1748,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+994,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+995,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1277,"nop", false,-1);
    tracep->declBit(c+1278,"active", false,-1);
    tracep->declBit(c+1279,"precharge", false,-1);
    tracep->declBit(c+1280,"read", false,-1);
    tracep->declBit(c+1281,"write", false,-1);
    tracep->declBit(c+1282,"burstterm", false,-1);
    tracep->declBit(c+1283,"autorefresh", false,-1);
    tracep->declBit(c+1284,"mode", false,-1);
    tracep->declBus(c+996,"test", false,-1, 15,0);
    tracep->declBus(c+997,"test1", false,-1, 15,0);
    tracep->declBus(c+998,"sense", false,-1, 31,0);
    tracep->declBit(c+999,"write_burst_mode", false,-1);
    tracep->declBus(c+1000,"op_mode", false,-1, 1,0);
    tracep->declBus(c+1001,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+1002,"burst_type", false,-1);
    tracep->declBus(c+1003,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+1004,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+1005,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+1006,"bank", false,-1, 1,0);
    tracep->declBus(c+1007,"row", false,-1, 12,0);
    tracep->declBus(c+1008,"column", false,-1, 8,0);
    tracep->declBus(c+1009,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+1010,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+1011,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+18,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+19,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+20,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+21,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+57,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+60,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+61,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+153,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+199,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+209,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+217,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+221,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+229,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+241,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+249,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+253,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+257,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+261,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+265,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+273,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+281,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+289,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+293,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+297,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+301,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+313,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+317,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+321,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+325,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+329,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+333,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__snpc),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+346,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)))));
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),4);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),4);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),4);
    bufp->fullBit(oldp+353,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id))));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_id));
    bufp->fullBit(oldp+355,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ex),32);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),4);
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex),4);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rdata),32);
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_arready));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid));
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CHazarden));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullSData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[0]),16);
    bufp->fullSData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[1]),16);
    bufp->fullSData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[2]),16);
    bufp->fullSData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[3]),16);
    bufp->fullSData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[4]),16);
    bufp->fullSData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[5]),16);
    bufp->fullSData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[6]),16);
    bufp->fullSData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[7]),16);
    bufp->fullSData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[8]),16);
    bufp->fullSData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[9]),16);
    bufp->fullSData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[10]),16);
    bufp->fullSData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[11]),16);
    bufp->fullSData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[12]),16);
    bufp->fullSData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[13]),16);
    bufp->fullSData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[14]),16);
    bufp->fullSData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg[15]),16);
    bufp->fullIData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[0]),26);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[1]),26);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[2]),26);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[3]),26);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[4]),26);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[5]),26);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[6]),26);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[7]),26);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[8]),26);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[9]),26);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[10]),26);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[11]),26);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[12]),26);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[13]),26);
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[14]),26);
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg[15]),26);
    bufp->fullIData(oldp+404,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc 
                               >> 6U)),26);
    bufp->fullCData(oldp+405,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc 
                                       >> 2U))),4);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[0]),8);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[1]),8);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[2]),8);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[3]),8);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[4]),8);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[5]),8);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[6]),8);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[7]),8);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[8]),8);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[9]),8);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[10]),8);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[11]),8);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[12]),8);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[13]),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[14]),8);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bsnpc_reg[15]),8);
    bufp->fullIData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[0]),26);
    bufp->fullIData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[1]),26);
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[2]),26);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[3]),26);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[4]),26);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[5]),26);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[6]),26);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[7]),26);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[8]),26);
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[9]),26);
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[10]),26);
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[11]),26);
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[12]),26);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[13]),26);
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[14]),26);
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__btag_reg[15]),26);
    bufp->fullIData(oldp+438,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                               >> 6U)),26);
    bufp->fullCData(oldp+439,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                       >> 2U))),4);
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__bhit));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jhit));
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__a),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk2__DOT__a),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk4__DOT__a),32);
    bufp->fullQData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__counter),2);
    bufp->fullIData(oldp+450,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id)),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullBit(oldp+452,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                   >> 0xaU))));
    bufp->fullSData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_check),16);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[0]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[1]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[2]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[3]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[4]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[5]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[6]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[7]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[8]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[9]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[10]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[11]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[12]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[13]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[14]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[15]),8);
    bufp->fullSData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),16);
    bufp->fullSData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),16);
    bufp->fullSData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),16);
    bufp->fullSData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),16);
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid_enable));
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__f),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__a),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__b),32);
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk4__DOT__a),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk4__DOT__b),32);
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__prevalid));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_read_done));
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+502,((((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [1U]) | (((- (IData)(
                                                     (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [2U]) | (
                                                   ((- (IData)(
                                                               (3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [3U]) 
                                                   | (((- (IData)(
                                                                  (4U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [4U]) 
                                                      | (((- (IData)(
                                                                     (5U 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [5U]) 
                                                         | (((- (IData)(
                                                                        (6U 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [6U]) 
                                                            | ((- (IData)(
                                                                          (7U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                               [7U])))))))),32);
    bufp->fullIData(oldp+503,((((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [8U]) | (((- (IData)(
                                                     (9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [9U]) | (
                                                   ((- (IData)(
                                                               (0xaU 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [0xaU]) 
                                                   | (((- (IData)(
                                                                  (0xbU 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [0xbU]) 
                                                      | (((- (IData)(
                                                                     (0xcU 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [0xcU]) 
                                                         | (((- (IData)(
                                                                        (0xdU 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [0xdU]) 
                                                            | (((- (IData)(
                                                                           (0xeU 
                                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                [0xeU]) 
                                                               | ((- (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                  [0xfU]))))))))),32);
    bufp->fullIData(oldp+504,((((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [1U]) | (((- (IData)(
                                                     (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [2U]) | (
                                                   ((- (IData)(
                                                               (3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [3U]) 
                                                   | (((- (IData)(
                                                                  (4U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [4U]) 
                                                      | (((- (IData)(
                                                                     (5U 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [5U]) 
                                                         | (((- (IData)(
                                                                        (6U 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [6U]) 
                                                            | ((- (IData)(
                                                                          (7U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                               [7U])))))))),32);
    bufp->fullIData(oldp+505,((((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [8U]) | (((- (IData)(
                                                     (9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [9U]) | (
                                                   ((- (IData)(
                                                               (0xaU 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [0xaU]) 
                                                   | (((- (IData)(
                                                                  (0xbU 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [0xbU]) 
                                                      | (((- (IData)(
                                                                     (0xcU 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [0xcU]) 
                                                         | (((- (IData)(
                                                                        (0xdU 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [0xdU]) 
                                                            | (((- (IData)(
                                                                           (0xeU 
                                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                [0xeU]) 
                                                               | ((- (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                  [0xfU]))))))))),32);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__mvendorid),32);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__marchid),32);
    bufp->fullBit(oldp+509,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 2U))));
    bufp->fullBit(oldp+510,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex))));
    bufp->fullBit(oldp+511,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 1U))));
    bufp->fullBit(oldp+512,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 3U))));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+568,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+569,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0)
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7b86cc8f__0))
                                : 0U)),32);
    bufp->fullIData(oldp+570,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0)
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7b86cc8f__0))
                                : 0U)),32);
    bufp->fullIData(oldp+571,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0)
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0bc2acfe__0)
                                : 0U)),32);
    bufp->fullIData(oldp+572,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0)
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0bc2acfe__0)
                                : 0U)),32);
    bufp->fullIData(oldp+573,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0)
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0bc2acfe__0)
                                : 0U)),32);
    bufp->fullIData(oldp+574,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res
                                : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res
                                    : ((6U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id) 
                                                >> 2U)))
                                        ? ((IData)(4U) 
                                           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id)
                                        : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id
                                            : ((5U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr
                                                     : 0U)))))))),32);
    bufp->fullBit(oldp+575,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+576,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+577,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res)))));
    bufp->fullBit(oldp+578,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res)) 
                                & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullBit(oldp+579,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res)))));
    bufp->fullBit(oldp+580,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res)) 
                                & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullBit(oldp+581,(((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0d08be77__0)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullIData(oldp+582,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)),32);
    bufp->fullCData(oldp+583,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
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
    bufp->fullCData(oldp+584,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                                ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+585,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                   | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                         & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                            | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+586,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+587,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+588,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+589,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->fullBit(oldp+590,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+591,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+592,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__updata) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state))));
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullCData(oldp+596,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                     >> 1U))),2);
    bufp->fullIData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awaddr),32);
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wdata),32);
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_araddr),32);
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rready));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state));
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),2);
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+623,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+633,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+635,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+665,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+666,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+669,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+670,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+675,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+679,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+694,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+695,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+697,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+698,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+699,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+700,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+701,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+709,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+744,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+745,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+746,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+747,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+748,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+749,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+750,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+754,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+756,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+757,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+759,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+763,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+764,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+766,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+784,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+785,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+786,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+787,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+788,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+789,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+790,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+793,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+794,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+795,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+814,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+821,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+840,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+841,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+842,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+843,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+844,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+863,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+864,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+865,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+866,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+867,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+869,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+888,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+905,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+916,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+920,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+930,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+931,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+932,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+933,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+934,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+935,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+936,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+937,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+938,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+939,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+940,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+941,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+942,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+944,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+945,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+951,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+952,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+953,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+954,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+955,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+956,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+957,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+958,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+959,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+960,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+961,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+962,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+963,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+965,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+966,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+972,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+973,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+974,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+975,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+976,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+977,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+978,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+979,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+980,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+981,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+982,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+983,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+984,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+986,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+987,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+993,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+994,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+995,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+996,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+997,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+998,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+999,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+1000,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1001,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1002,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                    >> 3U))));
    bufp->fullCData(oldp+1003,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+1004,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 4U))),8);
    bufp->fullCData(oldp+1005,((0xffU & ((IData)(1U) 
                                         << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullBit(oldp+1012,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+1013,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))),32);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc),21);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en),2);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),5);
    bufp->fullBit(oldp+1022,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_addr),32);
    bufp->fullIData(oldp+1024,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                     ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                        << 8U) : ((2U 
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
                                                    : 0U))))),32);
    bufp->fullIData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__total),2);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__abnormal),2);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res),32);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res));
    bufp->fullIData(oldp+1030,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csrs_w)),32);
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csrs_w),32);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csrs_wen),4);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel),4);
    bufp->fullIData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res),32);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+1036,((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1037,((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unvalid));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__updata));
    bufp->fullCData(oldp+1042,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                         >> 2U))),5);
    bufp->fullCData(oldp+1043,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h86c6dcd9__0) 
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
                                            >> 7U))
                                 : 0U)),4);
    bufp->fullCData(oldp+1044,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1045,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h26248598__0) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb68e3e2e__0))
                                 ? (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0xfU))
                                 : 0U)),4);
    bufp->fullCData(oldp+1046,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb68e3e2e__0)
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x14U)
                                         : ((IData)(
                                                    ((0x70U 
                                                      == 
                                                      (0x707cU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                                     & (0U 
                                                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)))
                                             ? 0xfU
                                             : 0U)))),4);
    bufp->fullIData(oldp+1047,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1048,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+1049,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1050,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1051,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1053,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+1054,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hac2a130d__0)
                                 ? 1U : ((0x1bU == 
                                          (0x1fU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 2U)))
                                          ? 2U : 0U))),2);
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__updata));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5));
    bufp->fullBit(oldp+1057,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5))));
    bufp->fullBit(oldp+1058,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5))));
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1067,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h5025d6ea__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullCData(oldp+1082,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))),4);
    bufp->fullIData(oldp+1083,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0)),32);
    bufp->fullCData(oldp+1084,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h661126f5__0))),8);
    bufp->fullCData(oldp+1085,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcdcd14ea__0))),3);
    bufp->fullCData(oldp+1086,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5af3c074__0))),2);
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1093,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1101,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1103,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1105,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1121,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1124,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1125,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1126,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1127,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1130,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h2a60abe8__0))));
    bufp->fullBit(oldp+1131,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3cb40b25__0))));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1136,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))))),16);
    bufp->fullSData(oldp+1137,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)))),16);
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1148,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1149,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1150,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1155,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1157,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1158,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullIData(oldp+1166,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                                        >> 0x20U))),32);
    bufp->fullCData(oldp+1167,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h661126f5__0) 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1168,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1169,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcdcd14ea__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1170,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5af3c074__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1171,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h2a60abe8__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1172,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3cb40b25__0) 
                                    >> 1U))));
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1174,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1175,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1176,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit));
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1187,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1188,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1190,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1193,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1194,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullCData(oldp+1195,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcdcd14ea__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1196,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize)
                                 : 0U)),3);
    bufp->fullIData(oldp+1197,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata
                                 : 0U)),32);
    bufp->fullCData(oldp+1198,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb)
                                 : 0U)),4);
    bufp->fullBit(oldp+1199,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid))));
    bufp->fullBit(oldp+1200,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1201,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1202,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1203,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1204,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1205,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1206,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1207,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1208,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1209,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1210,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1211,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1212,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1213,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1214,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1215,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1216,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1217,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1218,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1219,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1220,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1221,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1222,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1223,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1224,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1225,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1226,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1227,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1228,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1229,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1230,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1231,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1232,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1233,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1234,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA)),32);
    bufp->fullCData(oldp+1235,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullCData(oldp+1236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)
                                 : 0U)),4);
    bufp->fullCData(oldp+1237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))
                                 : 0U)),4);
    bufp->fullBit(oldp+1238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullBit(oldp+1239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1240,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+1241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+1242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullIData(oldp+1243,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1244,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1245,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1246,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1252,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1259,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1260,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1261,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1262,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+1274,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+1279,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+1285,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+1286,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+1287,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+1288,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                 << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+1289,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+1290,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+1301,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [0U])))),32);
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1304,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1309,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1310,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1311,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1313,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1315,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1316,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1318,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1321,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1322,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1323,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1328,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1331,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1336,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1338,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1339,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullSData(oldp+1391,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1392,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1414,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1415,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1437,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1438,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1439,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1440,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1441,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1442,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1443,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1444,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1445,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1446,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1447,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1448,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1449,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1450,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1451,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1452,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1453,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1454,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1455,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1456,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1457,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1458,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1459,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1460,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1461,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1462,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1463,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1464,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1465,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1466,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1467,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1468,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arready));
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rvalid));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rdata),32);
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__updata));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid));
    bufp->fullIData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1500,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1505,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1509,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1513,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1514,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1515,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1525,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1526,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1528,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1535,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1542,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1545,(vlSelf->clock));
    bufp->fullBit(oldp+1546,(vlSelf->reset));
    bufp->fullSData(oldp+1547,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1548,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1549,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1550,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1551,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1552,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1553,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1554,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1555,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1556,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1557,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1558,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1559,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1560,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1561,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1562,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1563,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1564,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1565,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1566,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1567,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1568,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1569,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1570,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1571,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1572,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1574,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1575,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullBit(oldp+1576,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullIData(oldp+1577,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1578,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1579,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid)))));
    bufp->fullCData(oldp+1580,((3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
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
    bufp->fullIData(oldp+1581,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1582,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1583,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1585,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullBit(oldp+1586,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_read_done) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid)))));
    bufp->fullCData(oldp+1587,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid)
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
    bufp->fullCData(oldp+1588,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                                     ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                              ? 1U : 2U))
                                 : 0U)),3);
    bufp->fullCData(oldp+1589,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid)
                                 ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                     & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                        | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                     ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & ((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                                 | (5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                              ? 1U : 2U))
                                 : 0U)),3);
    bufp->fullCData(oldp+1590,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullCData(oldp+1591,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullIData(oldp+1592,((((- (IData)((0x2000000U 
                                             == (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                                                         >> 0x20U))))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                | ((- (IData)((0x2000004U 
                                               == (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                                                           >> 0x20U))))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullCData(oldp+1593,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullIData(oldp+1594,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__mvendorid
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__marchid)),32);
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1597,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1598,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1599,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullSData(oldp+1600,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1603,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1604,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1606,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1609,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1611,(1U),3);
    bufp->fullCData(oldp+1612,(0U),2);
    bufp->fullCData(oldp+1613,(1U),2);
    bufp->fullCData(oldp+1614,(2U),2);
    bufp->fullCData(oldp+1615,(3U),2);
    bufp->fullSData(oldp+1616,(0xaU),11);
    bufp->fullBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1621,(0U));
    bufp->fullCData(oldp+1622,(0U),3);
    bufp->fullCData(oldp+1623,(2U),3);
    bufp->fullCData(oldp+1624,(3U),3);
    bufp->fullCData(oldp+1625,(4U),3);
    bufp->fullBit(oldp+1626,(1U));
    bufp->fullBit(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1628,(0U),4);
    bufp->fullIData(oldp+1629,(0U),32);
    bufp->fullCData(oldp+1630,(0U),8);
    bufp->fullBit(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullCData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awlen),8);
    bufp->fullCData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arlen),8);
    bufp->fullCData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awid),4);
    bufp->fullCData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arid),4);
    bufp->fullCData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awburst),2);
    bufp->fullCData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arburst),2);
    bufp->fullIData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awaddr),32);
    bufp->fullIData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wdata),32);
    bufp->fullCData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wstrb),4);
    bufp->fullCData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awlen),8);
    bufp->fullCData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awid),4);
    bufp->fullCData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid),4);
    bufp->fullCData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid),4);
    bufp->fullCData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awsize),3);
    bufp->fullCData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awburst),2);
    bufp->fullCData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp),2);
    bufp->fullCData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp),2);
    bufp->fullBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awvalid));
    bufp->fullBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awready));
    bufp->fullBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wvalid));
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready));
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bvalid));
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bready));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wlast));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast));
    bufp->fullIData(oldp+1670,(4U),32);
    bufp->fullIData(oldp+1671,(0U),32);
    bufp->fullIData(oldp+1672,(0x20U),32);
    bufp->fullIData(oldp+1673,(8U),32);
    bufp->fullIData(oldp+1674,(0x10U),32);
    bufp->fullIData(oldp+1675,(1U),32);
    bufp->fullIData(oldp+1676,(0x2000000U),32);
    bufp->fullIData(oldp+1677,(0x2000004U),32);
    bufp->fullBit(oldp+1678,(0U));
    bufp->fullBit(oldp+1679,(1U));
    bufp->fullCData(oldp+1680,(1U),4);
    bufp->fullCData(oldp+1681,(2U),4);
    bufp->fullCData(oldp+1682,(3U),4);
    bufp->fullCData(oldp+1683,(4U),4);
    bufp->fullCData(oldp+1684,(5U),4);
    bufp->fullCData(oldp+1685,(6U),4);
    bufp->fullCData(oldp+1686,(7U),4);
    bufp->fullCData(oldp+1687,(8U),4);
    bufp->fullIData(oldp+1688,(1U),32);
    bufp->fullIData(oldp+1689,(0x30000000U),32);
    bufp->fullIData(oldp+1690,(0x1000000U),32);
    bufp->fullIData(oldp+1691,(0x1000004U),32);
    bufp->fullIData(oldp+1692,(0x1800U),32);
    bufp->fullCData(oldp+1693,(4U),8);
    bufp->fullCData(oldp+1694,(8U),8);
    bufp->fullCData(oldp+1695,(3U),8);
    bufp->fullCData(oldp+1696,(0x9fU),8);
    bufp->fullCData(oldp+1697,(0x25U),8);
    bufp->fullCData(oldp+1698,(0xdU),8);
    bufp->fullCData(oldp+1699,(0x99U),8);
    bufp->fullCData(oldp+1700,(0x49U),8);
    bufp->fullCData(oldp+1701,(0x41U),8);
    bufp->fullCData(oldp+1702,(0x1fU),8);
    bufp->fullCData(oldp+1703,(1U),8);
    bufp->fullCData(oldp+1704,(9U),8);
    bufp->fullCData(oldp+1705,(0x11U),8);
    bufp->fullCData(oldp+1706,(0xc1U),8);
    bufp->fullCData(oldp+1707,(0x63U),8);
    bufp->fullCData(oldp+1708,(0x85U),8);
    bufp->fullCData(oldp+1709,(0x61U),8);
    bufp->fullCData(oldp+1710,(0x71U),8);
    bufp->fullCData(oldp+1711,(0xf0U),8);
    bufp->fullCData(oldp+1712,(0xe0U),8);
    bufp->fullCData(oldp+1713,(0x15U),8);
    bufp->fullCData(oldp+1714,(0xebU),8);
    bufp->fullCData(oldp+1715,(0x38U),8);
    bufp->fullIData(oldp+1716,(0x64U),32);
    bufp->fullIData(oldp+1717,(0x18U),32);
    bufp->fullIData(oldp+1718,(9U),32);
    bufp->fullIData(oldp+1719,(2U),32);
    bufp->fullIData(oldp+1720,(6U),32);
    bufp->fullIData(oldp+1721,(3U),32);
    bufp->fullIData(oldp+1722,(0xdU),32);
    bufp->fullIData(oldp+1723,(0x2000U),32);
    bufp->fullIData(oldp+1724,(0x2710U),32);
    bufp->fullIData(oldp+1725,(0x30cU),32);
    bufp->fullSData(oldp+1726,(0x20U),13);
    bufp->fullCData(oldp+1727,(9U),4);
    bufp->fullIData(oldp+1728,(0xaU),32);
    bufp->fullIData(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1730,(0x11U),32);
    bufp->fullIData(oldp+1731,(0x3fffffffU),32);
    bufp->fullCData(oldp+1732,(5U),3);
    bufp->fullCData(oldp+1733,(6U),3);
    bufp->fullCData(oldp+1734,(7U),3);
    bufp->fullCData(oldp+1735,(0xaU),4);
    bufp->fullIData(oldp+1736,(0xbU),32);
    bufp->fullIData(oldp+1737,(5U),32);
    bufp->fullIData(oldp+1738,(0x60U),32);
    bufp->fullIData(oldp+1739,(0x90U),32);
    bufp->fullIData(oldp+1740,(0x310U),32);
    bufp->fullIData(oldp+1741,(0x320U),32);
    bufp->fullIData(oldp+1742,(0x23U),32);
    bufp->fullIData(oldp+1743,(0x203U),32);
    bufp->fullIData(oldp+1744,(0x20dU),32);
    bufp->fullSData(oldp+1745,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1747,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
