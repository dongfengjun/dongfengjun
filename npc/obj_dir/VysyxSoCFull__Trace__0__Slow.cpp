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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBus(c+1531,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1532,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1533,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1534,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1535,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1536,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1537,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1538,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1539,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1540,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1541,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1542,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1543,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1544,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1545,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1546,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1547,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1548,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1549,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1550,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBus(c+1531,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1532,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1533,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1534,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1535,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1536,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1537,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1538,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1539,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1540,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1541,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1542,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1543,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1544,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1545,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1546,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1547,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1548,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1549,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1550,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+524,"spi_sck", false,-1);
    tracep->declBus(c+525,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1015,"spi_mosi", false,-1);
    tracep->declBit(c+1551,"spi_miso", false,-1);
    tracep->declBit(c+1549,"uart_rx", false,-1);
    tracep->declBit(c+1550,"uart_tx", false,-1);
    tracep->declBit(c+1525,"psram_sck", false,-1);
    tracep->declBit(c+1526,"psram_ce_n", false,-1);
    tracep->declBus(c+1552,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1553,"sdram_clk", false,-1);
    tracep->declBit(c+526,"sdram_cke", false,-1);
    tracep->declBit(c+1016,"sdram_cs", false,-1);
    tracep->declBit(c+1017,"sdram_ras", false,-1);
    tracep->declBit(c+1018,"sdram_cas", false,-1);
    tracep->declBit(c+1019,"sdram_we", false,-1);
    tracep->declBus(c+1020,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1021,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+527,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1045,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1531,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1532,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1533,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1534,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1535,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1536,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1537,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1538,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1539,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1540,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1541,"ps2_clk", false,-1);
    tracep->declBit(c+1542,"ps2_data", false,-1);
    tracep->declBus(c+1543,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1544,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1545,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1546,"vga_hsync", false,-1);
    tracep->declBit(c+1547,"vga_vsync", false,-1);
    tracep->declBit(c+1548,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBus(c+1104,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1105,"in_psel", false,-1);
    tracep->declBit(c+977,"in_penable", false,-1);
    tracep->declBus(c+1615,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1106,"in_pwrite", false,-1);
    tracep->declBus(c+1299,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1252,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+528,"in_pready", false,-1);
    tracep->declBus(c+529,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+530,"in_pslverr", false,-1);
    tracep->declBus(c+1253,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1300,"out_psel", false,-1);
    tracep->declBit(c+1301,"out_penable", false,-1);
    tracep->declBus(c+1302,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1303,"out_pwrite", false,-1);
    tracep->declBus(c+1304,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1306,"out_pready", false,-1);
    tracep->declBus(c+1554,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1307,"out_pslverr", false,-1);
    tracep->declBus(c+1616,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1617,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1618,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1619,"DELAY", false,-1, 1,0);
    tracep->declBus(c+531,"state", false,-1, 1,0);
    tracep->declBus(c+532,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+533,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+534,"pslverr_reg", false,-1);
    tracep->declBus(c+1620,"r", false,-1, 10,0);
    tracep->declBus(c+1618,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1300,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1301,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1303,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1253,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1306,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1307,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1554,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1308,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1309,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1303,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1310,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1302,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+535,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1621,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1622,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1311,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1312,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1303,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1254,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1302,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+536,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1623,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+537,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1313,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1314,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1303,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1254,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1302,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+538,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1624,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+539,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1315,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1316,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1303,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1253,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1625,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+978,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1317,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1303,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1254,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1302,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1319,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1625,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1320,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1321,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1322,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1303,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1310,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1302,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1556,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1625,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1323,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1324,"sel_0", false,-1);
    tracep->declBit(c+1325,"sel_1", false,-1);
    tracep->declBit(c+1326,"sel_2", false,-1);
    tracep->declBit(c+1327,"sel_3", false,-1);
    tracep->declBit(c+1328,"sel_4", false,-1);
    tracep->declBit(c+1329,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1107,"auto_in_awready", false,-1);
    tracep->declBit(c+1108,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1109,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1110,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1107,"auto_in_wready", false,-1);
    tracep->declBit(c+1112,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1330,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1332,"auto_in_bready", false,-1);
    tracep->declBit(c+1333,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1557,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1113,"auto_in_arready", false,-1);
    tracep->declBit(c+1114,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1115,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1116,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1334,"auto_in_rready", false,-1);
    tracep->declBit(c+1335,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1558,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1557,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1105,"auto_out_psel", false,-1);
    tracep->declBit(c+977,"auto_out_penable", false,-1);
    tracep->declBit(c+1106,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1104,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1299,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1252,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+528,"auto_out_pready", false,-1);
    tracep->declBit(c+530,"auto_out_pslverr", false,-1);
    tracep->declBus(c+529,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+977,"nodeOut_penable", false,-1);
    tracep->declBus(c+979,"state", false,-1, 1,0);
    tracep->declBit(c+1113,"accept_read", false,-1);
    tracep->declBit(c+1107,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1106,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+540,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1557,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1335,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1333,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1336,"in_arready", false,-1);
    tracep->declBit(c+1118,"in_arvalid", false,-1);
    tracep->declBus(c+1119,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1120,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1121,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+507,"in_rready", false,-1);
    tracep->declBit(c+541,"in_rvalid", false,-1);
    tracep->declBus(c+542,"in_rid", false,-1, 3,0);
    tracep->declBus(c+543,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1616,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+544,"in_rlast", false,-1);
    tracep->declBit(c+1337,"in_awready", false,-1);
    tracep->declBit(c+1124,"in_awvalid", false,-1);
    tracep->declBus(c+1125,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1338,"in_wready", false,-1);
    tracep->declBit(c+1130,"in_wvalid", false,-1);
    tracep->declBus(c+1339,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"in_wlast", false,-1);
    tracep->declBit(c+508,"in_bready", false,-1);
    tracep->declBit(c+545,"in_bvalid", false,-1);
    tracep->declBus(c+542,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1616,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1336,"out_arready", false,-1);
    tracep->declBit(c+1118,"out_arvalid", false,-1);
    tracep->declBus(c+1119,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1120,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1121,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+507,"out_rready", false,-1);
    tracep->declBit(c+541,"out_rvalid", false,-1);
    tracep->declBus(c+542,"out_rid", false,-1, 3,0);
    tracep->declBus(c+543,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1616,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+544,"out_rlast", false,-1);
    tracep->declBit(c+1337,"out_awready", false,-1);
    tracep->declBit(c+1124,"out_awvalid", false,-1);
    tracep->declBus(c+1125,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1338,"out_wready", false,-1);
    tracep->declBit(c+1130,"out_wvalid", false,-1);
    tracep->declBus(c+1339,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"out_wlast", false,-1);
    tracep->declBit(c+508,"out_bready", false,-1);
    tracep->declBit(c+545,"out_bvalid", false,-1);
    tracep->declBus(c+542,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1616,"out_bresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+1132,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+1133,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1339,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"auto_in_wlast", false,-1);
    tracep->declBit(c+509,"auto_in_bready", false,-1);
    tracep->declBit(c+1341,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1342,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+518,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+1134,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1119,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1120,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1121,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1343,"auto_in_rready", false,-1);
    tracep->declBit(c+1344,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1345,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1559,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1560,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+519,"auto_in_rlast", false,-1);
    tracep->declBit(c+1346,"auto_out_awready", false,-1);
    tracep->declBit(c+1135,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1109,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1110,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1136,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1347,"auto_out_wready", false,-1);
    tracep->declBit(c+1137,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1330,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1138,"auto_out_wlast", false,-1);
    tracep->declBit(c+1348,"auto_out_bready", false,-1);
    tracep->declBit(c+1349,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1342,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1350,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1351,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1352,"auto_out_arready", false,-1);
    tracep->declBit(c+1139,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1115,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1116,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1140,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1343,"auto_out_rready", false,-1);
    tracep->declBit(c+1344,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1345,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1559,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1560,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+520,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1353,"auto_out_rlast", false,-1);
    tracep->declBit(c+1137,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1354,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1141,"len", false,-1, 7,0);
    tracep->declBus(c+1142,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1143,"len_1", false,-1, 7,0);
    tracep->declBus(c+1144,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1135,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1145,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1146,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1138,"w_last", false,-1);
    tracep->declBit(c+1348,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+1134,"io_enq_valid", false,-1);
    tracep->declBus(c+1119,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1120,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1121,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1122,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1123,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1355,"io_deq_ready", false,-1);
    tracep->declBit(c+1139,"io_deq_valid", false,-1);
    tracep->declBus(c+1115,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1147,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1148,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1117,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1149,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1139,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1356,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1132,"io_enq_valid", false,-1);
    tracep->declBus(c+1125,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1126,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1127,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1128,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1129,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1357,"io_deq_ready", false,-1);
    tracep->declBit(c+1150,"io_deq_valid", false,-1);
    tracep->declBus(c+1109,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1151,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1152,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1111,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1153,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1150,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1358,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1133,"io_enq_valid", false,-1);
    tracep->declBus(c+1339,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1340,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1131,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1359,"io_deq_ready", false,-1);
    tracep->declBit(c+1154,"io_deq_valid", false,-1);
    tracep->declBus(c+1330,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1331,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1561,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1154,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1360,"do_enq", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1361,"auto_in_awready", false,-1);
    tracep->declBit(c+1155,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1109,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1156,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1255,"auto_in_wready", false,-1);
    tracep->declBit(c+1157,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1330,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1362,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1363,"auto_in_arready", false,-1);
    tracep->declBit(c+1158,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1115,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1159,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1364,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1363,"nodeIn_arready", false,-1);
    tracep->declBit(c+1361,"nodeIn_awready", false,-1);
    tracep->declBit(c+1160,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1365,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1161,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1365,"R0_en", false,-1);
    tracep->declBit(c+1529,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1162,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1366,"W0_en", false,-1);
    tracep->declBit(c+1529,"W0_clk", false,-1);
    tracep->declBus(c+1330,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1331,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1367,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1163,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1256,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1164,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1339,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1165,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1368,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1369,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+521,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1370,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1166,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1119,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1120,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1121,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1167,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1371,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1372,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1562,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1563,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1373,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1124,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1338,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1130,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1339,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+508,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+545,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+542,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+1616,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1336,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1118,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1119,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1120,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1121,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+507,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+541,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+542,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+543,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1616,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+544,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1132,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1133,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1339,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+509,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1341,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1342,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+518,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1134,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1119,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1120,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1121,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1343,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1344,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1345,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1559,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1560,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+519,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1368,"in_0_bvalid", false,-1);
    tracep->declBit(c+1371,"in_0_rvalid", false,-1);
    tracep->declBit(c+1374,"in_0_wready", false,-1);
    tracep->declBit(c+1375,"in_0_awready", false,-1);
    tracep->declBit(c+510,"in_0_arready", false,-1);
    tracep->declBit(c+1367,"anonIn_awready", false,-1);
    tracep->declBit(c+1370,"anonIn_arready", false,-1);
    tracep->declBit(c+1168,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1169,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1170,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1171,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1172,"arSel", false,-1, 15,0);
    tracep->declBus(c+1173,"awSel", false,-1, 15,0);
    tracep->declBus(c+1376,"rSel", false,-1, 15,0);
    tracep->declBus(c+1377,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1174,"in_0_arvalid", false,-1);
    tracep->declBit(c+138,"latched", false,-1);
    tracep->declBit(c+1175,"in_0_awvalid", false,-1);
    tracep->declBit(c+1176,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1177,"in_0_wvalid", false,-1);
    tracep->declBit(c+139,"idle_2", false,-1);
    tracep->declBit(c+1378,"anyValid", false,-1);
    tracep->declBus(c+1379,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1380,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1381,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1382,"prefixOR_1", false,-1);
    tracep->declBit(c+1383,"winner_2_1", false,-1);
    tracep->declBit(c+141,"state_2_0", false,-1);
    tracep->declBit(c+142,"state_2_1", false,-1);
    tracep->declBit(c+1384,"muxState_2_0", false,-1);
    tracep->declBit(c+1385,"muxState_2_1", false,-1);
    tracep->declBit(c+143,"idle_3", false,-1);
    tracep->declBit(c+1386,"anyValid_1", false,-1);
    tracep->declBus(c+1387,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+144,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1388,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1389,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1390,"winner_3_0", false,-1);
    tracep->declBit(c+1391,"winner_3_1", false,-1);
    tracep->declBit(c+145,"state_3_0", false,-1);
    tracep->declBit(c+146,"state_3_1", false,-1);
    tracep->declBit(c+1392,"muxState_3_0", false,-1);
    tracep->declBit(c+522,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1176,"io_enq_valid", false,-1);
    tracep->declBus(c+1178,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1393,"io_deq_ready", false,-1);
    tracep->declBit(c+1179,"io_deq_valid", false,-1);
    tracep->declBus(c+1180,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+148,"wrap", false,-1);
    tracep->declBit(c+149,"wrap_1", false,-1);
    tracep->declBit(c+150,"maybe_full", false,-1);
    tracep->declBit(c+151,"ptr_match", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+1179,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1394,"do_deq", false,-1);
    tracep->declBit(c+1395,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+149,"R0_addr", false,-1);
    tracep->declBit(c+1626,"R0_en", false,-1);
    tracep->declBit(c+1529,"R0_clk", false,-1);
    tracep->declBus(c+154,"R0_data", false,-1, 1,0);
    tracep->declBit(c+148,"W0_addr", false,-1);
    tracep->declBit(c+1395,"W0_en", false,-1);
    tracep->declBit(c+1529,"W0_clk", false,-1);
    tracep->declBus(c+1178,"W0_data", false,-1, 1,0);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1396,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1181,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1109,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1110,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1347,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1137,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1330,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1138,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1348,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1349,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1342,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1350,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1397,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1182,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1115,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1116,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1343,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1344,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1345,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1559,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1560,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1353,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1361,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1155,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1109,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1156,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1255,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1330,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1362,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1363,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1158,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1115,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1159,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1364,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1183,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1184,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+157,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1185,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1115,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1186,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+523,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+158,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+159,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1107,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1108,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1109,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1110,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1107,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1112,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1330,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1332,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1333,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1557,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1113,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1114,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1115,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1116,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1334,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1335,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1558,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1557,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1349,"in_0_bvalid", false,-1);
    tracep->declBit(c+1344,"in_0_rvalid", false,-1);
    tracep->declBit(c+1398,"in_0_wready", false,-1);
    tracep->declBit(c+1399,"in_0_awready", false,-1);
    tracep->declBit(c+1397,"in_0_arready", false,-1);
    tracep->declBit(c+1396,"anonIn_awready", false,-1);
    tracep->declBit(c+1187,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1188,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1189,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1190,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1191,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1192,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1193,"arSel", false,-1, 15,0);
    tracep->declBus(c+1194,"awSel", false,-1, 15,0);
    tracep->declBus(c+1400,"rSel", false,-1, 15,0);
    tracep->declBus(c+1401,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1195,"in_0_awvalid", false,-1);
    tracep->declBit(c+1196,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1197,"in_0_wvalid", false,-1);
    tracep->declBit(c+194,"idle_3", false,-1);
    tracep->declBit(c+1402,"anyValid", false,-1);
    tracep->declBus(c+1403,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+195,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1404,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1405,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1406,"prefixOR_1", false,-1);
    tracep->declBit(c+1407,"winner_3_1", false,-1);
    tracep->declBit(c+1408,"winner_3_2", false,-1);
    tracep->declBit(c+196,"state_3_0", false,-1);
    tracep->declBit(c+197,"state_3_1", false,-1);
    tracep->declBit(c+198,"state_3_2", false,-1);
    tracep->declBit(c+1409,"muxState_3_0", false,-1);
    tracep->declBit(c+1410,"muxState_3_1", false,-1);
    tracep->declBit(c+1411,"muxState_3_2", false,-1);
    tracep->declBit(c+199,"idle_4", false,-1);
    tracep->declBit(c+1412,"anyValid_1", false,-1);
    tracep->declBus(c+1413,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1414,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1415,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1416,"winner_4_0", false,-1);
    tracep->declBit(c+1417,"winner_4_2", false,-1);
    tracep->declBit(c+201,"state_4_0", false,-1);
    tracep->declBit(c+202,"state_4_2", false,-1);
    tracep->declBit(c+1418,"muxState_4_0", false,-1);
    tracep->declBit(c+1419,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1196,"io_enq_valid", false,-1);
    tracep->declBus(c+1198,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1420,"io_deq_ready", false,-1);
    tracep->declBit(c+1199,"io_deq_valid", false,-1);
    tracep->declBus(c+1200,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1199,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1421,"do_deq", false,-1);
    tracep->declBit(c+1422,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1626,"R0_en", false,-1);
    tracep->declBit(c+1529,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1422,"W0_en", false,-1);
    tracep->declBit(c+1529,"W0_clk", false,-1);
    tracep->declBus(c+1198,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1346,"auto_in_awready", false,-1);
    tracep->declBit(c+1135,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1109,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1110,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1136,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1347,"auto_in_wready", false,-1);
    tracep->declBit(c+1137,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1330,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1138,"auto_in_wlast", false,-1);
    tracep->declBit(c+1348,"auto_in_bready", false,-1);
    tracep->declBit(c+1349,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1342,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1350,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1351,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1352,"auto_in_arready", false,-1);
    tracep->declBit(c+1139,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1115,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1116,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1140,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1343,"auto_in_rready", false,-1);
    tracep->declBit(c+1344,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1345,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1559,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1560,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+520,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1353,"auto_in_rlast", false,-1);
    tracep->declBit(c+1396,"auto_out_awready", false,-1);
    tracep->declBit(c+1181,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1109,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1110,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1111,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1347,"auto_out_wready", false,-1);
    tracep->declBit(c+1137,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1330,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1331,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1138,"auto_out_wlast", false,-1);
    tracep->declBit(c+1348,"auto_out_bready", false,-1);
    tracep->declBit(c+1349,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1342,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1350,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1397,"auto_out_arready", false,-1);
    tracep->declBit(c+1182,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1115,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1116,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1343,"auto_out_rready", false,-1);
    tracep->declBit(c+1344,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1345,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1559,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1560,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1353,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1257,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1423,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1258,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1424,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1259,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1425,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1260,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1426,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1261,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1427,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1262,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1428,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1263,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1429,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1264,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1430,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1265,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1431,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1266,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1432,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1267,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1433,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1268,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1434,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+1269,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1435,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1270,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1436,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1271,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1437,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1272,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1438,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1273,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1439,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1274,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1440,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1275,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1441,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1276,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1442,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1277,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1443,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1278,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1444,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1279,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1445,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1280,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1446,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1281,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1447,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1282,"io_enq_valid", false,-1);
    tracep->declBit(c+1136,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1448,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1283,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1449,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1284,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1450,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1285,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1451,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1286,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1452,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1287,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1453,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1288,"io_enq_valid", false,-1);
    tracep->declBit(c+1140,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1454,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1564,"reset", false,-1);
    tracep->declBit(c+1367,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1163,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1256,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1164,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1339,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1165,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1368,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1369,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+521,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1370,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1166,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1119,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1120,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1121,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1167,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1371,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1372,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1562,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1563,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1373,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1564,"reset", false,-1);
    tracep->declBit(c+1625,"io_interrupt", false,-1);
    tracep->declBit(c+1367,"io_master_awready", false,-1);
    tracep->declBit(c+1163,"io_master_awvalid", false,-1);
    tracep->declBus(c+1125,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1256,"io_master_wready", false,-1);
    tracep->declBit(c+1164,"io_master_wvalid", false,-1);
    tracep->declBus(c+1339,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"io_master_wlast", false,-1);
    tracep->declBit(c+1165,"io_master_bready", false,-1);
    tracep->declBit(c+1368,"io_master_bvalid", false,-1);
    tracep->declBus(c+1369,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+521,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1370,"io_master_arready", false,-1);
    tracep->declBit(c+1166,"io_master_arvalid", false,-1);
    tracep->declBus(c+1119,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1120,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1121,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1167,"io_master_rready", false,-1);
    tracep->declBit(c+1371,"io_master_rvalid", false,-1);
    tracep->declBus(c+1372,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1562,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1563,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1373,"io_master_rlast", false,-1);
    tracep->declBit(c+1627,"io_slave_awready", false,-1);
    tracep->declBit(c+1625,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1628,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1629,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1630,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1631,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1616,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1632,"io_slave_wready", false,-1);
    tracep->declBit(c+1625,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1629,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1628,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1625,"io_slave_wlast", false,-1);
    tracep->declBit(c+1625,"io_slave_bready", false,-1);
    tracep->declBit(c+1633,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1634,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1635,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1636,"io_slave_arready", false,-1);
    tracep->declBit(c+1625,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1628,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1629,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1630,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1631,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1616,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1625,"io_slave_rready", false,-1);
    tracep->declBit(c+1637,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1638,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1639,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1640,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1641,"io_slave_rlast", false,-1);
    tracep->declBit(c+341,"DIFFTEST", false,-1);
    tracep->declBus(c+1293,"pc", false,-1, 31,0);
    tracep->declBus(c+1294,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1295,"pc_valid", false,-1);
    tracep->declBit(c+1565,"if_ready", false,-1);
    tracep->declBus(c+1060,"inst", false,-1, 31,0);
    tracep->declBit(c+1098,"if_valid", false,-1);
    tracep->declBit(c+1088,"id_ready", false,-1);
    tracep->declBus(c+1642,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1642,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1089,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1566,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1628,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1630,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+342,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1628,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1567,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+343,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1568,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1631,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+344,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1616,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+345,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1569,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1570,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1625,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1571,"if_axi_awready", false,-1);
    tracep->declBit(c+1625,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1572,"if_axi_wready", false,-1);
    tracep->declBit(c+1573,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1625,"if_axi_bready", false,-1);
    tracep->declBit(c+1090,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1455,"if_axi_arready", false,-1);
    tracep->declBit(c+1456,"if_axi_rvalid", false,-1);
    tracep->declBit(c+1091,"if_axi_rready", false,-1);
    tracep->declBit(c+1643,"if_axi_wlast", false,-1);
    tracep->declBit(c+1574,"if_axi_rlast", false,-1);
    tracep->declBus(c+1099,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1099,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1575,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1457,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1628,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1630,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1576,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1628,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+496,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1577,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+497,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1631,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1578,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1616,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1579,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+498,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1580,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1644,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+499,"icache_axi_awready", false,-1);
    tracep->declBit(c+1644,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+500,"icache_axi_wready", false,-1);
    tracep->declBit(c+501,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1644,"icache_axi_bready", false,-1);
    tracep->declBit(c+1201,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1581,"icache_axi_arready", false,-1);
    tracep->declBit(c+1458,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+1202,"icache_axi_rready", false,-1);
    tracep->declBit(c+1100,"icache_axi_wlast", false,-1);
    tracep->declBit(c+502,"icache_axi_rlast", false,-1);
    tracep->declBit(c+980,"id_valid", false,-1);
    tracep->declBit(c+981,"ex_ready", false,-1);
    tracep->declBus(c+982,"op", false,-1, 6,0);
    tracep->declBus(c+346,"rd", false,-1, 4,0);
    tracep->declBus(c+983,"funct3", false,-1, 2,0);
    tracep->declBus(c+347,"rs1", false,-1, 4,0);
    tracep->declBus(c+348,"rs2", false,-1, 4,0);
    tracep->declBus(c+349,"imm", false,-1, 31,0);
    tracep->declBus(c+350,"funct7", false,-1, 6,0);
    tracep->declBus(c+351,"shamt", false,-1, 4,0);
    tracep->declBit(c+984,"ls_read", false,-1);
    tracep->declBit(c+985,"ls_write", false,-1);
    tracep->declBit(c+1061,"ls_done", false,-1);
    tracep->declBit(c+352,"ex_valid", false,-1);
    tracep->declBit(c+353,"wb_ready", false,-1);
    tracep->declBus(c+354,"ex", false,-1, 31,0);
    tracep->declBit(c+986,"ls_valid", false,-1);
    tracep->declBit(c+987,"ls_wen", false,-1);
    tracep->declBus(c+988,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+487,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+989,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+990,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+991,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+992,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1630,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1630,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1617,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1617,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+355,"mepc", false,-1, 31,0);
    tracep->declBus(c+356,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+357,"mstatus", false,-1, 31,0);
    tracep->declBus(c+358,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+359,"mcause", false,-1, 31,0);
    tracep->declBus(c+360,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+361,"mtvec", false,-1, 31,0);
    tracep->declBus(c+362,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+363,"gpr_wen", false,-1);
    tracep->declBit(c+364,"mepc_wen", false,-1);
    tracep->declBit(c+365,"mstatus_wen", false,-1);
    tracep->declBit(c+366,"mcause_wen", false,-1);
    tracep->declBit(c+367,"mtvec_wen", false,-1);
    tracep->declBus(c+825,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+826,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1582,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1583,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1584,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+828,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+829,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1645,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+503,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1646,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+504,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+830,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+831,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+832,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+833,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+505,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1585,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+834,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1459,"ls_axi_awready", false,-1);
    tracep->declBit(c+835,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1460,"ls_axi_wready", false,-1);
    tracep->declBit(c+1461,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+836,"ls_axi_bready", false,-1);
    tracep->declBit(c+837,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1462,"ls_axi_arready", false,-1);
    tracep->declBit(c+1463,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+838,"ls_axi_rready", false,-1);
    tracep->declBit(c+839,"ls_axi_wlast", false,-1);
    tracep->declBit(c+506,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1203,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1464,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1204,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+368,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1465,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1205,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1206,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1207,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+369,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1208,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+370,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1209,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1211,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1212,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+371,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+372,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1213,"c_axi_awvalid", false,-1);
    tracep->declBit(c+373,"c_axi_awready", false,-1);
    tracep->declBit(c+1214,"c_axi_wvalid", false,-1);
    tracep->declBit(c+374,"c_axi_wready", false,-1);
    tracep->declBit(c+375,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1215,"c_axi_bready", false,-1);
    tracep->declBit(c+1216,"c_axi_arvalid", false,-1);
    tracep->declBit(c+376,"c_axi_arready", false,-1);
    tracep->declBit(c+377,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1217,"c_axi_rready", false,-1);
    tracep->declBit(c+1218,"c_axi_wlast", false,-1);
    tracep->declBit(c+378,"c_axi_rlast", false,-1);
    tracep->declBit(c+1586,"wb_done", false,-1);
    tracep->declBit(c+341,"difftest", false,-1);
    tracep->declBus(c+379,"xrd", false,-1, 31,0);
    tracep->declBus(c+380,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+381,"rf_wen", false,-1);
    tracep->declBus(c+382,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+383,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+384,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+385,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+386,"mepc_en", false,-1);
    tracep->declBit(c+387,"mstatus_en", false,-1);
    tracep->declBit(c+388,"mcause_en", false,-1);
    tracep->declBit(c+389,"mtvec_en", false,-1);
    tracep->declBus(c+390,"r1", false,-1, 31,0);
    tracep->declBus(c+391,"r2", false,-1, 31,0);
    tracep->declBus(c+392,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+393,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBit(c+373,"c_axi_awready", false,-1);
    tracep->declBit(c+1213,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1207,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1203,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1205,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1209,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1211,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+374,"c_axi_wready", false,-1);
    tracep->declBit(c+1214,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1464,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1465,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1218,"c_axi_wlast", false,-1);
    tracep->declBit(c+1215,"c_axi_bready", false,-1);
    tracep->declBit(c+375,"c_axi_bvalid", false,-1);
    tracep->declBus(c+369,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+371,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+376,"c_axi_arready", false,-1);
    tracep->declBit(c+1216,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1208,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1204,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1206,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1210,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1212,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1217,"c_axi_rready", false,-1);
    tracep->declBit(c+377,"c_axi_rvalid", false,-1);
    tracep->declBus(c+370,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+368,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+372,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+378,"c_axi_rlast", false,-1);
    tracep->declBit(c+373,"axi_awready", false,-1);
    tracep->declBit(c+374,"axi_wready", false,-1);
    tracep->declBit(c+375,"axi_bvalid", false,-1);
    tracep->declBit(c+376,"axi_arready", false,-1);
    tracep->declBit(c+377,"axi_rvalid", false,-1);
    tracep->declBit(c+378,"axi_rlast", false,-1);
    tracep->declBus(c+371,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+372,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+369,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+370,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+368,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+394,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1647,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1648,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+395,"mtime", false,-1, 63,0);
    tracep->declBus(c+1587,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+354,"ex_o", false,-1, 31,0);
    tracep->declBit(c+980,"id_valid_i", false,-1);
    tracep->declBit(c+981,"ex_ready_o", false,-1);
    tracep->declBit(c+352,"ex_valid_o", false,-1);
    tracep->declBit(c+353,"wb_ready_i", false,-1);
    tracep->declBus(c+982,"op_i", false,-1, 6,0);
    tracep->declBus(c+983,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+349,"imm_i", false,-1, 31,0);
    tracep->declBus(c+350,"funct7_i", false,-1, 6,0);
    tracep->declBus(c+351,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+390,"r1_i", false,-1, 31,0);
    tracep->declBus(c+391,"r2_i", false,-1, 31,0);
    tracep->declBit(c+984,"ls_read_o", false,-1);
    tracep->declBit(c+985,"ls_write_o", false,-1);
    tracep->declBit(c+1061,"ls_done_i", false,-1);
    tracep->declBit(c+986,"ls_valid_o", false,-1);
    tracep->declBit(c+987,"ls_wen_o", false,-1);
    tracep->declBus(c+988,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+487,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+989,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+990,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+991,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+992,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1630,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1630,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1617,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1617,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+825,"ls_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1293,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1294,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+355,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+357,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+359,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+361,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+356,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+358,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+360,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+362,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+363,"gpr_wen_o", false,-1);
    tracep->declBit(c+364,"mepc_wen_o", false,-1);
    tracep->declBit(c+365,"mstatus_wen_o", false,-1);
    tracep->declBit(c+366,"mcause_wen_o", false,-1);
    tracep->declBit(c+367,"mtvec_wen_o", false,-1);
    tracep->declBit(c+981,"ex_ready", false,-1);
    tracep->declBit(c+352,"ex_valid", false,-1);
    tracep->declBit(c+993,"al_start", false,-1);
    tracep->declBit(c+1062,"al_done", false,-1);
    tracep->declBit(c+984,"ls_read_reg", false,-1);
    tracep->declBit(c+985,"ls_write_reg", false,-1);
    tracep->declBus(c+354,"ex_reg", false,-1, 31,0);
    tracep->declBus(c+1294,"dnpc_reg", false,-1, 31,0);
    tracep->declBit(c+363,"gpr_wen_reg", false,-1);
    tracep->declBus(c+356,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+358,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+360,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+362,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+364,"mepc_wen_reg", false,-1);
    tracep->declBit(c+365,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+366,"mcause_wen_reg", false,-1);
    tracep->declBit(c+367,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+397,"ram_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1616,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1617,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1618,"READY", false,-1, 1,0);
    tracep->declBus(c+1619,"DONE", false,-1, 1,0);
    tracep->declBus(c+994,"state", false,-1, 1,0);
    tracep->declBus(c+1588,"next_state", false,-1, 1,0);
    tracep->declBit(c+995,"al_valid", false,-1);
    tracep->declBus(c+398,"al_res", false,-1, 31,0);
    tracep->declBus(c+1649,"a", false,-1, 31,0);
    tracep->declBus(c+1650,"b", false,-1, 31,0);
    tracep->declBus(c+1296,"ex", false,-1, 31,0);
    tracep->declBus(c+996,"sel", false,-1, 3,0);
    tracep->declBus(c+997,"x", false,-1, 31,0);
    tracep->declBus(c+998,"y", false,-1, 31,0);
    tracep->declBus(c+840,"res", false,-1, 31,0);
    tracep->declBus(c+1628,"ADD", false,-1, 3,0);
    tracep->declBus(c+1651,"SUB", false,-1, 3,0);
    tracep->declBus(c+1652,"SLL", false,-1, 3,0);
    tracep->declBus(c+1653,"SRL", false,-1, 3,0);
    tracep->declBus(c+1654,"SRA", false,-1, 3,0);
    tracep->declBus(c+1655,"SLT", false,-1, 3,0);
    tracep->declBus(c+1656,"AND", false,-1, 3,0);
    tracep->declBus(c+1657,"OR", false,-1, 3,0);
    tracep->declBus(c+1658,"XOR", false,-1, 3,0);
    tracep->declBus(c+1659,"MUL", false,-1, 3,0);
    tracep->declBus(c+1660,"MULH", false,-1, 3,0);
    tracep->declBus(c+1661,"DIV", false,-1, 3,0);
    tracep->declBus(c+1662,"REM", false,-1, 3,0);
    tracep->declBus(c+999,"csr", false,-1, 31,0);
    tracep->declBus(c+1589,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+1000,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+488,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1000,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+1000,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+1001,"mepc_wen", false,-1);
    tracep->declBit(c+1002,"mstatus_wen", false,-1);
    tracep->declBit(c+1003,"mcause_wen", false,-1);
    tracep->declBit(c+1004,"mtvec_wen", false,-1);
    tracep->declBus(c+1076,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+349,"offset", false,-1, 31,0);
    tracep->declBit(c+1005,"jalen", false,-1);
    tracep->declBit(c+1006,"jalren", false,-1);
    tracep->declBit(c+489,"beqen", false,-1);
    tracep->declBit(c+490,"bneen", false,-1);
    tracep->declBit(c+491,"blten", false,-1);
    tracep->declBit(c+492,"bgeen", false,-1);
    tracep->declBit(c+493,"bltuen", false,-1);
    tracep->declBit(c+494,"bgeuen", false,-1);
    tracep->declBit(c+1007,"ecall_en", false,-1);
    tracep->declBit(c+495,"mret_en", false,-1);
    tracep->declBus(c+1297,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1008,"gpr_wen", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+997,"a", false,-1, 31,0);
    tracep->declBus(c+998,"b", false,-1, 31,0);
    tracep->declBus(c+996,"opcode", false,-1, 3,0);
    tracep->declBit(c+993,"start", false,-1);
    tracep->declBus(c+840,"res", false,-1, 31,0);
    tracep->declBit(c+1062,"done", false,-1);
    tracep->declBus(c+1628,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1651,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1652,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1653,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1654,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1655,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1656,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1657,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1658,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1659,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1660,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1661,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1662,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1616,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1617,"EXECUTE", false,-1, 1,0);
    tracep->declBus(c+1618,"FINISH", false,-1, 1,0);
    tracep->declBus(c+1619,"NULL", false,-1, 1,0);
    tracep->declBus(c+841,"state", false,-1, 1,0);
    tracep->declBus(c+842,"a_reg", false,-1, 31,0);
    tracep->declBus(c+843,"b_reg", false,-1, 31,0);
    tracep->declBus(c+844,"opcode_reg", false,-1, 3,0);
    tracep->declQuad(c+845,"mul_result", false,-1, 63,0);
    tracep->declBus(c+847,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+848,"dividend", false,-1, 31,0);
    tracep->declBus(c+849,"divisor", false,-1, 31,0);
    tracep->declBus(c+850,"quotient", false,-1, 31,0);
    tracep->declBus(c+851,"remainder", false,-1, 31,0);
    tracep->declBus(c+852,"div_counter", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1663,"n", false,-1, 31,0);
    tracep->declBus(c+1664,"m", false,-1, 31,0);
    tracep->declBus(c+1665,"w", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBit(c+1571,"m_axi_awready", false,-1);
    tracep->declBit(c+1625,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1628,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1642,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1630,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1631,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1616,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1572,"m_axi_wready", false,-1);
    tracep->declBit(c+1625,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1642,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1628,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1643,"m_axi_wlast", false,-1);
    tracep->declBit(c+1625,"m_axi_bready", false,-1);
    tracep->declBit(c+1573,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1567,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1569,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1455,"m_axi_arready", false,-1);
    tracep->declBit(c+1090,"m_axi_arvalid", false,-1);
    tracep->declBus(c+343,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1089,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+342,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+344,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+345,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1091,"m_axi_rready", false,-1);
    tracep->declBit(c+1456,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1568,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1566,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1570,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1574,"m_axi_rlast", false,-1);
    tracep->declBit(c+499,"s_axi_awready", false,-1);
    tracep->declBit(c+1644,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1628,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1099,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1630,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1631,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1616,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+500,"s_axi_wready", false,-1);
    tracep->declBit(c+1644,"s_axi_wvalid", false,-1);
    tracep->declBus(c+1099,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1628,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1100,"s_axi_wlast", false,-1);
    tracep->declBit(c+1644,"s_axi_bready", false,-1);
    tracep->declBit(c+501,"s_axi_bvalid", false,-1);
    tracep->declBus(c+496,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+498,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1581,"s_axi_arready", false,-1);
    tracep->declBit(c+1201,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1577,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1575,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1576,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1578,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1579,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1202,"s_axi_rready", false,-1);
    tracep->declBit(c+1458,"s_axi_rvalid", false,-1);
    tracep->declBus(c+497,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1457,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1580,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+502,"s_axi_rlast", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+853+i*1,"cache_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+869+i*1,"tag_reg", true,(i+0), 28,0);
    }
    tracep->declBus(c+885,"valid_reg", false,-1, 15,0);
    tracep->declBus(c+1092,"tag", false,-1, 28,0);
    tracep->declBus(c+1093,"index", false,-1, 0,0);
    tracep->declBus(c+1094,"offset", false,-1, 1,0);
    tracep->declBus(c+1219,"access", false,-1, 7,0);
    tracep->declBus(c+1616,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1617,"TRANS", false,-1, 1,0);
    tracep->declBus(c+1618,"RETURN", false,-1, 1,0);
    tracep->declBus(c+1101,"state", false,-1, 1,0);
    tracep->declBit(c+1666,"cache_axi_awready", false,-1);
    tracep->declBit(c+1667,"cache_axi_wready", false,-1);
    tracep->declBit(c+1668,"cache_axi_bvalid", false,-1);
    tracep->declBit(c+886,"cache_axi_arready", false,-1);
    tracep->declBit(c+887,"cache_axi_rvalid", false,-1);
    tracep->declBit(c+1669,"cache_axi_rlast", false,-1);
    tracep->declBus(c+1670,"cache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+888,"cache_axi_rresp", false,-1, 1,0);
    tracep->declBus(c+1671,"cache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1672,"cache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1102,"cache_axi_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+889,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+890,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+1060,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1098,"if_valid_i", false,-1);
    tracep->declBit(c+1088,"id_ready_o", false,-1);
    tracep->declBit(c+980,"id_valid_o", false,-1);
    tracep->declBit(c+981,"ex_ready_i", false,-1);
    tracep->declBus(c+982,"op_o", false,-1, 6,0);
    tracep->declBus(c+346,"rd_o", false,-1, 4,0);
    tracep->declBus(c+983,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+347,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+348,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+349,"imm_o", false,-1, 31,0);
    tracep->declBus(c+350,"funct7_o", false,-1, 6,0);
    tracep->declBus(c+351,"shamt_o", false,-1, 4,0);
    tracep->declBus(c+1063,"op", false,-1, 6,0);
    tracep->declBus(c+1064,"rd", false,-1, 4,0);
    tracep->declBus(c+1065,"funct3", false,-1, 2,0);
    tracep->declBus(c+1066,"rs1", false,-1, 4,0);
    tracep->declBus(c+1067,"rs2", false,-1, 4,0);
    tracep->declBus(c+1068,"immI", false,-1, 31,0);
    tracep->declBus(c+1069,"immU", false,-1, 31,0);
    tracep->declBus(c+1070,"immS", false,-1, 31,0);
    tracep->declBus(c+1071,"immB", false,-1, 31,0);
    tracep->declBus(c+1072,"immJ", false,-1, 31,0);
    tracep->declBus(c+1073,"imm", false,-1, 31,0);
    tracep->declBus(c+1074,"funct7", false,-1, 6,0);
    tracep->declBus(c+1075,"shamt", false,-1, 4,0);
    tracep->declBit(c+1088,"id_ready_reg", false,-1);
    tracep->declBit(c+980,"id_valid_reg", false,-1);
    tracep->declBus(c+982,"op_reg", false,-1, 6,0);
    tracep->declBus(c+346,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+983,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+347,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+348,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+349,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+350,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+351,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+1673,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1674,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+1095,"state", false,-1);
    tracep->declBit(c+1590,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+1293,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1060,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1295,"pc_valid_i", false,-1);
    tracep->declBit(c+1565,"if_ready_o", false,-1);
    tracep->declBit(c+1098,"if_valid_o", false,-1);
    tracep->declBit(c+1088,"id_ready_i", false,-1);
    tracep->declBit(c+1586,"wb_done_i", false,-1);
    tracep->declBit(c+1571,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1625,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1628,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1642,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1630,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1631,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1616,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1572,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1625,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1642,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1628,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1643,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1625,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1573,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1567,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1569,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1455,"if_axi_arready_i", false,-1);
    tracep->declBit(c+1090,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+343,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+1089,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+342,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+344,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+345,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1091,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1456,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1568,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1566,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1570,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1574,"if_axi_rlast_i", false,-1);
    tracep->declBit(c+1565,"if_ready_reg", false,-1);
    tracep->declBit(c+1098,"if_valid_reg", false,-1);
    tracep->declBus(c+1060,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+1616,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1617,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1618,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1619,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+1591,"state", false,-1, 1,0);
    tracep->declBus(c+1592,"next_state", false,-1, 1,0);
    tracep->declBit(c+1090,"axi_arvalid", false,-1);
    tracep->declBit(c+1091,"axi_rready", false,-1);
    tracep->declBus(c+343,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1089,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+342,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+344,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+345,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1673,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1674,"FETCH", false,-1, 0,0);
    tracep->declBit(c+1096,"axi_state", false,-1);
    tracep->declBit(c+1103,"fetch_start", false,-1);
    tracep->declBus(c+1097,"axi_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBit(c+984,"ls_read_i", false,-1);
    tracep->declBit(c+985,"ls_write_i", false,-1);
    tracep->declBit(c+1061,"ls_done_o", false,-1);
    tracep->declBus(c+825,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+986,"valid_i", false,-1);
    tracep->declBit(c+987,"wen_i", false,-1);
    tracep->declBus(c+988,"waddr_i", false,-1, 31,0);
    tracep->declBus(c+487,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+989,"raddr_i", false,-1, 31,0);
    tracep->declBus(c+990,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+991,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+992,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+1630,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1630,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+1617,"awburst_i", false,-1, 1,0);
    tracep->declBus(c+1617,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+1459,"ls_axi_awready", false,-1);
    tracep->declBit(c+834,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1645,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+826,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+828,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+830,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+832,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1460,"ls_axi_wready", false,-1);
    tracep->declBit(c+835,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1582,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1584,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+839,"ls_axi_wlast", false,-1);
    tracep->declBit(c+836,"ls_axi_bready", false,-1);
    tracep->declBit(c+1461,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+503,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+505,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1462,"ls_axi_arready", false,-1);
    tracep->declBit(c+837,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1646,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+827,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+829,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+831,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+833,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+838,"ls_axi_rready", false,-1);
    tracep->declBit(c+1463,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+504,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1583,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1585,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+506,"ls_axi_rlast", false,-1);
    tracep->declBit(c+1061,"ls_done_reg", false,-1);
    tracep->declBus(c+825,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1616,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1617,"READ", false,-1, 1,0);
    tracep->declBus(c+1618,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1619,"DONE", false,-1, 1,0);
    tracep->declBus(c+891,"state", false,-1, 1,0);
    tracep->declBit(c+834,"axi_awvalid", false,-1);
    tracep->declBit(c+835,"axi_wvalid", false,-1);
    tracep->declBus(c+1645,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+826,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+892,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+828,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+830,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+832,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+893,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+836,"axi_bready", false,-1);
    tracep->declBit(c+839,"axi_wlast", false,-1);
    tracep->declBit(c+837,"axi_arvalid", false,-1);
    tracep->declBit(c+838,"axi_rready", false,-1);
    tracep->declBus(c+1646,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+827,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+829,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+831,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+833,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+1293,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1294,"dnpc_i", false,-1, 31,0);
    tracep->declBit(c+1295,"pc_valid_o", false,-1);
    tracep->declBit(c+1565,"if_ready_i", false,-1);
    tracep->declBit(c+1295,"pc_valid_reg", false,-1);
    tracep->declBus(c+1293,"pc_reg", false,-1, 31,0);
    tracep->declBus(c+1673,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1674,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+1298,"state", false,-1);
    tracep->declBit(c+1593,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1675,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1676,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBus(c+379,"wdata", false,-1, 31,0);
    tracep->declBus(c+380,"waddr", false,-1, 4,0);
    tracep->declBit(c+381,"wen", false,-1);
    tracep->declBus(c+347,"raddr1", false,-1, 4,0);
    tracep->declBus(c+390,"r1", false,-1, 31,0);
    tracep->declBus(c+348,"raddr2", false,-1, 4,0);
    tracep->declBus(c+391,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+399+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBit(c+352,"ex_valid_i", false,-1);
    tracep->declBit(c+353,"wb_ready_o", false,-1);
    tracep->declBit(c+1586,"wb_done_o", false,-1);
    tracep->declBit(c+341,"difftest", false,-1);
    tracep->declBus(c+379,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+354,"ex_i", false,-1, 31,0);
    tracep->declBus(c+380,"rd_o", false,-1, 4,0);
    tracep->declBus(c+346,"rd_i", false,-1, 4,0);
    tracep->declBit(c+381,"gpr_wen_o", false,-1);
    tracep->declBit(c+363,"gpr_wen_i", false,-1);
    tracep->declBus(c+356,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+358,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+360,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+362,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+382,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+383,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+384,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+385,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+364,"mepc_wen_i", false,-1);
    tracep->declBit(c+365,"mstatus_wen_i", false,-1);
    tracep->declBit(c+366,"mcause_wen_i", false,-1);
    tracep->declBit(c+367,"mtvec_wen_i", false,-1);
    tracep->declBit(c+386,"mepc_wen_o", false,-1);
    tracep->declBit(c+387,"mstatus_wen_o", false,-1);
    tracep->declBit(c+388,"mcause_wen_o", false,-1);
    tracep->declBit(c+389,"mtvec_wen_o", false,-1);
    tracep->declBit(c+353,"wb_ready_reg", false,-1);
    tracep->declBit(c+1586,"wb_done_reg", false,-1);
    tracep->declBit(c+341,"difftest_reg", false,-1);
    tracep->declBus(c+379,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+380,"rd_reg", false,-1, 4,0);
    tracep->declBit(c+381,"gpr_wen_reg", false,-1);
    tracep->declBus(c+382,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+383,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+384,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+385,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+386,"mepc_wen_reg", false,-1);
    tracep->declBit(c+387,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+388,"mcause_wen_reg", false,-1);
    tracep->declBit(c+389,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+1616,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1617,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1618,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1619,"NULL", false,-1, 1,0);
    tracep->declBus(c+1594,"state", false,-1, 1,0);
    tracep->declBus(c+1595,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBit(c+499,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1644,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1628,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1099,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1630,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1631,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1616,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+500,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1644,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1099,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1628,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1100,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1644,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+501,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+496,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+498,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1581,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1201,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1577,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1575,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1576,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1578,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1579,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1202,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1458,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+497,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1457,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1580,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+502,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1459,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+834,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1645,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+826,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+828,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+830,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+832,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1460,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+835,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1582,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1584,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+839,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+836,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1461,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+503,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+505,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1462,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+837,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1646,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+827,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+829,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+831,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+833,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+838,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1463,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+504,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1583,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1585,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+506,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1367,"io_master_awready", false,-1);
    tracep->declBit(c+1163,"io_master_awvalid", false,-1);
    tracep->declBus(c+1125,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1256,"io_master_wready", false,-1);
    tracep->declBit(c+1164,"io_master_wvalid", false,-1);
    tracep->declBus(c+1339,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"io_master_wlast", false,-1);
    tracep->declBit(c+1165,"io_master_bready", false,-1);
    tracep->declBit(c+1368,"io_master_bvalid", false,-1);
    tracep->declBus(c+1369,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+521,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1370,"io_master_arready", false,-1);
    tracep->declBit(c+1166,"io_master_arvalid", false,-1);
    tracep->declBus(c+1119,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1120,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1121,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1167,"io_master_rready", false,-1);
    tracep->declBit(c+1371,"io_master_rvalid", false,-1);
    tracep->declBus(c+1372,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1562,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1563,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1373,"io_master_rlast", false,-1);
    tracep->declBit(c+373,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1213,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1207,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1203,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1205,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1209,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1211,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+374,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1214,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1464,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1465,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1218,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1215,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+375,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+369,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+371,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+376,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1216,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1208,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1204,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1206,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1210,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1212,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1217,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+377,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+370,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+368,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+372,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+378,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+392,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+393,"marchid", false,-1, 31,0);
    tracep->declBus(c+1220,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1466,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1221,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1467,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1468,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1077,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1222,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1009,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+511,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1223,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+512,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1078,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1224,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1079,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1225,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+513,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1596,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1080,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+514,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1081,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+515,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+516,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1082,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1226,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1469,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1470,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1227,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1228,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+517,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1616,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1617,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1618,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1619,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+1010,"state", false,-1, 1,0);
    tracep->declBus(c+1597,"next_state", false,-1, 1,0);
    tracep->declBus(c+1647,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1648,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1229,"sel_clint", false,-1);
    tracep->declBus(c+1677,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1678,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1230,"sel_mvendorid", false,-1);
    tracep->declBit(c+1231,"sel_marchid", false,-1);
    tracep->declBit(c+1232,"sel_id", false,-1);
    tracep->declBus(c+1233,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1471,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1234,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1598,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1472,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1235,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1236,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1237,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1679,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1238,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1680,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1239,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1240,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1241,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1242,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1681,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1682,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1683,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1626,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1243,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1626,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1626,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1244,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1245,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1626,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1626,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1246,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1247,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1684,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1676,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1685,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+1629,"din", false,-1, 31,0);
    tracep->declBus(c+393,"dout", false,-1, 31,0);
    tracep->declBit(c+1625,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1676,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1629,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+384,"din", false,-1, 31,0);
    tracep->declBus(c+359,"dout", false,-1, 31,0);
    tracep->declBit(c+388,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1676,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1629,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+382,"din", false,-1, 31,0);
    tracep->declBus(c+355,"dout", false,-1, 31,0);
    tracep->declBit(c+386,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1676,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1686,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+383,"din", false,-1, 31,0);
    tracep->declBus(c+357,"dout", false,-1, 31,0);
    tracep->declBit(c+387,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1676,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1629,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+385,"din", false,-1, 31,0);
    tracep->declBus(c+361,"dout", false,-1, 31,0);
    tracep->declBit(c+389,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1676,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1687,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1564,"rst", false,-1);
    tracep->declBus(c+1629,"din", false,-1, 31,0);
    tracep->declBus(c+392,"dout", false,-1, 31,0);
    tracep->declBit(c+1625,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"io_d", false,-1);
    tracep->declBit(c+431,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"io_d", false,-1);
    tracep->declBit(c+431,"io_q", false,-1);
    tracep->declBit(c+431,"sync_0", false,-1);
    tracep->declBit(c+432,"sync_1", false,-1);
    tracep->declBit(c+433,"sync_2", false,-1);
    tracep->declBit(c+434,"sync_3", false,-1);
    tracep->declBit(c+435,"sync_4", false,-1);
    tracep->declBit(c+436,"sync_5", false,-1);
    tracep->declBit(c+437,"sync_6", false,-1);
    tracep->declBit(c+438,"sync_7", false,-1);
    tracep->declBit(c+439,"sync_8", false,-1);
    tracep->declBit(c+440,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1313,"auto_in_psel", false,-1);
    tracep->declBit(c+1314,"auto_in_penable", false,-1);
    tracep->declBit(c+1303,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1254,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1302,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+538,"auto_in_pready", false,-1);
    tracep->declBit(c+1624,"auto_in_pslverr", false,-1);
    tracep->declBus(c+539,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1531,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1532,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1533,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1534,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1535,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1536,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1537,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1538,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1539,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1540,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBus(c+1289,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1313,"in_psel", false,-1);
    tracep->declBit(c+1314,"in_penable", false,-1);
    tracep->declBus(c+1302,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1303,"in_pwrite", false,-1);
    tracep->declBus(c+1304,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+538,"in_pready", false,-1);
    tracep->declBus(c+539,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1624,"in_pslverr", false,-1);
    tracep->declBus(c+1531,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1532,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1533,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1534,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1535,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1536,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1537,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1538,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1539,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1540,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1630,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1688,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1689,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1690,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1691,"ONE", false,-1, 7,0);
    tracep->declBus(c+1692,"TWO", false,-1, 7,0);
    tracep->declBus(c+1693,"THREE", false,-1, 7,0);
    tracep->declBus(c+1694,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1695,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1696,"SIX", false,-1, 7,0);
    tracep->declBus(c+1697,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1698,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1699,"NINE", false,-1, 7,0);
    tracep->declBus(c+1700,"A", false,-1, 7,0);
    tracep->declBus(c+1701,"B", false,-1, 7,0);
    tracep->declBus(c+1702,"C", false,-1, 7,0);
    tracep->declBus(c+1703,"D", false,-1, 7,0);
    tracep->declBus(c+1704,"E", false,-1, 7,0);
    tracep->declBus(c+1705,"F", false,-1, 7,0);
    tracep->declBus(c+546,"led_reg", false,-1, 15,0);
    tracep->declBus(c+547,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+548+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1473,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1474,"write_en", false,-1);
    tracep->declBit(c+1475,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1311,"auto_in_psel", false,-1);
    tracep->declBit(c+1312,"auto_in_penable", false,-1);
    tracep->declBit(c+1303,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1254,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1302,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+536,"auto_in_pready", false,-1);
    tracep->declBit(c+1623,"auto_in_pslverr", false,-1);
    tracep->declBus(c+537,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1541,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1542,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBus(c+1289,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1311,"in_psel", false,-1);
    tracep->declBit(c+1312,"in_penable", false,-1);
    tracep->declBus(c+1302,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1303,"in_pwrite", false,-1);
    tracep->declBus(c+1304,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+536,"in_pready", false,-1);
    tracep->declBus(c+537,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1623,"in_pslverr", false,-1);
    tracep->declBit(c+1541,"ps2_clk", false,-1);
    tracep->declBit(c+1542,"ps2_data", false,-1);
    tracep->declBus(c+1706,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1707,"EXP", false,-1, 7,0);
    tracep->declBus(c+1083,"state", false,-1, 1,0);
    tracep->declBus(c+1084,"counter", false,-1, 3,0);
    tracep->declBus(c+1085,"buffer", false,-1, 7,0);
    tracep->declBus(c+1086,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1087,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1599,"ready", false,-1);
    tracep->declBus(c+1600,"rdata", false,-1, 31,0);
    tracep->declBit(c+1476,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1183,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1184,"auto_in_wvalid", false,-1);
    tracep->declBit(c+157,"auto_in_arready", false,-1);
    tracep->declBit(c+1185,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1115,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1186,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+523,"auto_in_rready", false,-1);
    tracep->declBit(c+158,"auto_in_rvalid", false,-1);
    tracep->declBus(c+159,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"state", false,-1);
    tracep->declBus(c+160,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+159,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1248,"raddr", false,-1, 31,0);
    tracep->declBit(c+1249,"ren", false,-1);
    tracep->declBus(c+1250,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1315,"auto_in_psel", false,-1);
    tracep->declBit(c+1316,"auto_in_penable", false,-1);
    tracep->declBit(c+1303,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1253,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"auto_in_pready", false,-1);
    tracep->declBit(c+1625,"auto_in_pslverr", false,-1);
    tracep->declBus(c+978,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1525,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1526,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1552,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBus(c+1253,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1315,"in_psel", false,-1);
    tracep->declBit(c+1316,"in_penable", false,-1);
    tracep->declBus(c+1302,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1303,"in_pwrite", false,-1);
    tracep->declBus(c+1304,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1555,"in_pready", false,-1);
    tracep->declBus(c+978,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1625,"in_pslverr", false,-1);
    tracep->declBit(c+1525,"qspi_sck", false,-1);
    tracep->declBit(c+1526,"qspi_ce_n", false,-1);
    tracep->declBus(c+1552,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1552,"din", false,-1, 3,0);
    tracep->declBus(c+1527,"dout", false,-1, 3,0);
    tracep->declBus(c+1528,"douten", false,-1, 3,0);
    tracep->declBit(c+1601,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1529,"clk_i", false,-1);
    tracep->declBit(c+1530,"rst_i", false,-1);
    tracep->declBus(c+1253,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1304,"dat_i", false,-1, 31,0);
    tracep->declBus(c+978,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1305,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1315,"cyc_i", false,-1);
    tracep->declBit(c+1315,"stb_i", false,-1);
    tracep->declBit(c+1601,"ack_o", false,-1);
    tracep->declBit(c+1303,"we_i", false,-1);
    tracep->declBit(c+1525,"sck", false,-1);
    tracep->declBit(c+1526,"ce_n", false,-1);
    tracep->declBus(c+1552,"din", false,-1, 3,0);
    tracep->declBus(c+1527,"dout", false,-1, 3,0);
    tracep->declBus(c+1528,"douten", false,-1, 3,0);
    tracep->declBus(c+1673,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1674,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+556,"mr_sck", false,-1);
    tracep->declBit(c+557,"mr_ce_n", false,-1);
    tracep->declBus(c+1552,"mr_din", false,-1, 3,0);
    tracep->declBus(c+558,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+559,"mr_doe", false,-1);
    tracep->declBit(c+560,"mw_sck", false,-1);
    tracep->declBit(c+561,"mw_ce_n", false,-1);
    tracep->declBus(c+1552,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1477,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+562,"mw_doe", false,-1);
    tracep->declBit(c+1478,"mr_rd", false,-1);
    tracep->declBit(c+563,"mr_done", false,-1);
    tracep->declBit(c+1479,"mw_wr", false,-1);
    tracep->declBit(c+1480,"mw_done", false,-1);
    tracep->declBit(c+1315,"wb_valid", false,-1);
    tracep->declBit(c+1481,"wb_we", false,-1);
    tracep->declBit(c+1482,"wb_re", false,-1);
    tracep->declBit(c+564,"state", false,-1);
    tracep->declBit(c+1483,"nstate", false,-1);
    tracep->declBus(c+1484,"size", false,-1, 2,0);
    tracep->declBus(c+1485,"byte0", false,-1, 7,0);
    tracep->declBus(c+1486,"byte1", false,-1, 7,0);
    tracep->declBus(c+1487,"byte2", false,-1, 7,0);
    tracep->declBus(c+1488,"byte3", false,-1, 7,0);
    tracep->declBus(c+1489,"wdata", false,-1, 31,0);
    tracep->declBit(c+819,"qpi_flag", false,-1);
    tracep->declBit(c+820,"qpi_sck", false,-1);
    tracep->declBit(c+821,"qpi_ce_n", false,-1);
    tracep->declBus(c+822,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+823,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+824,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1602,"rst_n", false,-1);
    tracep->declBus(c+1290,"addr", false,-1, 23,0);
    tracep->declBit(c+1478,"rd", false,-1);
    tracep->declBus(c+1708,"size", false,-1, 2,0);
    tracep->declBit(c+563,"done", false,-1);
    tracep->declBus(c+978,"line", false,-1, 31,0);
    tracep->declBit(c+556,"sck", false,-1);
    tracep->declBit(c+557,"ce_n", false,-1);
    tracep->declBus(c+1552,"din", false,-1, 3,0);
    tracep->declBus(c+558,"dout", false,-1, 3,0);
    tracep->declBit(c+559,"douten", false,-1);
    tracep->declBus(c+1673,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1674,"READ", false,-1, 0,0);
    tracep->declBus(c+1709,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+565,"state", false,-1);
    tracep->declBit(c+1490,"nstate", false,-1);
    tracep->declBus(c+566,"counter", false,-1, 7,0);
    tracep->declBus(c+567,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1011+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1710,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+568,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1602,"rst_n", false,-1);
    tracep->declBus(c+1291,"addr", false,-1, 23,0);
    tracep->declBus(c+1489,"line", false,-1, 31,0);
    tracep->declBus(c+1484,"size", false,-1, 2,0);
    tracep->declBit(c+1479,"wr", false,-1);
    tracep->declBit(c+1480,"done", false,-1);
    tracep->declBit(c+560,"sck", false,-1);
    tracep->declBit(c+561,"ce_n", false,-1);
    tracep->declBus(c+1552,"din", false,-1, 3,0);
    tracep->declBus(c+1477,"dout", false,-1, 3,0);
    tracep->declBit(c+562,"douten", false,-1);
    tracep->declBus(c+1673,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1674,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1491,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+569,"state", false,-1);
    tracep->declBit(c+1492,"nstate", false,-1);
    tracep->declBus(c+570,"counter", false,-1, 7,0);
    tracep->declBus(c+571,"saddr", false,-1, 23,0);
    tracep->declBus(c+1711,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1337,"auto_in_awready", false,-1);
    tracep->declBit(c+1124,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1125,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1127,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1338,"auto_in_wready", false,-1);
    tracep->declBit(c+1130,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1339,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"auto_in_wlast", false,-1);
    tracep->declBit(c+508,"auto_in_bready", false,-1);
    tracep->declBit(c+545,"auto_in_bvalid", false,-1);
    tracep->declBus(c+542,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1616,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1336,"auto_in_arready", false,-1);
    tracep->declBit(c+1118,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1119,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1120,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1121,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+507,"auto_in_rready", false,-1);
    tracep->declBit(c+541,"auto_in_rvalid", false,-1);
    tracep->declBus(c+542,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+543,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1616,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+544,"auto_in_rlast", false,-1);
    tracep->declBit(c+1553,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+526,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1016,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1017,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1018,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1019,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1020,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1021,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+527,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1045,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1337,"in_awready", false,-1);
    tracep->declBit(c+1124,"in_awvalid", false,-1);
    tracep->declBus(c+1126,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1125,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1127,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1128,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1129,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1338,"in_wready", false,-1);
    tracep->declBit(c+1130,"in_wvalid", false,-1);
    tracep->declBus(c+1339,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1131,"in_wlast", false,-1);
    tracep->declBit(c+508,"in_bready", false,-1);
    tracep->declBit(c+545,"in_bvalid", false,-1);
    tracep->declBus(c+1616,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+542,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1336,"in_arready", false,-1);
    tracep->declBit(c+1118,"in_arvalid", false,-1);
    tracep->declBus(c+1120,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1119,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1121,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1122,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1123,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+507,"in_rready", false,-1);
    tracep->declBit(c+541,"in_rvalid", false,-1);
    tracep->declBus(c+1616,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+543,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+544,"in_rlast", false,-1);
    tracep->declBus(c+542,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1553,"sdram_clk", false,-1);
    tracep->declBit(c+526,"sdram_cke", false,-1);
    tracep->declBit(c+1016,"sdram_cs", false,-1);
    tracep->declBit(c+1017,"sdram_ras", false,-1);
    tracep->declBit(c+1018,"sdram_cas", false,-1);
    tracep->declBit(c+1019,"sdram_we", false,-1);
    tracep->declBus(c+1020,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1021,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+527,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1045,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+572,"sdram_dout_en", false,-1);
    tracep->declBus(c+573,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1529,"clk_i", false,-1);
    tracep->declBit(c+1530,"rst_i", false,-1);
    tracep->declBit(c+1124,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1126,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1125,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1127,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1129,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1130,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1339,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1340,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1131,"inport_wlast_i", false,-1);
    tracep->declBit(c+508,"inport_bready_i", false,-1);
    tracep->declBit(c+1118,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1120,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1119,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1121,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1123,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+507,"inport_rready_i", false,-1);
    tracep->declBus(c+1046,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+1337,"inport_awready_o", false,-1);
    tracep->declBit(c+1338,"inport_wready_o", false,-1);
    tracep->declBit(c+545,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1616,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+542,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1336,"inport_arready_o", false,-1);
    tracep->declBit(c+541,"inport_rvalid_o", false,-1);
    tracep->declBus(c+543,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1616,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+542,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+544,"inport_rlast_o", false,-1);
    tracep->declBit(c+1553,"sdram_clk_o", false,-1);
    tracep->declBit(c+526,"sdram_cke_o", false,-1);
    tracep->declBit(c+1016,"sdram_cs_o", false,-1);
    tracep->declBit(c+1017,"sdram_ras_o", false,-1);
    tracep->declBit(c+1018,"sdram_cas_o", false,-1);
    tracep->declBit(c+1019,"sdram_we_o", false,-1);
    tracep->declBus(c+574,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+1020,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1021,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+575,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+572,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1712,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1713,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1714,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1664,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1493,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1494,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1495,"ram_rd_w", false,-1);
    tracep->declBit(c+1022,"ram_accept_w", false,-1);
    tracep->declBus(c+1339,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+576,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1251,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+577,"ram_ack_w", false,-1);
    tracep->declBit(c+1625,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1529,"clk_i", false,-1);
    tracep->declBit(c+1530,"rst_i", false,-1);
    tracep->declBit(c+1124,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1126,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1125,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1127,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1129,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1130,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1339,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1340,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1131,"axi_wlast_i", false,-1);
    tracep->declBit(c+508,"axi_bready_i", false,-1);
    tracep->declBit(c+1118,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1120,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1119,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1121,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1123,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+507,"axi_rready_i", false,-1);
    tracep->declBit(c+1022,"ram_accept_i", false,-1);
    tracep->declBit(c+577,"ram_ack_i", false,-1);
    tracep->declBit(c+1625,"ram_error_i", false,-1);
    tracep->declBus(c+576,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1337,"axi_awready_o", false,-1);
    tracep->declBit(c+1338,"axi_wready_o", false,-1);
    tracep->declBit(c+545,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1616,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+542,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1336,"axi_arready_o", false,-1);
    tracep->declBit(c+541,"axi_rvalid_o", false,-1);
    tracep->declBus(c+543,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1616,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+542,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+544,"axi_rlast_o", false,-1);
    tracep->declBus(c+1494,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1495,"ram_rd_o", false,-1);
    tracep->declBus(c+1251,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1493,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1339,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+578,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+579,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+580,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+581,"req_rd_q", false,-1);
    tracep->declBit(c+582,"req_wr_q", false,-1);
    tracep->declBus(c+583,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+584,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+585,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+586,"req_prio_q", false,-1);
    tracep->declBit(c+587,"req_hold_rd_q", false,-1);
    tracep->declBit(c+588,"req_hold_wr_q", false,-1);
    tracep->declBit(c+589,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1496,"req_push_w", false,-1);
    tracep->declBus(c+1603,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+590,"req_out_valid_w", false,-1);
    tracep->declBus(c+591,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1497,"resp_accept_w", false,-1);
    tracep->declBit(c+592,"resp_is_write_w", false,-1);
    tracep->declBit(c+593,"resp_is_read_w", false,-1);
    tracep->declBit(c+544,"resp_is_last_w", false,-1);
    tracep->declBus(c+542,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+594,"resp_valid_w", false,-1);
    tracep->declBit(c+595,"write_prio_w", false,-1);
    tracep->declBit(c+596,"read_prio_w", false,-1);
    tracep->declBit(c+1498,"write_active_w", false,-1);
    tracep->declBit(c+1495,"read_active_w", false,-1);
    tracep->declBus(c+1493,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1292,"wr_w", false,-1);
    tracep->declBit(c+1495,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1715,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1663,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1664,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1529,"clk_i", false,-1);
    tracep->declBit(c+1530,"rst_i", false,-1);
    tracep->declBus(c+1603,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1496,"push_i", false,-1);
    tracep->declBit(c+1497,"pop_i", false,-1);
    tracep->declBus(c+591,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+589,"accept_o", false,-1);
    tracep->declBit(c+590,"valid_o", false,-1);
    tracep->declBus(c+1665,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+597+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+601,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+602,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+603,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1676,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1663,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1664,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1529,"clk_i", false,-1);
    tracep->declBit(c+1530,"rst_i", false,-1);
    tracep->declBus(c+576,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+577,"push_i", false,-1);
    tracep->declBit(c+1497,"pop_i", false,-1);
    tracep->declBus(c+543,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+604,"accept_o", false,-1);
    tracep->declBit(c+594,"valid_o", false,-1);
    tracep->declBus(c+1665,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+605+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+609,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+610,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+611,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1529,"clk_i", false,-1);
    tracep->declBit(c+1530,"rst_i", false,-1);
    tracep->declBus(c+1494,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1495,"inport_rd_i", false,-1);
    tracep->declBus(c+1251,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1493,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1339,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1047,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1022,"inport_accept_o", false,-1);
    tracep->declBit(c+577,"inport_ack_o", false,-1);
    tracep->declBit(c+1625,"inport_error_o", false,-1);
    tracep->declBus(c+576,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1553,"sdram_clk_o", false,-1);
    tracep->declBit(c+526,"sdram_cke_o", false,-1);
    tracep->declBit(c+1016,"sdram_cs_o", false,-1);
    tracep->declBit(c+1017,"sdram_ras_o", false,-1);
    tracep->declBit(c+1018,"sdram_cas_o", false,-1);
    tracep->declBit(c+1019,"sdram_we_o", false,-1);
    tracep->declBus(c+612,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1020,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1021,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+613,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+572,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1712,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1713,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1714,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1664,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1665,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1663,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1716,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1717,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1718,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1719,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1720,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1663,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1657,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1653,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1655,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1654,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1656,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1652,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1651,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1628,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1721,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1663,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1628,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1651,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1652,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1653,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1654,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1655,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1656,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1657,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1658,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1659,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1722,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1722,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1676,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1722,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1664,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1664,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1715,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1493,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1494,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1495,"ram_rd_w", false,-1);
    tracep->declBit(c+1022,"ram_accept_w", false,-1);
    tracep->declBus(c+1339,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+576,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+577,"ram_ack_w", false,-1);
    tracep->declBit(c+1499,"ram_req_w", false,-1);
    tracep->declBus(c+1023,"command_q", false,-1, 3,0);
    tracep->declBus(c+1020,"addr_q", false,-1, 12,0);
    tracep->declBus(c+613,"data_q", false,-1, 31,0);
    tracep->declBit(c+614,"data_rd_en_q", false,-1);
    tracep->declBus(c+612,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+526,"cke_q", false,-1);
    tracep->declBus(c+1021,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1723,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+615,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1047,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+616,"refresh_q", false,-1);
    tracep->declBus(c+1024,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+617+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1025,"state_q", false,-1, 3,0);
    tracep->declBus(c+1500,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1501,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+625,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+626,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1502,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1503,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1504,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1663,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+627,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1505,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1724,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1026,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+628,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+576,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+629,"idx", false,-1, 31,0);
    tracep->declBus(c+630,"rd_q", false,-1, 3,0);
    tracep->declBit(c+577,"ack_q", false,-1);
    tracep->declArray(c+1027,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1321,"auto_in_psel", false,-1);
    tracep->declBit(c+1322,"auto_in_penable", false,-1);
    tracep->declBit(c+1303,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1310,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1302,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1556,"auto_in_pready", false,-1);
    tracep->declBit(c+1625,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1323,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+524,"spi_bundle_sck", false,-1);
    tracep->declBus(c+525,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1015,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1551,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1725,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1726,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1716,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBus(c+1506,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1321,"in_psel", false,-1);
    tracep->declBit(c+1322,"in_penable", false,-1);
    tracep->declBus(c+1302,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1303,"in_pwrite", false,-1);
    tracep->declBus(c+1304,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1556,"in_pready", false,-1);
    tracep->declBus(c+1323,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1625,"in_pslverr", false,-1);
    tracep->declBit(c+524,"spi_sck", false,-1);
    tracep->declBus(c+525,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1015,"spi_mosi", false,-1);
    tracep->declBit(c+1551,"spi_miso", false,-1);
    tracep->declBit(c+631,"spi_irq_out", false,-1);
    tracep->declBus(c+1507,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1508,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1509,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1510,"wb_we_i", false,-1);
    tracep->declBit(c+1511,"wb_stb_i", false,-1);
    tracep->declBit(c+1512,"wb_cyc_i", false,-1);
    tracep->declBit(c+632,"wb_ack_o", false,-1);
    tracep->declBus(c+633,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1631,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1615,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1727,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1728,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1708,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1729,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1730,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1731,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+441,"state", false,-1, 2,0);
    tracep->declBus(c+442,"next_state", false,-1, 2,0);
    tracep->declBus(c+443,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+444,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+445,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+446,"flash_pwrite", false,-1);
    tracep->declBit(c+447,"flash_psel", false,-1);
    tracep->declBit(c+448,"flash_penable", false,-1);
    tracep->declBit(c+449,"flash_pready", false,-1);
    tracep->declBus(c+450,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1732,"Tp", false,-1, 31,0);
    tracep->declBit(c+1529,"wb_clk_i", false,-1);
    tracep->declBit(c+1530,"wb_rst_i", false,-1);
    tracep->declBus(c+1507,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1508,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+633,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1509,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1510,"wb_we_i", false,-1);
    tracep->declBit(c+1511,"wb_stb_i", false,-1);
    tracep->declBit(c+1512,"wb_cyc_i", false,-1);
    tracep->declBit(c+632,"wb_ack_o", false,-1);
    tracep->declBit(c+1625,"wb_err_o", false,-1);
    tracep->declBit(c+631,"wb_int_o", false,-1);
    tracep->declBus(c+525,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+524,"sclk_pad_o", false,-1);
    tracep->declBit(c+1015,"mosi_pad_o", false,-1);
    tracep->declBit(c+1551,"miso_pad_i", false,-1);
    tracep->declBus(c+634,"divider", false,-1, 15,0);
    tracep->declBus(c+635,"ctrl", false,-1, 13,0);
    tracep->declBus(c+636,"ss", false,-1, 7,0);
    tracep->declBus(c+1513,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+637,"rx", false,-1, 127,0);
    tracep->declBit(c+641,"rx_negedge", false,-1);
    tracep->declBit(c+642,"tx_negedge", false,-1);
    tracep->declBus(c+643,"char_len", false,-1, 6,0);
    tracep->declBit(c+644,"go", false,-1);
    tracep->declBit(c+645,"lsb", false,-1);
    tracep->declBit(c+646,"ie", false,-1);
    tracep->declBit(c+647,"ass", false,-1);
    tracep->declBit(c+1514,"spi_divider_sel", false,-1);
    tracep->declBit(c+1515,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1516,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1517,"spi_ss_sel", false,-1);
    tracep->declBit(c+648,"tip", false,-1);
    tracep->declBit(c+649,"pos_edge", false,-1);
    tracep->declBit(c+650,"neg_edge", false,-1);
    tracep->declBit(c+651,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1732,"Tp", false,-1, 31,0);
    tracep->declBit(c+1529,"clk_in", false,-1);
    tracep->declBit(c+1530,"rst", false,-1);
    tracep->declBit(c+648,"enable", false,-1);
    tracep->declBit(c+644,"go", false,-1);
    tracep->declBit(c+651,"last_clk", false,-1);
    tracep->declBus(c+634,"divider", false,-1, 15,0);
    tracep->declBit(c+524,"clk_out", false,-1);
    tracep->declBit(c+649,"pos_edge", false,-1);
    tracep->declBit(c+650,"neg_edge", false,-1);
    tracep->declBus(c+652,"cnt", false,-1, 15,0);
    tracep->declBit(c+653,"cnt_zero", false,-1);
    tracep->declBit(c+654,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1732,"Tp", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1530,"rst", false,-1);
    tracep->declBus(c+1518,"latch", false,-1, 3,0);
    tracep->declBus(c+1509,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+643,"len", false,-1, 6,0);
    tracep->declBit(c+645,"lsb", false,-1);
    tracep->declBit(c+644,"go", false,-1);
    tracep->declBit(c+649,"pos_edge", false,-1);
    tracep->declBit(c+650,"neg_edge", false,-1);
    tracep->declBit(c+641,"rx_negedge", false,-1);
    tracep->declBit(c+642,"tx_negedge", false,-1);
    tracep->declBit(c+648,"tip", false,-1);
    tracep->declBit(c+651,"last", false,-1);
    tracep->declBus(c+1508,"p_in", false,-1, 31,0);
    tracep->declArray(c+637,"p_out", false,-1, 127,0);
    tracep->declBit(c+524,"s_clk", false,-1);
    tracep->declBit(c+1551,"s_in", false,-1);
    tracep->declBit(c+1015,"s_out", false,-1);
    tracep->declBus(c+655,"cnt", false,-1, 7,0);
    tracep->declArray(c+637,"data", false,-1, 127,0);
    tracep->declBus(c+656,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+657,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+658,"rx_clk", false,-1);
    tracep->declBit(c+659,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1317,"auto_in_psel", false,-1);
    tracep->declBit(c+1318,"auto_in_penable", false,-1);
    tracep->declBit(c+1303,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1254,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1302,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1319,"auto_in_pready", false,-1);
    tracep->declBit(c+1625,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1320,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1549,"uart_rx", false,-1);
    tracep->declBit(c+1550,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1317,"in_psel", false,-1);
    tracep->declBit(c+1318,"in_penable", false,-1);
    tracep->declBus(c+1302,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1319,"in_pready", false,-1);
    tracep->declBit(c+1625,"in_pslverr", false,-1);
    tracep->declBus(c+1289,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1303,"in_pwrite", false,-1);
    tracep->declBus(c+1320,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1304,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1549,"uart_rx", false,-1);
    tracep->declBit(c+1550,"uart_tx", false,-1);
    tracep->declBit(c+660,"rtsn", false,-1);
    tracep->declBit(c+1625,"ctsn", false,-1);
    tracep->declBit(c+661,"dtr_pad_o", false,-1);
    tracep->declBit(c+1625,"dsr_pad_i", false,-1);
    tracep->declBit(c+1625,"ri_pad_i", false,-1);
    tracep->declBit(c+1625,"dcd_pad_i", false,-1);
    tracep->declBit(c+662,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1519,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1520,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+451,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1521,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+663,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1530,"wb_rst_i", false,-1);
    tracep->declBus(c+1519,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1522,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1521,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1550,"stx_pad_o", false,-1);
    tracep->declBit(c+1549,"srx_pad_i", false,-1);
    tracep->declBus(c+1658,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+663,"rts_pad_o", false,-1);
    tracep->declBit(c+661,"dtr_pad_o", false,-1);
    tracep->declBit(c+662,"int_o", false,-1);
    tracep->declBit(c+664,"enable", false,-1);
    tracep->declBit(c+665,"srx_pad", false,-1);
    tracep->declBus(c+666,"ier", false,-1, 3,0);
    tracep->declBus(c+667,"iir", false,-1, 3,0);
    tracep->declBus(c+668,"fcr", false,-1, 1,0);
    tracep->declBus(c+669,"mcr", false,-1, 4,0);
    tracep->declBus(c+670,"lcr", false,-1, 7,0);
    tracep->declBus(c+671,"msr", false,-1, 7,0);
    tracep->declBus(c+672,"dl", false,-1, 15,0);
    tracep->declBus(c+673,"scratch", false,-1, 7,0);
    tracep->declBit(c+674,"start_dlc", false,-1);
    tracep->declBit(c+675,"lsr_mask_d", false,-1);
    tracep->declBit(c+676,"msi_reset", false,-1);
    tracep->declBus(c+677,"dlc", false,-1, 15,0);
    tracep->declBus(c+678,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+679,"rx_reset", false,-1);
    tracep->declBit(c+680,"tx_reset", false,-1);
    tracep->declBit(c+681,"dlab", false,-1);
    tracep->declBit(c+1626,"cts_pad_i", false,-1);
    tracep->declBit(c+1625,"dsr_pad_i", false,-1);
    tracep->declBit(c+1625,"ri_pad_i", false,-1);
    tracep->declBit(c+1625,"dcd_pad_i", false,-1);
    tracep->declBit(c+682,"loopback", false,-1);
    tracep->declBit(c+1625,"cts", false,-1);
    tracep->declBit(c+1626,"dsr", false,-1);
    tracep->declBit(c+1626,"ri", false,-1);
    tracep->declBit(c+1626,"dcd", false,-1);
    tracep->declBit(c+683,"cts_c", false,-1);
    tracep->declBit(c+684,"dsr_c", false,-1);
    tracep->declBit(c+685,"ri_c", false,-1);
    tracep->declBit(c+686,"dcd_c", false,-1);
    tracep->declBus(c+687,"lsr", false,-1, 7,0);
    tracep->declBit(c+688,"lsr0", false,-1);
    tracep->declBit(c+689,"lsr1", false,-1);
    tracep->declBit(c+690,"lsr2", false,-1);
    tracep->declBit(c+691,"lsr3", false,-1);
    tracep->declBit(c+692,"lsr4", false,-1);
    tracep->declBit(c+693,"lsr5", false,-1);
    tracep->declBit(c+694,"lsr6", false,-1);
    tracep->declBit(c+695,"lsr7", false,-1);
    tracep->declBit(c+696,"lsr0r", false,-1);
    tracep->declBit(c+697,"lsr1r", false,-1);
    tracep->declBit(c+698,"lsr2r", false,-1);
    tracep->declBit(c+699,"lsr3r", false,-1);
    tracep->declBit(c+700,"lsr4r", false,-1);
    tracep->declBit(c+701,"lsr5r", false,-1);
    tracep->declBit(c+702,"lsr6r", false,-1);
    tracep->declBit(c+703,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+704,"rls_int", false,-1);
    tracep->declBit(c+705,"rda_int", false,-1);
    tracep->declBit(c+706,"ti_int", false,-1);
    tracep->declBit(c+707,"thre_int", false,-1);
    tracep->declBit(c+708,"ms_int", false,-1);
    tracep->declBit(c+709,"tf_push", false,-1);
    tracep->declBit(c+710,"rf_pop", false,-1);
    tracep->declBus(c+1604,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+711,"rf_error_bit", false,-1);
    tracep->declBit(c+689,"rf_overrun", false,-1);
    tracep->declBit(c+712,"rf_push_pulse", false,-1);
    tracep->declBus(c+713,"rf_count", false,-1, 4,0);
    tracep->declBus(c+714,"tf_count", false,-1, 4,0);
    tracep->declBus(c+715,"tstate", false,-1, 2,0);
    tracep->declBus(c+716,"rstate", false,-1, 3,0);
    tracep->declBus(c+717,"counter_t", false,-1, 9,0);
    tracep->declBit(c+718,"thre_set_en", false,-1);
    tracep->declBus(c+719,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+720,"block_value", false,-1, 7,0);
    tracep->declBit(c+721,"serial_out", false,-1);
    tracep->declBit(c+722,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+723,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+724,"lsr0_d", false,-1);
    tracep->declBit(c+725,"lsr1_d", false,-1);
    tracep->declBit(c+726,"lsr2_d", false,-1);
    tracep->declBit(c+727,"lsr3_d", false,-1);
    tracep->declBit(c+728,"lsr4_d", false,-1);
    tracep->declBit(c+729,"lsr5_d", false,-1);
    tracep->declBit(c+730,"lsr6_d", false,-1);
    tracep->declBit(c+731,"lsr7_d", false,-1);
    tracep->declBit(c+732,"rls_int_d", false,-1);
    tracep->declBit(c+733,"thre_int_d", false,-1);
    tracep->declBit(c+734,"ms_int_d", false,-1);
    tracep->declBit(c+735,"ti_int_d", false,-1);
    tracep->declBit(c+736,"rda_int_d", false,-1);
    tracep->declBit(c+737,"rls_int_rise", false,-1);
    tracep->declBit(c+738,"thre_int_rise", false,-1);
    tracep->declBit(c+739,"ms_int_rise", false,-1);
    tracep->declBit(c+740,"ti_int_rise", false,-1);
    tracep->declBit(c+741,"rda_int_rise", false,-1);
    tracep->declBit(c+742,"rls_int_pnd", false,-1);
    tracep->declBit(c+743,"rda_int_pnd", false,-1);
    tracep->declBit(c+744,"thre_int_pnd", false,-1);
    tracep->declBit(c+745,"ms_int_pnd", false,-1);
    tracep->declBit(c+746,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1732,"Tp", false,-1, 31,0);
    tracep->declBus(c+1732,"width", false,-1, 31,0);
    tracep->declBus(c+1674,"init_value", false,-1, 0,0);
    tracep->declBit(c+1530,"rst_i", false,-1);
    tracep->declBit(c+1529,"clk_i", false,-1);
    tracep->declBit(c+1625,"stage1_rst_i", false,-1);
    tracep->declBit(c+1626,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1549,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+665,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+747,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1530,"wb_rst_i", false,-1);
    tracep->declBus(c+670,"lcr", false,-1, 7,0);
    tracep->declBit(c+710,"rf_pop", false,-1);
    tracep->declBit(c+722,"srx_pad_i", false,-1);
    tracep->declBit(c+664,"enable", false,-1);
    tracep->declBit(c+679,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+717,"counter_t", false,-1, 9,0);
    tracep->declBus(c+713,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1604,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+689,"rf_overrun", false,-1);
    tracep->declBit(c+711,"rf_error_bit", false,-1);
    tracep->declBus(c+716,"rstate", false,-1, 3,0);
    tracep->declBit(c+712,"rf_push_pulse", false,-1);
    tracep->declBus(c+748,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+749,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+750,"rshift", false,-1, 7,0);
    tracep->declBit(c+751,"rparity", false,-1);
    tracep->declBit(c+752,"rparity_error", false,-1);
    tracep->declBit(c+753,"rframing_error", false,-1);
    tracep->declBit(c+754,"rbit_in", false,-1);
    tracep->declBit(c+755,"rparity_xor", false,-1);
    tracep->declBus(c+756,"counter_b", false,-1, 7,0);
    tracep->declBit(c+757,"rf_push_q", false,-1);
    tracep->declBus(c+758,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+759,"rf_push", false,-1);
    tracep->declBit(c+760,"break_error", false,-1);
    tracep->declBit(c+761,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+762,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+763,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+764,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1628,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1651,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1652,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1653,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1654,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1655,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1656,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1657,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1658,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1659,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1660,"sr_push", false,-1, 3,0);
    tracep->declBus(c+765,"toc_value", false,-1, 9,0);
    tracep->declBus(c+766,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1733,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1734,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1663,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1675,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1530,"wb_rst_i", false,-1);
    tracep->declBit(c+712,"push", false,-1);
    tracep->declBit(c+710,"pop", false,-1);
    tracep->declBus(c+758,"data_in", false,-1, 10,0);
    tracep->declBit(c+679,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1604,"data_out", false,-1, 10,0);
    tracep->declBit(c+689,"overrun", false,-1);
    tracep->declBus(c+713,"count", false,-1, 4,0);
    tracep->declBit(c+711,"error_bit", false,-1);
    tracep->declBus(c+1605,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+767+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+783,"top", false,-1, 3,0);
    tracep->declBus(c+784,"bottom", false,-1, 3,0);
    tracep->declBus(c+785,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+786,"word0", false,-1, 2,0);
    tracep->declBus(c+787,"word1", false,-1, 2,0);
    tracep->declBus(c+788,"word2", false,-1, 2,0);
    tracep->declBus(c+789,"word3", false,-1, 2,0);
    tracep->declBus(c+790,"word4", false,-1, 2,0);
    tracep->declBus(c+791,"word5", false,-1, 2,0);
    tracep->declBus(c+792,"word6", false,-1, 2,0);
    tracep->declBus(c+793,"word7", false,-1, 2,0);
    tracep->declBus(c+794,"word8", false,-1, 2,0);
    tracep->declBus(c+795,"word9", false,-1, 2,0);
    tracep->declBus(c+796,"word10", false,-1, 2,0);
    tracep->declBus(c+797,"word11", false,-1, 2,0);
    tracep->declBus(c+798,"word12", false,-1, 2,0);
    tracep->declBus(c+799,"word13", false,-1, 2,0);
    tracep->declBus(c+800,"word14", false,-1, 2,0);
    tracep->declBus(c+801,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1663,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1716,"data_width", false,-1, 31,0);
    tracep->declBus(c+1734,"depth", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+712,"we", false,-1);
    tracep->declBus(c+783,"a", false,-1, 3,0);
    tracep->declBus(c+784,"dpra", false,-1, 3,0);
    tracep->declBus(c+802,"di", false,-1, 7,0);
    tracep->declBus(c+1605,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+452+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1530,"wb_rst_i", false,-1);
    tracep->declBus(c+670,"lcr", false,-1, 7,0);
    tracep->declBit(c+709,"tf_push", false,-1);
    tracep->declBus(c+1522,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+664,"enable", false,-1);
    tracep->declBit(c+680,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+721,"stx_pad_o", false,-1);
    tracep->declBus(c+715,"tstate", false,-1, 2,0);
    tracep->declBus(c+714,"tf_count", false,-1, 4,0);
    tracep->declBus(c+803,"counter", false,-1, 4,0);
    tracep->declBus(c+804,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+805,"shift_out", false,-1, 6,0);
    tracep->declBit(c+806,"stx_o_tmp", false,-1);
    tracep->declBit(c+807,"parity_xor", false,-1);
    tracep->declBit(c+808,"tf_pop", false,-1);
    tracep->declBit(c+809,"bit_out", false,-1);
    tracep->declBus(c+1522,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1606,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+810,"tf_overrun", false,-1);
    tracep->declBus(c+1631,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1615,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1727,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1728,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1708,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1729,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1716,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1734,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1663,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1675,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+1530,"wb_rst_i", false,-1);
    tracep->declBit(c+709,"push", false,-1);
    tracep->declBit(c+808,"pop", false,-1);
    tracep->declBus(c+1522,"data_in", false,-1, 7,0);
    tracep->declBit(c+680,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1606,"data_out", false,-1, 7,0);
    tracep->declBit(c+810,"overrun", false,-1);
    tracep->declBus(c+714,"count", false,-1, 4,0);
    tracep->declBus(c+811,"top", false,-1, 3,0);
    tracep->declBus(c+812,"bottom", false,-1, 3,0);
    tracep->declBus(c+813,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1663,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1716,"data_width", false,-1, 31,0);
    tracep->declBus(c+1734,"depth", false,-1, 31,0);
    tracep->declBit(c+1529,"clk", false,-1);
    tracep->declBit(c+709,"we", false,-1);
    tracep->declBus(c+811,"a", false,-1, 3,0);
    tracep->declBus(c+812,"dpra", false,-1, 3,0);
    tracep->declBus(c+1522,"di", false,-1, 7,0);
    tracep->declBus(c+1606,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+468+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBit(c+1308,"auto_in_psel", false,-1);
    tracep->declBit(c+1309,"auto_in_penable", false,-1);
    tracep->declBit(c+1303,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1310,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1302,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1304,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+535,"auto_in_pready", false,-1);
    tracep->declBit(c+1621,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1622,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1543,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1544,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1545,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1546,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1547,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1548,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBus(c+1506,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1308,"in_psel", false,-1);
    tracep->declBit(c+1309,"in_penable", false,-1);
    tracep->declBus(c+1302,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1303,"in_pwrite", false,-1);
    tracep->declBus(c+1304,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1305,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+535,"in_pready", false,-1);
    tracep->declBus(c+1622,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1621,"in_pslverr", false,-1);
    tracep->declBus(c+1543,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1544,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1545,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1546,"vga_hsync", false,-1);
    tracep->declBit(c+1547,"vga_vsync", false,-1);
    tracep->declBit(c+1548,"vga_valid", false,-1);
    tracep->declBit(c+1523,"is_write", false,-1);
    tracep->declBus(c+1524,"addr", false,-1, 31,0);
    tracep->declBit(c+535,"ready", false,-1);
    tracep->declBus(c+814,"i", false,-1, 31,0);
    tracep->declBus(c+1735,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1736,"h_active", false,-1, 31,0);
    tracep->declBus(c+1737,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1738,"h_total", false,-1, 31,0);
    tracep->declBus(c+1664,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1739,"v_active", false,-1, 31,0);
    tracep->declBus(c+1740,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1741,"v_total", false,-1, 31,0);
    tracep->declBus(c+815,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+484,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+816,"h_valid", false,-1);
    tracep->declBit(c+485,"v_valid", false,-1);
    tracep->declBus(c+817,"h_addr", false,-1, 9,0);
    tracep->declBus(c+486,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1607,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+524,"sck", false,-1);
    tracep->declBit(c+1030,"ss", false,-1);
    tracep->declBit(c+1015,"mosi", false,-1);
    tracep->declBit(c+972,"miso", false,-1);
    tracep->declBus(c+973,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+974,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+975,"counter", false,-1, 2,0);
    tracep->declBit(c+976,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+524,"sck", false,-1);
    tracep->declBit(c+818,"ss", false,-1);
    tracep->declBit(c+1015,"mosi", false,-1);
    tracep->declBit(c+1608,"miso", false,-1);
    tracep->declBit(c+818,"reset", false,-1);
    tracep->declBus(c+966,"state", false,-1, 2,0);
    tracep->declBus(c+967,"counter", false,-1, 7,0);
    tracep->declBus(c+968,"cmd", false,-1, 7,0);
    tracep->declBus(c+969,"addr", false,-1, 23,0);
    tracep->declBus(c+970,"data", false,-1, 31,0);
    tracep->declBit(c+971,"ren", false,-1);
    tracep->declBus(c+1609,"rdata", false,-1, 31,0);
    tracep->declBus(c+1610,"raddr", false,-1, 31,0);
    tracep->declBus(c+1611,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+971,"valid", false,-1);
    tracep->declBus(c+968,"cmd", false,-1, 7,0);
    tracep->declBus(c+1610,"addr", false,-1, 31,0);
    tracep->declBus(c+1609,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1525,"sck", false,-1);
    tracep->declBit(c+1526,"ce_n", false,-1);
    tracep->declBus(c+1552,"dio", false,-1, 3,0);
    tracep->declBit(c+1526,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+1049,"cmd", false,-1, 7,0);
    tracep->declBus(c+1050,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1051+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1612,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1613,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+1055,"ren", false,-1);
    tracep->declBit(c+1056,"wen", false,-1);
    tracep->declBus(c+1057,"len", false,-1, 7,0);
    tracep->declBus(c+1614,"rdata", false,-1, 31,0);
    tracep->declBus(c+1058,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1525,"clock", false,-1);
    tracep->declBit(c+1055,"ren", false,-1);
    tracep->declBit(c+1056,"wen", false,-1);
    tracep->declBus(c+1049,"cmd", false,-1, 7,0);
    tracep->declBus(c+1058,"saddr", false,-1, 31,0);
    tracep->declBus(c+1614,"rdata", false,-1, 31,0);
    tracep->declBus(c+1059,"wdata", false,-1, 31,0);
    tracep->declBus(c+1057,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1553,"clk", false,-1);
    tracep->declBit(c+526,"cke", false,-1);
    tracep->declBit(c+1016,"cs", false,-1);
    tracep->declBit(c+1017,"ras", false,-1);
    tracep->declBit(c+1018,"cas", false,-1);
    tracep->declBit(c+1019,"we", false,-1);
    tracep->declBus(c+1020,"a", false,-1, 12,0);
    tracep->declBus(c+1031,"ba", false,-1, 1,0);
    tracep->declBus(c+1032,"dqm", false,-1, 1,0);
    tracep->declBus(c+1046,"dq", false,-1, 15,0);
    tracep->declBit(c+1033,"reset", false,-1);
    tracep->declBus(c+894,"state", false,-1, 2,0);
    tracep->declBus(c+895,"counter", false,-1, 7,0);
    tracep->declBus(c+896,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1742,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+897,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+898,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1034,"nop", false,-1);
    tracep->declBit(c+1035,"active", false,-1);
    tracep->declBit(c+1036,"precharge", false,-1);
    tracep->declBit(c+1037,"read", false,-1);
    tracep->declBit(c+1038,"write", false,-1);
    tracep->declBit(c+1039,"burstterm", false,-1);
    tracep->declBit(c+1040,"autorefresh", false,-1);
    tracep->declBit(c+1041,"mode", false,-1);
    tracep->declBus(c+899,"test", false,-1, 15,0);
    tracep->declBit(c+900,"write_burst_mode", false,-1);
    tracep->declBus(c+901,"op_mode", false,-1, 1,0);
    tracep->declBus(c+902,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+903,"burst_type", false,-1);
    tracep->declBus(c+904,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+905,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+906,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+907,"bank", false,-1, 1,0);
    tracep->declBus(c+908,"row", false,-1, 12,0);
    tracep->declBus(c+909,"column", false,-1, 8,0);
    tracep->declBus(c+910,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+911,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1553,"clk", false,-1);
    tracep->declBit(c+526,"cke", false,-1);
    tracep->declBit(c+1016,"cs", false,-1);
    tracep->declBit(c+1017,"ras", false,-1);
    tracep->declBit(c+1018,"cas", false,-1);
    tracep->declBit(c+1019,"we", false,-1);
    tracep->declBus(c+1020,"a", false,-1, 12,0);
    tracep->declBus(c+1031,"ba", false,-1, 1,0);
    tracep->declBus(c+1042,"dqm", false,-1, 1,0);
    tracep->declBus(c+1048,"dq", false,-1, 15,0);
    tracep->declBit(c+1033,"reset", false,-1);
    tracep->declBus(c+912,"state", false,-1, 2,0);
    tracep->declBus(c+913,"counter", false,-1, 7,0);
    tracep->declBus(c+914,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1743,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+915,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+916,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1034,"nop", false,-1);
    tracep->declBit(c+1035,"active", false,-1);
    tracep->declBit(c+1036,"precharge", false,-1);
    tracep->declBit(c+1037,"read", false,-1);
    tracep->declBit(c+1038,"write", false,-1);
    tracep->declBit(c+1039,"burstterm", false,-1);
    tracep->declBit(c+1040,"autorefresh", false,-1);
    tracep->declBit(c+1041,"mode", false,-1);
    tracep->declBus(c+917,"test", false,-1, 15,0);
    tracep->declBit(c+918,"write_burst_mode", false,-1);
    tracep->declBus(c+919,"op_mode", false,-1, 1,0);
    tracep->declBus(c+920,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+921,"burst_type", false,-1);
    tracep->declBus(c+922,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+923,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+924,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+925,"bank", false,-1, 1,0);
    tracep->declBus(c+926,"row", false,-1, 12,0);
    tracep->declBus(c+927,"column", false,-1, 8,0);
    tracep->declBus(c+928,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+929,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1553,"clk", false,-1);
    tracep->declBit(c+526,"cke", false,-1);
    tracep->declBit(c+1016,"cs", false,-1);
    tracep->declBit(c+1017,"ras", false,-1);
    tracep->declBit(c+1018,"cas", false,-1);
    tracep->declBit(c+1019,"we", false,-1);
    tracep->declBus(c+1020,"a", false,-1, 12,0);
    tracep->declBus(c+1031,"ba", false,-1, 1,0);
    tracep->declBus(c+1043,"dqm", false,-1, 1,0);
    tracep->declBus(c+1046,"dq", false,-1, 15,0);
    tracep->declBit(c+1033,"reset", false,-1);
    tracep->declBus(c+930,"state", false,-1, 2,0);
    tracep->declBus(c+931,"counter", false,-1, 7,0);
    tracep->declBus(c+932,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1744,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+933,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+934,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1034,"nop", false,-1);
    tracep->declBit(c+1035,"active", false,-1);
    tracep->declBit(c+1036,"precharge", false,-1);
    tracep->declBit(c+1037,"read", false,-1);
    tracep->declBit(c+1038,"write", false,-1);
    tracep->declBit(c+1039,"burstterm", false,-1);
    tracep->declBit(c+1040,"autorefresh", false,-1);
    tracep->declBit(c+1041,"mode", false,-1);
    tracep->declBus(c+935,"test", false,-1, 15,0);
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
    tracep->declBus(c+947,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1553,"clk", false,-1);
    tracep->declBit(c+526,"cke", false,-1);
    tracep->declBit(c+1016,"cs", false,-1);
    tracep->declBit(c+1017,"ras", false,-1);
    tracep->declBit(c+1018,"cas", false,-1);
    tracep->declBit(c+1019,"we", false,-1);
    tracep->declBus(c+1020,"a", false,-1, 12,0);
    tracep->declBus(c+1031,"ba", false,-1, 1,0);
    tracep->declBus(c+1044,"dqm", false,-1, 1,0);
    tracep->declBus(c+1048,"dq", false,-1, 15,0);
    tracep->declBit(c+1033,"reset", false,-1);
    tracep->declBus(c+948,"state", false,-1, 2,0);
    tracep->declBus(c+949,"counter", false,-1, 7,0);
    tracep->declBus(c+950,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1745,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+951,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+952,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1034,"nop", false,-1);
    tracep->declBit(c+1035,"active", false,-1);
    tracep->declBit(c+1036,"precharge", false,-1);
    tracep->declBit(c+1037,"read", false,-1);
    tracep->declBit(c+1038,"write", false,-1);
    tracep->declBit(c+1039,"burstterm", false,-1);
    tracep->declBit(c+1040,"autorefresh", false,-1);
    tracep->declBit(c+1041,"mode", false,-1);
    tracep->declBus(c+953,"test", false,-1, 15,0);
    tracep->declBit(c+954,"write_burst_mode", false,-1);
    tracep->declBus(c+955,"op_mode", false,-1, 1,0);
    tracep->declBus(c+956,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+957,"burst_type", false,-1);
    tracep->declBus(c+958,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+959,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+960,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+961,"bank", false,-1, 1,0);
    tracep->declBus(c+962,"row", false,-1, 12,0);
    tracep->declBus(c+963,"column", false,-1, 8,0);
    tracep->declBus(c+964,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+965,"rdqm_reg", false,-1, 1,0);
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
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_reg));
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd_reg),5);
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs1_reg),5);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs2_reg),5);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg),32);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7_reg),7);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__shamt_reg),5);
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_ready_reg));
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_reg),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__gpr_wen_reg));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__xrd_reg),32);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rd_reg),5);
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__gpr_wen_reg));
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ram_rdata_reg),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+486,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+487,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                       << 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0)
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                  << 0x10U)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0)
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                   << 0x18U)
                                                   : 0U))))),32);
    bufp->fullIData(oldp+488,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+489,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+490,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+491,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+492,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+493,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+494,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+495,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg))))));
    bufp->fullCData(oldp+496,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+497,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullCData(oldp+498,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
                                                  : 0U))))
                                : 0U)),2);
    bufp->fullBit(oldp+499,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+500,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullBit(oldp+501,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+502,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))));
    bufp->fullCData(oldp+503,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+504,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullCData(oldp+505,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
                                                  : 0U))))
                                : 0U)),2);
    bufp->fullBit(oldp+506,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))));
    bufp->fullBit(oldp+507,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                          >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))))));
    bufp->fullBit(oldp+508,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                          >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))))));
    bufp->fullBit(oldp+509,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))))));
    bufp->fullBit(oldp+510,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullCData(oldp+511,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),4);
    bufp->fullCData(oldp+512,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullCData(oldp+513,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
                                              : 0U))))),2);
    bufp->fullBit(oldp+514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready)))));
    bufp->fullBit(oldp+515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))))));
    bufp->fullBit(oldp+516,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+517,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+518,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+519,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+520,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullCData(oldp+521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                   << 1U)))))
                                : 0U)),2);
    bufp->fullBit(oldp+522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+523,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+527,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),4);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+540,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+542,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+544,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullSData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+558,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+559,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+562,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+563,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+568,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+573,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q)),32);
    bufp->fullCData(oldp+574,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullSData(oldp+575,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q)),16);
    bufp->fullIData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+589,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+590,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+592,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+593,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+594,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+595,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+596,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+604,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+641,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+642,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+643,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+644,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+645,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+646,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+647,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+651,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+653,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+654,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+656,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+660,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+661,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+663,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+681,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+682,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+683,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+684,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+685,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+686,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+687,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+690,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+691,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+692,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+711,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+718,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+737,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+738,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+739,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+740,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+741,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+760,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+761,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+762,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+763,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+764,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+766,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+785,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+802,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+813,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+817,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullIData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state),2);
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__a_reg),32);
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__b_reg),32);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__opcode_reg),4);
    bufp->fullQData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[0]),32);
    bufp->fullIData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[1]),32);
    bufp->fullIData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[2]),32);
    bufp->fullIData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[3]),32);
    bufp->fullIData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[4]),32);
    bufp->fullIData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[5]),32);
    bufp->fullIData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[6]),32);
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[7]),32);
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[8]),32);
    bufp->fullIData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[9]),32);
    bufp->fullIData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[10]),32);
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[11]),32);
    bufp->fullIData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[12]),32);
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[13]),32);
    bufp->fullIData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[14]),32);
    bufp->fullIData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[15]),32);
    bufp->fullIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[0]),29);
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[1]),29);
    bufp->fullIData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[2]),29);
    bufp->fullIData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[3]),29);
    bufp->fullIData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[4]),29);
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[5]),29);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[6]),29);
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[7]),29);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[8]),29);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[9]),29);
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[10]),29);
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[11]),29);
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[12]),29);
    bufp->fullIData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[13]),29);
    bufp->fullIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[14]),29);
    bufp->fullIData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[15]),29);
    bufp->fullSData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg),16);
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_arready));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rvalid));
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rresp),2);
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__k),32);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+896,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+897,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+898,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+899,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+900,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+901,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+902,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+903,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+904,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+906,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+908,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+909,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+914,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+915,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+916,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+917,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+918,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+919,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+920,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+921,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+922,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+924,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+926,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+927,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+932,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+933,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+934,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+935,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+936,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+937,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+938,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+939,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+940,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__read_cnt),8);
    bufp->fullCData(oldp+942,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+944,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+945,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+950,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+951,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+952,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+953,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+954,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+955,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+956,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+957,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+958,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__read_cnt),8);
    bufp->fullCData(oldp+960,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+962,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+963,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+969,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+971,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+977,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+978,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_valid_reg));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_ready));
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg),7);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg),3);
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_read_reg));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_write_reg));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+987,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullIData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+990,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                         ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                  ? 0xfU
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                    & (1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                     ? 0xeU
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                      & (0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                      ? 4U
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                       & (1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                       ? 0xcU
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                        & (2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                        ? 0xcU
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                         & (0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                         ? 8U
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                          & (1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                          ? 8U
                                                          : 
                                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                           & (2U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                           ? 8U
                                                           : 0U))))))))))))),4);
    bufp->fullCData(oldp+991,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+992,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hfe131fa2__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he5392cc7__0))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_start));
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_valid));
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__sel),4);
    bufp->fullIData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__x),32);
    bufp->fullIData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__y),32);
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullBit(oldp+1001,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6f2fd84__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+1003,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6e6f338__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullBit(oldp+1005,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+1006,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+1008,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                              | ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                 | ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                    | ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                       | ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                          | ((0xfU 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                             | ((0x73U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                                | ((0x33U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                                   | (3U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))))))))))));
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1016,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1017,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1018,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1019,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+1031,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+1036,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+1042,((3U & (- (IData)((1U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                                    >> 2U)))))),2);
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+1044,((3U & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                                     >> 2U))))))),2);
    bufp->fullIData(oldp+1045,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                 << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+1046,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT___dq_wire),32);
    bufp->fullSData(oldp+1048,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+1059,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [0U])))),32);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullCData(oldp+1063,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),7);
    bufp->fullCData(oldp+1064,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h93150a1e__0) 
                                 | ((0x6fU == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                    | ((0x67U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                       | ((3U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                          | ((0x13U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                             | ((0xfU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                                | ((0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                                   | (0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)))))))))
                                 ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                             >> 7U))
                                 : 0U)),5);
    bufp->fullCData(oldp+1065,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1066,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hba9f6ca3__0) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0))
                                 ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                             >> 0xfU))
                                 : 0U)),5);
    bufp->fullCData(oldp+1067,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0)
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                             >> 0x14U)
                                          : ((IData)(
                                                     ((0x73U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                                      & (0U 
                                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)))
                                              ? 0xfU
                                              : 0U)))),5);
    bufp->fullIData(oldp+1068,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1069,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),32);
    bufp->fullIData(oldp+1070,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1071,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                             >> 0x1fU))) 
                                 << 0xdU) | ((0x1000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                         >> 7U))))))),32);
    bufp->fullIData(oldp+1072,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                             >> 0x1fU))) 
                                 << 0x15U) | ((0x100000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                  >> 0xbU)) 
                                              | ((0xff000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                          >> 0x14U))))))),32);
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1074,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                 | (0x13U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)))
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                    >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+1075,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rdata),32);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_ready_reg));
    bufp->fullIData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullIData(oldp+1092,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr 
                                >> 3U)),29);
    bufp->fullBit(oldp+1093,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr 
                                    >> 2U))));
    bufp->fullCData(oldp+1094,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr)),2);
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata),32);
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_valid_reg));
    bufp->fullIData(oldp+1099,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? 0U : 0U)),32);
    bufp->fullBit(oldp+1100,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast))));
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state),2);
    bufp->fullIData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rdata),32);
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__fetch_start));
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1119,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0))),4);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[0U]),32);
    bufp->fullCData(oldp+1121,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0)),8);
    bufp->fullCData(oldp+1122,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0))),3);
    bufp->fullCData(oldp+1123,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0))),2);
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1125,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0))),4);
    bufp->fullIData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[0U]),32);
    bufp->fullCData(oldp+1127,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0)),8);
    bufp->fullCData(oldp+1128,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0))),3);
    bufp->fullCData(oldp+1129,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0))),2);
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1131,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4bf6bf2a__0))));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1136,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1138,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1140,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1156,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1157,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1158,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1159,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1160,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1161,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1162,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1163,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0))));
    bufp->fullBit(oldp+1164,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0))));
    bufp->fullBit(oldp+1165,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0))));
    bufp->fullBit(oldp+1166,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0))));
    bufp->fullBit(oldp+1167,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0))));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1172,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0))))),16);
    bufp->fullSData(oldp+1173,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0))))),16);
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1183,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1184,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1185,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1186,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1191,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1193,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1194,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[2U]),32);
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]),32);
    bufp->fullCData(oldp+1205,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1206,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1207,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1208,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1209,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1210,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1211,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1212,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1213,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1214,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1215,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1216,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1217,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1218,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4bf6bf2a__0) 
                                    >> 2U))));
    bufp->fullCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),8);
    bufp->fullIData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1230,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1231,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[1U]),32);
    bufp->fullIData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[1U]),32);
    bufp->fullCData(oldp+1235,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1236,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1237,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1238,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1239,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1240,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1241,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1242,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1243,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1244,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1245,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1246,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1247,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4bf6bf2a__0) 
                                    >> 1U))));
    bufp->fullIData(oldp+1248,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1251,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0
                                              : 0U)))),8);
    bufp->fullCData(oldp+1252,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h8012a116__0)
                                 : 0U)),4);
    bufp->fullIData(oldp+1253,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1254,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullBit(oldp+1255,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1256,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1257,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1258,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1259,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1260,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1261,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1262,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1263,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1264,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1265,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1266,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1267,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1268,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1269,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1270,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1271,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1272,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1273,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1274,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1275,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1276,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1277,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1278,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1279,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1280,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1281,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1282,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1283,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1284,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1285,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1286,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1287,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1288,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1289,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1290,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1291,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullBit(oldp+1292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullIData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg),32);
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc_reg),32);
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_valid_reg));
    bufp->fullIData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex),32);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1302,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1307,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1308,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1309,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1311,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1313,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1314,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1316,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1319,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1320,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1321,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1326,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1329,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullIData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullIData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[0U]),32);
    bufp->fullCData(oldp+1340,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0))),4);
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullSData(oldp+1376,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1377,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1400,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1401,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1423,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1424,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1425,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1426,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1427,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1428,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1429,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1430,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1431,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1432,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1433,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1434,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1435,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1436,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1437,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1438,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1439,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1440,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1441,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1442,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1443,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1444,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1445,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1446,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1447,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1448,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1449,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1450,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1451,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1452,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1453,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1454,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata),32);
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rvalid));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wready));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullIData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[2U]),32);
    bufp->fullCData(oldp+1465,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 8U))),4);
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullIData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[1U]),32);
    bufp->fullCData(oldp+1472,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 4U))),4);
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
    bufp->fullIData(oldp+1489,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1491,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1502,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1503,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1504,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1517,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1524,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1525,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1529,(vlSelf->clock));
    bufp->fullBit(oldp+1530,(vlSelf->reset));
    bufp->fullSData(oldp+1531,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1532,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1533,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1534,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1535,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1536,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1537,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1538,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1539,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1540,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1541,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1542,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1543,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1544,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1545,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1546,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1547,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1548,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1549,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1550,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1551,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1552,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1553,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1554,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1555,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1556,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1558,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullIData(oldp+1559,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1560,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1561,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4bf6bf2a__0)))));
    bufp->fullIData(oldp+1562,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]
                                            : 0U))),32);
    bufp->fullCData(oldp+1563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                      : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U))
                                 : 0U)),2);
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_ready_reg));
    bufp->fullIData(oldp+1566,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata
                                 : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rdata
                                     : 0U))),32);
    bufp->fullCData(oldp+1567,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                     : 0U) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bid)
                                               : 0U))),4);
    bufp->fullCData(oldp+1568,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                     : 0U) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rid)
                                               : 0U))),4);
    bufp->fullCData(oldp+1569,((3U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                       ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
                                                    : 0U)))
                                           : 0U) : 
                                      ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bresp)
                                        : 0U)))),2);
    bufp->fullCData(oldp+1570,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                   : 0U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                      ? 0U
                                                      : 3U)
                                                     : 0U))
                                                 : 0U)))
                                     : 0U) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rresp)
                                               : 0U))),2);
    bufp->fullBit(oldp+1571,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_awready)))));
    bufp->fullBit(oldp+1572,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_wready)))));
    bufp->fullBit(oldp+1573,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bvalid)))));
    bufp->fullBit(oldp+1574,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rlast)))));
    bufp->fullIData(oldp+1575,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr
                                 : 0U)),32);
    bufp->fullCData(oldp+1576,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen)
                                 : 0U)),8);
    bufp->fullCData(oldp+1577,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid)
                                 : 0U)),4);
    bufp->fullCData(oldp+1578,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize)
                                 : 0U)),3);
    bufp->fullCData(oldp+1579,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst)
                                 : 0U)),2);
    bufp->fullCData(oldp+1580,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                  : 0U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U))
                                             : 0U)))
                                 : 0U)),2);
    bufp->fullBit(oldp+1581,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullIData(oldp+1582,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0)
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                            << 8U) : 
                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0)
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                             << 0x10U)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0)
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                 << 0x18U)
                                              : 0U))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1583,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1584,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                     & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                     ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                              ? 3U : 
                                             (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                               ? 0xfU
                                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                    & (1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hd73aab7d__0) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                     ? 0xeU
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                      & (0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                      ? 4U
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                       & (1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                       ? 0xcU
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9b52bd86__0) 
                                                        & (2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                        ? 0xcU
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                         & (0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                         ? 8U
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                          & (1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                          ? 8U
                                                          : 
                                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha4709846__0) 
                                                           & (2U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                                           ? 8U
                                                           : 0U))))))))))))
                                 : 0U)),4);
    bufp->fullCData(oldp+1585,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                  : 0U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U))
                                             : 0U)))
                                 : 0U)),2);
    bufp->fullBit(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_done_reg));
    bufp->fullIData(oldp+1587,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                                >> 2U)))) 
                                 & ((- (IData)((0x2000000U 
                                                == 
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime))) 
                                | ((- (IData)((0x2000004U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullCData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1589,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),2);
    bufp->fullCData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1596,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                              : 0U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U))
                                         : 0U)))),2);
    bufp->fullCData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__next_state),2);
    bufp->fullIData(oldp+1598,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1601,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1602,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1603,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))
                                 ? (0x20U | (((0U == 
                                               (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0)) 
                                              << 4U) 
                                             | (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0))))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready))
                                     ? (((0U == (0xffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0)) 
                                         << 4U) | (0xfU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0)))
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                         << 5U) | (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullSData(oldp+1604,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1607,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1608,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1610,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1612,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1613,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1615,(1U),3);
    bufp->fullCData(oldp+1616,(0U),2);
    bufp->fullCData(oldp+1617,(1U),2);
    bufp->fullCData(oldp+1618,(2U),2);
    bufp->fullCData(oldp+1619,(3U),2);
    bufp->fullSData(oldp+1620,(0xaU),11);
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1625,(0U));
    bufp->fullBit(oldp+1626,(1U));
    bufp->fullBit(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1628,(0U),4);
    bufp->fullIData(oldp+1629,(0U),32);
    bufp->fullCData(oldp+1630,(0U),8);
    bufp->fullCData(oldp+1631,(0U),3);
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1642,(0U),32);
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1644,(0U));
    bufp->fullCData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1647,(0x2000000U),32);
    bufp->fullIData(oldp+1648,(0x2000004U),32);
    bufp->fullIData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullCData(oldp+1651,(1U),4);
    bufp->fullCData(oldp+1652,(2U),4);
    bufp->fullCData(oldp+1653,(3U),4);
    bufp->fullCData(oldp+1654,(4U),4);
    bufp->fullCData(oldp+1655,(5U),4);
    bufp->fullCData(oldp+1656,(6U),4);
    bufp->fullCData(oldp+1657,(7U),4);
    bufp->fullCData(oldp+1658,(8U),4);
    bufp->fullCData(oldp+1659,(9U),4);
    bufp->fullCData(oldp+1660,(0xaU),4);
    bufp->fullCData(oldp+1661,(0xbU),4);
    bufp->fullCData(oldp+1662,(0xcU),4);
    bufp->fullIData(oldp+1663,(4U),32);
    bufp->fullIData(oldp+1664,(2U),32);
    bufp->fullIData(oldp+1665,(3U),32);
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_awready));
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_wready));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bvalid));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rlast));
    bufp->fullCData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bresp),2);
    bufp->fullCData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bid),4);
    bufp->fullCData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rid),4);
    bufp->fullBit(oldp+1673,(0U));
    bufp->fullBit(oldp+1674,(1U));
    bufp->fullIData(oldp+1675,(5U),32);
    bufp->fullIData(oldp+1676,(0x20U),32);
    bufp->fullIData(oldp+1677,(0x1000000U),32);
    bufp->fullIData(oldp+1678,(0x1000004U),32);
    bufp->fullCData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1685,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1686,(0x1800U),32);
    bufp->fullIData(oldp+1687,(0x79737978U),32);
    bufp->fullCData(oldp+1688,(4U),8);
    bufp->fullCData(oldp+1689,(8U),8);
    bufp->fullCData(oldp+1690,(3U),8);
    bufp->fullCData(oldp+1691,(0x9fU),8);
    bufp->fullCData(oldp+1692,(0x25U),8);
    bufp->fullCData(oldp+1693,(0xdU),8);
    bufp->fullCData(oldp+1694,(0x99U),8);
    bufp->fullCData(oldp+1695,(0x49U),8);
    bufp->fullCData(oldp+1696,(0x41U),8);
    bufp->fullCData(oldp+1697,(0x1fU),8);
    bufp->fullCData(oldp+1698,(1U),8);
    bufp->fullCData(oldp+1699,(9U),8);
    bufp->fullCData(oldp+1700,(0x11U),8);
    bufp->fullCData(oldp+1701,(0xc1U),8);
    bufp->fullCData(oldp+1702,(0x63U),8);
    bufp->fullCData(oldp+1703,(0x85U),8);
    bufp->fullCData(oldp+1704,(0x61U),8);
    bufp->fullCData(oldp+1705,(0x71U),8);
    bufp->fullCData(oldp+1706,(0xf0U),8);
    bufp->fullCData(oldp+1707,(0xe0U),8);
    bufp->fullCData(oldp+1708,(4U),3);
    bufp->fullCData(oldp+1709,(0x15U),8);
    bufp->fullCData(oldp+1710,(0xebU),8);
    bufp->fullCData(oldp+1711,(0x38U),8);
    bufp->fullIData(oldp+1712,(0x64U),32);
    bufp->fullIData(oldp+1713,(0x18U),32);
    bufp->fullIData(oldp+1714,(9U),32);
    bufp->fullIData(oldp+1715,(6U),32);
    bufp->fullIData(oldp+1716,(8U),32);
    bufp->fullIData(oldp+1717,(0xdU),32);
    bufp->fullIData(oldp+1718,(0x2000U),32);
    bufp->fullIData(oldp+1719,(0x2710U),32);
    bufp->fullIData(oldp+1720,(0x30cU),32);
    bufp->fullSData(oldp+1721,(0x20U),13);
    bufp->fullIData(oldp+1722,(0xaU),32);
    bufp->fullIData(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1724,(0x11U),32);
    bufp->fullIData(oldp+1725,(0x30000000U),32);
    bufp->fullIData(oldp+1726,(0x3fffffffU),32);
    bufp->fullCData(oldp+1727,(2U),3);
    bufp->fullCData(oldp+1728,(3U),3);
    bufp->fullCData(oldp+1729,(5U),3);
    bufp->fullCData(oldp+1730,(6U),3);
    bufp->fullCData(oldp+1731,(7U),3);
    bufp->fullIData(oldp+1732,(1U),32);
    bufp->fullIData(oldp+1733,(0xbU),32);
    bufp->fullIData(oldp+1734,(0x10U),32);
    bufp->fullIData(oldp+1735,(0x60U),32);
    bufp->fullIData(oldp+1736,(0x90U),32);
    bufp->fullIData(oldp+1737,(0x310U),32);
    bufp->fullIData(oldp+1738,(0x320U),32);
    bufp->fullIData(oldp+1739,(0x23U),32);
    bufp->fullIData(oldp+1740,(0x203U),32);
    bufp->fullIData(oldp+1741,(0x20dU),32);
    bufp->fullSData(oldp+1742,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1743,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1744,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1745,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
