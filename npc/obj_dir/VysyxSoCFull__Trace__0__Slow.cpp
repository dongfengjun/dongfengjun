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
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBus(c+1520,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1521,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1522,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1523,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1524,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1525,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1526,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1527,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1528,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1529,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1530,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1531,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1532,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1533,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1534,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1535,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1536,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1537,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1538,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1539,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBus(c+1520,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1521,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1522,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1523,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1524,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1525,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1526,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1527,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1528,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1529,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1530,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1531,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1532,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1533,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1534,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1535,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1536,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1537,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1538,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1539,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+623,"spi_sck", false,-1);
    tracep->declBus(c+624,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1218,"spi_mosi", false,-1);
    tracep->declBit(c+1540,"spi_miso", false,-1);
    tracep->declBit(c+1538,"uart_rx", false,-1);
    tracep->declBit(c+1539,"uart_tx", false,-1);
    tracep->declBit(c+1514,"psram_sck", false,-1);
    tracep->declBit(c+1515,"psram_ce_n", false,-1);
    tracep->declBus(c+1541,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1542,"sdram_clk", false,-1);
    tracep->declBit(c+625,"sdram_cke", false,-1);
    tracep->declBit(c+1219,"sdram_cs", false,-1);
    tracep->declBit(c+1220,"sdram_ras", false,-1);
    tracep->declBit(c+1221,"sdram_cas", false,-1);
    tracep->declBit(c+1222,"sdram_we", false,-1);
    tracep->declBus(c+1223,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1224,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+626,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1248,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1520,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1521,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1522,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1523,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1524,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1525,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1526,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1527,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1528,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1529,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1530,"ps2_clk", false,-1);
    tracep->declBit(c+1531,"ps2_data", false,-1);
    tracep->declBus(c+1532,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1533,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1534,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1535,"vga_hsync", false,-1);
    tracep->declBit(c+1536,"vga_vsync", false,-1);
    tracep->declBit(c+1537,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBus(c+1303,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1304,"in_psel", false,-1);
    tracep->declBit(c+1211,"in_penable", false,-1);
    tracep->declBus(c+1585,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1305,"in_pwrite", false,-1);
    tracep->declBus(c+1306,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+627,"in_pready", false,-1);
    tracep->declBus(c+628,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+629,"in_pslverr", false,-1);
    tracep->declBus(c+1310,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1321,"out_psel", false,-1);
    tracep->declBit(c+1322,"out_penable", false,-1);
    tracep->declBus(c+1323,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1324,"out_pwrite", false,-1);
    tracep->declBus(c+1325,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1327,"out_pready", false,-1);
    tracep->declBus(c+1543,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1328,"out_pslverr", false,-1);
    tracep->declBus(c+1586,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1587,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1588,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1589,"DELAY", false,-1, 1,0);
    tracep->declBus(c+630,"state", false,-1, 1,0);
    tracep->declBus(c+631,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+632,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+633,"pslverr_reg", false,-1);
    tracep->declBus(c+1590,"r", false,-1, 10,0);
    tracep->declBus(c+1588,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1321,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1322,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1324,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1310,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1323,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1327,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1328,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1543,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1329,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1330,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1331,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1323,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+634,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1591,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1592,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1332,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1333,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1323,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+635,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1593,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+636,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1334,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1335,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1323,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+637,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1594,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+638,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1336,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1310,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1323,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1544,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1595,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+1212,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1338,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1339,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1323,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1340,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1595,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1341,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1342,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1343,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1331,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1323,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1545,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1595,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1345,"sel_0", false,-1);
    tracep->declBit(c+1346,"sel_1", false,-1);
    tracep->declBit(c+1347,"sel_2", false,-1);
    tracep->declBit(c+1348,"sel_3", false,-1);
    tracep->declBit(c+1349,"sel_4", false,-1);
    tracep->declBit(c+1350,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1308,"auto_in_awready", false,-1);
    tracep->declBit(c+1033,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1034,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1308,"auto_in_wready", false,-1);
    tracep->declBit(c+1037,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1038,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1351,"auto_in_bready", false,-1);
    tracep->declBit(c+1352,"auto_in_bvalid", false,-1);
    tracep->declBus(c+72,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1546,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1309,"auto_in_arready", false,-1);
    tracep->declBit(c+1040,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1041,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1042,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1043,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1353,"auto_in_rready", false,-1);
    tracep->declBit(c+1354,"auto_in_rvalid", false,-1);
    tracep->declBus(c+73,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1546,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1304,"auto_out_psel", false,-1);
    tracep->declBit(c+1211,"auto_out_penable", false,-1);
    tracep->declBit(c+1305,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+627,"auto_out_pready", false,-1);
    tracep->declBit(c+629,"auto_out_pslverr", false,-1);
    tracep->declBus(c+628,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1211,"nodeOut_penable", false,-1);
    tracep->declBus(c+1213,"state", false,-1, 1,0);
    tracep->declBit(c+1309,"accept_read", false,-1);
    tracep->declBit(c+1308,"accept_write", false,-1);
    tracep->declBit(c+74,"is_write_r", false,-1);
    tracep->declBit(c+1305,"is_write", false,-1);
    tracep->declBus(c+73,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+72,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+75,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+76,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+77,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+78,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+639,"resp", false,-1, 1,0);
    tracep->declBus(c+79,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1546,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1354,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+80,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1352,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1262,"in_arready", false,-1);
    tracep->declBit(c+1044,"in_arvalid", false,-1);
    tracep->declBus(c+1045,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1046,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1047,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1048,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1049,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1355,"in_rready", false,-1);
    tracep->declBit(c+640,"in_rvalid", false,-1);
    tracep->declBus(c+641,"in_rid", false,-1, 3,0);
    tracep->declBus(c+642,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+643,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+644,"in_rlast", false,-1);
    tracep->declBit(c+1263,"in_awready", false,-1);
    tracep->declBit(c+1050,"in_awvalid", false,-1);
    tracep->declBus(c+1051,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1052,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1053,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1054,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1264,"in_wready", false,-1);
    tracep->declBit(c+1056,"in_wvalid", false,-1);
    tracep->declBus(c+1057,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1058,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"in_wlast", false,-1);
    tracep->declBit(c+1356,"in_bready", false,-1);
    tracep->declBit(c+645,"in_bvalid", false,-1);
    tracep->declBus(c+646,"in_bid", false,-1, 3,0);
    tracep->declBus(c+647,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1265,"out_arready", false,-1);
    tracep->declBit(c+1266,"out_arvalid", false,-1);
    tracep->declBus(c+1267,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1268,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1151,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1270,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1357,"out_rready", false,-1);
    tracep->declBit(c+648,"out_rvalid", false,-1);
    tracep->declBus(c+649,"out_rid", false,-1, 3,0);
    tracep->declBus(c+650,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1586,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+651,"out_rlast", false,-1);
    tracep->declBit(c+1271,"out_awready", false,-1);
    tracep->declBit(c+1272,"out_awvalid", false,-1);
    tracep->declBus(c+1273,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1274,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1275,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1152,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1276,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1277,"out_wready", false,-1);
    tracep->declBit(c+1278,"out_wvalid", false,-1);
    tracep->declBus(c+1153,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1154,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1155,"out_wlast", false,-1);
    tracep->declBit(c+1548,"out_bready", false,-1);
    tracep->declBit(c+652,"out_bvalid", false,-1);
    tracep->declBus(c+649,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1586,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1596,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1585,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1597,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1598,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1599,"DELAY", false,-1, 2,0);
    tracep->declBus(c+653,"rstate", false,-1, 2,0);
    tracep->declBus(c+654,"wstate", false,-1, 2,0);
    tracep->declBus(c+655,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+656,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+657,"rvalid_reg", false,-1);
    tracep->declBus(c+658,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+659,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+663,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+664,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+665,"bvalid_reg", false,-1);
    tracep->declBus(c+666,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+667,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1590,"r", false,-1, 10,0);
    tracep->declBus(c+1588,"s", false,-1, 1,0);
    tracep->declBus(c+668,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+81,"auto_in_awready", false,-1);
    tracep->declBit(c+1060,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1051,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1054,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+82,"auto_in_wready", false,-1);
    tracep->declBit(c+1061,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1057,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"auto_in_wlast", false,-1);
    tracep->declBit(c+1549,"auto_in_bready", false,-1);
    tracep->declBit(c+1358,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1359,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+616,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+83,"auto_in_arready", false,-1);
    tracep->declBit(c+1062,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1045,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1046,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1048,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1049,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1360,"auto_in_rready", false,-1);
    tracep->declBit(c+1361,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1362,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+617,"auto_in_rlast", false,-1);
    tracep->declBit(c+1363,"auto_out_awready", false,-1);
    tracep->declBit(c+1063,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1034,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1064,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1364,"auto_out_wready", false,-1);
    tracep->declBit(c+1065,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1038,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1066,"auto_out_wlast", false,-1);
    tracep->declBit(c+1365,"auto_out_bready", false,-1);
    tracep->declBit(c+1366,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1359,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1367,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1368,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1369,"auto_out_arready", false,-1);
    tracep->declBit(c+1067,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1041,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1042,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1043,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1068,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1360,"auto_out_rready", false,-1);
    tracep->declBit(c+1361,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1362,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+618,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1370,"auto_out_rlast", false,-1);
    tracep->declBit(c+1065,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+84,"w_idle", false,-1);
    tracep->declBit(c+1371,"in_awready", false,-1);
    tracep->declBit(c+85,"busy", false,-1);
    tracep->declBus(c+86,"r_addr", false,-1, 31,0);
    tracep->declBus(c+87,"r_len", false,-1, 7,0);
    tracep->declBus(c+1069,"len", false,-1, 7,0);
    tracep->declBus(c+1070,"addr", false,-1, 31,0);
    tracep->declBit(c+88,"busy_1", false,-1);
    tracep->declBus(c+89,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+90,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1071,"len_1", false,-1, 7,0);
    tracep->declBus(c+1072,"addr_1", false,-1, 31,0);
    tracep->declBit(c+91,"wbeats_latched", false,-1);
    tracep->declBit(c+1063,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1073,"wbeats_valid", false,-1);
    tracep->declBus(c+92,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1074,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1066,"w_last", false,-1);
    tracep->declBit(c+1365,"nodeOut_bready", false,-1);
    tracep->declBus(c+93,"error_0", false,-1, 1,0);
    tracep->declBus(c+94,"error_1", false,-1, 1,0);
    tracep->declBus(c+95,"error_2", false,-1, 1,0);
    tracep->declBus(c+96,"error_3", false,-1, 1,0);
    tracep->declBus(c+97,"error_4", false,-1, 1,0);
    tracep->declBus(c+98,"error_5", false,-1, 1,0);
    tracep->declBus(c+99,"error_6", false,-1, 1,0);
    tracep->declBus(c+100,"error_7", false,-1, 1,0);
    tracep->declBus(c+101,"error_8", false,-1, 1,0);
    tracep->declBus(c+102,"error_9", false,-1, 1,0);
    tracep->declBus(c+103,"error_10", false,-1, 1,0);
    tracep->declBus(c+104,"error_11", false,-1, 1,0);
    tracep->declBus(c+105,"error_12", false,-1, 1,0);
    tracep->declBus(c+106,"error_13", false,-1, 1,0);
    tracep->declBus(c+107,"error_14", false,-1, 1,0);
    tracep->declBus(c+108,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+83,"io_enq_ready", false,-1);
    tracep->declBit(c+1062,"io_enq_valid", false,-1);
    tracep->declBus(c+1045,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1046,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1047,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1048,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1049,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1372,"io_deq_ready", false,-1);
    tracep->declBit(c+1067,"io_deq_valid", false,-1);
    tracep->declBus(c+1041,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1075,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1076,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1043,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1077,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+109,"ram", false,-1, 48,0);
    tracep->declBit(c+111,"full", false,-1);
    tracep->declBit(c+1067,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1373,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+81,"io_enq_ready", false,-1);
    tracep->declBit(c+1060,"io_enq_valid", false,-1);
    tracep->declBus(c+1051,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1052,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1053,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1054,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1055,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1374,"io_deq_ready", false,-1);
    tracep->declBit(c+1078,"io_deq_valid", false,-1);
    tracep->declBus(c+1034,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1079,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1080,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1036,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1081,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+112,"ram", false,-1, 48,0);
    tracep->declBit(c+114,"full", false,-1);
    tracep->declBit(c+1078,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1375,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+82,"io_enq_ready", false,-1);
    tracep->declBit(c+1061,"io_enq_valid", false,-1);
    tracep->declBus(c+1057,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1058,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1059,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1376,"io_deq_ready", false,-1);
    tracep->declBit(c+1082,"io_deq_valid", false,-1);
    tracep->declBus(c+1038,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1039,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1552,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+115,"ram", false,-1, 36,0);
    tracep->declBit(c+117,"full", false,-1);
    tracep->declBit(c+1082,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1377,"do_enq", false,-1);
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
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1378,"auto_in_awready", false,-1);
    tracep->declBit(c+1083,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1034,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1084,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1159,"auto_in_wready", false,-1);
    tracep->declBit(c+1085,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1038,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1379,"auto_in_bready", false,-1);
    tracep->declBit(c+118,"auto_in_bvalid", false,-1);
    tracep->declBus(c+119,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1380,"auto_in_arready", false,-1);
    tracep->declBit(c+1086,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1041,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1087,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1381,"auto_in_rready", false,-1);
    tracep->declBit(c+121,"auto_in_rvalid", false,-1);
    tracep->declBus(c+122,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+123,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+124,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1380,"nodeIn_arready", false,-1);
    tracep->declBit(c+1378,"nodeIn_awready", false,-1);
    tracep->declBit(c+1088,"w_sel0", false,-1);
    tracep->declBit(c+118,"w_full", false,-1);
    tracep->declBus(c+119,"w_id", false,-1, 3,0);
    tracep->declBit(c+125,"r_sel1", false,-1);
    tracep->declBit(c+126,"w_sel1", false,-1);
    tracep->declBit(c+121,"r_full", false,-1);
    tracep->declBus(c+122,"r_id", false,-1, 3,0);
    tracep->declBit(c+1382,"ren", false,-1);
    tracep->declBit(c+127,"rdata_REG", false,-1);
    tracep->declBus(c+128,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+129,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+130,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+131,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1089,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1382,"R0_en", false,-1);
    tracep->declBit(c+1518,"R0_clk", false,-1);
    tracep->declBus(c+132,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1090,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1383,"W0_en", false,-1);
    tracep->declBit(c+1518,"W0_clk", false,-1);
    tracep->declBus(c+1038,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1039,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1279,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1091,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1051,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1054,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1156,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1059,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1057,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1092,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1384,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1385,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1553,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1280,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1093,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1045,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1046,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1048,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1049,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1094,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1386,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1387,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1554,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1555,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1388,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1263,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1050,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1051,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1054,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1264,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1056,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1057,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1356,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+645,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+646,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+647,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1262,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1044,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1045,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1046,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1048,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1049,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1355,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+640,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+641,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+642,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+643,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+644,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+81,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1060,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1051,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1054,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+82,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1061,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1057,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1549,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1358,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1359,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+616,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+83,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1062,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1045,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1046,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1048,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1049,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1360,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1361,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1362,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+617,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1384,"in_0_bvalid", false,-1);
    tracep->declBit(c+1386,"in_0_rvalid", false,-1);
    tracep->declBit(c+1281,"in_0_wready", false,-1);
    tracep->declBit(c+1282,"in_0_awready", false,-1);
    tracep->declBit(c+1556,"in_0_arready", false,-1);
    tracep->declBit(c+1279,"anonIn_awready", false,-1);
    tracep->declBit(c+1280,"anonIn_arready", false,-1);
    tracep->declBit(c+1095,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1096,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1097,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1098,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1099,"arSel", false,-1, 15,0);
    tracep->declBus(c+1100,"awSel", false,-1, 15,0);
    tracep->declBus(c+1389,"rSel", false,-1, 15,0);
    tracep->declBus(c+1390,"bSel", false,-1, 15,0);
    tracep->declBus(c+133,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+134,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+135,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+136,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+137,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+138,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+139,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+140,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+141,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+142,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+143,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+144,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+145,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+146,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+147,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+148,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+149,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+150,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+151,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+152,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+153,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+154,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+155,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+156,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+157,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+158,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+159,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+160,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+161,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+162,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+163,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+164,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+165,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+166,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+167,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+168,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+169,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+170,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+171,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+172,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+173,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+174,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+175,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+176,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+177,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+178,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+179,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+180,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+181,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+182,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+183,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+184,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+185,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+186,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+187,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+188,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+189,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+190,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+191,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+192,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+193,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+194,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+195,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+196,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1101,"in_0_arvalid", false,-1);
    tracep->declBit(c+197,"latched", false,-1);
    tracep->declBit(c+1102,"in_0_awvalid", false,-1);
    tracep->declBit(c+1103,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1104,"in_0_wvalid", false,-1);
    tracep->declBit(c+198,"idle_2", false,-1);
    tracep->declBit(c+1391,"anyValid", false,-1);
    tracep->declBus(c+1392,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+199,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1393,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1394,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1395,"prefixOR_1", false,-1);
    tracep->declBit(c+1396,"winner_2_1", false,-1);
    tracep->declBit(c+200,"state_2_0", false,-1);
    tracep->declBit(c+201,"state_2_1", false,-1);
    tracep->declBit(c+1397,"muxState_2_0", false,-1);
    tracep->declBit(c+1398,"muxState_2_1", false,-1);
    tracep->declBit(c+202,"idle_3", false,-1);
    tracep->declBit(c+1399,"anyValid_1", false,-1);
    tracep->declBus(c+1400,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+203,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1401,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1402,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1403,"winner_3_0", false,-1);
    tracep->declBit(c+1404,"winner_3_1", false,-1);
    tracep->declBit(c+204,"state_3_0", false,-1);
    tracep->declBit(c+205,"state_3_1", false,-1);
    tracep->declBit(c+619,"muxState_3_0", false,-1);
    tracep->declBit(c+620,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+206,"io_enq_ready", false,-1);
    tracep->declBit(c+1103,"io_enq_valid", false,-1);
    tracep->declBus(c+1105,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1283,"io_deq_ready", false,-1);
    tracep->declBit(c+1106,"io_deq_valid", false,-1);
    tracep->declBus(c+1107,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+207,"wrap", false,-1);
    tracep->declBit(c+208,"wrap_1", false,-1);
    tracep->declBit(c+209,"maybe_full", false,-1);
    tracep->declBit(c+210,"ptr_match", false,-1);
    tracep->declBit(c+211,"empty", false,-1);
    tracep->declBit(c+212,"full", false,-1);
    tracep->declBit(c+1106,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1284,"do_deq", false,-1);
    tracep->declBit(c+1285,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+208,"R0_addr", false,-1);
    tracep->declBit(c+1600,"R0_en", false,-1);
    tracep->declBit(c+1518,"R0_clk", false,-1);
    tracep->declBus(c+213,"R0_data", false,-1, 1,0);
    tracep->declBit(c+207,"W0_addr", false,-1);
    tracep->declBit(c+1285,"W0_en", false,-1);
    tracep->declBit(c+1518,"W0_clk", false,-1);
    tracep->declBus(c+1105,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+214+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1405,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1108,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1034,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1364,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1065,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1066,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1365,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1366,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1359,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1367,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1406,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1109,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1041,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1042,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1043,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1360,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1361,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1362,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1370,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1378,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1083,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1034,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1084,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1159,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1085,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1379,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+118,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+119,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1380,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1086,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1041,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1087,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1381,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+121,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+122,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+123,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+124,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1110,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1111,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+216,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1112,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1041,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1113,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+621,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+217,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+218,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+219,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1308,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1033,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1034,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1308,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1038,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1351,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1352,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+72,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1546,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1309,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1040,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1041,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1042,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1043,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1353,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1354,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+73,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1547,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1546,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1366,"in_0_bvalid", false,-1);
    tracep->declBit(c+1361,"in_0_rvalid", false,-1);
    tracep->declBit(c+1407,"in_0_wready", false,-1);
    tracep->declBit(c+1408,"in_0_awready", false,-1);
    tracep->declBit(c+1406,"in_0_arready", false,-1);
    tracep->declBit(c+1405,"anonIn_awready", false,-1);
    tracep->declBit(c+1114,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1115,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1116,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1117,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1118,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1119,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1120,"arSel", false,-1, 15,0);
    tracep->declBus(c+1121,"awSel", false,-1, 15,0);
    tracep->declBus(c+1409,"rSel", false,-1, 15,0);
    tracep->declBus(c+1410,"bSel", false,-1, 15,0);
    tracep->declBit(c+220,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+221,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+222,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+223,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+224,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+225,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+226,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+227,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+228,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+229,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+230,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+231,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+232,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+233,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+234,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+235,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+236,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+237,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+238,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+239,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+240,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+241,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+242,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+243,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+244,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+245,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+246,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+247,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+248,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+249,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+250,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+251,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+252,"latched", false,-1);
    tracep->declBit(c+1122,"in_0_awvalid", false,-1);
    tracep->declBit(c+1123,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1124,"in_0_wvalid", false,-1);
    tracep->declBit(c+253,"idle_3", false,-1);
    tracep->declBit(c+1411,"anyValid", false,-1);
    tracep->declBus(c+1412,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+254,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1413,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1414,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1415,"prefixOR_1", false,-1);
    tracep->declBit(c+1416,"winner_3_1", false,-1);
    tracep->declBit(c+1417,"winner_3_2", false,-1);
    tracep->declBit(c+255,"state_3_0", false,-1);
    tracep->declBit(c+256,"state_3_1", false,-1);
    tracep->declBit(c+257,"state_3_2", false,-1);
    tracep->declBit(c+1418,"muxState_3_0", false,-1);
    tracep->declBit(c+1419,"muxState_3_1", false,-1);
    tracep->declBit(c+1420,"muxState_3_2", false,-1);
    tracep->declBit(c+258,"idle_4", false,-1);
    tracep->declBit(c+1421,"anyValid_1", false,-1);
    tracep->declBus(c+1422,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+259,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1423,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1424,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1425,"winner_4_0", false,-1);
    tracep->declBit(c+1426,"winner_4_2", false,-1);
    tracep->declBit(c+260,"state_4_0", false,-1);
    tracep->declBit(c+261,"state_4_2", false,-1);
    tracep->declBit(c+1427,"muxState_4_0", false,-1);
    tracep->declBit(c+1428,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+262,"io_enq_ready", false,-1);
    tracep->declBit(c+1123,"io_enq_valid", false,-1);
    tracep->declBus(c+1125,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1429,"io_deq_ready", false,-1);
    tracep->declBit(c+1126,"io_deq_valid", false,-1);
    tracep->declBus(c+1127,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+263,"wrap", false,-1);
    tracep->declBit(c+264,"wrap_1", false,-1);
    tracep->declBit(c+265,"maybe_full", false,-1);
    tracep->declBit(c+266,"ptr_match", false,-1);
    tracep->declBit(c+267,"empty", false,-1);
    tracep->declBit(c+268,"full", false,-1);
    tracep->declBit(c+1126,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1430,"do_deq", false,-1);
    tracep->declBit(c+1431,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+264,"R0_addr", false,-1);
    tracep->declBit(c+1600,"R0_en", false,-1);
    tracep->declBit(c+1518,"R0_clk", false,-1);
    tracep->declBus(c+269,"R0_data", false,-1, 2,0);
    tracep->declBit(c+263,"W0_addr", false,-1);
    tracep->declBit(c+1431,"W0_en", false,-1);
    tracep->declBit(c+1518,"W0_clk", false,-1);
    tracep->declBus(c+1125,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+270+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1363,"auto_in_awready", false,-1);
    tracep->declBit(c+1063,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1034,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1064,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1364,"auto_in_wready", false,-1);
    tracep->declBit(c+1065,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1038,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1066,"auto_in_wlast", false,-1);
    tracep->declBit(c+1365,"auto_in_bready", false,-1);
    tracep->declBit(c+1366,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1359,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1367,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1368,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1369,"auto_in_arready", false,-1);
    tracep->declBit(c+1067,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1041,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1042,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1043,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1068,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1360,"auto_in_rready", false,-1);
    tracep->declBit(c+1361,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1362,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+618,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1370,"auto_in_rlast", false,-1);
    tracep->declBit(c+1405,"auto_out_awready", false,-1);
    tracep->declBit(c+1108,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1034,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1364,"auto_out_wready", false,-1);
    tracep->declBit(c+1065,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1038,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1066,"auto_out_wlast", false,-1);
    tracep->declBit(c+1365,"auto_out_bready", false,-1);
    tracep->declBit(c+1366,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1359,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1367,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1406,"auto_out_arready", false,-1);
    tracep->declBit(c+1109,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1041,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1042,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1043,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1360,"auto_out_rready", false,-1);
    tracep->declBit(c+1361,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1362,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1550,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1551,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1370,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+272,"io_enq_ready", false,-1);
    tracep->declBit(c+1160,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1432,"io_deq_ready", false,-1);
    tracep->declBit(c+273,"io_deq_valid", false,-1);
    tracep->declBit(c+274,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+273,"full", false,-1);
    tracep->declBit(c+274,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+275,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+276,"io_enq_ready", false,-1);
    tracep->declBit(c+1161,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1433,"io_deq_ready", false,-1);
    tracep->declBit(c+277,"io_deq_valid", false,-1);
    tracep->declBit(c+278,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+277,"full", false,-1);
    tracep->declBit(c+278,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+279,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+280,"io_enq_ready", false,-1);
    tracep->declBit(c+1162,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1434,"io_deq_ready", false,-1);
    tracep->declBit(c+281,"io_deq_valid", false,-1);
    tracep->declBit(c+282,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+281,"full", false,-1);
    tracep->declBit(c+282,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+283,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+284,"io_enq_ready", false,-1);
    tracep->declBit(c+1163,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1435,"io_deq_ready", false,-1);
    tracep->declBit(c+285,"io_deq_valid", false,-1);
    tracep->declBit(c+286,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+285,"full", false,-1);
    tracep->declBit(c+286,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+287,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+288,"io_enq_ready", false,-1);
    tracep->declBit(c+1164,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1436,"io_deq_ready", false,-1);
    tracep->declBit(c+289,"io_deq_valid", false,-1);
    tracep->declBit(c+290,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+289,"full", false,-1);
    tracep->declBit(c+290,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+291,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+1165,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1437,"io_deq_ready", false,-1);
    tracep->declBit(c+293,"io_deq_valid", false,-1);
    tracep->declBit(c+294,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+293,"full", false,-1);
    tracep->declBit(c+294,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+295,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+296,"io_enq_ready", false,-1);
    tracep->declBit(c+1166,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1438,"io_deq_ready", false,-1);
    tracep->declBit(c+297,"io_deq_valid", false,-1);
    tracep->declBit(c+298,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+297,"full", false,-1);
    tracep->declBit(c+298,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+299,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+1167,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1439,"io_deq_ready", false,-1);
    tracep->declBit(c+301,"io_deq_valid", false,-1);
    tracep->declBit(c+302,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+301,"full", false,-1);
    tracep->declBit(c+302,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+303,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+1168,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1440,"io_deq_ready", false,-1);
    tracep->declBit(c+305,"io_deq_valid", false,-1);
    tracep->declBit(c+306,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+305,"full", false,-1);
    tracep->declBit(c+306,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+307,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+308,"io_enq_ready", false,-1);
    tracep->declBit(c+1169,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1441,"io_deq_ready", false,-1);
    tracep->declBit(c+309,"io_deq_valid", false,-1);
    tracep->declBit(c+310,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+309,"full", false,-1);
    tracep->declBit(c+310,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+311,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+312,"io_enq_ready", false,-1);
    tracep->declBit(c+1170,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1442,"io_deq_ready", false,-1);
    tracep->declBit(c+313,"io_deq_valid", false,-1);
    tracep->declBit(c+314,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+313,"full", false,-1);
    tracep->declBit(c+314,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+315,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+316,"io_enq_ready", false,-1);
    tracep->declBit(c+1171,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1443,"io_deq_ready", false,-1);
    tracep->declBit(c+317,"io_deq_valid", false,-1);
    tracep->declBit(c+318,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+317,"full", false,-1);
    tracep->declBit(c+318,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+319,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+320,"io_enq_ready", false,-1);
    tracep->declBit(c+1172,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1444,"io_deq_ready", false,-1);
    tracep->declBit(c+321,"io_deq_valid", false,-1);
    tracep->declBit(c+322,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+321,"full", false,-1);
    tracep->declBit(c+322,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+323,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+324,"io_enq_ready", false,-1);
    tracep->declBit(c+1173,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1445,"io_deq_ready", false,-1);
    tracep->declBit(c+325,"io_deq_valid", false,-1);
    tracep->declBit(c+326,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+325,"full", false,-1);
    tracep->declBit(c+326,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+327,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+1174,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1446,"io_deq_ready", false,-1);
    tracep->declBit(c+329,"io_deq_valid", false,-1);
    tracep->declBit(c+330,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+329,"full", false,-1);
    tracep->declBit(c+330,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+331,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+332,"io_enq_ready", false,-1);
    tracep->declBit(c+1175,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1447,"io_deq_ready", false,-1);
    tracep->declBit(c+333,"io_deq_valid", false,-1);
    tracep->declBit(c+334,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+333,"full", false,-1);
    tracep->declBit(c+334,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+335,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+336,"io_enq_ready", false,-1);
    tracep->declBit(c+1176,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1448,"io_deq_ready", false,-1);
    tracep->declBit(c+337,"io_deq_valid", false,-1);
    tracep->declBit(c+338,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+337,"full", false,-1);
    tracep->declBit(c+338,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+339,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+340,"io_enq_ready", false,-1);
    tracep->declBit(c+1177,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1449,"io_deq_ready", false,-1);
    tracep->declBit(c+341,"io_deq_valid", false,-1);
    tracep->declBit(c+342,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+341,"full", false,-1);
    tracep->declBit(c+342,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+343,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+344,"io_enq_ready", false,-1);
    tracep->declBit(c+1178,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1450,"io_deq_ready", false,-1);
    tracep->declBit(c+345,"io_deq_valid", false,-1);
    tracep->declBit(c+346,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+345,"full", false,-1);
    tracep->declBit(c+346,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+347,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+348,"io_enq_ready", false,-1);
    tracep->declBit(c+1179,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1451,"io_deq_ready", false,-1);
    tracep->declBit(c+349,"io_deq_valid", false,-1);
    tracep->declBit(c+350,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+349,"full", false,-1);
    tracep->declBit(c+350,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+351,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+352,"io_enq_ready", false,-1);
    tracep->declBit(c+1180,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1452,"io_deq_ready", false,-1);
    tracep->declBit(c+353,"io_deq_valid", false,-1);
    tracep->declBit(c+354,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+353,"full", false,-1);
    tracep->declBit(c+354,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+355,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+1181,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1453,"io_deq_ready", false,-1);
    tracep->declBit(c+357,"io_deq_valid", false,-1);
    tracep->declBit(c+358,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+357,"full", false,-1);
    tracep->declBit(c+358,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+359,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+360,"io_enq_ready", false,-1);
    tracep->declBit(c+1182,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1454,"io_deq_ready", false,-1);
    tracep->declBit(c+361,"io_deq_valid", false,-1);
    tracep->declBit(c+362,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+361,"full", false,-1);
    tracep->declBit(c+362,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+363,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+1183,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1455,"io_deq_ready", false,-1);
    tracep->declBit(c+365,"io_deq_valid", false,-1);
    tracep->declBit(c+366,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+365,"full", false,-1);
    tracep->declBit(c+366,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+367,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+1184,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1456,"io_deq_ready", false,-1);
    tracep->declBit(c+369,"io_deq_valid", false,-1);
    tracep->declBit(c+370,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+369,"full", false,-1);
    tracep->declBit(c+370,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+371,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+372,"io_enq_ready", false,-1);
    tracep->declBit(c+1185,"io_enq_valid", false,-1);
    tracep->declBit(c+1064,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1457,"io_deq_ready", false,-1);
    tracep->declBit(c+373,"io_deq_valid", false,-1);
    tracep->declBit(c+374,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+373,"full", false,-1);
    tracep->declBit(c+374,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+375,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+1186,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1458,"io_deq_ready", false,-1);
    tracep->declBit(c+377,"io_deq_valid", false,-1);
    tracep->declBit(c+378,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+377,"full", false,-1);
    tracep->declBit(c+378,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+379,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+380,"io_enq_ready", false,-1);
    tracep->declBit(c+1187,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1459,"io_deq_ready", false,-1);
    tracep->declBit(c+381,"io_deq_valid", false,-1);
    tracep->declBit(c+382,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+381,"full", false,-1);
    tracep->declBit(c+382,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+383,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+384,"io_enq_ready", false,-1);
    tracep->declBit(c+1188,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1460,"io_deq_ready", false,-1);
    tracep->declBit(c+385,"io_deq_valid", false,-1);
    tracep->declBit(c+386,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+385,"full", false,-1);
    tracep->declBit(c+386,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+387,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+388,"io_enq_ready", false,-1);
    tracep->declBit(c+1189,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1461,"io_deq_ready", false,-1);
    tracep->declBit(c+389,"io_deq_valid", false,-1);
    tracep->declBit(c+390,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+389,"full", false,-1);
    tracep->declBit(c+390,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+391,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+392,"io_enq_ready", false,-1);
    tracep->declBit(c+1190,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1462,"io_deq_ready", false,-1);
    tracep->declBit(c+393,"io_deq_valid", false,-1);
    tracep->declBit(c+394,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+393,"full", false,-1);
    tracep->declBit(c+394,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+395,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+396,"io_enq_ready", false,-1);
    tracep->declBit(c+1191,"io_enq_valid", false,-1);
    tracep->declBit(c+1068,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1463,"io_deq_ready", false,-1);
    tracep->declBit(c+397,"io_deq_valid", false,-1);
    tracep->declBit(c+398,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+397,"full", false,-1);
    tracep->declBit(c+398,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+399,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1557,"reset", false,-1);
    tracep->declBit(c+1279,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1091,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1051,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1054,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1156,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1059,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1057,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1092,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1384,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1385,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1553,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1280,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1093,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1045,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1046,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1048,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1049,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1094,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1386,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1387,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1554,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1555,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1388,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1557,"reset", false,-1);
    tracep->declBit(c+1595,"io_interrupt", false,-1);
    tracep->declBit(c+1279,"io_master_awready", false,-1);
    tracep->declBit(c+1091,"io_master_awvalid", false,-1);
    tracep->declBus(c+1051,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1052,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1053,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1054,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1156,"io_master_wready", false,-1);
    tracep->declBit(c+1059,"io_master_wvalid", false,-1);
    tracep->declBus(c+1057,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1058,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"io_master_wlast", false,-1);
    tracep->declBit(c+1092,"io_master_bready", false,-1);
    tracep->declBit(c+1384,"io_master_bvalid", false,-1);
    tracep->declBus(c+1385,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1553,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1280,"io_master_arready", false,-1);
    tracep->declBit(c+1093,"io_master_arvalid", false,-1);
    tracep->declBus(c+1045,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1046,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1047,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1048,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1049,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1094,"io_master_rready", false,-1);
    tracep->declBit(c+1386,"io_master_rvalid", false,-1);
    tracep->declBus(c+1387,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1554,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1555,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1388,"io_master_rlast", false,-1);
    tracep->declBit(c+1601,"io_slave_awready", false,-1);
    tracep->declBit(c+1595,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1602,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1603,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1604,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1596,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1586,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1605,"io_slave_wready", false,-1);
    tracep->declBit(c+1595,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1603,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1602,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1595,"io_slave_wlast", false,-1);
    tracep->declBit(c+1595,"io_slave_bready", false,-1);
    tracep->declBit(c+1606,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1607,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1608,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1609,"io_slave_arready", false,-1);
    tracep->declBit(c+1595,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1602,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1603,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1604,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1596,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1586,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1595,"io_slave_rready", false,-1);
    tracep->declBit(c+1610,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1611,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1612,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1613,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1614,"io_slave_rlast", false,-1);
    tracep->declBus(c+400,"pc", false,-1, 31,0);
    tracep->declBit(c+401,"pc_valid", false,-1);
    tracep->declBus(c+402,"snpc", false,-1, 31,0);
    tracep->declBus(c+403,"inst_if", false,-1, 31,0);
    tracep->declBus(c+404,"pc_if", false,-1, 31,0);
    tracep->declBit(c+405,"if_valid", false,-1);
    tracep->declBit(c+406,"if_ready", false,-1);
    tracep->declBus(c+407,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1028,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1604,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1602,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1615,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1596,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1586,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1616,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+408,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1029,"if_axi_arready", false,-1);
    tracep->declBit(c+1464,"if_axi_rvalid", false,-1);
    tracep->declBit(c+409,"if_axi_rready", false,-1);
    tracep->declBit(c+1617,"if_axi_rlast", false,-1);
    tracep->declBus(c+13,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1192,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+14,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1618,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1193,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+15,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+16,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1558,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1030,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1157,"icache_axi_arready", false,-1);
    tracep->declBit(c+1194,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+17,"icache_axi_rready", false,-1);
    tracep->declBit(c+1465,"icache_axi_rlast", false,-1);
    tracep->declBus(c+410,"inst_id", false,-1, 31,0);
    tracep->declBit(c+411,"id_valid", false,-1);
    tracep->declBit(c+412,"id_ready", false,-1);
    tracep->declBus(c+413,"rs1", false,-1, 4,0);
    tracep->declBus(c+414,"rs2", false,-1, 4,0);
    tracep->declBus(c+415,"prepc", false,-1, 20,0);
    tracep->declBus(c+416,"prepc_en", false,-1, 1,0);
    tracep->declBus(c+417,"pc_id", false,-1, 31,0);
    tracep->declBus(c+418,"imm_id", false,-1, 31,0);
    tracep->declBus(c+419,"op_id", false,-1, 4,0);
    tracep->declBus(c+420,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+421,"r1_id", false,-1, 13,0);
    tracep->declBus(c+422,"r2_id", false,-1, 13,0);
    tracep->declBus(c+423,"rd_id", false,-1, 3,0);
    tracep->declBit(c+424,"gpr_wen_id", false,-1);
    tracep->declBit(c+425,"ls_valid_id", false,-1);
    tracep->declBit(c+426,"fencei_id", false,-1);
    tracep->declBus(c+427,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+428,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+429,"npc_ex", false,-1, 31,0);
    tracep->declBit(c+430,"ex_ready", false,-1);
    tracep->declBit(c+1466,"ex_valid", false,-1);
    tracep->declBus(c+431,"xrd_ex", false,-1, 31,0);
    tracep->declBus(c+432,"rd_ex", false,-1, 3,0);
    tracep->declBit(c+433,"gpr_wen_ex", false,-1);
    tracep->declBus(c+434,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+435,"csrsw_ex", false,-1, 31,0);
    tracep->declBus(c+436,"csrs_wen_ex", false,-1, 3,0);
    tracep->declBus(c+437,"ls_addr", false,-1, 31,0);
    tracep->declBus(c+438,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+439,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+1467,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+1559,"ls_done", false,-1);
    tracep->declBus(c+18,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+19,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+20,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1468,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1560,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1619,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1620,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1621,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1195,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1622,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1196,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1561,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1562,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1623,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1624,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1563,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1564,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1031,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1286,"ls_axi_awready", false,-1);
    tracep->declBit(c+21,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1158,"ls_axi_wready", false,-1);
    tracep->declBit(c+1469,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+22,"ls_axi_bready", false,-1);
    tracep->declBit(c+1032,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1287,"ls_axi_arready", false,-1);
    tracep->declBit(c+1470,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+23,"ls_axi_rready", false,-1);
    tracep->declBit(c+21,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1197,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1625,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1626,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1128,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1565,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1627,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1628,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1129,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1629,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1630,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1130,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1631,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1632,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1131,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1633,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1132,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1634,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1635,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1636,"c_axi_awvalid", false,-1);
    tracep->declBit(c+1637,"c_axi_awready", false,-1);
    tracep->declBit(c+1638,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1639,"c_axi_wready", false,-1);
    tracep->declBit(c+1640,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1641,"c_axi_bready", false,-1);
    tracep->declBit(c+1133,"c_axi_arvalid", false,-1);
    tracep->declBit(c+440,"c_axi_arready", false,-1);
    tracep->declBit(c+441,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1134,"c_axi_rready", false,-1);
    tracep->declBit(c+1642,"c_axi_wlast", false,-1);
    tracep->declBit(c+1643,"c_axi_rlast", false,-1);
    tracep->declBus(c+442,"r1", false,-1, 31,0);
    tracep->declBus(c+443,"r2", false,-1, 31,0);
    tracep->declBus(c+444,"mepc", false,-1, 31,0);
    tracep->declBus(c+445,"mstatus", false,-1, 31,0);
    tracep->declBus(c+446,"mcause", false,-1, 31,0);
    tracep->declBus(c+447,"mtvec", false,-1, 31,0);
    tracep->declBus(c+448,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+449,"marchid", false,-1, 31,0);
    tracep->declBit(c+1595,"isRAW", false,-1);
    tracep->declBit(c+450,"CHazarden", false,-1);
    tracep->declBit(c+451,"isCHazard", false,-1);
    tracep->declBit(c+452,"difftest_delay", false,-1);
    tracep->declBit(c+453,"difftest", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1644,"n", false,-1, 31,0);
    tracep->declBus(c+1645,"w", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBus(c+400,"pc_i", false,-1, 31,0);
    tracep->declBus(c+402,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+415,"prepc_i", false,-1, 20,0);
    tracep->declBus(c+404,"prepc_tag_i", false,-1, 31,0);
    tracep->declBus(c+416,"prepc_en_i", false,-1, 1,0);
    tracep->declBus(c+454,"jsnpc_reg", false,-1, 20,0);
    tracep->declBus(c+455,"jtag_reg", false,-1, 29,0);
    tracep->declBus(c+456,"jtag", false,-1, 29,0);
    tracep->declBit(c+457,"jhit", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+458+i*1,"snpc_reg", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+462+i*1,"tag_reg", true,(i+0), 27,0);
    }
    tracep->declBus(c+466,"tag", false,-1, 27,0);
    tracep->declBus(c+467,"index", false,-1, 1,0);
    tracep->declBus(c+468,"prepc_tag", false,-1, 27,0);
    tracep->declBus(c+469,"prepc_index", false,-1, 1,0);
    tracep->declBus(c+1646,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBus(c+470,"hit", false,-1, 0,0);
    tracep->declBus(c+471,"already", false,-1, 0,0);
    tracep->declBus(c+472,"enable", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+473,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBit(c+440,"c_axi_arready", false,-1);
    tracep->declBit(c+1133,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1130,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1128,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1129,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1131,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1132,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1134,"c_axi_rready", false,-1);
    tracep->declBit(c+441,"c_axi_rvalid", false,-1);
    tracep->declBus(c+1631,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1565,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1635,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1643,"c_axi_rlast", false,-1);
    tracep->declBus(c+1647,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1648,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBus(c+1566,"c_rdata", false,-1, 31,0);
    tracep->declQuad(c+474,"mtime", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBit(c+451,"flush_i", false,-1);
    tracep->declBus(c+410,"inst_i", false,-1, 31,0);
    tracep->declBus(c+427,"pc_o", false,-1, 31,0);
    tracep->declBus(c+428,"inst_o", false,-1, 31,0);
    tracep->declBus(c+429,"npc_o", false,-1, 31,0);
    tracep->declBit(c+411,"id_valid_i", false,-1);
    tracep->declBit(c+430,"ex_ready_o", false,-1);
    tracep->declBit(c+1466,"ex_valid_o", false,-1);
    tracep->declBus(c+417,"pc_i", false,-1, 31,0);
    tracep->declBus(c+418,"imm_i", false,-1, 31,0);
    tracep->declBus(c+419,"op_i", false,-1, 4,0);
    tracep->declBus(c+420,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+476,"r1_i", false,-1, 31,0);
    tracep->declBus(c+477,"r2_i", false,-1, 31,0);
    tracep->declBus(c+423,"rd_i", false,-1, 3,0);
    tracep->declBit(c+424,"gpr_wen_i", false,-1);
    tracep->declBus(c+444,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+445,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+446,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+447,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+431,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+432,"rd_o", false,-1, 3,0);
    tracep->declBit(c+433,"gpr_wen_o", false,-1);
    tracep->declBus(c+434,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+435,"csrsw_o", false,-1, 31,0);
    tracep->declBus(c+436,"csrs_wen_o", false,-1, 3,0);
    tracep->declBus(c+437,"ls_addr_o", false,-1, 31,0);
    tracep->declBus(c+438,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1467,"ls_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1559,"ls_done_i", false,-1);
    tracep->declBus(c+439,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+1649,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1650,"WAIT", false,-1, 0,0);
    tracep->declBit(c+478,"state", false,-1);
    tracep->declBit(c+1471,"updata", false,-1);
    tracep->declBus(c+622,"xrd", false,-1, 31,0);
    tracep->declBus(c+479,"csr", false,-1, 31,0);
    tracep->declBus(c+480,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+481,"csrs_w", false,-1, 31,0);
    tracep->declBus(c+482,"csrs_wen", false,-1, 3,0);
    tracep->declBit(c+483,"funct7_i", false,-1);
    tracep->declBus(c+484,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+485,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+486,"alu_res", false,-1, 31,0);
    tracep->declBus(c+487,"a", false,-1, 31,0);
    tracep->declBus(c+488,"b", false,-1, 31,0);
    tracep->declBit(c+489,"a_use_r1", false,-1);
    tracep->declBit(c+490,"b_use_imm", false,-1);
    tracep->declBit(c+491,"b_use_shamt", false,-1);
    tracep->declBit(c+492,"b_use_r2", false,-1);
    tracep->declBit(c+493,"ab_use_signed", false,-1);
    tracep->declBus(c+1602,"ADD", false,-1, 3,0);
    tracep->declBus(c+1651,"SUB", false,-1, 3,0);
    tracep->declBus(c+1652,"SLL", false,-1, 3,0);
    tracep->declBus(c+1653,"SRL", false,-1, 3,0);
    tracep->declBus(c+1654,"SRA", false,-1, 3,0);
    tracep->declBus(c+1655,"SLT", false,-1, 3,0);
    tracep->declBus(c+1656,"AND", false,-1, 3,0);
    tracep->declBus(c+1657,"OR", false,-1, 3,0);
    tracep->declBus(c+1658,"XOR", false,-1, 3,0);
    tracep->declBit(c+494,"ls_valid", false,-1);
    tracep->declBus(c+418,"offset", false,-1, 31,0);
    tracep->declBit(c+495,"jalen", false,-1);
    tracep->declBit(c+496,"jalren", false,-1);
    tracep->declBit(c+497,"beqen", false,-1);
    tracep->declBit(c+498,"bneen", false,-1);
    tracep->declBit(c+499,"blten", false,-1);
    tracep->declBit(c+500,"bgeen", false,-1);
    tracep->declBit(c+501,"bltuen", false,-1);
    tracep->declBit(c+502,"bgeuen", false,-1);
    tracep->declBit(c+503,"ecall_en", false,-1);
    tracep->declBit(c+504,"mret_en", false,-1);
    tracep->declBus(c+505,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1644,"n", false,-1, 31,0);
    tracep->declBus(c+1659,"m", false,-1, 31,0);
    tracep->declBus(c+1660,"w", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBit(c+426,"fencei_i", false,-1);
    tracep->declBit(c+1029,"m_axi_arready", false,-1);
    tracep->declBit(c+408,"m_axi_arvalid", false,-1);
    tracep->declBus(c+1602,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+407,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1604,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1596,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1586,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+409,"m_axi_rready", false,-1);
    tracep->declBit(c+1464,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1615,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1028,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1616,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1617,"m_axi_rlast", false,-1);
    tracep->declBit(c+1157,"s_axi_arready", false,-1);
    tracep->declBit(c+1030,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1618,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+13,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+14,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+15,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+16,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+17,"s_axi_rready", false,-1);
    tracep->declBit(c+1194,"s_axi_rvalid", false,-1);
    tracep->declBus(c+1193,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1192,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1558,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1465,"s_axi_rlast", false,-1);
    tracep->declBus(c+1659,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1659,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1644,"CACHE_WAY", false,-1, 31,0);
    tracep->pushNamePrefix("cache_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+24,"[0]", false,-1, 31,0);
    tracep->declBus(c+25,"[1]", false,-1, 31,0);
    tracep->declBus(c+26,"[2]", false,-1, 31,0);
    tracep->declBus(c+27,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+28,"[0]", false,-1, 31,0);
    tracep->declBus(c+29,"[1]", false,-1, 31,0);
    tracep->declBus(c+30,"[2]", false,-1, 31,0);
    tracep->declBus(c+31,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+32,"[0]", false,-1, 31,0);
    tracep->declBus(c+33,"[1]", false,-1, 31,0);
    tracep->declBus(c+34,"[2]", false,-1, 31,0);
    tracep->declBus(c+35,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+36,"[0]", false,-1, 31,0);
    tracep->declBus(c+37,"[1]", false,-1, 31,0);
    tracep->declBus(c+38,"[2]", false,-1, 31,0);
    tracep->declBus(c+39,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+40,"[0]", false,-1, 26,0);
    tracep->declBus(c+41,"[1]", false,-1, 26,0);
    tracep->declBus(c+42,"[2]", false,-1, 26,0);
    tracep->declBus(c+43,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+44,"[0]", false,-1, 26,0);
    tracep->declBus(c+45,"[1]", false,-1, 26,0);
    tracep->declBus(c+46,"[2]", false,-1, 26,0);
    tracep->declBus(c+47,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+48,"[0]", false,-1, 26,0);
    tracep->declBus(c+49,"[1]", false,-1, 26,0);
    tracep->declBus(c+50,"[2]", false,-1, 26,0);
    tracep->declBus(c+51,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+52,"[0]", false,-1, 26,0);
    tracep->declBus(c+53,"[1]", false,-1, 26,0);
    tracep->declBus(c+54,"[2]", false,-1, 26,0);
    tracep->declBus(c+55,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+56+i*1,"valid_reg", true,(i+0), 3,0);
    }
    tracep->declBus(c+506,"tag", false,-1, 26,0);
    tracep->declBus(c+507,"index", false,-1, 0,0);
    tracep->declBus(c+508,"offset", false,-1, 1,0);
    tracep->declBus(c+60,"s_tag", false,-1, 26,0);
    tracep->declBus(c+61,"s_index", false,-1, 0,0);
    tracep->declBus(c+62,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1135,"access", false,-1, 1,0);
    tracep->declBus(c+63,"hit", false,-1, 1,0);
    tracep->declBus(c+1661,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBit(c+1472,"axi_rvalid", false,-1);
    tracep->declBit(c+509,"axi_rvalid_enable", false,-1);
    tracep->declBus(c+1649,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1650,"TRANS", false,-1, 0,0);
    tracep->declBit(c+64,"state", false,-1);
    tracep->declBus(c+65,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+66,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+68,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+69,"a", false,-1, 31,0);
    tracep->declBus(c+70,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBit(c+1595,"isRAW_i", false,-1);
    tracep->declBit(c+451,"flush_i", false,-1);
    tracep->declBus(c+410,"inst_o", false,-1, 31,0);
    tracep->declBus(c+413,"rs1", false,-1, 4,0);
    tracep->declBus(c+414,"rs2", false,-1, 4,0);
    tracep->declBus(c+442,"r1", false,-1, 31,0);
    tracep->declBus(c+443,"r2", false,-1, 31,0);
    tracep->declBus(c+415,"prepc_o", false,-1, 20,0);
    tracep->declBus(c+416,"prepc_en_o", false,-1, 1,0);
    tracep->declBit(c+405,"if_valid_i", false,-1);
    tracep->declBit(c+412,"id_ready_o", false,-1);
    tracep->declBit(c+411,"id_valid_o", false,-1);
    tracep->declBit(c+430,"ex_ready_i", false,-1);
    tracep->declBus(c+404,"pc_i", false,-1, 31,0);
    tracep->declBus(c+403,"inst_i", false,-1, 31,0);
    tracep->declBus(c+417,"pc_o", false,-1, 31,0);
    tracep->declBus(c+418,"imm_o", false,-1, 31,0);
    tracep->declBus(c+419,"op_o", false,-1, 4,0);
    tracep->declBus(c+420,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+510,"r1_o", false,-1, 31,0);
    tracep->declBus(c+511,"r2_o", false,-1, 31,0);
    tracep->declBus(c+423,"rd_o", false,-1, 3,0);
    tracep->declBit(c+424,"gpr_wen_o", false,-1);
    tracep->declBit(c+425,"ls_valid_o", false,-1);
    tracep->declBit(c+426,"fencei_o", false,-1);
    tracep->declBus(c+1649,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1650,"WAIT", false,-1, 0,0);
    tracep->declBit(c+512,"state", false,-1);
    tracep->declBit(c+513,"updata", false,-1);
    tracep->declBus(c+514,"op", false,-1, 4,0);
    tracep->declBus(c+515,"rd", false,-1, 3,0);
    tracep->declBus(c+516,"funct3", false,-1, 2,0);
    tracep->declBus(c+517,"immI", false,-1, 31,0);
    tracep->declBus(c+518,"immU", false,-1, 31,0);
    tracep->declBus(c+519,"immS", false,-1, 31,0);
    tracep->declBus(c+520,"immB", false,-1, 31,0);
    tracep->declBus(c+521,"immJ", false,-1, 31,0);
    tracep->declBus(c+522,"imm", false,-1, 31,0);
    tracep->declBus(c+523,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBit(c+451,"flush", false,-1);
    tracep->declBit(c+401,"pc_valid_i", false,-1);
    tracep->declBit(c+406,"if_ready_o", false,-1);
    tracep->declBit(c+405,"if_valid_o", false,-1);
    tracep->declBit(c+412,"id_ready_i", false,-1);
    tracep->declBus(c+400,"pc_i", false,-1, 31,0);
    tracep->declBus(c+404,"pc_o", false,-1, 31,0);
    tracep->declBus(c+403,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1029,"if_axi_arready_i", false,-1);
    tracep->declBit(c+408,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+1602,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+407,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+1604,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1596,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1586,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+409,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1464,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1615,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1028,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1616,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1617,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1649,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1650,"WAIT", false,-1, 0,0);
    tracep->declBit(c+524,"state", false,-1);
    tracep->declBit(c+525,"ifaddr_valid", false,-1);
    tracep->declBit(c+526,"updata", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBus(c+419,"op_i", false,-1, 4,0);
    tracep->declBus(c+420,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+527,"ls_valid_i", false,-1);
    tracep->declBus(c+437,"ls_addr_i", false,-1, 31,0);
    tracep->declBus(c+438,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1467,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1559,"ls_done_o", false,-1);
    tracep->declBit(c+1286,"ls_axi_awready", false,-1);
    tracep->declBit(c+1031,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1621,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+18,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1619,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1561,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1623,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1158,"ls_axi_wready", false,-1);
    tracep->declBit(c+21,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+19,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1560,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+21,"ls_axi_wlast", false,-1);
    tracep->declBit(c+22,"ls_axi_bready", false,-1);
    tracep->declBit(c+1469,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+1195,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1563,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1287,"ls_axi_arready", false,-1);
    tracep->declBit(c+1032,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1622,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+20,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1620,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1562,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1624,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+23,"ls_axi_rready", false,-1);
    tracep->declBit(c+1470,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+1196,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1468,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1564,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1197,"ls_axi_rlast", false,-1);
    tracep->declBit(c+528,"ls_wen_i", false,-1);
    tracep->declBit(c+529,"ls_ren_i", false,-1);
    tracep->declBus(c+530,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+531,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+532,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1586,"AXI_IDLE", false,-1, 1,0);
    tracep->declBus(c+1587,"AXI_READ", false,-1, 1,0);
    tracep->declBus(c+1588,"AXI_WRITE", false,-1, 1,0);
    tracep->declBus(c+71,"axi_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBit(c+451,"flush", false,-1);
    tracep->declBus(c+400,"pc_o", false,-1, 31,0);
    tracep->declBus(c+439,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+402,"snpc_i", false,-1, 31,0);
    tracep->declBit(c+401,"pc_valid_o", false,-1);
    tracep->declBit(c+406,"if_ready_i", false,-1);
    tracep->declBus(c+1662,"RESET_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1659,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1663,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBus(c+431,"wdata", false,-1, 31,0);
    tracep->declBus(c+432,"waddr", false,-1, 3,0);
    tracep->declBit(c+433,"wen", false,-1);
    tracep->declBus(c+533,"raddr1", false,-1, 3,0);
    tracep->declBus(c+442,"r1", false,-1, 31,0);
    tracep->declBus(c+534,"raddr2", false,-1, 3,0);
    tracep->declBus(c+443,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+535+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+551,"rdata1_low", false,-1, 31,0);
    tracep->declBus(c+552,"rdata1_high", false,-1, 31,0);
    tracep->declBus(c+553,"rdata2_low", false,-1, 31,0);
    tracep->declBus(c+554,"rdata2_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBit(c+1157,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1030,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1618,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+13,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+14,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+15,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+16,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+17,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1194,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+1193,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1192,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1558,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1465,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1286,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1031,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1621,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+18,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1619,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1561,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1623,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1158,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+21,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+19,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1560,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+21,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+22,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1469,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+1195,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1563,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1287,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1032,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1622,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+20,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1620,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1562,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1624,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+23,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1470,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+1196,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1468,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1564,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1197,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1279,"io_master_awready", false,-1);
    tracep->declBit(c+1091,"io_master_awvalid", false,-1);
    tracep->declBus(c+1051,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1052,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1053,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1054,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1156,"io_master_wready", false,-1);
    tracep->declBit(c+1059,"io_master_wvalid", false,-1);
    tracep->declBus(c+1057,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1058,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1059,"io_master_wlast", false,-1);
    tracep->declBit(c+1092,"io_master_bready", false,-1);
    tracep->declBit(c+1384,"io_master_bvalid", false,-1);
    tracep->declBus(c+1385,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1553,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1280,"io_master_arready", false,-1);
    tracep->declBit(c+1093,"io_master_arvalid", false,-1);
    tracep->declBus(c+1045,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1046,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1047,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1048,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1049,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1094,"io_master_rready", false,-1);
    tracep->declBit(c+1386,"io_master_rvalid", false,-1);
    tracep->declBus(c+1387,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1554,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1555,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1388,"io_master_rlast", false,-1);
    tracep->declBit(c+440,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1133,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1130,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1128,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1129,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1131,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1132,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1134,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+441,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+1631,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1565,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1635,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1643,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+448,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+449,"marchid", false,-1, 31,0);
    tracep->declBus(c+1052,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1057,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1136,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1473,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1058,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1053,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1137,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1051,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1385,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1138,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1198,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1054,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1139,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1055,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1140,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1553,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1567,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1091,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1279,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1059,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1156,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1384,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1092,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1059,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1141,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1288,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1474,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1142,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1199,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1649,"SEL_IFU", false,-1, 0,0);
    tracep->declBus(c+1650,"SEL_LSU", false,-1, 0,0);
    tracep->declBit(c+1143,"sel_m", false,-1);
    tracep->declBus(c+1586,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1587,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1588,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+555,"state", false,-1, 1,0);
    tracep->declBus(c+1647,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1648,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1144,"sel_clint", false,-1);
    tracep->declBus(c+1664,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1665,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1145,"sel_mvendorid", false,-1);
    tracep->declBit(c+1146,"sel_marchid", false,-1);
    tracep->declBit(c+1147,"sel_id", false,-1);
    tracep->declBus(c+1568,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBit(c+1600,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1600,"I_AXI_RVALID", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1663,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1666,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBus(c+1603,"din", false,-1, 31,0);
    tracep->declBus(c+449,"dout", false,-1, 31,0);
    tracep->declBit(c+1595,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1663,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1603,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBus(c+434,"din", false,-1, 31,0);
    tracep->declBus(c+446,"dout", false,-1, 31,0);
    tracep->declBit(c+556,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1663,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1603,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBus(c+435,"din", false,-1, 31,0);
    tracep->declBus(c+444,"dout", false,-1, 31,0);
    tracep->declBit(c+557,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1663,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1667,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBus(c+435,"din", false,-1, 31,0);
    tracep->declBus(c+445,"dout", false,-1, 31,0);
    tracep->declBit(c+558,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1663,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1603,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBus(c+435,"din", false,-1, 31,0);
    tracep->declBus(c+447,"dout", false,-1, 31,0);
    tracep->declBit(c+559,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1663,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1668,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1557,"rst", false,-1);
    tracep->declBus(c+1603,"din", false,-1, 31,0);
    tracep->declBus(c+448,"dout", false,-1, 31,0);
    tracep->declBit(c+1595,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"io_d", false,-1);
    tracep->declBit(c+560,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"io_d", false,-1);
    tracep->declBit(c+560,"io_q", false,-1);
    tracep->declBit(c+560,"sync_0", false,-1);
    tracep->declBit(c+561,"sync_1", false,-1);
    tracep->declBit(c+562,"sync_2", false,-1);
    tracep->declBit(c+563,"sync_3", false,-1);
    tracep->declBit(c+564,"sync_4", false,-1);
    tracep->declBit(c+565,"sync_5", false,-1);
    tracep->declBit(c+566,"sync_6", false,-1);
    tracep->declBit(c+567,"sync_7", false,-1);
    tracep->declBit(c+568,"sync_8", false,-1);
    tracep->declBit(c+569,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1334,"auto_in_psel", false,-1);
    tracep->declBit(c+1335,"auto_in_penable", false,-1);
    tracep->declBit(c+1324,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1323,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+637,"auto_in_pready", false,-1);
    tracep->declBit(c+1594,"auto_in_pslverr", false,-1);
    tracep->declBus(c+638,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1520,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1521,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1522,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1523,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1524,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1525,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1526,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1527,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1528,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1529,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBus(c+1312,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1334,"in_psel", false,-1);
    tracep->declBit(c+1335,"in_penable", false,-1);
    tracep->declBus(c+1323,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1324,"in_pwrite", false,-1);
    tracep->declBus(c+1325,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+637,"in_pready", false,-1);
    tracep->declBus(c+638,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1594,"in_pslverr", false,-1);
    tracep->declBus(c+1520,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1521,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1522,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1523,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1524,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1525,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1526,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1527,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1528,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1529,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1604,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1669,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1670,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1671,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1672,"ONE", false,-1, 7,0);
    tracep->declBus(c+1673,"TWO", false,-1, 7,0);
    tracep->declBus(c+1674,"THREE", false,-1, 7,0);
    tracep->declBus(c+1675,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1676,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1677,"SIX", false,-1, 7,0);
    tracep->declBus(c+1678,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1679,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1680,"NINE", false,-1, 7,0);
    tracep->declBus(c+1681,"A", false,-1, 7,0);
    tracep->declBus(c+1682,"B", false,-1, 7,0);
    tracep->declBus(c+1683,"C", false,-1, 7,0);
    tracep->declBus(c+1684,"D", false,-1, 7,0);
    tracep->declBus(c+1685,"E", false,-1, 7,0);
    tracep->declBus(c+1686,"F", false,-1, 7,0);
    tracep->declBus(c+669,"led_reg", false,-1, 15,0);
    tracep->declBus(c+670,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+671+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1475,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1476,"write_en", false,-1);
    tracep->declBit(c+1477,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1332,"auto_in_psel", false,-1);
    tracep->declBit(c+1333,"auto_in_penable", false,-1);
    tracep->declBit(c+1324,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1323,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+635,"auto_in_pready", false,-1);
    tracep->declBit(c+1593,"auto_in_pslverr", false,-1);
    tracep->declBus(c+636,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1530,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1531,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBus(c+1312,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1332,"in_psel", false,-1);
    tracep->declBit(c+1333,"in_penable", false,-1);
    tracep->declBus(c+1323,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1324,"in_pwrite", false,-1);
    tracep->declBus(c+1325,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+635,"in_pready", false,-1);
    tracep->declBus(c+636,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1593,"in_pslverr", false,-1);
    tracep->declBit(c+1530,"ps2_clk", false,-1);
    tracep->declBit(c+1531,"ps2_data", false,-1);
    tracep->declBus(c+1687,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1688,"EXP", false,-1, 7,0);
    tracep->declBus(c+1316,"state", false,-1, 1,0);
    tracep->declBus(c+1317,"counter", false,-1, 3,0);
    tracep->declBus(c+1318,"buffer", false,-1, 7,0);
    tracep->declBus(c+1319,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1320,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1569,"ready", false,-1);
    tracep->declBus(c+1570,"rdata", false,-1, 31,0);
    tracep->declBit(c+1478,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1110,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1111,"auto_in_wvalid", false,-1);
    tracep->declBit(c+216,"auto_in_arready", false,-1);
    tracep->declBit(c+1112,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1041,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1113,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+621,"auto_in_rready", false,-1);
    tracep->declBit(c+217,"auto_in_rvalid", false,-1);
    tracep->declBus(c+218,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+219,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+217,"state", false,-1);
    tracep->declBus(c+219,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+218,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1148,"raddr", false,-1, 31,0);
    tracep->declBit(c+1149,"ren", false,-1);
    tracep->declBus(c+1150,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1336,"auto_in_psel", false,-1);
    tracep->declBit(c+1337,"auto_in_penable", false,-1);
    tracep->declBit(c+1324,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1310,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1323,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1544,"auto_in_pready", false,-1);
    tracep->declBit(c+1595,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1212,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1514,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1515,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1541,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBus(c+1310,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1336,"in_psel", false,-1);
    tracep->declBit(c+1337,"in_penable", false,-1);
    tracep->declBus(c+1323,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1324,"in_pwrite", false,-1);
    tracep->declBus(c+1325,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1544,"in_pready", false,-1);
    tracep->declBus(c+1212,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1595,"in_pslverr", false,-1);
    tracep->declBit(c+1514,"qspi_sck", false,-1);
    tracep->declBit(c+1515,"qspi_ce_n", false,-1);
    tracep->declBus(c+1541,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1541,"din", false,-1, 3,0);
    tracep->declBus(c+1516,"dout", false,-1, 3,0);
    tracep->declBus(c+1517,"douten", false,-1, 3,0);
    tracep->declBit(c+1571,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1518,"clk_i", false,-1);
    tracep->declBit(c+1519,"rst_i", false,-1);
    tracep->declBus(c+1310,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1325,"dat_i", false,-1, 31,0);
    tracep->declBus(c+1212,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1326,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1336,"cyc_i", false,-1);
    tracep->declBit(c+1336,"stb_i", false,-1);
    tracep->declBit(c+1571,"ack_o", false,-1);
    tracep->declBit(c+1324,"we_i", false,-1);
    tracep->declBit(c+1514,"sck", false,-1);
    tracep->declBit(c+1515,"ce_n", false,-1);
    tracep->declBus(c+1541,"din", false,-1, 3,0);
    tracep->declBus(c+1516,"dout", false,-1, 3,0);
    tracep->declBus(c+1517,"douten", false,-1, 3,0);
    tracep->declBus(c+1649,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1650,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+679,"mr_sck", false,-1);
    tracep->declBit(c+680,"mr_ce_n", false,-1);
    tracep->declBus(c+1541,"mr_din", false,-1, 3,0);
    tracep->declBus(c+681,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+682,"mr_doe", false,-1);
    tracep->declBit(c+683,"mw_sck", false,-1);
    tracep->declBit(c+684,"mw_ce_n", false,-1);
    tracep->declBus(c+1541,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1479,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+685,"mw_doe", false,-1);
    tracep->declBit(c+1480,"mr_rd", false,-1);
    tracep->declBit(c+686,"mr_done", false,-1);
    tracep->declBit(c+1481,"mw_wr", false,-1);
    tracep->declBit(c+1482,"mw_done", false,-1);
    tracep->declBit(c+1336,"wb_valid", false,-1);
    tracep->declBit(c+1483,"wb_we", false,-1);
    tracep->declBit(c+1484,"wb_re", false,-1);
    tracep->declBit(c+687,"state", false,-1);
    tracep->declBit(c+1485,"nstate", false,-1);
    tracep->declBus(c+1486,"size", false,-1, 2,0);
    tracep->declBus(c+1487,"byte0", false,-1, 7,0);
    tracep->declBus(c+1488,"byte1", false,-1, 7,0);
    tracep->declBus(c+1489,"byte2", false,-1, 7,0);
    tracep->declBus(c+1490,"byte3", false,-1, 7,0);
    tracep->declBus(c+1313,"wdata", false,-1, 31,0);
    tracep->declBit(c+938,"qpi_flag", false,-1);
    tracep->declBit(c+939,"qpi_sck", false,-1);
    tracep->declBit(c+940,"qpi_ce_n", false,-1);
    tracep->declBus(c+941,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+942,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+943,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1572,"rst_n", false,-1);
    tracep->declBus(c+1314,"addr", false,-1, 23,0);
    tracep->declBit(c+1480,"rd", false,-1);
    tracep->declBus(c+1599,"size", false,-1, 2,0);
    tracep->declBit(c+686,"done", false,-1);
    tracep->declBus(c+1212,"line", false,-1, 31,0);
    tracep->declBit(c+679,"sck", false,-1);
    tracep->declBit(c+680,"ce_n", false,-1);
    tracep->declBus(c+1541,"din", false,-1, 3,0);
    tracep->declBus(c+681,"dout", false,-1, 3,0);
    tracep->declBit(c+682,"douten", false,-1);
    tracep->declBus(c+1649,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1650,"READ", false,-1, 0,0);
    tracep->declBus(c+1689,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+688,"state", false,-1);
    tracep->declBit(c+1491,"nstate", false,-1);
    tracep->declBus(c+689,"counter", false,-1, 7,0);
    tracep->declBus(c+690,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1214+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1690,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+691,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1572,"rst_n", false,-1);
    tracep->declBus(c+1315,"addr", false,-1, 23,0);
    tracep->declBus(c+1313,"line", false,-1, 31,0);
    tracep->declBus(c+1486,"size", false,-1, 2,0);
    tracep->declBit(c+1481,"wr", false,-1);
    tracep->declBit(c+1482,"done", false,-1);
    tracep->declBit(c+683,"sck", false,-1);
    tracep->declBit(c+684,"ce_n", false,-1);
    tracep->declBus(c+1541,"din", false,-1, 3,0);
    tracep->declBus(c+1479,"dout", false,-1, 3,0);
    tracep->declBit(c+685,"douten", false,-1);
    tracep->declBus(c+1649,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1650,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1492,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+692,"state", false,-1);
    tracep->declBit(c+1493,"nstate", false,-1);
    tracep->declBus(c+693,"counter", false,-1, 7,0);
    tracep->declBus(c+694,"saddr", false,-1, 23,0);
    tracep->declBus(c+1691,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1271,"auto_in_awready", false,-1);
    tracep->declBit(c+1272,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1273,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1274,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1275,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1152,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1276,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1277,"auto_in_wready", false,-1);
    tracep->declBit(c+1278,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1153,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1154,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1155,"auto_in_wlast", false,-1);
    tracep->declBit(c+1548,"auto_in_bready", false,-1);
    tracep->declBit(c+652,"auto_in_bvalid", false,-1);
    tracep->declBus(c+649,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1586,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1265,"auto_in_arready", false,-1);
    tracep->declBit(c+1266,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1267,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1268,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1151,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1270,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1357,"auto_in_rready", false,-1);
    tracep->declBit(c+648,"auto_in_rvalid", false,-1);
    tracep->declBus(c+649,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+650,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1586,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+651,"auto_in_rlast", false,-1);
    tracep->declBit(c+1542,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+625,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1219,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1220,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1221,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1222,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1223,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1224,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+626,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1248,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1271,"in_awready", false,-1);
    tracep->declBit(c+1272,"in_awvalid", false,-1);
    tracep->declBus(c+1274,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1273,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1275,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1152,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1276,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1277,"in_wready", false,-1);
    tracep->declBit(c+1278,"in_wvalid", false,-1);
    tracep->declBus(c+1153,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1154,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1155,"in_wlast", false,-1);
    tracep->declBit(c+1548,"in_bready", false,-1);
    tracep->declBit(c+652,"in_bvalid", false,-1);
    tracep->declBus(c+1586,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+649,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1265,"in_arready", false,-1);
    tracep->declBit(c+1266,"in_arvalid", false,-1);
    tracep->declBus(c+1268,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1267,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1269,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1151,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1270,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1357,"in_rready", false,-1);
    tracep->declBit(c+648,"in_rvalid", false,-1);
    tracep->declBus(c+1586,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+650,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+651,"in_rlast", false,-1);
    tracep->declBus(c+649,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1542,"sdram_clk", false,-1);
    tracep->declBit(c+625,"sdram_cke", false,-1);
    tracep->declBit(c+1219,"sdram_cs", false,-1);
    tracep->declBit(c+1220,"sdram_ras", false,-1);
    tracep->declBit(c+1221,"sdram_cas", false,-1);
    tracep->declBit(c+1222,"sdram_we", false,-1);
    tracep->declBus(c+1223,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1224,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+626,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1248,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+695,"sdram_dout_en", false,-1);
    tracep->declBus(c+696,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1518,"clk_i", false,-1);
    tracep->declBit(c+1519,"rst_i", false,-1);
    tracep->declBit(c+1272,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1274,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1273,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1275,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1276,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1278,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1153,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1154,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1155,"inport_wlast_i", false,-1);
    tracep->declBit(c+1548,"inport_bready_i", false,-1);
    tracep->declBit(c+1266,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1268,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1267,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1269,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1270,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1357,"inport_rready_i", false,-1);
    tracep->declBus(c+1248,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1271,"inport_awready_o", false,-1);
    tracep->declBit(c+1277,"inport_wready_o", false,-1);
    tracep->declBit(c+652,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1586,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+649,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1265,"inport_arready_o", false,-1);
    tracep->declBit(c+648,"inport_rvalid_o", false,-1);
    tracep->declBus(c+650,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1586,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+649,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+651,"inport_rlast_o", false,-1);
    tracep->declBit(c+1542,"sdram_clk_o", false,-1);
    tracep->declBit(c+625,"sdram_cke_o", false,-1);
    tracep->declBit(c+1219,"sdram_cs_o", false,-1);
    tracep->declBit(c+1220,"sdram_ras_o", false,-1);
    tracep->declBit(c+1221,"sdram_cas_o", false,-1);
    tracep->declBit(c+1222,"sdram_we_o", false,-1);
    tracep->declBus(c+626,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1223,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1224,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+696,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+695,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1692,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1693,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1694,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1644,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1289,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1290,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1291,"ram_rd_w", false,-1);
    tracep->declBit(c+1225,"ram_accept_w", false,-1);
    tracep->declBus(c+1153,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+697,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1292,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+698,"ram_ack_w", false,-1);
    tracep->declBit(c+1595,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1518,"clk_i", false,-1);
    tracep->declBit(c+1519,"rst_i", false,-1);
    tracep->declBit(c+1272,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1274,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1273,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1275,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1276,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1278,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1153,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1154,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1155,"axi_wlast_i", false,-1);
    tracep->declBit(c+1548,"axi_bready_i", false,-1);
    tracep->declBit(c+1266,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1268,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1267,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1269,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1270,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1357,"axi_rready_i", false,-1);
    tracep->declBit(c+1225,"ram_accept_i", false,-1);
    tracep->declBit(c+698,"ram_ack_i", false,-1);
    tracep->declBit(c+1595,"ram_error_i", false,-1);
    tracep->declBus(c+697,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1271,"axi_awready_o", false,-1);
    tracep->declBit(c+1277,"axi_wready_o", false,-1);
    tracep->declBit(c+652,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1586,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+649,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1265,"axi_arready_o", false,-1);
    tracep->declBit(c+648,"axi_rvalid_o", false,-1);
    tracep->declBus(c+650,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1586,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+649,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+651,"axi_rlast_o", false,-1);
    tracep->declBus(c+1290,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1291,"ram_rd_o", false,-1);
    tracep->declBus(c+1292,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1289,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1153,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+699,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+700,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+701,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+702,"req_rd_q", false,-1);
    tracep->declBit(c+703,"req_wr_q", false,-1);
    tracep->declBus(c+704,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+705,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+706,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+707,"req_prio_q", false,-1);
    tracep->declBit(c+708,"req_hold_rd_q", false,-1);
    tracep->declBit(c+709,"req_hold_wr_q", false,-1);
    tracep->declBit(c+710,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1293,"req_push_w", false,-1);
    tracep->declBus(c+1573,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+711,"req_out_valid_w", false,-1);
    tracep->declBus(c+712,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1494,"resp_accept_w", false,-1);
    tracep->declBit(c+713,"resp_is_write_w", false,-1);
    tracep->declBit(c+714,"resp_is_read_w", false,-1);
    tracep->declBit(c+651,"resp_is_last_w", false,-1);
    tracep->declBus(c+649,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+715,"resp_valid_w", false,-1);
    tracep->declBit(c+716,"write_prio_w", false,-1);
    tracep->declBit(c+717,"read_prio_w", false,-1);
    tracep->declBit(c+1294,"write_active_w", false,-1);
    tracep->declBit(c+1291,"read_active_w", false,-1);
    tracep->declBus(c+1289,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1295,"wr_w", false,-1);
    tracep->declBit(c+1291,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1695,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1659,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1644,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1518,"clk_i", false,-1);
    tracep->declBit(c+1519,"rst_i", false,-1);
    tracep->declBus(c+1573,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1293,"push_i", false,-1);
    tracep->declBit(c+1494,"pop_i", false,-1);
    tracep->declBus(c+712,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+710,"accept_o", false,-1);
    tracep->declBit(c+711,"valid_o", false,-1);
    tracep->declBus(c+1696,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+718+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+722,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+723,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+724,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1663,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1659,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1644,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1518,"clk_i", false,-1);
    tracep->declBit(c+1519,"rst_i", false,-1);
    tracep->declBus(c+697,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+698,"push_i", false,-1);
    tracep->declBit(c+1494,"pop_i", false,-1);
    tracep->declBus(c+650,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+725,"accept_o", false,-1);
    tracep->declBit(c+715,"valid_o", false,-1);
    tracep->declBus(c+1696,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+726+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+730,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+731,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+732,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1518,"clk_i", false,-1);
    tracep->declBit(c+1519,"rst_i", false,-1);
    tracep->declBus(c+1290,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1291,"inport_rd_i", false,-1);
    tracep->declBus(c+1292,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1289,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1153,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1248,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1225,"inport_accept_o", false,-1);
    tracep->declBit(c+698,"inport_ack_o", false,-1);
    tracep->declBit(c+1595,"inport_error_o", false,-1);
    tracep->declBus(c+697,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1542,"sdram_clk_o", false,-1);
    tracep->declBit(c+625,"sdram_cke_o", false,-1);
    tracep->declBit(c+1219,"sdram_cs_o", false,-1);
    tracep->declBit(c+1220,"sdram_ras_o", false,-1);
    tracep->declBit(c+1221,"sdram_cas_o", false,-1);
    tracep->declBit(c+1222,"sdram_we_o", false,-1);
    tracep->declBus(c+626,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1223,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1224,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+696,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+695,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1692,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1693,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1694,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1644,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1696,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1659,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1697,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1698,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1699,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1700,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1701,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1659,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1657,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1653,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1655,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1654,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1656,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1652,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1651,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1602,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1702,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1659,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1602,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1651,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1652,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1653,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1654,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1655,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1656,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1657,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1658,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1703,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1704,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1704,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1663,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1704,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1644,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1644,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1695,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1289,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1290,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1291,"ram_rd_w", false,-1);
    tracep->declBit(c+1225,"ram_accept_w", false,-1);
    tracep->declBus(c+1153,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+697,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+698,"ram_ack_w", false,-1);
    tracep->declBit(c+1296,"ram_req_w", false,-1);
    tracep->declBus(c+1226,"command_q", false,-1, 3,0);
    tracep->declBus(c+1223,"addr_q", false,-1, 12,0);
    tracep->declBus(c+696,"data_q", false,-1, 31,0);
    tracep->declBit(c+733,"data_rd_en_q", false,-1);
    tracep->declBus(c+626,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+625,"cke_q", false,-1);
    tracep->declBus(c+1224,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1705,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+734,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1248,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+735,"refresh_q", false,-1);
    tracep->declBus(c+1227,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+736+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1228,"state_q", false,-1, 3,0);
    tracep->declBus(c+1297,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1298,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+744,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+745,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1299,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1300,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1301,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1659,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+746,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1302,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1706,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1229,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+747,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+697,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+748,"idx", false,-1, 31,0);
    tracep->declBus(c+749,"rd_q", false,-1, 3,0);
    tracep->declBit(c+698,"ack_q", false,-1);
    tracep->declArray(c+1230,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1342,"auto_in_psel", false,-1);
    tracep->declBit(c+1343,"auto_in_penable", false,-1);
    tracep->declBit(c+1324,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1331,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1323,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1545,"auto_in_pready", false,-1);
    tracep->declBit(c+1595,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1344,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+623,"spi_bundle_sck", false,-1);
    tracep->declBus(c+624,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1218,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1540,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1662,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1707,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1697,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBus(c+1495,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1342,"in_psel", false,-1);
    tracep->declBit(c+1343,"in_penable", false,-1);
    tracep->declBus(c+1323,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1324,"in_pwrite", false,-1);
    tracep->declBus(c+1325,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1545,"in_pready", false,-1);
    tracep->declBus(c+1344,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1595,"in_pslverr", false,-1);
    tracep->declBit(c+623,"spi_sck", false,-1);
    tracep->declBus(c+624,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1218,"spi_mosi", false,-1);
    tracep->declBit(c+1540,"spi_miso", false,-1);
    tracep->declBit(c+750,"spi_irq_out", false,-1);
    tracep->declBus(c+1496,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1497,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1498,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1499,"wb_we_i", false,-1);
    tracep->declBit(c+1500,"wb_stb_i", false,-1);
    tracep->declBit(c+1501,"wb_cyc_i", false,-1);
    tracep->declBit(c+751,"wb_ack_o", false,-1);
    tracep->declBus(c+752,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1596,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1585,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1597,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1598,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1599,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1708,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1709,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1710,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+570,"state", false,-1, 2,0);
    tracep->declBus(c+571,"next_state", false,-1, 2,0);
    tracep->declBus(c+572,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+573,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+574,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+575,"flash_pwrite", false,-1);
    tracep->declBit(c+576,"flash_psel", false,-1);
    tracep->declBit(c+577,"flash_penable", false,-1);
    tracep->declBit(c+578,"flash_pready", false,-1);
    tracep->declBus(c+579,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1660,"Tp", false,-1, 31,0);
    tracep->declBit(c+1518,"wb_clk_i", false,-1);
    tracep->declBit(c+1519,"wb_rst_i", false,-1);
    tracep->declBus(c+1496,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1497,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+752,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1498,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1499,"wb_we_i", false,-1);
    tracep->declBit(c+1500,"wb_stb_i", false,-1);
    tracep->declBit(c+1501,"wb_cyc_i", false,-1);
    tracep->declBit(c+751,"wb_ack_o", false,-1);
    tracep->declBit(c+1595,"wb_err_o", false,-1);
    tracep->declBit(c+750,"wb_int_o", false,-1);
    tracep->declBus(c+624,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+623,"sclk_pad_o", false,-1);
    tracep->declBit(c+1218,"mosi_pad_o", false,-1);
    tracep->declBit(c+1540,"miso_pad_i", false,-1);
    tracep->declBus(c+753,"divider", false,-1, 15,0);
    tracep->declBus(c+754,"ctrl", false,-1, 13,0);
    tracep->declBus(c+755,"ss", false,-1, 7,0);
    tracep->declBus(c+1502,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+756,"rx", false,-1, 127,0);
    tracep->declBit(c+760,"rx_negedge", false,-1);
    tracep->declBit(c+761,"tx_negedge", false,-1);
    tracep->declBus(c+762,"char_len", false,-1, 6,0);
    tracep->declBit(c+763,"go", false,-1);
    tracep->declBit(c+764,"lsb", false,-1);
    tracep->declBit(c+765,"ie", false,-1);
    tracep->declBit(c+766,"ass", false,-1);
    tracep->declBit(c+1503,"spi_divider_sel", false,-1);
    tracep->declBit(c+1504,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1505,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1506,"spi_ss_sel", false,-1);
    tracep->declBit(c+767,"tip", false,-1);
    tracep->declBit(c+768,"pos_edge", false,-1);
    tracep->declBit(c+769,"neg_edge", false,-1);
    tracep->declBit(c+770,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1660,"Tp", false,-1, 31,0);
    tracep->declBit(c+1518,"clk_in", false,-1);
    tracep->declBit(c+1519,"rst", false,-1);
    tracep->declBit(c+767,"enable", false,-1);
    tracep->declBit(c+763,"go", false,-1);
    tracep->declBit(c+770,"last_clk", false,-1);
    tracep->declBus(c+753,"divider", false,-1, 15,0);
    tracep->declBit(c+623,"clk_out", false,-1);
    tracep->declBit(c+768,"pos_edge", false,-1);
    tracep->declBit(c+769,"neg_edge", false,-1);
    tracep->declBus(c+771,"cnt", false,-1, 15,0);
    tracep->declBit(c+772,"cnt_zero", false,-1);
    tracep->declBit(c+773,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1660,"Tp", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1519,"rst", false,-1);
    tracep->declBus(c+1507,"latch", false,-1, 3,0);
    tracep->declBus(c+1498,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+762,"len", false,-1, 6,0);
    tracep->declBit(c+764,"lsb", false,-1);
    tracep->declBit(c+763,"go", false,-1);
    tracep->declBit(c+768,"pos_edge", false,-1);
    tracep->declBit(c+769,"neg_edge", false,-1);
    tracep->declBit(c+760,"rx_negedge", false,-1);
    tracep->declBit(c+761,"tx_negedge", false,-1);
    tracep->declBit(c+767,"tip", false,-1);
    tracep->declBit(c+770,"last", false,-1);
    tracep->declBus(c+1497,"p_in", false,-1, 31,0);
    tracep->declArray(c+756,"p_out", false,-1, 127,0);
    tracep->declBit(c+623,"s_clk", false,-1);
    tracep->declBit(c+1540,"s_in", false,-1);
    tracep->declBit(c+1218,"s_out", false,-1);
    tracep->declBus(c+774,"cnt", false,-1, 7,0);
    tracep->declArray(c+756,"data", false,-1, 127,0);
    tracep->declBus(c+775,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+776,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+777,"rx_clk", false,-1);
    tracep->declBit(c+778,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1338,"auto_in_psel", false,-1);
    tracep->declBit(c+1339,"auto_in_penable", false,-1);
    tracep->declBit(c+1324,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1311,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1323,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1340,"auto_in_pready", false,-1);
    tracep->declBit(c+1595,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1341,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1538,"uart_rx", false,-1);
    tracep->declBit(c+1539,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1338,"in_psel", false,-1);
    tracep->declBit(c+1339,"in_penable", false,-1);
    tracep->declBus(c+1323,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1340,"in_pready", false,-1);
    tracep->declBit(c+1595,"in_pslverr", false,-1);
    tracep->declBus(c+1312,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1324,"in_pwrite", false,-1);
    tracep->declBus(c+1341,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1325,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"uart_rx", false,-1);
    tracep->declBit(c+1539,"uart_tx", false,-1);
    tracep->declBit(c+779,"rtsn", false,-1);
    tracep->declBit(c+1595,"ctsn", false,-1);
    tracep->declBit(c+780,"dtr_pad_o", false,-1);
    tracep->declBit(c+1595,"dsr_pad_i", false,-1);
    tracep->declBit(c+1595,"ri_pad_i", false,-1);
    tracep->declBit(c+1595,"dcd_pad_i", false,-1);
    tracep->declBit(c+781,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1508,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1509,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+580,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1510,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+782,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1519,"wb_rst_i", false,-1);
    tracep->declBus(c+1508,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1511,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1510,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1539,"stx_pad_o", false,-1);
    tracep->declBit(c+1538,"srx_pad_i", false,-1);
    tracep->declBus(c+1658,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+782,"rts_pad_o", false,-1);
    tracep->declBit(c+780,"dtr_pad_o", false,-1);
    tracep->declBit(c+781,"int_o", false,-1);
    tracep->declBit(c+783,"enable", false,-1);
    tracep->declBit(c+784,"srx_pad", false,-1);
    tracep->declBus(c+785,"ier", false,-1, 3,0);
    tracep->declBus(c+786,"iir", false,-1, 3,0);
    tracep->declBus(c+787,"fcr", false,-1, 1,0);
    tracep->declBus(c+788,"mcr", false,-1, 4,0);
    tracep->declBus(c+789,"lcr", false,-1, 7,0);
    tracep->declBus(c+790,"msr", false,-1, 7,0);
    tracep->declBus(c+791,"dl", false,-1, 15,0);
    tracep->declBus(c+792,"scratch", false,-1, 7,0);
    tracep->declBit(c+793,"start_dlc", false,-1);
    tracep->declBit(c+794,"lsr_mask_d", false,-1);
    tracep->declBit(c+795,"msi_reset", false,-1);
    tracep->declBus(c+796,"dlc", false,-1, 15,0);
    tracep->declBus(c+797,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+798,"rx_reset", false,-1);
    tracep->declBit(c+799,"tx_reset", false,-1);
    tracep->declBit(c+800,"dlab", false,-1);
    tracep->declBit(c+1600,"cts_pad_i", false,-1);
    tracep->declBit(c+1595,"dsr_pad_i", false,-1);
    tracep->declBit(c+1595,"ri_pad_i", false,-1);
    tracep->declBit(c+1595,"dcd_pad_i", false,-1);
    tracep->declBit(c+801,"loopback", false,-1);
    tracep->declBit(c+1595,"cts", false,-1);
    tracep->declBit(c+1600,"dsr", false,-1);
    tracep->declBit(c+1600,"ri", false,-1);
    tracep->declBit(c+1600,"dcd", false,-1);
    tracep->declBit(c+802,"cts_c", false,-1);
    tracep->declBit(c+803,"dsr_c", false,-1);
    tracep->declBit(c+804,"ri_c", false,-1);
    tracep->declBit(c+805,"dcd_c", false,-1);
    tracep->declBus(c+806,"lsr", false,-1, 7,0);
    tracep->declBit(c+807,"lsr0", false,-1);
    tracep->declBit(c+808,"lsr1", false,-1);
    tracep->declBit(c+809,"lsr2", false,-1);
    tracep->declBit(c+810,"lsr3", false,-1);
    tracep->declBit(c+811,"lsr4", false,-1);
    tracep->declBit(c+812,"lsr5", false,-1);
    tracep->declBit(c+813,"lsr6", false,-1);
    tracep->declBit(c+814,"lsr7", false,-1);
    tracep->declBit(c+815,"lsr0r", false,-1);
    tracep->declBit(c+816,"lsr1r", false,-1);
    tracep->declBit(c+817,"lsr2r", false,-1);
    tracep->declBit(c+818,"lsr3r", false,-1);
    tracep->declBit(c+819,"lsr4r", false,-1);
    tracep->declBit(c+820,"lsr5r", false,-1);
    tracep->declBit(c+821,"lsr6r", false,-1);
    tracep->declBit(c+822,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+823,"rls_int", false,-1);
    tracep->declBit(c+824,"rda_int", false,-1);
    tracep->declBit(c+825,"ti_int", false,-1);
    tracep->declBit(c+826,"thre_int", false,-1);
    tracep->declBit(c+827,"ms_int", false,-1);
    tracep->declBit(c+828,"tf_push", false,-1);
    tracep->declBit(c+829,"rf_pop", false,-1);
    tracep->declBus(c+1574,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+830,"rf_error_bit", false,-1);
    tracep->declBit(c+808,"rf_overrun", false,-1);
    tracep->declBit(c+831,"rf_push_pulse", false,-1);
    tracep->declBus(c+832,"rf_count", false,-1, 4,0);
    tracep->declBus(c+833,"tf_count", false,-1, 4,0);
    tracep->declBus(c+834,"tstate", false,-1, 2,0);
    tracep->declBus(c+835,"rstate", false,-1, 3,0);
    tracep->declBus(c+836,"counter_t", false,-1, 9,0);
    tracep->declBit(c+837,"thre_set_en", false,-1);
    tracep->declBus(c+838,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+839,"block_value", false,-1, 7,0);
    tracep->declBit(c+840,"serial_out", false,-1);
    tracep->declBit(c+841,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+842,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+843,"lsr0_d", false,-1);
    tracep->declBit(c+844,"lsr1_d", false,-1);
    tracep->declBit(c+845,"lsr2_d", false,-1);
    tracep->declBit(c+846,"lsr3_d", false,-1);
    tracep->declBit(c+847,"lsr4_d", false,-1);
    tracep->declBit(c+848,"lsr5_d", false,-1);
    tracep->declBit(c+849,"lsr6_d", false,-1);
    tracep->declBit(c+850,"lsr7_d", false,-1);
    tracep->declBit(c+851,"rls_int_d", false,-1);
    tracep->declBit(c+852,"thre_int_d", false,-1);
    tracep->declBit(c+853,"ms_int_d", false,-1);
    tracep->declBit(c+854,"ti_int_d", false,-1);
    tracep->declBit(c+855,"rda_int_d", false,-1);
    tracep->declBit(c+856,"rls_int_rise", false,-1);
    tracep->declBit(c+857,"thre_int_rise", false,-1);
    tracep->declBit(c+858,"ms_int_rise", false,-1);
    tracep->declBit(c+859,"ti_int_rise", false,-1);
    tracep->declBit(c+860,"rda_int_rise", false,-1);
    tracep->declBit(c+861,"rls_int_pnd", false,-1);
    tracep->declBit(c+862,"rda_int_pnd", false,-1);
    tracep->declBit(c+863,"thre_int_pnd", false,-1);
    tracep->declBit(c+864,"ms_int_pnd", false,-1);
    tracep->declBit(c+865,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1660,"Tp", false,-1, 31,0);
    tracep->declBus(c+1660,"width", false,-1, 31,0);
    tracep->declBus(c+1650,"init_value", false,-1, 0,0);
    tracep->declBit(c+1519,"rst_i", false,-1);
    tracep->declBit(c+1518,"clk_i", false,-1);
    tracep->declBit(c+1595,"stage1_rst_i", false,-1);
    tracep->declBit(c+1600,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1538,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+784,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+866,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1519,"wb_rst_i", false,-1);
    tracep->declBus(c+789,"lcr", false,-1, 7,0);
    tracep->declBit(c+829,"rf_pop", false,-1);
    tracep->declBit(c+841,"srx_pad_i", false,-1);
    tracep->declBit(c+783,"enable", false,-1);
    tracep->declBit(c+798,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+836,"counter_t", false,-1, 9,0);
    tracep->declBus(c+832,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1574,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+808,"rf_overrun", false,-1);
    tracep->declBit(c+830,"rf_error_bit", false,-1);
    tracep->declBus(c+835,"rstate", false,-1, 3,0);
    tracep->declBit(c+831,"rf_push_pulse", false,-1);
    tracep->declBus(c+867,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+868,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+869,"rshift", false,-1, 7,0);
    tracep->declBit(c+870,"rparity", false,-1);
    tracep->declBit(c+871,"rparity_error", false,-1);
    tracep->declBit(c+872,"rframing_error", false,-1);
    tracep->declBit(c+873,"rbit_in", false,-1);
    tracep->declBit(c+874,"rparity_xor", false,-1);
    tracep->declBus(c+875,"counter_b", false,-1, 7,0);
    tracep->declBit(c+876,"rf_push_q", false,-1);
    tracep->declBus(c+877,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+878,"rf_push", false,-1);
    tracep->declBit(c+879,"break_error", false,-1);
    tracep->declBit(c+880,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+881,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+882,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+883,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1602,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1651,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1652,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1653,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1654,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1655,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1656,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1657,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1658,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1703,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1711,"sr_push", false,-1, 3,0);
    tracep->declBus(c+884,"toc_value", false,-1, 9,0);
    tracep->declBus(c+885,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1712,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1713,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1659,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1714,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1519,"wb_rst_i", false,-1);
    tracep->declBit(c+831,"push", false,-1);
    tracep->declBit(c+829,"pop", false,-1);
    tracep->declBus(c+877,"data_in", false,-1, 10,0);
    tracep->declBit(c+798,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1574,"data_out", false,-1, 10,0);
    tracep->declBit(c+808,"overrun", false,-1);
    tracep->declBus(c+832,"count", false,-1, 4,0);
    tracep->declBit(c+830,"error_bit", false,-1);
    tracep->declBus(c+1575,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+886+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+902,"top", false,-1, 3,0);
    tracep->declBus(c+903,"bottom", false,-1, 3,0);
    tracep->declBus(c+904,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+905,"word0", false,-1, 2,0);
    tracep->declBus(c+906,"word1", false,-1, 2,0);
    tracep->declBus(c+907,"word2", false,-1, 2,0);
    tracep->declBus(c+908,"word3", false,-1, 2,0);
    tracep->declBus(c+909,"word4", false,-1, 2,0);
    tracep->declBus(c+910,"word5", false,-1, 2,0);
    tracep->declBus(c+911,"word6", false,-1, 2,0);
    tracep->declBus(c+912,"word7", false,-1, 2,0);
    tracep->declBus(c+913,"word8", false,-1, 2,0);
    tracep->declBus(c+914,"word9", false,-1, 2,0);
    tracep->declBus(c+915,"word10", false,-1, 2,0);
    tracep->declBus(c+916,"word11", false,-1, 2,0);
    tracep->declBus(c+917,"word12", false,-1, 2,0);
    tracep->declBus(c+918,"word13", false,-1, 2,0);
    tracep->declBus(c+919,"word14", false,-1, 2,0);
    tracep->declBus(c+920,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1659,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1697,"data_width", false,-1, 31,0);
    tracep->declBus(c+1713,"depth", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+831,"we", false,-1);
    tracep->declBus(c+902,"a", false,-1, 3,0);
    tracep->declBus(c+903,"dpra", false,-1, 3,0);
    tracep->declBus(c+921,"di", false,-1, 7,0);
    tracep->declBus(c+1575,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+581+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1519,"wb_rst_i", false,-1);
    tracep->declBus(c+789,"lcr", false,-1, 7,0);
    tracep->declBit(c+828,"tf_push", false,-1);
    tracep->declBus(c+1511,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+783,"enable", false,-1);
    tracep->declBit(c+799,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+840,"stx_pad_o", false,-1);
    tracep->declBus(c+834,"tstate", false,-1, 2,0);
    tracep->declBus(c+833,"tf_count", false,-1, 4,0);
    tracep->declBus(c+922,"counter", false,-1, 4,0);
    tracep->declBus(c+923,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+924,"shift_out", false,-1, 6,0);
    tracep->declBit(c+925,"stx_o_tmp", false,-1);
    tracep->declBit(c+926,"parity_xor", false,-1);
    tracep->declBit(c+927,"tf_pop", false,-1);
    tracep->declBit(c+928,"bit_out", false,-1);
    tracep->declBus(c+1511,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1576,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+929,"tf_overrun", false,-1);
    tracep->declBus(c+1596,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1585,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1597,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1598,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1599,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1708,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1697,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1713,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1659,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1714,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+1519,"wb_rst_i", false,-1);
    tracep->declBit(c+828,"push", false,-1);
    tracep->declBit(c+927,"pop", false,-1);
    tracep->declBus(c+1511,"data_in", false,-1, 7,0);
    tracep->declBit(c+799,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1576,"data_out", false,-1, 7,0);
    tracep->declBit(c+929,"overrun", false,-1);
    tracep->declBus(c+833,"count", false,-1, 4,0);
    tracep->declBus(c+930,"top", false,-1, 3,0);
    tracep->declBus(c+931,"bottom", false,-1, 3,0);
    tracep->declBus(c+932,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1659,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1697,"data_width", false,-1, 31,0);
    tracep->declBus(c+1713,"depth", false,-1, 31,0);
    tracep->declBit(c+1518,"clk", false,-1);
    tracep->declBit(c+828,"we", false,-1);
    tracep->declBus(c+930,"a", false,-1, 3,0);
    tracep->declBus(c+931,"dpra", false,-1, 3,0);
    tracep->declBus(c+1511,"di", false,-1, 7,0);
    tracep->declBus(c+1576,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+597+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBit(c+1329,"auto_in_psel", false,-1);
    tracep->declBit(c+1330,"auto_in_penable", false,-1);
    tracep->declBit(c+1324,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1331,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1323,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1325,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+634,"auto_in_pready", false,-1);
    tracep->declBit(c+1591,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1592,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1532,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1533,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1534,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1535,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1536,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1537,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1518,"clock", false,-1);
    tracep->declBit(c+1519,"reset", false,-1);
    tracep->declBus(c+1495,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1329,"in_psel", false,-1);
    tracep->declBit(c+1330,"in_penable", false,-1);
    tracep->declBus(c+1323,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1324,"in_pwrite", false,-1);
    tracep->declBus(c+1325,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1326,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+634,"in_pready", false,-1);
    tracep->declBus(c+1592,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1591,"in_pslverr", false,-1);
    tracep->declBus(c+1532,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1533,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1534,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1535,"vga_hsync", false,-1);
    tracep->declBit(c+1536,"vga_vsync", false,-1);
    tracep->declBit(c+1537,"vga_valid", false,-1);
    tracep->declBit(c+1512,"is_write", false,-1);
    tracep->declBus(c+1513,"addr", false,-1, 31,0);
    tracep->declBit(c+634,"ready", false,-1);
    tracep->declBus(c+933,"i", false,-1, 31,0);
    tracep->declBus(c+1715,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1716,"h_active", false,-1, 31,0);
    tracep->declBus(c+1717,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1718,"h_total", false,-1, 31,0);
    tracep->declBus(c+1644,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1719,"v_active", false,-1, 31,0);
    tracep->declBus(c+1720,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1721,"v_total", false,-1, 31,0);
    tracep->declBus(c+934,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+613,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+935,"h_valid", false,-1);
    tracep->declBit(c+614,"v_valid", false,-1);
    tracep->declBus(c+936,"h_addr", false,-1, 9,0);
    tracep->declBus(c+615,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1577,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+623,"sck", false,-1);
    tracep->declBit(c+1233,"ss", false,-1);
    tracep->declBit(c+1218,"mosi", false,-1);
    tracep->declBit(c+1206,"miso", false,-1);
    tracep->declBus(c+1207,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+1208,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+1209,"counter", false,-1, 2,0);
    tracep->declBit(c+1210,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+623,"sck", false,-1);
    tracep->declBit(c+937,"ss", false,-1);
    tracep->declBit(c+1218,"mosi", false,-1);
    tracep->declBit(c+1578,"miso", false,-1);
    tracep->declBit(c+937,"reset", false,-1);
    tracep->declBus(c+1200,"state", false,-1, 2,0);
    tracep->declBus(c+1201,"counter", false,-1, 7,0);
    tracep->declBus(c+1202,"cmd", false,-1, 7,0);
    tracep->declBus(c+1203,"addr", false,-1, 23,0);
    tracep->declBus(c+1204,"data", false,-1, 31,0);
    tracep->declBit(c+1205,"ren", false,-1);
    tracep->declBus(c+1579,"rdata", false,-1, 31,0);
    tracep->declBus(c+1580,"raddr", false,-1, 31,0);
    tracep->declBus(c+1581,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+623,"clock", false,-1);
    tracep->declBit(c+1205,"valid", false,-1);
    tracep->declBus(c+1202,"cmd", false,-1, 7,0);
    tracep->declBus(c+1580,"addr", false,-1, 31,0);
    tracep->declBus(c+1579,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1514,"sck", false,-1);
    tracep->declBit(c+1515,"ce_n", false,-1);
    tracep->declBus(c+1541,"dio", false,-1, 3,0);
    tracep->declBit(c+1515,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+1251,"cmd", false,-1, 7,0);
    tracep->declBus(c+1252,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1253+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1582,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1583,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+1257,"ren", false,-1);
    tracep->declBit(c+1258,"wen", false,-1);
    tracep->declBus(c+1259,"len", false,-1, 7,0);
    tracep->declBus(c+1584,"rdata", false,-1, 31,0);
    tracep->declBus(c+1260,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1514,"clock", false,-1);
    tracep->declBit(c+1257,"ren", false,-1);
    tracep->declBit(c+1258,"wen", false,-1);
    tracep->declBus(c+1251,"cmd", false,-1, 7,0);
    tracep->declBus(c+1260,"saddr", false,-1, 31,0);
    tracep->declBus(c+1584,"rdata", false,-1, 31,0);
    tracep->declBus(c+1261,"wdata", false,-1, 31,0);
    tracep->declBus(c+1259,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1542,"clk", false,-1);
    tracep->declBit(c+625,"cke", false,-1);
    tracep->declBit(c+1219,"cs", false,-1);
    tracep->declBit(c+1220,"ras", false,-1);
    tracep->declBit(c+1221,"cas", false,-1);
    tracep->declBit(c+1222,"we", false,-1);
    tracep->declBus(c+1223,"a", false,-1, 12,0);
    tracep->declBus(c+1234,"ba", false,-1, 1,0);
    tracep->declBus(c+1235,"dqm", false,-1, 1,0);
    tracep->declBus(c+1249,"dq", false,-1, 15,0);
    tracep->declBit(c+1236,"reset", false,-1);
    tracep->declBus(c+944,"state", false,-1, 2,0);
    tracep->declBus(c+945,"counter", false,-1, 7,0);
    tracep->declBus(c+946,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1722,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+947,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+948,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1237,"nop", false,-1);
    tracep->declBit(c+1238,"active", false,-1);
    tracep->declBit(c+1239,"precharge", false,-1);
    tracep->declBit(c+1240,"read", false,-1);
    tracep->declBit(c+1241,"write", false,-1);
    tracep->declBit(c+1242,"burstterm", false,-1);
    tracep->declBit(c+1243,"autorefresh", false,-1);
    tracep->declBit(c+1244,"mode", false,-1);
    tracep->declBus(c+949,"test", false,-1, 15,0);
    tracep->declBus(c+950,"test1", false,-1, 15,0);
    tracep->declBus(c+951,"sense", false,-1, 31,0);
    tracep->declBit(c+952,"write_burst_mode", false,-1);
    tracep->declBus(c+953,"op_mode", false,-1, 1,0);
    tracep->declBus(c+954,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+955,"burst_type", false,-1);
    tracep->declBus(c+956,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+957,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+958,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+959,"bank", false,-1, 1,0);
    tracep->declBus(c+960,"row", false,-1, 12,0);
    tracep->declBus(c+961,"column", false,-1, 8,0);
    tracep->declBus(c+962,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+963,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+964,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1542,"clk", false,-1);
    tracep->declBit(c+625,"cke", false,-1);
    tracep->declBit(c+1219,"cs", false,-1);
    tracep->declBit(c+1220,"ras", false,-1);
    tracep->declBit(c+1221,"cas", false,-1);
    tracep->declBit(c+1222,"we", false,-1);
    tracep->declBus(c+1223,"a", false,-1, 12,0);
    tracep->declBus(c+1234,"ba", false,-1, 1,0);
    tracep->declBus(c+1245,"dqm", false,-1, 1,0);
    tracep->declBus(c+1250,"dq", false,-1, 15,0);
    tracep->declBit(c+1236,"reset", false,-1);
    tracep->declBus(c+965,"state", false,-1, 2,0);
    tracep->declBus(c+966,"counter", false,-1, 7,0);
    tracep->declBus(c+967,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1723,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+968,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+969,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1237,"nop", false,-1);
    tracep->declBit(c+1238,"active", false,-1);
    tracep->declBit(c+1239,"precharge", false,-1);
    tracep->declBit(c+1240,"read", false,-1);
    tracep->declBit(c+1241,"write", false,-1);
    tracep->declBit(c+1242,"burstterm", false,-1);
    tracep->declBit(c+1243,"autorefresh", false,-1);
    tracep->declBit(c+1244,"mode", false,-1);
    tracep->declBus(c+970,"test", false,-1, 15,0);
    tracep->declBus(c+971,"test1", false,-1, 15,0);
    tracep->declBus(c+972,"sense", false,-1, 31,0);
    tracep->declBit(c+973,"write_burst_mode", false,-1);
    tracep->declBus(c+974,"op_mode", false,-1, 1,0);
    tracep->declBus(c+975,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+976,"burst_type", false,-1);
    tracep->declBus(c+977,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+978,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+979,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+980,"bank", false,-1, 1,0);
    tracep->declBus(c+981,"row", false,-1, 12,0);
    tracep->declBus(c+982,"column", false,-1, 8,0);
    tracep->declBus(c+983,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+984,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+985,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1542,"clk", false,-1);
    tracep->declBit(c+625,"cke", false,-1);
    tracep->declBit(c+1219,"cs", false,-1);
    tracep->declBit(c+1220,"ras", false,-1);
    tracep->declBit(c+1221,"cas", false,-1);
    tracep->declBit(c+1222,"we", false,-1);
    tracep->declBus(c+1223,"a", false,-1, 12,0);
    tracep->declBus(c+1234,"ba", false,-1, 1,0);
    tracep->declBus(c+1246,"dqm", false,-1, 1,0);
    tracep->declBus(c+1249,"dq", false,-1, 15,0);
    tracep->declBit(c+1236,"reset", false,-1);
    tracep->declBus(c+986,"state", false,-1, 2,0);
    tracep->declBus(c+987,"counter", false,-1, 7,0);
    tracep->declBus(c+988,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1724,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+989,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+990,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1237,"nop", false,-1);
    tracep->declBit(c+1238,"active", false,-1);
    tracep->declBit(c+1239,"precharge", false,-1);
    tracep->declBit(c+1240,"read", false,-1);
    tracep->declBit(c+1241,"write", false,-1);
    tracep->declBit(c+1242,"burstterm", false,-1);
    tracep->declBit(c+1243,"autorefresh", false,-1);
    tracep->declBit(c+1244,"mode", false,-1);
    tracep->declBus(c+991,"test", false,-1, 15,0);
    tracep->declBus(c+992,"test1", false,-1, 15,0);
    tracep->declBus(c+993,"sense", false,-1, 31,0);
    tracep->declBit(c+994,"write_burst_mode", false,-1);
    tracep->declBus(c+995,"op_mode", false,-1, 1,0);
    tracep->declBus(c+996,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+997,"burst_type", false,-1);
    tracep->declBus(c+998,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+999,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+1000,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+1001,"bank", false,-1, 1,0);
    tracep->declBus(c+1002,"row", false,-1, 12,0);
    tracep->declBus(c+1003,"column", false,-1, 8,0);
    tracep->declBus(c+1004,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+1005,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+1006,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1542,"clk", false,-1);
    tracep->declBit(c+625,"cke", false,-1);
    tracep->declBit(c+1219,"cs", false,-1);
    tracep->declBit(c+1220,"ras", false,-1);
    tracep->declBit(c+1221,"cas", false,-1);
    tracep->declBit(c+1222,"we", false,-1);
    tracep->declBus(c+1223,"a", false,-1, 12,0);
    tracep->declBus(c+1234,"ba", false,-1, 1,0);
    tracep->declBus(c+1247,"dqm", false,-1, 1,0);
    tracep->declBus(c+1250,"dq", false,-1, 15,0);
    tracep->declBit(c+1236,"reset", false,-1);
    tracep->declBus(c+1007,"state", false,-1, 2,0);
    tracep->declBus(c+1008,"counter", false,-1, 7,0);
    tracep->declBus(c+1009,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1725,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+1010,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+1011,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1237,"nop", false,-1);
    tracep->declBit(c+1238,"active", false,-1);
    tracep->declBit(c+1239,"precharge", false,-1);
    tracep->declBit(c+1240,"read", false,-1);
    tracep->declBit(c+1241,"write", false,-1);
    tracep->declBit(c+1242,"burstterm", false,-1);
    tracep->declBit(c+1243,"autorefresh", false,-1);
    tracep->declBit(c+1244,"mode", false,-1);
    tracep->declBus(c+1012,"test", false,-1, 15,0);
    tracep->declBus(c+1013,"test1", false,-1, 15,0);
    tracep->declBus(c+1014,"sense", false,-1, 31,0);
    tracep->declBit(c+1015,"write_burst_mode", false,-1);
    tracep->declBus(c+1016,"op_mode", false,-1, 1,0);
    tracep->declBus(c+1017,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+1018,"burst_type", false,-1);
    tracep->declBus(c+1019,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+1020,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+1021,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+1022,"bank", false,-1, 1,0);
    tracep->declBus(c+1023,"row", false,-1, 12,0);
    tracep->declBus(c+1024,"column", false,-1, 8,0);
    tracep->declBus(c+1025,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+1026,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+1027,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullIData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awaddr),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wdata),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_araddr),32);
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rready));
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [0U][0U]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [0U][1U]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [0U][2U]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [0U][3U]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [1U][0U]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [1U][1U]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [1U][2U]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [1U][3U]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [2U][0U]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [2U][1U]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [2U][2U]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [2U][3U]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [3U][0U]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [3U][1U]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [3U][2U]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [3U][3U]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [0U][0U]),27);
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [0U][1U]),27);
    bufp->fullIData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [0U][2U]),27);
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [0U][3U]),27);
    bufp->fullIData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [1U][0U]),27);
    bufp->fullIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [1U][1U]),27);
    bufp->fullIData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [1U][2U]),27);
    bufp->fullIData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [1U][3U]),27);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [2U][0U]),27);
    bufp->fullIData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [2U][1U]),27);
    bufp->fullIData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [2U][2U]),27);
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [2U][3U]),27);
    bufp->fullIData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [3U][0U]),27);
    bufp->fullIData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [3U][1U]),27);
    bufp->fullIData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [3U][2U]),27);
    bufp->fullIData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [3U][3U]),27);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),4);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),4);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),4);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),4);
    bufp->fullIData(oldp+60,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                              >> 5U)),27);
    bufp->fullBit(oldp+61,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                  >> 4U))));
    bufp->fullCData(oldp+62,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                    >> 2U))),2);
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit),2);
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state));
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),2);
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+81,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+82,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+83,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+84,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+123,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+206,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+216,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+262,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+272,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+280,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+288,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+300,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+308,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+316,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+320,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+324,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+332,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+336,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+340,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+344,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+348,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+352,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+360,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+384,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+396,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+401,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)))));
    bufp->fullIData(oldp+402,((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
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
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+412,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)))));
    bufp->fullCData(oldp+413,(((IData)(vlSelf->__VdfgTmp_h8b8a6165__0)
                                ? (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                           >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc),21);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en),2);
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullIData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),5);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullSData(oldp+421,((0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber22)),14);
    bufp->fullSData(oldp+422,((0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23)),14);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),4);
    bufp->fullBit(oldp+424,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id))));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_id));
    bufp->fullBit(oldp+426,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_ex),32);
    bufp->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ex),32);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),4);
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrsw_ex),32);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex),4);
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_addr),32);
    bufp->fullIData(oldp+438,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                    ? (0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23)
                                    : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                        ? (0x3fff00U 
                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23 
                                              << 8U))
                                        : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                            ? (0x3fff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23 
                                                  << 0x10U))
                                            : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23 
                                                   << 0x18U)
                                                : 0U))))
                                : 0U)),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_arready));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid));
    bufp->fullIData(oldp+442,((((IData)(vlSelf->__VdfgTmp_h8b8a6165__0) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                   >> 0x12U)) ? (((- (IData)(
                                                             (8U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                  [8U]) 
                                                 | (((- (IData)(
                                                                (9U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                     [9U]) 
                                                    | (((- (IData)(
                                                                   (0xaU 
                                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                        [0xaU]) 
                                                       | (((- (IData)(
                                                                      (0xbU 
                                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                           [0xbU]) 
                                                          | (((- (IData)(
                                                                         (0xcU 
                                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                              [0xcU]) 
                                                             | (((- (IData)(
                                                                            (0xdU 
                                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                 [0xdU]) 
                                                                | (((- (IData)(
                                                                               (0xeU 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                    [0xeU]) 
                                                                   | ((- (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                      [0xfU]))))))))
                                : (((- (IData)((1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                    [1U]) | (((- (IData)(
                                                         (2U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                              [2U]) 
                                             | (((- (IData)(
                                                            (3U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                 [3U]) 
                                                | (((- (IData)(
                                                               (4U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [4U]) 
                                                   | (((- (IData)(
                                                                  (5U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [5U]) 
                                                      | (((- (IData)(
                                                                     (6U 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [6U]) 
                                                         | ((- (IData)(
                                                                       (7U 
                                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                            [7U]))))))))),32);
    bufp->fullIData(oldp+443,(((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_high
                                : (((- (IData)((1U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                    [1U]) | (((- (IData)(
                                                         (2U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                              [2U]) 
                                             | (((- (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                 [3U]) 
                                                | (((- (IData)(
                                                               (4U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [4U]) 
                                                   | (((- (IData)(
                                                                  (5U 
                                                                   == 
                                                                   (0xfU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [5U]) 
                                                      | (((- (IData)(
                                                                     (6U 
                                                                      == 
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [6U]) 
                                                         | ((- (IData)(
                                                                       (7U 
                                                                        == 
                                                                        (0xfU 
                                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                            [7U]))))))))),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CHazarden));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest_delay));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg),21);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg),30);
    bufp->fullIData(oldp+456,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                               >> 2U)),30);
    bufp->fullBit(oldp+457,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                              >> 2U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg)));
    bufp->fullSData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[0]),10);
    bufp->fullSData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[1]),10);
    bufp->fullSData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[2]),10);
    bufp->fullSData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[3]),10);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[0]),28);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[1]),28);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[2]),28);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[3]),28);
    bufp->fullIData(oldp+466,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                               >> 4U)),28);
    bufp->fullCData(oldp+467,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                     >> 2U))),2);
    bufp->fullIData(oldp+468,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                               >> 4U)),28);
    bufp->fullCData(oldp+469,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                     >> 2U))),2);
    bufp->fullBit(oldp+470,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                              >> 4U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg
                             [(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                     >> 2U))])));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__already));
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__enable),2);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__a),32);
    bufp->fullQData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+476,((0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber22)),32);
    bufp->fullIData(oldp+477,((0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23)),32);
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+480,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? (0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23)
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csrs_w)),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csrs_w),32);
    bufp->fullCData(oldp+482,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4b742872__0) 
                                 & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id))) 
                                << 3U) | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h62d8a2d6__0) 
                                             & (2U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id))) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4b742872__0) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id))) 
                                            << 1U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h62d8a2d6__0) 
                                               & (1U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id))) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)))))),4);
    bufp->fullBit(oldp+483,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                   >> 0xaU))));
    bufp->fullCData(oldp+484,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)),5);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel),4);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullBit(oldp+489,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             | (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)))));
    bufp->fullBit(oldp+490,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt));
    bufp->fullBit(oldp+492,((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+493,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+495,((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+496,((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+497,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & ((0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber22) 
                                   == (0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23))))));
    bufp->fullBit(oldp+498,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & ((0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber22) 
                                   != (0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23))))));
    bufp->fullBit(oldp+499,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, (0x3fffU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber22), 
                                             (0x3fffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23))))));
    bufp->fullBit(oldp+500,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, (0x3fffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber22), 
                                              (0x3fffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23))))));
    bufp->fullBit(oldp+501,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & ((0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber22) 
                                   < (0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23))))));
    bufp->fullBit(oldp+502,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & ((0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber22) 
                                   >= (0x3fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23))))));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+504,(((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0x302U == (0x3ffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullIData(oldp+506,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                               >> 5U)),27);
    bufp->fullBit(oldp+507,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                   >> 4U))));
    bufp->fullCData(oldp+508,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                     >> 2U))),2);
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid_enable));
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber22),32);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23),32);
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__updata));
    bufp->fullCData(oldp+514,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                        >> 2U))),5);
    bufp->fullCData(oldp+515,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h86c6dcd9__0) 
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
    bufp->fullCData(oldp+516,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+517,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+518,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+519,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+520,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+521,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+523,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+525,(((3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
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
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__updata));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5));
    bufp->fullBit(oldp+528,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5))));
    bufp->fullBit(oldp+529,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5))));
    bufp->fullCData(oldp+530,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
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
    bufp->fullCData(oldp+531,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                                ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+532,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                   | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5),4);
    bufp->fullCData(oldp+534,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))),4);
    bufp->fullIData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+551,((((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [1U]) | (((- (IData)(
                                                     (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [2U]) | (
                                                   ((- (IData)(
                                                               (3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [3U]) 
                                                   | (((- (IData)(
                                                                  (4U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [4U]) 
                                                      | (((- (IData)(
                                                                     (5U 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [5U]) 
                                                         | (((- (IData)(
                                                                        (6U 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [6U]) 
                                                            | ((- (IData)(
                                                                          (7U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                               [7U])))))))),32);
    bufp->fullIData(oldp+552,((((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [8U]) | (((- (IData)(
                                                     (9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [9U]) | (
                                                   ((- (IData)(
                                                               (0xaU 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [0xaU]) 
                                                   | (((- (IData)(
                                                                  (0xbU 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [0xbU]) 
                                                      | (((- (IData)(
                                                                     (0xcU 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [0xcU]) 
                                                         | (((- (IData)(
                                                                        (0xdU 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [0xdU]) 
                                                            | (((- (IData)(
                                                                           (0xeU 
                                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                [0xeU]) 
                                                               | ((- (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5)))) 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                  [0xfU]))))))))),32);
    bufp->fullIData(oldp+553,((((- (IData)((1U == (0xfU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [1U]) | (((- (IData)(
                                                     (2U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [2U]) | (
                                                   ((- (IData)(
                                                               (3U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [3U]) 
                                                   | (((- (IData)(
                                                                  (4U 
                                                                   == 
                                                                   (0xfU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [4U]) 
                                                      | (((- (IData)(
                                                                     (5U 
                                                                      == 
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [5U]) 
                                                         | (((- (IData)(
                                                                        (6U 
                                                                         == 
                                                                         (0xfU 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [6U]) 
                                                            | ((- (IData)(
                                                                          (7U 
                                                                           == 
                                                                           (0xfU 
                                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))))) 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                               [7U])))))))),32);
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_high),32);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+556,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 2U))));
    bufp->fullBit(oldp+557,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex))));
    bufp->fullBit(oldp+558,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 1U))));
    bufp->fullBit(oldp+559,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 3U))));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+615,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullCData(oldp+616,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+617,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+618,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+619,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->fullBit(oldp+620,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+621,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullIData(oldp+622,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
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
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+639,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+649,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+651,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+681,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+682,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+685,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+686,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+691,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+695,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+710,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+711,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+713,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+714,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+715,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+716,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+717,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+725,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+760,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+761,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+762,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+763,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+764,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+765,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+766,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+770,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+772,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+773,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+775,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+779,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+780,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+782,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+800,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+801,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+802,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+803,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+804,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+805,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+806,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+809,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+810,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+811,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+830,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+837,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+856,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+857,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+858,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+859,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+860,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+879,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+880,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+881,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+882,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+883,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+885,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+904,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+921,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+932,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+936,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+946,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+947,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+948,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+949,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+950,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+951,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+952,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+953,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+954,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+955,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+956,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+957,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+958,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+960,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+961,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+967,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+968,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+969,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+970,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+971,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+972,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+973,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+974,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+975,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+976,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+977,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+978,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+979,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+981,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+982,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+988,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+989,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+990,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+991,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+992,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+993,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+994,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+995,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+996,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+997,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+998,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+999,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+1000,((0xffU & ((IData)(1U) 
                                         << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                               [0U][0U][0U]),16);
    bufp->fullSData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                               [0U][0U][1U]),16);
    bufp->fullIData(oldp+1014,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                 [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [1U])),32);
    bufp->fullBit(oldp+1015,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                    >> 9U))));
    bufp->fullCData(oldp+1016,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1017,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1018,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                    >> 3U))));
    bufp->fullCData(oldp+1019,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+1020,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 4U))),8);
    bufp->fullCData(oldp+1021,((0xffU & ((IData)(1U) 
                                         << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullCData(oldp+1045,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c4b59f0__0))),4);
    bufp->fullIData(oldp+1046,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc738152c__0)),32);
    bufp->fullCData(oldp+1047,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h570f9425__0))),8);
    bufp->fullCData(oldp+1048,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd9dc2966__0))),3);
    bufp->fullCData(oldp+1049,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc7f27ace__0))),2);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1056,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1064,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1066,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1068,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1084,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1085,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1086,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1087,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1088,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1089,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1090,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1093,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h045b8425__0))));
    bufp->fullBit(oldp+1094,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h92ac1dc2__0))));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1099,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c4b59f0__0))))),16);
    bufp->fullSData(oldp+1100,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)))),16);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1111,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1112,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1113,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1118,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1120,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1121,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1128,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc738152c__0 
                                        >> 0x20U))),32);
    bufp->fullCData(oldp+1129,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h570f9425__0) 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1130,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c4b59f0__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1131,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd9dc2966__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1132,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc7f27ace__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1133,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h045b8425__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1134,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h92ac1dc2__0) 
                                    >> 1U))));
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),2);
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1145,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1146,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1148,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1151,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd9dc2966__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1152,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize)
                                 : 0U)),3);
    bufp->fullIData(oldp+1153,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata
                                 : 0U)),32);
    bufp->fullCData(oldp+1154,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb)
                                 : 0U)),4);
    bufp->fullBit(oldp+1155,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid))));
    bufp->fullBit(oldp+1156,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1157,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1158,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullBit(oldp+1159,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1160,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1161,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1162,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1163,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1164,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1165,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1166,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1167,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1168,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1169,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1170,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1171,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1172,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1173,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1174,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1175,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1176,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1177,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1178,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1179,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1180,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1181,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1182,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1183,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1184,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1185,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1186,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1187,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1188,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1189,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1190,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1191,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1192,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA)),32);
    bufp->fullCData(oldp+1193,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+1194,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullCData(oldp+1195,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)
                                 : 0U)),4);
    bufp->fullCData(oldp+1196,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))
                                 : 0U)),4);
    bufp->fullBit(oldp+1197,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+1198,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+1199,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1205,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+1211,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+1212,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))),32);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1219,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1220,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1221,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1222,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+1234,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+1235,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+1239,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+1247,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+1248,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                 << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+1249,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+1250,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+1261,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [0U])))),32);
    bufp->fullBit(oldp+1262,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1263,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1264,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1295,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1299,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1300,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1301,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1307,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h11efff3f__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullIData(oldp+1310,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1311,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullIData(oldp+1312,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1313,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1314,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1315,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1323,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1328,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1329,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1330,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1332,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1334,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1335,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1337,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1340,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1341,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1342,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1347,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1350,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1389,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1390,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1409,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1410,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1432,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1433,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1434,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1435,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1436,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1437,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1438,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1439,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1440,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1441,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1442,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1443,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1444,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1445,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1446,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1447,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1448,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1449,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1450,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1451,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1452,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1453,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1454,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1455,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1456,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1457,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1458,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1459,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1460,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1461,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1462,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1463,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rdata),32);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__updata));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid));
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1492,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullIData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1503,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1504,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1506,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1513,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1518,(vlSelf->clock));
    bufp->fullBit(oldp+1519,(vlSelf->reset));
    bufp->fullSData(oldp+1520,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1521,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1522,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1523,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1524,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1525,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1526,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1527,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1528,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1529,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1530,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1531,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1532,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1533,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1534,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1535,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1536,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1537,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1538,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1539,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1540,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1541,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1542,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1543,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1544,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1545,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1547,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1548,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullBit(oldp+1549,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullIData(oldp+1550,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1551,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1552,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid)))));
    bufp->fullCData(oldp+1553,((3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
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
    bufp->fullIData(oldp+1554,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1555,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1556,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1558,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullBit(oldp+1559,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rready) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid)))));
    bufp->fullCData(oldp+1560,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid)
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
    bufp->fullCData(oldp+1561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                                     ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                              ? 1U : 2U))
                                 : 0U)),3);
    bufp->fullCData(oldp+1562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid)
                                 ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                     & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                        | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                     ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt))
                                              ? 1U : 2U))
                                 : 0U)),3);
    bufp->fullCData(oldp+1563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullCData(oldp+1564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullIData(oldp+1565,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
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
    bufp->fullIData(oldp+1566,((((- (IData)((0x2000000U 
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
    bufp->fullCData(oldp+1567,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullIData(oldp+1568,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1571,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1572,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1573,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullSData(oldp+1574,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1577,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1578,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1580,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1582,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1583,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1585,(1U),3);
    bufp->fullCData(oldp+1586,(0U),2);
    bufp->fullCData(oldp+1587,(1U),2);
    bufp->fullCData(oldp+1588,(2U),2);
    bufp->fullCData(oldp+1589,(3U),2);
    bufp->fullSData(oldp+1590,(0xaU),11);
    bufp->fullBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1595,(0U));
    bufp->fullCData(oldp+1596,(0U),3);
    bufp->fullCData(oldp+1597,(2U),3);
    bufp->fullCData(oldp+1598,(3U),3);
    bufp->fullCData(oldp+1599,(4U),3);
    bufp->fullBit(oldp+1600,(1U));
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1602,(0U),4);
    bufp->fullIData(oldp+1603,(0U),32);
    bufp->fullCData(oldp+1604,(0U),8);
    bufp->fullBit(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullCData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awlen),8);
    bufp->fullCData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arlen),8);
    bufp->fullCData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awid),4);
    bufp->fullCData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arid),4);
    bufp->fullCData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awburst),2);
    bufp->fullCData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arburst),2);
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awaddr),32);
    bufp->fullIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wdata),32);
    bufp->fullCData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wstrb),4);
    bufp->fullCData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awlen),8);
    bufp->fullCData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awid),4);
    bufp->fullCData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid),4);
    bufp->fullCData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid),4);
    bufp->fullCData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awsize),3);
    bufp->fullCData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awburst),2);
    bufp->fullCData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp),2);
    bufp->fullCData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp),2);
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awvalid));
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awready));
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wvalid));
    bufp->fullBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready));
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bvalid));
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bready));
    bufp->fullBit(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wlast));
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast));
    bufp->fullIData(oldp+1644,(2U),32);
    bufp->fullIData(oldp+1645,(0U),32);
    bufp->fullIData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__log2__Vstatic__loop_var),32);
    bufp->fullIData(oldp+1647,(0x2000000U),32);
    bufp->fullIData(oldp+1648,(0x2000004U),32);
    bufp->fullBit(oldp+1649,(0U));
    bufp->fullBit(oldp+1650,(1U));
    bufp->fullCData(oldp+1651,(1U),4);
    bufp->fullCData(oldp+1652,(2U),4);
    bufp->fullCData(oldp+1653,(3U),4);
    bufp->fullCData(oldp+1654,(4U),4);
    bufp->fullCData(oldp+1655,(5U),4);
    bufp->fullCData(oldp+1656,(6U),4);
    bufp->fullCData(oldp+1657,(7U),4);
    bufp->fullCData(oldp+1658,(8U),4);
    bufp->fullIData(oldp+1659,(4U),32);
    bufp->fullIData(oldp+1660,(1U),32);
    bufp->fullIData(oldp+1661,(2U),32);
    bufp->fullIData(oldp+1662,(0x30000000U),32);
    bufp->fullIData(oldp+1663,(0x20U),32);
    bufp->fullIData(oldp+1664,(0x1000000U),32);
    bufp->fullIData(oldp+1665,(0x1000004U),32);
    bufp->fullIData(oldp+1666,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1667,(0x1800U),32);
    bufp->fullIData(oldp+1668,(0x79737978U),32);
    bufp->fullCData(oldp+1669,(4U),8);
    bufp->fullCData(oldp+1670,(8U),8);
    bufp->fullCData(oldp+1671,(3U),8);
    bufp->fullCData(oldp+1672,(0x9fU),8);
    bufp->fullCData(oldp+1673,(0x25U),8);
    bufp->fullCData(oldp+1674,(0xdU),8);
    bufp->fullCData(oldp+1675,(0x99U),8);
    bufp->fullCData(oldp+1676,(0x49U),8);
    bufp->fullCData(oldp+1677,(0x41U),8);
    bufp->fullCData(oldp+1678,(0x1fU),8);
    bufp->fullCData(oldp+1679,(1U),8);
    bufp->fullCData(oldp+1680,(9U),8);
    bufp->fullCData(oldp+1681,(0x11U),8);
    bufp->fullCData(oldp+1682,(0xc1U),8);
    bufp->fullCData(oldp+1683,(0x63U),8);
    bufp->fullCData(oldp+1684,(0x85U),8);
    bufp->fullCData(oldp+1685,(0x61U),8);
    bufp->fullCData(oldp+1686,(0x71U),8);
    bufp->fullCData(oldp+1687,(0xf0U),8);
    bufp->fullCData(oldp+1688,(0xe0U),8);
    bufp->fullCData(oldp+1689,(0x15U),8);
    bufp->fullCData(oldp+1690,(0xebU),8);
    bufp->fullCData(oldp+1691,(0x38U),8);
    bufp->fullIData(oldp+1692,(0x64U),32);
    bufp->fullIData(oldp+1693,(0x18U),32);
    bufp->fullIData(oldp+1694,(9U),32);
    bufp->fullIData(oldp+1695,(6U),32);
    bufp->fullIData(oldp+1696,(3U),32);
    bufp->fullIData(oldp+1697,(8U),32);
    bufp->fullIData(oldp+1698,(0xdU),32);
    bufp->fullIData(oldp+1699,(0x2000U),32);
    bufp->fullIData(oldp+1700,(0x2710U),32);
    bufp->fullIData(oldp+1701,(0x30cU),32);
    bufp->fullSData(oldp+1702,(0x20U),13);
    bufp->fullCData(oldp+1703,(9U),4);
    bufp->fullIData(oldp+1704,(0xaU),32);
    bufp->fullIData(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1706,(0x11U),32);
    bufp->fullIData(oldp+1707,(0x3fffffffU),32);
    bufp->fullCData(oldp+1708,(5U),3);
    bufp->fullCData(oldp+1709,(6U),3);
    bufp->fullCData(oldp+1710,(7U),3);
    bufp->fullCData(oldp+1711,(0xaU),4);
    bufp->fullIData(oldp+1712,(0xbU),32);
    bufp->fullIData(oldp+1713,(0x10U),32);
    bufp->fullIData(oldp+1714,(5U),32);
    bufp->fullIData(oldp+1715,(0x60U),32);
    bufp->fullIData(oldp+1716,(0x90U),32);
    bufp->fullIData(oldp+1717,(0x310U),32);
    bufp->fullIData(oldp+1718,(0x320U),32);
    bufp->fullIData(oldp+1719,(0x23U),32);
    bufp->fullIData(oldp+1720,(0x203U),32);
    bufp->fullIData(oldp+1721,(0x20dU),32);
    bufp->fullSData(oldp+1722,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1723,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1724,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1725,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
