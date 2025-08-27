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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1564,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1565,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1566,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1567,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1568,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1569,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1570,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1571,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1572,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1573,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1574,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1575,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1576,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1577,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1578,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1579,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1580,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1581,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1582,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1583,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1564,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1565,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1566,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1567,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1568,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1569,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1570,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1571,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1572,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1573,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1574,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1575,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1576,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1577,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1578,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1579,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1580,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1581,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1582,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1583,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+538,"spi_sck", false,-1);
    tracep->declBus(c+539,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+980,"spi_mosi", false,-1);
    tracep->declBit(c+1584,"spi_miso", false,-1);
    tracep->declBit(c+1582,"uart_rx", false,-1);
    tracep->declBit(c+1583,"uart_tx", false,-1);
    tracep->declBit(c+1558,"psram_sck", false,-1);
    tracep->declBit(c+1559,"psram_ce_n", false,-1);
    tracep->declBus(c+1585,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1586,"sdram_clk", false,-1);
    tracep->declBit(c+540,"sdram_cke", false,-1);
    tracep->declBit(c+981,"sdram_cs", false,-1);
    tracep->declBit(c+982,"sdram_ras", false,-1);
    tracep->declBit(c+983,"sdram_cas", false,-1);
    tracep->declBit(c+984,"sdram_we", false,-1);
    tracep->declBus(c+985,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+986,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+541,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1010,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1564,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1565,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1566,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1567,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1568,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1569,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1570,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1571,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1572,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1573,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1574,"ps2_clk", false,-1);
    tracep->declBit(c+1575,"ps2_data", false,-1);
    tracep->declBus(c+1576,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1577,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1578,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1579,"vga_hsync", false,-1);
    tracep->declBit(c+1580,"vga_vsync", false,-1);
    tracep->declBit(c+1581,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1132,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1133,"in_psel", false,-1);
    tracep->declBit(c+943,"in_penable", false,-1);
    tracep->declBus(c+1631,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1134,"in_pwrite", false,-1);
    tracep->declBus(c+1135,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1136,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+542,"in_pready", false,-1);
    tracep->declBus(c+543,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+544,"in_pslverr", false,-1);
    tracep->declBus(c+1262,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1324,"out_psel", false,-1);
    tracep->declBit(c+1325,"out_penable", false,-1);
    tracep->declBus(c+1326,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1327,"out_pwrite", false,-1);
    tracep->declBus(c+1328,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1330,"out_pready", false,-1);
    tracep->declBus(c+1587,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1331,"out_pslverr", false,-1);
    tracep->declBus(c+1632,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1633,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1634,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1635,"DELAY", false,-1, 1,0);
    tracep->declBus(c+545,"state", false,-1, 1,0);
    tracep->declBus(c+546,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+547,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+548,"pslverr_reg", false,-1);
    tracep->declBus(c+1636,"r", false,-1, 10,0);
    tracep->declBus(c+1634,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1324,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1325,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1327,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1262,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1330,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1331,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1587,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1332,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1333,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1327,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1334,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1326,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+549,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1637,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1638,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1335,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1336,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1327,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1263,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1326,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+550,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1639,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+551,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1337,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1338,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1327,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1263,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1326,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+552,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1640,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+553,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1339,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1340,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1327,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1262,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1588,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1641,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+944,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1341,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1342,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1327,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1263,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1326,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1343,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1641,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1345,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1346,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1327,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1334,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1326,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1589,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1641,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1347,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1348,"sel_0", false,-1);
    tracep->declBit(c+1349,"sel_1", false,-1);
    tracep->declBit(c+1350,"sel_2", false,-1);
    tracep->declBit(c+1351,"sel_3", false,-1);
    tracep->declBit(c+1352,"sel_4", false,-1);
    tracep->declBit(c+1353,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1137,"auto_in_awready", false,-1);
    tracep->declBit(c+1138,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1139,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1140,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1141,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1137,"auto_in_wready", false,-1);
    tracep->declBit(c+1142,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1143,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1354,"auto_in_bready", false,-1);
    tracep->declBit(c+1355,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1590,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1145,"auto_in_arready", false,-1);
    tracep->declBit(c+1146,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1147,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1148,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1356,"auto_in_rready", false,-1);
    tracep->declBit(c+1357,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1591,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1590,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1133,"auto_out_psel", false,-1);
    tracep->declBit(c+943,"auto_out_penable", false,-1);
    tracep->declBit(c+1134,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1132,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1135,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1136,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+542,"auto_out_pready", false,-1);
    tracep->declBit(c+544,"auto_out_pslverr", false,-1);
    tracep->declBus(c+543,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+943,"nodeOut_penable", false,-1);
    tracep->declBus(c+945,"state", false,-1, 1,0);
    tracep->declBit(c+1145,"accept_read", false,-1);
    tracep->declBit(c+1137,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1134,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+554,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1590,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1357,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1355,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1358,"in_arready", false,-1);
    tracep->declBit(c+1150,"in_arvalid", false,-1);
    tracep->declBus(c+1151,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1152,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1153,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1154,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1359,"in_rready", false,-1);
    tracep->declBit(c+555,"in_rvalid", false,-1);
    tracep->declBus(c+556,"in_rid", false,-1, 3,0);
    tracep->declBus(c+557,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+558,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+559,"in_rlast", false,-1);
    tracep->declBit(c+1360,"in_awready", false,-1);
    tracep->declBit(c+1156,"in_awvalid", false,-1);
    tracep->declBus(c+1157,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1158,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1361,"in_wready", false,-1);
    tracep->declBit(c+1162,"in_wvalid", false,-1);
    tracep->declBus(c+1163,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"in_wlast", false,-1);
    tracep->declBit(c+1362,"in_bready", false,-1);
    tracep->declBit(c+560,"in_bvalid", false,-1);
    tracep->declBus(c+561,"in_bid", false,-1, 3,0);
    tracep->declBus(c+562,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1363,"out_arready", false,-1);
    tracep->declBit(c+1364,"out_arvalid", false,-1);
    tracep->declBus(c+1365,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1366,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1367,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1264,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1368,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1369,"out_rready", false,-1);
    tracep->declBit(c+563,"out_rvalid", false,-1);
    tracep->declBus(c+564,"out_rid", false,-1, 3,0);
    tracep->declBus(c+565,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1632,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+566,"out_rlast", false,-1);
    tracep->declBit(c+1370,"out_awready", false,-1);
    tracep->declBit(c+1371,"out_awvalid", false,-1);
    tracep->declBus(c+1372,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1373,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1374,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1265,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1375,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1376,"out_wready", false,-1);
    tracep->declBit(c+1377,"out_wvalid", false,-1);
    tracep->declBus(c+1266,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"out_wlast", false,-1);
    tracep->declBit(c+1592,"out_bready", false,-1);
    tracep->declBit(c+567,"out_bvalid", false,-1);
    tracep->declBus(c+564,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1632,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1642,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1631,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1643,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1644,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1645,"DELAY", false,-1, 2,0);
    tracep->declBus(c+568,"rstate", false,-1, 2,0);
    tracep->declBus(c+569,"wstate", false,-1, 2,0);
    tracep->declBus(c+570,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+571,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+572,"rvalid_reg", false,-1);
    tracep->declBus(c+573,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+574,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+578,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+579,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+580,"bvalid_reg", false,-1);
    tracep->declBus(c+581,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+582,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1636,"r", false,-1, 10,0);
    tracep->declBus(c+1634,"s", false,-1, 1,0);
    tracep->declBus(c+583,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+1166,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1157,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1158,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+1167,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1163,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_in_wlast", false,-1);
    tracep->declBit(c+1593,"auto_in_bready", false,-1);
    tracep->declBit(c+1378,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1379,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+463,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+1168,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1151,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1153,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1154,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1380,"auto_in_rready", false,-1);
    tracep->declBit(c+1381,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1382,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1594,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1595,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+464,"auto_in_rlast", false,-1);
    tracep->declBit(c+1383,"auto_out_awready", false,-1);
    tracep->declBit(c+1169,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1139,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1140,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1141,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1170,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1384,"auto_out_wready", false,-1);
    tracep->declBit(c+1171,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1143,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"auto_out_wlast", false,-1);
    tracep->declBit(c+1385,"auto_out_bready", false,-1);
    tracep->declBit(c+1386,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1379,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1387,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1388,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1389,"auto_out_arready", false,-1);
    tracep->declBit(c+1173,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1147,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1148,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1174,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1380,"auto_out_rready", false,-1);
    tracep->declBit(c+1381,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1382,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1594,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1595,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+465,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1390,"auto_out_rlast", false,-1);
    tracep->declBit(c+1171,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1391,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1175,"len", false,-1, 7,0);
    tracep->declBus(c+1176,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1177,"len_1", false,-1, 7,0);
    tracep->declBus(c+1178,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1169,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1179,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1180,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1172,"w_last", false,-1);
    tracep->declBit(c+1385,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+1168,"io_enq_valid", false,-1);
    tracep->declBus(c+1151,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1152,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1153,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1154,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1155,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1392,"io_deq_ready", false,-1);
    tracep->declBit(c+1173,"io_deq_valid", false,-1);
    tracep->declBus(c+1147,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1181,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1182,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1149,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1183,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1173,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1393,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1166,"io_enq_valid", false,-1);
    tracep->declBus(c+1157,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1158,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1159,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1160,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1161,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1394,"io_deq_ready", false,-1);
    tracep->declBit(c+1184,"io_deq_valid", false,-1);
    tracep->declBus(c+1139,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1185,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1186,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1141,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1187,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1184,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1395,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1167,"io_enq_valid", false,-1);
    tracep->declBus(c+1163,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1164,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1165,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1396,"io_deq_ready", false,-1);
    tracep->declBit(c+1188,"io_deq_valid", false,-1);
    tracep->declBus(c+1143,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1144,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1596,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1188,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1397,"do_enq", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1398,"auto_in_awready", false,-1);
    tracep->declBit(c+1189,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1139,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1269,"auto_in_wready", false,-1);
    tracep->declBit(c+1191,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1143,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1399,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1400,"auto_in_arready", false,-1);
    tracep->declBit(c+1192,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1147,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1193,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1401,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1400,"nodeIn_arready", false,-1);
    tracep->declBit(c+1398,"nodeIn_awready", false,-1);
    tracep->declBit(c+1194,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1402,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1195,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1402,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1196,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1403,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declBus(c+1143,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1144,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1404,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1197,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1157,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1158,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1270,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1198,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1163,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1199,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1405,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1406,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1597,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1407,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1200,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1151,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1153,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1154,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1201,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1408,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1409,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1598,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1599,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1410,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1360,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1156,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1157,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1158,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1361,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1162,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1163,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1362,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+560,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+561,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+562,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1358,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1150,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1151,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1153,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1154,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1359,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+555,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+556,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+557,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+558,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+559,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1166,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1157,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1158,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1167,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1163,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1593,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1378,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1379,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+463,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1168,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1151,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1153,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1154,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1380,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1381,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1382,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1594,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1595,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+464,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1405,"in_0_bvalid", false,-1);
    tracep->declBit(c+1408,"in_0_rvalid", false,-1);
    tracep->declBit(c+1411,"in_0_wready", false,-1);
    tracep->declBit(c+1412,"in_0_awready", false,-1);
    tracep->declBit(c+1600,"in_0_arready", false,-1);
    tracep->declBit(c+1404,"anonIn_awready", false,-1);
    tracep->declBit(c+1407,"anonIn_arready", false,-1);
    tracep->declBit(c+1202,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1203,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1204,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1205,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1206,"arSel", false,-1, 15,0);
    tracep->declBus(c+1207,"awSel", false,-1, 15,0);
    tracep->declBus(c+1413,"rSel", false,-1, 15,0);
    tracep->declBus(c+1414,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1208,"in_0_arvalid", false,-1);
    tracep->declBit(c+138,"latched", false,-1);
    tracep->declBit(c+1209,"in_0_awvalid", false,-1);
    tracep->declBit(c+1210,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1211,"in_0_wvalid", false,-1);
    tracep->declBit(c+139,"idle_2", false,-1);
    tracep->declBit(c+1415,"anyValid", false,-1);
    tracep->declBus(c+1416,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1417,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1418,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1419,"prefixOR_1", false,-1);
    tracep->declBit(c+1420,"winner_2_1", false,-1);
    tracep->declBit(c+141,"state_2_0", false,-1);
    tracep->declBit(c+142,"state_2_1", false,-1);
    tracep->declBit(c+1421,"muxState_2_0", false,-1);
    tracep->declBit(c+1422,"muxState_2_1", false,-1);
    tracep->declBit(c+143,"idle_3", false,-1);
    tracep->declBit(c+1423,"anyValid_1", false,-1);
    tracep->declBus(c+1424,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+144,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1425,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1426,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1427,"winner_3_0", false,-1);
    tracep->declBit(c+1428,"winner_3_1", false,-1);
    tracep->declBit(c+145,"state_3_0", false,-1);
    tracep->declBit(c+146,"state_3_1", false,-1);
    tracep->declBit(c+466,"muxState_3_0", false,-1);
    tracep->declBit(c+467,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1210,"io_enq_valid", false,-1);
    tracep->declBus(c+1212,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1429,"io_deq_ready", false,-1);
    tracep->declBit(c+1213,"io_deq_valid", false,-1);
    tracep->declBus(c+1214,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+148,"wrap", false,-1);
    tracep->declBit(c+149,"wrap_1", false,-1);
    tracep->declBit(c+150,"maybe_full", false,-1);
    tracep->declBit(c+151,"ptr_match", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+1213,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1430,"do_deq", false,-1);
    tracep->declBit(c+1431,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+149,"R0_addr", false,-1);
    tracep->declBit(c+1646,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declBus(c+154,"R0_data", false,-1, 1,0);
    tracep->declBit(c+148,"W0_addr", false,-1);
    tracep->declBit(c+1431,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declBus(c+1212,"W0_data", false,-1, 1,0);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1432,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1215,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1139,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1140,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1141,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1384,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1171,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1143,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1385,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1386,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1379,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1387,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1433,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1216,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1147,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1148,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1380,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1381,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1382,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1594,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1595,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1390,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1398,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1189,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1139,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1269,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1191,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1143,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1399,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1400,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1192,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1147,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1193,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1401,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1217,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1218,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+157,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1219,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1147,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1220,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+468,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+158,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+159,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1137,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1138,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1139,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1140,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1141,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1137,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1142,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1143,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1354,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1355,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1590,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1145,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1146,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1147,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1148,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1356,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1357,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1591,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1590,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1386,"in_0_bvalid", false,-1);
    tracep->declBit(c+1381,"in_0_rvalid", false,-1);
    tracep->declBit(c+1434,"in_0_wready", false,-1);
    tracep->declBit(c+1435,"in_0_awready", false,-1);
    tracep->declBit(c+1433,"in_0_arready", false,-1);
    tracep->declBit(c+1432,"anonIn_awready", false,-1);
    tracep->declBit(c+1221,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1222,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1223,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1224,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1225,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1226,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1227,"arSel", false,-1, 15,0);
    tracep->declBus(c+1228,"awSel", false,-1, 15,0);
    tracep->declBus(c+1436,"rSel", false,-1, 15,0);
    tracep->declBus(c+1437,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1229,"in_0_awvalid", false,-1);
    tracep->declBit(c+1230,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1231,"in_0_wvalid", false,-1);
    tracep->declBit(c+194,"idle_3", false,-1);
    tracep->declBit(c+1438,"anyValid", false,-1);
    tracep->declBus(c+1439,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+195,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1440,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1441,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1442,"prefixOR_1", false,-1);
    tracep->declBit(c+1443,"winner_3_1", false,-1);
    tracep->declBit(c+1444,"winner_3_2", false,-1);
    tracep->declBit(c+196,"state_3_0", false,-1);
    tracep->declBit(c+197,"state_3_1", false,-1);
    tracep->declBit(c+198,"state_3_2", false,-1);
    tracep->declBit(c+1445,"muxState_3_0", false,-1);
    tracep->declBit(c+1446,"muxState_3_1", false,-1);
    tracep->declBit(c+1447,"muxState_3_2", false,-1);
    tracep->declBit(c+199,"idle_4", false,-1);
    tracep->declBit(c+1448,"anyValid_1", false,-1);
    tracep->declBus(c+1449,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1450,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1451,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1452,"winner_4_0", false,-1);
    tracep->declBit(c+1453,"winner_4_2", false,-1);
    tracep->declBit(c+201,"state_4_0", false,-1);
    tracep->declBit(c+202,"state_4_2", false,-1);
    tracep->declBit(c+1454,"muxState_4_0", false,-1);
    tracep->declBit(c+1455,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1230,"io_enq_valid", false,-1);
    tracep->declBus(c+1232,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1456,"io_deq_ready", false,-1);
    tracep->declBit(c+1233,"io_deq_valid", false,-1);
    tracep->declBus(c+1234,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1233,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1457,"do_deq", false,-1);
    tracep->declBit(c+1458,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1646,"R0_en", false,-1);
    tracep->declBit(c+1562,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1458,"W0_en", false,-1);
    tracep->declBit(c+1562,"W0_clk", false,-1);
    tracep->declBus(c+1232,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1383,"auto_in_awready", false,-1);
    tracep->declBit(c+1169,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1139,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1140,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1141,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1170,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1384,"auto_in_wready", false,-1);
    tracep->declBit(c+1171,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1143,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"auto_in_wlast", false,-1);
    tracep->declBit(c+1385,"auto_in_bready", false,-1);
    tracep->declBit(c+1386,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1379,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1387,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1388,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1389,"auto_in_arready", false,-1);
    tracep->declBit(c+1173,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1147,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1148,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1174,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1380,"auto_in_rready", false,-1);
    tracep->declBit(c+1381,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1382,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1594,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1595,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+465,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1390,"auto_in_rlast", false,-1);
    tracep->declBit(c+1432,"auto_out_awready", false,-1);
    tracep->declBit(c+1215,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1139,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1140,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1141,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1384,"auto_out_wready", false,-1);
    tracep->declBit(c+1171,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1143,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"auto_out_wlast", false,-1);
    tracep->declBit(c+1385,"auto_out_bready", false,-1);
    tracep->declBit(c+1386,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1379,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1387,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1433,"auto_out_arready", false,-1);
    tracep->declBit(c+1216,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1147,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1148,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1380,"auto_out_rready", false,-1);
    tracep->declBit(c+1381,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1382,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1594,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1595,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1390,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1271,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1459,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1272,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1460,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1273,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1461,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1274,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1462,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1275,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1463,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1276,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1464,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1277,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1465,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1278,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1466,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1279,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1467,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1280,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1468,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1281,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1469,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1282,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1470,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+1283,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1471,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1284,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1472,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1285,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1473,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1286,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1474,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1287,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1475,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1288,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1476,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1289,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1477,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1290,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1478,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1291,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1479,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1292,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1480,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1293,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1481,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1294,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1482,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1295,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1483,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1296,"io_enq_valid", false,-1);
    tracep->declBit(c+1170,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1484,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1297,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1485,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1298,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1486,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1299,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1487,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1300,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1488,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1301,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1489,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1302,"io_enq_valid", false,-1);
    tracep->declBit(c+1174,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1490,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1601,"reset", false,-1);
    tracep->declBit(c+1404,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1197,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1157,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1158,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1270,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1198,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1163,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1199,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1405,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1406,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1597,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1407,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1200,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1151,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1152,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1153,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1154,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1201,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1408,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1409,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1598,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1599,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1410,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1601,"reset", false,-1);
    tracep->declBit(c+1641,"io_interrupt", false,-1);
    tracep->declBit(c+1404,"io_master_awready", false,-1);
    tracep->declBit(c+1197,"io_master_awvalid", false,-1);
    tracep->declBus(c+1157,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1158,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1270,"io_master_wready", false,-1);
    tracep->declBit(c+1198,"io_master_wvalid", false,-1);
    tracep->declBus(c+1163,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"io_master_wlast", false,-1);
    tracep->declBit(c+1199,"io_master_bready", false,-1);
    tracep->declBit(c+1405,"io_master_bvalid", false,-1);
    tracep->declBus(c+1406,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1597,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1407,"io_master_arready", false,-1);
    tracep->declBit(c+1200,"io_master_arvalid", false,-1);
    tracep->declBus(c+1151,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1152,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1153,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1154,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1201,"io_master_rready", false,-1);
    tracep->declBit(c+1408,"io_master_rvalid", false,-1);
    tracep->declBus(c+1409,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1598,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1599,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1410,"io_master_rlast", false,-1);
    tracep->declBit(c+1647,"io_slave_awready", false,-1);
    tracep->declBit(c+1641,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1648,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1649,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1650,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1642,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1632,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1651,"io_slave_wready", false,-1);
    tracep->declBit(c+1641,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1649,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1648,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1641,"io_slave_wlast", false,-1);
    tracep->declBit(c+1641,"io_slave_bready", false,-1);
    tracep->declBit(c+1652,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1653,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1654,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1655,"io_slave_arready", false,-1);
    tracep->declBit(c+1641,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1648,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1649,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1650,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1642,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1632,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1641,"io_slave_rready", false,-1);
    tracep->declBit(c+1656,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1657,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1658,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1659,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1660,"io_slave_rlast", false,-1);
    tracep->declBus(c+1056,"pc", false,-1, 31,0);
    tracep->declBit(c+1646,"pc_valid", false,-1);
    tracep->declBus(c+1057,"snpc", false,-1, 31,0);
    tracep->declBus(c+1058,"inst_if", false,-1, 31,0);
    tracep->declBus(c+1059,"pc_if", false,-1, 31,0);
    tracep->declBit(c+1060,"if_valid", false,-1);
    tracep->declBit(c+1061,"if_ready", false,-1);
    tracep->declBus(c+1661,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1661,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1062,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1318,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1648,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1650,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+341,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1648,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1662,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+342,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1663,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1642,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+343,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1632,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+344,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1664,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1665,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1641,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1666,"if_axi_awready", false,-1);
    tracep->declBit(c+1641,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1667,"if_axi_wready", false,-1);
    tracep->declBit(c+1668,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1641,"if_axi_bready", false,-1);
    tracep->declBit(c+1063,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1319,"if_axi_arready", false,-1);
    tracep->declBit(c+1491,"if_axi_rvalid", false,-1);
    tracep->declBit(c+1064,"if_axi_rready", false,-1);
    tracep->declBit(c+1669,"if_axi_wlast", false,-1);
    tracep->declBit(c+1670,"if_axi_rlast", false,-1);
    tracep->declBus(c+1671,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1672,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+469,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1303,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1673,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1674,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+470,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1675,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1648,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1676,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1304,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1677,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+471,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1678,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+472,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1632,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1602,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1679,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+1641,"icache_axi_awready", false,-1);
    tracep->declBit(c+1680,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1641,"icache_axi_wready", false,-1);
    tracep->declBit(c+1641,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1681,"icache_axi_bready", false,-1);
    tracep->declBit(c+473,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1305,"icache_axi_arready", false,-1);
    tracep->declBit(c+1306,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+474,"icache_axi_rready", false,-1);
    tracep->declBit(c+1682,"icache_axi_wlast", false,-1);
    tracep->declBit(c+1492,"icache_axi_rlast", false,-1);
    tracep->declBus(c+946,"inst_id", false,-1, 31,0);
    tracep->declBit(c+1554,"id_valid", false,-1);
    tracep->declBit(c+1555,"id_ready", false,-1);
    tracep->declBus(c+1065,"prepc", false,-1, 31,0);
    tracep->declBit(c+1066,"prepc_en", false,-1);
    tracep->declBus(c+1067,"pc_id", false,-1, 31,0);
    tracep->declBus(c+947,"imm_id", false,-1, 31,0);
    tracep->declBus(c+1068,"op_id", false,-1, 6,0);
    tracep->declBus(c+1069,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+345,"rs1_id", false,-1, 3,0);
    tracep->declBus(c+346,"rs2_id", false,-1, 3,0);
    tracep->declBus(c+948,"rd_id", false,-1, 3,0);
    tracep->declBit(c+949,"gpr_wen_id", false,-1);
    tracep->declBus(c+950,"csr_id", false,-1, 31,0);
    tracep->declBus(c+347,"mepc_id", false,-1, 31,0);
    tracep->declBus(c+348,"mtvec_id", false,-1, 31,0);
    tracep->declBus(c+1070,"csrs_wen_id", false,-1, 3,0);
    tracep->declBit(c+951,"fencei_id", false,-1);
    tracep->declBus(c+952,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+953,"inst_ex", false,-1, 31,0);
    tracep->declBit(c+1071,"ex_ready", false,-1);
    tracep->declBit(c+1235,"ex_valid", false,-1);
    tracep->declBus(c+349,"op_ex", false,-1, 6,0);
    tracep->declBus(c+350,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+954,"rd_ex", false,-1, 3,0);
    tracep->declBit(c+955,"gpr_wen_ex", false,-1);
    tracep->declBus(c+1072,"mepc_ex", false,-1, 31,0);
    tracep->declBus(c+1073,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+1074,"csrsw_ex", false,-1, 31,0);
    tracep->declBus(c+1075,"csrs_wen_ex", false,-1, 3,0);
    tracep->declBus(c+956,"ex_ex", false,-1, 31,0);
    tracep->declBit(c+1076,"ls_valid_ex", false,-1);
    tracep->declBit(c+1077,"ls_wen_ex", false,-1);
    tracep->declBit(c+1078,"ls_ren_ex", false,-1);
    tracep->declBus(c+1079,"ls_waddr_ex", false,-1, 31,0);
    tracep->declBus(c+351,"ls_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+1080,"ls_raddr_ex", false,-1, 31,0);
    tracep->declBus(c+1081,"ls_wmask_ex", false,-1, 3,0);
    tracep->declBus(c+1082,"ls_awsize_ex", false,-1, 2,0);
    tracep->declBus(c+1083,"ls_arsize_ex", false,-1, 2,0);
    tracep->declBus(c+1683,"ls_awburst_ex", false,-1, 1,0);
    tracep->declBus(c+1684,"ls_arburst_ex", false,-1, 1,0);
    tracep->declBus(c+957,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+475,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+476,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+477,"dnpc_ls", false,-1, 31,0);
    tracep->declBit(c+1320,"ls_ready", false,-1);
    tracep->declBit(c+1321,"ls_valid", false,-1);
    tracep->declBit(c+1322,"difftest", false,-1);
    tracep->declBus(c+478,"xrd_ls", false,-1, 31,0);
    tracep->declBus(c+479,"rd_ls", false,-1, 3,0);
    tracep->declBit(c+480,"gpr_wen_ls", false,-1);
    tracep->declBus(c+1024,"mepc_ls", false,-1, 31,0);
    tracep->declBus(c+1025,"mcause_ls", false,-1, 31,0);
    tracep->declBus(c+1026,"csrsw_ls", false,-1, 31,0);
    tracep->declBus(c+1027,"csrs_wen_ls", false,-1, 3,0);
    tracep->declBus(c+1028,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1603,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1029,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1307,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1030,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1031,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1032,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1685,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1308,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1686,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1309,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1033,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1034,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1035,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1036,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1604,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1605,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1037,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1493,"ls_axi_awready", false,-1);
    tracep->declBit(c+1038,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1310,"ls_axi_wready", false,-1);
    tracep->declBit(c+1494,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+1039,"ls_axi_bready", false,-1);
    tracep->declBit(c+1040,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1495,"ls_axi_arready", false,-1);
    tracep->declBit(c+1496,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+1041,"ls_axi_rready", false,-1);
    tracep->declBit(c+1042,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1311,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1687,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1688,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1236,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1606,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1689,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1690,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1237,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1691,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1692,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1238,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1693,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1694,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1239,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1695,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1240,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1696,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1697,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1698,"c_axi_awvalid", false,-1);
    tracep->declBit(c+1699,"c_axi_awready", false,-1);
    tracep->declBit(c+1700,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1701,"c_axi_wready", false,-1);
    tracep->declBit(c+1702,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1703,"c_axi_bready", false,-1);
    tracep->declBit(c+1241,"c_axi_arvalid", false,-1);
    tracep->declBit(c+352,"c_axi_arready", false,-1);
    tracep->declBit(c+353,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1242,"c_axi_rready", false,-1);
    tracep->declBit(c+1704,"c_axi_wlast", false,-1);
    tracep->declBit(c+1705,"c_axi_rlast", false,-1);
    tracep->declBus(c+354,"r1", false,-1, 31,0);
    tracep->declBus(c+1084,"r2", false,-1, 31,0);
    tracep->declBus(c+958,"mepc", false,-1, 31,0);
    tracep->declBus(c+959,"mstatus", false,-1, 31,0);
    tracep->declBus(c+960,"mcause", false,-1, 31,0);
    tracep->declBus(c+961,"mtvec", false,-1, 31,0);
    tracep->declBus(c+355,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+356,"marchid", false,-1, 31,0);
    tracep->declBit(c+1556,"isRAW", false,-1);
    tracep->declBit(c+1557,"isCHazard", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1706,"n", false,-1, 31,0);
    tracep->declBus(c+1707,"w", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBus(c+1056,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1057,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+1065,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1059,"dnpc_tag_i", false,-1, 31,0);
    tracep->declBit(c+1066,"dnpc_en_i", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+357+i*1,"snpc_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+365+i*1,"tag_reg", true,(i+0), 28,0);
    }
    tracep->declBus(c+1085,"tag", false,-1, 28,0);
    tracep->declBus(c+1086,"index", false,-1, 0,0);
    tracep->declBus(c+1087,"dnpc_tag", false,-1, 28,0);
    tracep->declBus(c+1088,"dnpc_index", false,-1, 0,0);
    tracep->declBus(c+1708,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBus(c+1089,"hit", false,-1, 3,0);
    tracep->declBus(c+1090,"already", false,-1, 3,0);
    tracep->declBit(c+373,"enable", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+374,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+375,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBit(c+1699,"c_axi_awready", false,-1);
    tracep->declBit(c+1698,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1691,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1687,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1690,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1694,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1695,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1701,"c_axi_wready", false,-1);
    tracep->declBit(c+1700,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1688,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1689,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1704,"c_axi_wlast", false,-1);
    tracep->declBit(c+1703,"c_axi_bready", false,-1);
    tracep->declBit(c+1702,"c_axi_bvalid", false,-1);
    tracep->declBus(c+1692,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1696,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+352,"c_axi_arready", false,-1);
    tracep->declBit(c+1241,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1238,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1236,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1237,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1239,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1240,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1242,"c_axi_rready", false,-1);
    tracep->declBit(c+353,"c_axi_rvalid", false,-1);
    tracep->declBus(c+1693,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1606,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1697,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1705,"c_axi_rlast", false,-1);
    tracep->declBus(c+1709,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1710,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+376,"mtime", false,-1, 63,0);
    tracep->declBus(c+1607,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBit(c+1557,"flush_i", false,-1);
    tracep->declBus(c+946,"inst_i", false,-1, 31,0);
    tracep->declBus(c+952,"pc_o", false,-1, 31,0);
    tracep->declBus(c+953,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1554,"id_valid_i", false,-1);
    tracep->declBit(c+1071,"ex_ready_o", false,-1);
    tracep->declBit(c+1235,"ex_valid_o", false,-1);
    tracep->declBit(c+1320,"ls_ready_i", false,-1);
    tracep->declBus(c+1067,"pc_i", false,-1, 31,0);
    tracep->declBus(c+947,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1068,"op_i", false,-1, 6,0);
    tracep->declBus(c+1069,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+354,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1084,"r2_i", false,-1, 31,0);
    tracep->declBus(c+948,"rd_i", false,-1, 3,0);
    tracep->declBit(c+949,"gpr_wen_i", false,-1);
    tracep->declBus(c+950,"csr_i", false,-1, 31,0);
    tracep->declBus(c+347,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+348,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+1070,"csrs_wen_i", false,-1, 3,0);
    tracep->declBus(c+349,"op_o", false,-1, 6,0);
    tracep->declBus(c+350,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+954,"rd_o", false,-1, 3,0);
    tracep->declBit(c+955,"gpr_wen_o", false,-1);
    tracep->declBus(c+1072,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+1073,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1074,"csrsw_o", false,-1, 31,0);
    tracep->declBus(c+1075,"csrs_wen_o", false,-1, 3,0);
    tracep->declBus(c+956,"ex_o", false,-1, 31,0);
    tracep->declBit(c+1076,"ls_valid_o", false,-1);
    tracep->declBit(c+1077,"ls_wen_o", false,-1);
    tracep->declBit(c+1078,"ls_ren_o", false,-1);
    tracep->declBus(c+1079,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+351,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1080,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+1081,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+1082,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1083,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+957,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+378,"ex_valid_reg", false,-1);
    tracep->declBus(c+1711,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1712,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1091,"state", false,-1);
    tracep->declBus(c+1243,"al_res", false,-1, 31,0);
    tracep->declBit(c+1244,"al_done", false,-1);
    tracep->declBus(c+1608,"ex", false,-1, 31,0);
    tracep->declBus(c+1092,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+1093,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+1094,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1093,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+1093,"csrs_w", false,-1, 31,0);
    tracep->declBus(c+962,"funct7_i", false,-1, 6,0);
    tracep->declBus(c+963,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+1095,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+1096,"a", false,-1, 31,0);
    tracep->declBus(c+1097,"b", false,-1, 31,0);
    tracep->declBus(c+1648,"ADD", false,-1, 3,0);
    tracep->declBus(c+1713,"SUB", false,-1, 3,0);
    tracep->declBus(c+1714,"SLL", false,-1, 3,0);
    tracep->declBus(c+1715,"SRL", false,-1, 3,0);
    tracep->declBus(c+1716,"SRA", false,-1, 3,0);
    tracep->declBus(c+1717,"SLT", false,-1, 3,0);
    tracep->declBus(c+1718,"AND", false,-1, 3,0);
    tracep->declBus(c+1719,"OR", false,-1, 3,0);
    tracep->declBus(c+1720,"XOR", false,-1, 3,0);
    tracep->declBus(c+1721,"MUL", false,-1, 3,0);
    tracep->declBus(c+1722,"MULH", false,-1, 3,0);
    tracep->declBus(c+1723,"DIV", false,-1, 3,0);
    tracep->declBus(c+1724,"REM", false,-1, 3,0);
    tracep->declBit(c+1098,"ls_valid", false,-1);
    tracep->declBit(c+1099,"ls_wen", false,-1);
    tracep->declBus(c+1100,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+1101,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+1102,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1103,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+1104,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1105,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+947,"offset", false,-1, 31,0);
    tracep->declBit(c+1106,"jalen", false,-1);
    tracep->declBit(c+1107,"jalren", false,-1);
    tracep->declBit(c+457,"beqen", false,-1);
    tracep->declBit(c+458,"bneen", false,-1);
    tracep->declBit(c+459,"blten", false,-1);
    tracep->declBit(c+460,"bgeen", false,-1);
    tracep->declBit(c+461,"bltuen", false,-1);
    tracep->declBit(c+462,"bgeuen", false,-1);
    tracep->declBit(c+1108,"ecall_en", false,-1);
    tracep->declBit(c+1609,"mret_en", false,-1);
    tracep->declBus(c+1109,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBus(c+1096,"a", false,-1, 31,0);
    tracep->declBus(c+1097,"b", false,-1, 31,0);
    tracep->declBus(c+1095,"opcode", false,-1, 3,0);
    tracep->declBus(c+1243,"res", false,-1, 31,0);
    tracep->declBit(c+1244,"done", false,-1);
    tracep->declBus(c+1648,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1713,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1714,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1715,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1716,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1717,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1718,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1719,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1720,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1721,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1722,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1723,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1724,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1711,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1712,"EXECUTE", false,-1, 0,0);
    tracep->declBit(c+481,"state", false,-1);
    tracep->declQuad(c+482,"mul_result", false,-1, 63,0);
    tracep->declBus(c+484,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+485,"dividend", false,-1, 31,0);
    tracep->declBus(c+486,"divisor", false,-1, 31,0);
    tracep->declBus(c+487,"quotient", false,-1, 31,0);
    tracep->declBus(c+488,"remainder", false,-1, 31,0);
    tracep->declBus(c+489,"div_counter", false,-1, 5,0);
    tracep->declBit(c+490,"done_reg", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1707,"n", false,-1, 31,0);
    tracep->declBus(c+1725,"m", false,-1, 31,0);
    tracep->declBus(c+1726,"w", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBit(c+951,"fencei_i", false,-1);
    tracep->declBit(c+1666,"m_axi_awready", false,-1);
    tracep->declBit(c+1641,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1648,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1661,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1650,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1642,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1632,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1667,"m_axi_wready", false,-1);
    tracep->declBit(c+1641,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1661,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1648,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1669,"m_axi_wlast", false,-1);
    tracep->declBit(c+1641,"m_axi_bready", false,-1);
    tracep->declBit(c+1668,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1662,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1664,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1319,"m_axi_arready", false,-1);
    tracep->declBit(c+1063,"m_axi_arvalid", false,-1);
    tracep->declBus(c+342,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1062,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+341,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+343,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+344,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1064,"m_axi_rready", false,-1);
    tracep->declBit(c+1491,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1663,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1318,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1665,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1670,"m_axi_rlast", false,-1);
    tracep->declBit(c+1641,"s_axi_awready", false,-1);
    tracep->declBit(c+1679,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1675,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1671,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1674,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1677,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1678,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1641,"s_axi_wready", false,-1);
    tracep->declBit(c+1680,"s_axi_wvalid", false,-1);
    tracep->declBus(c+1672,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1673,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1682,"s_axi_wlast", false,-1);
    tracep->declBit(c+1681,"s_axi_bready", false,-1);
    tracep->declBit(c+1641,"s_axi_bvalid", false,-1);
    tracep->declBus(c+1648,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1632,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1305,"s_axi_arready", false,-1);
    tracep->declBit(c+473,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1676,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+469,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+470,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+471,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+472,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+474,"s_axi_rready", false,-1);
    tracep->declBit(c+1306,"s_axi_rvalid", false,-1);
    tracep->declBus(c+1304,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1303,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1602,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1492,"s_axi_rlast", false,-1);
    tracep->declBus(c+1725,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1725,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1707,"CACHE_WAY", false,-1, 31,0);
    tracep->pushNamePrefix("cache_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+491,"[0]", false,-1, 31,0);
    tracep->declBus(c+492,"[1]", false,-1, 31,0);
    tracep->declBus(c+493,"[2]", false,-1, 31,0);
    tracep->declBus(c+494,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+495,"[0]", false,-1, 31,0);
    tracep->declBus(c+496,"[1]", false,-1, 31,0);
    tracep->declBus(c+497,"[2]", false,-1, 31,0);
    tracep->declBus(c+498,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+499,"[0]", false,-1, 31,0);
    tracep->declBus(c+500,"[1]", false,-1, 31,0);
    tracep->declBus(c+501,"[2]", false,-1, 31,0);
    tracep->declBus(c+502,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+503,"[0]", false,-1, 31,0);
    tracep->declBus(c+504,"[1]", false,-1, 31,0);
    tracep->declBus(c+505,"[2]", false,-1, 31,0);
    tracep->declBus(c+506,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+507,"[0]", false,-1, 26,0);
    tracep->declBus(c+508,"[1]", false,-1, 26,0);
    tracep->declBus(c+509,"[2]", false,-1, 26,0);
    tracep->declBus(c+510,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+511,"[0]", false,-1, 26,0);
    tracep->declBus(c+512,"[1]", false,-1, 26,0);
    tracep->declBus(c+513,"[2]", false,-1, 26,0);
    tracep->declBus(c+514,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+515,"[0]", false,-1, 26,0);
    tracep->declBus(c+516,"[1]", false,-1, 26,0);
    tracep->declBus(c+517,"[2]", false,-1, 26,0);
    tracep->declBus(c+518,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+519,"[0]", false,-1, 26,0);
    tracep->declBus(c+520,"[1]", false,-1, 26,0);
    tracep->declBus(c+521,"[2]", false,-1, 26,0);
    tracep->declBus(c+522,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+523+i*1,"valid_reg", true,(i+0), 3,0);
    }
    tracep->declBus(c+1110,"tag", false,-1, 26,0);
    tracep->declBus(c+1111,"index", false,-1, 0,0);
    tracep->declBus(c+1112,"offset", false,-1, 1,0);
    tracep->declBus(c+527,"s_tag", false,-1, 26,0);
    tracep->declBus(c+528,"s_index", false,-1, 0,0);
    tracep->declBus(c+529,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1245,"access", false,-1, 1,0);
    tracep->declBus(c+530,"hit", false,-1, 1,0);
    tracep->declBus(c+1727,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBit(c+1497,"axi_rvalid", false,-1);
    tracep->declBit(c+379,"axi_rvalid_enable", false,-1);
    tracep->declBus(c+1711,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1712,"TRANS", false,-1, 0,0);
    tracep->declBit(c+531,"state", false,-1);
    tracep->declBus(c+532,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+533,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+534,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+535,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+536,"a", false,-1, 31,0);
    tracep->declBus(c+537,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBit(c+1556,"isRAW_i", false,-1);
    tracep->declBit(c+1557,"flush_i", false,-1);
    tracep->declBus(c+946,"inst_o", false,-1, 31,0);
    tracep->declBus(c+1065,"prepc_o", false,-1, 31,0);
    tracep->declBit(c+1066,"prepc_en_o", false,-1);
    tracep->declBus(c+958,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+959,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+960,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+961,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1060,"if_valid_i", false,-1);
    tracep->declBit(c+1555,"id_ready_o", false,-1);
    tracep->declBit(c+1554,"id_valid_o", false,-1);
    tracep->declBit(c+1071,"ex_ready_i", false,-1);
    tracep->declBus(c+1059,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1058,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1067,"pc_o", false,-1, 31,0);
    tracep->declBus(c+947,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1068,"op_o", false,-1, 6,0);
    tracep->declBus(c+1069,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+948,"rs1_o", false,-1, 3,0);
    tracep->declBus(c+964,"rs2_o", false,-1, 3,0);
    tracep->declBus(c+345,"rd_o", false,-1, 3,0);
    tracep->declBit(c+380,"gpr_wen_o", false,-1);
    tracep->declBus(c+950,"csr_o", false,-1, 31,0);
    tracep->declBus(c+347,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+348,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+1070,"csrs_wen_o", false,-1, 3,0);
    tracep->declBit(c+951,"fencei_o", false,-1);
    tracep->declBus(c+1711,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1712,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1113,"state", false,-1);
    tracep->declBus(c+1114,"op", false,-1, 6,0);
    tracep->declBus(c+1115,"rd", false,-1, 3,0);
    tracep->declBus(c+1116,"funct3", false,-1, 2,0);
    tracep->declBus(c+1117,"rs1", false,-1, 3,0);
    tracep->declBus(c+1118,"rs2", false,-1, 3,0);
    tracep->declBus(c+1119,"immI", false,-1, 31,0);
    tracep->declBus(c+1120,"immU", false,-1, 31,0);
    tracep->declBus(c+1121,"immS", false,-1, 31,0);
    tracep->declBus(c+1122,"immB", false,-1, 31,0);
    tracep->declBus(c+1123,"immJ", false,-1, 31,0);
    tracep->declBus(c+1124,"imm", false,-1, 31,0);
    tracep->declBus(c+1125,"funct7", false,-1, 6,0);
    tracep->declBit(c+1126,"gpr_wen", false,-1);
    tracep->declBus(c+1610,"csr", false,-1, 31,0);
    tracep->declBus(c+1127,"csrs_wen", false,-1, 3,0);
    tracep->declBit(c+1128,"fencei", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBit(c+1557,"isCHazard", false,-1);
    tracep->declBit(c+1646,"pc_valid_i", false,-1);
    tracep->declBit(c+1061,"if_ready_o", false,-1);
    tracep->declBit(c+1060,"if_valid_o", false,-1);
    tracep->declBit(c+1555,"id_ready_i", false,-1);
    tracep->declBus(c+1056,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1059,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1058,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1666,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1641,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1648,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1661,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1650,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1642,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1632,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1667,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1641,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1661,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1648,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1669,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1641,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1668,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1662,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1664,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1319,"if_axi_arready_i", false,-1);
    tracep->declBit(c+1063,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+342,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+1062,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+341,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+343,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+344,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1064,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1491,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1663,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1318,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1665,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1670,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1711,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1712,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1129,"state", false,-1);
    tracep->declBit(c+381,"isCHazard_reg", false,-1);
    tracep->declBus(c+1711,"AXI_IDLE", false,-1, 0,0);
    tracep->declBus(c+1712,"AXI_FETCH", false,-1, 0,0);
    tracep->declBit(c+1130,"axi_state", false,-1);
    tracep->declBus(c+1131,"axi_rdata_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBus(c+952,"pc_i", false,-1, 31,0);
    tracep->declBus(c+953,"inst_i", false,-1, 31,0);
    tracep->declBus(c+957,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+475,"pc_o", false,-1, 31,0);
    tracep->declBus(c+476,"inst_o", false,-1, 31,0);
    tracep->declBus(c+477,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+1611,"ex_valid_i", false,-1);
    tracep->declBit(c+1320,"ls_ready_o", false,-1);
    tracep->declBit(c+1321,"ls_valid_o", false,-1);
    tracep->declBit(c+1322,"difftest_o", false,-1);
    tracep->declBus(c+349,"op_i", false,-1, 6,0);
    tracep->declBus(c+350,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+954,"rd_i", false,-1, 3,0);
    tracep->declBit(c+955,"gpr_wen_i", false,-1);
    tracep->declBus(c+1072,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+1073,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+1074,"csrsw_i", false,-1, 31,0);
    tracep->declBus(c+1075,"csrs_wen_i", false,-1, 3,0);
    tracep->declBus(c+956,"ex_i", false,-1, 31,0);
    tracep->declBit(c+1076,"ls_valid_i", false,-1);
    tracep->declBit(c+1077,"ls_wen_i", false,-1);
    tracep->declBit(c+1078,"ls_ren_i", false,-1);
    tracep->declBus(c+1079,"ls_waddr_i", false,-1, 31,0);
    tracep->declBus(c+351,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1080,"ls_raddr_i", false,-1, 31,0);
    tracep->declBus(c+1081,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1082,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1083,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+478,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+479,"rd_o", false,-1, 3,0);
    tracep->declBit(c+480,"gpr_wen_o", false,-1);
    tracep->declBus(c+1024,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+1025,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1026,"csrsw_o", false,-1, 31,0);
    tracep->declBus(c+1027,"csrs_wen_o", false,-1, 3,0);
    tracep->declBit(c+1493,"ls_axi_awready", false,-1);
    tracep->declBit(c+1037,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1685,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1028,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1031,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1033,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1035,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1310,"ls_axi_wready", false,-1);
    tracep->declBit(c+1038,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1603,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1030,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1042,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1039,"ls_axi_bready", false,-1);
    tracep->declBit(c+1494,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+1308,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1604,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1495,"ls_axi_arready", false,-1);
    tracep->declBit(c+1040,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1686,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1029,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1032,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1034,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1036,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1041,"ls_axi_rready", false,-1);
    tracep->declBit(c+1496,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+1309,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1307,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1605,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1311,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1632,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1633,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1634,"DONE", false,-1, 1,0);
    tracep->declBus(c+1635,"DIFFTEST", false,-1, 1,0);
    tracep->declBus(c+1323,"state", false,-1, 1,0);
    tracep->declBus(c+1612,"xrd", false,-1, 31,0);
    tracep->declBit(c+1043,"ls_done_reg", false,-1);
    tracep->declBit(c+1043,"ls_done_o", false,-1);
    tracep->declBus(c+1044,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1246,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+1642,"AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1631,"AXI_READ", false,-1, 2,0);
    tracep->declBus(c+1643,"AXI_WRITE1", false,-1, 2,0);
    tracep->declBus(c+1644,"AXI_WRITE2", false,-1, 2,0);
    tracep->declBus(c+1645,"AXI_DONE", false,-1, 2,0);
    tracep->declBus(c+1045,"axi_state", false,-1, 2,0);
    tracep->declBit(c+1037,"axi_awvalid", false,-1);
    tracep->declBit(c+1038,"axi_wvalid", false,-1);
    tracep->declBus(c+1685,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1028,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1046,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1031,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1033,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1035,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1030,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1039,"axi_bready", false,-1);
    tracep->declBit(c+1042,"axi_wlast", false,-1);
    tracep->declBit(c+1040,"axi_arvalid", false,-1);
    tracep->declBit(c+1041,"axi_rready", false,-1);
    tracep->declBus(c+1686,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1029,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1032,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1034,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1036,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBit(c+1557,"isCHazard", false,-1);
    tracep->declBus(c+1056,"pc_o", false,-1, 31,0);
    tracep->declBus(c+957,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1057,"snpc_i", false,-1, 31,0);
    tracep->declBit(c+1646,"pc_valid_o", false,-1);
    tracep->declBit(c+1061,"if_ready_i", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1725,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1728,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBus(c+478,"wdata", false,-1, 31,0);
    tracep->declBus(c+479,"waddr", false,-1, 3,0);
    tracep->declBit(c+480,"wen", false,-1);
    tracep->declBus(c+345,"raddr1", false,-1, 3,0);
    tracep->declBus(c+354,"r1", false,-1, 31,0);
    tracep->declBus(c+346,"raddr2", false,-1, 3,0);
    tracep->declBus(c+1084,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+382+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+398,"rdata1_low", false,-1, 31,0);
    tracep->declBus(c+399,"rdata1_high", false,-1, 31,0);
    tracep->declBus(c+1084,"rdata2_low", false,-1, 31,0);
    tracep->declBus(c+1649,"rdata2_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBit(c+1641,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1679,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1675,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1671,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1674,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1677,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1678,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1641,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1680,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1672,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1673,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1682,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1681,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+1641,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+1648,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1632,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1305,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+473,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1676,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+469,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+470,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+471,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+472,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+474,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1306,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+1304,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1303,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1602,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1492,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1493,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1037,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1685,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1028,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1031,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1033,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1035,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1310,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1038,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1603,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1030,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1042,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+1039,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1494,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+1308,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1604,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1495,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1040,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1686,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1029,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1032,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1034,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1036,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1041,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1496,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+1309,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1307,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1605,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1311,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1404,"io_master_awready", false,-1);
    tracep->declBit(c+1197,"io_master_awvalid", false,-1);
    tracep->declBus(c+1157,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1158,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1270,"io_master_wready", false,-1);
    tracep->declBit(c+1198,"io_master_wvalid", false,-1);
    tracep->declBus(c+1163,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"io_master_wlast", false,-1);
    tracep->declBit(c+1199,"io_master_bready", false,-1);
    tracep->declBit(c+1405,"io_master_bvalid", false,-1);
    tracep->declBus(c+1406,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1597,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1407,"io_master_arready", false,-1);
    tracep->declBit(c+1200,"io_master_arvalid", false,-1);
    tracep->declBus(c+1151,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1152,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1153,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1154,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1201,"io_master_rready", false,-1);
    tracep->declBit(c+1408,"io_master_rvalid", false,-1);
    tracep->declBus(c+1409,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1598,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1599,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1410,"io_master_rlast", false,-1);
    tracep->declBit(c+1699,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1698,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1691,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1687,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1690,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1694,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1695,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1701,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1700,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1688,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1689,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1704,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1703,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+1702,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+1692,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1696,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+352,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1241,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1238,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1236,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1237,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1239,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1240,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1242,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+353,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+1693,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1606,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1697,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1705,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+355,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+356,"marchid", false,-1, 31,0);
    tracep->declBus(c+1158,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1163,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1247,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1498,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1164,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1159,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1248,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1157,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1406,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1249,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1312,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1160,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1250,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1161,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1251,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1597,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1613,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1197,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1404,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1198,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1270,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1405,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1199,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1165,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1252,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1499,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1500,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1253,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1313,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+400,"state", false,-1, 1,0);
    tracep->declBus(c+1254,"sel_m", false,-1, 1,0);
    tracep->declBus(c+1632,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1633,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1634,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1709,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1710,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1255,"sel_clint", false,-1);
    tracep->declBus(c+1729,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1730,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1256,"sel_mvendorid", false,-1);
    tracep->declBit(c+1257,"sel_marchid", false,-1);
    tracep->declBit(c+1258,"sel_id", false,-1);
    tracep->declBus(c+1614,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBit(c+1646,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1646,"I_AXI_RVALID", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1728,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1731,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBus(c+1649,"din", false,-1, 31,0);
    tracep->declBus(c+356,"dout", false,-1, 31,0);
    tracep->declBit(c+1641,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1728,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1649,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBus(c+1025,"din", false,-1, 31,0);
    tracep->declBus(c+960,"dout", false,-1, 31,0);
    tracep->declBit(c+1047,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1728,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1649,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBus(c+1024,"din", false,-1, 31,0);
    tracep->declBus(c+958,"dout", false,-1, 31,0);
    tracep->declBit(c+1048,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1728,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1732,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBus(c+1026,"din", false,-1, 31,0);
    tracep->declBus(c+959,"dout", false,-1, 31,0);
    tracep->declBit(c+1049,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1728,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1649,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBus(c+1026,"din", false,-1, 31,0);
    tracep->declBus(c+961,"dout", false,-1, 31,0);
    tracep->declBit(c+1050,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1728,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1733,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1601,"rst", false,-1);
    tracep->declBus(c+1649,"din", false,-1, 31,0);
    tracep->declBus(c+355,"dout", false,-1, 31,0);
    tracep->declBit(c+1641,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"io_d", false,-1);
    tracep->declBit(c+401,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"io_d", false,-1);
    tracep->declBit(c+401,"io_q", false,-1);
    tracep->declBit(c+401,"sync_0", false,-1);
    tracep->declBit(c+402,"sync_1", false,-1);
    tracep->declBit(c+403,"sync_2", false,-1);
    tracep->declBit(c+404,"sync_3", false,-1);
    tracep->declBit(c+405,"sync_4", false,-1);
    tracep->declBit(c+406,"sync_5", false,-1);
    tracep->declBit(c+407,"sync_6", false,-1);
    tracep->declBit(c+408,"sync_7", false,-1);
    tracep->declBit(c+409,"sync_8", false,-1);
    tracep->declBit(c+410,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1337,"auto_in_psel", false,-1);
    tracep->declBit(c+1338,"auto_in_penable", false,-1);
    tracep->declBit(c+1327,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1263,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1326,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+552,"auto_in_pready", false,-1);
    tracep->declBit(c+1640,"auto_in_pslverr", false,-1);
    tracep->declBus(c+553,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1564,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1565,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1566,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1567,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1568,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1569,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1570,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1571,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1572,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1573,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1314,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1337,"in_psel", false,-1);
    tracep->declBit(c+1338,"in_penable", false,-1);
    tracep->declBus(c+1326,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1327,"in_pwrite", false,-1);
    tracep->declBus(c+1328,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+552,"in_pready", false,-1);
    tracep->declBus(c+553,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1640,"in_pslverr", false,-1);
    tracep->declBus(c+1564,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1565,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1566,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1567,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1568,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1569,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1570,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1571,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1572,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1573,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1650,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1734,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1735,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1736,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1737,"ONE", false,-1, 7,0);
    tracep->declBus(c+1738,"TWO", false,-1, 7,0);
    tracep->declBus(c+1739,"THREE", false,-1, 7,0);
    tracep->declBus(c+1740,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1741,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1742,"SIX", false,-1, 7,0);
    tracep->declBus(c+1743,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1744,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1745,"NINE", false,-1, 7,0);
    tracep->declBus(c+1746,"A", false,-1, 7,0);
    tracep->declBus(c+1747,"B", false,-1, 7,0);
    tracep->declBus(c+1748,"C", false,-1, 7,0);
    tracep->declBus(c+1749,"D", false,-1, 7,0);
    tracep->declBus(c+1750,"E", false,-1, 7,0);
    tracep->declBus(c+1751,"F", false,-1, 7,0);
    tracep->declBus(c+584,"led_reg", false,-1, 15,0);
    tracep->declBus(c+585,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+586+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1501,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1502,"write_en", false,-1);
    tracep->declBit(c+1503,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1335,"auto_in_psel", false,-1);
    tracep->declBit(c+1336,"auto_in_penable", false,-1);
    tracep->declBit(c+1327,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1263,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1326,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+550,"auto_in_pready", false,-1);
    tracep->declBit(c+1639,"auto_in_pslverr", false,-1);
    tracep->declBus(c+551,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1574,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1575,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1314,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1335,"in_psel", false,-1);
    tracep->declBit(c+1336,"in_penable", false,-1);
    tracep->declBus(c+1326,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1327,"in_pwrite", false,-1);
    tracep->declBus(c+1328,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+550,"in_pready", false,-1);
    tracep->declBus(c+551,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1639,"in_pslverr", false,-1);
    tracep->declBit(c+1574,"ps2_clk", false,-1);
    tracep->declBit(c+1575,"ps2_data", false,-1);
    tracep->declBus(c+1752,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1753,"EXP", false,-1, 7,0);
    tracep->declBus(c+1051,"state", false,-1, 1,0);
    tracep->declBus(c+1052,"counter", false,-1, 3,0);
    tracep->declBus(c+1053,"buffer", false,-1, 7,0);
    tracep->declBus(c+1054,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1055,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1615,"ready", false,-1);
    tracep->declBus(c+1616,"rdata", false,-1, 31,0);
    tracep->declBit(c+1504,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1217,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1218,"auto_in_wvalid", false,-1);
    tracep->declBit(c+157,"auto_in_arready", false,-1);
    tracep->declBit(c+1219,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1147,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1220,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+468,"auto_in_rready", false,-1);
    tracep->declBit(c+158,"auto_in_rvalid", false,-1);
    tracep->declBus(c+159,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"state", false,-1);
    tracep->declBus(c+160,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+159,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1259,"raddr", false,-1, 31,0);
    tracep->declBit(c+1260,"ren", false,-1);
    tracep->declBus(c+1261,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1339,"auto_in_psel", false,-1);
    tracep->declBit(c+1340,"auto_in_penable", false,-1);
    tracep->declBit(c+1327,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1262,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1326,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1588,"auto_in_pready", false,-1);
    tracep->declBit(c+1641,"auto_in_pslverr", false,-1);
    tracep->declBus(c+944,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1558,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1559,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1585,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1262,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1339,"in_psel", false,-1);
    tracep->declBit(c+1340,"in_penable", false,-1);
    tracep->declBus(c+1326,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1327,"in_pwrite", false,-1);
    tracep->declBus(c+1328,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1588,"in_pready", false,-1);
    tracep->declBus(c+944,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1641,"in_pslverr", false,-1);
    tracep->declBit(c+1558,"qspi_sck", false,-1);
    tracep->declBit(c+1559,"qspi_ce_n", false,-1);
    tracep->declBus(c+1585,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1585,"din", false,-1, 3,0);
    tracep->declBus(c+1560,"dout", false,-1, 3,0);
    tracep->declBus(c+1561,"douten", false,-1, 3,0);
    tracep->declBit(c+1617,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBus(c+1262,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1328,"dat_i", false,-1, 31,0);
    tracep->declBus(c+944,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1329,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1339,"cyc_i", false,-1);
    tracep->declBit(c+1339,"stb_i", false,-1);
    tracep->declBit(c+1617,"ack_o", false,-1);
    tracep->declBit(c+1327,"we_i", false,-1);
    tracep->declBit(c+1558,"sck", false,-1);
    tracep->declBit(c+1559,"ce_n", false,-1);
    tracep->declBus(c+1585,"din", false,-1, 3,0);
    tracep->declBus(c+1560,"dout", false,-1, 3,0);
    tracep->declBus(c+1561,"douten", false,-1, 3,0);
    tracep->declBus(c+1711,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1712,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+594,"mr_sck", false,-1);
    tracep->declBit(c+595,"mr_ce_n", false,-1);
    tracep->declBus(c+1585,"mr_din", false,-1, 3,0);
    tracep->declBus(c+596,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+597,"mr_doe", false,-1);
    tracep->declBit(c+598,"mw_sck", false,-1);
    tracep->declBit(c+599,"mw_ce_n", false,-1);
    tracep->declBus(c+1585,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1505,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+600,"mw_doe", false,-1);
    tracep->declBit(c+1506,"mr_rd", false,-1);
    tracep->declBit(c+601,"mr_done", false,-1);
    tracep->declBit(c+1507,"mw_wr", false,-1);
    tracep->declBit(c+1508,"mw_done", false,-1);
    tracep->declBit(c+1339,"wb_valid", false,-1);
    tracep->declBit(c+1509,"wb_we", false,-1);
    tracep->declBit(c+1510,"wb_re", false,-1);
    tracep->declBit(c+602,"state", false,-1);
    tracep->declBit(c+1511,"nstate", false,-1);
    tracep->declBus(c+1512,"size", false,-1, 2,0);
    tracep->declBus(c+1513,"byte0", false,-1, 7,0);
    tracep->declBus(c+1514,"byte1", false,-1, 7,0);
    tracep->declBus(c+1515,"byte2", false,-1, 7,0);
    tracep->declBus(c+1516,"byte3", false,-1, 7,0);
    tracep->declBus(c+1315,"wdata", false,-1, 31,0);
    tracep->declBit(c+853,"qpi_flag", false,-1);
    tracep->declBit(c+854,"qpi_sck", false,-1);
    tracep->declBit(c+855,"qpi_ce_n", false,-1);
    tracep->declBus(c+856,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+857,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+858,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1618,"rst_n", false,-1);
    tracep->declBus(c+1316,"addr", false,-1, 23,0);
    tracep->declBit(c+1506,"rd", false,-1);
    tracep->declBus(c+1645,"size", false,-1, 2,0);
    tracep->declBit(c+601,"done", false,-1);
    tracep->declBus(c+944,"line", false,-1, 31,0);
    tracep->declBit(c+594,"sck", false,-1);
    tracep->declBit(c+595,"ce_n", false,-1);
    tracep->declBus(c+1585,"din", false,-1, 3,0);
    tracep->declBus(c+596,"dout", false,-1, 3,0);
    tracep->declBit(c+597,"douten", false,-1);
    tracep->declBus(c+1711,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1712,"READ", false,-1, 0,0);
    tracep->declBus(c+1754,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+603,"state", false,-1);
    tracep->declBit(c+1517,"nstate", false,-1);
    tracep->declBus(c+604,"counter", false,-1, 7,0);
    tracep->declBus(c+605,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+965+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1755,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+606,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1618,"rst_n", false,-1);
    tracep->declBus(c+1317,"addr", false,-1, 23,0);
    tracep->declBus(c+1315,"line", false,-1, 31,0);
    tracep->declBus(c+1512,"size", false,-1, 2,0);
    tracep->declBit(c+1507,"wr", false,-1);
    tracep->declBit(c+1508,"done", false,-1);
    tracep->declBit(c+598,"sck", false,-1);
    tracep->declBit(c+599,"ce_n", false,-1);
    tracep->declBus(c+1585,"din", false,-1, 3,0);
    tracep->declBus(c+1505,"dout", false,-1, 3,0);
    tracep->declBit(c+600,"douten", false,-1);
    tracep->declBus(c+1711,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1712,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1518,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+607,"state", false,-1);
    tracep->declBit(c+1519,"nstate", false,-1);
    tracep->declBus(c+608,"counter", false,-1, 7,0);
    tracep->declBus(c+609,"saddr", false,-1, 23,0);
    tracep->declBus(c+1756,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1370,"auto_in_awready", false,-1);
    tracep->declBit(c+1371,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1372,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1373,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1374,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1265,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1375,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1376,"auto_in_wready", false,-1);
    tracep->declBit(c+1377,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1266,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"auto_in_wlast", false,-1);
    tracep->declBit(c+1592,"auto_in_bready", false,-1);
    tracep->declBit(c+567,"auto_in_bvalid", false,-1);
    tracep->declBus(c+564,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1632,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1363,"auto_in_arready", false,-1);
    tracep->declBit(c+1364,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1365,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1366,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1264,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1368,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1369,"auto_in_rready", false,-1);
    tracep->declBit(c+563,"auto_in_rvalid", false,-1);
    tracep->declBus(c+564,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+565,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1632,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+566,"auto_in_rlast", false,-1);
    tracep->declBit(c+1586,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+540,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+981,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+982,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+983,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+984,"sdram_bundle_we", false,-1);
    tracep->declBus(c+985,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+986,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+541,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1010,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1370,"in_awready", false,-1);
    tracep->declBit(c+1371,"in_awvalid", false,-1);
    tracep->declBus(c+1373,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1372,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1374,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1265,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1375,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1376,"in_wready", false,-1);
    tracep->declBit(c+1377,"in_wvalid", false,-1);
    tracep->declBus(c+1266,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1267,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"in_wlast", false,-1);
    tracep->declBit(c+1592,"in_bready", false,-1);
    tracep->declBit(c+567,"in_bvalid", false,-1);
    tracep->declBus(c+1632,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+564,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1363,"in_arready", false,-1);
    tracep->declBit(c+1364,"in_arvalid", false,-1);
    tracep->declBus(c+1366,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1365,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1367,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1264,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1368,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1369,"in_rready", false,-1);
    tracep->declBit(c+563,"in_rvalid", false,-1);
    tracep->declBus(c+1632,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+565,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+566,"in_rlast", false,-1);
    tracep->declBus(c+564,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1586,"sdram_clk", false,-1);
    tracep->declBit(c+540,"sdram_cke", false,-1);
    tracep->declBit(c+981,"sdram_cs", false,-1);
    tracep->declBit(c+982,"sdram_ras", false,-1);
    tracep->declBit(c+983,"sdram_cas", false,-1);
    tracep->declBit(c+984,"sdram_we", false,-1);
    tracep->declBus(c+985,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+986,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+541,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1010,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+610,"sdram_dout_en", false,-1);
    tracep->declBus(c+611,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBit(c+1371,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1373,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1372,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1374,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1375,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1377,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1266,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1267,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1268,"inport_wlast_i", false,-1);
    tracep->declBit(c+1592,"inport_bready_i", false,-1);
    tracep->declBit(c+1364,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1366,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1365,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1367,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1368,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1369,"inport_rready_i", false,-1);
    tracep->declBus(c+1010,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1370,"inport_awready_o", false,-1);
    tracep->declBit(c+1376,"inport_wready_o", false,-1);
    tracep->declBit(c+567,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1632,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+564,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1363,"inport_arready_o", false,-1);
    tracep->declBit(c+563,"inport_rvalid_o", false,-1);
    tracep->declBus(c+565,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1632,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+564,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+566,"inport_rlast_o", false,-1);
    tracep->declBit(c+1586,"sdram_clk_o", false,-1);
    tracep->declBit(c+540,"sdram_cke_o", false,-1);
    tracep->declBit(c+981,"sdram_cs_o", false,-1);
    tracep->declBit(c+982,"sdram_ras_o", false,-1);
    tracep->declBit(c+983,"sdram_cas_o", false,-1);
    tracep->declBit(c+984,"sdram_we_o", false,-1);
    tracep->declBus(c+541,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+985,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+986,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+611,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+610,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1757,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1758,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1759,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1707,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1520,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1521,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1522,"ram_rd_w", false,-1);
    tracep->declBit(c+987,"ram_accept_w", false,-1);
    tracep->declBus(c+1266,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+612,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1523,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+613,"ram_ack_w", false,-1);
    tracep->declBit(c+1641,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBit(c+1371,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1373,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1372,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1374,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1375,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1377,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1266,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1267,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1268,"axi_wlast_i", false,-1);
    tracep->declBit(c+1592,"axi_bready_i", false,-1);
    tracep->declBit(c+1364,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1366,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1365,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1367,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1368,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1369,"axi_rready_i", false,-1);
    tracep->declBit(c+987,"ram_accept_i", false,-1);
    tracep->declBit(c+613,"ram_ack_i", false,-1);
    tracep->declBit(c+1641,"ram_error_i", false,-1);
    tracep->declBus(c+612,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1370,"axi_awready_o", false,-1);
    tracep->declBit(c+1376,"axi_wready_o", false,-1);
    tracep->declBit(c+567,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1632,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+564,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1363,"axi_arready_o", false,-1);
    tracep->declBit(c+563,"axi_rvalid_o", false,-1);
    tracep->declBus(c+565,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1632,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+564,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+566,"axi_rlast_o", false,-1);
    tracep->declBus(c+1521,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1522,"ram_rd_o", false,-1);
    tracep->declBus(c+1523,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1520,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1266,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+614,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+615,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+616,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+617,"req_rd_q", false,-1);
    tracep->declBit(c+618,"req_wr_q", false,-1);
    tracep->declBus(c+619,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+620,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+621,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+622,"req_prio_q", false,-1);
    tracep->declBit(c+623,"req_hold_rd_q", false,-1);
    tracep->declBit(c+624,"req_hold_wr_q", false,-1);
    tracep->declBit(c+625,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1524,"req_push_w", false,-1);
    tracep->declBus(c+1619,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+626,"req_out_valid_w", false,-1);
    tracep->declBus(c+627,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1525,"resp_accept_w", false,-1);
    tracep->declBit(c+628,"resp_is_write_w", false,-1);
    tracep->declBit(c+629,"resp_is_read_w", false,-1);
    tracep->declBit(c+566,"resp_is_last_w", false,-1);
    tracep->declBus(c+564,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+630,"resp_valid_w", false,-1);
    tracep->declBit(c+631,"write_prio_w", false,-1);
    tracep->declBit(c+632,"read_prio_w", false,-1);
    tracep->declBit(c+1526,"write_active_w", false,-1);
    tracep->declBit(c+1522,"read_active_w", false,-1);
    tracep->declBus(c+1520,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1527,"wr_w", false,-1);
    tracep->declBit(c+1522,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1760,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1725,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1707,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBus(c+1619,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1524,"push_i", false,-1);
    tracep->declBit(c+1525,"pop_i", false,-1);
    tracep->declBus(c+627,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+625,"accept_o", false,-1);
    tracep->declBit(c+626,"valid_o", false,-1);
    tracep->declBus(c+1706,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+633+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+637,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+638,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+639,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1728,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1725,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1707,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBus(c+612,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+613,"push_i", false,-1);
    tracep->declBit(c+1525,"pop_i", false,-1);
    tracep->declBus(c+565,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+640,"accept_o", false,-1);
    tracep->declBit(c+630,"valid_o", false,-1);
    tracep->declBus(c+1706,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+641+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+645,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+646,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+647,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBus(c+1521,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1522,"inport_rd_i", false,-1);
    tracep->declBus(c+1523,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1520,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1266,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1010,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+987,"inport_accept_o", false,-1);
    tracep->declBit(c+613,"inport_ack_o", false,-1);
    tracep->declBit(c+1641,"inport_error_o", false,-1);
    tracep->declBus(c+612,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1586,"sdram_clk_o", false,-1);
    tracep->declBit(c+540,"sdram_cke_o", false,-1);
    tracep->declBit(c+981,"sdram_cs_o", false,-1);
    tracep->declBit(c+982,"sdram_ras_o", false,-1);
    tracep->declBit(c+983,"sdram_cas_o", false,-1);
    tracep->declBit(c+984,"sdram_we_o", false,-1);
    tracep->declBus(c+541,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+985,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+986,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+611,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+610,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1757,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1758,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1759,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1707,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1706,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1725,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1761,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1762,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1763,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1764,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1765,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1725,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1719,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1715,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1717,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1716,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1718,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1714,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1713,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1648,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1766,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1725,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1648,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1713,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1714,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1715,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1716,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1717,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1718,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1719,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1720,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1721,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1767,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1767,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1728,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1767,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1707,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1707,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1760,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1520,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1521,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1522,"ram_rd_w", false,-1);
    tracep->declBit(c+987,"ram_accept_w", false,-1);
    tracep->declBus(c+1266,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+612,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+613,"ram_ack_w", false,-1);
    tracep->declBit(c+1528,"ram_req_w", false,-1);
    tracep->declBus(c+988,"command_q", false,-1, 3,0);
    tracep->declBus(c+985,"addr_q", false,-1, 12,0);
    tracep->declBus(c+611,"data_q", false,-1, 31,0);
    tracep->declBit(c+648,"data_rd_en_q", false,-1);
    tracep->declBus(c+541,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+540,"cke_q", false,-1);
    tracep->declBus(c+986,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1768,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+649,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1010,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+650,"refresh_q", false,-1);
    tracep->declBus(c+989,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+651+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+990,"state_q", false,-1, 3,0);
    tracep->declBus(c+1529,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1530,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+659,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+660,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1531,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1532,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1533,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1725,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+661,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1534,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1769,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+991,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+662,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+612,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+663,"idx", false,-1, 31,0);
    tracep->declBus(c+664,"rd_q", false,-1, 3,0);
    tracep->declBit(c+613,"ack_q", false,-1);
    tracep->declArray(c+992,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1345,"auto_in_psel", false,-1);
    tracep->declBit(c+1346,"auto_in_penable", false,-1);
    tracep->declBit(c+1327,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1334,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1326,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1589,"auto_in_pready", false,-1);
    tracep->declBit(c+1641,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1347,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+538,"spi_bundle_sck", false,-1);
    tracep->declBus(c+539,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+980,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1584,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1770,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1771,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1761,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1535,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1345,"in_psel", false,-1);
    tracep->declBit(c+1346,"in_penable", false,-1);
    tracep->declBus(c+1326,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1327,"in_pwrite", false,-1);
    tracep->declBus(c+1328,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1589,"in_pready", false,-1);
    tracep->declBus(c+1347,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1641,"in_pslverr", false,-1);
    tracep->declBit(c+538,"spi_sck", false,-1);
    tracep->declBus(c+539,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+980,"spi_mosi", false,-1);
    tracep->declBit(c+1584,"spi_miso", false,-1);
    tracep->declBit(c+665,"spi_irq_out", false,-1);
    tracep->declBus(c+1536,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1537,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1538,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1539,"wb_we_i", false,-1);
    tracep->declBit(c+1540,"wb_stb_i", false,-1);
    tracep->declBit(c+1541,"wb_cyc_i", false,-1);
    tracep->declBit(c+666,"wb_ack_o", false,-1);
    tracep->declBus(c+667,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1642,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1631,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1643,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1644,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1645,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1772,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1773,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1774,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+411,"state", false,-1, 2,0);
    tracep->declBus(c+412,"next_state", false,-1, 2,0);
    tracep->declBus(c+413,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+414,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+415,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+416,"flash_pwrite", false,-1);
    tracep->declBit(c+417,"flash_psel", false,-1);
    tracep->declBit(c+418,"flash_penable", false,-1);
    tracep->declBit(c+419,"flash_pready", false,-1);
    tracep->declBus(c+420,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1726,"Tp", false,-1, 31,0);
    tracep->declBit(c+1562,"wb_clk_i", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBus(c+1536,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1537,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+667,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1538,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1539,"wb_we_i", false,-1);
    tracep->declBit(c+1540,"wb_stb_i", false,-1);
    tracep->declBit(c+1541,"wb_cyc_i", false,-1);
    tracep->declBit(c+666,"wb_ack_o", false,-1);
    tracep->declBit(c+1641,"wb_err_o", false,-1);
    tracep->declBit(c+665,"wb_int_o", false,-1);
    tracep->declBus(c+539,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+538,"sclk_pad_o", false,-1);
    tracep->declBit(c+980,"mosi_pad_o", false,-1);
    tracep->declBit(c+1584,"miso_pad_i", false,-1);
    tracep->declBus(c+668,"divider", false,-1, 15,0);
    tracep->declBus(c+669,"ctrl", false,-1, 13,0);
    tracep->declBus(c+670,"ss", false,-1, 7,0);
    tracep->declBus(c+1542,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+671,"rx", false,-1, 127,0);
    tracep->declBit(c+675,"rx_negedge", false,-1);
    tracep->declBit(c+676,"tx_negedge", false,-1);
    tracep->declBus(c+677,"char_len", false,-1, 6,0);
    tracep->declBit(c+678,"go", false,-1);
    tracep->declBit(c+679,"lsb", false,-1);
    tracep->declBit(c+680,"ie", false,-1);
    tracep->declBit(c+681,"ass", false,-1);
    tracep->declBit(c+1543,"spi_divider_sel", false,-1);
    tracep->declBit(c+1544,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1545,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1546,"spi_ss_sel", false,-1);
    tracep->declBit(c+682,"tip", false,-1);
    tracep->declBit(c+683,"pos_edge", false,-1);
    tracep->declBit(c+684,"neg_edge", false,-1);
    tracep->declBit(c+685,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1726,"Tp", false,-1, 31,0);
    tracep->declBit(c+1562,"clk_in", false,-1);
    tracep->declBit(c+1563,"rst", false,-1);
    tracep->declBit(c+682,"enable", false,-1);
    tracep->declBit(c+678,"go", false,-1);
    tracep->declBit(c+685,"last_clk", false,-1);
    tracep->declBus(c+668,"divider", false,-1, 15,0);
    tracep->declBit(c+538,"clk_out", false,-1);
    tracep->declBit(c+683,"pos_edge", false,-1);
    tracep->declBit(c+684,"neg_edge", false,-1);
    tracep->declBus(c+686,"cnt", false,-1, 15,0);
    tracep->declBit(c+687,"cnt_zero", false,-1);
    tracep->declBit(c+688,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1726,"Tp", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"rst", false,-1);
    tracep->declBus(c+1547,"latch", false,-1, 3,0);
    tracep->declBus(c+1538,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+677,"len", false,-1, 6,0);
    tracep->declBit(c+679,"lsb", false,-1);
    tracep->declBit(c+678,"go", false,-1);
    tracep->declBit(c+683,"pos_edge", false,-1);
    tracep->declBit(c+684,"neg_edge", false,-1);
    tracep->declBit(c+675,"rx_negedge", false,-1);
    tracep->declBit(c+676,"tx_negedge", false,-1);
    tracep->declBit(c+682,"tip", false,-1);
    tracep->declBit(c+685,"last", false,-1);
    tracep->declBus(c+1537,"p_in", false,-1, 31,0);
    tracep->declArray(c+671,"p_out", false,-1, 127,0);
    tracep->declBit(c+538,"s_clk", false,-1);
    tracep->declBit(c+1584,"s_in", false,-1);
    tracep->declBit(c+980,"s_out", false,-1);
    tracep->declBus(c+689,"cnt", false,-1, 7,0);
    tracep->declArray(c+671,"data", false,-1, 127,0);
    tracep->declBus(c+690,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+691,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+692,"rx_clk", false,-1);
    tracep->declBit(c+693,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1341,"auto_in_psel", false,-1);
    tracep->declBit(c+1342,"auto_in_penable", false,-1);
    tracep->declBit(c+1327,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1263,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1326,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1343,"auto_in_pready", false,-1);
    tracep->declBit(c+1641,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1344,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1582,"uart_rx", false,-1);
    tracep->declBit(c+1583,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1341,"in_psel", false,-1);
    tracep->declBit(c+1342,"in_penable", false,-1);
    tracep->declBus(c+1326,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1343,"in_pready", false,-1);
    tracep->declBit(c+1641,"in_pslverr", false,-1);
    tracep->declBus(c+1314,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1327,"in_pwrite", false,-1);
    tracep->declBus(c+1344,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1328,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1582,"uart_rx", false,-1);
    tracep->declBit(c+1583,"uart_tx", false,-1);
    tracep->declBit(c+694,"rtsn", false,-1);
    tracep->declBit(c+1641,"ctsn", false,-1);
    tracep->declBit(c+695,"dtr_pad_o", false,-1);
    tracep->declBit(c+1641,"dsr_pad_i", false,-1);
    tracep->declBit(c+1641,"ri_pad_i", false,-1);
    tracep->declBit(c+1641,"dcd_pad_i", false,-1);
    tracep->declBit(c+696,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1548,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1549,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+421,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1550,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+697,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBus(c+1548,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1551,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1550,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1583,"stx_pad_o", false,-1);
    tracep->declBit(c+1582,"srx_pad_i", false,-1);
    tracep->declBus(c+1720,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+697,"rts_pad_o", false,-1);
    tracep->declBit(c+695,"dtr_pad_o", false,-1);
    tracep->declBit(c+696,"int_o", false,-1);
    tracep->declBit(c+698,"enable", false,-1);
    tracep->declBit(c+699,"srx_pad", false,-1);
    tracep->declBus(c+700,"ier", false,-1, 3,0);
    tracep->declBus(c+701,"iir", false,-1, 3,0);
    tracep->declBus(c+702,"fcr", false,-1, 1,0);
    tracep->declBus(c+703,"mcr", false,-1, 4,0);
    tracep->declBus(c+704,"lcr", false,-1, 7,0);
    tracep->declBus(c+705,"msr", false,-1, 7,0);
    tracep->declBus(c+706,"dl", false,-1, 15,0);
    tracep->declBus(c+707,"scratch", false,-1, 7,0);
    tracep->declBit(c+708,"start_dlc", false,-1);
    tracep->declBit(c+709,"lsr_mask_d", false,-1);
    tracep->declBit(c+710,"msi_reset", false,-1);
    tracep->declBus(c+711,"dlc", false,-1, 15,0);
    tracep->declBus(c+712,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+713,"rx_reset", false,-1);
    tracep->declBit(c+714,"tx_reset", false,-1);
    tracep->declBit(c+715,"dlab", false,-1);
    tracep->declBit(c+1646,"cts_pad_i", false,-1);
    tracep->declBit(c+1641,"dsr_pad_i", false,-1);
    tracep->declBit(c+1641,"ri_pad_i", false,-1);
    tracep->declBit(c+1641,"dcd_pad_i", false,-1);
    tracep->declBit(c+716,"loopback", false,-1);
    tracep->declBit(c+1641,"cts", false,-1);
    tracep->declBit(c+1646,"dsr", false,-1);
    tracep->declBit(c+1646,"ri", false,-1);
    tracep->declBit(c+1646,"dcd", false,-1);
    tracep->declBit(c+717,"cts_c", false,-1);
    tracep->declBit(c+718,"dsr_c", false,-1);
    tracep->declBit(c+719,"ri_c", false,-1);
    tracep->declBit(c+720,"dcd_c", false,-1);
    tracep->declBus(c+721,"lsr", false,-1, 7,0);
    tracep->declBit(c+722,"lsr0", false,-1);
    tracep->declBit(c+723,"lsr1", false,-1);
    tracep->declBit(c+724,"lsr2", false,-1);
    tracep->declBit(c+725,"lsr3", false,-1);
    tracep->declBit(c+726,"lsr4", false,-1);
    tracep->declBit(c+727,"lsr5", false,-1);
    tracep->declBit(c+728,"lsr6", false,-1);
    tracep->declBit(c+729,"lsr7", false,-1);
    tracep->declBit(c+730,"lsr0r", false,-1);
    tracep->declBit(c+731,"lsr1r", false,-1);
    tracep->declBit(c+732,"lsr2r", false,-1);
    tracep->declBit(c+733,"lsr3r", false,-1);
    tracep->declBit(c+734,"lsr4r", false,-1);
    tracep->declBit(c+735,"lsr5r", false,-1);
    tracep->declBit(c+736,"lsr6r", false,-1);
    tracep->declBit(c+737,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+738,"rls_int", false,-1);
    tracep->declBit(c+739,"rda_int", false,-1);
    tracep->declBit(c+740,"ti_int", false,-1);
    tracep->declBit(c+741,"thre_int", false,-1);
    tracep->declBit(c+742,"ms_int", false,-1);
    tracep->declBit(c+743,"tf_push", false,-1);
    tracep->declBit(c+744,"rf_pop", false,-1);
    tracep->declBus(c+1620,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+745,"rf_error_bit", false,-1);
    tracep->declBit(c+723,"rf_overrun", false,-1);
    tracep->declBit(c+746,"rf_push_pulse", false,-1);
    tracep->declBus(c+747,"rf_count", false,-1, 4,0);
    tracep->declBus(c+748,"tf_count", false,-1, 4,0);
    tracep->declBus(c+749,"tstate", false,-1, 2,0);
    tracep->declBus(c+750,"rstate", false,-1, 3,0);
    tracep->declBus(c+751,"counter_t", false,-1, 9,0);
    tracep->declBit(c+752,"thre_set_en", false,-1);
    tracep->declBus(c+753,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+754,"block_value", false,-1, 7,0);
    tracep->declBit(c+755,"serial_out", false,-1);
    tracep->declBit(c+756,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+757,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+758,"lsr0_d", false,-1);
    tracep->declBit(c+759,"lsr1_d", false,-1);
    tracep->declBit(c+760,"lsr2_d", false,-1);
    tracep->declBit(c+761,"lsr3_d", false,-1);
    tracep->declBit(c+762,"lsr4_d", false,-1);
    tracep->declBit(c+763,"lsr5_d", false,-1);
    tracep->declBit(c+764,"lsr6_d", false,-1);
    tracep->declBit(c+765,"lsr7_d", false,-1);
    tracep->declBit(c+766,"rls_int_d", false,-1);
    tracep->declBit(c+767,"thre_int_d", false,-1);
    tracep->declBit(c+768,"ms_int_d", false,-1);
    tracep->declBit(c+769,"ti_int_d", false,-1);
    tracep->declBit(c+770,"rda_int_d", false,-1);
    tracep->declBit(c+771,"rls_int_rise", false,-1);
    tracep->declBit(c+772,"thre_int_rise", false,-1);
    tracep->declBit(c+773,"ms_int_rise", false,-1);
    tracep->declBit(c+774,"ti_int_rise", false,-1);
    tracep->declBit(c+775,"rda_int_rise", false,-1);
    tracep->declBit(c+776,"rls_int_pnd", false,-1);
    tracep->declBit(c+777,"rda_int_pnd", false,-1);
    tracep->declBit(c+778,"thre_int_pnd", false,-1);
    tracep->declBit(c+779,"ms_int_pnd", false,-1);
    tracep->declBit(c+780,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1726,"Tp", false,-1, 31,0);
    tracep->declBus(c+1726,"width", false,-1, 31,0);
    tracep->declBus(c+1712,"init_value", false,-1, 0,0);
    tracep->declBit(c+1563,"rst_i", false,-1);
    tracep->declBit(c+1562,"clk_i", false,-1);
    tracep->declBit(c+1641,"stage1_rst_i", false,-1);
    tracep->declBit(c+1646,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1582,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+699,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+781,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBus(c+704,"lcr", false,-1, 7,0);
    tracep->declBit(c+744,"rf_pop", false,-1);
    tracep->declBit(c+756,"srx_pad_i", false,-1);
    tracep->declBit(c+698,"enable", false,-1);
    tracep->declBit(c+713,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+751,"counter_t", false,-1, 9,0);
    tracep->declBus(c+747,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1620,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+723,"rf_overrun", false,-1);
    tracep->declBit(c+745,"rf_error_bit", false,-1);
    tracep->declBus(c+750,"rstate", false,-1, 3,0);
    tracep->declBit(c+746,"rf_push_pulse", false,-1);
    tracep->declBus(c+782,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+783,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+784,"rshift", false,-1, 7,0);
    tracep->declBit(c+785,"rparity", false,-1);
    tracep->declBit(c+786,"rparity_error", false,-1);
    tracep->declBit(c+787,"rframing_error", false,-1);
    tracep->declBit(c+788,"rbit_in", false,-1);
    tracep->declBit(c+789,"rparity_xor", false,-1);
    tracep->declBus(c+790,"counter_b", false,-1, 7,0);
    tracep->declBit(c+791,"rf_push_q", false,-1);
    tracep->declBus(c+792,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+793,"rf_push", false,-1);
    tracep->declBit(c+794,"break_error", false,-1);
    tracep->declBit(c+795,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+796,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+797,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+798,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1648,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1713,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1714,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1715,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1716,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1717,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1718,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1719,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1720,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1721,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1722,"sr_push", false,-1, 3,0);
    tracep->declBus(c+799,"toc_value", false,-1, 9,0);
    tracep->declBus(c+800,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1775,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1776,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1725,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1777,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBit(c+746,"push", false,-1);
    tracep->declBit(c+744,"pop", false,-1);
    tracep->declBus(c+792,"data_in", false,-1, 10,0);
    tracep->declBit(c+713,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1620,"data_out", false,-1, 10,0);
    tracep->declBit(c+723,"overrun", false,-1);
    tracep->declBus(c+747,"count", false,-1, 4,0);
    tracep->declBit(c+745,"error_bit", false,-1);
    tracep->declBus(c+1621,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+801+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+817,"top", false,-1, 3,0);
    tracep->declBus(c+818,"bottom", false,-1, 3,0);
    tracep->declBus(c+819,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+820,"word0", false,-1, 2,0);
    tracep->declBus(c+821,"word1", false,-1, 2,0);
    tracep->declBus(c+822,"word2", false,-1, 2,0);
    tracep->declBus(c+823,"word3", false,-1, 2,0);
    tracep->declBus(c+824,"word4", false,-1, 2,0);
    tracep->declBus(c+825,"word5", false,-1, 2,0);
    tracep->declBus(c+826,"word6", false,-1, 2,0);
    tracep->declBus(c+827,"word7", false,-1, 2,0);
    tracep->declBus(c+828,"word8", false,-1, 2,0);
    tracep->declBus(c+829,"word9", false,-1, 2,0);
    tracep->declBus(c+830,"word10", false,-1, 2,0);
    tracep->declBus(c+831,"word11", false,-1, 2,0);
    tracep->declBus(c+832,"word12", false,-1, 2,0);
    tracep->declBus(c+833,"word13", false,-1, 2,0);
    tracep->declBus(c+834,"word14", false,-1, 2,0);
    tracep->declBus(c+835,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1725,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1761,"data_width", false,-1, 31,0);
    tracep->declBus(c+1776,"depth", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+746,"we", false,-1);
    tracep->declBus(c+817,"a", false,-1, 3,0);
    tracep->declBus(c+818,"dpra", false,-1, 3,0);
    tracep->declBus(c+836,"di", false,-1, 7,0);
    tracep->declBus(c+1621,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+422+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBus(c+704,"lcr", false,-1, 7,0);
    tracep->declBit(c+743,"tf_push", false,-1);
    tracep->declBus(c+1551,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+698,"enable", false,-1);
    tracep->declBit(c+714,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+755,"stx_pad_o", false,-1);
    tracep->declBus(c+749,"tstate", false,-1, 2,0);
    tracep->declBus(c+748,"tf_count", false,-1, 4,0);
    tracep->declBus(c+837,"counter", false,-1, 4,0);
    tracep->declBus(c+838,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+839,"shift_out", false,-1, 6,0);
    tracep->declBit(c+840,"stx_o_tmp", false,-1);
    tracep->declBit(c+841,"parity_xor", false,-1);
    tracep->declBit(c+842,"tf_pop", false,-1);
    tracep->declBit(c+843,"bit_out", false,-1);
    tracep->declBus(c+1551,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1622,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+844,"tf_overrun", false,-1);
    tracep->declBus(c+1642,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1631,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1643,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1644,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1645,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1772,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1761,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1776,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1725,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1777,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+1563,"wb_rst_i", false,-1);
    tracep->declBit(c+743,"push", false,-1);
    tracep->declBit(c+842,"pop", false,-1);
    tracep->declBus(c+1551,"data_in", false,-1, 7,0);
    tracep->declBit(c+714,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1622,"data_out", false,-1, 7,0);
    tracep->declBit(c+844,"overrun", false,-1);
    tracep->declBus(c+748,"count", false,-1, 4,0);
    tracep->declBus(c+845,"top", false,-1, 3,0);
    tracep->declBus(c+846,"bottom", false,-1, 3,0);
    tracep->declBus(c+847,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1725,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1761,"data_width", false,-1, 31,0);
    tracep->declBus(c+1776,"depth", false,-1, 31,0);
    tracep->declBit(c+1562,"clk", false,-1);
    tracep->declBit(c+743,"we", false,-1);
    tracep->declBus(c+845,"a", false,-1, 3,0);
    tracep->declBus(c+846,"dpra", false,-1, 3,0);
    tracep->declBus(c+1551,"di", false,-1, 7,0);
    tracep->declBus(c+1622,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+438+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBit(c+1332,"auto_in_psel", false,-1);
    tracep->declBit(c+1333,"auto_in_penable", false,-1);
    tracep->declBit(c+1327,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1334,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1326,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1328,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+549,"auto_in_pready", false,-1);
    tracep->declBit(c+1637,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1638,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1576,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1577,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1578,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1579,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1580,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1581,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1562,"clock", false,-1);
    tracep->declBit(c+1563,"reset", false,-1);
    tracep->declBus(c+1535,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1332,"in_psel", false,-1);
    tracep->declBit(c+1333,"in_penable", false,-1);
    tracep->declBus(c+1326,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1327,"in_pwrite", false,-1);
    tracep->declBus(c+1328,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1329,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+549,"in_pready", false,-1);
    tracep->declBus(c+1638,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1637,"in_pslverr", false,-1);
    tracep->declBus(c+1576,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1577,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1578,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1579,"vga_hsync", false,-1);
    tracep->declBit(c+1580,"vga_vsync", false,-1);
    tracep->declBit(c+1581,"vga_valid", false,-1);
    tracep->declBit(c+1552,"is_write", false,-1);
    tracep->declBus(c+1553,"addr", false,-1, 31,0);
    tracep->declBit(c+549,"ready", false,-1);
    tracep->declBus(c+848,"i", false,-1, 31,0);
    tracep->declBus(c+1778,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1779,"h_active", false,-1, 31,0);
    tracep->declBus(c+1780,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1781,"h_total", false,-1, 31,0);
    tracep->declBus(c+1707,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1782,"v_active", false,-1, 31,0);
    tracep->declBus(c+1783,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1784,"v_total", false,-1, 31,0);
    tracep->declBus(c+849,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+454,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+850,"h_valid", false,-1);
    tracep->declBit(c+455,"v_valid", false,-1);
    tracep->declBus(c+851,"h_addr", false,-1, 9,0);
    tracep->declBus(c+456,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1623,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+538,"sck", false,-1);
    tracep->declBit(c+995,"ss", false,-1);
    tracep->declBit(c+980,"mosi", false,-1);
    tracep->declBit(c+975,"miso", false,-1);
    tracep->declBus(c+976,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+977,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+978,"counter", false,-1, 2,0);
    tracep->declBit(c+979,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+538,"sck", false,-1);
    tracep->declBit(c+852,"ss", false,-1);
    tracep->declBit(c+980,"mosi", false,-1);
    tracep->declBit(c+1624,"miso", false,-1);
    tracep->declBit(c+852,"reset", false,-1);
    tracep->declBus(c+969,"state", false,-1, 2,0);
    tracep->declBus(c+970,"counter", false,-1, 7,0);
    tracep->declBus(c+971,"cmd", false,-1, 7,0);
    tracep->declBus(c+972,"addr", false,-1, 23,0);
    tracep->declBus(c+973,"data", false,-1, 31,0);
    tracep->declBit(c+974,"ren", false,-1);
    tracep->declBus(c+1625,"rdata", false,-1, 31,0);
    tracep->declBus(c+1626,"raddr", false,-1, 31,0);
    tracep->declBus(c+1627,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+538,"clock", false,-1);
    tracep->declBit(c+974,"valid", false,-1);
    tracep->declBus(c+971,"cmd", false,-1, 7,0);
    tracep->declBus(c+1626,"addr", false,-1, 31,0);
    tracep->declBus(c+1625,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1558,"sck", false,-1);
    tracep->declBit(c+1559,"ce_n", false,-1);
    tracep->declBus(c+1585,"dio", false,-1, 3,0);
    tracep->declBit(c+1559,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+1013,"cmd", false,-1, 7,0);
    tracep->declBus(c+1014,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1015+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1628,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1629,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+1019,"ren", false,-1);
    tracep->declBit(c+1020,"wen", false,-1);
    tracep->declBus(c+1021,"len", false,-1, 7,0);
    tracep->declBus(c+1630,"rdata", false,-1, 31,0);
    tracep->declBus(c+1022,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1558,"clock", false,-1);
    tracep->declBit(c+1019,"ren", false,-1);
    tracep->declBit(c+1020,"wen", false,-1);
    tracep->declBus(c+1013,"cmd", false,-1, 7,0);
    tracep->declBus(c+1022,"saddr", false,-1, 31,0);
    tracep->declBus(c+1630,"rdata", false,-1, 31,0);
    tracep->declBus(c+1023,"wdata", false,-1, 31,0);
    tracep->declBus(c+1021,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+540,"cke", false,-1);
    tracep->declBit(c+981,"cs", false,-1);
    tracep->declBit(c+982,"ras", false,-1);
    tracep->declBit(c+983,"cas", false,-1);
    tracep->declBit(c+984,"we", false,-1);
    tracep->declBus(c+985,"a", false,-1, 12,0);
    tracep->declBus(c+996,"ba", false,-1, 1,0);
    tracep->declBus(c+997,"dqm", false,-1, 1,0);
    tracep->declBus(c+1011,"dq", false,-1, 15,0);
    tracep->declBit(c+998,"reset", false,-1);
    tracep->declBus(c+859,"state", false,-1, 2,0);
    tracep->declBus(c+860,"counter", false,-1, 7,0);
    tracep->declBus(c+861,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1785,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+862,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+863,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+999,"nop", false,-1);
    tracep->declBit(c+1000,"active", false,-1);
    tracep->declBit(c+1001,"precharge", false,-1);
    tracep->declBit(c+1002,"read", false,-1);
    tracep->declBit(c+1003,"write", false,-1);
    tracep->declBit(c+1004,"burstterm", false,-1);
    tracep->declBit(c+1005,"autorefresh", false,-1);
    tracep->declBit(c+1006,"mode", false,-1);
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
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+540,"cke", false,-1);
    tracep->declBit(c+981,"cs", false,-1);
    tracep->declBit(c+982,"ras", false,-1);
    tracep->declBit(c+983,"cas", false,-1);
    tracep->declBit(c+984,"we", false,-1);
    tracep->declBus(c+985,"a", false,-1, 12,0);
    tracep->declBus(c+996,"ba", false,-1, 1,0);
    tracep->declBus(c+1007,"dqm", false,-1, 1,0);
    tracep->declBus(c+1012,"dq", false,-1, 15,0);
    tracep->declBit(c+998,"reset", false,-1);
    tracep->declBus(c+880,"state", false,-1, 2,0);
    tracep->declBus(c+881,"counter", false,-1, 7,0);
    tracep->declBus(c+882,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1786,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+883,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+884,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+999,"nop", false,-1);
    tracep->declBit(c+1000,"active", false,-1);
    tracep->declBit(c+1001,"precharge", false,-1);
    tracep->declBit(c+1002,"read", false,-1);
    tracep->declBit(c+1003,"write", false,-1);
    tracep->declBit(c+1004,"burstterm", false,-1);
    tracep->declBit(c+1005,"autorefresh", false,-1);
    tracep->declBit(c+1006,"mode", false,-1);
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
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+540,"cke", false,-1);
    tracep->declBit(c+981,"cs", false,-1);
    tracep->declBit(c+982,"ras", false,-1);
    tracep->declBit(c+983,"cas", false,-1);
    tracep->declBit(c+984,"we", false,-1);
    tracep->declBus(c+985,"a", false,-1, 12,0);
    tracep->declBus(c+996,"ba", false,-1, 1,0);
    tracep->declBus(c+1008,"dqm", false,-1, 1,0);
    tracep->declBus(c+1011,"dq", false,-1, 15,0);
    tracep->declBit(c+998,"reset", false,-1);
    tracep->declBus(c+901,"state", false,-1, 2,0);
    tracep->declBus(c+902,"counter", false,-1, 7,0);
    tracep->declBus(c+903,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1787,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+904,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+905,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+999,"nop", false,-1);
    tracep->declBit(c+1000,"active", false,-1);
    tracep->declBit(c+1001,"precharge", false,-1);
    tracep->declBit(c+1002,"read", false,-1);
    tracep->declBit(c+1003,"write", false,-1);
    tracep->declBit(c+1004,"burstterm", false,-1);
    tracep->declBit(c+1005,"autorefresh", false,-1);
    tracep->declBit(c+1006,"mode", false,-1);
    tracep->declBus(c+906,"test", false,-1, 15,0);
    tracep->declBus(c+907,"test1", false,-1, 15,0);
    tracep->declBus(c+908,"sense", false,-1, 31,0);
    tracep->declBit(c+909,"write_burst_mode", false,-1);
    tracep->declBus(c+910,"op_mode", false,-1, 1,0);
    tracep->declBus(c+911,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+912,"burst_type", false,-1);
    tracep->declBus(c+913,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+914,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+915,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+916,"bank", false,-1, 1,0);
    tracep->declBus(c+917,"row", false,-1, 12,0);
    tracep->declBus(c+918,"column", false,-1, 8,0);
    tracep->declBus(c+919,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+920,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+921,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1586,"clk", false,-1);
    tracep->declBit(c+540,"cke", false,-1);
    tracep->declBit(c+981,"cs", false,-1);
    tracep->declBit(c+982,"ras", false,-1);
    tracep->declBit(c+983,"cas", false,-1);
    tracep->declBit(c+984,"we", false,-1);
    tracep->declBus(c+985,"a", false,-1, 12,0);
    tracep->declBus(c+996,"ba", false,-1, 1,0);
    tracep->declBus(c+1009,"dqm", false,-1, 1,0);
    tracep->declBus(c+1012,"dq", false,-1, 15,0);
    tracep->declBit(c+998,"reset", false,-1);
    tracep->declBus(c+922,"state", false,-1, 2,0);
    tracep->declBus(c+923,"counter", false,-1, 7,0);
    tracep->declBus(c+924,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1788,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+925,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+926,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+999,"nop", false,-1);
    tracep->declBit(c+1000,"active", false,-1);
    tracep->declBit(c+1001,"precharge", false,-1);
    tracep->declBit(c+1002,"read", false,-1);
    tracep->declBit(c+1003,"write", false,-1);
    tracep->declBit(c+1004,"burstterm", false,-1);
    tracep->declBit(c+1005,"autorefresh", false,-1);
    tracep->declBit(c+1006,"mode", false,-1);
    tracep->declBus(c+927,"test", false,-1, 15,0);
    tracep->declBus(c+928,"test1", false,-1, 15,0);
    tracep->declBus(c+929,"sense", false,-1, 31,0);
    tracep->declBit(c+930,"write_burst_mode", false,-1);
    tracep->declBus(c+931,"op_mode", false,-1, 1,0);
    tracep->declBus(c+932,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+933,"burst_type", false,-1);
    tracep->declBus(c+934,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+935,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+936,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+937,"bank", false,-1, 1,0);
    tracep->declBus(c+938,"row", false,-1, 12,0);
    tracep->declBus(c+939,"column", false,-1, 8,0);
    tracep->declBus(c+940,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+941,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+942,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id),4);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber25),4);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_id),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_id),32);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex),7);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex),3);
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex),32);
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_arready));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid));
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[0]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[1]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[2]),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[3]),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[4]),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[5]),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[6]),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[7]),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[0]),29);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[1]),29);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[2]),29);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[3]),29);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[4]),29);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[5]),29);
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[6]),29);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[7]),29);
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__enable));
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk2__DOT__a),32);
    bufp->fullQData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid_reg));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid_enable));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber25));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__isCHazard_reg));
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+398,((((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
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
    bufp->fullIData(oldp+399,((((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
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
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+456,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullBit(oldp+457,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low)))));
    bufp->fullBit(oldp+458,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low)))));
    bufp->fullBit(oldp+459,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low)))));
    bufp->fullBit(oldp+460,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low)))));
    bufp->fullBit(oldp+461,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low)))));
    bufp->fullBit(oldp+462,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low)))));
    bufp->fullCData(oldp+463,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+464,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+465,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+466,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->fullBit(oldp+467,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+468,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ls),32);
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ls),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ls),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ls),32);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls),4);
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ls));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state));
    bufp->fullQData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__done_reg));
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [2U][0U]),32);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [2U][1U]),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [2U][2U]),32);
    bufp->fullIData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [2U][3U]),32);
    bufp->fullIData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [3U][0U]),32);
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [3U][1U]),32);
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [3U][2U]),32);
    bufp->fullIData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [3U][3U]),32);
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [0U][0U]),27);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [0U][1U]),27);
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [0U][2U]),27);
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [0U][3U]),27);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [1U][0U]),27);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [1U][1U]),27);
    bufp->fullIData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [1U][2U]),27);
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [1U][3U]),27);
    bufp->fullIData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [2U][0U]),27);
    bufp->fullIData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [2U][1U]),27);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [2U][2U]),27);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [2U][3U]),27);
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [3U][0U]),27);
    bufp->fullIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [3U][1U]),27);
    bufp->fullIData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [3U][2U]),27);
    bufp->fullIData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [3U][3U]),27);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),4);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),4);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),4);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),4);
    bufp->fullIData(oldp+527,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                               >> 5U)),27);
    bufp->fullBit(oldp+528,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                   >> 4U))));
    bufp->fullCData(oldp+529,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                     >> 2U))),2);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit),2);
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state));
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+554,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+564,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+566,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+596,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+597,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+600,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+601,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+606,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+610,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+625,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+626,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+628,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+629,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+630,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+631,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+632,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+640,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+675,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+676,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+677,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+678,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+679,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+680,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+681,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+685,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+687,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+688,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+690,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+694,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+695,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+697,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+715,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+716,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+717,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+718,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+719,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+720,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+721,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+724,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+725,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+726,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+745,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+752,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+771,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+772,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+773,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+774,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+775,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+794,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+795,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+796,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+797,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+798,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+800,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+819,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+836,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+847,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+851,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+862,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+863,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+864,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+866,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+867,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+868,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+869,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+870,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+871,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+872,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+873,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+875,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+876,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+882,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+883,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+884,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+885,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+886,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+887,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+888,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+889,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+890,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+891,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+892,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+893,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+894,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+896,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+897,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+903,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+904,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+905,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+906,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+907,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+908,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+909,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+910,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+911,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+912,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+913,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+914,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+915,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+917,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+918,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+924,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+925,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+926,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+927,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+928,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+929,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+930,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+931,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+932,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+933,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+934,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+935,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+936,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+938,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+939,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullBit(oldp+943,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+944,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullIData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),4);
    bufp->fullBit(oldp+949,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23))));
    bufp->fullIData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_id),32);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_id));
    bufp->fullIData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),4);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex),32);
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullIData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullCData(oldp+962,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)),7);
    bufp->fullCData(oldp+963,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)),5);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IDU____pinNumber23),4);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+972,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+973,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+974,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+981,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+982,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+983,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+984,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+996,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+1001,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+1010,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                 << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+1011,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+1012,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+1023,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [0U])))),32);
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ls),32);
    bufp->fullIData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ls),32);
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrsw_ls),32);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls),4);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),3);
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullBit(oldp+1047,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                    >> 2U))));
    bufp->fullBit(oldp+1048,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls))));
    bufp->fullBit(oldp+1049,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                    >> 1U))));
    bufp->fullBit(oldp+1050,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                    >> 3U))));
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__snpc),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+1061,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+1065,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en)
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en));
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),7);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_id),4);
    bufp->fullBit(oldp+1071,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ex),32);
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrsw_ex),32);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex),4);
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wen_ex));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_ren_ex));
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex),32);
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex),32);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wmask_ex),4);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awsize_ex),3);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arsize_ex),3);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low),32);
    bufp->fullIData(oldp+1085,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                >> 3U)),29);
    bufp->fullBit(oldp+1086,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                    >> 2U))));
    bufp->fullIData(oldp+1087,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                >> 3U)),29);
    bufp->fullBit(oldp+1088,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    >> 2U))));
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit),4);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__already),4);
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+1092,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullIData(oldp+1094,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel),4);
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+1099,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+1100,(((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h46116b93__0
                                 : 0U)),32);
    bufp->fullIData(oldp+1101,(((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha075a6b3__0))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low
                                     : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha075a6b3__0))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low 
                                            << 8U) : 
                                        ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha075a6b3__0))
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low 
                                             << 0x10U)
                                          : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha075a6b3__0))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rdata2_low 
                                                 << 0x18U)
                                              : 0U))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1102,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h9e98d6f6__0) 
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
    bufp->fullIData(oldp+1103,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h46116b93__0
                                 : 0U)),32);
    bufp->fullCData(oldp+1104,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h97067d1c__0)
                                 ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                          ? 1U : 2U))),3);
    bufp->fullCData(oldp+1105,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                 ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he5392671__0))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1106,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1107,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullIData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullIData(oldp+1110,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1111,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1112,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+1114,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),7);
    bufp->fullCData(oldp+1115,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
                                 | ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                    | ((0x13U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                       | ((0x73U == 
                                           (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                          | (0x33U 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if))))))
                                 ? (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 7U))
                                 : 0U)),4);
    bufp->fullCData(oldp+1116,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1117,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h2d28ace5__0) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c457aa__0))
                                 ? (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0xfU))
                                 : 0U)),4);
    bufp->fullCData(oldp+1118,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c457aa__0)
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x14U)
                                         : (((0x73U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h13049c0c__0))
                                             ? 0xfU
                                             : 0U)))),4);
    bufp->fullIData(oldp+1119,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1120,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+1121,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1122,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1123,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1125,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
                              | ((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                 | ((0x73U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                    | ((0x33U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if))))))));
    bufp->fullCData(oldp+1127,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h59b15ea1__0) 
                                 << 3U) | ((((0x73U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                             & ((0x342U 
                                                 == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h13049c0c__0))) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h505170a1__0) 
                                               << 1U) 
                                              | ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                                 & ((0x341U 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h13049c0c__0))))))),4);
    bufp->fullBit(oldp+1128,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata_reg),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1136,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_hf778c209__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullCData(oldp+1151,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7e9f410b__0))),4);
    bufp->fullIData(oldp+1152,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0)),32);
    bufp->fullCData(oldp+1153,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4840cf51__0))),8);
    bufp->fullCData(oldp+1154,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0fe8df31__0))),3);
    bufp->fullCData(oldp+1155,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd5e88dba__0))),2);
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullCData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1170,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1172,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1174,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1190,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1191,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1192,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1193,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1194,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1195,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1196,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1200,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h51ea31f9__0))));
    bufp->fullBit(oldp+1201,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf6e76472__0))));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1206,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7e9f410b__0))))),16);
    bufp->fullSData(oldp+1207,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)))),16);
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1217,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1218,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1219,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1220,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1225,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1227,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1228,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullIData(oldp+1236,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h9db0629e__0 
                                        >> 0x20U))),32);
    bufp->fullCData(oldp+1237,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4840cf51__0) 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1238,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7e9f410b__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1239,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0fe8df31__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1240,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd5e88dba__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1241,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h51ea31f9__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1242,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf6e76472__0) 
                                    >> 1U))));
    bufp->fullIData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),2);
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m),2);
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1256,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1257,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1259,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1262,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1263,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullCData(oldp+1264,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0fe8df31__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1265,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize)
                                 : 0U)),3);
    bufp->fullIData(oldp+1266,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata
                                 : 0U)),32);
    bufp->fullCData(oldp+1267,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb)
                                 : 0U)),4);
    bufp->fullBit(oldp+1268,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast))));
    bufp->fullBit(oldp+1269,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1270,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1271,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1272,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1273,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1274,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1275,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1276,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1277,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1279,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1280,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1281,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1282,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1283,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1284,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1285,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1286,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1287,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1288,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1289,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1290,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1291,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1292,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1293,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1294,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1295,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1297,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1298,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1299,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1300,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1301,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1302,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1303,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1304,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))
                                 : 0U)),4);
    bufp->fullBit(oldp+1305,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1306,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullIData(oldp+1307,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1308,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)
                                 : 0U)),4);
    bufp->fullCData(oldp+1309,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))
                                 : 0U)),4);
    bufp->fullBit(oldp+1310,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullBit(oldp+1311,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+1312,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+1313,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullIData(oldp+1314,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1315,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1316,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1317,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1320,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1321,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1322,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1326,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1331,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1332,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1333,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1335,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1337,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1338,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1340,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1343,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1344,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1345,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1350,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1353,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1358,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1360,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1361,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullSData(oldp+1413,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1414,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1436,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1437,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1459,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1460,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1461,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1462,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1463,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1464,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1465,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1466,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1467,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1468,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1469,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1470,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1471,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1472,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1473,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1474,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1475,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1476,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1477,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1478,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1479,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1480,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1481,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1482,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1483,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1484,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1485,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1486,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1487,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1488,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1489,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1490,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid));
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1518,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1523,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1527,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1531,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1532,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1533,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1544,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1546,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1553,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isRAW));
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1562,(vlSelf->clock));
    bufp->fullBit(oldp+1563,(vlSelf->reset));
    bufp->fullSData(oldp+1564,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1565,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1566,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1567,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1568,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1569,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1570,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1571,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1572,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1573,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1574,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1575,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1576,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1577,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1578,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1579,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1580,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1581,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1582,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1583,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1584,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1585,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1586,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1587,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1588,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1589,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1591,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1592,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullBit(oldp+1593,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullIData(oldp+1594,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1595,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1596,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullCData(oldp+1597,((3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
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
    bufp->fullIData(oldp+1598,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1599,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1600,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1602,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullIData(oldp+1603,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex
                                 : 0U)),32);
    bufp->fullCData(oldp+1604,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullCData(oldp+1605,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullIData(oldp+1606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
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
    bufp->fullIData(oldp+1607,((((- (IData)((0x2000000U 
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
    bufp->fullIData(oldp+1608,(((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
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
    bufp->fullBit(oldp+1609,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                              & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullIData(oldp+1610,((((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                 & (0x341U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h505170a1__0)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus
                                     : (((0x73U == 
                                          (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                         & (0x342U 
                                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h59b15ea1__0)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec
                                             : 0U))))),32);
    bufp->fullBit(oldp+1611,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid))));
    bufp->fullIData(oldp+1612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex)),32);
    bufp->fullCData(oldp+1613,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullIData(oldp+1614,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1617,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1618,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1619,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullSData(oldp+1620,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1623,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1624,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1626,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1629,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1631,(1U),3);
    bufp->fullCData(oldp+1632,(0U),2);
    bufp->fullCData(oldp+1633,(1U),2);
    bufp->fullCData(oldp+1634,(2U),2);
    bufp->fullCData(oldp+1635,(3U),2);
    bufp->fullSData(oldp+1636,(0xaU),11);
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1641,(0U));
    bufp->fullCData(oldp+1642,(0U),3);
    bufp->fullCData(oldp+1643,(2U),3);
    bufp->fullCData(oldp+1644,(3U),3);
    bufp->fullCData(oldp+1645,(4U),3);
    bufp->fullBit(oldp+1646,(1U));
    bufp->fullBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1648,(0U),4);
    bufp->fullIData(oldp+1649,(0U),32);
    bufp->fullCData(oldp+1650,(0U),8);
    bufp->fullBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1661,(0U),32);
    bufp->fullCData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bid),4);
    bufp->fullCData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bresp),2);
    bufp->fullCData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_awready));
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wready));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bvalid));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullIData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awaddr),32);
    bufp->fullIData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wdata),32);
    bufp->fullCData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wstrb),4);
    bufp->fullCData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awlen),8);
    bufp->fullCData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awid),4);
    bufp->fullCData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awsize),3);
    bufp->fullCData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awburst),2);
    bufp->fullBit(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awvalid));
    bufp->fullBit(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wvalid));
    bufp->fullBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_bready));
    bufp->fullBit(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wlast));
    bufp->fullCData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awburst_ex),2);
    bufp->fullCData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arburst_ex),2);
    bufp->fullCData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awaddr),32);
    bufp->fullIData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wdata),32);
    bufp->fullCData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wstrb),4);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awlen),8);
    bufp->fullCData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awid),4);
    bufp->fullCData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid),4);
    bufp->fullCData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid),4);
    bufp->fullCData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awsize),3);
    bufp->fullCData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awburst),2);
    bufp->fullCData(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp),2);
    bufp->fullCData(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp),2);
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awvalid));
    bufp->fullBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awready));
    bufp->fullBit(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wvalid));
    bufp->fullBit(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready));
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bvalid));
    bufp->fullBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bready));
    bufp->fullBit(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wlast));
    bufp->fullBit(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast));
    bufp->fullIData(oldp+1706,(3U),32);
    bufp->fullIData(oldp+1707,(2U),32);
    bufp->fullIData(oldp+1708,(4U),32);
    bufp->fullIData(oldp+1709,(0x2000000U),32);
    bufp->fullIData(oldp+1710,(0x2000004U),32);
    bufp->fullBit(oldp+1711,(0U));
    bufp->fullBit(oldp+1712,(1U));
    bufp->fullCData(oldp+1713,(1U),4);
    bufp->fullCData(oldp+1714,(2U),4);
    bufp->fullCData(oldp+1715,(3U),4);
    bufp->fullCData(oldp+1716,(4U),4);
    bufp->fullCData(oldp+1717,(5U),4);
    bufp->fullCData(oldp+1718,(6U),4);
    bufp->fullCData(oldp+1719,(7U),4);
    bufp->fullCData(oldp+1720,(8U),4);
    bufp->fullCData(oldp+1721,(9U),4);
    bufp->fullCData(oldp+1722,(0xaU),4);
    bufp->fullCData(oldp+1723,(0xbU),4);
    bufp->fullCData(oldp+1724,(0xcU),4);
    bufp->fullIData(oldp+1725,(4U),32);
    bufp->fullIData(oldp+1726,(1U),32);
    bufp->fullIData(oldp+1727,(2U),32);
    bufp->fullIData(oldp+1728,(0x20U),32);
    bufp->fullIData(oldp+1729,(0x1000000U),32);
    bufp->fullIData(oldp+1730,(0x1000004U),32);
    bufp->fullIData(oldp+1731,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1732,(0x1800U),32);
    bufp->fullIData(oldp+1733,(0x79737978U),32);
    bufp->fullCData(oldp+1734,(4U),8);
    bufp->fullCData(oldp+1735,(8U),8);
    bufp->fullCData(oldp+1736,(3U),8);
    bufp->fullCData(oldp+1737,(0x9fU),8);
    bufp->fullCData(oldp+1738,(0x25U),8);
    bufp->fullCData(oldp+1739,(0xdU),8);
    bufp->fullCData(oldp+1740,(0x99U),8);
    bufp->fullCData(oldp+1741,(0x49U),8);
    bufp->fullCData(oldp+1742,(0x41U),8);
    bufp->fullCData(oldp+1743,(0x1fU),8);
    bufp->fullCData(oldp+1744,(1U),8);
    bufp->fullCData(oldp+1745,(9U),8);
    bufp->fullCData(oldp+1746,(0x11U),8);
    bufp->fullCData(oldp+1747,(0xc1U),8);
    bufp->fullCData(oldp+1748,(0x63U),8);
    bufp->fullCData(oldp+1749,(0x85U),8);
    bufp->fullCData(oldp+1750,(0x61U),8);
    bufp->fullCData(oldp+1751,(0x71U),8);
    bufp->fullCData(oldp+1752,(0xf0U),8);
    bufp->fullCData(oldp+1753,(0xe0U),8);
    bufp->fullCData(oldp+1754,(0x15U),8);
    bufp->fullCData(oldp+1755,(0xebU),8);
    bufp->fullCData(oldp+1756,(0x38U),8);
    bufp->fullIData(oldp+1757,(0x64U),32);
    bufp->fullIData(oldp+1758,(0x18U),32);
    bufp->fullIData(oldp+1759,(9U),32);
    bufp->fullIData(oldp+1760,(6U),32);
    bufp->fullIData(oldp+1761,(8U),32);
    bufp->fullIData(oldp+1762,(0xdU),32);
    bufp->fullIData(oldp+1763,(0x2000U),32);
    bufp->fullIData(oldp+1764,(0x2710U),32);
    bufp->fullIData(oldp+1765,(0x30cU),32);
    bufp->fullSData(oldp+1766,(0x20U),13);
    bufp->fullIData(oldp+1767,(0xaU),32);
    bufp->fullIData(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1769,(0x11U),32);
    bufp->fullIData(oldp+1770,(0x30000000U),32);
    bufp->fullIData(oldp+1771,(0x3fffffffU),32);
    bufp->fullCData(oldp+1772,(5U),3);
    bufp->fullCData(oldp+1773,(6U),3);
    bufp->fullCData(oldp+1774,(7U),3);
    bufp->fullIData(oldp+1775,(0xbU),32);
    bufp->fullIData(oldp+1776,(0x10U),32);
    bufp->fullIData(oldp+1777,(5U),32);
    bufp->fullIData(oldp+1778,(0x60U),32);
    bufp->fullIData(oldp+1779,(0x90U),32);
    bufp->fullIData(oldp+1780,(0x310U),32);
    bufp->fullIData(oldp+1781,(0x320U),32);
    bufp->fullIData(oldp+1782,(0x23U),32);
    bufp->fullIData(oldp+1783,(0x203U),32);
    bufp->fullIData(oldp+1784,(0x20dU),32);
    bufp->fullSData(oldp+1785,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1786,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1787,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1788,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
