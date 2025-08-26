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
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBus(c+1536,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1537,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1538,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1539,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1540,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1541,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1542,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1543,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1544,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1545,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1546,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1547,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1548,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1549,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1550,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1551,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1552,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1553,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1554,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1555,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBus(c+1536,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1537,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1538,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1539,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1540,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1541,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1542,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1543,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1544,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1545,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1546,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1547,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1548,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1549,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1550,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1551,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1552,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1553,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1554,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1555,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+491,"spi_sck", false,-1);
    tracep->declBus(c+492,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+913,"spi_mosi", false,-1);
    tracep->declBit(c+1556,"spi_miso", false,-1);
    tracep->declBit(c+1554,"uart_rx", false,-1);
    tracep->declBit(c+1555,"uart_tx", false,-1);
    tracep->declBit(c+1530,"psram_sck", false,-1);
    tracep->declBit(c+1531,"psram_ce_n", false,-1);
    tracep->declBus(c+1557,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1558,"sdram_clk", false,-1);
    tracep->declBit(c+493,"sdram_cke", false,-1);
    tracep->declBit(c+914,"sdram_cs", false,-1);
    tracep->declBit(c+915,"sdram_ras", false,-1);
    tracep->declBit(c+916,"sdram_cas", false,-1);
    tracep->declBit(c+917,"sdram_we", false,-1);
    tracep->declBus(c+918,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+919,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+494,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+954,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1536,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1537,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1538,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1539,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1540,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1541,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1542,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1543,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1544,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1545,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1546,"ps2_clk", false,-1);
    tracep->declBit(c+1547,"ps2_data", false,-1);
    tracep->declBus(c+1548,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1549,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1550,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1551,"vga_hsync", false,-1);
    tracep->declBit(c+1552,"vga_vsync", false,-1);
    tracep->declBit(c+1553,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBus(c+1118,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1119,"in_psel", false,-1);
    tracep->declBit(c+867,"in_penable", false,-1);
    tracep->declBus(c+1619,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1120,"in_pwrite", false,-1);
    tracep->declBus(c+1121,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1122,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+920,"in_pready", false,-1);
    tracep->declBus(c+921,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+922,"in_pslverr", false,-1);
    tracep->declBus(c+1241,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1304,"out_psel", false,-1);
    tracep->declBit(c+1305,"out_penable", false,-1);
    tracep->declBus(c+1306,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1307,"out_pwrite", false,-1);
    tracep->declBus(c+1308,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1310,"out_pready", false,-1);
    tracep->declBus(c+1559,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1311,"out_pslverr", false,-1);
    tracep->declBus(c+1620,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1621,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1622,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1623,"DELAY", false,-1, 1,0);
    tracep->declBus(c+923,"state", false,-1, 1,0);
    tracep->declBus(c+924,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+925,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+926,"pslverr_reg", false,-1);
    tracep->declBus(c+1624,"r", false,-1, 10,0);
    tracep->declBus(c+1622,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1304,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1305,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1307,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1241,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1310,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1311,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1559,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1312,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1313,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1307,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1314,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1306,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+495,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1625,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1626,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1315,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1316,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1307,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1242,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1306,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+496,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1627,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+927,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1317,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1307,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1242,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1306,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+497,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1628,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+928,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1320,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1307,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1241,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+772,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1629,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+1008,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1321,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1322,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1307,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1242,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1306,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1323,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1629,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1324,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1325,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1326,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1307,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1314,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1306,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1560,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1629,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1327,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1328,"sel_0", false,-1);
    tracep->declBit(c+1329,"sel_1", false,-1);
    tracep->declBit(c+1330,"sel_2", false,-1);
    tracep->declBit(c+1331,"sel_3", false,-1);
    tracep->declBit(c+1332,"sel_4", false,-1);
    tracep->declBit(c+1333,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1123,"auto_in_awready", false,-1);
    tracep->declBit(c+1124,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1123,"auto_in_wready", false,-1);
    tracep->declBit(c+1128,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1129,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1130,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1334,"auto_in_bready", false,-1);
    tracep->declBit(c+1335,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1561,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1131,"auto_in_arready", false,-1);
    tracep->declBit(c+1132,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1133,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1134,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1135,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1336,"auto_in_rready", false,-1);
    tracep->declBit(c+1337,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1562,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1119,"auto_out_psel", false,-1);
    tracep->declBit(c+867,"auto_out_penable", false,-1);
    tracep->declBit(c+1120,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1118,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1121,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1122,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+920,"auto_out_pready", false,-1);
    tracep->declBit(c+922,"auto_out_pslverr", false,-1);
    tracep->declBus(c+921,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+867,"nodeOut_penable", false,-1);
    tracep->declBus(c+868,"state", false,-1, 1,0);
    tracep->declBit(c+1131,"accept_read", false,-1);
    tracep->declBit(c+1123,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1120,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+929,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1561,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1337,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+869,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1335,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1338,"in_arready", false,-1);
    tracep->declBit(c+1136,"in_arvalid", false,-1);
    tracep->declBus(c+1137,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1139,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1140,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1141,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1339,"in_rready", false,-1);
    tracep->declBit(c+1097,"in_rvalid", false,-1);
    tracep->declBus(c+1098,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1099,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1100,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1101,"in_rlast", false,-1);
    tracep->declBit(c+773,"in_awready", false,-1);
    tracep->declBit(c+1629,"in_awvalid", false,-1);
    tracep->declBus(c+1142,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1143,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1144,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+774,"in_wready", false,-1);
    tracep->declBit(c+1563,"in_wvalid", false,-1);
    tracep->declBus(c+1147,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"in_wlast", false,-1);
    tracep->declBit(c+1340,"in_bready", false,-1);
    tracep->declBit(c+498,"in_bvalid", false,-1);
    tracep->declBus(c+499,"in_bid", false,-1, 3,0);
    tracep->declBus(c+500,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1341,"out_arready", false,-1);
    tracep->declBit(c+1342,"out_arvalid", false,-1);
    tracep->declBus(c+1343,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1344,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1345,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1243,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1346,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1347,"out_rready", false,-1);
    tracep->declBit(c+1102,"out_rvalid", false,-1);
    tracep->declBus(c+1103,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1104,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1620,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1105,"out_rlast", false,-1);
    tracep->declBit(c+1348,"out_awready", false,-1);
    tracep->declBit(c+1630,"out_awvalid", false,-1);
    tracep->declBus(c+1349,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1350,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1351,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1564,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1352,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1353,"out_wready", false,-1);
    tracep->declBit(c+1354,"out_wvalid", false,-1);
    tracep->declBus(c+1565,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1566,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1567,"out_wlast", false,-1);
    tracep->declBit(c+1568,"out_bready", false,-1);
    tracep->declBit(c+1106,"out_bvalid", false,-1);
    tracep->declBus(c+1103,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1620,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1631,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1619,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1632,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1633,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1634,"DELAY", false,-1, 2,0);
    tracep->declBus(c+1107,"rstate", false,-1, 2,0);
    tracep->declBus(c+501,"wstate", false,-1, 2,0);
    tracep->declBus(c+1108,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+502,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+503,"rvalid_reg", false,-1);
    tracep->declBus(c+1109,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+1110,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+1114,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+1115,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+504,"bvalid_reg", false,-1);
    tracep->declBus(c+505,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+506,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1624,"r", false,-1, 10,0);
    tracep->declBus(c+1622,"s", false,-1, 1,0);
    tracep->declBus(c+1116,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+21,"auto_in_awready", false,-1);
    tracep->declBit(c+1150,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1142,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1143,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+22,"auto_in_wready", false,-1);
    tracep->declBit(c+1151,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1147,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_in_wlast", false,-1);
    tracep->declBit(c+1569,"auto_in_bready", false,-1);
    tracep->declBit(c+1355,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1356,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+445,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_arready", false,-1);
    tracep->declBit(c+1152,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1137,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1140,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1141,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1357,"auto_in_rready", false,-1);
    tracep->declBit(c+1358,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1359,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1570,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1571,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+446,"auto_in_rlast", false,-1);
    tracep->declBit(c+1360,"auto_out_awready", false,-1);
    tracep->declBit(c+1153,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1154,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1361,"auto_out_wready", false,-1);
    tracep->declBit(c+1155,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1129,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1130,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_out_wlast", false,-1);
    tracep->declBit(c+1362,"auto_out_bready", false,-1);
    tracep->declBit(c+1363,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1356,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1364,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1365,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1366,"auto_out_arready", false,-1);
    tracep->declBit(c+1157,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1133,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1134,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1135,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1158,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1357,"auto_out_rready", false,-1);
    tracep->declBit(c+1358,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1359,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1570,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1571,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+447,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1367,"auto_out_rlast", false,-1);
    tracep->declBit(c+1155,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+24,"w_idle", false,-1);
    tracep->declBit(c+1368,"in_awready", false,-1);
    tracep->declBit(c+25,"busy", false,-1);
    tracep->declBus(c+26,"r_addr", false,-1, 31,0);
    tracep->declBus(c+27,"r_len", false,-1, 7,0);
    tracep->declBus(c+1159,"len", false,-1, 7,0);
    tracep->declBus(c+1160,"addr", false,-1, 31,0);
    tracep->declBit(c+28,"busy_1", false,-1);
    tracep->declBus(c+29,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+30,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1161,"len_1", false,-1, 7,0);
    tracep->declBus(c+1162,"addr_1", false,-1, 31,0);
    tracep->declBit(c+31,"wbeats_latched", false,-1);
    tracep->declBit(c+1153,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1163,"wbeats_valid", false,-1);
    tracep->declBus(c+32,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1164,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1156,"w_last", false,-1);
    tracep->declBit(c+1362,"nodeOut_bready", false,-1);
    tracep->declBus(c+33,"error_0", false,-1, 1,0);
    tracep->declBus(c+34,"error_1", false,-1, 1,0);
    tracep->declBus(c+35,"error_2", false,-1, 1,0);
    tracep->declBus(c+36,"error_3", false,-1, 1,0);
    tracep->declBus(c+37,"error_4", false,-1, 1,0);
    tracep->declBus(c+38,"error_5", false,-1, 1,0);
    tracep->declBus(c+39,"error_6", false,-1, 1,0);
    tracep->declBus(c+40,"error_7", false,-1, 1,0);
    tracep->declBus(c+41,"error_8", false,-1, 1,0);
    tracep->declBus(c+42,"error_9", false,-1, 1,0);
    tracep->declBus(c+43,"error_10", false,-1, 1,0);
    tracep->declBus(c+44,"error_11", false,-1, 1,0);
    tracep->declBus(c+45,"error_12", false,-1, 1,0);
    tracep->declBus(c+46,"error_13", false,-1, 1,0);
    tracep->declBus(c+47,"error_14", false,-1, 1,0);
    tracep->declBus(c+48,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1152,"io_enq_valid", false,-1);
    tracep->declBus(c+1137,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1138,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1139,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1140,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1141,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1369,"io_deq_ready", false,-1);
    tracep->declBit(c+1157,"io_deq_valid", false,-1);
    tracep->declBus(c+1133,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1165,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1166,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1135,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1167,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+49,"ram", false,-1, 48,0);
    tracep->declBit(c+51,"full", false,-1);
    tracep->declBit(c+1157,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1370,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+21,"io_enq_ready", false,-1);
    tracep->declBit(c+1150,"io_enq_valid", false,-1);
    tracep->declBus(c+1142,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1143,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1144,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1145,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1146,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1371,"io_deq_ready", false,-1);
    tracep->declBit(c+1168,"io_deq_valid", false,-1);
    tracep->declBus(c+1125,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1169,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1170,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1127,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1171,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+52,"ram", false,-1, 48,0);
    tracep->declBit(c+54,"full", false,-1);
    tracep->declBit(c+1168,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1372,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1151,"io_enq_valid", false,-1);
    tracep->declBus(c+1147,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1148,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1149,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1373,"io_deq_ready", false,-1);
    tracep->declBit(c+1172,"io_deq_valid", false,-1);
    tracep->declBus(c+1129,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1130,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1572,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+55,"ram", false,-1, 36,0);
    tracep->declBit(c+57,"full", false,-1);
    tracep->declBit(c+1172,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1374,"do_enq", false,-1);
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
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1375,"auto_in_awready", false,-1);
    tracep->declBit(c+1173,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1174,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1244,"auto_in_wready", false,-1);
    tracep->declBit(c+1175,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1129,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1130,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1376,"auto_in_bready", false,-1);
    tracep->declBit(c+58,"auto_in_bvalid", false,-1);
    tracep->declBus(c+59,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1377,"auto_in_arready", false,-1);
    tracep->declBit(c+1176,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1133,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1177,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1378,"auto_in_rready", false,-1);
    tracep->declBit(c+61,"auto_in_rvalid", false,-1);
    tracep->declBus(c+62,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+870,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1009,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1377,"nodeIn_arready", false,-1);
    tracep->declBit(c+1375,"nodeIn_awready", false,-1);
    tracep->declBit(c+1178,"w_sel0", false,-1);
    tracep->declBit(c+58,"w_full", false,-1);
    tracep->declBus(c+59,"w_id", false,-1, 3,0);
    tracep->declBit(c+1010,"r_sel1", false,-1);
    tracep->declBit(c+63,"w_sel1", false,-1);
    tracep->declBit(c+61,"r_full", false,-1);
    tracep->declBus(c+62,"r_id", false,-1, 3,0);
    tracep->declBit(c+1379,"ren", false,-1);
    tracep->declBit(c+871,"rdata_REG", false,-1);
    tracep->declBus(c+872,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+873,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+874,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+875,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1179,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1379,"R0_en", false,-1);
    tracep->declBit(c+1534,"R0_clk", false,-1);
    tracep->declBus(c+876,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1180,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1380,"W0_en", false,-1);
    tracep->declBit(c+1534,"W0_clk", false,-1);
    tracep->declBus(c+1129,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1130,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1181,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1182,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1142,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1143,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1573,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1183,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1147,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1184,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1381,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1382,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1574,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1383,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1185,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1137,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1140,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1141,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1186,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1384,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1385,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1575,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1576,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1386,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+773,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1629,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1142,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1143,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+774,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1563,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1147,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1340,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+498,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+499,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+500,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1338,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1136,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1137,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1140,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1141,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1339,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1097,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1098,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1099,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1100,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1101,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+21,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1150,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1142,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1143,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+22,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1151,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1147,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1569,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1355,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1356,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+445,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1152,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1137,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1140,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1141,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1357,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1358,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1359,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1570,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1571,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+446,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1381,"in_0_bvalid", false,-1);
    tracep->declBit(c+1384,"in_0_rvalid", false,-1);
    tracep->declBit(c+1577,"in_0_wready", false,-1);
    tracep->declBit(c+21,"in_0_awready", false,-1);
    tracep->declBit(c+1578,"in_0_arready", false,-1);
    tracep->declBit(c+1181,"anonIn_awready", false,-1);
    tracep->declBit(c+1383,"anonIn_arready", false,-1);
    tracep->declBit(c+1187,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1188,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1635,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1629,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1189,"arSel", false,-1, 15,0);
    tracep->declBus(c+1190,"awSel", false,-1, 15,0);
    tracep->declBus(c+1387,"rSel", false,-1, 15,0);
    tracep->declBus(c+1388,"bSel", false,-1, 15,0);
    tracep->declBus(c+64,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+65,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+66,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+67,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+68,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+69,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+70,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+71,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+72,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+73,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+74,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+75,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+76,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+77,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+78,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+79,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+80,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+81,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+82,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+83,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+84,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+85,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+86,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+87,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+88,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+89,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+90,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+91,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+92,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+93,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+94,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+95,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+96,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+97,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+98,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+99,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+100,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+101,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+102,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+103,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+104,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+105,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+106,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+107,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+108,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+109,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+110,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+111,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+112,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+113,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+114,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+115,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+116,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+117,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+118,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+119,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+120,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+121,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+122,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+123,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+124,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+125,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+126,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+127,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1191,"in_0_arvalid", false,-1);
    tracep->declBit(c+128,"latched", false,-1);
    tracep->declBit(c+1150,"in_0_awvalid", false,-1);
    tracep->declBit(c+1192,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1193,"in_0_wvalid", false,-1);
    tracep->declBit(c+129,"idle_2", false,-1);
    tracep->declBit(c+1389,"anyValid", false,-1);
    tracep->declBus(c+1390,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+130,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1391,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1392,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1393,"prefixOR_1", false,-1);
    tracep->declBit(c+1394,"winner_2_1", false,-1);
    tracep->declBit(c+131,"state_2_0", false,-1);
    tracep->declBit(c+132,"state_2_1", false,-1);
    tracep->declBit(c+1395,"muxState_2_0", false,-1);
    tracep->declBit(c+1396,"muxState_2_1", false,-1);
    tracep->declBit(c+133,"idle_3", false,-1);
    tracep->declBit(c+1397,"anyValid_1", false,-1);
    tracep->declBus(c+1398,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+134,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1399,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1400,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1401,"winner_3_0", false,-1);
    tracep->declBit(c+1402,"winner_3_1", false,-1);
    tracep->declBit(c+135,"state_3_0", false,-1);
    tracep->declBit(c+136,"state_3_1", false,-1);
    tracep->declBit(c+448,"muxState_3_0", false,-1);
    tracep->declBit(c+449,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+137,"io_enq_ready", false,-1);
    tracep->declBit(c+1192,"io_enq_valid", false,-1);
    tracep->declBus(c+1621,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1403,"io_deq_ready", false,-1);
    tracep->declBit(c+1194,"io_deq_valid", false,-1);
    tracep->declBus(c+138,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+139,"wrap", false,-1);
    tracep->declBit(c+140,"wrap_1", false,-1);
    tracep->declBit(c+141,"maybe_full", false,-1);
    tracep->declBit(c+142,"ptr_match", false,-1);
    tracep->declBit(c+143,"empty", false,-1);
    tracep->declBit(c+144,"full", false,-1);
    tracep->declBit(c+1194,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1404,"do_deq", false,-1);
    tracep->declBit(c+1405,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+140,"R0_addr", false,-1);
    tracep->declBit(c+1635,"R0_en", false,-1);
    tracep->declBit(c+1534,"R0_clk", false,-1);
    tracep->declBus(c+145,"R0_data", false,-1, 1,0);
    tracep->declBit(c+139,"W0_addr", false,-1);
    tracep->declBit(c+1405,"W0_en", false,-1);
    tracep->declBit(c+1534,"W0_clk", false,-1);
    tracep->declBus(c+1621,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+146+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1406,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1195,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1361,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1155,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1129,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1130,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1362,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1363,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1356,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1364,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1407,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1196,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1133,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1134,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1135,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1357,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1358,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1359,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1570,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1571,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1367,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1375,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1173,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1174,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1244,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1175,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1129,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1130,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1376,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+58,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+59,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1377,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1176,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1133,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1177,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1378,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+61,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+62,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+870,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+1009,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1197,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1198,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+148,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1199,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1133,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1200,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+450,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+149,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+877,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1123,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1124,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1123,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1128,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1129,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1130,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1334,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1335,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1561,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1131,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1132,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1133,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1134,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1135,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1336,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1562,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1363,"in_0_bvalid", false,-1);
    tracep->declBit(c+1358,"in_0_rvalid", false,-1);
    tracep->declBit(c+1408,"in_0_wready", false,-1);
    tracep->declBit(c+1409,"in_0_awready", false,-1);
    tracep->declBit(c+1407,"in_0_arready", false,-1);
    tracep->declBit(c+1406,"anonIn_awready", false,-1);
    tracep->declBit(c+1201,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1202,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1203,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1204,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1205,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1206,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1207,"arSel", false,-1, 15,0);
    tracep->declBus(c+1208,"awSel", false,-1, 15,0);
    tracep->declBus(c+1410,"rSel", false,-1, 15,0);
    tracep->declBus(c+1411,"bSel", false,-1, 15,0);
    tracep->declBit(c+151,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+152,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+153,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+154,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+155,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+156,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+157,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+158,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+159,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+160,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+161,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+162,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+163,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+164,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+165,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+166,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+167,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+168,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+169,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+170,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+171,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+172,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+173,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+174,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+175,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+176,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+177,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+178,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+179,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+180,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+181,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+182,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+183,"latched", false,-1);
    tracep->declBit(c+1209,"in_0_awvalid", false,-1);
    tracep->declBit(c+1210,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1211,"in_0_wvalid", false,-1);
    tracep->declBit(c+184,"idle_3", false,-1);
    tracep->declBit(c+1412,"anyValid", false,-1);
    tracep->declBus(c+1413,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+185,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1414,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1415,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1416,"prefixOR_1", false,-1);
    tracep->declBit(c+1417,"winner_3_1", false,-1);
    tracep->declBit(c+1418,"winner_3_2", false,-1);
    tracep->declBit(c+186,"state_3_0", false,-1);
    tracep->declBit(c+187,"state_3_1", false,-1);
    tracep->declBit(c+188,"state_3_2", false,-1);
    tracep->declBit(c+1419,"muxState_3_0", false,-1);
    tracep->declBit(c+1420,"muxState_3_1", false,-1);
    tracep->declBit(c+1421,"muxState_3_2", false,-1);
    tracep->declBit(c+189,"idle_4", false,-1);
    tracep->declBit(c+1422,"anyValid_1", false,-1);
    tracep->declBus(c+1423,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+190,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1424,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1425,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1426,"winner_4_0", false,-1);
    tracep->declBit(c+1427,"winner_4_2", false,-1);
    tracep->declBit(c+191,"state_4_0", false,-1);
    tracep->declBit(c+192,"state_4_2", false,-1);
    tracep->declBit(c+1428,"muxState_4_0", false,-1);
    tracep->declBit(c+1429,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+193,"io_enq_ready", false,-1);
    tracep->declBit(c+1210,"io_enq_valid", false,-1);
    tracep->declBus(c+1212,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1430,"io_deq_ready", false,-1);
    tracep->declBit(c+1213,"io_deq_valid", false,-1);
    tracep->declBus(c+1214,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+194,"wrap", false,-1);
    tracep->declBit(c+195,"wrap_1", false,-1);
    tracep->declBit(c+196,"maybe_full", false,-1);
    tracep->declBit(c+197,"ptr_match", false,-1);
    tracep->declBit(c+198,"empty", false,-1);
    tracep->declBit(c+199,"full", false,-1);
    tracep->declBit(c+1213,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1431,"do_deq", false,-1);
    tracep->declBit(c+1432,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+195,"R0_addr", false,-1);
    tracep->declBit(c+1635,"R0_en", false,-1);
    tracep->declBit(c+1534,"R0_clk", false,-1);
    tracep->declBus(c+200,"R0_data", false,-1, 2,0);
    tracep->declBit(c+194,"W0_addr", false,-1);
    tracep->declBit(c+1432,"W0_en", false,-1);
    tracep->declBit(c+1534,"W0_clk", false,-1);
    tracep->declBus(c+1212,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+201+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1360,"auto_in_awready", false,-1);
    tracep->declBit(c+1153,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1154,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1361,"auto_in_wready", false,-1);
    tracep->declBit(c+1155,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1129,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1130,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_in_wlast", false,-1);
    tracep->declBit(c+1362,"auto_in_bready", false,-1);
    tracep->declBit(c+1363,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1356,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1364,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1365,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1366,"auto_in_arready", false,-1);
    tracep->declBit(c+1157,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1133,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1134,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1135,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1158,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1357,"auto_in_rready", false,-1);
    tracep->declBit(c+1358,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1359,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1570,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1571,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+447,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1367,"auto_in_rlast", false,-1);
    tracep->declBit(c+1406,"auto_out_awready", false,-1);
    tracep->declBit(c+1195,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1361,"auto_out_wready", false,-1);
    tracep->declBit(c+1155,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1129,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1130,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_out_wlast", false,-1);
    tracep->declBit(c+1362,"auto_out_bready", false,-1);
    tracep->declBit(c+1363,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1356,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1364,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1407,"auto_out_arready", false,-1);
    tracep->declBit(c+1196,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1133,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1134,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1135,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1357,"auto_out_rready", false,-1);
    tracep->declBit(c+1358,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1359,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1570,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1571,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1367,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1245,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1433,"io_deq_ready", false,-1);
    tracep->declBit(c+204,"io_deq_valid", false,-1);
    tracep->declBit(c+205,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+204,"full", false,-1);
    tracep->declBit(c+205,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+206,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+207,"io_enq_ready", false,-1);
    tracep->declBit(c+1246,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1434,"io_deq_ready", false,-1);
    tracep->declBit(c+208,"io_deq_valid", false,-1);
    tracep->declBit(c+209,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+208,"full", false,-1);
    tracep->declBit(c+209,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+210,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+1247,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1435,"io_deq_ready", false,-1);
    tracep->declBit(c+212,"io_deq_valid", false,-1);
    tracep->declBit(c+213,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+212,"full", false,-1);
    tracep->declBit(c+213,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+214,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+215,"io_enq_ready", false,-1);
    tracep->declBit(c+1248,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1436,"io_deq_ready", false,-1);
    tracep->declBit(c+216,"io_deq_valid", false,-1);
    tracep->declBit(c+217,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+216,"full", false,-1);
    tracep->declBit(c+217,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+218,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+1249,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1437,"io_deq_ready", false,-1);
    tracep->declBit(c+220,"io_deq_valid", false,-1);
    tracep->declBit(c+221,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+220,"full", false,-1);
    tracep->declBit(c+221,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+222,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+1250,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1438,"io_deq_ready", false,-1);
    tracep->declBit(c+224,"io_deq_valid", false,-1);
    tracep->declBit(c+225,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+224,"full", false,-1);
    tracep->declBit(c+225,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+226,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+1251,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1439,"io_deq_ready", false,-1);
    tracep->declBit(c+228,"io_deq_valid", false,-1);
    tracep->declBit(c+229,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+228,"full", false,-1);
    tracep->declBit(c+229,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+230,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+1252,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1440,"io_deq_ready", false,-1);
    tracep->declBit(c+232,"io_deq_valid", false,-1);
    tracep->declBit(c+233,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+232,"full", false,-1);
    tracep->declBit(c+233,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+234,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+1253,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1441,"io_deq_ready", false,-1);
    tracep->declBit(c+236,"io_deq_valid", false,-1);
    tracep->declBit(c+237,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+236,"full", false,-1);
    tracep->declBit(c+237,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+238,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+239,"io_enq_ready", false,-1);
    tracep->declBit(c+1254,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1442,"io_deq_ready", false,-1);
    tracep->declBit(c+240,"io_deq_valid", false,-1);
    tracep->declBit(c+241,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+240,"full", false,-1);
    tracep->declBit(c+241,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+1255,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1443,"io_deq_ready", false,-1);
    tracep->declBit(c+244,"io_deq_valid", false,-1);
    tracep->declBit(c+245,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+244,"full", false,-1);
    tracep->declBit(c+245,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+246,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+1256,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1444,"io_deq_ready", false,-1);
    tracep->declBit(c+248,"io_deq_valid", false,-1);
    tracep->declBit(c+249,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+249,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+250,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+251,"io_enq_ready", false,-1);
    tracep->declBit(c+1257,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1445,"io_deq_ready", false,-1);
    tracep->declBit(c+252,"io_deq_valid", false,-1);
    tracep->declBit(c+253,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+252,"full", false,-1);
    tracep->declBit(c+253,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+254,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+1258,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1446,"io_deq_ready", false,-1);
    tracep->declBit(c+256,"io_deq_valid", false,-1);
    tracep->declBit(c+257,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+256,"full", false,-1);
    tracep->declBit(c+257,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+1259,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1447,"io_deq_ready", false,-1);
    tracep->declBit(c+260,"io_deq_valid", false,-1);
    tracep->declBit(c+261,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+260,"full", false,-1);
    tracep->declBit(c+261,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+262,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+263,"io_enq_ready", false,-1);
    tracep->declBit(c+1260,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1448,"io_deq_ready", false,-1);
    tracep->declBit(c+264,"io_deq_valid", false,-1);
    tracep->declBit(c+265,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->declBit(c+265,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+266,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+267,"io_enq_ready", false,-1);
    tracep->declBit(c+1261,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1449,"io_deq_ready", false,-1);
    tracep->declBit(c+268,"io_deq_valid", false,-1);
    tracep->declBit(c+269,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+268,"full", false,-1);
    tracep->declBit(c+269,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+270,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+271,"io_enq_ready", false,-1);
    tracep->declBit(c+1262,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1450,"io_deq_ready", false,-1);
    tracep->declBit(c+272,"io_deq_valid", false,-1);
    tracep->declBit(c+273,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+272,"full", false,-1);
    tracep->declBit(c+273,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+274,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+275,"io_enq_ready", false,-1);
    tracep->declBit(c+1263,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1451,"io_deq_ready", false,-1);
    tracep->declBit(c+276,"io_deq_valid", false,-1);
    tracep->declBit(c+277,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+276,"full", false,-1);
    tracep->declBit(c+277,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+278,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+279,"io_enq_ready", false,-1);
    tracep->declBit(c+1264,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1452,"io_deq_ready", false,-1);
    tracep->declBit(c+280,"io_deq_valid", false,-1);
    tracep->declBit(c+281,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+280,"full", false,-1);
    tracep->declBit(c+281,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+282,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+283,"io_enq_ready", false,-1);
    tracep->declBit(c+1265,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1453,"io_deq_ready", false,-1);
    tracep->declBit(c+284,"io_deq_valid", false,-1);
    tracep->declBit(c+285,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+285,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+286,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+287,"io_enq_ready", false,-1);
    tracep->declBit(c+1266,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1454,"io_deq_ready", false,-1);
    tracep->declBit(c+288,"io_deq_valid", false,-1);
    tracep->declBit(c+289,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+288,"full", false,-1);
    tracep->declBit(c+289,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+290,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+291,"io_enq_ready", false,-1);
    tracep->declBit(c+1267,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1455,"io_deq_ready", false,-1);
    tracep->declBit(c+292,"io_deq_valid", false,-1);
    tracep->declBit(c+293,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+292,"full", false,-1);
    tracep->declBit(c+293,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+294,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+295,"io_enq_ready", false,-1);
    tracep->declBit(c+1268,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1456,"io_deq_ready", false,-1);
    tracep->declBit(c+296,"io_deq_valid", false,-1);
    tracep->declBit(c+297,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+296,"full", false,-1);
    tracep->declBit(c+297,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+298,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+1269,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1457,"io_deq_ready", false,-1);
    tracep->declBit(c+300,"io_deq_valid", false,-1);
    tracep->declBit(c+301,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+300,"full", false,-1);
    tracep->declBit(c+301,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+302,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+303,"io_enq_ready", false,-1);
    tracep->declBit(c+1270,"io_enq_valid", false,-1);
    tracep->declBit(c+1154,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1458,"io_deq_ready", false,-1);
    tracep->declBit(c+304,"io_deq_valid", false,-1);
    tracep->declBit(c+305,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+304,"full", false,-1);
    tracep->declBit(c+305,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+306,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+307,"io_enq_ready", false,-1);
    tracep->declBit(c+1271,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1459,"io_deq_ready", false,-1);
    tracep->declBit(c+308,"io_deq_valid", false,-1);
    tracep->declBit(c+309,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+308,"full", false,-1);
    tracep->declBit(c+309,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+310,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+311,"io_enq_ready", false,-1);
    tracep->declBit(c+1272,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1460,"io_deq_ready", false,-1);
    tracep->declBit(c+312,"io_deq_valid", false,-1);
    tracep->declBit(c+313,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+312,"full", false,-1);
    tracep->declBit(c+313,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+314,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+315,"io_enq_ready", false,-1);
    tracep->declBit(c+1273,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1461,"io_deq_ready", false,-1);
    tracep->declBit(c+316,"io_deq_valid", false,-1);
    tracep->declBit(c+317,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+316,"full", false,-1);
    tracep->declBit(c+317,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+318,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+319,"io_enq_ready", false,-1);
    tracep->declBit(c+1274,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1462,"io_deq_ready", false,-1);
    tracep->declBit(c+320,"io_deq_valid", false,-1);
    tracep->declBit(c+321,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->declBit(c+321,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+323,"io_enq_ready", false,-1);
    tracep->declBit(c+1275,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1463,"io_deq_ready", false,-1);
    tracep->declBit(c+324,"io_deq_valid", false,-1);
    tracep->declBit(c+325,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+325,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+1276,"io_enq_valid", false,-1);
    tracep->declBit(c+1158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1464,"io_deq_ready", false,-1);
    tracep->declBit(c+328,"io_deq_valid", false,-1);
    tracep->declBit(c+329,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+328,"full", false,-1);
    tracep->declBit(c+329,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+330,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1579,"reset", false,-1);
    tracep->declBit(c+1181,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1182,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1142,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1143,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1573,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1183,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1147,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1184,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1381,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1382,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1574,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1383,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1185,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1137,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1140,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1141,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1186,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1384,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1385,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1575,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1576,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1386,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1579,"reset", false,-1);
    tracep->declBit(c+1629,"io_interrupt", false,-1);
    tracep->declBit(c+1181,"io_master_awready", false,-1);
    tracep->declBit(c+1182,"io_master_awvalid", false,-1);
    tracep->declBus(c+1142,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1143,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1144,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1573,"io_master_wready", false,-1);
    tracep->declBit(c+1183,"io_master_wvalid", false,-1);
    tracep->declBus(c+1147,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"io_master_wlast", false,-1);
    tracep->declBit(c+1184,"io_master_bready", false,-1);
    tracep->declBit(c+1381,"io_master_bvalid", false,-1);
    tracep->declBus(c+1382,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1574,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1383,"io_master_arready", false,-1);
    tracep->declBit(c+1185,"io_master_arvalid", false,-1);
    tracep->declBus(c+1137,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1139,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1140,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1141,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1186,"io_master_rready", false,-1);
    tracep->declBit(c+1384,"io_master_rvalid", false,-1);
    tracep->declBus(c+1385,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1575,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1576,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1386,"io_master_rlast", false,-1);
    tracep->declBit(c+1636,"io_slave_awready", false,-1);
    tracep->declBit(c+1629,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1637,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1638,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1639,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1631,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1620,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1640,"io_slave_wready", false,-1);
    tracep->declBit(c+1629,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1638,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1637,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1629,"io_slave_wlast", false,-1);
    tracep->declBit(c+1629,"io_slave_bready", false,-1);
    tracep->declBit(c+1641,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1642,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1643,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1644,"io_slave_arready", false,-1);
    tracep->declBit(c+1629,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1637,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1638,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1639,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1631,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1620,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1629,"io_slave_rready", false,-1);
    tracep->declBit(c+1645,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1646,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1647,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1648,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1649,"io_slave_rlast", false,-1);
    tracep->declBus(c+1011,"pc", false,-1, 31,0);
    tracep->declBit(c+1635,"pc_valid", false,-1);
    tracep->declBus(c+438,"snpc", false,-1, 31,0);
    tracep->declBus(c+1012,"inst_if", false,-1, 31,0);
    tracep->declBus(c+1013,"pc_if", false,-1, 31,0);
    tracep->declBit(c+1014,"if_valid", false,-1);
    tracep->declBit(c+1015,"if_ready", false,-1);
    tracep->declBus(c+1650,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1650,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1016,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1293,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1637,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1639,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+331,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1637,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1651,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+332,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1652,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1631,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+333,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1620,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+334,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1653,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1654,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1629,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1655,"if_axi_awready", false,-1);
    tracep->declBit(c+1629,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1656,"if_axi_wready", false,-1);
    tracep->declBit(c+1657,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1629,"if_axi_bready", false,-1);
    tracep->declBit(c+1017,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1294,"if_axi_arready", false,-1);
    tracep->declBit(c+1465,"if_axi_rvalid", false,-1);
    tracep->declBit(c+1018,"if_axi_rready", false,-1);
    tracep->declBit(c+1658,"if_axi_wlast", false,-1);
    tracep->declBit(c+1659,"if_axi_rlast", false,-1);
    tracep->declBus(c+1660,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1661,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+451,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1580,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1662,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1663,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+452,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1664,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1637,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1665,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1277,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1666,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+453,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1667,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+454,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1620,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1581,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1668,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+1629,"icache_axi_awready", false,-1);
    tracep->declBit(c+1669,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1629,"icache_axi_wready", false,-1);
    tracep->declBit(c+1629,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1670,"icache_axi_bready", false,-1);
    tracep->declBit(c+455,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1278,"icache_axi_arready", false,-1);
    tracep->declBit(c+1279,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+456,"icache_axi_rready", false,-1);
    tracep->declBit(c+1671,"icache_axi_wlast", false,-1);
    tracep->declBit(c+1466,"icache_axi_rlast", false,-1);
    tracep->declBus(c+878,"inst_id", false,-1, 31,0);
    tracep->declBit(c+1526,"id_valid", false,-1);
    tracep->declBit(c+1527,"id_ready", false,-1);
    tracep->declBus(c+1019,"prepc", false,-1, 31,0);
    tracep->declBit(c+1020,"prepc_en", false,-1);
    tracep->declBus(c+1021,"rs1", false,-1, 4,0);
    tracep->declBus(c+1022,"rs2", false,-1, 4,0);
    tracep->declBus(c+1023,"pc_id", false,-1, 31,0);
    tracep->declBus(c+879,"imm_id", false,-1, 31,0);
    tracep->declBus(c+1024,"op_id", false,-1, 6,0);
    tracep->declBus(c+1025,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+880,"rd_id", false,-1, 4,0);
    tracep->declBit(c+1026,"gpr_wen_id", false,-1);
    tracep->declBus(c+881,"alu_sel_id", false,-1, 3,0);
    tracep->declBus(c+882,"a_id", false,-1, 31,0);
    tracep->declBus(c+883,"b_id", false,-1, 31,0);
    tracep->declBus(c+335,"r1_id", false,-1, 31,0);
    tracep->declBus(c+1027,"r2_id", false,-1, 31,0);
    tracep->declBus(c+884,"csr_id", false,-1, 31,0);
    tracep->declBus(c+336,"mepc_id", false,-1, 31,0);
    tracep->declBus(c+337,"mtvec_id", false,-1, 31,0);
    tracep->declBus(c+885,"csrs_wen_id", false,-1, 3,0);
    tracep->declBit(c+886,"fencei_id", false,-1);
    tracep->declBus(c+887,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+888,"inst_ex", false,-1, 31,0);
    tracep->declBit(c+1028,"ex_ready", false,-1);
    tracep->declBit(c+1215,"ex_valid", false,-1);
    tracep->declBus(c+338,"op_ex", false,-1, 6,0);
    tracep->declBus(c+339,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+889,"rd_ex", false,-1, 4,0);
    tracep->declBit(c+1029,"gpr_wen_ex", false,-1);
    tracep->declBus(c+1030,"mepc_ex", false,-1, 31,0);
    tracep->declBus(c+1031,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+1032,"csrsw_ex", false,-1, 31,0);
    tracep->declBus(c+890,"csrs_wen_ex", false,-1, 3,0);
    tracep->declBus(c+891,"ex_ex", false,-1, 31,0);
    tracep->declBit(c+1033,"ls_valid_ex", false,-1);
    tracep->declBit(c+1034,"ls_wen_ex", false,-1);
    tracep->declBit(c+340,"ls_ren_ex", false,-1);
    tracep->declBus(c+1035,"ls_waddr_ex", false,-1, 31,0);
    tracep->declBus(c+1036,"ls_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+341,"ls_raddr_ex", false,-1, 31,0);
    tracep->declBus(c+1037,"ls_wmask_ex", false,-1, 3,0);
    tracep->declBus(c+1038,"ls_awsize_ex", false,-1, 2,0);
    tracep->declBus(c+1039,"ls_arsize_ex", false,-1, 2,0);
    tracep->declBus(c+1672,"ls_awburst_ex", false,-1, 1,0);
    tracep->declBus(c+1673,"ls_arburst_ex", false,-1, 1,0);
    tracep->declBus(c+892,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+457,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+458,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+459,"dnpc_ls", false,-1, 31,0);
    tracep->declBit(c+1295,"ls_ready", false,-1);
    tracep->declBit(c+1296,"ls_valid", false,-1);
    tracep->declBit(c+1297,"difftest", false,-1);
    tracep->declBus(c+1674,"xrd_ls", false,-1, 31,0);
    tracep->declBus(c+460,"rd_ls", false,-1, 4,0);
    tracep->declBit(c+461,"gpr_wen_ls", false,-1);
    tracep->declBus(c+968,"mepc_ls", false,-1, 31,0);
    tracep->declBus(c+969,"mcause_ls", false,-1, 31,0);
    tracep->declBus(c+970,"csrsw_ls", false,-1, 31,0);
    tracep->declBus(c+971,"csrs_wen_ls", false,-1, 3,0);
    tracep->declBus(c+1675,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+972,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1676,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1582,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1583,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+973,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+974,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+975,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1280,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+976,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1281,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+977,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+978,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+979,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+980,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1584,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1585,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1677,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1216,"ls_axi_awready", false,-1);
    tracep->declBit(c+1678,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1586,"ls_axi_wready", false,-1);
    tracep->declBit(c+1467,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+981,"ls_axi_bready", false,-1);
    tracep->declBit(c+1679,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1282,"ls_axi_arready", false,-1);
    tracep->declBit(c+1468,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+982,"ls_axi_rready", false,-1);
    tracep->declBit(c+983,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1283,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1680,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1681,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1217,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1587,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1682,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1683,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1218,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1684,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1685,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1219,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1686,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1687,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1220,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1688,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1221,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1689,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1690,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1691,"c_axi_awvalid", false,-1);
    tracep->declBit(c+1692,"c_axi_awready", false,-1);
    tracep->declBit(c+1693,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1694,"c_axi_wready", false,-1);
    tracep->declBit(c+1695,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1696,"c_axi_bready", false,-1);
    tracep->declBit(c+1222,"c_axi_arvalid", false,-1);
    tracep->declBit(c+342,"c_axi_arready", false,-1);
    tracep->declBit(c+893,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1223,"c_axi_rready", false,-1);
    tracep->declBit(c+1697,"c_axi_wlast", false,-1);
    tracep->declBit(c+1698,"c_axi_rlast", false,-1);
    tracep->declBus(c+1040,"r1", false,-1, 31,0);
    tracep->declBus(c+1041,"r2", false,-1, 31,0);
    tracep->declBus(c+894,"mepc", false,-1, 31,0);
    tracep->declBus(c+895,"mstatus", false,-1, 31,0);
    tracep->declBus(c+896,"mcause", false,-1, 31,0);
    tracep->declBus(c+897,"mtvec", false,-1, 31,0);
    tracep->declBus(c+898,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+899,"marchid", false,-1, 31,0);
    tracep->declBit(c+1528,"isRAW", false,-1);
    tracep->declBit(c+1529,"isCHazard", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1699,"n", false,-1, 31,0);
    tracep->declBus(c+1700,"w", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBus(c+1011,"pc_i", false,-1, 31,0);
    tracep->declBus(c+438,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+1019,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1013,"dnpc_tag_i", false,-1, 31,0);
    tracep->declBit(c+1020,"dnpc_en_i", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+343+i*1,"snpc_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+351+i*1,"tag_reg", true,(i+0), 28,0);
    }
    tracep->declBus(c+1042,"tag", false,-1, 28,0);
    tracep->declBus(c+1043,"index", false,-1, 0,0);
    tracep->declBus(c+1044,"dnpc_tag", false,-1, 28,0);
    tracep->declBus(c+1045,"dnpc_index", false,-1, 0,0);
    tracep->declBus(c+1046,"hit", false,-1, 3,0);
    tracep->declBus(c+1047,"already", false,-1, 3,0);
    tracep->declBit(c+359,"enable", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+360,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+361,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBit(c+1692,"c_axi_awready", false,-1);
    tracep->declBit(c+1691,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1684,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1680,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1683,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1687,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1688,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1694,"c_axi_wready", false,-1);
    tracep->declBit(c+1693,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1681,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1682,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1697,"c_axi_wlast", false,-1);
    tracep->declBit(c+1696,"c_axi_bready", false,-1);
    tracep->declBit(c+1695,"c_axi_bvalid", false,-1);
    tracep->declBus(c+1685,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1689,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+342,"c_axi_arready", false,-1);
    tracep->declBit(c+1222,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1219,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1217,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1218,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1220,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1223,"c_axi_rready", false,-1);
    tracep->declBit(c+893,"c_axi_rvalid", false,-1);
    tracep->declBus(c+1686,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1587,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1690,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1698,"c_axi_rlast", false,-1);
    tracep->declBus(c+1701,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1702,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+900,"mtime", false,-1, 63,0);
    tracep->declBus(c+1588,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBit(c+1529,"isCHazard", false,-1);
    tracep->declBus(c+878,"inst_i", false,-1, 31,0);
    tracep->declBus(c+887,"pc_o", false,-1, 31,0);
    tracep->declBus(c+888,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1526,"id_valid_i", false,-1);
    tracep->declBit(c+1028,"ex_ready_o", false,-1);
    tracep->declBit(c+1215,"ex_valid_o", false,-1);
    tracep->declBit(c+1295,"ls_ready_i", false,-1);
    tracep->declBus(c+1023,"pc_i", false,-1, 31,0);
    tracep->declBus(c+879,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1024,"op_i", false,-1, 6,0);
    tracep->declBus(c+1025,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+880,"rd_i", false,-1, 4,0);
    tracep->declBit(c+1026,"gpr_wen_i", false,-1);
    tracep->declBus(c+881,"alu_sel_i", false,-1, 3,0);
    tracep->declBus(c+882,"a_i", false,-1, 31,0);
    tracep->declBus(c+883,"b_i", false,-1, 31,0);
    tracep->declBus(c+335,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1027,"r2_i", false,-1, 31,0);
    tracep->declBus(c+884,"csr_i", false,-1, 31,0);
    tracep->declBus(c+336,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+337,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+885,"csrs_wen_i", false,-1, 3,0);
    tracep->declBus(c+338,"op_o", false,-1, 6,0);
    tracep->declBus(c+339,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+889,"rd_o", false,-1, 4,0);
    tracep->declBit(c+1029,"gpr_wen_o", false,-1);
    tracep->declBus(c+1030,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+1031,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1032,"csrsw_o", false,-1, 31,0);
    tracep->declBus(c+890,"csrs_wen_o", false,-1, 3,0);
    tracep->declBus(c+891,"ex_o", false,-1, 31,0);
    tracep->declBit(c+1033,"ls_valid_o", false,-1);
    tracep->declBit(c+1034,"ls_wen_o", false,-1);
    tracep->declBit(c+340,"ls_ren_o", false,-1);
    tracep->declBus(c+1035,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+1036,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+341,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+1037,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+1038,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1039,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+892,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+362,"ex_valid_reg", false,-1);
    tracep->declBus(c+1703,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1704,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1048,"state", false,-1);
    tracep->declBus(c+1589,"al_res", false,-1, 31,0);
    tracep->declBit(c+1590,"al_done", false,-1);
    tracep->declBus(c+1591,"ex", false,-1, 31,0);
    tracep->declBus(c+1049,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+1050,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+1051,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1050,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+1050,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+1052,"ls_valid", false,-1);
    tracep->declBit(c+1053,"ls_wen", false,-1);
    tracep->declBus(c+1054,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+1055,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+1056,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1057,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+1058,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1059,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+879,"offset", false,-1, 31,0);
    tracep->declBit(c+1060,"jalen", false,-1);
    tracep->declBit(c+1061,"jalren", false,-1);
    tracep->declBit(c+439,"beqen", false,-1);
    tracep->declBit(c+440,"bneen", false,-1);
    tracep->declBit(c+441,"blten", false,-1);
    tracep->declBit(c+442,"bgeen", false,-1);
    tracep->declBit(c+443,"bltuen", false,-1);
    tracep->declBit(c+444,"bgeuen", false,-1);
    tracep->declBit(c+1062,"ecall_en", false,-1);
    tracep->declBit(c+1592,"mret_en", false,-1);
    tracep->declBus(c+1063,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBus(c+882,"a", false,-1, 31,0);
    tracep->declBus(c+883,"b", false,-1, 31,0);
    tracep->declBus(c+881,"opcode", false,-1, 3,0);
    tracep->declBus(c+1589,"res", false,-1, 31,0);
    tracep->declBit(c+1590,"done", false,-1);
    tracep->declBus(c+1637,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1705,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1706,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1707,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1708,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1709,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1710,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1711,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1712,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1713,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1714,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1715,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1716,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1703,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1704,"EXECUTE", false,-1, 0,0);
    tracep->declBit(c+462,"state", false,-1);
    tracep->declQuad(c+463,"mul_result", false,-1, 63,0);
    tracep->declBus(c+465,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+466,"dividend", false,-1, 31,0);
    tracep->declBus(c+467,"divisor", false,-1, 31,0);
    tracep->declBus(c+468,"quotient", false,-1, 31,0);
    tracep->declBus(c+469,"remainder", false,-1, 31,0);
    tracep->declBus(c+470,"div_counter", false,-1, 5,0);
    tracep->declBit(c+471,"done_reg", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1717,"n", false,-1, 31,0);
    tracep->declBus(c+1717,"m", false,-1, 31,0);
    tracep->declBus(c+1699,"w", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBit(c+886,"fencei_i", false,-1);
    tracep->declBit(c+1655,"m_axi_awready", false,-1);
    tracep->declBit(c+1629,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1637,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1650,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1639,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1631,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1620,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1656,"m_axi_wready", false,-1);
    tracep->declBit(c+1629,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1650,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1637,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1658,"m_axi_wlast", false,-1);
    tracep->declBit(c+1629,"m_axi_bready", false,-1);
    tracep->declBit(c+1657,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1651,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1653,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1294,"m_axi_arready", false,-1);
    tracep->declBit(c+1017,"m_axi_arvalid", false,-1);
    tracep->declBus(c+332,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+331,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+333,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+334,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1018,"m_axi_rready", false,-1);
    tracep->declBit(c+1465,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1652,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1293,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1654,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1659,"m_axi_rlast", false,-1);
    tracep->declBit(c+1629,"s_axi_awready", false,-1);
    tracep->declBit(c+1668,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1664,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1660,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1663,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1666,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1667,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1629,"s_axi_wready", false,-1);
    tracep->declBit(c+1669,"s_axi_wvalid", false,-1);
    tracep->declBus(c+1661,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1662,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1671,"s_axi_wlast", false,-1);
    tracep->declBit(c+1670,"s_axi_bready", false,-1);
    tracep->declBit(c+1629,"s_axi_bvalid", false,-1);
    tracep->declBus(c+1637,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1620,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1278,"s_axi_arready", false,-1);
    tracep->declBit(c+455,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1665,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+451,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+452,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+453,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+454,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+456,"s_axi_rready", false,-1);
    tracep->declBit(c+1279,"s_axi_rvalid", false,-1);
    tracep->declBus(c+1277,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1580,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1581,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1466,"s_axi_rlast", false,-1);
    tracep->declBus(c+1717,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1718,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1719,"CACHE_WAY", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+472+i*1,"valid_reg", true,(i+0), 15,0);
    }
    tracep->declBus(c+1064,"tag", false,-1, 26,0);
    tracep->declBus(c+1065,"index", false,-1, 0,0);
    tracep->declBus(c+1066,"offset", false,-1, 1,0);
    tracep->declBus(c+476,"s_tag", false,-1, 26,0);
    tracep->declBus(c+477,"s_index", false,-1, 0,0);
    tracep->declBus(c+478,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1224,"access", false,-1, 7,0);
    tracep->declBus(c+479,"hit", false,-1, 7,0);
    tracep->declBus(c+1720,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBit(c+1469,"axi_rvalid", false,-1);
    tracep->declBit(c+363,"axi_rvalid_enable", false,-1);
    tracep->declBus(c+1703,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1704,"TRANS", false,-1, 0,0);
    tracep->declBit(c+480,"state", false,-1);
    tracep->declBus(c+481,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+482,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+483,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+484,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+485,"a", false,-1, 31,0);
    tracep->declBus(c+486,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBit(c+1528,"isRAW", false,-1);
    tracep->declBit(c+1529,"isCHazard", false,-1);
    tracep->declBus(c+878,"inst_o", false,-1, 31,0);
    tracep->declBus(c+1019,"prepc_o", false,-1, 31,0);
    tracep->declBit(c+1020,"prepc_en_o", false,-1);
    tracep->declBus(c+1021,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+1022,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+1040,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1041,"r2_i", false,-1, 31,0);
    tracep->declBus(c+894,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+895,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+896,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+897,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1014,"if_valid_i", false,-1);
    tracep->declBit(c+1527,"id_ready_o", false,-1);
    tracep->declBit(c+1526,"id_valid_o", false,-1);
    tracep->declBit(c+1028,"ex_ready_i", false,-1);
    tracep->declBus(c+1013,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1012,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1023,"pc_o", false,-1, 31,0);
    tracep->declBus(c+879,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1024,"op_o", false,-1, 6,0);
    tracep->declBus(c+1025,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+880,"rd_o", false,-1, 4,0);
    tracep->declBit(c+1026,"gpr_wen_o", false,-1);
    tracep->declBus(c+881,"alu_sel_o", false,-1, 3,0);
    tracep->declBus(c+882,"a_o", false,-1, 31,0);
    tracep->declBus(c+883,"b_o", false,-1, 31,0);
    tracep->declBus(c+335,"r1_o", false,-1, 31,0);
    tracep->declBus(c+1027,"r2_o", false,-1, 31,0);
    tracep->declBus(c+884,"csr_o", false,-1, 31,0);
    tracep->declBus(c+336,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+337,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+885,"csrs_wen_o", false,-1, 3,0);
    tracep->declBit(c+886,"fencei_o", false,-1);
    tracep->declBus(c+1703,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1704,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1067,"state", false,-1);
    tracep->declBus(c+1068,"op", false,-1, 6,0);
    tracep->declBus(c+1069,"rd", false,-1, 4,0);
    tracep->declBus(c+1070,"funct3", false,-1, 2,0);
    tracep->declBus(c+1071,"immI", false,-1, 31,0);
    tracep->declBus(c+1072,"immU", false,-1, 31,0);
    tracep->declBus(c+1073,"immS", false,-1, 31,0);
    tracep->declBus(c+1074,"immB", false,-1, 31,0);
    tracep->declBus(c+1075,"immJ", false,-1, 31,0);
    tracep->declBus(c+1076,"imm", false,-1, 31,0);
    tracep->declBus(c+1077,"funct7", false,-1, 6,0);
    tracep->declBus(c+1078,"shamt", false,-1, 4,0);
    tracep->declBit(c+1079,"gpr_wen", false,-1);
    tracep->declBus(c+1080,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+1081,"a", false,-1, 31,0);
    tracep->declBus(c+1082,"b", false,-1, 31,0);
    tracep->declBus(c+1637,"ADD", false,-1, 3,0);
    tracep->declBus(c+1705,"SUB", false,-1, 3,0);
    tracep->declBus(c+1706,"SLL", false,-1, 3,0);
    tracep->declBus(c+1707,"SRL", false,-1, 3,0);
    tracep->declBus(c+1708,"SRA", false,-1, 3,0);
    tracep->declBus(c+1709,"SLT", false,-1, 3,0);
    tracep->declBus(c+1710,"AND", false,-1, 3,0);
    tracep->declBus(c+1711,"OR", false,-1, 3,0);
    tracep->declBus(c+1712,"XOR", false,-1, 3,0);
    tracep->declBus(c+1713,"MUL", false,-1, 3,0);
    tracep->declBus(c+1714,"MULH", false,-1, 3,0);
    tracep->declBus(c+1715,"DIV", false,-1, 3,0);
    tracep->declBus(c+1716,"REM", false,-1, 3,0);
    tracep->declBus(c+1593,"csr", false,-1, 31,0);
    tracep->declBus(c+1083,"csrs_wen", false,-1, 3,0);
    tracep->declBit(c+1084,"fencei", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBit(c+1529,"isCHazard", false,-1);
    tracep->declBit(c+1635,"pc_valid_i", false,-1);
    tracep->declBit(c+1015,"if_ready_o", false,-1);
    tracep->declBit(c+1014,"if_valid_o", false,-1);
    tracep->declBit(c+1527,"id_ready_i", false,-1);
    tracep->declBus(c+1011,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1013,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1012,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1655,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1629,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1637,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1650,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1639,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1631,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1620,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1656,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1629,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1650,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1637,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1658,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1629,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1657,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1651,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1653,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1294,"if_axi_arready_i", false,-1);
    tracep->declBit(c+1017,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+332,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+1016,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+331,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+333,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+334,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1018,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1465,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1652,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1293,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1654,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1659,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1703,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1704,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1085,"state", false,-1);
    tracep->declBit(c+364,"isCHazard_reg", false,-1);
    tracep->declBus(c+1703,"AXI_IDLE", false,-1, 0,0);
    tracep->declBus(c+1704,"AXI_FETCH", false,-1, 0,0);
    tracep->declBit(c+1086,"axi_state", false,-1);
    tracep->declBus(c+1087,"axi_rdata_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBus(c+887,"pc_i", false,-1, 31,0);
    tracep->declBus(c+888,"inst_i", false,-1, 31,0);
    tracep->declBus(c+892,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+457,"pc_o", false,-1, 31,0);
    tracep->declBus(c+458,"inst_o", false,-1, 31,0);
    tracep->declBus(c+459,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+1594,"ex_valid_i", false,-1);
    tracep->declBit(c+1295,"ls_ready_o", false,-1);
    tracep->declBit(c+1296,"ls_valid_o", false,-1);
    tracep->declBit(c+1297,"difftest_o", false,-1);
    tracep->declBus(c+338,"op_i", false,-1, 6,0);
    tracep->declBus(c+339,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+889,"rd_i", false,-1, 4,0);
    tracep->declBit(c+1029,"gpr_wen_i", false,-1);
    tracep->declBus(c+1030,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+1031,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+1032,"csrsw_i", false,-1, 31,0);
    tracep->declBus(c+890,"csrs_wen_i", false,-1, 3,0);
    tracep->declBus(c+891,"ex_i", false,-1, 31,0);
    tracep->declBit(c+1033,"ls_valid_i", false,-1);
    tracep->declBit(c+1034,"ls_wen_i", false,-1);
    tracep->declBit(c+1088,"ls_ren_i", false,-1);
    tracep->declBus(c+1036,"ls_waddr_i", false,-1, 31,0);
    tracep->declBus(c+341,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1089,"ls_raddr_i", false,-1, 31,0);
    tracep->declBus(c+1090,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1039,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1721,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+487,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+488,"rd_o", false,-1, 4,0);
    tracep->declBit(c+984,"gpr_wen_o", false,-1);
    tracep->declBus(c+969,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+970,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+985,"csrsw_o", false,-1, 31,0);
    tracep->declBus(c+489,"csrs_wen_o", false,-1, 3,0);
    tracep->declBit(c+1677,"ls_axi_awready", false,-1);
    tracep->declBit(c+986,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1722,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+987,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+988,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+989,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+990,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1678,"ls_axi_wready", false,-1);
    tracep->declBit(c+991,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1595,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+992,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+981,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1467,"ls_axi_bready", false,-1);
    tracep->declBit(c+1470,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+1596,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1284,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1679,"ls_axi_arready", false,-1);
    tracep->declBit(c+993,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1723,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+994,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+995,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+996,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+997,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1468,"ls_axi_rready", false,-1);
    tracep->declBit(c+1285,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+1597,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1598,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1286,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1724,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1620,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1621,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1622,"DONE", false,-1, 1,0);
    tracep->declBus(c+1623,"DIFFTEST", false,-1, 1,0);
    tracep->declBus(c+1298,"state", false,-1, 1,0);
    tracep->declBus(c+1599,"xrd", false,-1, 31,0);
    tracep->declBit(c+998,"ls_done_reg", false,-1);
    tracep->declBit(c+998,"ls_done_o", false,-1);
    tracep->declBus(c+999,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1225,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+1631,"AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1619,"AXI_READ", false,-1, 2,0);
    tracep->declBus(c+1632,"AXI_WRITE1", false,-1, 2,0);
    tracep->declBus(c+1633,"AXI_WRITE2", false,-1, 2,0);
    tracep->declBus(c+1634,"AXI_DONE", false,-1, 2,0);
    tracep->declBus(c+1000,"axi_state", false,-1, 2,0);
    tracep->declBit(c+986,"axi_awvalid", false,-1);
    tracep->declBit(c+991,"axi_wvalid", false,-1);
    tracep->declBus(c+1722,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+987,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1001,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+988,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+989,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+990,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+992,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1002,"axi_bready", false,-1);
    tracep->declBit(c+981,"axi_wlast", false,-1);
    tracep->declBit(c+993,"axi_arvalid", false,-1);
    tracep->declBit(c+1003,"axi_rready", false,-1);
    tracep->declBus(c+1723,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+994,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+995,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+996,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+997,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBit(c+1529,"isCHazard", false,-1);
    tracep->declBus(c+1011,"pc_o", false,-1, 31,0);
    tracep->declBus(c+892,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+438,"snpc_i", false,-1, 31,0);
    tracep->declBit(c+1635,"pc_valid_o", false,-1);
    tracep->declBit(c+1015,"if_ready_i", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1717,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1725,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBus(c+1674,"wdata", false,-1, 31,0);
    tracep->declBus(c+490,"waddr", false,-1, 3,0);
    tracep->declBit(c+461,"wen", false,-1);
    tracep->declBus(c+1091,"raddr1", false,-1, 3,0);
    tracep->declBus(c+1040,"r1", false,-1, 31,0);
    tracep->declBus(c+1092,"raddr2", false,-1, 3,0);
    tracep->declBus(c+1041,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+365+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBit(c+1629,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1668,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1664,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1660,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1663,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1666,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1667,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1629,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1669,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1661,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1662,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1671,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1670,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+1629,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+1637,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1620,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1278,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+455,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1665,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+451,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+452,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+453,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+454,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+456,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1279,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+1277,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1580,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1581,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1466,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1216,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1677,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+975,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1675,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+973,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+977,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+979,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1586,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1678,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+972,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1583,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+983,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+981,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1467,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+1280,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1584,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1282,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1679,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+976,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1676,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+974,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+978,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+980,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+982,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1468,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+1281,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1582,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1585,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1283,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1181,"io_master_awready", false,-1);
    tracep->declBit(c+1182,"io_master_awvalid", false,-1);
    tracep->declBus(c+1142,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1143,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1144,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1145,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1573,"io_master_wready", false,-1);
    tracep->declBit(c+1183,"io_master_wvalid", false,-1);
    tracep->declBus(c+1147,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1148,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"io_master_wlast", false,-1);
    tracep->declBit(c+1184,"io_master_bready", false,-1);
    tracep->declBit(c+1381,"io_master_bvalid", false,-1);
    tracep->declBus(c+1382,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1574,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1383,"io_master_arready", false,-1);
    tracep->declBit(c+1185,"io_master_arvalid", false,-1);
    tracep->declBus(c+1137,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1139,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1140,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1141,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1186,"io_master_rready", false,-1);
    tracep->declBit(c+1384,"io_master_rvalid", false,-1);
    tracep->declBus(c+1385,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1575,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1576,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1386,"io_master_rlast", false,-1);
    tracep->declBit(c+1692,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1691,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1684,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1680,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1683,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1687,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1688,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1694,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1693,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1681,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1682,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1697,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1696,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+1695,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+1685,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1689,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+342,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1222,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1219,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1217,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1218,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1220,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1221,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1223,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+893,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+1686,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1587,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1690,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1698,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+898,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+899,"marchid", false,-1, 31,0);
    tracep->declBus(c+1143,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1147,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1226,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1600,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1148,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1144,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1227,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1142,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1382,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1228,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1287,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1145,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1229,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1146,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1230,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1574,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1601,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1182,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1181,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1183,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1573,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1381,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1184,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1149,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1231,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1471,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1472,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1232,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1288,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+381,"state", false,-1, 1,0);
    tracep->declBus(c+1233,"sel_m", false,-1, 1,0);
    tracep->declBus(c+1620,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1621,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1622,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1701,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1702,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1234,"sel_clint", false,-1);
    tracep->declBus(c+1726,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1727,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1235,"sel_mvendorid", false,-1);
    tracep->declBit(c+1236,"sel_marchid", false,-1);
    tracep->declBit(c+1237,"sel_id", false,-1);
    tracep->declBus(c+1602,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBit(c+1635,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1635,"I_AXI_RVALID", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1725,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1728,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBus(c+1638,"din", false,-1, 31,0);
    tracep->declBus(c+899,"dout", false,-1, 31,0);
    tracep->declBit(c+1629,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1725,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1638,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBus(c+969,"din", false,-1, 31,0);
    tracep->declBus(c+896,"dout", false,-1, 31,0);
    tracep->declBit(c+1004,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1725,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1638,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBus(c+968,"din", false,-1, 31,0);
    tracep->declBus(c+894,"dout", false,-1, 31,0);
    tracep->declBit(c+1005,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1725,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1729,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBus(c+970,"din", false,-1, 31,0);
    tracep->declBus(c+895,"dout", false,-1, 31,0);
    tracep->declBit(c+1006,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1725,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1638,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBus(c+970,"din", false,-1, 31,0);
    tracep->declBus(c+897,"dout", false,-1, 31,0);
    tracep->declBit(c+1007,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1725,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1730,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1579,"rst", false,-1);
    tracep->declBus(c+1638,"din", false,-1, 31,0);
    tracep->declBus(c+898,"dout", false,-1, 31,0);
    tracep->declBit(c+1629,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"io_d", false,-1);
    tracep->declBit(c+382,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"io_d", false,-1);
    tracep->declBit(c+382,"io_q", false,-1);
    tracep->declBit(c+382,"sync_0", false,-1);
    tracep->declBit(c+383,"sync_1", false,-1);
    tracep->declBit(c+384,"sync_2", false,-1);
    tracep->declBit(c+385,"sync_3", false,-1);
    tracep->declBit(c+386,"sync_4", false,-1);
    tracep->declBit(c+387,"sync_5", false,-1);
    tracep->declBit(c+388,"sync_6", false,-1);
    tracep->declBit(c+389,"sync_7", false,-1);
    tracep->declBit(c+390,"sync_8", false,-1);
    tracep->declBit(c+391,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1317,"auto_in_psel", false,-1);
    tracep->declBit(c+1318,"auto_in_penable", false,-1);
    tracep->declBit(c+1307,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1242,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1306,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+497,"auto_in_pready", false,-1);
    tracep->declBit(c+1628,"auto_in_pslverr", false,-1);
    tracep->declBus(c+928,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1536,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1537,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1538,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1539,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1540,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1541,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1542,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1543,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1544,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1545,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBus(c+1289,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1317,"in_psel", false,-1);
    tracep->declBit(c+1318,"in_penable", false,-1);
    tracep->declBus(c+1306,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1307,"in_pwrite", false,-1);
    tracep->declBus(c+1308,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+497,"in_pready", false,-1);
    tracep->declBus(c+928,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1628,"in_pslverr", false,-1);
    tracep->declBus(c+1536,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1537,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1538,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1539,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1540,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1541,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1542,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1543,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1544,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1545,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1639,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1731,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1732,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1733,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1734,"ONE", false,-1, 7,0);
    tracep->declBus(c+1735,"TWO", false,-1, 7,0);
    tracep->declBus(c+1736,"THREE", false,-1, 7,0);
    tracep->declBus(c+1737,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1738,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1739,"SIX", false,-1, 7,0);
    tracep->declBus(c+1740,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1741,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1742,"NINE", false,-1, 7,0);
    tracep->declBus(c+1743,"A", false,-1, 7,0);
    tracep->declBus(c+1744,"B", false,-1, 7,0);
    tracep->declBus(c+1745,"C", false,-1, 7,0);
    tracep->declBus(c+1746,"D", false,-1, 7,0);
    tracep->declBus(c+1747,"E", false,-1, 7,0);
    tracep->declBus(c+1748,"F", false,-1, 7,0);
    tracep->declBus(c+507,"led_reg", false,-1, 15,0);
    tracep->declBus(c+930,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+508+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1473,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1474,"write_en", false,-1);
    tracep->declBit(c+1475,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1315,"auto_in_psel", false,-1);
    tracep->declBit(c+1316,"auto_in_penable", false,-1);
    tracep->declBit(c+1307,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1242,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1306,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+496,"auto_in_pready", false,-1);
    tracep->declBit(c+1627,"auto_in_pslverr", false,-1);
    tracep->declBus(c+927,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1546,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1547,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBus(c+1289,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1315,"in_psel", false,-1);
    tracep->declBit(c+1316,"in_penable", false,-1);
    tracep->declBus(c+1306,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1307,"in_pwrite", false,-1);
    tracep->declBus(c+1308,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+496,"in_pready", false,-1);
    tracep->declBus(c+927,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1627,"in_pslverr", false,-1);
    tracep->declBit(c+1546,"ps2_clk", false,-1);
    tracep->declBit(c+1547,"ps2_data", false,-1);
    tracep->declBus(c+1749,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1750,"EXP", false,-1, 7,0);
    tracep->declBus(c+1299,"state", false,-1, 1,0);
    tracep->declBus(c+1300,"counter", false,-1, 3,0);
    tracep->declBus(c+1301,"buffer", false,-1, 7,0);
    tracep->declBus(c+1302,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1303,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1603,"ready", false,-1);
    tracep->declBus(c+1604,"rdata", false,-1, 31,0);
    tracep->declBit(c+1476,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1197,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1198,"auto_in_wvalid", false,-1);
    tracep->declBit(c+148,"auto_in_arready", false,-1);
    tracep->declBit(c+1199,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1133,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1200,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+450,"auto_in_rready", false,-1);
    tracep->declBit(c+149,"auto_in_rvalid", false,-1);
    tracep->declBus(c+150,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+877,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+149,"state", false,-1);
    tracep->declBus(c+877,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+150,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1238,"raddr", false,-1, 31,0);
    tracep->declBit(c+1239,"ren", false,-1);
    tracep->declBus(c+1240,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1319,"auto_in_psel", false,-1);
    tracep->declBit(c+1320,"auto_in_penable", false,-1);
    tracep->declBit(c+1307,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1241,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+772,"auto_in_pready", false,-1);
    tracep->declBit(c+1629,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1008,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1530,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1531,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1557,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBus(c+1241,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1319,"in_psel", false,-1);
    tracep->declBit(c+1320,"in_penable", false,-1);
    tracep->declBus(c+1306,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1307,"in_pwrite", false,-1);
    tracep->declBus(c+1308,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+772,"in_pready", false,-1);
    tracep->declBus(c+1008,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1629,"in_pslverr", false,-1);
    tracep->declBit(c+1530,"qspi_sck", false,-1);
    tracep->declBit(c+1531,"qspi_ce_n", false,-1);
    tracep->declBus(c+1557,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1557,"din", false,-1, 3,0);
    tracep->declBus(c+1532,"dout", false,-1, 3,0);
    tracep->declBus(c+1533,"douten", false,-1, 3,0);
    tracep->declBit(c+775,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1534,"clk_i", false,-1);
    tracep->declBit(c+1535,"rst_i", false,-1);
    tracep->declBus(c+1241,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1308,"dat_i", false,-1, 31,0);
    tracep->declBus(c+1008,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1309,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1319,"cyc_i", false,-1);
    tracep->declBit(c+1319,"stb_i", false,-1);
    tracep->declBit(c+775,"ack_o", false,-1);
    tracep->declBit(c+1307,"we_i", false,-1);
    tracep->declBit(c+1530,"sck", false,-1);
    tracep->declBit(c+1531,"ce_n", false,-1);
    tracep->declBus(c+1557,"din", false,-1, 3,0);
    tracep->declBus(c+1532,"dout", false,-1, 3,0);
    tracep->declBus(c+1533,"douten", false,-1, 3,0);
    tracep->declBus(c+1703,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1704,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+516,"mr_sck", false,-1);
    tracep->declBit(c+517,"mr_ce_n", false,-1);
    tracep->declBus(c+1557,"mr_din", false,-1, 3,0);
    tracep->declBus(c+518,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+519,"mr_doe", false,-1);
    tracep->declBit(c+520,"mw_sck", false,-1);
    tracep->declBit(c+521,"mw_ce_n", false,-1);
    tracep->declBus(c+1557,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1477,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+522,"mw_doe", false,-1);
    tracep->declBit(c+1478,"mr_rd", false,-1);
    tracep->declBit(c+523,"mr_done", false,-1);
    tracep->declBit(c+1479,"mw_wr", false,-1);
    tracep->declBit(c+1480,"mw_done", false,-1);
    tracep->declBit(c+1319,"wb_valid", false,-1);
    tracep->declBit(c+1481,"wb_we", false,-1);
    tracep->declBit(c+1482,"wb_re", false,-1);
    tracep->declBit(c+524,"state", false,-1);
    tracep->declBit(c+1483,"nstate", false,-1);
    tracep->declBus(c+1484,"size", false,-1, 2,0);
    tracep->declBus(c+1485,"byte0", false,-1, 7,0);
    tracep->declBus(c+1486,"byte1", false,-1, 7,0);
    tracep->declBus(c+1487,"byte2", false,-1, 7,0);
    tracep->declBus(c+1488,"byte3", false,-1, 7,0);
    tracep->declBus(c+1290,"wdata", false,-1, 31,0);
    tracep->declBit(c+777,"qpi_flag", false,-1);
    tracep->declBit(c+778,"qpi_sck", false,-1);
    tracep->declBit(c+779,"qpi_ce_n", false,-1);
    tracep->declBus(c+780,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+781,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+782,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1605,"rst_n", false,-1);
    tracep->declBus(c+1291,"addr", false,-1, 23,0);
    tracep->declBit(c+1478,"rd", false,-1);
    tracep->declBus(c+1634,"size", false,-1, 2,0);
    tracep->declBit(c+523,"done", false,-1);
    tracep->declBus(c+1008,"line", false,-1, 31,0);
    tracep->declBit(c+516,"sck", false,-1);
    tracep->declBit(c+517,"ce_n", false,-1);
    tracep->declBus(c+1557,"din", false,-1, 3,0);
    tracep->declBus(c+518,"dout", false,-1, 3,0);
    tracep->declBit(c+519,"douten", false,-1);
    tracep->declBus(c+1703,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1704,"READ", false,-1, 0,0);
    tracep->declBus(c+1751,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+525,"state", false,-1);
    tracep->declBit(c+1489,"nstate", false,-1);
    tracep->declBus(c+526,"counter", false,-1, 7,0);
    tracep->declBus(c+527,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1093+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1752,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+528,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1605,"rst_n", false,-1);
    tracep->declBus(c+1292,"addr", false,-1, 23,0);
    tracep->declBus(c+1290,"line", false,-1, 31,0);
    tracep->declBus(c+1484,"size", false,-1, 2,0);
    tracep->declBit(c+1479,"wr", false,-1);
    tracep->declBit(c+1480,"done", false,-1);
    tracep->declBit(c+520,"sck", false,-1);
    tracep->declBit(c+521,"ce_n", false,-1);
    tracep->declBus(c+1557,"din", false,-1, 3,0);
    tracep->declBus(c+1477,"dout", false,-1, 3,0);
    tracep->declBit(c+522,"douten", false,-1);
    tracep->declBus(c+1703,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1704,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1490,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+529,"state", false,-1);
    tracep->declBit(c+1491,"nstate", false,-1);
    tracep->declBus(c+530,"counter", false,-1, 7,0);
    tracep->declBus(c+531,"saddr", false,-1, 23,0);
    tracep->declBus(c+1753,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1348,"auto_in_awready", false,-1);
    tracep->declBit(c+1630,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1349,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1350,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1564,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1352,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1353,"auto_in_wready", false,-1);
    tracep->declBit(c+1354,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1565,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1566,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1567,"auto_in_wlast", false,-1);
    tracep->declBit(c+1568,"auto_in_bready", false,-1);
    tracep->declBit(c+1106,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1103,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1620,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1341,"auto_in_arready", false,-1);
    tracep->declBit(c+1342,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1343,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1344,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1345,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1243,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1346,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1347,"auto_in_rready", false,-1);
    tracep->declBit(c+1102,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1103,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1104,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1620,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1105,"auto_in_rlast", false,-1);
    tracep->declBit(c+1558,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+493,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+914,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+915,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+916,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+917,"sdram_bundle_we", false,-1);
    tracep->declBus(c+918,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+919,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+494,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+954,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1348,"in_awready", false,-1);
    tracep->declBit(c+1630,"in_awvalid", false,-1);
    tracep->declBus(c+1350,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1349,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1351,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1564,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1352,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1353,"in_wready", false,-1);
    tracep->declBit(c+1354,"in_wvalid", false,-1);
    tracep->declBus(c+1565,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1566,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1567,"in_wlast", false,-1);
    tracep->declBit(c+1568,"in_bready", false,-1);
    tracep->declBit(c+1106,"in_bvalid", false,-1);
    tracep->declBus(c+1620,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1103,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1341,"in_arready", false,-1);
    tracep->declBit(c+1342,"in_arvalid", false,-1);
    tracep->declBus(c+1344,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1343,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1345,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1243,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1346,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1347,"in_rready", false,-1);
    tracep->declBit(c+1102,"in_rvalid", false,-1);
    tracep->declBus(c+1620,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1104,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1105,"in_rlast", false,-1);
    tracep->declBus(c+1103,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1558,"sdram_clk", false,-1);
    tracep->declBit(c+493,"sdram_cke", false,-1);
    tracep->declBit(c+914,"sdram_cs", false,-1);
    tracep->declBit(c+915,"sdram_ras", false,-1);
    tracep->declBit(c+916,"sdram_cas", false,-1);
    tracep->declBit(c+917,"sdram_we", false,-1);
    tracep->declBus(c+918,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+919,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+494,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+954,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+532,"sdram_dout_en", false,-1);
    tracep->declBus(c+533,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1534,"clk_i", false,-1);
    tracep->declBit(c+1535,"rst_i", false,-1);
    tracep->declBit(c+1630,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1350,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1349,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1351,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1352,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1354,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1565,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1566,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1567,"inport_wlast_i", false,-1);
    tracep->declBit(c+1568,"inport_bready_i", false,-1);
    tracep->declBit(c+1342,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1344,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1343,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1345,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1346,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1347,"inport_rready_i", false,-1);
    tracep->declBus(c+954,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1348,"inport_awready_o", false,-1);
    tracep->declBit(c+1353,"inport_wready_o", false,-1);
    tracep->declBit(c+1106,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1620,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1103,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1341,"inport_arready_o", false,-1);
    tracep->declBit(c+1102,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1104,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1620,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1103,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1105,"inport_rlast_o", false,-1);
    tracep->declBit(c+1558,"sdram_clk_o", false,-1);
    tracep->declBit(c+493,"sdram_cke_o", false,-1);
    tracep->declBit(c+914,"sdram_cs_o", false,-1);
    tracep->declBit(c+915,"sdram_ras_o", false,-1);
    tracep->declBit(c+916,"sdram_cas_o", false,-1);
    tracep->declBit(c+917,"sdram_we_o", false,-1);
    tracep->declBus(c+494,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+918,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+919,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+533,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+532,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1754,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1755,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1756,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1700,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1492,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1493,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1494,"ram_rd_w", false,-1);
    tracep->declBit(c+931,"ram_accept_w", false,-1);
    tracep->declBus(c+1565,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+534,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1495,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+535,"ram_ack_w", false,-1);
    tracep->declBit(c+1629,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1534,"clk_i", false,-1);
    tracep->declBit(c+1535,"rst_i", false,-1);
    tracep->declBit(c+1630,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1350,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1349,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1351,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1352,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1354,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1565,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1566,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1567,"axi_wlast_i", false,-1);
    tracep->declBit(c+1568,"axi_bready_i", false,-1);
    tracep->declBit(c+1342,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1344,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1343,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1345,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1346,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1347,"axi_rready_i", false,-1);
    tracep->declBit(c+931,"ram_accept_i", false,-1);
    tracep->declBit(c+535,"ram_ack_i", false,-1);
    tracep->declBit(c+1629,"ram_error_i", false,-1);
    tracep->declBus(c+534,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1348,"axi_awready_o", false,-1);
    tracep->declBit(c+1353,"axi_wready_o", false,-1);
    tracep->declBit(c+1106,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1620,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1103,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1341,"axi_arready_o", false,-1);
    tracep->declBit(c+1102,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1104,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1620,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1103,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1105,"axi_rlast_o", false,-1);
    tracep->declBus(c+1493,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1494,"ram_rd_o", false,-1);
    tracep->declBus(c+1495,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1492,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1565,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+536,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+537,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+538,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+539,"req_rd_q", false,-1);
    tracep->declBit(c+540,"req_wr_q", false,-1);
    tracep->declBus(c+541,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+542,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+543,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+544,"req_prio_q", false,-1);
    tracep->declBit(c+545,"req_hold_rd_q", false,-1);
    tracep->declBit(c+546,"req_hold_wr_q", false,-1);
    tracep->declBit(c+547,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1496,"req_push_w", false,-1);
    tracep->declBus(c+776,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+548,"req_out_valid_w", false,-1);
    tracep->declBus(c+1117,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1497,"resp_accept_w", false,-1);
    tracep->declBit(c+1606,"resp_is_write_w", false,-1);
    tracep->declBit(c+1607,"resp_is_read_w", false,-1);
    tracep->declBit(c+1105,"resp_is_last_w", false,-1);
    tracep->declBus(c+1103,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+549,"resp_valid_w", false,-1);
    tracep->declBit(c+550,"write_prio_w", false,-1);
    tracep->declBit(c+551,"read_prio_w", false,-1);
    tracep->declBit(c+1498,"write_active_w", false,-1);
    tracep->declBit(c+1494,"read_active_w", false,-1);
    tracep->declBus(c+1492,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1499,"wr_w", false,-1);
    tracep->declBit(c+1494,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1757,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1717,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1700,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1534,"clk_i", false,-1);
    tracep->declBit(c+1535,"rst_i", false,-1);
    tracep->declBus(c+776,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1496,"push_i", false,-1);
    tracep->declBit(c+1497,"pop_i", false,-1);
    tracep->declBus(c+1117,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+547,"accept_o", false,-1);
    tracep->declBit(c+548,"valid_o", false,-1);
    tracep->declBus(c+1699,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+552+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+556,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+557,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+558,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1725,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1717,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1700,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1534,"clk_i", false,-1);
    tracep->declBit(c+1535,"rst_i", false,-1);
    tracep->declBus(c+534,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+535,"push_i", false,-1);
    tracep->declBit(c+1497,"pop_i", false,-1);
    tracep->declBus(c+1104,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+559,"accept_o", false,-1);
    tracep->declBit(c+549,"valid_o", false,-1);
    tracep->declBus(c+1699,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+560+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+564,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+565,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+566,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1534,"clk_i", false,-1);
    tracep->declBit(c+1535,"rst_i", false,-1);
    tracep->declBus(c+1493,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1494,"inport_rd_i", false,-1);
    tracep->declBus(c+1495,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1492,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1565,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+954,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+931,"inport_accept_o", false,-1);
    tracep->declBit(c+535,"inport_ack_o", false,-1);
    tracep->declBit(c+1629,"inport_error_o", false,-1);
    tracep->declBus(c+534,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1558,"sdram_clk_o", false,-1);
    tracep->declBit(c+493,"sdram_cke_o", false,-1);
    tracep->declBit(c+914,"sdram_cs_o", false,-1);
    tracep->declBit(c+915,"sdram_ras_o", false,-1);
    tracep->declBit(c+916,"sdram_cas_o", false,-1);
    tracep->declBit(c+917,"sdram_we_o", false,-1);
    tracep->declBus(c+494,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+918,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+919,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+533,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+532,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1754,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1755,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1756,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1700,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1699,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1717,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1719,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1758,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1759,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1760,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1761,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1717,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1711,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1707,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1709,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1708,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1710,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1706,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1705,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1637,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1762,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1717,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1637,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1705,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1706,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1707,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1708,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1709,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1710,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1711,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1712,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1713,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1763,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1763,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1725,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1763,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1700,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1700,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1757,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1492,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1493,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1494,"ram_rd_w", false,-1);
    tracep->declBit(c+931,"ram_accept_w", false,-1);
    tracep->declBus(c+1565,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+534,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+535,"ram_ack_w", false,-1);
    tracep->declBit(c+1500,"ram_req_w", false,-1);
    tracep->declBus(c+932,"command_q", false,-1, 3,0);
    tracep->declBus(c+918,"addr_q", false,-1, 12,0);
    tracep->declBus(c+533,"data_q", false,-1, 31,0);
    tracep->declBit(c+567,"data_rd_en_q", false,-1);
    tracep->declBus(c+494,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+493,"cke_q", false,-1);
    tracep->declBus(c+919,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1764,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+568,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+954,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+569,"refresh_q", false,-1);
    tracep->declBus(c+933,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+570+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+934,"state_q", false,-1, 3,0);
    tracep->declBus(c+1501,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1502,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+578,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+579,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1503,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1504,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1505,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1717,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+580,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1506,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1765,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+935,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+581,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+534,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+582,"idx", false,-1, 31,0);
    tracep->declBus(c+583,"rd_q", false,-1, 3,0);
    tracep->declBit(c+535,"ack_q", false,-1);
    tracep->declArray(c+936,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1325,"auto_in_psel", false,-1);
    tracep->declBit(c+1326,"auto_in_penable", false,-1);
    tracep->declBit(c+1307,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1314,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1306,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1560,"auto_in_pready", false,-1);
    tracep->declBit(c+1629,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1327,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+491,"spi_bundle_sck", false,-1);
    tracep->declBus(c+492,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+913,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1556,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1766,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1767,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1719,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBus(c+1507,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1325,"in_psel", false,-1);
    tracep->declBit(c+1326,"in_penable", false,-1);
    tracep->declBus(c+1306,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1307,"in_pwrite", false,-1);
    tracep->declBus(c+1308,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1560,"in_pready", false,-1);
    tracep->declBus(c+1327,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1629,"in_pslverr", false,-1);
    tracep->declBit(c+491,"spi_sck", false,-1);
    tracep->declBus(c+492,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+913,"spi_mosi", false,-1);
    tracep->declBit(c+1556,"spi_miso", false,-1);
    tracep->declBit(c+584,"spi_irq_out", false,-1);
    tracep->declBus(c+1508,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1509,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1510,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1511,"wb_we_i", false,-1);
    tracep->declBit(c+1512,"wb_stb_i", false,-1);
    tracep->declBit(c+1513,"wb_cyc_i", false,-1);
    tracep->declBit(c+585,"wb_ack_o", false,-1);
    tracep->declBus(c+586,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1631,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1619,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1632,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1633,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1634,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1768,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1769,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1770,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+392,"state", false,-1, 2,0);
    tracep->declBus(c+393,"next_state", false,-1, 2,0);
    tracep->declBus(c+394,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+395,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+396,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+397,"flash_pwrite", false,-1);
    tracep->declBit(c+398,"flash_psel", false,-1);
    tracep->declBit(c+399,"flash_penable", false,-1);
    tracep->declBit(c+400,"flash_pready", false,-1);
    tracep->declBus(c+401,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1771,"Tp", false,-1, 31,0);
    tracep->declBit(c+1534,"wb_clk_i", false,-1);
    tracep->declBit(c+1535,"wb_rst_i", false,-1);
    tracep->declBus(c+1508,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1509,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+586,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1510,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1511,"wb_we_i", false,-1);
    tracep->declBit(c+1512,"wb_stb_i", false,-1);
    tracep->declBit(c+1513,"wb_cyc_i", false,-1);
    tracep->declBit(c+585,"wb_ack_o", false,-1);
    tracep->declBit(c+1629,"wb_err_o", false,-1);
    tracep->declBit(c+584,"wb_int_o", false,-1);
    tracep->declBus(c+492,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+491,"sclk_pad_o", false,-1);
    tracep->declBit(c+913,"mosi_pad_o", false,-1);
    tracep->declBit(c+1556,"miso_pad_i", false,-1);
    tracep->declBus(c+587,"divider", false,-1, 15,0);
    tracep->declBus(c+588,"ctrl", false,-1, 13,0);
    tracep->declBus(c+589,"ss", false,-1, 7,0);
    tracep->declBus(c+1514,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+590,"rx", false,-1, 127,0);
    tracep->declBit(c+594,"rx_negedge", false,-1);
    tracep->declBit(c+595,"tx_negedge", false,-1);
    tracep->declBus(c+596,"char_len", false,-1, 6,0);
    tracep->declBit(c+597,"go", false,-1);
    tracep->declBit(c+598,"lsb", false,-1);
    tracep->declBit(c+599,"ie", false,-1);
    tracep->declBit(c+600,"ass", false,-1);
    tracep->declBit(c+1515,"spi_divider_sel", false,-1);
    tracep->declBit(c+1516,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1517,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1518,"spi_ss_sel", false,-1);
    tracep->declBit(c+601,"tip", false,-1);
    tracep->declBit(c+602,"pos_edge", false,-1);
    tracep->declBit(c+603,"neg_edge", false,-1);
    tracep->declBit(c+604,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1771,"Tp", false,-1, 31,0);
    tracep->declBit(c+1534,"clk_in", false,-1);
    tracep->declBit(c+1535,"rst", false,-1);
    tracep->declBit(c+601,"enable", false,-1);
    tracep->declBit(c+597,"go", false,-1);
    tracep->declBit(c+604,"last_clk", false,-1);
    tracep->declBus(c+587,"divider", false,-1, 15,0);
    tracep->declBit(c+491,"clk_out", false,-1);
    tracep->declBit(c+602,"pos_edge", false,-1);
    tracep->declBit(c+603,"neg_edge", false,-1);
    tracep->declBus(c+605,"cnt", false,-1, 15,0);
    tracep->declBit(c+606,"cnt_zero", false,-1);
    tracep->declBit(c+607,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1771,"Tp", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1535,"rst", false,-1);
    tracep->declBus(c+1519,"latch", false,-1, 3,0);
    tracep->declBus(c+1510,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+596,"len", false,-1, 6,0);
    tracep->declBit(c+598,"lsb", false,-1);
    tracep->declBit(c+597,"go", false,-1);
    tracep->declBit(c+602,"pos_edge", false,-1);
    tracep->declBit(c+603,"neg_edge", false,-1);
    tracep->declBit(c+594,"rx_negedge", false,-1);
    tracep->declBit(c+595,"tx_negedge", false,-1);
    tracep->declBit(c+601,"tip", false,-1);
    tracep->declBit(c+604,"last", false,-1);
    tracep->declBus(c+1509,"p_in", false,-1, 31,0);
    tracep->declArray(c+590,"p_out", false,-1, 127,0);
    tracep->declBit(c+491,"s_clk", false,-1);
    tracep->declBit(c+1556,"s_in", false,-1);
    tracep->declBit(c+913,"s_out", false,-1);
    tracep->declBus(c+608,"cnt", false,-1, 7,0);
    tracep->declArray(c+590,"data", false,-1, 127,0);
    tracep->declBus(c+609,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+610,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+611,"rx_clk", false,-1);
    tracep->declBit(c+612,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1321,"auto_in_psel", false,-1);
    tracep->declBit(c+1322,"auto_in_penable", false,-1);
    tracep->declBit(c+1307,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1242,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1306,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1323,"auto_in_pready", false,-1);
    tracep->declBit(c+1629,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1324,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1554,"uart_rx", false,-1);
    tracep->declBit(c+1555,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1321,"in_psel", false,-1);
    tracep->declBit(c+1322,"in_penable", false,-1);
    tracep->declBus(c+1306,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1323,"in_pready", false,-1);
    tracep->declBit(c+1629,"in_pslverr", false,-1);
    tracep->declBus(c+1289,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1307,"in_pwrite", false,-1);
    tracep->declBus(c+1324,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1308,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1554,"uart_rx", false,-1);
    tracep->declBit(c+1555,"uart_tx", false,-1);
    tracep->declBit(c+613,"rtsn", false,-1);
    tracep->declBit(c+1629,"ctsn", false,-1);
    tracep->declBit(c+614,"dtr_pad_o", false,-1);
    tracep->declBit(c+1629,"dsr_pad_i", false,-1);
    tracep->declBit(c+1629,"ri_pad_i", false,-1);
    tracep->declBit(c+1629,"dcd_pad_i", false,-1);
    tracep->declBit(c+615,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1520,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1521,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+402,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1522,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+616,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1535,"wb_rst_i", false,-1);
    tracep->declBus(c+1520,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1523,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1522,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1555,"stx_pad_o", false,-1);
    tracep->declBit(c+1554,"srx_pad_i", false,-1);
    tracep->declBus(c+1712,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+616,"rts_pad_o", false,-1);
    tracep->declBit(c+614,"dtr_pad_o", false,-1);
    tracep->declBit(c+615,"int_o", false,-1);
    tracep->declBit(c+617,"enable", false,-1);
    tracep->declBit(c+618,"srx_pad", false,-1);
    tracep->declBus(c+619,"ier", false,-1, 3,0);
    tracep->declBus(c+620,"iir", false,-1, 3,0);
    tracep->declBus(c+621,"fcr", false,-1, 1,0);
    tracep->declBus(c+622,"mcr", false,-1, 4,0);
    tracep->declBus(c+623,"lcr", false,-1, 7,0);
    tracep->declBus(c+624,"msr", false,-1, 7,0);
    tracep->declBus(c+625,"dl", false,-1, 15,0);
    tracep->declBus(c+626,"scratch", false,-1, 7,0);
    tracep->declBit(c+627,"start_dlc", false,-1);
    tracep->declBit(c+628,"lsr_mask_d", false,-1);
    tracep->declBit(c+629,"msi_reset", false,-1);
    tracep->declBus(c+630,"dlc", false,-1, 15,0);
    tracep->declBus(c+631,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+632,"rx_reset", false,-1);
    tracep->declBit(c+633,"tx_reset", false,-1);
    tracep->declBit(c+634,"dlab", false,-1);
    tracep->declBit(c+1635,"cts_pad_i", false,-1);
    tracep->declBit(c+1629,"dsr_pad_i", false,-1);
    tracep->declBit(c+1629,"ri_pad_i", false,-1);
    tracep->declBit(c+1629,"dcd_pad_i", false,-1);
    tracep->declBit(c+635,"loopback", false,-1);
    tracep->declBit(c+1629,"cts", false,-1);
    tracep->declBit(c+1635,"dsr", false,-1);
    tracep->declBit(c+1635,"ri", false,-1);
    tracep->declBit(c+1635,"dcd", false,-1);
    tracep->declBit(c+636,"cts_c", false,-1);
    tracep->declBit(c+637,"dsr_c", false,-1);
    tracep->declBit(c+638,"ri_c", false,-1);
    tracep->declBit(c+639,"dcd_c", false,-1);
    tracep->declBus(c+640,"lsr", false,-1, 7,0);
    tracep->declBit(c+641,"lsr0", false,-1);
    tracep->declBit(c+642,"lsr1", false,-1);
    tracep->declBit(c+643,"lsr2", false,-1);
    tracep->declBit(c+644,"lsr3", false,-1);
    tracep->declBit(c+645,"lsr4", false,-1);
    tracep->declBit(c+646,"lsr5", false,-1);
    tracep->declBit(c+647,"lsr6", false,-1);
    tracep->declBit(c+648,"lsr7", false,-1);
    tracep->declBit(c+649,"lsr0r", false,-1);
    tracep->declBit(c+650,"lsr1r", false,-1);
    tracep->declBit(c+651,"lsr2r", false,-1);
    tracep->declBit(c+652,"lsr3r", false,-1);
    tracep->declBit(c+653,"lsr4r", false,-1);
    tracep->declBit(c+654,"lsr5r", false,-1);
    tracep->declBit(c+655,"lsr6r", false,-1);
    tracep->declBit(c+656,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+657,"rls_int", false,-1);
    tracep->declBit(c+658,"rda_int", false,-1);
    tracep->declBit(c+659,"ti_int", false,-1);
    tracep->declBit(c+660,"thre_int", false,-1);
    tracep->declBit(c+661,"ms_int", false,-1);
    tracep->declBit(c+662,"tf_push", false,-1);
    tracep->declBit(c+663,"rf_pop", false,-1);
    tracep->declBus(c+1608,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+664,"rf_error_bit", false,-1);
    tracep->declBit(c+642,"rf_overrun", false,-1);
    tracep->declBit(c+665,"rf_push_pulse", false,-1);
    tracep->declBus(c+666,"rf_count", false,-1, 4,0);
    tracep->declBus(c+667,"tf_count", false,-1, 4,0);
    tracep->declBus(c+668,"tstate", false,-1, 2,0);
    tracep->declBus(c+669,"rstate", false,-1, 3,0);
    tracep->declBus(c+670,"counter_t", false,-1, 9,0);
    tracep->declBit(c+671,"thre_set_en", false,-1);
    tracep->declBus(c+672,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+673,"block_value", false,-1, 7,0);
    tracep->declBit(c+674,"serial_out", false,-1);
    tracep->declBit(c+675,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+676,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+677,"lsr0_d", false,-1);
    tracep->declBit(c+678,"lsr1_d", false,-1);
    tracep->declBit(c+679,"lsr2_d", false,-1);
    tracep->declBit(c+680,"lsr3_d", false,-1);
    tracep->declBit(c+681,"lsr4_d", false,-1);
    tracep->declBit(c+682,"lsr5_d", false,-1);
    tracep->declBit(c+683,"lsr6_d", false,-1);
    tracep->declBit(c+684,"lsr7_d", false,-1);
    tracep->declBit(c+685,"rls_int_d", false,-1);
    tracep->declBit(c+686,"thre_int_d", false,-1);
    tracep->declBit(c+687,"ms_int_d", false,-1);
    tracep->declBit(c+688,"ti_int_d", false,-1);
    tracep->declBit(c+689,"rda_int_d", false,-1);
    tracep->declBit(c+690,"rls_int_rise", false,-1);
    tracep->declBit(c+691,"thre_int_rise", false,-1);
    tracep->declBit(c+692,"ms_int_rise", false,-1);
    tracep->declBit(c+693,"ti_int_rise", false,-1);
    tracep->declBit(c+694,"rda_int_rise", false,-1);
    tracep->declBit(c+695,"rls_int_pnd", false,-1);
    tracep->declBit(c+696,"rda_int_pnd", false,-1);
    tracep->declBit(c+697,"thre_int_pnd", false,-1);
    tracep->declBit(c+698,"ms_int_pnd", false,-1);
    tracep->declBit(c+699,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1771,"Tp", false,-1, 31,0);
    tracep->declBus(c+1771,"width", false,-1, 31,0);
    tracep->declBus(c+1704,"init_value", false,-1, 0,0);
    tracep->declBit(c+1535,"rst_i", false,-1);
    tracep->declBit(c+1534,"clk_i", false,-1);
    tracep->declBit(c+1629,"stage1_rst_i", false,-1);
    tracep->declBit(c+1635,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1554,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+618,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+700,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1535,"wb_rst_i", false,-1);
    tracep->declBus(c+623,"lcr", false,-1, 7,0);
    tracep->declBit(c+663,"rf_pop", false,-1);
    tracep->declBit(c+675,"srx_pad_i", false,-1);
    tracep->declBit(c+617,"enable", false,-1);
    tracep->declBit(c+632,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+670,"counter_t", false,-1, 9,0);
    tracep->declBus(c+666,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1608,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+642,"rf_overrun", false,-1);
    tracep->declBit(c+664,"rf_error_bit", false,-1);
    tracep->declBus(c+669,"rstate", false,-1, 3,0);
    tracep->declBit(c+665,"rf_push_pulse", false,-1);
    tracep->declBus(c+701,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+702,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+703,"rshift", false,-1, 7,0);
    tracep->declBit(c+704,"rparity", false,-1);
    tracep->declBit(c+705,"rparity_error", false,-1);
    tracep->declBit(c+706,"rframing_error", false,-1);
    tracep->declBit(c+707,"rbit_in", false,-1);
    tracep->declBit(c+708,"rparity_xor", false,-1);
    tracep->declBus(c+709,"counter_b", false,-1, 7,0);
    tracep->declBit(c+710,"rf_push_q", false,-1);
    tracep->declBus(c+711,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+712,"rf_push", false,-1);
    tracep->declBit(c+713,"break_error", false,-1);
    tracep->declBit(c+714,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+715,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+716,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+717,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1637,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1705,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1706,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1707,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1708,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1709,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1710,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1711,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1712,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1713,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1714,"sr_push", false,-1, 3,0);
    tracep->declBus(c+718,"toc_value", false,-1, 9,0);
    tracep->declBus(c+719,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1772,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1718,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1717,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1773,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1535,"wb_rst_i", false,-1);
    tracep->declBit(c+665,"push", false,-1);
    tracep->declBit(c+663,"pop", false,-1);
    tracep->declBus(c+711,"data_in", false,-1, 10,0);
    tracep->declBit(c+632,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1608,"data_out", false,-1, 10,0);
    tracep->declBit(c+642,"overrun", false,-1);
    tracep->declBus(c+666,"count", false,-1, 4,0);
    tracep->declBit(c+664,"error_bit", false,-1);
    tracep->declBus(c+1609,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+720+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+736,"top", false,-1, 3,0);
    tracep->declBus(c+737,"bottom", false,-1, 3,0);
    tracep->declBus(c+738,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+739,"word0", false,-1, 2,0);
    tracep->declBus(c+740,"word1", false,-1, 2,0);
    tracep->declBus(c+741,"word2", false,-1, 2,0);
    tracep->declBus(c+742,"word3", false,-1, 2,0);
    tracep->declBus(c+743,"word4", false,-1, 2,0);
    tracep->declBus(c+744,"word5", false,-1, 2,0);
    tracep->declBus(c+745,"word6", false,-1, 2,0);
    tracep->declBus(c+746,"word7", false,-1, 2,0);
    tracep->declBus(c+747,"word8", false,-1, 2,0);
    tracep->declBus(c+748,"word9", false,-1, 2,0);
    tracep->declBus(c+749,"word10", false,-1, 2,0);
    tracep->declBus(c+750,"word11", false,-1, 2,0);
    tracep->declBus(c+751,"word12", false,-1, 2,0);
    tracep->declBus(c+752,"word13", false,-1, 2,0);
    tracep->declBus(c+753,"word14", false,-1, 2,0);
    tracep->declBus(c+754,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1717,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1719,"data_width", false,-1, 31,0);
    tracep->declBus(c+1718,"depth", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+665,"we", false,-1);
    tracep->declBus(c+736,"a", false,-1, 3,0);
    tracep->declBus(c+737,"dpra", false,-1, 3,0);
    tracep->declBus(c+755,"di", false,-1, 7,0);
    tracep->declBus(c+1609,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+403+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1535,"wb_rst_i", false,-1);
    tracep->declBus(c+623,"lcr", false,-1, 7,0);
    tracep->declBit(c+662,"tf_push", false,-1);
    tracep->declBus(c+1523,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+617,"enable", false,-1);
    tracep->declBit(c+633,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+674,"stx_pad_o", false,-1);
    tracep->declBus(c+668,"tstate", false,-1, 2,0);
    tracep->declBus(c+667,"tf_count", false,-1, 4,0);
    tracep->declBus(c+756,"counter", false,-1, 4,0);
    tracep->declBus(c+757,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+758,"shift_out", false,-1, 6,0);
    tracep->declBit(c+759,"stx_o_tmp", false,-1);
    tracep->declBit(c+760,"parity_xor", false,-1);
    tracep->declBit(c+761,"tf_pop", false,-1);
    tracep->declBit(c+762,"bit_out", false,-1);
    tracep->declBus(c+1523,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1610,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+763,"tf_overrun", false,-1);
    tracep->declBus(c+1631,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1619,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1632,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1633,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1634,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1768,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1719,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1718,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1717,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1773,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+1535,"wb_rst_i", false,-1);
    tracep->declBit(c+662,"push", false,-1);
    tracep->declBit(c+761,"pop", false,-1);
    tracep->declBus(c+1523,"data_in", false,-1, 7,0);
    tracep->declBit(c+633,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1610,"data_out", false,-1, 7,0);
    tracep->declBit(c+763,"overrun", false,-1);
    tracep->declBus(c+667,"count", false,-1, 4,0);
    tracep->declBus(c+764,"top", false,-1, 3,0);
    tracep->declBus(c+765,"bottom", false,-1, 3,0);
    tracep->declBus(c+766,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1717,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1719,"data_width", false,-1, 31,0);
    tracep->declBus(c+1718,"depth", false,-1, 31,0);
    tracep->declBit(c+1534,"clk", false,-1);
    tracep->declBit(c+662,"we", false,-1);
    tracep->declBus(c+764,"a", false,-1, 3,0);
    tracep->declBus(c+765,"dpra", false,-1, 3,0);
    tracep->declBus(c+1523,"di", false,-1, 7,0);
    tracep->declBus(c+1610,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+419+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBit(c+1312,"auto_in_psel", false,-1);
    tracep->declBit(c+1313,"auto_in_penable", false,-1);
    tracep->declBit(c+1307,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1314,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1306,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+495,"auto_in_pready", false,-1);
    tracep->declBit(c+1625,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1626,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1548,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1549,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1550,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1551,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1552,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1553,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1534,"clock", false,-1);
    tracep->declBit(c+1535,"reset", false,-1);
    tracep->declBus(c+1507,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1312,"in_psel", false,-1);
    tracep->declBit(c+1313,"in_penable", false,-1);
    tracep->declBus(c+1306,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1307,"in_pwrite", false,-1);
    tracep->declBus(c+1308,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1309,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+495,"in_pready", false,-1);
    tracep->declBus(c+1626,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1625,"in_pslverr", false,-1);
    tracep->declBus(c+1548,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1549,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1550,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1551,"vga_hsync", false,-1);
    tracep->declBit(c+1552,"vga_vsync", false,-1);
    tracep->declBit(c+1553,"vga_valid", false,-1);
    tracep->declBit(c+1524,"is_write", false,-1);
    tracep->declBus(c+1525,"addr", false,-1, 31,0);
    tracep->declBit(c+495,"ready", false,-1);
    tracep->declBus(c+767,"i", false,-1, 31,0);
    tracep->declBus(c+1774,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1775,"h_active", false,-1, 31,0);
    tracep->declBus(c+1776,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1777,"h_total", false,-1, 31,0);
    tracep->declBus(c+1700,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1778,"v_active", false,-1, 31,0);
    tracep->declBus(c+1779,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1780,"v_total", false,-1, 31,0);
    tracep->declBus(c+768,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+435,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+769,"h_valid", false,-1);
    tracep->declBit(c+436,"v_valid", false,-1);
    tracep->declBus(c+770,"h_addr", false,-1, 9,0);
    tracep->declBus(c+437,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1611,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+491,"sck", false,-1);
    tracep->declBit(c+939,"ss", false,-1);
    tracep->declBit(c+913,"mosi", false,-1);
    tracep->declBit(c+908,"miso", false,-1);
    tracep->declBus(c+909,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+910,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+911,"counter", false,-1, 2,0);
    tracep->declBit(c+912,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+491,"sck", false,-1);
    tracep->declBit(c+771,"ss", false,-1);
    tracep->declBit(c+913,"mosi", false,-1);
    tracep->declBit(c+1612,"miso", false,-1);
    tracep->declBit(c+771,"reset", false,-1);
    tracep->declBus(c+902,"state", false,-1, 2,0);
    tracep->declBus(c+903,"counter", false,-1, 7,0);
    tracep->declBus(c+904,"cmd", false,-1, 7,0);
    tracep->declBus(c+905,"addr", false,-1, 23,0);
    tracep->declBus(c+906,"data", false,-1, 31,0);
    tracep->declBit(c+907,"ren", false,-1);
    tracep->declBus(c+1613,"rdata", false,-1, 31,0);
    tracep->declBus(c+1614,"raddr", false,-1, 31,0);
    tracep->declBus(c+1615,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+491,"clock", false,-1);
    tracep->declBit(c+907,"valid", false,-1);
    tracep->declBus(c+904,"cmd", false,-1, 7,0);
    tracep->declBus(c+1614,"addr", false,-1, 31,0);
    tracep->declBus(c+1613,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1530,"sck", false,-1);
    tracep->declBit(c+1531,"ce_n", false,-1);
    tracep->declBus(c+1557,"dio", false,-1, 3,0);
    tracep->declBit(c+1531,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+957,"cmd", false,-1, 7,0);
    tracep->declBus(c+958,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+959+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1616,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1617,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+963,"ren", false,-1);
    tracep->declBit(c+964,"wen", false,-1);
    tracep->declBus(c+965,"len", false,-1, 7,0);
    tracep->declBus(c+1618,"rdata", false,-1, 31,0);
    tracep->declBus(c+966,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1530,"clock", false,-1);
    tracep->declBit(c+963,"ren", false,-1);
    tracep->declBit(c+964,"wen", false,-1);
    tracep->declBus(c+957,"cmd", false,-1, 7,0);
    tracep->declBus(c+966,"saddr", false,-1, 31,0);
    tracep->declBus(c+1618,"rdata", false,-1, 31,0);
    tracep->declBus(c+967,"wdata", false,-1, 31,0);
    tracep->declBus(c+965,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1558,"clk", false,-1);
    tracep->declBit(c+493,"cke", false,-1);
    tracep->declBit(c+914,"cs", false,-1);
    tracep->declBit(c+915,"ras", false,-1);
    tracep->declBit(c+916,"cas", false,-1);
    tracep->declBit(c+917,"we", false,-1);
    tracep->declBus(c+918,"a", false,-1, 12,0);
    tracep->declBus(c+940,"ba", false,-1, 1,0);
    tracep->declBus(c+941,"dqm", false,-1, 1,0);
    tracep->declBus(c+955,"dq", false,-1, 15,0);
    tracep->declBit(c+942,"reset", false,-1);
    tracep->declBus(c+783,"state", false,-1, 2,0);
    tracep->declBus(c+784,"counter", false,-1, 7,0);
    tracep->declBus(c+785,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1781,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+786,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+787,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+943,"nop", false,-1);
    tracep->declBit(c+944,"active", false,-1);
    tracep->declBit(c+945,"precharge", false,-1);
    tracep->declBit(c+946,"read", false,-1);
    tracep->declBit(c+947,"write", false,-1);
    tracep->declBit(c+948,"burstterm", false,-1);
    tracep->declBit(c+949,"autorefresh", false,-1);
    tracep->declBit(c+950,"mode", false,-1);
    tracep->declBus(c+788,"test", false,-1, 15,0);
    tracep->declBus(c+789,"test1", false,-1, 15,0);
    tracep->declBus(c+790,"sense", false,-1, 31,0);
    tracep->declBit(c+791,"write_burst_mode", false,-1);
    tracep->declBus(c+792,"op_mode", false,-1, 1,0);
    tracep->declBus(c+793,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+794,"burst_type", false,-1);
    tracep->declBus(c+795,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+796,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+797,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+798,"bank", false,-1, 1,0);
    tracep->declBus(c+799,"row", false,-1, 12,0);
    tracep->declBus(c+800,"column", false,-1, 8,0);
    tracep->declBus(c+801,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+802,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+803,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1558,"clk", false,-1);
    tracep->declBit(c+493,"cke", false,-1);
    tracep->declBit(c+914,"cs", false,-1);
    tracep->declBit(c+915,"ras", false,-1);
    tracep->declBit(c+916,"cas", false,-1);
    tracep->declBit(c+917,"we", false,-1);
    tracep->declBus(c+918,"a", false,-1, 12,0);
    tracep->declBus(c+940,"ba", false,-1, 1,0);
    tracep->declBus(c+951,"dqm", false,-1, 1,0);
    tracep->declBus(c+956,"dq", false,-1, 15,0);
    tracep->declBit(c+942,"reset", false,-1);
    tracep->declBus(c+804,"state", false,-1, 2,0);
    tracep->declBus(c+805,"counter", false,-1, 7,0);
    tracep->declBus(c+806,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1782,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+807,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+808,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+943,"nop", false,-1);
    tracep->declBit(c+944,"active", false,-1);
    tracep->declBit(c+945,"precharge", false,-1);
    tracep->declBit(c+946,"read", false,-1);
    tracep->declBit(c+947,"write", false,-1);
    tracep->declBit(c+948,"burstterm", false,-1);
    tracep->declBit(c+949,"autorefresh", false,-1);
    tracep->declBit(c+950,"mode", false,-1);
    tracep->declBus(c+809,"test", false,-1, 15,0);
    tracep->declBus(c+810,"test1", false,-1, 15,0);
    tracep->declBus(c+811,"sense", false,-1, 31,0);
    tracep->declBit(c+812,"write_burst_mode", false,-1);
    tracep->declBus(c+813,"op_mode", false,-1, 1,0);
    tracep->declBus(c+814,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+815,"burst_type", false,-1);
    tracep->declBus(c+816,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+817,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+818,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+819,"bank", false,-1, 1,0);
    tracep->declBus(c+820,"row", false,-1, 12,0);
    tracep->declBus(c+821,"column", false,-1, 8,0);
    tracep->declBus(c+822,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+823,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+824,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1558,"clk", false,-1);
    tracep->declBit(c+493,"cke", false,-1);
    tracep->declBit(c+914,"cs", false,-1);
    tracep->declBit(c+915,"ras", false,-1);
    tracep->declBit(c+916,"cas", false,-1);
    tracep->declBit(c+917,"we", false,-1);
    tracep->declBus(c+918,"a", false,-1, 12,0);
    tracep->declBus(c+940,"ba", false,-1, 1,0);
    tracep->declBus(c+952,"dqm", false,-1, 1,0);
    tracep->declBus(c+955,"dq", false,-1, 15,0);
    tracep->declBit(c+942,"reset", false,-1);
    tracep->declBus(c+825,"state", false,-1, 2,0);
    tracep->declBus(c+826,"counter", false,-1, 7,0);
    tracep->declBus(c+827,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1783,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+828,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+829,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+943,"nop", false,-1);
    tracep->declBit(c+944,"active", false,-1);
    tracep->declBit(c+945,"precharge", false,-1);
    tracep->declBit(c+946,"read", false,-1);
    tracep->declBit(c+947,"write", false,-1);
    tracep->declBit(c+948,"burstterm", false,-1);
    tracep->declBit(c+949,"autorefresh", false,-1);
    tracep->declBit(c+950,"mode", false,-1);
    tracep->declBus(c+830,"test", false,-1, 15,0);
    tracep->declBus(c+831,"test1", false,-1, 15,0);
    tracep->declBus(c+832,"sense", false,-1, 31,0);
    tracep->declBit(c+833,"write_burst_mode", false,-1);
    tracep->declBus(c+834,"op_mode", false,-1, 1,0);
    tracep->declBus(c+835,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+836,"burst_type", false,-1);
    tracep->declBus(c+837,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+838,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+839,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+840,"bank", false,-1, 1,0);
    tracep->declBus(c+841,"row", false,-1, 12,0);
    tracep->declBus(c+842,"column", false,-1, 8,0);
    tracep->declBus(c+843,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+844,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+845,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1558,"clk", false,-1);
    tracep->declBit(c+493,"cke", false,-1);
    tracep->declBit(c+914,"cs", false,-1);
    tracep->declBit(c+915,"ras", false,-1);
    tracep->declBit(c+916,"cas", false,-1);
    tracep->declBit(c+917,"we", false,-1);
    tracep->declBus(c+918,"a", false,-1, 12,0);
    tracep->declBus(c+940,"ba", false,-1, 1,0);
    tracep->declBus(c+953,"dqm", false,-1, 1,0);
    tracep->declBus(c+956,"dq", false,-1, 15,0);
    tracep->declBit(c+942,"reset", false,-1);
    tracep->declBus(c+846,"state", false,-1, 2,0);
    tracep->declBus(c+847,"counter", false,-1, 7,0);
    tracep->declBus(c+848,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1784,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+849,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+850,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+943,"nop", false,-1);
    tracep->declBit(c+944,"active", false,-1);
    tracep->declBit(c+945,"precharge", false,-1);
    tracep->declBit(c+946,"read", false,-1);
    tracep->declBit(c+947,"write", false,-1);
    tracep->declBit(c+948,"burstterm", false,-1);
    tracep->declBit(c+949,"autorefresh", false,-1);
    tracep->declBit(c+950,"mode", false,-1);
    tracep->declBus(c+851,"test", false,-1, 15,0);
    tracep->declBus(c+852,"test1", false,-1, 15,0);
    tracep->declBus(c+853,"sense", false,-1, 31,0);
    tracep->declBit(c+854,"write_burst_mode", false,-1);
    tracep->declBus(c+855,"op_mode", false,-1, 1,0);
    tracep->declBus(c+856,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+857,"burst_type", false,-1);
    tracep->declBus(c+858,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+859,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+860,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+861,"bank", false,-1, 1,0);
    tracep->declBus(c+862,"row", false,-1, 12,0);
    tracep->declBus(c+863,"column", false,-1, 8,0);
    tracep->declBus(c+864,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+865,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+866,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullBit(oldp+21,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+24,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+60,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+137,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+148,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+193,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+207,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+215,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+219,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+239,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+247,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+271,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+279,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+291,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+295,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+303,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+307,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+311,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+315,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arlen),8);
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arid),4);
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arsize),3);
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arburst),2);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_id),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_id),32);
    bufp->fullCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex),7);
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex),3);
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_ren_ex));
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex),32);
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_arready));
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[0]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[1]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[2]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[3]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[4]),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[5]),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[6]),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[7]),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[0]),29);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[1]),29);
    bufp->fullIData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[2]),29);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[3]),29);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[4]),29);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[5]),29);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[6]),29);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[7]),29);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__enable));
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk2__DOT__a),32);
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid_reg));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid_enable));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__isCHazard_reg));
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+437,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+438,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit))
                                ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg
                               [(7U & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc) 
                                       + VL_CLOG2_I((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit))))])),32);
    bufp->fullBit(oldp+439,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+440,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+441,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+442,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+443,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+444,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullCData(oldp+445,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+446,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+447,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+448,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->fullBit(oldp+449,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+450,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ls),32);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ls),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ls),32);
    bufp->fullCData(oldp+460,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber31)),5);
    bufp->fullBit(oldp+461,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber32))));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state));
    bufp->fullQData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__done_reg));
    bufp->fullSData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),16);
    bufp->fullSData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),16);
    bufp->fullSData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),16);
    bufp->fullSData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),16);
    bufp->fullIData(oldp+476,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                               >> 5U)),27);
    bufp->fullBit(oldp+477,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                   >> 4U))));
    bufp->fullCData(oldp+478,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                     >> 2U))),2);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit),8);
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state));
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber31),32);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber32),5);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber37),4);
    bufp->fullCData(oldp+490,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber31)),4);
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullSData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+518,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+519,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+522,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+523,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+528,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+532,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+547,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+548,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+549,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+550,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+551,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+559,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+594,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+595,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+596,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+597,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+598,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+599,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+600,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+604,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+606,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+607,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+609,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+613,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+614,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+616,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+634,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+635,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+636,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+637,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+638,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+639,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+640,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+643,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+644,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+645,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+664,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+671,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+690,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+691,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+692,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+693,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+694,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+713,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+714,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+715,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+716,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+717,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+719,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+738,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+755,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+766,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+770,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+772,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+773,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+774,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+775,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+776,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)) 
                                             << 4U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid)))
                                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                    << 5U) | (((0U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                               << 4U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q))))),6);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+785,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+786,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+787,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+788,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+790,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+791,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+792,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+793,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+794,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+795,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+796,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+797,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+800,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+806,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+807,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+808,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+809,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+810,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+811,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+812,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+813,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+814,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+815,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+816,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+817,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+818,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+821,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+827,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+828,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+829,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+830,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+831,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+832,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+833,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+834,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+835,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+836,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+837,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+838,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+839,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+841,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+842,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+849,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+850,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+851,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+852,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+853,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+854,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+855,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+856,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+857,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+858,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+859,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+860,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+862,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+863,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullBit(oldp+867,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullIData(oldp+870,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),5);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_sel_id),4);
    bufp->fullIData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_id),32);
    bufp->fullIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_id),32);
    bufp->fullIData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_id),32);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_id),4);
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_id));
    bufp->fullIData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),5);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex),4);
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex),32);
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid));
    bufp->fullIData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullQData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+907,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+914,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+915,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+916,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+917,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullIData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullIData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+929,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullSData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+940,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+945,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+954,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+955,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+956,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+958,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+966,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+967,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber33),32);
    bufp->fullIData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ls),32);
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrsw_ls),32);
    bufp->fullCData(oldp+971,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber36)),4);
    bufp->fullIData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid),32);
    bufp->fullCData(oldp+973,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr)),8);
    bufp->fullCData(oldp+974,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr)),8);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid),4);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid),4);
    bufp->fullCData(oldp+977,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen))),3);
    bufp->fullCData(oldp+978,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen))),3);
    bufp->fullCData(oldp+979,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize))),2);
    bufp->fullCData(oldp+980,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize))),2);
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullBit(oldp+982,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst))));
    bufp->fullBit(oldp+983,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb))));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber33));
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber36),32);
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullIData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),3);
    bufp->fullIData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+1004,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber36 
                                    >> 2U))));
    bufp->fullBit(oldp+1005,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber36)));
    bufp->fullBit(oldp+1006,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber36 
                                    >> 1U))));
    bufp->fullBit(oldp+1007,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__LSU____pinNumber36 
                                    >> 3U))));
    bufp->fullIData(oldp+1008,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))),32);
    bufp->fullCData(oldp+1009,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                 ? 0U : 3U)),2);
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+1015,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+1019,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en)
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en));
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),7);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_id));
    bufp->fullIData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id),32);
    bufp->fullBit(oldp+1028,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ex),32);
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrsw_ex),32);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wen_ex));
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex),32);
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex),32);
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wmask_ex),4);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awsize_ex),3);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arsize_ex),3);
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+1042,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                >> 3U)),29);
    bufp->fullBit(oldp+1043,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                    >> 2U))));
    bufp->fullIData(oldp+1044,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                >> 3U)),29);
    bufp->fullBit(oldp+1045,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    >> 2U))));
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit),4);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__already),4);
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+1049,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullIData(oldp+1051,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+1053,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+1054,(((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h46116b93__0
                                 : 0U)),32);
    bufp->fullIData(oldp+1055,(((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha075a6b3__0))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                     : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha075a6b3__0))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id 
                                            << 8U) : 
                                        ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha075a6b3__0))
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id 
                                             << 0x10U)
                                          : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha075a6b3__0))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id 
                                                 << 0x18U)
                                              : 0U))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1056,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9e98d6f6__0) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                 ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9e98d6f6__0) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                          ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9e98d6f6__0) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                   ? 0xfU
                                                   : 
                                                  (((1U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha075a6b3__0)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h97067d1c__0))
                                                    ? 2U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4174c17__0) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                     ? 4U
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4174c17__0) 
                                                      & (1U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                      ? 0xcU
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha075a6b3__0)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h97067d1c__0))
                                                       ? 8U
                                                       : 0U)))))))),4);
    bufp->fullIData(oldp+1057,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h46116b93__0
                                 : 0U)),32);
    bufp->fullCData(oldp+1058,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h97067d1c__0)
                                 ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                          ? 1U : 2U))),3);
    bufp->fullCData(oldp+1059,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                 ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                             | (5U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1060,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1061,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullIData(oldp+1064,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1065,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1066,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+1068,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),7);
    bufp->fullCData(oldp+1069,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
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
    bufp->fullCData(oldp+1070,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                      >> 0xcU))),3);
    bufp->fullIData(oldp+1071,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1072,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+1073,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1074,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1075,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7),7);
    bufp->fullCData(oldp+1078,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                         >> 0x14U))),5);
    bufp->fullBit(oldp+1079,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
                              | ((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                 | ((0x73U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                    | ((0x33U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if))))))));
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__alu_sel),4);
    bufp->fullIData(oldp+1081,(((((0x13U == (0x7fU 
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
    bufp->fullIData(oldp+1082,((((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
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
    bufp->fullCData(oldp+1083,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h78d0ed1d__0) 
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
    bufp->fullBit(oldp+1084,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata_reg),32);
    bufp->fullBit(oldp+1088,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex)));
    bufp->fullIData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wmask_ex),32);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awsize_ex),4);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5),4);
    bufp->fullCData(oldp+1092,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))),4);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+1103,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+1105,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullSData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h699e729e__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullCData(oldp+1137,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7e9f410b__0))),4);
    bufp->fullIData(oldp+1138,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0)),32);
    bufp->fullCData(oldp+1139,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4840cf51__0))),8);
    bufp->fullCData(oldp+1140,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0fe8df31__0))),3);
    bufp->fullCData(oldp+1141,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd5e88dba__0))),2);
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1154,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1156,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1158,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1174,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1175,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1176,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1177,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1178,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1179,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1180,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1185,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h51ea31f9__0))));
    bufp->fullBit(oldp+1186,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf6e76472__0))));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullSData(oldp+1189,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7e9f410b__0))))),16);
    bufp->fullSData(oldp+1190,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)))),16);
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1197,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1198,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1199,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1200,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1205,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1207,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1208,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullBit(oldp+1216,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))));
    bufp->fullIData(oldp+1217,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                        >> 0x20U))),32);
    bufp->fullCData(oldp+1218,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4840cf51__0) 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1219,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7e9f410b__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1220,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0fe8df31__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1221,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd5e88dba__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1222,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h51ea31f9__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1223,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf6e76472__0) 
                                    >> 1U))));
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),8);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m),2);
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1235,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1236,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1238,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullCData(oldp+1243,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0fe8df31__0))
                                 : 0U)),3);
    bufp->fullBit(oldp+1244,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1245,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1246,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1247,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1248,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1249,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1250,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1251,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1252,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1253,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1254,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1255,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1256,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1257,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1258,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1259,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1260,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1261,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1262,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1263,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1264,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1265,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1266,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1267,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1268,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1269,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1270,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1271,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1272,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1273,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1274,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1275,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1276,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullCData(oldp+1277,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))
                                 : 0U)),4);
    bufp->fullBit(oldp+1278,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1279,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullCData(oldp+1280,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)
                                 : 0U)),4);
    bufp->fullCData(oldp+1281,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))
                                 : 0U)),4);
    bufp->fullBit(oldp+1282,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1283,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+1284,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))),2);
    bufp->fullBit(oldp+1285,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))));
    bufp->fullCData(oldp+1286,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))),2);
    bufp->fullCData(oldp+1287,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+1288,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullIData(oldp+1289,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1290,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1291,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullIData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1295,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1296,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1297,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullCData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1311,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1312,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1313,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1315,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1317,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1318,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1320,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1323,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1324,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1325,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1330,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1333,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1338,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1387,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1388,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1410,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1411,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1433,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1434,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1435,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1436,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1437,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1438,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1439,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1440,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1441,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1442,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1443,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1444,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1445,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1446,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1447,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1448,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1449,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1450,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1451,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1452,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1453,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1454,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1455,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1456,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1457,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1458,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1459,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1460,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1461,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1462,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1463,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1464,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber51));
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1490,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1495,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                 : 0U)),8);
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1503,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1504,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1505,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1516,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1518,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1525,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isRAW));
    bufp->fullBit(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1534,(vlSelf->clock));
    bufp->fullBit(oldp+1535,(vlSelf->reset));
    bufp->fullSData(oldp+1536,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1537,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1538,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1539,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1540,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1541,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1542,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1543,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1544,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1545,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1546,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1547,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1548,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1549,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1550,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1551,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1552,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1553,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1554,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1555,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1556,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1557,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1558,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1559,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1560,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1562,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullCData(oldp+1564,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize)
                                 : 0U)),3);
    bufp->fullIData(oldp+1565,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata
                                 : 0U)),32);
    bufp->fullCData(oldp+1566,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb)
                                 : 0U)),4);
    bufp->fullBit(oldp+1567,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast))));
    bufp->fullBit(oldp+1568,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullBit(oldp+1569,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullIData(oldp+1570,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1571,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1572,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullBit(oldp+1573,(((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits)) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                   >> 1U) & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate)) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready)))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1574,((3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
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
    bufp->fullIData(oldp+1575,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
                                                    : 0U)))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata
                                            : 0U))),32);
    bufp->fullCData(oldp+1576,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1577,((1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits)) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                        >> 1U) & ((2U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready)))))));
    bufp->fullBit(oldp+1578,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1580,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
                                         ? (((- (IData)(
                                                        (0x2000000U 
                                                         == (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                                     >> 0x20U))))) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                            | ((- (IData)(
                                                          (0x2000004U 
                                                           == (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                                       >> 0x20U))))) 
                                               & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                                          >> 0x20U))))
                                         : 0U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                   ? 
                                                  ((0x1000000U 
                                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                                    : 
                                                   ((0x1000004U 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                                     : 0U))
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                                     ? 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                       ? 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                                       : 0U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                          : 0U) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                            ? 
                                                           ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
                                                            : 0U)))
                                                     : 0U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata
                                                       : 0U))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1581,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullIData(oldp+1582,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
                                         ? (((- (IData)(
                                                        (0x2000000U 
                                                         == (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                                     >> 0x20U))))) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                            | ((- (IData)(
                                                          (0x2000004U 
                                                           == (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                                       >> 0x20U))))) 
                                               & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                                          >> 0x20U))))
                                         : 0U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                   ? 
                                                  ((0x1000000U 
                                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                                    : 
                                                   ((0x1000004U 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                                     : 0U))
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                                     ? 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                       ? 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                                       : 0U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                          : 0U) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                            ? 
                                                           ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
                                                            : 0U)))
                                                     : 0U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata
                                                       : 0U))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid)
                                 ? (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex)
                                 : 0U)),4);
    bufp->fullCData(oldp+1584,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullCData(oldp+1585,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullBit(oldp+1586,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits)) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                      >> 1U) & ((2U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullIData(oldp+1587,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
                                 ? (((- (IData)((0x2000000U 
                                                 == (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                             >> 0x20U))))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                    | ((- (IData)((0x2000004U 
                                                   == (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                               >> 0x20U))))) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                                  >> 0x20U))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1588,((((- (IData)((0x2000000U 
                                             == (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                         >> 0x20U))))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                | ((- (IData)((0x2000004U 
                                               == (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                           >> 0x20U))))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullIData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullIData(oldp+1591,(((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res
                                 : ((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res
                                     : ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                         ? ((IData)(4U) 
                                            + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id)
                                         : ((0x67U 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                             ? ((IData)(4U) 
                                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id)
                                             : ((0x37U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id
                                                 : 
                                                ((0x17U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h34b2fd6d__0
                                                  : 
                                                 (((0x73U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                                         | (0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_id
                                                   : 0U)))))))),32);
    bufp->fullBit(oldp+1592,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                              & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullIData(oldp+1593,((((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
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
    bufp->fullBit(oldp+1594,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid))));
    bufp->fullIData(oldp+1595,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex
                                 : 0U)),32);
    bufp->fullCData(oldp+1596,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
                                 : 0U)),4);
    bufp->fullCData(oldp+1597,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
                                                 ? 
                                                (((- (IData)(
                                                             (0x2000000U 
                                                              == (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                                          >> 0x20U))))) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                                 | ((- (IData)(
                                                               (0x2000004U 
                                                                == (IData)(
                                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                                            >> 0x20U))))) 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                                               >> 0x20U))))
                                                 : 0U)
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                 ? 
                                                ((0x1000000U 
                                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                                  : 
                                                 ((0x1000004U 
                                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                                   : 0U))
                                                 : 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                                   ? 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                     ? 
                                                    ((1U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                                     : 0U) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                        : 0U) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                          ? 
                                                         ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
                                                          : 0U)))
                                                   : 0U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata
                                                     : 0U)))))
                                 : 0U)),4);
    bufp->fullIData(oldp+1598,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
                                 : 0U)),32);
    bufp->fullIData(oldp+1599,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex)),32);
    bufp->fullIData(oldp+1600,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
                                     ? (((- (IData)(
                                                    (0x2000000U 
                                                     == (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                                 >> 0x20U))))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                        | ((- (IData)(
                                                      (0x2000004U 
                                                       == (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                                                   >> 0x20U))))) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                                      >> 0x20U))))
                                     : 0U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                               ? ((0x1000000U 
                                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                                   : 
                                                  ((0x1000004U 
                                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                                    : 0U))
                                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                                      : 0U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                         : 0U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                           ? 
                                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
                                                           : 0U)))
                                                    : 0U) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata
                                                      : 0U))))),32);
    bufp->fullCData(oldp+1601,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullIData(oldp+1602,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1605,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1606,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1607,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullSData(oldp+1608,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1611,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1612,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1614,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1616,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1617,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1619,(1U),3);
    bufp->fullCData(oldp+1620,(0U),2);
    bufp->fullCData(oldp+1621,(1U),2);
    bufp->fullCData(oldp+1622,(2U),2);
    bufp->fullCData(oldp+1623,(3U),2);
    bufp->fullSData(oldp+1624,(0xaU),11);
    bufp->fullBit(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1629,(0U));
    bufp->fullBit(oldp+1630,(0U));
    bufp->fullCData(oldp+1631,(0U),3);
    bufp->fullCData(oldp+1632,(2U),3);
    bufp->fullCData(oldp+1633,(3U),3);
    bufp->fullCData(oldp+1634,(4U),3);
    bufp->fullBit(oldp+1635,(1U));
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1637,(0U),4);
    bufp->fullIData(oldp+1638,(0U),32);
    bufp->fullCData(oldp+1639,(0U),8);
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1650,(0U),32);
    bufp->fullCData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bid),4);
    bufp->fullCData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bresp),2);
    bufp->fullCData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullBit(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_awready));
    bufp->fullBit(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wready));
    bufp->fullBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bvalid));
    bufp->fullBit(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullIData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awaddr),32);
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wdata),32);
    bufp->fullCData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wstrb),4);
    bufp->fullCData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awlen),8);
    bufp->fullCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awid),4);
    bufp->fullCData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awsize),3);
    bufp->fullCData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awburst),2);
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awvalid));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wvalid));
    bufp->fullBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_bready));
    bufp->fullBit(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wlast));
    bufp->fullCData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awburst_ex),2);
    bufp->fullCData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arburst_ex),2);
    bufp->fullIData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ls),32);
    bufp->fullIData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),32);
    bufp->fullIData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),32);
    bufp->fullBit(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid));
    bufp->fullBit(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid));
    bufp->fullBit(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid));
    bufp->fullIData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awaddr),32);
    bufp->fullIData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wdata),32);
    bufp->fullCData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wstrb),4);
    bufp->fullCData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awlen),8);
    bufp->fullCData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awid),4);
    bufp->fullCData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid),4);
    bufp->fullCData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid),4);
    bufp->fullCData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awsize),3);
    bufp->fullCData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awburst),2);
    bufp->fullCData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp),2);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp),2);
    bufp->fullBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awvalid));
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awready));
    bufp->fullBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wvalid));
    bufp->fullBit(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready));
    bufp->fullBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bvalid));
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bready));
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wlast));
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast));
    bufp->fullIData(oldp+1699,(3U),32);
    bufp->fullIData(oldp+1700,(2U),32);
    bufp->fullIData(oldp+1701,(0x2000000U),32);
    bufp->fullIData(oldp+1702,(0x2000004U),32);
    bufp->fullBit(oldp+1703,(0U));
    bufp->fullBit(oldp+1704,(1U));
    bufp->fullCData(oldp+1705,(1U),4);
    bufp->fullCData(oldp+1706,(2U),4);
    bufp->fullCData(oldp+1707,(3U),4);
    bufp->fullCData(oldp+1708,(4U),4);
    bufp->fullCData(oldp+1709,(5U),4);
    bufp->fullCData(oldp+1710,(6U),4);
    bufp->fullCData(oldp+1711,(7U),4);
    bufp->fullCData(oldp+1712,(8U),4);
    bufp->fullCData(oldp+1713,(9U),4);
    bufp->fullCData(oldp+1714,(0xaU),4);
    bufp->fullCData(oldp+1715,(0xbU),4);
    bufp->fullCData(oldp+1716,(0xcU),4);
    bufp->fullIData(oldp+1717,(4U),32);
    bufp->fullIData(oldp+1718,(0x10U),32);
    bufp->fullIData(oldp+1719,(8U),32);
    bufp->fullIData(oldp+1720,(8U),32);
    bufp->fullCData(oldp+1721,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ls)),3);
    bufp->fullCData(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_axi_rlast));
    bufp->fullIData(oldp+1725,(0x20U),32);
    bufp->fullIData(oldp+1726,(0x1000000U),32);
    bufp->fullIData(oldp+1727,(0x1000004U),32);
    bufp->fullIData(oldp+1728,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1729,(0x1800U),32);
    bufp->fullIData(oldp+1730,(0x79737978U),32);
    bufp->fullCData(oldp+1731,(4U),8);
    bufp->fullCData(oldp+1732,(8U),8);
    bufp->fullCData(oldp+1733,(3U),8);
    bufp->fullCData(oldp+1734,(0x9fU),8);
    bufp->fullCData(oldp+1735,(0x25U),8);
    bufp->fullCData(oldp+1736,(0xdU),8);
    bufp->fullCData(oldp+1737,(0x99U),8);
    bufp->fullCData(oldp+1738,(0x49U),8);
    bufp->fullCData(oldp+1739,(0x41U),8);
    bufp->fullCData(oldp+1740,(0x1fU),8);
    bufp->fullCData(oldp+1741,(1U),8);
    bufp->fullCData(oldp+1742,(9U),8);
    bufp->fullCData(oldp+1743,(0x11U),8);
    bufp->fullCData(oldp+1744,(0xc1U),8);
    bufp->fullCData(oldp+1745,(0x63U),8);
    bufp->fullCData(oldp+1746,(0x85U),8);
    bufp->fullCData(oldp+1747,(0x61U),8);
    bufp->fullCData(oldp+1748,(0x71U),8);
    bufp->fullCData(oldp+1749,(0xf0U),8);
    bufp->fullCData(oldp+1750,(0xe0U),8);
    bufp->fullCData(oldp+1751,(0x15U),8);
    bufp->fullCData(oldp+1752,(0xebU),8);
    bufp->fullCData(oldp+1753,(0x38U),8);
    bufp->fullIData(oldp+1754,(0x64U),32);
    bufp->fullIData(oldp+1755,(0x18U),32);
    bufp->fullIData(oldp+1756,(9U),32);
    bufp->fullIData(oldp+1757,(6U),32);
    bufp->fullIData(oldp+1758,(0xdU),32);
    bufp->fullIData(oldp+1759,(0x2000U),32);
    bufp->fullIData(oldp+1760,(0x2710U),32);
    bufp->fullIData(oldp+1761,(0x30cU),32);
    bufp->fullSData(oldp+1762,(0x20U),13);
    bufp->fullIData(oldp+1763,(0xaU),32);
    bufp->fullIData(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1765,(0x11U),32);
    bufp->fullIData(oldp+1766,(0x30000000U),32);
    bufp->fullIData(oldp+1767,(0x3fffffffU),32);
    bufp->fullCData(oldp+1768,(5U),3);
    bufp->fullCData(oldp+1769,(6U),3);
    bufp->fullCData(oldp+1770,(7U),3);
    bufp->fullIData(oldp+1771,(1U),32);
    bufp->fullIData(oldp+1772,(0xbU),32);
    bufp->fullIData(oldp+1773,(5U),32);
    bufp->fullIData(oldp+1774,(0x60U),32);
    bufp->fullIData(oldp+1775,(0x90U),32);
    bufp->fullIData(oldp+1776,(0x310U),32);
    bufp->fullIData(oldp+1777,(0x320U),32);
    bufp->fullIData(oldp+1778,(0x23U),32);
    bufp->fullIData(oldp+1779,(0x203U),32);
    bufp->fullIData(oldp+1780,(0x20dU),32);
    bufp->fullSData(oldp+1781,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1782,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1783,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1784,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
