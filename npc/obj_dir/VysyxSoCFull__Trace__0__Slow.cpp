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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBus(c+1583,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1584,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1585,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1586,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1587,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1588,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1589,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1590,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1591,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1592,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1593,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1594,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1595,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1596,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1597,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1598,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1599,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1600,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1601,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1602,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBus(c+1583,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1584,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1585,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1586,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1587,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1588,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1589,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1590,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1591,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1592,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1593,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1594,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1595,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1596,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1597,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1598,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1599,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1600,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1601,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1602,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+496,"spi_sck", false,-1);
    tracep->declBus(c+497,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+939,"spi_mosi", false,-1);
    tracep->declBit(c+1603,"spi_miso", false,-1);
    tracep->declBit(c+1601,"uart_rx", false,-1);
    tracep->declBit(c+1602,"uart_tx", false,-1);
    tracep->declBit(c+1577,"psram_sck", false,-1);
    tracep->declBit(c+1578,"psram_ce_n", false,-1);
    tracep->declBus(c+1604,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1605,"sdram_clk", false,-1);
    tracep->declBit(c+498,"sdram_cke", false,-1);
    tracep->declBit(c+940,"sdram_cs", false,-1);
    tracep->declBit(c+941,"sdram_ras", false,-1);
    tracep->declBit(c+942,"sdram_cas", false,-1);
    tracep->declBit(c+943,"sdram_we", false,-1);
    tracep->declBus(c+944,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+945,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+499,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+969,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1583,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1584,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1585,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1586,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1587,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1588,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1589,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1590,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1591,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1592,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1593,"ps2_clk", false,-1);
    tracep->declBit(c+1594,"ps2_data", false,-1);
    tracep->declBus(c+1595,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1596,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1597,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1598,"vga_hsync", false,-1);
    tracep->declBit(c+1599,"vga_vsync", false,-1);
    tracep->declBit(c+1600,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBus(c+1203,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1204,"in_psel", false,-1);
    tracep->declBit(c+901,"in_penable", false,-1);
    tracep->declBus(c+1659,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1205,"in_pwrite", false,-1);
    tracep->declBus(c+1206,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1207,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+500,"in_pready", false,-1);
    tracep->declBus(c+501,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+502,"in_pslverr", false,-1);
    tracep->declBus(c+1293,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1343,"out_psel", false,-1);
    tracep->declBit(c+1344,"out_penable", false,-1);
    tracep->declBus(c+1345,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1346,"out_pwrite", false,-1);
    tracep->declBus(c+1347,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1349,"out_pready", false,-1);
    tracep->declBus(c+1606,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1350,"out_pslverr", false,-1);
    tracep->declBus(c+1660,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1661,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1662,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1663,"DELAY", false,-1, 1,0);
    tracep->declBus(c+503,"state", false,-1, 1,0);
    tracep->declBus(c+504,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+505,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+506,"pslverr_reg", false,-1);
    tracep->declBus(c+1664,"r", false,-1, 10,0);
    tracep->declBus(c+1662,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1343,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1344,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1346,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1293,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1345,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1349,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1350,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1606,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1351,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1352,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1346,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1353,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1345,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+507,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1665,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1666,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1354,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1355,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1346,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1345,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+508,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1667,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+509,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1356,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1357,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1346,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1345,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+510,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1668,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+511,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1358,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1359,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1346,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1293,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1345,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1607,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1669,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+902,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1360,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1361,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1346,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1345,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1362,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1669,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1363,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1364,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1365,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1346,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1353,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1345,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1608,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1669,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1366,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1367,"sel_0", false,-1);
    tracep->declBit(c+1368,"sel_1", false,-1);
    tracep->declBit(c+1369,"sel_2", false,-1);
    tracep->declBit(c+1370,"sel_3", false,-1);
    tracep->declBit(c+1371,"sel_4", false,-1);
    tracep->declBit(c+1372,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1208,"auto_in_awready", false,-1);
    tracep->declBit(c+1209,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1210,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1211,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1212,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1208,"auto_in_wready", false,-1);
    tracep->declBit(c+1213,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1373,"auto_in_bready", false,-1);
    tracep->declBit(c+1374,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1609,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1216,"auto_in_arready", false,-1);
    tracep->declBit(c+1217,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1375,"auto_in_rready", false,-1);
    tracep->declBit(c+1376,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1610,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1609,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1204,"auto_out_psel", false,-1);
    tracep->declBit(c+901,"auto_out_penable", false,-1);
    tracep->declBit(c+1205,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1203,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1206,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1207,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+500,"auto_out_pready", false,-1);
    tracep->declBit(c+502,"auto_out_pslverr", false,-1);
    tracep->declBus(c+501,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+901,"nodeOut_penable", false,-1);
    tracep->declBus(c+903,"state", false,-1, 1,0);
    tracep->declBit(c+1216,"accept_read", false,-1);
    tracep->declBit(c+1208,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1205,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+512,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1609,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1376,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1374,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1377,"in_arready", false,-1);
    tracep->declBit(c+1221,"in_arvalid", false,-1);
    tracep->declBus(c+1091,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1092,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1094,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1095,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1378,"in_rready", false,-1);
    tracep->declBit(c+513,"in_rvalid", false,-1);
    tracep->declBus(c+514,"in_rid", false,-1, 3,0);
    tracep->declBus(c+515,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+516,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+517,"in_rlast", false,-1);
    tracep->declBit(c+1379,"in_awready", false,-1);
    tracep->declBit(c+1222,"in_awvalid", false,-1);
    tracep->declBus(c+1096,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1097,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1098,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1099,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1100,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1380,"in_wready", false,-1);
    tracep->declBit(c+1223,"in_wvalid", false,-1);
    tracep->declBus(c+1224,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1101,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"in_wlast", false,-1);
    tracep->declBit(c+1381,"in_bready", false,-1);
    tracep->declBit(c+518,"in_bvalid", false,-1);
    tracep->declBus(c+519,"in_bid", false,-1, 3,0);
    tracep->declBus(c+520,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1382,"out_arready", false,-1);
    tracep->declBit(c+1383,"out_arvalid", false,-1);
    tracep->declBus(c+1384,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1385,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1386,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1196,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1387,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1388,"out_rready", false,-1);
    tracep->declBit(c+521,"out_rvalid", false,-1);
    tracep->declBus(c+522,"out_rid", false,-1, 3,0);
    tracep->declBus(c+523,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+524,"out_rlast", false,-1);
    tracep->declBit(c+1389,"out_awready", false,-1);
    tracep->declBit(c+1390,"out_awvalid", false,-1);
    tracep->declBus(c+1391,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1392,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1393,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1197,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1394,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1395,"out_wready", false,-1);
    tracep->declBit(c+1396,"out_wvalid", false,-1);
    tracep->declBus(c+1295,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1198,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"out_wlast", false,-1);
    tracep->declBit(c+1611,"out_bready", false,-1);
    tracep->declBit(c+525,"out_bvalid", false,-1);
    tracep->declBus(c+522,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1660,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1670,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1659,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1671,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1672,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1673,"DELAY", false,-1, 2,0);
    tracep->declBus(c+526,"rstate", false,-1, 2,0);
    tracep->declBus(c+527,"wstate", false,-1, 2,0);
    tracep->declBus(c+528,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+529,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+530,"rvalid_reg", false,-1);
    tracep->declBus(c+531,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+532,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+536,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+537,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+538,"bvalid_reg", false,-1);
    tracep->declBus(c+539,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+540,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1664,"r", false,-1, 10,0);
    tracep->declBus(c+1662,"s", false,-1, 1,0);
    tracep->declBus(c+541,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+1225,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1096,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1097,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1098,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1099,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+1226,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1224,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"auto_in_wlast", false,-1);
    tracep->declBit(c+461,"auto_in_bready", false,-1);
    tracep->declBit(c+1397,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1398,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1612,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+1227,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1091,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1092,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1094,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1095,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1399,"auto_in_rready", false,-1);
    tracep->declBit(c+1400,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1401,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1613,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1614,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1615,"auto_in_rlast", false,-1);
    tracep->declBit(c+1402,"auto_out_awready", false,-1);
    tracep->declBit(c+1228,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1210,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1211,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1212,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1229,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1403,"auto_out_wready", false,-1);
    tracep->declBit(c+1230,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1231,"auto_out_wlast", false,-1);
    tracep->declBit(c+1404,"auto_out_bready", false,-1);
    tracep->declBit(c+1405,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1398,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1406,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1407,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1408,"auto_out_arready", false,-1);
    tracep->declBit(c+1232,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1233,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1399,"auto_out_rready", false,-1);
    tracep->declBit(c+1400,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1401,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1613,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1614,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1616,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1409,"auto_out_rlast", false,-1);
    tracep->declBit(c+1230,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1410,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1234,"len", false,-1, 7,0);
    tracep->declBus(c+1235,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1236,"len_1", false,-1, 7,0);
    tracep->declBus(c+1237,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1228,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1238,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1239,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1231,"w_last", false,-1);
    tracep->declBit(c+1404,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+1227,"io_enq_valid", false,-1);
    tracep->declBus(c+1091,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1092,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1093,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1094,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1095,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1411,"io_deq_ready", false,-1);
    tracep->declBit(c+1232,"io_deq_valid", false,-1);
    tracep->declBus(c+1218,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1240,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1241,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1220,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1242,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1232,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1412,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1225,"io_enq_valid", false,-1);
    tracep->declBus(c+1096,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1097,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1098,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1099,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1100,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1413,"io_deq_ready", false,-1);
    tracep->declBit(c+1243,"io_deq_valid", false,-1);
    tracep->declBus(c+1210,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1244,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1245,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1212,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1246,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1243,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1414,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1226,"io_enq_valid", false,-1);
    tracep->declBus(c+1224,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1101,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1102,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1415,"io_deq_ready", false,-1);
    tracep->declBit(c+1247,"io_deq_valid", false,-1);
    tracep->declBus(c+1214,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1215,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1617,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1247,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1416,"do_enq", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1417,"auto_in_awready", false,-1);
    tracep->declBit(c+1248,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1210,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1249,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1296,"auto_in_wready", false,-1);
    tracep->declBit(c+1250,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1418,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1419,"auto_in_arready", false,-1);
    tracep->declBit(c+1251,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1252,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1420,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1419,"nodeIn_arready", false,-1);
    tracep->declBit(c+1417,"nodeIn_awready", false,-1);
    tracep->declBit(c+1253,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1421,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1254,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1421,"R0_en", false,-1);
    tracep->declBit(c+1581,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1255,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1422,"W0_en", false,-1);
    tracep->declBit(c+1581,"W0_clk", false,-1);
    tracep->declBus(c+1214,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1215,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1423,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1103,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1096,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1097,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1098,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1099,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1297,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1104,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1224,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1105,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1424,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1425,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1618,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1426,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1106,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1091,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1092,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1094,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1095,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1107,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1427,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1428,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1619,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1620,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1429,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1379,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1222,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1096,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1097,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1098,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1099,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1380,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1223,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1224,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1381,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+518,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+519,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+520,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1377,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1221,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1091,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1092,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1094,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1095,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1378,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+513,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+514,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+515,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+516,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+517,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1225,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1096,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1097,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1098,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1099,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1226,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1224,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+461,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1397,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1398,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1612,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1227,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1091,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1092,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1094,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1095,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1399,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1400,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1401,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1613,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1614,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1615,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1424,"in_0_bvalid", false,-1);
    tracep->declBit(c+1427,"in_0_rvalid", false,-1);
    tracep->declBit(c+1430,"in_0_wready", false,-1);
    tracep->declBit(c+1431,"in_0_awready", false,-1);
    tracep->declBit(c+462,"in_0_arready", false,-1);
    tracep->declBit(c+1423,"anonIn_awready", false,-1);
    tracep->declBit(c+1426,"anonIn_arready", false,-1);
    tracep->declBit(c+1108,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1109,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1110,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1111,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1112,"arSel", false,-1, 15,0);
    tracep->declBus(c+1113,"awSel", false,-1, 15,0);
    tracep->declBus(c+1432,"rSel", false,-1, 15,0);
    tracep->declBus(c+1433,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1256,"in_0_arvalid", false,-1);
    tracep->declBit(c+138,"latched", false,-1);
    tracep->declBit(c+1257,"in_0_awvalid", false,-1);
    tracep->declBit(c+1258,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1259,"in_0_wvalid", false,-1);
    tracep->declBit(c+139,"idle_2", false,-1);
    tracep->declBit(c+1434,"anyValid", false,-1);
    tracep->declBus(c+1435,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1436,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1437,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1438,"prefixOR_1", false,-1);
    tracep->declBit(c+1439,"winner_2_1", false,-1);
    tracep->declBit(c+141,"state_2_0", false,-1);
    tracep->declBit(c+142,"state_2_1", false,-1);
    tracep->declBit(c+1440,"muxState_2_0", false,-1);
    tracep->declBit(c+1441,"muxState_2_1", false,-1);
    tracep->declBit(c+143,"idle_3", false,-1);
    tracep->declBit(c+1442,"anyValid_1", false,-1);
    tracep->declBus(c+1443,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+144,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1444,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1445,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1446,"winner_3_0", false,-1);
    tracep->declBit(c+1447,"winner_3_1", false,-1);
    tracep->declBit(c+145,"state_3_0", false,-1);
    tracep->declBit(c+146,"state_3_1", false,-1);
    tracep->declBit(c+1448,"muxState_3_0", false,-1);
    tracep->declBit(c+1449,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1258,"io_enq_valid", false,-1);
    tracep->declBus(c+1114,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1450,"io_deq_ready", false,-1);
    tracep->declBit(c+1260,"io_deq_valid", false,-1);
    tracep->declBus(c+1261,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+148,"wrap", false,-1);
    tracep->declBit(c+149,"wrap_1", false,-1);
    tracep->declBit(c+150,"maybe_full", false,-1);
    tracep->declBit(c+151,"ptr_match", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+1260,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1451,"do_deq", false,-1);
    tracep->declBit(c+1452,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+149,"R0_addr", false,-1);
    tracep->declBit(c+1674,"R0_en", false,-1);
    tracep->declBit(c+1581,"R0_clk", false,-1);
    tracep->declBus(c+154,"R0_data", false,-1, 1,0);
    tracep->declBit(c+148,"W0_addr", false,-1);
    tracep->declBit(c+1452,"W0_en", false,-1);
    tracep->declBit(c+1581,"W0_clk", false,-1);
    tracep->declBus(c+1114,"W0_data", false,-1, 1,0);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1453,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1262,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1210,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1211,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1212,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1403,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1230,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1231,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1404,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1405,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1398,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1406,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1454,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1263,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1399,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1400,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1401,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1613,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1614,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1409,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1417,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1248,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1210,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1249,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1296,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1250,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1418,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1419,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1251,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1252,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1420,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1264,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1265,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+157,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1266,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1267,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1621,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+158,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+159,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1208,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1209,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1210,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1211,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1212,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1208,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1213,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1373,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1374,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1609,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1216,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1217,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1375,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1610,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1609,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1405,"in_0_bvalid", false,-1);
    tracep->declBit(c+1400,"in_0_rvalid", false,-1);
    tracep->declBit(c+1455,"in_0_wready", false,-1);
    tracep->declBit(c+1456,"in_0_awready", false,-1);
    tracep->declBit(c+1454,"in_0_arready", false,-1);
    tracep->declBit(c+1453,"anonIn_awready", false,-1);
    tracep->declBit(c+1268,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1269,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1270,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1271,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1272,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1273,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1274,"arSel", false,-1, 15,0);
    tracep->declBus(c+1275,"awSel", false,-1, 15,0);
    tracep->declBus(c+1457,"rSel", false,-1, 15,0);
    tracep->declBus(c+1458,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1276,"in_0_awvalid", false,-1);
    tracep->declBit(c+1277,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1278,"in_0_wvalid", false,-1);
    tracep->declBit(c+194,"idle_3", false,-1);
    tracep->declBit(c+1459,"anyValid", false,-1);
    tracep->declBus(c+1460,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+195,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1461,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1462,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1463,"prefixOR_1", false,-1);
    tracep->declBit(c+1464,"winner_3_1", false,-1);
    tracep->declBit(c+1465,"winner_3_2", false,-1);
    tracep->declBit(c+196,"state_3_0", false,-1);
    tracep->declBit(c+197,"state_3_1", false,-1);
    tracep->declBit(c+198,"state_3_2", false,-1);
    tracep->declBit(c+1466,"muxState_3_0", false,-1);
    tracep->declBit(c+1467,"muxState_3_1", false,-1);
    tracep->declBit(c+1468,"muxState_3_2", false,-1);
    tracep->declBit(c+199,"idle_4", false,-1);
    tracep->declBit(c+1469,"anyValid_1", false,-1);
    tracep->declBus(c+1470,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1471,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1472,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1473,"winner_4_0", false,-1);
    tracep->declBit(c+1474,"winner_4_2", false,-1);
    tracep->declBit(c+201,"state_4_0", false,-1);
    tracep->declBit(c+202,"state_4_2", false,-1);
    tracep->declBit(c+1475,"muxState_4_0", false,-1);
    tracep->declBit(c+1476,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1277,"io_enq_valid", false,-1);
    tracep->declBus(c+1279,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1477,"io_deq_ready", false,-1);
    tracep->declBit(c+1280,"io_deq_valid", false,-1);
    tracep->declBus(c+1281,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1280,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1478,"do_deq", false,-1);
    tracep->declBit(c+1479,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1674,"R0_en", false,-1);
    tracep->declBit(c+1581,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1479,"W0_en", false,-1);
    tracep->declBit(c+1581,"W0_clk", false,-1);
    tracep->declBus(c+1279,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1402,"auto_in_awready", false,-1);
    tracep->declBit(c+1228,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1210,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1211,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1212,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1229,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1403,"auto_in_wready", false,-1);
    tracep->declBit(c+1230,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1231,"auto_in_wlast", false,-1);
    tracep->declBit(c+1404,"auto_in_bready", false,-1);
    tracep->declBit(c+1405,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1398,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1406,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1407,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1408,"auto_in_arready", false,-1);
    tracep->declBit(c+1232,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1233,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1399,"auto_in_rready", false,-1);
    tracep->declBit(c+1400,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1401,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1613,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1614,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1616,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1409,"auto_in_rlast", false,-1);
    tracep->declBit(c+1453,"auto_out_awready", false,-1);
    tracep->declBit(c+1262,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1210,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1211,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1212,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1403,"auto_out_wready", false,-1);
    tracep->declBit(c+1230,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1231,"auto_out_wlast", false,-1);
    tracep->declBit(c+1404,"auto_out_bready", false,-1);
    tracep->declBit(c+1405,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1398,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1406,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1454,"auto_out_arready", false,-1);
    tracep->declBit(c+1263,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1399,"auto_out_rready", false,-1);
    tracep->declBit(c+1400,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1401,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1613,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1614,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1409,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1298,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1480,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1299,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1481,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1300,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1482,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1301,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1483,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1302,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1484,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1303,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1485,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1304,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1486,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1305,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1487,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1306,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1488,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1307,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1489,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1308,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1490,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1309,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1491,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+1310,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1492,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1311,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1493,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1312,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1494,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1313,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1495,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1314,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1496,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1315,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1497,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1316,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1498,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1317,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1499,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1318,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1500,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1319,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1501,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1320,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1502,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1321,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1503,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1322,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1504,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1323,"io_enq_valid", false,-1);
    tracep->declBit(c+1229,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1505,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1324,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1506,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1325,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1507,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1326,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1508,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1327,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1509,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1328,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1510,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1329,"io_enq_valid", false,-1);
    tracep->declBit(c+1233,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1511,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1622,"reset", false,-1);
    tracep->declBit(c+1423,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1103,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1096,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1097,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1098,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1099,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1100,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1297,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1104,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1224,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1105,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1424,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1425,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1618,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1426,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1106,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1091,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1092,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1094,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1095,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1107,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1427,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1428,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1619,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1620,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1429,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1622,"reset", false,-1);
    tracep->declBit(c+1669,"io_interrupt", false,-1);
    tracep->declBit(c+1423,"io_master_awready", false,-1);
    tracep->declBit(c+1103,"io_master_awvalid", false,-1);
    tracep->declBus(c+1096,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1097,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1098,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1099,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1100,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1297,"io_master_wready", false,-1);
    tracep->declBit(c+1104,"io_master_wvalid", false,-1);
    tracep->declBus(c+1224,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1101,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"io_master_wlast", false,-1);
    tracep->declBit(c+1105,"io_master_bready", false,-1);
    tracep->declBit(c+1424,"io_master_bvalid", false,-1);
    tracep->declBus(c+1425,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1618,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1426,"io_master_arready", false,-1);
    tracep->declBit(c+1106,"io_master_arvalid", false,-1);
    tracep->declBus(c+1091,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1092,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1094,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1095,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1107,"io_master_rready", false,-1);
    tracep->declBit(c+1427,"io_master_rvalid", false,-1);
    tracep->declBus(c+1428,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1619,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1620,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1429,"io_master_rlast", false,-1);
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
    tracep->declBus(c+1623,"pc", false,-1, 31,0);
    tracep->declBit(c+1674,"pc_valid", false,-1);
    tracep->declBus(c+1015,"inst_if", false,-1, 31,0);
    tracep->declBus(c+1016,"pc_if", false,-1, 31,0);
    tracep->declBit(c+1017,"if_valid", false,-1);
    tracep->declBit(c+1334,"if_ready", false,-1);
    tracep->declBus(c+1689,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1689,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1335,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1115,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1676,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1678,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+341,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1676,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1690,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+342,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1691,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1670,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+343,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1660,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+344,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1692,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+475,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1669,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1693,"if_axi_awready", false,-1);
    tracep->declBit(c+1669,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1694,"if_axi_wready", false,-1);
    tracep->declBit(c+1695,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1669,"if_axi_bready", false,-1);
    tracep->declBit(c+1336,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1116,"if_axi_arready", false,-1);
    tracep->declBit(c+1117,"if_axi_rvalid", false,-1);
    tracep->declBit(c+1018,"if_axi_rready", false,-1);
    tracep->declBit(c+1696,"if_axi_wlast", false,-1);
    tracep->declBit(c+1697,"if_axi_rlast", false,-1);
    tracep->declBus(c+1698,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1699,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1118,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1512,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1700,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1701,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1119,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1702,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+463,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1703,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+464,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1704,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1120,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1705,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1121,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1624,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1625,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1706,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+465,"icache_axi_awready", false,-1);
    tracep->declBit(c+1707,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1626,"icache_axi_wready", false,-1);
    tracep->declBit(c+466,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1708,"icache_axi_bready", false,-1);
    tracep->declBit(c+1122,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1200,"icache_axi_arready", false,-1);
    tracep->declBit(c+1201,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+1123,"icache_axi_rready", false,-1);
    tracep->declBit(c+1709,"icache_axi_wlast", false,-1);
    tracep->declBit(c+1513,"icache_axi_rlast", false,-1);
    tracep->declBus(c+904,"inst_id", false,-1, 31,0);
    tracep->declBit(c+1282,"id_valid", false,-1);
    tracep->declBit(c+1283,"id_ready", false,-1);
    tracep->declBus(c+1019,"rs1", false,-1, 4,0);
    tracep->declBus(c+1020,"rs2", false,-1, 4,0);
    tracep->declBus(c+1021,"pc_id", false,-1, 31,0);
    tracep->declBus(c+905,"imm_id", false,-1, 31,0);
    tracep->declBus(c+1022,"op_id", false,-1, 6,0);
    tracep->declBus(c+1023,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+906,"rd_id", false,-1, 4,0);
    tracep->declBit(c+907,"gpr_wen_id", false,-1);
    tracep->declBus(c+908,"alu_sel_id", false,-1, 3,0);
    tracep->declBus(c+909,"a_id", false,-1, 31,0);
    tracep->declBus(c+910,"b_id", false,-1, 31,0);
    tracep->declBus(c+345,"r1_id", false,-1, 31,0);
    tracep->declBus(c+1024,"r2_id", false,-1, 31,0);
    tracep->declBus(c+911,"csr_id", false,-1, 31,0);
    tracep->declBus(c+346,"mepc_id", false,-1, 31,0);
    tracep->declBus(c+347,"mtvec_id", false,-1, 31,0);
    tracep->declBit(c+1025,"mepc_wen_id", false,-1);
    tracep->declBit(c+1026,"mstatus_wen_id", false,-1);
    tracep->declBit(c+1027,"mcause_wen_id", false,-1);
    tracep->declBit(c+1028,"mtvec_wen_id", false,-1);
    tracep->declBit(c+1337,"fencei_id", false,-1);
    tracep->declBus(c+912,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+913,"inst_ex", false,-1, 31,0);
    tracep->declBit(c+1029,"ex_ready", false,-1);
    tracep->declBit(c+1284,"ex_valid", false,-1);
    tracep->declBus(c+348,"op_ex", false,-1, 6,0);
    tracep->declBus(c+349,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+914,"rd_ex", false,-1, 4,0);
    tracep->declBit(c+915,"gpr_wen_ex", false,-1);
    tracep->declBus(c+1030,"mepc_ex", false,-1, 31,0);
    tracep->declBus(c+1031,"mstatus_ex", false,-1, 31,0);
    tracep->declBus(c+1032,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+1033,"mtvec_ex", false,-1, 31,0);
    tracep->declBit(c+1034,"mepc_wen_ex", false,-1);
    tracep->declBit(c+1035,"mstatus_wen_ex", false,-1);
    tracep->declBit(c+1036,"mcause_wen_ex", false,-1);
    tracep->declBit(c+1037,"mtvec_wen_ex", false,-1);
    tracep->declBus(c+916,"ex_ex", false,-1, 31,0);
    tracep->declBit(c+1038,"ls_valid_ex", false,-1);
    tracep->declBit(c+350,"ls_wen_ex", false,-1);
    tracep->declBit(c+1039,"ls_read_ex", false,-1);
    tracep->declBit(c+1040,"ls_write_ex", false,-1);
    tracep->declBus(c+1041,"ls_waddr_ex", false,-1, 31,0);
    tracep->declBus(c+351,"ls_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+1042,"ls_raddr_ex", false,-1, 31,0);
    tracep->declBus(c+1043,"ls_wmask_ex", false,-1, 3,0);
    tracep->declBus(c+1044,"ls_awsize_ex", false,-1, 2,0);
    tracep->declBus(c+1045,"ls_arsize_ex", false,-1, 2,0);
    tracep->declBus(c+1046,"ls_awlen_ex", false,-1, 7,0);
    tracep->declBus(c+1047,"ls_arlen_ex", false,-1, 7,0);
    tracep->declBus(c+1048,"ls_awburst_ex", false,-1, 1,0);
    tracep->declBus(c+1049,"ls_arburst_ex", false,-1, 1,0);
    tracep->declBus(c+917,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+476,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+477,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+478,"dnpc_ls", false,-1, 31,0);
    tracep->declBit(c+1124,"ls_ready", false,-1);
    tracep->declBit(c+1125,"ls_valid", false,-1);
    tracep->declBit(c+1126,"difftest", false,-1);
    tracep->declBus(c+479,"xrd_ls", false,-1, 31,0);
    tracep->declBus(c+480,"rd_ls", false,-1, 4,0);
    tracep->declBit(c+481,"gpr_wen_ls", false,-1);
    tracep->declBus(c+983,"mepc_ls", false,-1, 31,0);
    tracep->declBus(c+984,"mstatus_ls", false,-1, 31,0);
    tracep->declBus(c+985,"mcause_ls", false,-1, 31,0);
    tracep->declBus(c+986,"mtvec_ls", false,-1, 31,0);
    tracep->declBit(c+987,"mepc_wen_ls", false,-1);
    tracep->declBit(c+988,"mstatus_wen_ls", false,-1);
    tracep->declBit(c+989,"mcause_wen_ls", false,-1);
    tracep->declBit(c+990,"mtvec_wen_ls", false,-1);
    tracep->declBus(c+991,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1627,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+992,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1202,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+993,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+994,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+995,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1710,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+467,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1711,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+468,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+996,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+997,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+998,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+999,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1628,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1629,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1000,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1514,"ls_axi_awready", false,-1);
    tracep->declBit(c+1001,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1630,"ls_axi_wready", false,-1);
    tracep->declBit(c+1515,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+1002,"ls_axi_bready", false,-1);
    tracep->declBit(c+1003,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1516,"ls_axi_arready", false,-1);
    tracep->declBit(c+1517,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+1004,"ls_axi_rready", false,-1);
    tracep->declBit(c+1005,"ls_axi_wlast", false,-1);
    tracep->declBit(c+469,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1127,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1285,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1128,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+352,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1129,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1130,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1131,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1132,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+353,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1133,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+354,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1134,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1135,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1136,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1137,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+355,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+356,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1138,"c_axi_awvalid", false,-1);
    tracep->declBit(c+357,"c_axi_awready", false,-1);
    tracep->declBit(c+1139,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1050,"c_axi_wready", false,-1);
    tracep->declBit(c+358,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1140,"c_axi_bready", false,-1);
    tracep->declBit(c+1141,"c_axi_arvalid", false,-1);
    tracep->declBit(c+918,"c_axi_arready", false,-1);
    tracep->declBit(c+919,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1142,"c_axi_rready", false,-1);
    tracep->declBit(c+1143,"c_axi_wlast", false,-1);
    tracep->declBit(c+359,"c_axi_rlast", false,-1);
    tracep->declBus(c+1051,"r1", false,-1, 31,0);
    tracep->declBus(c+1052,"r2", false,-1, 31,0);
    tracep->declBus(c+920,"mepc", false,-1, 31,0);
    tracep->declBus(c+921,"mstatus", false,-1, 31,0);
    tracep->declBus(c+922,"mcause", false,-1, 31,0);
    tracep->declBus(c+923,"mtvec", false,-1, 31,0);
    tracep->declBus(c+360,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+361,"marchid", false,-1, 31,0);
    tracep->declBit(c+1286,"isRAW", false,-1);
    tracep->declBit(c+1574,"isCHazard", false,-1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+357,"c_axi_awready", false,-1);
    tracep->declBit(c+1138,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1132,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1127,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1130,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1134,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1136,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1050,"c_axi_wready", false,-1);
    tracep->declBit(c+1139,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1285,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1129,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1143,"c_axi_wlast", false,-1);
    tracep->declBit(c+1140,"c_axi_bready", false,-1);
    tracep->declBit(c+358,"c_axi_bvalid", false,-1);
    tracep->declBus(c+353,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+355,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+918,"c_axi_arready", false,-1);
    tracep->declBit(c+1141,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1133,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1128,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1131,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1135,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1137,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1142,"c_axi_rready", false,-1);
    tracep->declBit(c+919,"c_axi_rvalid", false,-1);
    tracep->declBus(c+354,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+352,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+356,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+359,"c_axi_rlast", false,-1);
    tracep->declBit(c+357,"axi_awready", false,-1);
    tracep->declBit(c+1050,"axi_wready", false,-1);
    tracep->declBit(c+358,"axi_bvalid", false,-1);
    tracep->declBit(c+918,"axi_arready", false,-1);
    tracep->declBit(c+919,"axi_rvalid", false,-1);
    tracep->declBit(c+359,"axi_rlast", false,-1);
    tracep->declBus(c+355,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+356,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+353,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+354,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+352,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+362,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1712,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1713,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+363,"mtime", false,-1, 63,0);
    tracep->declBus(c+1631,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1574,"isCHazard", false,-1);
    tracep->declBus(c+904,"inst_i", false,-1, 31,0);
    tracep->declBus(c+912,"pc_o", false,-1, 31,0);
    tracep->declBus(c+913,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1282,"id_valid_i", false,-1);
    tracep->declBit(c+1029,"ex_ready_o", false,-1);
    tracep->declBit(c+1284,"ex_valid_o", false,-1);
    tracep->declBit(c+1124,"ls_ready_i", false,-1);
    tracep->declBus(c+1021,"pc_i", false,-1, 31,0);
    tracep->declBus(c+905,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1022,"op_i", false,-1, 6,0);
    tracep->declBus(c+1023,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+906,"rd_i", false,-1, 4,0);
    tracep->declBit(c+907,"gpr_wen_i", false,-1);
    tracep->declBus(c+908,"alu_sel_i", false,-1, 3,0);
    tracep->declBus(c+909,"a_i", false,-1, 31,0);
    tracep->declBus(c+910,"b_i", false,-1, 31,0);
    tracep->declBus(c+345,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1024,"r2_i", false,-1, 31,0);
    tracep->declBus(c+911,"csr_i", false,-1, 31,0);
    tracep->declBus(c+346,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+347,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1025,"mepc_wen_i", false,-1);
    tracep->declBit(c+1026,"mstatus_wen_i", false,-1);
    tracep->declBit(c+1027,"mcause_wen_i", false,-1);
    tracep->declBit(c+1028,"mtvec_wen_i", false,-1);
    tracep->declBus(c+348,"op_o", false,-1, 6,0);
    tracep->declBus(c+349,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+914,"rd_o", false,-1, 4,0);
    tracep->declBit(c+915,"gpr_wen_o", false,-1);
    tracep->declBus(c+1030,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+1031,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+1032,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1033,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+1034,"mepc_wen_o", false,-1);
    tracep->declBit(c+1035,"mstatus_wen_o", false,-1);
    tracep->declBit(c+1036,"mcause_wen_o", false,-1);
    tracep->declBit(c+1037,"mtvec_wen_o", false,-1);
    tracep->declBus(c+916,"ex_o", false,-1, 31,0);
    tracep->declBit(c+1038,"ls_valid_o", false,-1);
    tracep->declBit(c+350,"ls_wen_o", false,-1);
    tracep->declBit(c+1039,"ls_read_o", false,-1);
    tracep->declBit(c+1040,"ls_write_o", false,-1);
    tracep->declBus(c+1041,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+351,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1042,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+1043,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+1044,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1045,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1046,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1047,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1048,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1049,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+917,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+365,"ex_valid_reg", false,-1);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1053,"state", false,-1);
    tracep->declBus(c+1632,"al_res", false,-1, 31,0);
    tracep->declBit(c+1633,"al_done", false,-1);
    tracep->declBus(c+1634,"ex", false,-1, 31,0);
    tracep->declBus(c+1054,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+1055,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+1056,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1055,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+1055,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+1057,"ls_valid", false,-1);
    tracep->declBit(c+1058,"ls_wen", false,-1);
    tracep->declBus(c+1059,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+1060,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+1061,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1062,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+1063,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1064,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1678,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1678,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1661,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1661,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+905,"offset", false,-1, 31,0);
    tracep->declBit(c+1065,"jalen", false,-1);
    tracep->declBit(c+1066,"jalren", false,-1);
    tracep->declBit(c+455,"beqen", false,-1);
    tracep->declBit(c+456,"bneen", false,-1);
    tracep->declBit(c+457,"blten", false,-1);
    tracep->declBit(c+458,"bgeen", false,-1);
    tracep->declBit(c+459,"bltuen", false,-1);
    tracep->declBit(c+460,"bgeuen", false,-1);
    tracep->declBit(c+1067,"ecall_en", false,-1);
    tracep->declBit(c+1635,"mret_en", false,-1);
    tracep->declBus(c+1068,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+909,"a", false,-1, 31,0);
    tracep->declBus(c+910,"b", false,-1, 31,0);
    tracep->declBus(c+908,"opcode", false,-1, 3,0);
    tracep->declBus(c+1632,"res", false,-1, 31,0);
    tracep->declBit(c+1633,"done", false,-1);
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
    tracep->declBus(c+1728,"n", false,-1, 31,0);
    tracep->declBus(c+1728,"m", false,-1, 31,0);
    tracep->declBus(c+1729,"w", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1337,"fencei_i", false,-1);
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
    tracep->declBit(c+1116,"m_axi_arready", false,-1);
    tracep->declBit(c+1336,"m_axi_arvalid", false,-1);
    tracep->declBus(c+342,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1335,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+341,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+343,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+344,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1018,"m_axi_rready", false,-1);
    tracep->declBit(c+1117,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1691,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1115,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+475,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1697,"m_axi_rlast", false,-1);
    tracep->declBit(c+465,"s_axi_awready", false,-1);
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
    tracep->declBit(c+466,"s_axi_bvalid", false,-1);
    tracep->declBus(c+463,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1624,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1200,"s_axi_arready", false,-1);
    tracep->declBit(c+1122,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1703,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1118,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1119,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1120,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1121,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1123,"s_axi_rready", false,-1);
    tracep->declBit(c+1201,"s_axi_rvalid", false,-1);
    tracep->declBus(c+464,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1512,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1625,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1513,"s_axi_rlast", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1144+i*1,"valid_reg", true,(i+0), 15,0);
    }
    tracep->declBus(c+1338,"tag", false,-1, 26,0);
    tracep->declBus(c+1339,"index", false,-1, 0,0);
    tracep->declBus(c+1340,"offset", false,-1, 1,0);
    tracep->declBus(c+1148,"s_tag", false,-1, 26,0);
    tracep->declBus(c+1149,"s_index", false,-1, 0,0);
    tracep->declBus(c+1150,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1575,"access", false,-1, 7,0);
    tracep->declBus(c+1576,"access_raw", false,-1, 7,0);
    tracep->declBus(c+1660,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1661,"TRANS", false,-1, 1,0);
    tracep->declBus(c+1662,"RETURN", false,-1, 1,0);
    tracep->declBus(c+1151,"state", false,-1, 1,0);
    tracep->declBus(c+1152,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+1153,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+492,"j", false,-1, 31,0);
    tracep->declBus(c+493,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+494,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1154,"a", false,-1, 31,0);
    tracep->declBus(c+1155,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1286,"isRAW", false,-1);
    tracep->declBit(c+1574,"isCHazard", false,-1);
    tracep->declBus(c+904,"inst_o", false,-1, 31,0);
    tracep->declBus(c+1019,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+1020,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+1051,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1052,"r2_i", false,-1, 31,0);
    tracep->declBus(c+920,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+921,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+922,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+923,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1017,"if_valid_i", false,-1);
    tracep->declBit(c+1283,"id_ready_o", false,-1);
    tracep->declBit(c+1282,"id_valid_o", false,-1);
    tracep->declBit(c+1029,"ex_ready_i", false,-1);
    tracep->declBus(c+1016,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1015,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1021,"pc_o", false,-1, 31,0);
    tracep->declBus(c+905,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1022,"op_o", false,-1, 6,0);
    tracep->declBus(c+1023,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+906,"rd_o", false,-1, 4,0);
    tracep->declBit(c+907,"gpr_wen_o", false,-1);
    tracep->declBus(c+908,"alu_sel_o", false,-1, 3,0);
    tracep->declBus(c+909,"a_o", false,-1, 31,0);
    tracep->declBus(c+910,"b_o", false,-1, 31,0);
    tracep->declBus(c+345,"r1_o", false,-1, 31,0);
    tracep->declBus(c+1024,"r2_o", false,-1, 31,0);
    tracep->declBus(c+911,"csr_o", false,-1, 31,0);
    tracep->declBus(c+346,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+347,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+1025,"mepc_wen_o", false,-1);
    tracep->declBit(c+1026,"mstatus_wen_o", false,-1);
    tracep->declBit(c+1027,"mcause_wen_o", false,-1);
    tracep->declBit(c+1028,"mtvec_wen_o", false,-1);
    tracep->declBit(c+1337,"fencei_o", false,-1);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1069,"state", false,-1);
    tracep->declBus(c+1070,"op", false,-1, 6,0);
    tracep->declBus(c+1071,"rd", false,-1, 4,0);
    tracep->declBus(c+1072,"funct3", false,-1, 2,0);
    tracep->declBus(c+1073,"immI", false,-1, 31,0);
    tracep->declBus(c+1074,"immU", false,-1, 31,0);
    tracep->declBus(c+1075,"immS", false,-1, 31,0);
    tracep->declBus(c+1076,"immB", false,-1, 31,0);
    tracep->declBus(c+1077,"immJ", false,-1, 31,0);
    tracep->declBus(c+1078,"imm", false,-1, 31,0);
    tracep->declBus(c+1079,"funct7", false,-1, 6,0);
    tracep->declBus(c+1080,"shamt", false,-1, 4,0);
    tracep->declBit(c+1081,"gpr_wen", false,-1);
    tracep->declBus(c+1082,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+1083,"a", false,-1, 31,0);
    tracep->declBus(c+1084,"b", false,-1, 31,0);
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
    tracep->declBit(c+1085,"mepc_wen", false,-1);
    tracep->declBit(c+1086,"mstatus_wen", false,-1);
    tracep->declBit(c+1087,"mcause_wen", false,-1);
    tracep->declBit(c+1088,"mtvec_wen", false,-1);
    tracep->declBit(c+1089,"fencei", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1574,"isCHazard", false,-1);
    tracep->declBit(c+1674,"pc_valid_i", false,-1);
    tracep->declBit(c+1334,"if_ready_o", false,-1);
    tracep->declBit(c+1017,"if_valid_o", false,-1);
    tracep->declBit(c+1283,"id_ready_i", false,-1);
    tracep->declBus(c+1623,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1016,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1015,"inst_o", false,-1, 31,0);
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
    tracep->declBit(c+1116,"if_axi_arready_i", false,-1);
    tracep->declBit(c+1336,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+342,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+1335,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+341,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+343,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+344,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1018,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1117,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1691,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1115,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+475,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1697,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1341,"state", false,-1);
    tracep->declBit(c+366,"isCHazard_reg", false,-1);
    tracep->declBus(c+1714,"AXI_IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"AXI_FETCH", false,-1, 0,0);
    tracep->declBit(c+1342,"axi_state", false,-1);
    tracep->declBus(c+1090,"axi_rdata_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+912,"pc_i", false,-1, 31,0);
    tracep->declBus(c+913,"inst_i", false,-1, 31,0);
    tracep->declBus(c+917,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+476,"pc_o", false,-1, 31,0);
    tracep->declBus(c+477,"inst_o", false,-1, 31,0);
    tracep->declBus(c+478,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+1637,"ex_valid_i", false,-1);
    tracep->declBit(c+1124,"ls_ready_o", false,-1);
    tracep->declBit(c+1125,"ls_valid_o", false,-1);
    tracep->declBit(c+1126,"difftest_o", false,-1);
    tracep->declBus(c+348,"op_i", false,-1, 6,0);
    tracep->declBus(c+349,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+914,"rd_i", false,-1, 4,0);
    tracep->declBit(c+915,"gpr_wen_i", false,-1);
    tracep->declBus(c+1030,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+1031,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+1032,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+1033,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1034,"mepc_wen_i", false,-1);
    tracep->declBit(c+1035,"mstatus_wen_i", false,-1);
    tracep->declBit(c+1036,"mcause_wen_i", false,-1);
    tracep->declBit(c+1037,"mtvec_wen_i", false,-1);
    tracep->declBus(c+916,"ex_i", false,-1, 31,0);
    tracep->declBit(c+1038,"ls_valid_i", false,-1);
    tracep->declBit(c+350,"ls_wen_i", false,-1);
    tracep->declBit(c+1039,"ls_read_i", false,-1);
    tracep->declBit(c+1040,"ls_write_i", false,-1);
    tracep->declBus(c+1041,"ls_waddr_i", false,-1, 31,0);
    tracep->declBus(c+351,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1042,"ls_raddr_i", false,-1, 31,0);
    tracep->declBus(c+1043,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1044,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1045,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1046,"ls_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1047,"ls_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1048,"ls_awburst_i", false,-1, 1,0);
    tracep->declBus(c+1049,"ls_arburst_i", false,-1, 1,0);
    tracep->declBus(c+479,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+480,"rd_o", false,-1, 4,0);
    tracep->declBit(c+481,"gpr_wen_o", false,-1);
    tracep->declBus(c+983,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+984,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+985,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+986,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+987,"mepc_wen_o", false,-1);
    tracep->declBit(c+988,"mstatus_wen_o", false,-1);
    tracep->declBit(c+989,"mcause_wen_o", false,-1);
    tracep->declBit(c+990,"mtvec_wen_o", false,-1);
    tracep->declBit(c+1514,"ls_axi_awready", false,-1);
    tracep->declBit(c+1000,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1710,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+991,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+994,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+996,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+998,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1630,"ls_axi_wready", false,-1);
    tracep->declBit(c+1001,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1627,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+993,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1005,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1002,"ls_axi_bready", false,-1);
    tracep->declBit(c+1515,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+467,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1628,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1516,"ls_axi_arready", false,-1);
    tracep->declBit(c+1003,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1711,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+992,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+995,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+997,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+999,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1004,"ls_axi_rready", false,-1);
    tracep->declBit(c+1517,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+468,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1202,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1629,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+469,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1660,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1661,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1662,"DONE", false,-1, 1,0);
    tracep->declBus(c+1663,"DIFFTEST", false,-1, 1,0);
    tracep->declBus(c+1156,"state", false,-1, 1,0);
    tracep->declBus(c+1638,"xrd", false,-1, 31,0);
    tracep->declBit(c+1006,"ls_done_reg", false,-1);
    tracep->declBit(c+1006,"ls_done_o", false,-1);
    tracep->declBus(c+1007,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1287,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+1670,"AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1659,"AXI_READ", false,-1, 2,0);
    tracep->declBus(c+1671,"AXI_WRITE1", false,-1, 2,0);
    tracep->declBus(c+1672,"AXI_WRITE2", false,-1, 2,0);
    tracep->declBus(c+1673,"AXI_DONE", false,-1, 2,0);
    tracep->declBus(c+1008,"axi_state", false,-1, 2,0);
    tracep->declBit(c+1000,"axi_awvalid", false,-1);
    tracep->declBit(c+1001,"axi_wvalid", false,-1);
    tracep->declBus(c+1710,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+991,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1009,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+994,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+996,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+998,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+993,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1002,"axi_bready", false,-1);
    tracep->declBit(c+1005,"axi_wlast", false,-1);
    tracep->declBit(c+1003,"axi_arvalid", false,-1);
    tracep->declBit(c+1004,"axi_rready", false,-1);
    tracep->declBus(c+1711,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+992,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+995,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+997,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+999,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+1574,"isCHazard", false,-1);
    tracep->declBus(c+1623,"pc_o", false,-1, 31,0);
    tracep->declBus(c+917,"dnpc_i", false,-1, 31,0);
    tracep->declBit(c+1674,"pc_valid_o", false,-1);
    tracep->declBit(c+1334,"if_ready_i", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1730,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1731,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBus(c+479,"wdata", false,-1, 31,0);
    tracep->declBus(c+480,"waddr", false,-1, 4,0);
    tracep->declBit(c+481,"wen", false,-1);
    tracep->declBus(c+1019,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1051,"r1", false,-1, 31,0);
    tracep->declBus(c+1020,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1052,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+367+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBit(c+465,"IFU_AXI_AWREADY", false,-1);
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
    tracep->declBit(c+466,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+463,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1624,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1200,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1122,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1703,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1118,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1119,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1120,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1121,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1123,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1201,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+464,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1512,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1625,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1513,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1514,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1000,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1710,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+991,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+994,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+996,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+998,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1630,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1001,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1627,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+993,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1005,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+1002,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1515,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+467,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1628,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1516,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1003,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1711,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+992,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+995,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+997,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+999,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1004,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1517,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+468,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1202,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1629,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+469,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1423,"io_master_awready", false,-1);
    tracep->declBit(c+1103,"io_master_awvalid", false,-1);
    tracep->declBus(c+1096,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1097,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1098,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1099,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1100,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1297,"io_master_wready", false,-1);
    tracep->declBit(c+1104,"io_master_wvalid", false,-1);
    tracep->declBus(c+1224,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1101,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"io_master_wlast", false,-1);
    tracep->declBit(c+1105,"io_master_bready", false,-1);
    tracep->declBit(c+1424,"io_master_bvalid", false,-1);
    tracep->declBus(c+1425,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1618,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1426,"io_master_arready", false,-1);
    tracep->declBit(c+1106,"io_master_arvalid", false,-1);
    tracep->declBus(c+1091,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1092,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1094,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1095,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1107,"io_master_rready", false,-1);
    tracep->declBit(c+1427,"io_master_rvalid", false,-1);
    tracep->declBus(c+1428,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1619,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1620,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1429,"io_master_rlast", false,-1);
    tracep->declBit(c+357,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1138,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1132,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1127,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1130,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1134,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1136,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1050,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1139,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1285,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1129,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1143,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1140,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+358,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+353,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+355,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+918,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1141,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1133,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1128,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1131,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1135,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1137,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1142,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+919,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+354,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+352,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+356,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+359,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+360,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+361,"marchid", false,-1, 31,0);
    tracep->declBus(c+1157,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1288,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1158,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1518,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1159,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1160,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1161,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1162,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+470,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1163,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+471,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1164,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1165,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1166,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1167,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1639,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1640,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1168,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+472,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1169,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1641,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+473,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1170,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1171,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1519,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1520,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1172,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1173,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+474,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+495,"state", false,-1, 1,0);
    tracep->declBus(c+1174,"sel_m", false,-1, 1,0);
    tracep->declBus(c+1660,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1661,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1662,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1712,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1713,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1175,"sel_clint", false,-1);
    tracep->declBus(c+1732,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1733,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1176,"sel_mvendorid", false,-1);
    tracep->declBit(c+1177,"sel_marchid", false,-1);
    tracep->declBit(c+1178,"sel_id", false,-1);
    tracep->declBus(c+1179,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1289,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1180,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1642,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1181,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1182,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1183,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1184,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1734,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1185,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1735,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1186,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1187,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1188,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1189,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1736,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1737,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1738,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1190,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1191,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1739,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1740,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1192,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1193,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1674,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1674,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1194,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1195,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1741,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1742,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+1677,"din", false,-1, 31,0);
    tracep->declBus(c+361,"dout", false,-1, 31,0);
    tracep->declBit(c+1669,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1677,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+985,"din", false,-1, 31,0);
    tracep->declBus(c+922,"dout", false,-1, 31,0);
    tracep->declBit(c+989,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1677,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+983,"din", false,-1, 31,0);
    tracep->declBus(c+920,"dout", false,-1, 31,0);
    tracep->declBit(c+987,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1743,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+984,"din", false,-1, 31,0);
    tracep->declBus(c+921,"dout", false,-1, 31,0);
    tracep->declBit(c+988,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1677,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+986,"din", false,-1, 31,0);
    tracep->declBus(c+923,"dout", false,-1, 31,0);
    tracep->declBit(c+990,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1744,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1622,"rst", false,-1);
    tracep->declBus(c+1677,"din", false,-1, 31,0);
    tracep->declBus(c+360,"dout", false,-1, 31,0);
    tracep->declBit(c+1669,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"io_d", false,-1);
    tracep->declBit(c+399,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"io_d", false,-1);
    tracep->declBit(c+399,"io_q", false,-1);
    tracep->declBit(c+399,"sync_0", false,-1);
    tracep->declBit(c+400,"sync_1", false,-1);
    tracep->declBit(c+401,"sync_2", false,-1);
    tracep->declBit(c+402,"sync_3", false,-1);
    tracep->declBit(c+403,"sync_4", false,-1);
    tracep->declBit(c+404,"sync_5", false,-1);
    tracep->declBit(c+405,"sync_6", false,-1);
    tracep->declBit(c+406,"sync_7", false,-1);
    tracep->declBit(c+407,"sync_8", false,-1);
    tracep->declBit(c+408,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1356,"auto_in_psel", false,-1);
    tracep->declBit(c+1357,"auto_in_penable", false,-1);
    tracep->declBit(c+1346,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1345,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+510,"auto_in_pready", false,-1);
    tracep->declBit(c+1668,"auto_in_pslverr", false,-1);
    tracep->declBus(c+511,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1583,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1584,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1585,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1586,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1587,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1588,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1589,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1590,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1591,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1592,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBus(c+1330,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1356,"in_psel", false,-1);
    tracep->declBit(c+1357,"in_penable", false,-1);
    tracep->declBus(c+1345,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1346,"in_pwrite", false,-1);
    tracep->declBus(c+1347,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+510,"in_pready", false,-1);
    tracep->declBus(c+511,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1668,"in_pslverr", false,-1);
    tracep->declBus(c+1583,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1584,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1585,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1586,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1587,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1588,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1589,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1590,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1591,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1592,"gpio_seg_7", false,-1, 7,0);
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
    tracep->declBus(c+542,"led_reg", false,-1, 15,0);
    tracep->declBus(c+543,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+544+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1521,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1522,"write_en", false,-1);
    tracep->declBit(c+1523,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1354,"auto_in_psel", false,-1);
    tracep->declBit(c+1355,"auto_in_penable", false,-1);
    tracep->declBit(c+1346,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1345,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+508,"auto_in_pready", false,-1);
    tracep->declBit(c+1667,"auto_in_pslverr", false,-1);
    tracep->declBus(c+509,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1593,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1594,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBus(c+1330,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1354,"in_psel", false,-1);
    tracep->declBit(c+1355,"in_penable", false,-1);
    tracep->declBus(c+1345,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1346,"in_pwrite", false,-1);
    tracep->declBus(c+1347,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+508,"in_pready", false,-1);
    tracep->declBus(c+509,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1667,"in_pslverr", false,-1);
    tracep->declBit(c+1593,"ps2_clk", false,-1);
    tracep->declBit(c+1594,"ps2_data", false,-1);
    tracep->declBus(c+1763,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1764,"EXP", false,-1, 7,0);
    tracep->declBus(c+1010,"state", false,-1, 1,0);
    tracep->declBus(c+1011,"counter", false,-1, 3,0);
    tracep->declBus(c+1012,"buffer", false,-1, 7,0);
    tracep->declBus(c+1013,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1014,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1643,"ready", false,-1);
    tracep->declBus(c+1644,"rdata", false,-1, 31,0);
    tracep->declBit(c+1524,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1264,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1265,"auto_in_wvalid", false,-1);
    tracep->declBit(c+157,"auto_in_arready", false,-1);
    tracep->declBit(c+1266,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1267,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1621,"auto_in_rready", false,-1);
    tracep->declBit(c+158,"auto_in_rvalid", false,-1);
    tracep->declBus(c+159,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"state", false,-1);
    tracep->declBus(c+160,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+159,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1290,"raddr", false,-1, 31,0);
    tracep->declBit(c+1291,"ren", false,-1);
    tracep->declBus(c+1292,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1358,"auto_in_psel", false,-1);
    tracep->declBit(c+1359,"auto_in_penable", false,-1);
    tracep->declBit(c+1346,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1293,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1345,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1607,"auto_in_pready", false,-1);
    tracep->declBit(c+1669,"auto_in_pslverr", false,-1);
    tracep->declBus(c+902,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1577,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1578,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1604,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBus(c+1293,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1358,"in_psel", false,-1);
    tracep->declBit(c+1359,"in_penable", false,-1);
    tracep->declBus(c+1345,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1346,"in_pwrite", false,-1);
    tracep->declBus(c+1347,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1607,"in_pready", false,-1);
    tracep->declBus(c+902,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1669,"in_pslverr", false,-1);
    tracep->declBit(c+1577,"qspi_sck", false,-1);
    tracep->declBit(c+1578,"qspi_ce_n", false,-1);
    tracep->declBus(c+1604,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1604,"din", false,-1, 3,0);
    tracep->declBus(c+1579,"dout", false,-1, 3,0);
    tracep->declBus(c+1580,"douten", false,-1, 3,0);
    tracep->declBit(c+1645,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1581,"clk_i", false,-1);
    tracep->declBit(c+1582,"rst_i", false,-1);
    tracep->declBus(c+1293,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1347,"dat_i", false,-1, 31,0);
    tracep->declBus(c+902,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1348,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1358,"cyc_i", false,-1);
    tracep->declBit(c+1358,"stb_i", false,-1);
    tracep->declBit(c+1645,"ack_o", false,-1);
    tracep->declBit(c+1346,"we_i", false,-1);
    tracep->declBit(c+1577,"sck", false,-1);
    tracep->declBit(c+1578,"ce_n", false,-1);
    tracep->declBus(c+1604,"din", false,-1, 3,0);
    tracep->declBus(c+1579,"dout", false,-1, 3,0);
    tracep->declBus(c+1580,"douten", false,-1, 3,0);
    tracep->declBus(c+1714,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+552,"mr_sck", false,-1);
    tracep->declBit(c+553,"mr_ce_n", false,-1);
    tracep->declBus(c+1604,"mr_din", false,-1, 3,0);
    tracep->declBus(c+554,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+555,"mr_doe", false,-1);
    tracep->declBit(c+556,"mw_sck", false,-1);
    tracep->declBit(c+557,"mw_ce_n", false,-1);
    tracep->declBus(c+1604,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1525,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+558,"mw_doe", false,-1);
    tracep->declBit(c+1526,"mr_rd", false,-1);
    tracep->declBit(c+559,"mr_done", false,-1);
    tracep->declBit(c+1527,"mw_wr", false,-1);
    tracep->declBit(c+1528,"mw_done", false,-1);
    tracep->declBit(c+1358,"wb_valid", false,-1);
    tracep->declBit(c+1529,"wb_we", false,-1);
    tracep->declBit(c+1530,"wb_re", false,-1);
    tracep->declBit(c+560,"state", false,-1);
    tracep->declBit(c+1531,"nstate", false,-1);
    tracep->declBus(c+1532,"size", false,-1, 2,0);
    tracep->declBus(c+1533,"byte0", false,-1, 7,0);
    tracep->declBus(c+1534,"byte1", false,-1, 7,0);
    tracep->declBus(c+1535,"byte2", false,-1, 7,0);
    tracep->declBus(c+1536,"byte3", false,-1, 7,0);
    tracep->declBus(c+1331,"wdata", false,-1, 31,0);
    tracep->declBit(c+811,"qpi_flag", false,-1);
    tracep->declBit(c+812,"qpi_sck", false,-1);
    tracep->declBit(c+813,"qpi_ce_n", false,-1);
    tracep->declBus(c+814,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+815,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+816,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1646,"rst_n", false,-1);
    tracep->declBus(c+1332,"addr", false,-1, 23,0);
    tracep->declBit(c+1526,"rd", false,-1);
    tracep->declBus(c+1673,"size", false,-1, 2,0);
    tracep->declBit(c+559,"done", false,-1);
    tracep->declBus(c+902,"line", false,-1, 31,0);
    tracep->declBit(c+552,"sck", false,-1);
    tracep->declBit(c+553,"ce_n", false,-1);
    tracep->declBus(c+1604,"din", false,-1, 3,0);
    tracep->declBus(c+554,"dout", false,-1, 3,0);
    tracep->declBit(c+555,"douten", false,-1);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"READ", false,-1, 0,0);
    tracep->declBus(c+1765,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+561,"state", false,-1);
    tracep->declBit(c+1537,"nstate", false,-1);
    tracep->declBus(c+562,"counter", false,-1, 7,0);
    tracep->declBus(c+563,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+924+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1766,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+564,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1646,"rst_n", false,-1);
    tracep->declBus(c+1333,"addr", false,-1, 23,0);
    tracep->declBus(c+1331,"line", false,-1, 31,0);
    tracep->declBus(c+1532,"size", false,-1, 2,0);
    tracep->declBit(c+1527,"wr", false,-1);
    tracep->declBit(c+1528,"done", false,-1);
    tracep->declBit(c+556,"sck", false,-1);
    tracep->declBit(c+557,"ce_n", false,-1);
    tracep->declBus(c+1604,"din", false,-1, 3,0);
    tracep->declBus(c+1525,"dout", false,-1, 3,0);
    tracep->declBit(c+558,"douten", false,-1);
    tracep->declBus(c+1714,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1715,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1538,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+565,"state", false,-1);
    tracep->declBit(c+1539,"nstate", false,-1);
    tracep->declBus(c+566,"counter", false,-1, 7,0);
    tracep->declBus(c+567,"saddr", false,-1, 23,0);
    tracep->declBus(c+1767,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1389,"auto_in_awready", false,-1);
    tracep->declBit(c+1390,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1391,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1392,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1393,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1197,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1394,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1395,"auto_in_wready", false,-1);
    tracep->declBit(c+1396,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1295,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"auto_in_wlast", false,-1);
    tracep->declBit(c+1611,"auto_in_bready", false,-1);
    tracep->declBit(c+525,"auto_in_bvalid", false,-1);
    tracep->declBus(c+522,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1660,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1382,"auto_in_arready", false,-1);
    tracep->declBit(c+1383,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1384,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1385,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1386,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1196,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1387,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1388,"auto_in_rready", false,-1);
    tracep->declBit(c+521,"auto_in_rvalid", false,-1);
    tracep->declBus(c+522,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+523,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1660,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+524,"auto_in_rlast", false,-1);
    tracep->declBit(c+1605,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+498,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+940,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+941,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+942,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+943,"sdram_bundle_we", false,-1);
    tracep->declBus(c+944,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+945,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+499,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+969,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1389,"in_awready", false,-1);
    tracep->declBit(c+1390,"in_awvalid", false,-1);
    tracep->declBus(c+1392,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1391,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1393,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1197,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1394,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1395,"in_wready", false,-1);
    tracep->declBit(c+1396,"in_wvalid", false,-1);
    tracep->declBus(c+1295,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1198,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"in_wlast", false,-1);
    tracep->declBit(c+1611,"in_bready", false,-1);
    tracep->declBit(c+525,"in_bvalid", false,-1);
    tracep->declBus(c+1660,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+522,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1382,"in_arready", false,-1);
    tracep->declBit(c+1383,"in_arvalid", false,-1);
    tracep->declBus(c+1385,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1384,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1386,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1196,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1387,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1388,"in_rready", false,-1);
    tracep->declBit(c+521,"in_rvalid", false,-1);
    tracep->declBus(c+1660,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+523,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+524,"in_rlast", false,-1);
    tracep->declBus(c+522,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1605,"sdram_clk", false,-1);
    tracep->declBit(c+498,"sdram_cke", false,-1);
    tracep->declBit(c+940,"sdram_cs", false,-1);
    tracep->declBit(c+941,"sdram_ras", false,-1);
    tracep->declBit(c+942,"sdram_cas", false,-1);
    tracep->declBit(c+943,"sdram_we", false,-1);
    tracep->declBus(c+944,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+945,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+499,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+969,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+568,"sdram_dout_en", false,-1);
    tracep->declBus(c+569,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1581,"clk_i", false,-1);
    tracep->declBit(c+1582,"rst_i", false,-1);
    tracep->declBit(c+1390,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1392,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1391,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1393,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1394,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1396,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1295,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1198,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1199,"inport_wlast_i", false,-1);
    tracep->declBit(c+1611,"inport_bready_i", false,-1);
    tracep->declBit(c+1383,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1385,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1384,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1386,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1387,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1388,"inport_rready_i", false,-1);
    tracep->declBus(c+969,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1389,"inport_awready_o", false,-1);
    tracep->declBit(c+1395,"inport_wready_o", false,-1);
    tracep->declBit(c+525,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1660,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+522,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1382,"inport_arready_o", false,-1);
    tracep->declBit(c+521,"inport_rvalid_o", false,-1);
    tracep->declBus(c+523,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1660,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+522,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+524,"inport_rlast_o", false,-1);
    tracep->declBit(c+1605,"sdram_clk_o", false,-1);
    tracep->declBit(c+498,"sdram_cke_o", false,-1);
    tracep->declBit(c+940,"sdram_cs_o", false,-1);
    tracep->declBit(c+941,"sdram_ras_o", false,-1);
    tracep->declBit(c+942,"sdram_cas_o", false,-1);
    tracep->declBit(c+943,"sdram_we_o", false,-1);
    tracep->declBus(c+499,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+944,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+945,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+569,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+568,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1768,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1769,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1770,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1771,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1540,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1541,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1542,"ram_rd_w", false,-1);
    tracep->declBit(c+946,"ram_accept_w", false,-1);
    tracep->declBus(c+1295,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+570,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1543,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+571,"ram_ack_w", false,-1);
    tracep->declBit(c+1669,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1581,"clk_i", false,-1);
    tracep->declBit(c+1582,"rst_i", false,-1);
    tracep->declBit(c+1390,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1392,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1391,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1393,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1394,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1396,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1295,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1198,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1199,"axi_wlast_i", false,-1);
    tracep->declBit(c+1611,"axi_bready_i", false,-1);
    tracep->declBit(c+1383,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1385,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1384,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1386,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1387,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1388,"axi_rready_i", false,-1);
    tracep->declBit(c+946,"ram_accept_i", false,-1);
    tracep->declBit(c+571,"ram_ack_i", false,-1);
    tracep->declBit(c+1669,"ram_error_i", false,-1);
    tracep->declBus(c+570,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1389,"axi_awready_o", false,-1);
    tracep->declBit(c+1395,"axi_wready_o", false,-1);
    tracep->declBit(c+525,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1660,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+522,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1382,"axi_arready_o", false,-1);
    tracep->declBit(c+521,"axi_rvalid_o", false,-1);
    tracep->declBus(c+523,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1660,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+522,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+524,"axi_rlast_o", false,-1);
    tracep->declBus(c+1541,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1542,"ram_rd_o", false,-1);
    tracep->declBus(c+1543,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1540,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1295,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+572,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+573,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+574,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+575,"req_rd_q", false,-1);
    tracep->declBit(c+576,"req_wr_q", false,-1);
    tracep->declBus(c+577,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+578,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+579,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+580,"req_prio_q", false,-1);
    tracep->declBit(c+581,"req_hold_rd_q", false,-1);
    tracep->declBit(c+582,"req_hold_wr_q", false,-1);
    tracep->declBit(c+583,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1544,"req_push_w", false,-1);
    tracep->declBus(c+1647,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+584,"req_out_valid_w", false,-1);
    tracep->declBus(c+585,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1545,"resp_accept_w", false,-1);
    tracep->declBit(c+586,"resp_is_write_w", false,-1);
    tracep->declBit(c+587,"resp_is_read_w", false,-1);
    tracep->declBit(c+524,"resp_is_last_w", false,-1);
    tracep->declBus(c+522,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+588,"resp_valid_w", false,-1);
    tracep->declBit(c+589,"write_prio_w", false,-1);
    tracep->declBit(c+590,"read_prio_w", false,-1);
    tracep->declBit(c+1546,"write_active_w", false,-1);
    tracep->declBit(c+1542,"read_active_w", false,-1);
    tracep->declBus(c+1540,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1547,"wr_w", false,-1);
    tracep->declBit(c+1542,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1772,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1728,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1771,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1581,"clk_i", false,-1);
    tracep->declBit(c+1582,"rst_i", false,-1);
    tracep->declBus(c+1647,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1544,"push_i", false,-1);
    tracep->declBit(c+1545,"pop_i", false,-1);
    tracep->declBus(c+585,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+583,"accept_o", false,-1);
    tracep->declBit(c+584,"valid_o", false,-1);
    tracep->declBus(c+1729,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+591+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+595,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+596,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+597,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1731,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1728,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1771,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1581,"clk_i", false,-1);
    tracep->declBit(c+1582,"rst_i", false,-1);
    tracep->declBus(c+570,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+571,"push_i", false,-1);
    tracep->declBit(c+1545,"pop_i", false,-1);
    tracep->declBus(c+523,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+598,"accept_o", false,-1);
    tracep->declBit(c+588,"valid_o", false,-1);
    tracep->declBus(c+1729,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+599+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+603,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+604,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+605,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1581,"clk_i", false,-1);
    tracep->declBit(c+1582,"rst_i", false,-1);
    tracep->declBus(c+1541,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1542,"inport_rd_i", false,-1);
    tracep->declBus(c+1543,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1540,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1295,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+969,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+946,"inport_accept_o", false,-1);
    tracep->declBit(c+571,"inport_ack_o", false,-1);
    tracep->declBit(c+1669,"inport_error_o", false,-1);
    tracep->declBus(c+570,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1605,"sdram_clk_o", false,-1);
    tracep->declBit(c+498,"sdram_cke_o", false,-1);
    tracep->declBit(c+940,"sdram_cs_o", false,-1);
    tracep->declBit(c+941,"sdram_ras_o", false,-1);
    tracep->declBit(c+942,"sdram_cas_o", false,-1);
    tracep->declBit(c+943,"sdram_we_o", false,-1);
    tracep->declBus(c+499,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+944,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+945,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+569,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+568,"sdram_data_out_en_o", false,-1);
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
    tracep->declBus(c+1540,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1541,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1542,"ram_rd_w", false,-1);
    tracep->declBit(c+946,"ram_accept_w", false,-1);
    tracep->declBus(c+1295,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+570,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+571,"ram_ack_w", false,-1);
    tracep->declBit(c+1548,"ram_req_w", false,-1);
    tracep->declBus(c+947,"command_q", false,-1, 3,0);
    tracep->declBus(c+944,"addr_q", false,-1, 12,0);
    tracep->declBus(c+569,"data_q", false,-1, 31,0);
    tracep->declBit(c+606,"data_rd_en_q", false,-1);
    tracep->declBus(c+499,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+498,"cke_q", false,-1);
    tracep->declBus(c+945,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1780,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+607,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+969,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+608,"refresh_q", false,-1);
    tracep->declBus(c+948,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+609+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+949,"state_q", false,-1, 3,0);
    tracep->declBus(c+1549,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1550,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+617,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+618,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1551,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1552,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1553,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1728,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+619,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1554,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1781,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+950,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+620,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+570,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+621,"idx", false,-1, 31,0);
    tracep->declBus(c+622,"rd_q", false,-1, 3,0);
    tracep->declBit(c+571,"ack_q", false,-1);
    tracep->declArray(c+951,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1364,"auto_in_psel", false,-1);
    tracep->declBit(c+1365,"auto_in_penable", false,-1);
    tracep->declBit(c+1346,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1353,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1345,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1608,"auto_in_pready", false,-1);
    tracep->declBit(c+1669,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1366,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+496,"spi_bundle_sck", false,-1);
    tracep->declBus(c+497,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+939,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1603,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1782,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1783,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1773,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBus(c+1555,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1364,"in_psel", false,-1);
    tracep->declBit(c+1365,"in_penable", false,-1);
    tracep->declBus(c+1345,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1346,"in_pwrite", false,-1);
    tracep->declBus(c+1347,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1608,"in_pready", false,-1);
    tracep->declBus(c+1366,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1669,"in_pslverr", false,-1);
    tracep->declBit(c+496,"spi_sck", false,-1);
    tracep->declBus(c+497,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+939,"spi_mosi", false,-1);
    tracep->declBit(c+1603,"spi_miso", false,-1);
    tracep->declBit(c+623,"spi_irq_out", false,-1);
    tracep->declBus(c+1556,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1557,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1558,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1559,"wb_we_i", false,-1);
    tracep->declBit(c+1560,"wb_stb_i", false,-1);
    tracep->declBit(c+1561,"wb_cyc_i", false,-1);
    tracep->declBit(c+624,"wb_ack_o", false,-1);
    tracep->declBus(c+625,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1670,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1659,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1671,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1672,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1673,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1784,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1785,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1786,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+409,"state", false,-1, 2,0);
    tracep->declBus(c+410,"next_state", false,-1, 2,0);
    tracep->declBus(c+411,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+412,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+413,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+414,"flash_pwrite", false,-1);
    tracep->declBit(c+415,"flash_psel", false,-1);
    tracep->declBit(c+416,"flash_penable", false,-1);
    tracep->declBit(c+417,"flash_pready", false,-1);
    tracep->declBus(c+418,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBit(c+1581,"wb_clk_i", false,-1);
    tracep->declBit(c+1582,"wb_rst_i", false,-1);
    tracep->declBus(c+1556,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1557,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+625,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1558,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1559,"wb_we_i", false,-1);
    tracep->declBit(c+1560,"wb_stb_i", false,-1);
    tracep->declBit(c+1561,"wb_cyc_i", false,-1);
    tracep->declBit(c+624,"wb_ack_o", false,-1);
    tracep->declBit(c+1669,"wb_err_o", false,-1);
    tracep->declBit(c+623,"wb_int_o", false,-1);
    tracep->declBus(c+497,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+496,"sclk_pad_o", false,-1);
    tracep->declBit(c+939,"mosi_pad_o", false,-1);
    tracep->declBit(c+1603,"miso_pad_i", false,-1);
    tracep->declBus(c+626,"divider", false,-1, 15,0);
    tracep->declBus(c+627,"ctrl", false,-1, 13,0);
    tracep->declBus(c+628,"ss", false,-1, 7,0);
    tracep->declBus(c+1562,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+629,"rx", false,-1, 127,0);
    tracep->declBit(c+633,"rx_negedge", false,-1);
    tracep->declBit(c+634,"tx_negedge", false,-1);
    tracep->declBus(c+635,"char_len", false,-1, 6,0);
    tracep->declBit(c+636,"go", false,-1);
    tracep->declBit(c+637,"lsb", false,-1);
    tracep->declBit(c+638,"ie", false,-1);
    tracep->declBit(c+639,"ass", false,-1);
    tracep->declBit(c+1563,"spi_divider_sel", false,-1);
    tracep->declBit(c+1564,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1565,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1566,"spi_ss_sel", false,-1);
    tracep->declBit(c+640,"tip", false,-1);
    tracep->declBit(c+641,"pos_edge", false,-1);
    tracep->declBit(c+642,"neg_edge", false,-1);
    tracep->declBit(c+643,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBit(c+1581,"clk_in", false,-1);
    tracep->declBit(c+1582,"rst", false,-1);
    tracep->declBit(c+640,"enable", false,-1);
    tracep->declBit(c+636,"go", false,-1);
    tracep->declBit(c+643,"last_clk", false,-1);
    tracep->declBus(c+626,"divider", false,-1, 15,0);
    tracep->declBit(c+496,"clk_out", false,-1);
    tracep->declBit(c+641,"pos_edge", false,-1);
    tracep->declBit(c+642,"neg_edge", false,-1);
    tracep->declBus(c+644,"cnt", false,-1, 15,0);
    tracep->declBit(c+645,"cnt_zero", false,-1);
    tracep->declBit(c+646,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1582,"rst", false,-1);
    tracep->declBus(c+1567,"latch", false,-1, 3,0);
    tracep->declBus(c+1558,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+635,"len", false,-1, 6,0);
    tracep->declBit(c+637,"lsb", false,-1);
    tracep->declBit(c+636,"go", false,-1);
    tracep->declBit(c+641,"pos_edge", false,-1);
    tracep->declBit(c+642,"neg_edge", false,-1);
    tracep->declBit(c+633,"rx_negedge", false,-1);
    tracep->declBit(c+634,"tx_negedge", false,-1);
    tracep->declBit(c+640,"tip", false,-1);
    tracep->declBit(c+643,"last", false,-1);
    tracep->declBus(c+1557,"p_in", false,-1, 31,0);
    tracep->declArray(c+629,"p_out", false,-1, 127,0);
    tracep->declBit(c+496,"s_clk", false,-1);
    tracep->declBit(c+1603,"s_in", false,-1);
    tracep->declBit(c+939,"s_out", false,-1);
    tracep->declBus(c+647,"cnt", false,-1, 7,0);
    tracep->declArray(c+629,"data", false,-1, 127,0);
    tracep->declBus(c+648,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+649,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+650,"rx_clk", false,-1);
    tracep->declBit(c+651,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1360,"auto_in_psel", false,-1);
    tracep->declBit(c+1361,"auto_in_penable", false,-1);
    tracep->declBit(c+1346,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1345,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1362,"auto_in_pready", false,-1);
    tracep->declBit(c+1669,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1363,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1601,"uart_rx", false,-1);
    tracep->declBit(c+1602,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1360,"in_psel", false,-1);
    tracep->declBit(c+1361,"in_penable", false,-1);
    tracep->declBus(c+1345,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1362,"in_pready", false,-1);
    tracep->declBit(c+1669,"in_pslverr", false,-1);
    tracep->declBus(c+1330,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1346,"in_pwrite", false,-1);
    tracep->declBus(c+1363,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1347,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1601,"uart_rx", false,-1);
    tracep->declBit(c+1602,"uart_tx", false,-1);
    tracep->declBit(c+652,"rtsn", false,-1);
    tracep->declBit(c+1669,"ctsn", false,-1);
    tracep->declBit(c+653,"dtr_pad_o", false,-1);
    tracep->declBit(c+1669,"dsr_pad_i", false,-1);
    tracep->declBit(c+1669,"ri_pad_i", false,-1);
    tracep->declBit(c+1669,"dcd_pad_i", false,-1);
    tracep->declBit(c+654,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1568,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1569,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+419,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1570,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+655,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1582,"wb_rst_i", false,-1);
    tracep->declBus(c+1568,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1571,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1570,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1602,"stx_pad_o", false,-1);
    tracep->declBit(c+1601,"srx_pad_i", false,-1);
    tracep->declBus(c+1723,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+655,"rts_pad_o", false,-1);
    tracep->declBit(c+653,"dtr_pad_o", false,-1);
    tracep->declBit(c+654,"int_o", false,-1);
    tracep->declBit(c+656,"enable", false,-1);
    tracep->declBit(c+657,"srx_pad", false,-1);
    tracep->declBus(c+658,"ier", false,-1, 3,0);
    tracep->declBus(c+659,"iir", false,-1, 3,0);
    tracep->declBus(c+660,"fcr", false,-1, 1,0);
    tracep->declBus(c+661,"mcr", false,-1, 4,0);
    tracep->declBus(c+662,"lcr", false,-1, 7,0);
    tracep->declBus(c+663,"msr", false,-1, 7,0);
    tracep->declBus(c+664,"dl", false,-1, 15,0);
    tracep->declBus(c+665,"scratch", false,-1, 7,0);
    tracep->declBit(c+666,"start_dlc", false,-1);
    tracep->declBit(c+667,"lsr_mask_d", false,-1);
    tracep->declBit(c+668,"msi_reset", false,-1);
    tracep->declBus(c+669,"dlc", false,-1, 15,0);
    tracep->declBus(c+670,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+671,"rx_reset", false,-1);
    tracep->declBit(c+672,"tx_reset", false,-1);
    tracep->declBit(c+673,"dlab", false,-1);
    tracep->declBit(c+1674,"cts_pad_i", false,-1);
    tracep->declBit(c+1669,"dsr_pad_i", false,-1);
    tracep->declBit(c+1669,"ri_pad_i", false,-1);
    tracep->declBit(c+1669,"dcd_pad_i", false,-1);
    tracep->declBit(c+674,"loopback", false,-1);
    tracep->declBit(c+1669,"cts", false,-1);
    tracep->declBit(c+1674,"dsr", false,-1);
    tracep->declBit(c+1674,"ri", false,-1);
    tracep->declBit(c+1674,"dcd", false,-1);
    tracep->declBit(c+675,"cts_c", false,-1);
    tracep->declBit(c+676,"dsr_c", false,-1);
    tracep->declBit(c+677,"ri_c", false,-1);
    tracep->declBit(c+678,"dcd_c", false,-1);
    tracep->declBus(c+679,"lsr", false,-1, 7,0);
    tracep->declBit(c+680,"lsr0", false,-1);
    tracep->declBit(c+681,"lsr1", false,-1);
    tracep->declBit(c+682,"lsr2", false,-1);
    tracep->declBit(c+683,"lsr3", false,-1);
    tracep->declBit(c+684,"lsr4", false,-1);
    tracep->declBit(c+685,"lsr5", false,-1);
    tracep->declBit(c+686,"lsr6", false,-1);
    tracep->declBit(c+687,"lsr7", false,-1);
    tracep->declBit(c+688,"lsr0r", false,-1);
    tracep->declBit(c+689,"lsr1r", false,-1);
    tracep->declBit(c+690,"lsr2r", false,-1);
    tracep->declBit(c+691,"lsr3r", false,-1);
    tracep->declBit(c+692,"lsr4r", false,-1);
    tracep->declBit(c+693,"lsr5r", false,-1);
    tracep->declBit(c+694,"lsr6r", false,-1);
    tracep->declBit(c+695,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+696,"rls_int", false,-1);
    tracep->declBit(c+697,"rda_int", false,-1);
    tracep->declBit(c+698,"ti_int", false,-1);
    tracep->declBit(c+699,"thre_int", false,-1);
    tracep->declBit(c+700,"ms_int", false,-1);
    tracep->declBit(c+701,"tf_push", false,-1);
    tracep->declBit(c+702,"rf_pop", false,-1);
    tracep->declBus(c+1648,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+703,"rf_error_bit", false,-1);
    tracep->declBit(c+681,"rf_overrun", false,-1);
    tracep->declBit(c+704,"rf_push_pulse", false,-1);
    tracep->declBus(c+705,"rf_count", false,-1, 4,0);
    tracep->declBus(c+706,"tf_count", false,-1, 4,0);
    tracep->declBus(c+707,"tstate", false,-1, 2,0);
    tracep->declBus(c+708,"rstate", false,-1, 3,0);
    tracep->declBus(c+709,"counter_t", false,-1, 9,0);
    tracep->declBit(c+710,"thre_set_en", false,-1);
    tracep->declBus(c+711,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+712,"block_value", false,-1, 7,0);
    tracep->declBit(c+713,"serial_out", false,-1);
    tracep->declBit(c+714,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+715,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+716,"lsr0_d", false,-1);
    tracep->declBit(c+717,"lsr1_d", false,-1);
    tracep->declBit(c+718,"lsr2_d", false,-1);
    tracep->declBit(c+719,"lsr3_d", false,-1);
    tracep->declBit(c+720,"lsr4_d", false,-1);
    tracep->declBit(c+721,"lsr5_d", false,-1);
    tracep->declBit(c+722,"lsr6_d", false,-1);
    tracep->declBit(c+723,"lsr7_d", false,-1);
    tracep->declBit(c+724,"rls_int_d", false,-1);
    tracep->declBit(c+725,"thre_int_d", false,-1);
    tracep->declBit(c+726,"ms_int_d", false,-1);
    tracep->declBit(c+727,"ti_int_d", false,-1);
    tracep->declBit(c+728,"rda_int_d", false,-1);
    tracep->declBit(c+729,"rls_int_rise", false,-1);
    tracep->declBit(c+730,"thre_int_rise", false,-1);
    tracep->declBit(c+731,"ms_int_rise", false,-1);
    tracep->declBit(c+732,"ti_int_rise", false,-1);
    tracep->declBit(c+733,"rda_int_rise", false,-1);
    tracep->declBit(c+734,"rls_int_pnd", false,-1);
    tracep->declBit(c+735,"rda_int_pnd", false,-1);
    tracep->declBit(c+736,"thre_int_pnd", false,-1);
    tracep->declBit(c+737,"ms_int_pnd", false,-1);
    tracep->declBit(c+738,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBus(c+1787,"width", false,-1, 31,0);
    tracep->declBus(c+1715,"init_value", false,-1, 0,0);
    tracep->declBit(c+1582,"rst_i", false,-1);
    tracep->declBit(c+1581,"clk_i", false,-1);
    tracep->declBit(c+1669,"stage1_rst_i", false,-1);
    tracep->declBit(c+1674,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1601,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+657,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+739,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1582,"wb_rst_i", false,-1);
    tracep->declBus(c+662,"lcr", false,-1, 7,0);
    tracep->declBit(c+702,"rf_pop", false,-1);
    tracep->declBit(c+714,"srx_pad_i", false,-1);
    tracep->declBit(c+656,"enable", false,-1);
    tracep->declBit(c+671,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+709,"counter_t", false,-1, 9,0);
    tracep->declBus(c+705,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1648,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+681,"rf_overrun", false,-1);
    tracep->declBit(c+703,"rf_error_bit", false,-1);
    tracep->declBus(c+708,"rstate", false,-1, 3,0);
    tracep->declBit(c+704,"rf_push_pulse", false,-1);
    tracep->declBus(c+740,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+741,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+742,"rshift", false,-1, 7,0);
    tracep->declBit(c+743,"rparity", false,-1);
    tracep->declBit(c+744,"rparity_error", false,-1);
    tracep->declBit(c+745,"rframing_error", false,-1);
    tracep->declBit(c+746,"rbit_in", false,-1);
    tracep->declBit(c+747,"rparity_xor", false,-1);
    tracep->declBus(c+748,"counter_b", false,-1, 7,0);
    tracep->declBit(c+749,"rf_push_q", false,-1);
    tracep->declBus(c+750,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+751,"rf_push", false,-1);
    tracep->declBit(c+752,"break_error", false,-1);
    tracep->declBit(c+753,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+754,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+755,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+756,"rcounter16_minus_1", false,-1, 3,0);
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
    tracep->declBus(c+757,"toc_value", false,-1, 9,0);
    tracep->declBus(c+758,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1788,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1789,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1728,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1730,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1582,"wb_rst_i", false,-1);
    tracep->declBit(c+704,"push", false,-1);
    tracep->declBit(c+702,"pop", false,-1);
    tracep->declBus(c+750,"data_in", false,-1, 10,0);
    tracep->declBit(c+671,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1648,"data_out", false,-1, 10,0);
    tracep->declBit(c+681,"overrun", false,-1);
    tracep->declBus(c+705,"count", false,-1, 4,0);
    tracep->declBit(c+703,"error_bit", false,-1);
    tracep->declBus(c+1649,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+759+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+775,"top", false,-1, 3,0);
    tracep->declBus(c+776,"bottom", false,-1, 3,0);
    tracep->declBus(c+777,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+778,"word0", false,-1, 2,0);
    tracep->declBus(c+779,"word1", false,-1, 2,0);
    tracep->declBus(c+780,"word2", false,-1, 2,0);
    tracep->declBus(c+781,"word3", false,-1, 2,0);
    tracep->declBus(c+782,"word4", false,-1, 2,0);
    tracep->declBus(c+783,"word5", false,-1, 2,0);
    tracep->declBus(c+784,"word6", false,-1, 2,0);
    tracep->declBus(c+785,"word7", false,-1, 2,0);
    tracep->declBus(c+786,"word8", false,-1, 2,0);
    tracep->declBus(c+787,"word9", false,-1, 2,0);
    tracep->declBus(c+788,"word10", false,-1, 2,0);
    tracep->declBus(c+789,"word11", false,-1, 2,0);
    tracep->declBus(c+790,"word12", false,-1, 2,0);
    tracep->declBus(c+791,"word13", false,-1, 2,0);
    tracep->declBus(c+792,"word14", false,-1, 2,0);
    tracep->declBus(c+793,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1728,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1773,"data_width", false,-1, 31,0);
    tracep->declBus(c+1789,"depth", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+704,"we", false,-1);
    tracep->declBus(c+775,"a", false,-1, 3,0);
    tracep->declBus(c+776,"dpra", false,-1, 3,0);
    tracep->declBus(c+794,"di", false,-1, 7,0);
    tracep->declBus(c+1649,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+420+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1582,"wb_rst_i", false,-1);
    tracep->declBus(c+662,"lcr", false,-1, 7,0);
    tracep->declBit(c+701,"tf_push", false,-1);
    tracep->declBus(c+1571,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+656,"enable", false,-1);
    tracep->declBit(c+672,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+713,"stx_pad_o", false,-1);
    tracep->declBus(c+707,"tstate", false,-1, 2,0);
    tracep->declBus(c+706,"tf_count", false,-1, 4,0);
    tracep->declBus(c+795,"counter", false,-1, 4,0);
    tracep->declBus(c+796,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+797,"shift_out", false,-1, 6,0);
    tracep->declBit(c+798,"stx_o_tmp", false,-1);
    tracep->declBit(c+799,"parity_xor", false,-1);
    tracep->declBit(c+800,"tf_pop", false,-1);
    tracep->declBit(c+801,"bit_out", false,-1);
    tracep->declBus(c+1571,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1650,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+802,"tf_overrun", false,-1);
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
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+1582,"wb_rst_i", false,-1);
    tracep->declBit(c+701,"push", false,-1);
    tracep->declBit(c+800,"pop", false,-1);
    tracep->declBus(c+1571,"data_in", false,-1, 7,0);
    tracep->declBit(c+672,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1650,"data_out", false,-1, 7,0);
    tracep->declBit(c+802,"overrun", false,-1);
    tracep->declBus(c+706,"count", false,-1, 4,0);
    tracep->declBus(c+803,"top", false,-1, 3,0);
    tracep->declBus(c+804,"bottom", false,-1, 3,0);
    tracep->declBus(c+805,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1728,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1773,"data_width", false,-1, 31,0);
    tracep->declBus(c+1789,"depth", false,-1, 31,0);
    tracep->declBit(c+1581,"clk", false,-1);
    tracep->declBit(c+701,"we", false,-1);
    tracep->declBus(c+803,"a", false,-1, 3,0);
    tracep->declBus(c+804,"dpra", false,-1, 3,0);
    tracep->declBus(c+1571,"di", false,-1, 7,0);
    tracep->declBus(c+1650,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+436+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBit(c+1351,"auto_in_psel", false,-1);
    tracep->declBit(c+1352,"auto_in_penable", false,-1);
    tracep->declBit(c+1346,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1353,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1345,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1347,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+507,"auto_in_pready", false,-1);
    tracep->declBit(c+1665,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1666,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1595,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1596,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1597,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1598,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1599,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1600,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1581,"clock", false,-1);
    tracep->declBit(c+1582,"reset", false,-1);
    tracep->declBus(c+1555,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1351,"in_psel", false,-1);
    tracep->declBit(c+1352,"in_penable", false,-1);
    tracep->declBus(c+1345,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1346,"in_pwrite", false,-1);
    tracep->declBus(c+1347,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1348,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+507,"in_pready", false,-1);
    tracep->declBus(c+1666,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1665,"in_pslverr", false,-1);
    tracep->declBus(c+1595,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1596,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1597,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1598,"vga_hsync", false,-1);
    tracep->declBit(c+1599,"vga_vsync", false,-1);
    tracep->declBit(c+1600,"vga_valid", false,-1);
    tracep->declBit(c+1572,"is_write", false,-1);
    tracep->declBus(c+1573,"addr", false,-1, 31,0);
    tracep->declBit(c+507,"ready", false,-1);
    tracep->declBus(c+806,"i", false,-1, 31,0);
    tracep->declBus(c+1790,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1791,"h_active", false,-1, 31,0);
    tracep->declBus(c+1792,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1793,"h_total", false,-1, 31,0);
    tracep->declBus(c+1771,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1794,"v_active", false,-1, 31,0);
    tracep->declBus(c+1795,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1796,"v_total", false,-1, 31,0);
    tracep->declBus(c+807,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+452,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+808,"h_valid", false,-1);
    tracep->declBit(c+453,"v_valid", false,-1);
    tracep->declBus(c+809,"h_addr", false,-1, 9,0);
    tracep->declBus(c+454,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1651,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+496,"sck", false,-1);
    tracep->declBit(c+954,"ss", false,-1);
    tracep->declBit(c+939,"mosi", false,-1);
    tracep->declBit(c+934,"miso", false,-1);
    tracep->declBus(c+935,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+936,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+937,"counter", false,-1, 2,0);
    tracep->declBit(c+938,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+496,"sck", false,-1);
    tracep->declBit(c+810,"ss", false,-1);
    tracep->declBit(c+939,"mosi", false,-1);
    tracep->declBit(c+1652,"miso", false,-1);
    tracep->declBit(c+810,"reset", false,-1);
    tracep->declBus(c+928,"state", false,-1, 2,0);
    tracep->declBus(c+929,"counter", false,-1, 7,0);
    tracep->declBus(c+930,"cmd", false,-1, 7,0);
    tracep->declBus(c+931,"addr", false,-1, 23,0);
    tracep->declBus(c+932,"data", false,-1, 31,0);
    tracep->declBit(c+933,"ren", false,-1);
    tracep->declBus(c+1653,"rdata", false,-1, 31,0);
    tracep->declBus(c+1654,"raddr", false,-1, 31,0);
    tracep->declBus(c+1655,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+496,"clock", false,-1);
    tracep->declBit(c+933,"valid", false,-1);
    tracep->declBus(c+930,"cmd", false,-1, 7,0);
    tracep->declBus(c+1654,"addr", false,-1, 31,0);
    tracep->declBus(c+1653,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1577,"sck", false,-1);
    tracep->declBit(c+1578,"ce_n", false,-1);
    tracep->declBus(c+1604,"dio", false,-1, 3,0);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+972,"cmd", false,-1, 7,0);
    tracep->declBus(c+973,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+974+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1656,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1657,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+978,"ren", false,-1);
    tracep->declBit(c+979,"wen", false,-1);
    tracep->declBus(c+980,"len", false,-1, 7,0);
    tracep->declBus(c+1658,"rdata", false,-1, 31,0);
    tracep->declBus(c+981,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+978,"ren", false,-1);
    tracep->declBit(c+979,"wen", false,-1);
    tracep->declBus(c+972,"cmd", false,-1, 7,0);
    tracep->declBus(c+981,"saddr", false,-1, 31,0);
    tracep->declBus(c+1658,"rdata", false,-1, 31,0);
    tracep->declBus(c+982,"wdata", false,-1, 31,0);
    tracep->declBus(c+980,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1605,"clk", false,-1);
    tracep->declBit(c+498,"cke", false,-1);
    tracep->declBit(c+940,"cs", false,-1);
    tracep->declBit(c+941,"ras", false,-1);
    tracep->declBit(c+942,"cas", false,-1);
    tracep->declBit(c+943,"we", false,-1);
    tracep->declBus(c+944,"a", false,-1, 12,0);
    tracep->declBus(c+955,"ba", false,-1, 1,0);
    tracep->declBus(c+956,"dqm", false,-1, 1,0);
    tracep->declBus(c+970,"dq", false,-1, 15,0);
    tracep->declBit(c+957,"reset", false,-1);
    tracep->declBus(c+817,"state", false,-1, 2,0);
    tracep->declBus(c+818,"counter", false,-1, 7,0);
    tracep->declBus(c+819,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1797,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+820,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+821,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+958,"nop", false,-1);
    tracep->declBit(c+959,"active", false,-1);
    tracep->declBit(c+960,"precharge", false,-1);
    tracep->declBit(c+961,"read", false,-1);
    tracep->declBit(c+962,"write", false,-1);
    tracep->declBit(c+963,"burstterm", false,-1);
    tracep->declBit(c+964,"autorefresh", false,-1);
    tracep->declBit(c+965,"mode", false,-1);
    tracep->declBus(c+822,"test", false,-1, 15,0);
    tracep->declBus(c+823,"test1", false,-1, 15,0);
    tracep->declBus(c+824,"sense", false,-1, 31,0);
    tracep->declBit(c+825,"write_burst_mode", false,-1);
    tracep->declBus(c+826,"op_mode", false,-1, 1,0);
    tracep->declBus(c+827,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+828,"burst_type", false,-1);
    tracep->declBus(c+829,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+830,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+831,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+832,"bank", false,-1, 1,0);
    tracep->declBus(c+833,"row", false,-1, 12,0);
    tracep->declBus(c+834,"column", false,-1, 8,0);
    tracep->declBus(c+835,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+836,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+837,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1605,"clk", false,-1);
    tracep->declBit(c+498,"cke", false,-1);
    tracep->declBit(c+940,"cs", false,-1);
    tracep->declBit(c+941,"ras", false,-1);
    tracep->declBit(c+942,"cas", false,-1);
    tracep->declBit(c+943,"we", false,-1);
    tracep->declBus(c+944,"a", false,-1, 12,0);
    tracep->declBus(c+955,"ba", false,-1, 1,0);
    tracep->declBus(c+966,"dqm", false,-1, 1,0);
    tracep->declBus(c+971,"dq", false,-1, 15,0);
    tracep->declBit(c+957,"reset", false,-1);
    tracep->declBus(c+838,"state", false,-1, 2,0);
    tracep->declBus(c+839,"counter", false,-1, 7,0);
    tracep->declBus(c+840,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1798,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+841,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+842,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+958,"nop", false,-1);
    tracep->declBit(c+959,"active", false,-1);
    tracep->declBit(c+960,"precharge", false,-1);
    tracep->declBit(c+961,"read", false,-1);
    tracep->declBit(c+962,"write", false,-1);
    tracep->declBit(c+963,"burstterm", false,-1);
    tracep->declBit(c+964,"autorefresh", false,-1);
    tracep->declBit(c+965,"mode", false,-1);
    tracep->declBus(c+843,"test", false,-1, 15,0);
    tracep->declBus(c+844,"test1", false,-1, 15,0);
    tracep->declBus(c+845,"sense", false,-1, 31,0);
    tracep->declBit(c+846,"write_burst_mode", false,-1);
    tracep->declBus(c+847,"op_mode", false,-1, 1,0);
    tracep->declBus(c+848,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+849,"burst_type", false,-1);
    tracep->declBus(c+850,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+851,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+852,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+853,"bank", false,-1, 1,0);
    tracep->declBus(c+854,"row", false,-1, 12,0);
    tracep->declBus(c+855,"column", false,-1, 8,0);
    tracep->declBus(c+856,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+857,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+858,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1605,"clk", false,-1);
    tracep->declBit(c+498,"cke", false,-1);
    tracep->declBit(c+940,"cs", false,-1);
    tracep->declBit(c+941,"ras", false,-1);
    tracep->declBit(c+942,"cas", false,-1);
    tracep->declBit(c+943,"we", false,-1);
    tracep->declBus(c+944,"a", false,-1, 12,0);
    tracep->declBus(c+955,"ba", false,-1, 1,0);
    tracep->declBus(c+967,"dqm", false,-1, 1,0);
    tracep->declBus(c+970,"dq", false,-1, 15,0);
    tracep->declBit(c+957,"reset", false,-1);
    tracep->declBus(c+859,"state", false,-1, 2,0);
    tracep->declBus(c+860,"counter", false,-1, 7,0);
    tracep->declBus(c+861,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1799,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+862,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+863,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+958,"nop", false,-1);
    tracep->declBit(c+959,"active", false,-1);
    tracep->declBit(c+960,"precharge", false,-1);
    tracep->declBit(c+961,"read", false,-1);
    tracep->declBit(c+962,"write", false,-1);
    tracep->declBit(c+963,"burstterm", false,-1);
    tracep->declBit(c+964,"autorefresh", false,-1);
    tracep->declBit(c+965,"mode", false,-1);
    tracep->declBus(c+864,"test", false,-1, 15,0);
    tracep->declBus(c+865,"test1", false,-1, 15,0);
    tracep->declBus(c+866,"sense", false,-1, 31,0);
    tracep->declBit(c+867,"write_burst_mode", false,-1);
    tracep->declBus(c+868,"op_mode", false,-1, 1,0);
    tracep->declBus(c+869,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+870,"burst_type", false,-1);
    tracep->declBus(c+871,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+872,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+873,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+874,"bank", false,-1, 1,0);
    tracep->declBus(c+875,"row", false,-1, 12,0);
    tracep->declBus(c+876,"column", false,-1, 8,0);
    tracep->declBus(c+877,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+878,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+879,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1605,"clk", false,-1);
    tracep->declBit(c+498,"cke", false,-1);
    tracep->declBit(c+940,"cs", false,-1);
    tracep->declBit(c+941,"ras", false,-1);
    tracep->declBit(c+942,"cas", false,-1);
    tracep->declBit(c+943,"we", false,-1);
    tracep->declBus(c+944,"a", false,-1, 12,0);
    tracep->declBus(c+955,"ba", false,-1, 1,0);
    tracep->declBus(c+968,"dqm", false,-1, 1,0);
    tracep->declBus(c+971,"dq", false,-1, 15,0);
    tracep->declBit(c+957,"reset", false,-1);
    tracep->declBus(c+880,"state", false,-1, 2,0);
    tracep->declBus(c+881,"counter", false,-1, 7,0);
    tracep->declBus(c+882,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1800,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+883,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+884,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+958,"nop", false,-1);
    tracep->declBit(c+959,"active", false,-1);
    tracep->declBit(c+960,"precharge", false,-1);
    tracep->declBit(c+961,"read", false,-1);
    tracep->declBit(c+962,"write", false,-1);
    tracep->declBit(c+963,"burstterm", false,-1);
    tracep->declBit(c+964,"autorefresh", false,-1);
    tracep->declBit(c+965,"mode", false,-1);
    tracep->declBus(c+885,"test", false,-1, 15,0);
    tracep->declBus(c+886,"test1", false,-1, 15,0);
    tracep->declBus(c+887,"sense", false,-1, 31,0);
    tracep->declBit(c+888,"write_burst_mode", false,-1);
    tracep->declBus(c+889,"op_mode", false,-1, 1,0);
    tracep->declBus(c+890,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+891,"burst_type", false,-1);
    tracep->declBus(c+892,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+893,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+894,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+895,"bank", false,-1, 1,0);
    tracep->declBus(c+896,"row", false,-1, 12,0);
    tracep->declBus(c+897,"column", false,-1, 8,0);
    tracep->declBus(c+898,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+899,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+900,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid_reg));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__isCHazard_reg));
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+454,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullBit(oldp+455,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+456,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+457,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+458,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+459,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+460,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+461,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))))));
    bufp->fullBit(oldp+462,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullCData(oldp+463,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+464,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+465,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                        >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+466,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+467,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+468,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+469,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))));
    bufp->fullCData(oldp+470,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),4);
    bufp->fullCData(oldp+471,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+472,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+473,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+474,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ls),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ls),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ls),32);
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ls),32);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls),5);
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ls));
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
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__k),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+512,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+522,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+524,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+554,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+555,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+558,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+559,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+564,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+568,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+583,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+584,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+586,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+587,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+588,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+589,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+590,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+598,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+633,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+634,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+635,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+636,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+637,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+638,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+639,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+643,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+645,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+646,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+648,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+652,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+653,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+655,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+673,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+674,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+675,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+676,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+677,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+678,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+679,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+682,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+683,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+684,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+703,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+710,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+729,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+730,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+731,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+732,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+733,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+752,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+753,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+754,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+755,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+756,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+758,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+777,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+794,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+805,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+809,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+819,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+821,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+823,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+824,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+825,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+826,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+827,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+828,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+829,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+830,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+831,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+833,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+834,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+840,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+841,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+842,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+843,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+844,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+845,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+846,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+847,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+848,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+849,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+850,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+851,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+852,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+854,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+855,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+862,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+863,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+864,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+866,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+867,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+868,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+869,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+870,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+871,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+872,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+873,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+875,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+876,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+882,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+883,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+884,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+885,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+886,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+887,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+888,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+889,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+890,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+891,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+892,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+893,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+894,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+896,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+897,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullBit(oldp+901,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+902,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),5);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_id));
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_sel_id),4);
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_id),32);
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_id),32);
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_id),32);
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),5);
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex),32);
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+931,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+933,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+940,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+941,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+942,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+943,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+955,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+960,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+969,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+970,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+971,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+973,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+981,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+982,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ls),32);
    bufp->fullIData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ls),32);
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ls),32);
    bufp->fullIData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ls),32);
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_ls));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_ls));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_ls));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_ls));
    bufp->fullIData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),3);
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),7);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id),32);
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_id));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_id));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_id));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_id));
    bufp->fullBit(oldp+1029,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ex),32);
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ex),32);
    bufp->fullIData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ex),32);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_ex));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_ex));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_ex));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_ex));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_read_ex));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_write_ex));
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex),32);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex),32);
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wmask_ex),4);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awsize_ex),3);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arsize_ex),3);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awlen_ex),8);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arlen_ex),8);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awburst_ex),2);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arburst_ex),2);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullIData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+1054,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullIData(oldp+1056,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+1058,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_waddr),32);
    bufp->fullIData(oldp+1060,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0)
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
    bufp->fullCData(oldp+1061,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0) 
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
    bufp->fullIData(oldp+1062,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h46116b93__0
                                 : 0U)),32);
    bufp->fullCData(oldp+1063,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                 ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                          ? 1U : 2U))),3);
    bufp->fullCData(oldp+1064,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                 ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                             | (5U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1065,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1066,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+1070,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),7);
    bufp->fullCData(oldp+1071,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
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
    bufp->fullCData(oldp+1072,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                      >> 0xcU))),3);
    bufp->fullIData(oldp+1073,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1074,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+1075,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1076,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1077,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7),7);
    bufp->fullCData(oldp+1080,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                         >> 0x14U))),5);
    bufp->fullBit(oldp+1081,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
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
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__alu_sel),4);
    bufp->fullIData(oldp+1083,(((((0x13U == (0x7fU 
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
    bufp->fullIData(oldp+1084,((((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
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
    bufp->fullBit(oldp+1085,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c5312ed__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h4616dcf9__0))));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mstatus_wen));
    bufp->fullBit(oldp+1087,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c6f122f__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h4616dcf9__0))));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mtvec_wen));
    bufp->fullBit(oldp+1089,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)));
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata_reg),32);
    bufp->fullCData(oldp+1091,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))),4);
    bufp->fullIData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[0U]),32);
    bufp->fullCData(oldp+1093,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0)),8);
    bufp->fullCData(oldp+1094,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))),3);
    bufp->fullCData(oldp+1095,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0))),2);
    bufp->fullCData(oldp+1096,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))),4);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[0U]),32);
    bufp->fullCData(oldp+1098,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0)),8);
    bufp->fullCData(oldp+1099,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))),3);
    bufp->fullCData(oldp+1100,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0))),2);
    bufp->fullCData(oldp+1101,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))),4);
    bufp->fullBit(oldp+1102,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+1103,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0))));
    bufp->fullBit(oldp+1104,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0))));
    bufp->fullBit(oldp+1105,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0))));
    bufp->fullBit(oldp+1106,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0))));
    bufp->fullBit(oldp+1107,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0))));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1112,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))))),16);
    bufp->fullSData(oldp+1113,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))))),16);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullBit(oldp+1124,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1125,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1126,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[2U]),32);
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]),32);
    bufp->fullCData(oldp+1129,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1130,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1131,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1132,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1133,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1134,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1135,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1136,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1137,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1138,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1139,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1140,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1141,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1142,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1143,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 2U))));
    bufp->fullSData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),16);
    bufp->fullSData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),16);
    bufp->fullSData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),16);
    bufp->fullSData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),16);
    bufp->fullIData(oldp+1148,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1149,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1150,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state),2);
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m),2);
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1176,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1177,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[1U]),32);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[1U]),32);
    bufp->fullCData(oldp+1181,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1182,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1183,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1184,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1185,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1186,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1187,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1188,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1189,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1190,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1191,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1192,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1193,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1194,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1195,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 1U))));
    bufp->fullCData(oldp+1196,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1197,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1198,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))
                                 : 0U)),4);
    bufp->fullBit(oldp+1199,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+1200,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1201,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullIData(oldp+1202,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1207,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h8362b754__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1223,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]),32);
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1229,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1231,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1233,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1249,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1250,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1251,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1252,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1253,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1254,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1255,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
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
    bufp->fullBit(oldp+1265,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1266,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1267,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1272,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1274,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1275,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[2U]),32);
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isRAW));
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[1U]),32);
    bufp->fullIData(oldp+1290,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullIData(oldp+1295,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]
                                 : 0U)),32);
    bufp->fullBit(oldp+1296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1299,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1300,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1301,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1302,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1303,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1304,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1305,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1307,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1308,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1309,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1310,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1311,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1312,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1313,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1314,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1315,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1316,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1317,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1318,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1319,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1320,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1321,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1322,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1323,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1324,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1325,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1326,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1327,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1328,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1329,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1330,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1331,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1332,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1333,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullBit(oldp+1334,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_id));
    bufp->fullIData(oldp+1338,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1339,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1340,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1345,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1350,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1351,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1352,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1354,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1356,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1357,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1359,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1362,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1363,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1364,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1369,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1372,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1377,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1379,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1380,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullSData(oldp+1432,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1433,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1457,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1458,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1480,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1481,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1482,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1483,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1484,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1485,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1486,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1487,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1488,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1489,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1490,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1491,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1492,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1493,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1494,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1495,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1496,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1497,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1498,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1499,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1500,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1501,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1502,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1503,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1504,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1505,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1506,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1507,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1508,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1509,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1510,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1511,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata),32);
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullIData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1538,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1547,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1551,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1552,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1553,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1566,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1573,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullCData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),8);
    bufp->fullCData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access_raw),8);
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1581,(vlSelf->clock));
    bufp->fullBit(oldp+1582,(vlSelf->reset));
    bufp->fullSData(oldp+1583,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1584,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1585,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1586,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1587,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1588,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1589,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1590,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1591,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1592,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1593,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1594,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1595,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1596,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1597,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1598,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1599,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1600,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1601,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1602,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1603,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1604,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1605,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1606,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1607,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1608,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1610,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1611,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullCData(oldp+1612,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1613,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1614,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1615,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1616,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1617,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0)))));
    bufp->fullCData(oldp+1618,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullIData(oldp+1619,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1620,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1621,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullCData(oldp+1624,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullCData(oldp+1625,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullBit(oldp+1626,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullIData(oldp+1627,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex
                                 : 0U)),32);
    bufp->fullCData(oldp+1628,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullCData(oldp+1629,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullBit(oldp+1630,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullIData(oldp+1631,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
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
    bufp->fullIData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullIData(oldp+1634,(((((- (IData)((0x13U 
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
    bufp->fullBit(oldp+1635,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                              & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullIData(oldp+1636,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c5312ed__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mstatus_wen)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c6f122f__0)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mtvec_wen)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec
                                             : 0U))))),32);
    bufp->fullBit(oldp+1637,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid))));
    bufp->fullIData(oldp+1638,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex)),32);
    bufp->fullCData(oldp+1639,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1640,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullBit(oldp+1641,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                   : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))))));
    bufp->fullIData(oldp+1642,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1645,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1646,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1647,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
